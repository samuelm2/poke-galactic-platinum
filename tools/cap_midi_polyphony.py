#!/usr/bin/env python3
"""
Reduce GBA voice consumption by capping per-channel polyphony in a MIDI.

When a channel would exceed its polyphony cap, the oldest active note is
released to make room. Preserves every channel's character — just thins
chord stacks and overlapping notes.

Usage:
    # Default cap: every channel limited to 2 simultaneous notes
    python tools/cap_midi_polyphony.py in.mid out.mid

    # Per-channel caps (channel:cap, comma-separated; defaults to 2 if not specified)
    python tools/cap_midi_polyphony.py in.mid out.mid --caps 3:1,8:1,5:2

    # Analyze without writing
    python tools/cap_midi_polyphony.py in.mid
"""
import struct
import sys
import argparse


def vlq_read(data, pos):
    val = 0
    while True:
        b = data[pos]; pos += 1
        val = (val << 7) | (b & 0x7F)
        if not (b & 0x80): break
    return val, pos


def vlq_write(val):
    if val == 0:
        return bytes([0])
    out = []
    while val:
        out.append(val & 0x7F)
        val >>= 7
    out.reverse()
    for i in range(len(out) - 1):
        out[i] |= 0x80
    return bytes(out)


def parse_track(data, ts, te):
    p = ts
    abs_tick = 0
    last_status = 0
    events = []
    while p < te:
        dt, p = vlq_read(data, p)
        abs_tick += dt
        b = data[p]
        if b & 0x80:
            status = b; p += 1
        else:
            status = last_status
        last_status = status
        st_hi = status & 0xF0
        if st_hi in (0x80, 0x90, 0xA0, 0xB0, 0xE0):
            ev = bytes([status, data[p], data[p+1]]); p += 2
        elif st_hi in (0xC0, 0xD0):
            ev = bytes([status, data[p]]); p += 1
        elif status == 0xFF:
            mtype = data[p]; p += 1
            mlen, p = vlq_read(data, p)
            ev = bytes([0xFF, mtype]) + vlq_write(mlen) + data[p:p+mlen]
            p += mlen
        elif status in (0xF0, 0xF7):
            mlen, p = vlq_read(data, p)
            ev = bytes([status]) + vlq_write(mlen) + data[p:p+mlen]
            p += mlen
        else:
            print(f'unknown status 0x{status:02x}', file=sys.stderr)
            return events
        events.append((abs_tick, ev))
    return events


def write_track(events):
    out = bytearray()
    last_tick = 0
    for abs_tick, ev in events:
        delta = abs_tick - last_tick
        last_tick = abs_tick
        out += vlq_write(delta)
        out += ev
    return bytes(out)


def cap_track_polyphony(events, caps, default_cap):
    """
    Walk events in order; when a note-on would exceed channel's cap,
    inject a note-off for the oldest active note in that channel.
    """
    # active[ch] = list of (abs_tick_started, note) FIFO
    active = {ch: [] for ch in range(16)}
    out = []

    for abs_tick, ev in events:
        status = ev[0]
        st_hi = status & 0xF0
        ch = status & 0x0F if 0x80 <= status <= 0xEF else None

        if ch is not None and st_hi == 0x90 and ev[2] != 0:  # note-on
            note = ev[1]
            cap = caps.get(ch, default_cap)
            # If at cap, emit a synthesized note-off for oldest, same tick
            while len(active[ch]) >= cap:
                old_start, old_note = active[ch].pop(0)
                # synth note-off at this tick (just before the new note-on)
                noff = bytes([0x80 | ch, old_note, 0])
                out.append((abs_tick, noff))
            active[ch].append((abs_tick, note))
            out.append((abs_tick, ev))

        elif ch is not None and (st_hi == 0x80 or (st_hi == 0x90 and ev[2] == 0)):
            # note-off (real or zero-velocity note-on)
            note = ev[1]
            # remove from active list (first match)
            for i, (s, n) in enumerate(active[ch]):
                if n == note:
                    active[ch].pop(i)
                    out.append((abs_tick, ev))
                    break
            else:
                # was already culled — drop the note-off (it's stale)
                pass

        else:
            out.append((abs_tick, ev))

    return out


def measure_concurrency(data):
    hdr_len = struct.unpack('>I', data[4:8])[0]
    fmt, ntrk, div = struct.unpack('>HHH', data[8:14])
    pos = 8 + hdr_len
    events = []
    seq = 0
    for tr in range(ntrk):
        if data[pos:pos+4] != b'MTrk': break
        tlen = struct.unpack('>I', data[pos+4:pos+8])[0]
        for abs_tick, ev in parse_track(data, pos+8, pos+8+tlen):
            status = ev[0]
            st_hi = status & 0xF0
            if st_hi == 0x90 and len(ev) >= 3 and ev[2] != 0:
                events.append((abs_tick, seq, 'on', status & 0xF, ev[1])); seq += 1
            elif st_hi == 0x80 or (st_hi == 0x90 and len(ev) >= 3 and ev[2] == 0):
                events.append((abs_tick, seq, 'off', status & 0xF, ev[1])); seq += 1
        pos += 8 + tlen
    # Preserve original file order at same tick (don't reorder off-vs-on within a tick)
    events.sort(key=lambda e: (e[0], e[1]))
    active = set(); maxn = 0
    for t, _, kind, ch, note in events:
        if kind == 'on': active.add((ch, note))
        else: active.discard((ch, note))
        if len(active) > maxn: maxn = len(active)
    return maxn


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('input')
    ap.add_argument('output', nargs='?')
    ap.add_argument('--caps', help='per-channel caps, e.g. "3:1,5:2,8:1"')
    ap.add_argument('--default-cap', type=int, default=2)
    args = ap.parse_args()

    with open(args.input, 'rb') as f: data = f.read()

    before = measure_concurrency(data)
    print(f'Max concurrent notes (before): {before}')

    if not args.output:
        return

    caps = {}
    if args.caps:
        for spec in args.caps.split(','):
            ch_s, cap_s = spec.split(':')
            caps[int(ch_s)] = int(cap_s)

    hdr_len = struct.unpack('>I', data[4:8])[0]
    fmt, ntrk, div = struct.unpack('>HHH', data[8:14])
    pos = 8 + hdr_len

    out = bytearray()
    out += b'MThd' + struct.pack('>I', 6) + struct.pack('>HHH', fmt, ntrk, div)

    for tr in range(ntrk):
        if data[pos:pos+4] != b'MTrk': break
        tlen = struct.unpack('>I', data[pos+4:pos+8])[0]
        evs = parse_track(data, pos+8, pos+8+tlen)
        new_evs = cap_track_polyphony(evs, caps, args.default_cap)
        body = write_track(new_evs)
        out += b'MTrk' + struct.pack('>I', len(body)) + body
        pos += 8 + tlen

    with open(args.output, 'wb') as f: f.write(bytes(out))

    after = measure_concurrency(bytes(out))
    print(f'Max concurrent notes (after):  {after}')
    print(f'Wrote {args.output} ({len(out)} bytes)')


if __name__ == '__main__':
    main()

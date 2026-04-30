#!/usr/bin/env python3
"""
Strip specified MIDI channels from a Format 0 or Format 1 MIDI file
to reduce polyphony for GBA (which has 8-voice cap).

Usage:
    python tools/strip_midi_channels.py <input.mid> <output.mid> --keep 0,1,2,3,4,7,8,9
    python tools/strip_midi_channels.py <input.mid> <output.mid> --drop 5,6
    python tools/strip_midi_channels.py <input.mid>  (analysis only — print channel stats)
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


def parse_track_events(data, track_start, track_end):
    """Yield (abs_tick, event_bytes_with_running_status_resolved) tuples."""
    p = track_start
    abs_tick = 0
    last_status = 0
    events = []
    while p < track_end:
        dt, p = vlq_read(data, p)
        abs_tick += dt
        b = data[p]
        if b & 0x80:
            status = b
            p_status = p
            p += 1
        else:
            status = last_status
            p_status = None  # event uses running status
        last_status = status
        st_hi = status & 0xF0

        if st_hi in (0x80, 0x90, 0xA0, 0xB0, 0xE0):  # 2-byte data
            ev_data = bytes([status, data[p], data[p+1]])
            p += 2
        elif st_hi in (0xC0, 0xD0):  # 1-byte data
            ev_data = bytes([status, data[p]])
            p += 1
        elif status == 0xFF:  # meta
            mtype = data[p]; p += 1
            mlen, p = vlq_read(data, p)
            payload = data[p:p+mlen]
            p += mlen
            ev_data = bytes([0xFF, mtype]) + vlq_write(mlen) + payload
        elif status in (0xF0, 0xF7):  # sysex
            mlen, p = vlq_read(data, p)
            payload = data[p:p+mlen]
            p += mlen
            ev_data = bytes([status]) + vlq_write(mlen) + payload
        else:
            print(f'unknown status 0x{status:02x} at offset {p_status}', file=sys.stderr)
            return events
        events.append((abs_tick, ev_data))
    return events


def write_track(events, prev_status_pref=False):
    """Convert (abs_tick, ev_bytes) list back into a MTrk chunk body."""
    out = bytearray()
    last_tick = 0
    for abs_tick, ev_bytes in events:
        delta = abs_tick - last_tick
        last_tick = abs_tick
        out += vlq_write(delta)
        out += ev_bytes
    return bytes(out)


def channel_of(ev):
    """Return MIDI channel of event, or None."""
    status = ev[0]
    if 0x80 <= status <= 0xEF:
        return status & 0x0F
    return None


def analyze(data):
    hdr_len = struct.unpack('>I', data[4:8])[0]
    fmt, ntrk, div = struct.unpack('>HHH', data[8:14])
    print(f'MIDI format={fmt} tracks={ntrk} ticks/quarter={div}')
    pos = 8 + hdr_len

    ch_notecount = {}
    ch_program = {}
    track_events_all = []
    for tr in range(ntrk):
        if data[pos:pos+4] != b'MTrk':
            print(f'Track {tr}: bad header'); break
        tlen = struct.unpack('>I', data[pos+4:pos+8])[0]
        evs = parse_track_events(data, pos+8, pos+8+tlen)
        track_events_all.append(evs)
        for abs_tick, ev in evs:
            status = ev[0]
            st_hi = status & 0xF0
            ch = status & 0x0F
            if st_hi == 0xC0:
                ch_program[ch] = ev[1]
            elif st_hi == 0x90 and len(ev) >= 3 and ev[2] != 0:
                ch_notecount[ch] = ch_notecount.get(ch, 0) + 1
        pos += 8 + tlen

    print('\n  Ch | Prog | Note-on count')
    print('-----+------+---------------')
    for ch in sorted(set(ch_notecount.keys()) | set(ch_program.keys())):
        prog = ch_program.get(ch, '?')
        cnt = ch_notecount.get(ch, 0)
        print(f'  {ch:2d} | {prog!s:>4} | {cnt}')

    return fmt, ntrk, div, track_events_all


def strip_channels(data, drop_channels):
    hdr_len = struct.unpack('>I', data[4:8])[0]
    fmt, ntrk, div = struct.unpack('>HHH', data[8:14])
    pos = 8 + hdr_len

    out_tracks = []
    for tr in range(ntrk):
        if data[pos:pos+4] != b'MTrk':
            print(f'Track {tr}: bad header'); break
        tlen = struct.unpack('>I', data[pos+4:pos+8])[0]
        evs = parse_track_events(data, pos+8, pos+8+tlen)
        # Filter: keep meta/sysex events; drop channel events for dropped channels
        new_evs = []
        for abs_tick, ev in evs:
            ch = channel_of(ev)
            if ch is not None and ch in drop_channels:
                continue
            new_evs.append((abs_tick, ev))
        out_tracks.append(new_evs)
        pos += 8 + tlen

    # Re-assemble
    out = bytearray()
    out += b'MThd'
    out += struct.pack('>I', 6)
    out += struct.pack('>HHH', fmt, ntrk, div)
    for evs in out_tracks:
        body = write_track(evs)
        out += b'MTrk'
        out += struct.pack('>I', len(body))
        out += body
    return bytes(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('input')
    ap.add_argument('output', nargs='?')
    ap.add_argument('--keep', help='comma-separated channels to KEEP')
    ap.add_argument('--drop', help='comma-separated channels to DROP')
    args = ap.parse_args()

    with open(args.input, 'rb') as f: data = f.read()

    if not args.output:
        analyze(data)
        return

    if args.keep:
        keep = set(int(c) for c in args.keep.split(','))
        drop = set(range(16)) - keep
    elif args.drop:
        drop = set(int(c) for c in args.drop.split(','))
    else:
        print('--keep or --drop required when output is given'); sys.exit(1)

    print(f'Dropping channels: {sorted(drop)}')
    new_data = strip_channels(data, drop)
    with open(args.output, 'wb') as f: f.write(new_data)
    print(f'Wrote {args.output} ({len(new_data)} bytes)')


if __name__ == '__main__':
    main()

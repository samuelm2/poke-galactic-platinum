#!/usr/bin/env python3
"""
Port GreasyGarlic's All Instruments Voicegroup V2 from a patched FireRed ROM
into pokeemerald-expansion's decomp asset layout.

Inputs:
  AllInstruments.gba              -- patched FireRed (clean v1.0 + AllInstruments.ips)
  All Instruments.bin             -- 1536-byte voicegroup table copy (sanity check)
  Voicegroup lives at file offset 0x071A240 in the patched ROM.

Outputs (written under repo root):
  sound/direct_sound_samples/all_inst/<label>.bin     -- extracted samples
  sound/voicegroups/all_instruments.inc               -- voicegroup definition
  sound/direct_sound_data_all_inst.inc                -- sample-symbol declarations
"""
import os
import struct
import sys

ROM_PATH = 'AllInstrumentsV1.gba'
BIN_PATH = None  # No separate BIN for V1; voicegroup is in ROM at VOICEGROUP_OFFSET
VOICEGROUP_OFFSET = 0x00B30C5C
GBA_BASE = 0x08000000

# Voice type bytes
TYPE_DIRECTSOUND          = 0x00
TYPE_DIRECTSOUND_NORESAMP = 0x08
TYPE_DIRECTSOUND_ALT      = 0x10
TYPE_SQUARE_1             = 0x01
TYPE_SQUARE_1_ALT         = 0x09
TYPE_SQUARE_2             = 0x02
TYPE_SQUARE_2_ALT         = 0x0A
TYPE_PROG_WAVE            = 0x03
TYPE_PROG_WAVE_ALT        = 0x0B
TYPE_NOISE                = 0x04
TYPE_NOISE_ALT            = 0x0C
TYPE_KEYSPLIT             = 0x40
TYPE_KEYSPLIT_ALL         = 0x80

OUT_SAMPLE_DIR = 'sound/direct_sound_samples/all_inst_v1'
OUT_VOICEGROUP = 'sound/voicegroups/all_instruments_v1.inc'
OUT_DECLS = 'sound/direct_sound_data_all_inst_v1.inc'
VOICEGROUP_LABEL = 'all_instruments_v1'

# Globals (populated during run)
extracted_samples = {}      # rom_addr -> sample_label
voicegroup_blocks = {}      # rom_addr -> (label, list_of_macro_lines)
keysplit_tables = {}        # rom_addr -> (label, bytes)
voicegroup_queue = []       # list of (rom_addr, label) still to process


def gba_to_file(addr):
    if addr == 0 or addr < GBA_BASE:
        return None
    return addr - GBA_BASE


def extract_sample(rom, rom_addr):
    if rom_addr in extracted_samples:
        return extracted_samples[rom_addr]

    file_off = gba_to_file(rom_addr)
    if file_off is None or file_off + 16 > len(rom):
        return None

    status, freq, loop_start, length = struct.unpack_from('<4I', rom, file_off)
    total_size = 16 + length
    if file_off + total_size > len(rom):
        return None

    sample_bytes = rom[file_off:file_off + total_size]
    label = f'all_inst_v1_{rom_addr:08x}'
    out_path = f'{OUT_SAMPLE_DIR}/{label}.bin'
    os.makedirs(OUT_SAMPLE_DIR, exist_ok=True)
    with open(out_path, 'wb') as f:
        f.write(sample_bytes)

    extracted_samples[rom_addr] = label
    return label


def queue_voicegroup(rom_addr):
    """Register a sub-voicegroup for processing if not already known. Returns its label."""
    if rom_addr in voicegroup_blocks:
        return voicegroup_blocks[rom_addr][0]
    label = f'voicegroup_all_inst_v1_sub_{rom_addr:08x}'
    voicegroup_blocks[rom_addr] = (label, None)  # mark as queued
    voicegroup_queue.append((rom_addr, label))
    return label


def queue_keysplit_table(rom, rom_addr):
    """Register a keysplit table for emission if not already known. Returns its label."""
    if rom_addr in keysplit_tables:
        return keysplit_tables[rom_addr][0]
    file_off = gba_to_file(rom_addr)
    if file_off is None or file_off + 256 > len(rom):
        return None
    table_bytes = rom[file_off:file_off + 256]
    label = f'KeySplitTable_all_inst_v1_{rom_addr:08x}'
    keysplit_tables[rom_addr] = (label, table_bytes)
    return label


def parse_voice(rom, voice_bytes, voice_index):
    """Return a single line of voicegroup macro text for this voice."""
    type_byte = voice_bytes[0]
    base_key = voice_bytes[1]
    pan_byte = voice_bytes[2]  # macro layout: [type, base, pan, sweep/0, ...]
    pan = pan_byte & 0x7F if (pan_byte & 0x80) else 0
    ptr_le = struct.unpack_from('<I', voice_bytes, 4)[0]
    arg2_le = struct.unpack_from('<I', voice_bytes, 8)[0]

    if type_byte in (TYPE_DIRECTSOUND, TYPE_DIRECTSOUND_NORESAMP, TYPE_DIRECTSOUND_ALT):
        attack, decay, sustain, release = voice_bytes[8:12]
        sample_label = extract_sample(rom, ptr_le)
        if sample_label is None:
            return f'\tvoice_square_1 60, 0, 0, 2, 0, 0, 15, 0  @ voice {voice_index}: bad sample ptr 0x{ptr_le:08x}'
        sample_sym = f'DirectSoundWaveData_{sample_label}'
        if type_byte == TYPE_DIRECTSOUND:
            mname = 'voice_directsound'
        elif type_byte == TYPE_DIRECTSOUND_NORESAMP:
            mname = 'voice_directsound_no_resample'
        else:
            mname = 'voice_directsound_alt'
        return f'\t{mname} {base_key}, {pan}, {sample_sym}, {attack}, {decay}, {sustain}, {release}'

    if type_byte in (TYPE_SQUARE_1, TYPE_SQUARE_1_ALT):
        sweep = voice_bytes[3]
        duty = voice_bytes[4] & 0x3
        attack = voice_bytes[8] & 0x7
        decay = voice_bytes[9] & 0x7
        sustain = voice_bytes[10] & 0xF
        release = voice_bytes[11] & 0x7
        suffix = '_alt' if type_byte == TYPE_SQUARE_1_ALT else ''
        return f'\tvoice_square_1{suffix} {base_key}, {pan}, {sweep}, {duty}, {attack}, {decay}, {sustain}, {release}'

    if type_byte in (TYPE_SQUARE_2, TYPE_SQUARE_2_ALT):
        duty = voice_bytes[4] & 0x3
        attack = voice_bytes[8] & 0x7
        decay = voice_bytes[9] & 0x7
        sustain = voice_bytes[10] & 0xF
        release = voice_bytes[11] & 0x7
        suffix = '_alt' if type_byte == TYPE_SQUARE_2_ALT else ''
        return f'\tvoice_square_2{suffix} {base_key}, {pan}, {duty}, {attack}, {decay}, {sustain}, {release}'

    if type_byte in (TYPE_NOISE, TYPE_NOISE_ALT):
        period = voice_bytes[4] & 0x1
        attack = voice_bytes[8] & 0x7
        decay = voice_bytes[9] & 0x7
        sustain = voice_bytes[10] & 0xF
        release = voice_bytes[11] & 0x7
        suffix = '_alt' if type_byte == TYPE_NOISE_ALT else ''
        return f'\tvoice_noise{suffix} {base_key}, {pan}, {period}, {attack}, {decay}, {sustain}, {release}'

    if type_byte in (TYPE_PROG_WAVE, TYPE_PROG_WAVE_ALT):
        attack = voice_bytes[8] & 0x7
        decay = voice_bytes[9] & 0x7
        sustain = voice_bytes[10] & 0xF
        release = voice_bytes[11] & 0x7
        return f'\tvoice_square_1 {base_key}, {pan}, 0, 2, {attack}, {decay}, {sustain}, {release}  @ voice {voice_index}: prog_wave stubbed'

    if type_byte == TYPE_KEYSPLIT_ALL:
        sub_label = queue_voicegroup(ptr_le)
        return f'\tvoice_keysplit_all {sub_label}'

    if type_byte == TYPE_KEYSPLIT:
        sub_label = queue_voicegroup(ptr_le)
        kt_label = queue_keysplit_table(rom_global, arg2_le)
        if kt_label is None:
            return f'\tvoice_square_1 60, 0, 0, 2, 0, 0, 15, 0  @ voice {voice_index}: bad keysplit table ptr'
        return f'\tvoice_keysplit {sub_label}, {kt_label}'

    return f'\tvoice_square_1 60, 0, 0, 2, 0, 0, 15, 0  @ voice {voice_index}: unknown type 0x{type_byte:02x}'


def process_voicegroup(rom, rom_addr, label):
    """Parse 128 voices at rom_addr, store the macro lines under label."""
    file_off = gba_to_file(rom_addr)
    if file_off is None or file_off + 1536 > len(rom):
        voicegroup_blocks[rom_addr] = (label, [
            f'\tvoice_square_1 60, 0, 0, 2, 0, 0, 15, 0  @ bad voicegroup ptr 0x{rom_addr:08x}'
        ] * 128)
        return
    table = rom[file_off:file_off + 1536]
    lines = []
    for j in range(128):
        vb = table[j*12:(j+1)*12]
        lines.append(parse_voice(rom, vb, j))
    voicegroup_blocks[rom_addr] = (label, lines)


def main():
    global rom_global
    with open(ROM_PATH, 'rb') as f:
        rom = f.read()
    rom_global = rom

    if BIN_PATH:
        with open(BIN_PATH, 'rb') as f:
            bin_data = f.read()
        rom_table = rom[VOICEGROUP_OFFSET:VOICEGROUP_OFFSET + 1536]
        if rom_table != bin_data:
            print('ERROR: BIN does not match ROM at expected offset', file=sys.stderr)
            sys.exit(1)

    # Clean output sample dir
    if os.path.isdir(OUT_SAMPLE_DIR):
        for f in os.listdir(OUT_SAMPLE_DIR):
            os.remove(os.path.join(OUT_SAMPLE_DIR, f))

    # Bootstrap: main voicegroup uses VOICEGROUP_LABEL
    main_addr = GBA_BASE + VOICEGROUP_OFFSET
    voicegroup_blocks[main_addr] = (VOICEGROUP_LABEL, None)
    voicegroup_queue.append((main_addr, VOICEGROUP_LABEL))

    # Worklist: process queued voicegroups, which may queue more
    while voicegroup_queue:
        rom_addr, label = voicegroup_queue.pop(0)
        if voicegroup_blocks.get(rom_addr, (None, None))[1] is not None:
            continue  # already processed
        process_voicegroup(rom, rom_addr, label)

    # Write voicegroup .inc — main first, then all sub-voicegroups
    os.makedirs(os.path.dirname(OUT_VOICEGROUP), exist_ok=True)
    with open(OUT_VOICEGROUP, 'w') as f:
        # Main
        main_lines = voicegroup_blocks[main_addr][1]
        f.write(f'voice_group {VOICEGROUP_LABEL}\n')
        for line in main_lines:
            f.write(line + '\n')
        # Subs (sorted by addr for stable output)
        for rom_addr in sorted(voicegroup_blocks.keys()):
            if rom_addr == main_addr:
                continue
            label, lines = voicegroup_blocks[rom_addr]
            f.write(f'\n\t.global {label}\n{label}::\n')
            for line in lines:
                f.write(line + '\n')
        # Keysplit tables
        if keysplit_tables:
            f.write('\n@ Keysplit tables\n')
            for rom_addr in sorted(keysplit_tables.keys()):
                label, kt_bytes = keysplit_tables[rom_addr]
                kt_str = ', '.join(f'0x{b:02x}' for b in kt_bytes)
                f.write(f'\n\t.global {label}\n{label}::\n\t.byte {kt_str}\n')

    # Sample declarations
    with open(OUT_DECLS, 'w') as f:
        f.write('@ Auto-generated sample declarations for All Instruments voicegroup\n')
        for rom_addr in sorted(extracted_samples.keys()):
            label = extracted_samples[rom_addr]
            f.write(f'\t.align 2\nDirectSoundWaveData_{label}::\n\t.incbin "{OUT_SAMPLE_DIR}/{label}.bin"\n\n')

    print(f'Voicegroups processed: {len(voicegroup_blocks)}  (main + {len(voicegroup_blocks)-1} sub)')
    print(f'Unique samples extracted: {len(extracted_samples)}')
    print(f'Keysplit tables: {len(keysplit_tables)}')


if __name__ == '__main__':
    main()

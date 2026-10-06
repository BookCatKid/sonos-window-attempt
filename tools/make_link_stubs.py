#!/usr/bin/env python3
"""Generate link inputs for the recovered DLL image.

Scans compiled COFF objects, then emits:

- ``stubs.obj``: BigObj COFF defining every still-undefined external as an
  IMAGE_SYM_ABSOLUTE symbol whose value is the reference VA encoded in the
  name (``_LAB_<va>``, ``?DAT_<va>@@...``, ``ghidra_jump_target_<va>`` etc.).
  DIR32 relocations against these symbols therefore resolve to the reference
  addresses even though the data sections are not yet reconstructed.
- ``sclib.def``: EXPORTS mapping each reference export name to the generated
  symbol defined at the export's target VA, preserving ordinals.
- ``order.txt``: defined function symbols sorted by reference VA for /ORDER.
"""
import argparse
import json
import re
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_compiled_ghidra import read_coff

VA_RE = re.compile(
    r'(?:^|[^0-9a-zA-Z])(?:LAB|DAT|FUN|FuncInfo|thunk_FUN|ghidra_\w+|'
    r'ghidra_vftable|ghidra_jump_target)_?([0-9a-fA-F]{8})')


def name_va(name):
    m = VA_RE.search(name)
    if m:
        va = int(m.group(1), 16)
        if 0x10000000 <= va < 0x13000000:
            return va
    return 0


def scan_objects(objects_dir, pattern='*.obj'):
    undefined = {}
    defined = {}
    for path in sorted(Path(objects_dir).glob(pattern)):
        if path.name == 'stubs.obj':
            continue
        try:
            sections, symbols, by_index = read_coff(path)
        except Exception:
            continue
        for sym in by_index.values():
            if sym['storage'] != 2:
                continue
            if sym['section'] == 0:
                undefined[sym['name']] = name_va(sym['name'])
            elif sym['section'] > 0:
                defined[sym['name']] = (path.name, sym['section'],
                                        sym['offset'])
    return undefined, defined


def emit_bigobj(path, symbols):
    out = bytearray()
    out += struct.pack('<HHHHI', 0, 0xFFFF, 2, 0x14C, 0)
    out += bytes.fromhex('c7a1bad1eebaa94baf20faf66aa4dcb8')
    out += bytes(16)
    section_count = 1
    symbol_start = 56 + 40 * section_count
    out += struct.pack('<III', section_count, symbol_start, len(symbols))
    out += b'.data\0\0\0'
    out += struct.pack('<IIIIIIHHI', 0, 0, 0, 0, 0, 0, 0, 0, 0xC0300040)
    strings = bytearray(b'\0\0\0\0')
    for name, value in symbols:
        encoded = name.encode('utf-8')
        if len(encoded) <= 8:
            out += encoded.ljust(8, b'\0')
        else:
            out += b'\0\0\0\0' + struct.pack('<I', len(strings))
            strings += encoded + b'\0'
        out += struct.pack('<I', value)
        out += struct.pack('<I', 0xFFFFFFFF)
        out += struct.pack('<H', 0)
        out += bytes([2, 0])
    struct.pack_into('<I', strings, 0, len(strings))
    out += strings
    Path(path).write_bytes(out)


def emit_def(path, aliases_path, defined):
    rows = []
    if aliases_path and Path(aliases_path).exists():
        import csv
        with open(aliases_path, newline='') as stream:
            for row in csv.DictReader(stream, delimiter='\t'):
                rows.append(row)
    by_va = {}
    for sym in defined:
        va = name_va(sym)
        if va:
            by_va.setdefault(f'{va:08x}', []).append(sym)
    lines = ['EXPORTS']
    mapped = missing = 0
    for ordinal, row in enumerate(rows, start=1):
        name = row['name']
        target = row['target']
        internal = None
        for va in (row['export'], target):
            for candidate in (f'?FUN_{va}@@YAXXZ', f'?FUN_{va}@@YAHXZ',
                              f'?FUN_{va}@@YAEXZ', f'_FUN_{va}',
                              f'??$FUN_{va}@$$V@@YAHXZ'):
                if candidate in defined:
                    internal = candidate
                    break
            if internal is None:
                internal = sorted(by_va.get(va, ()))[0] \
                    if by_va.get(va) else None
            if internal:
                break
        if internal is None:
            missing += 1
            continue
        mapped += 1
        lines.append(f'\t{name} = {internal} @{ordinal}')
    Path(path).write_text('\n'.join(lines) + '\n')
    return mapped, missing


def emit_order(path, defined):
    entries = []
    for name in defined:
        va = name_va(name)
        if va:
            entries.append((va, name))
    entries.sort()
    Path(path).write_text('\n'.join(name for _, name in entries) + '\n')
    return len(entries)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--objects-dir', required=True)
    parser.add_argument('--pattern', default='*.obj')
    parser.add_argument('--stub', required=True)
    parser.add_argument('--def', dest='def_file', required=True)
    parser.add_argument('--order')
    parser.add_argument('--aliases',
                        default=str(ROOT / 'analysis' / 'export-aliases.tsv'))
    args = parser.parse_args()
    undefined, defined = scan_objects(args.objects_dir, args.pattern)
    emit_bigobj(args.stub, sorted(undefined.items()))
    va_backed = sum(1 for value in undefined.values() if value)
    print(f'undefined symbols stubbed: {len(undefined)} '
          f'({va_backed} with reference VAs)')
    mapped, missing = emit_def(args.def_file, args.aliases, defined)
    print(f'exports mapped: {mapped}, unmapped: {missing}')
    if args.order:
        count = emit_order(args.order, defined)
        print(f'order file entries: {count}')


if __name__ == '__main__':
    main()

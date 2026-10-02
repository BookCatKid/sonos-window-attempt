#!/usr/bin/env python3
"""Reloc-masked byte diff of one generated function against the reference image.

Usage:
    python tools/diff_function.py <entry_va_hex> <object.obj> [--context N]

Prints every byte position where the compiled body differs from the reference,
marking positions covered by a COFF relocation (target value resolved at link
time) versus fixed opcode bytes (must match exactly). Fixed-byte diffs are the
real compiler divergences; reloc-covered diffs only matter if the symbol maps
to a different VA than the reference used.
"""
import argparse
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from classify_functions import function_bytes, section_map
from compare_compiled_ghidra import function_symbols, read_coff

ROOT = Path(__file__).resolve().parents[1]
REFERENCE = ROOT / 'reference' / 'SonosV2' / 'sclib-csharp.dll'


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('entry')
    ap.add_argument('object', type=Path)
    ap.add_argument('--context', type=int, default=6)
    ap.add_argument('--length', type=int, default=0,
                    help='reference body length; default uses compiled length')
    args = ap.parse_args()
    entry_va = int(args.entry, 16)

    reference = REFERENCE.read_bytes()
    image_base, pe_sections = section_map(reference)

    sections, symbols, by_index = read_coff(args.object)
    compiled = function_symbols(sections, symbols, by_index)
    key = f'{entry_va:08x}'
    found = compiled.get(key) or next(
        (v for k, v in compiled.items() if k.lower() == key.lower()), None)
    if found is None:
        found = next(
            (v for k, v in compiled.items() if args.entry.lower() in k.lower()), None)
    if found is None:
        print(f'{args.entry}: not emitted in {args.object.name}')
        return 1
    candidate, relocs = found

    length = args.length or len(candidate)
    expected = function_bytes(reference, entry_va, length, image_base, pe_sections)
    relocated = set()
    for r in relocs:
        for off in range(r['offset'], r['offset'] + 4):
            relocated.add(off)

    n = min(len(expected), len(candidate))
    diffs = [i for i in range(n) if expected[i] != candidate[i]]
    fixed_diffs = [i for i in diffs if i not in relocated]
    reloc_diffs = [i for i in diffs if i in relocated]

    print(f'{args.entry}: ref={len(expected)}B comp={len(candidate)}B '
          f'relocs={len(relocs)}  fixed_diffs={len(fixed_diffs)} '
          f'reloc_diffs={len(reloc_diffs)}')
    if len(expected) != len(candidate):
        print(f'  LENGTH MISMATCH: expected {len(expected)}, got {len(candidate)}')
    reloc_by_off = {r['offset']: r for r in relocs}
    for i in diffs:
        tag = 'RELOC' if i in relocated else 'FIXED'
        sym = ''
        for ro, r in reloc_by_off.items():
            if ro <= i < ro + 4:
                sym = r['symbol']
                break
        c = args.context
        print(f'  +{i:#04x} {tag:5s} ref={expected[i]:02x} comp={candidate[i]:02x} '
              f'ref:{expected[max(0,i-c):i+c].hex()} '
              f'comp:{candidate[max(0,i-c):i+c].hex()} {sym}')
    print('  relocations:')
    for r in relocs:
        off = r['offset']
        field = expected[off:off + 4].hex() if off + 4 <= len(expected) else '??'
        print(f'    +{off:#x} type={r["type"]} sym={r["symbol"]} '
              f'expected_field={field}')
    return 0


if __name__ == '__main__':
    sys.exit(main())

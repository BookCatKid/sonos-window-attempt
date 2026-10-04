#!/usr/bin/env python3
"""Instruction-level diff between compiled bulk objects and reference bodies.

For each same-length function that is not byte-exact, disassemble both sides
and report the first divergent instruction pair (mnemonic + operand shape,
immediates masked). The histogram surfaces systematic emitter/codegen gaps
rather than per-function noise.
"""

import argparse
import collections
import csv
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import compare_compiled_ghidra as cc
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

MD = Cs(CS_ARCH_X86, CS_MODE_32)


def shape(ins):
    ops = re.sub(r'0x[0-9a-f]+|\b\d+\b', 'N', ins.op_str)
    return (ins.mnemonic + ' ' + ops).strip()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('index_dirs', nargs='+', type=Path)
    ap.add_argument('--objects-dir', type=Path, required=True)
    ap.add_argument('--max-fns', type=int, default=4000)
    ap.add_argument('--min-ratio', type=float, default=0.5)
    args = ap.parse_args()

    reference = cc.DLL.read_bytes()
    image_base, pe_sections = cc.section_map(reference)
    hist = collections.Counter()
    endshape = collections.Counter()
    n_diff = 0
    stop = False
    for d in sorted(args.index_dirs):
        if stop:
            break
        obj = args.objects_dir / (d.name + '.obj')
        if not obj.exists() or obj.stat().st_size < 2048:
            continue
        if not (d / 'match-report.tsv').exists():
            continue
        sections, symbols, by_idx = cc.read_coff(obj)
        compiled = cc.function_symbols(sections, symbols, by_idx)
        for row in csv.DictReader(
                (d / 'match-report.tsv').open(), delimiter='\t'):
            if n_diff >= args.max_fns:
                stop = True
                break
            if row['exact_after_known_relocations'] == 'True':
                continue
            fc = int(row['fixed_compared'] or 0)
            fm = int(row['fixed_matching'] or 0)
            if not fc or fm / fc < args.min_ratio:
                continue
            entry_va = int(row['entry'], 16) + image_base
            expected = cc.function_bytes(reference, int(row['entry'], 16),
                                         int(row['reference_bytes']),
                                         image_base, pe_sections)
            candidate, relocs = compiled.get(row['entry'], (b'', []))
            if not expected or not candidate:
                continue
            relocated = {o for r in relocs
                         for o in range(r['offset'], r['offset'] + 4)}
            ei = list(MD.disasm(expected, entry_va))
            ci = list(MD.disasm(candidate, entry_va))
            found = False
            for a, b in zip(ei, ci):
                off = a.address - entry_va
                if any(off <= r < off + a.size or r <= off < r + 4
                       for r in relocated):
                    continue
                if a.bytes != b.bytes:
                    hist[(shape(a), shape(b))] += 1
                    found = True
                    break
            if not found and len(ei) != len(ci):
                endshape[(len(ei), len(ci))] += 1
            n_diff += 1
    print('functions diffed:', n_diff)
    print('=== top first-diff instruction pairs (ref -> compiled) ===')
    for (a, b), c in hist.most_common(30):
        print(f'{c:6d}  {a[:50]:50s} -> {b[:50]}')
    print('=== insn-count mismatches (ref_count -> compiled_count) ===')
    for (a, b), c in endshape.most_common(10):
        print(f'{c:6d}  {a} -> {b}')


if __name__ == '__main__':
    main()

#!/usr/bin/env python3
"""Match ctor-scope variant objects from a focused-probe worker download."""
import argparse
import csv
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import compare_compiled_ghidra as compare
from classify_functions import ROOT, section_map


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--objects-root', type=Path, required=True)
    p.add_argument('--output', type=Path, required=True)
    a = p.parse_args()
    manifest = json.loads(
        (ROOT / 'src/generated/ctor_scope_variants/tranches.json').read_text())
    data = (ROOT / 'reference/SonosV2/sclib-csharp.dll').read_bytes()
    base, sections = section_map(data)
    compare.DEFAULT_SYMBOLS = ROOT / 'analysis/thunk-recovery-full/symbols.jsonl'
    targets = compare.load_symbol_vas(compare.DEFAULT_SYMBOLS)
    compare.add_scstr_export_targets(targets, data, base, sections)
    compare.add_thunk_site_targets(
        targets, data, base, sections,
        ROOT / 'analysis/thunk-recovery-full/final-function-inventory.tsv')
    a.output.mkdir(parents=True, exist_ok=True)
    for item in manifest:
        obj = a.objects_root / (item['object'] + '.obj')
        directory = ROOT / item['directory']
        if not obj.is_file():
            print(f'{item["object"]}: missing', flush=True)
            continue
        rows = compare.compare_directory(directory, data, base, sections,
                                         targets, obj)
        for row in rows:
            print(item['object'], json.dumps(row), flush=True)
        with (a.output / (item['object'] + '.tsv')).open('w', newline='') as f:
            w = csv.DictWriter(f, fieldnames=rows[0].keys(), delimiter='\t')
            w.writeheader()
            w.writerows(rows)


if __name__ == '__main__':
    main()

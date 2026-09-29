#!/usr/bin/env python3
"""Combine distinct, object-compiled C++ functions across Ghidra export tiers."""

import argparse
import csv
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLASSES = ROOT / 'analysis' / 'function-classes.tsv'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('output_dirs', nargs='+', type=Path,
                        help='Directories written by compile_ghidra_cpp.py')
    args = parser.parse_args()
    records = {}
    for directory in args.output_dirs:
        if not (directory / 'ghidra_recovered.obj').is_file():
            parser.error(f'No compiled object in {directory}')
        with (directory / 'compiled-index.tsv').open(newline='') as file:
            for row in csv.DictReader(file, delimiter='\t'):
                records[row['entry']] = row
    denominator_count = 0
    denominator_bytes = 0
    with CLASSES.open(newline='') as file:
        for row in csv.DictReader(file, delimiter='\t'):
            if row['class'] == 'other':
                denominator_count += 1
                denominator_bytes += int(row['body_bytes'])
    compiled_bytes = sum(int(row['reference_body_bytes']) for row in records.values())
    unwind = [row for row in records.values() if row['name'].startswith('Unwind@')]
    metrics = {
        'compiled_unique_functions': len(records),
        'compiled_reference_body_bytes': compiled_bytes,
        'identified_non_glue_functions': denominator_count,
        'identified_non_glue_body_bytes': denominator_bytes,
        'compiled_non_glue_function_percent': round(100 * len(records) / denominator_count, 4),
        'compiled_non_glue_body_byte_percent': round(100 * compiled_bytes / denominator_bytes, 4),
        'compiled_unwind_handlers': len(unwind),
        'compiled_unwind_reference_body_bytes': sum(int(row['reference_body_bytes']) for row in unwind),
        'scope': 'x86 C++ object compilation only; no linked DLL or byte match',
    }
    print(json.dumps(metrics, indent=2))


if __name__ == '__main__':
    main()

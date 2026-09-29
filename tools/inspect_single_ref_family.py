#!/usr/bin/env python3
"""Verify every linked 24-byte single-reference C++ constructor."""

import argparse
import csv
import json
from pathlib import Path

from classify_functions import DLL, function_bytes, section_map
from inspect_swig_delete_family import linked_symbols
from verify_scstr_relocations import coff

ROOT = Path(__file__).resolve().parents[1]
INDEX = ROOT / 'src' / 'generated' / 'single-ref-family-index.tsv'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('object', type=Path)
    parser.add_argument('--dll', type=Path)
    parser.add_argument('--map', type=Path)
    args = parser.parse_args()
    if bool(args.dll) != bool(args.map):
        parser.error('--dll and --map must be supplied together')
    reference = DLL.read_bytes()
    reference_base, reference_sections = section_map(reference)
    obj_sections, obj_symbols = coff(args.object)
    candidate = args.dll.read_bytes() if args.dll else None
    candidate_base, candidate_sections = section_map(candidate) if candidate else (None, None)
    linked = linked_symbols(args.map.read_text(errors='replace')) if args.map else {}
    with INDEX.open(newline='') as file:
        rows = list(csv.DictReader(file, delimiter='\t'))
    failures = []
    object_matches = linked_matches = 0
    for row in rows:
        size = int(row['body_bytes'])
        entry = int(row['entry'], 16)
        prefix = '?Init@' + row['class_name'] + '@@'
        symbol = next((value for value in obj_symbols.values()
                       if value['name'].startswith(prefix) and value['section'] > 0), None)
        expected = function_bytes(reference, entry, size,
                                  reference_base, reference_sections)
        if symbol is None:
            failures.append((row['entry'], 'missing object symbol'))
            continue
        section = obj_sections[symbol['section']]
        start = symbol['value']
        body = section['code'][start:start + size]
        relocations = [offset for offset, _target, _kind in section['relocations']
                       if start <= offset < start + size]
        if body != expected or relocations:
            failures.append((row['entry'], 'object body mismatch'))
            continue
        object_matches += 1
        if candidate is not None:
            va = linked.get(symbol['name'])
            actual = (function_bytes(candidate, va, size, candidate_base,
                                     candidate_sections) if va else b'')
            if actual == expected:
                linked_matches += 1
            else:
                failures.append((row['entry'], 'linked body mismatch'))
    print(json.dumps({'functions': len(rows),
                      'reference_body_bytes': sum(int(row['body_bytes']) for row in rows),
                      'object_exact_bodies': object_matches,
                      'linked_exact_bodies': linked_matches if candidate else None,
                      'failures': failures[:20]}, indent=2))
    if failures or object_matches != len(rows):
        raise SystemExit(1)


if __name__ == '__main__':
    main()

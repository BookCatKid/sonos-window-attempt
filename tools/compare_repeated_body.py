#!/usr/bin/env python3
"""Compare one C++ object body to a repeated native reference-body cluster."""

import argparse
import csv
from pathlib import Path

from classify_functions import DLL, INVENTORY, function_bytes, section_map
from compare_ci_objects import object_code


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('object', type=Path)
    parser.add_argument('--entry', required=True, type=lambda value: int(value, 16))
    parser.add_argument('--size', required=True, type=int)
    args = parser.parse_args()
    reference = DLL.read_bytes()
    image_base, sections = section_map(reference)
    expected = function_bytes(reference, args.entry, args.size, image_base, sections)
    if len(expected) != args.size:
        parser.error('reference entry does not map to a complete body')
    actual, relocations, code_sections = object_code(args.object)
    instances = 0
    with INVENTORY.open(newline='') as file:
        for row in csv.DictReader(file, delimiter='\t'):
            if int(row['body_bytes']) != args.size or row['thunk'] == 'true':
                continue
            body = function_bytes(reference, int(row['entry'], 16), args.size,
                                  image_base, sections)
            instances += body == expected
    exact = actual == expected and not relocations
    first = next((i for i, (a, b) in enumerate(zip(expected, actual)) if a != b),
                 min(len(expected), len(actual)))
    print(f'reference: {args.size} bytes at 0x{args.entry:08x}; '
          f'{instances} identical native instances')
    print(f'compiled: {len(actual)} bytes; {len(relocations)} relocations; '
          f'{code_sections} code sections; first difference {first}; '
          f'{"EXACT" if exact else "MISMATCH"}')
    if not exact:
        raise SystemExit(1)


if __name__ == '__main__':
    main()

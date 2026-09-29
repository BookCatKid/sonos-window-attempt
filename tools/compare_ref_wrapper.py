#!/usr/bin/env python3
"""Compare the readable two-field C++ reference wrapper with its x86 body."""

import argparse
import csv
from pathlib import Path

from classify_functions import DLL, INVENTORY, function_bytes, section_map
from compare_ci_objects import object_code

ENTRY = 0x101A8D90
SIZE = 41


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('object', type=Path)
    args = parser.parse_args()
    reference = DLL.read_bytes()
    image_base, sections = section_map(reference)
    expected = function_bytes(reference, ENTRY, SIZE, image_base, sections)
    actual, relocations, code_sections = object_code(args.object)
    instances = 0
    with INVENTORY.open(newline='') as file:
        for row in csv.DictReader(file, delimiter='\t'):
            if int(row['body_bytes']) != SIZE or row['thunk'] == 'true':
                continue
            body = function_bytes(reference, int(row['entry'], 16), SIZE, image_base, sections)
            instances += body == expected
    exact = actual == expected and not relocations
    print(f'reference body: {SIZE} bytes, {instances} identical native instances')
    print(f'compiled body: {len(actual)} bytes, {len(relocations)} relocations, '
          f'{code_sections} code sections, {"EXACT" if exact else "MISMATCH"}')
    if not exact:
        first = next((i for i, (a, b) in enumerate(zip(expected, actual)) if a != b),
                     min(len(expected), len(actual)))
        print(f'first byte difference: {first}')
        raise SystemExit(1)


if __name__ == '__main__':
    main()

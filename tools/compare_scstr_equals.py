#!/usr/bin/env python3
"""Compare a C++ SCStr char-string equality candidate with its native body."""

import argparse
from pathlib import Path

from classify_functions import DLL, function_bytes, section_map
from compare_ci_objects import object_code

ENTRY = 0x101A2DC0
SIZE = 74


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('object', type=Path)
    args = parser.parse_args()
    reference = DLL.read_bytes()
    base, sections = section_map(reference)
    expected = function_bytes(reference, ENTRY, SIZE, base, sections)
    actual, relocations, code_sections = object_code(args.object)
    relocated = {position for start in relocations for position in range(start, start + 4)}
    compared = min(len(expected), len(actual))
    fixed = [position for position in range(compared) if position not in relocated]
    matches = sum(expected[position] == actual[position] for position in fixed)
    print(f'reference body: {SIZE} bytes at 0x{ENTRY:08x}')
    print(f'compiled body: {len(actual)} bytes; {len(relocations)} relocations; '
          f'{code_sections} code sections')
    print(f'fixed bytes: {matches}/{len(fixed)} matching')
    print(f'same length and all fixed bytes equal: '
          f'{len(actual) == SIZE and matches == len(fixed)}')


if __name__ == '__main__':
    main()

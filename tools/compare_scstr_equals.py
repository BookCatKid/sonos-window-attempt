#!/usr/bin/env python3
"""Compare a C++ SCStr char-string equality candidate with its native body."""

import argparse
import struct
from pathlib import Path

from classify_functions import DLL, function_bytes, section_map
from compare_ci_objects import object_code
from verify_scstr_relocations import coff, reference_bytes_at, section_string

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
    object_sections, symbols = coff(args.object)
    code_section = max((part for part in object_sections.values()
                        if part['name'].startswith('.text')),
                       key=lambda part: len(part['code']))
    target_matches = []
    for offset, index, kind in code_section['relocations']:
        symbol = symbols[index]
        candidate_literal = section_string(object_sections, symbol)
        target = struct.unpack_from('<I', expected, offset)[0] if offset + 4 <= SIZE else 0
        reference_literal = reference_bytes_at(reference, target,
                                                len(candidate_literal), base, sections)
        target_matches.append(kind == 6 and symbol['name'].startswith('??_C@')
                              and bool(candidate_literal)
                              and candidate_literal == reference_literal)
    print(f'reference body: {SIZE} bytes at 0x{ENTRY:08x}')
    print(f'compiled body: {len(actual)} bytes; {len(relocations)} relocations; '
          f'{code_sections} code sections')
    print(f'fixed bytes: {matches}/{len(fixed)} matching')
    print(f'same length and all fixed bytes equal: '
          f'{len(actual) == SIZE and matches == len(fixed)}')
    print(f'relocation target contents: {sum(target_matches)}/{len(target_matches)} matching')
    if (len(actual) != SIZE or matches != len(fixed)
            or len(target_matches) != 1 or not all(target_matches)):
        raise SystemExit(1)


if __name__ == '__main__':
    main()

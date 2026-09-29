#!/usr/bin/env python3
"""Verify all recovered C# deletion wrappers in a COFF object and linked DLL."""

import argparse
import csv
import json
import re
import struct
from pathlib import Path

from classify_functions import DLL, function_bytes, section_map
from verify_scstr_relocations import coff

ROOT = Path(__file__).resolve().parents[1]
INDEX = ROOT / 'src' / 'generated' / 'swig-delete-family-index.tsv'


def linked_symbols(map_text):
    result = {}
    for line in map_text.splitlines():
        match = re.match(r'\s*[0-9a-fA-F]{4}:[0-9a-fA-F]{8}\s+'
                         r'(\S+)\s+([0-9a-fA-F]{8})\s+f\s+', line)
        if match:
            result[match.group(1)] = int(match.group(2), 16)
    return result


def exports(data, base, sections):
    pe = struct.unpack_from('<I', data, 0x3c)[0]
    optional = pe + 24
    directory_rva, directory_size = struct.unpack_from('<II', data, optional + 96)
    if not directory_rva or not directory_size:
        return set()
    directory = function_bytes(data, base + directory_rva, 40, base, sections)
    names_count, names_rva = struct.unpack_from('<II', directory, 24)
    result = set()
    for index in range(names_count):
        pointer = function_bytes(data, base + names_rva + 4 * index, 4,
                                 base, sections)
        name_rva = struct.unpack('<I', pointer)[0]
        raw = function_bytes(data, base + name_rva, 256, base, sections)
        result.add(raw.split(b'\0', 1)[0].decode('ascii', errors='replace'))
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('object', type=Path)
    parser.add_argument('--dll', type=Path)
    parser.add_argument('--map', type=Path)
    args = parser.parse_args()
    if bool(args.dll) != bool(args.map):
        parser.error('--dll and --map must be provided together')
    reference = DLL.read_bytes()
    reference_base, reference_sections = section_map(reference)
    obj_sections, obj_symbols = coff(args.object)
    by_symbol = {symbol['name']: symbol for symbol in obj_symbols.values()
                 if symbol['section'] > 0}
    candidate = args.dll.read_bytes() if args.dll else None
    candidate_base, candidate_sections = section_map(candidate) if candidate else (None, None)
    linked = linked_symbols(args.map.read_text(errors='replace')) if args.map else {}
    export_names = exports(candidate, candidate_base, candidate_sections) if candidate else set()
    with INDEX.open(newline='') as file:
        rows = list(csv.DictReader(file, delimiter='\t'))
    failures = []
    object_matches = linked_matches = export_matches = 0
    for row in rows:
        name = row['decorated_symbol']
        symbol = by_symbol.get(name)
        size = int(row['body_bytes'])
        expected = function_bytes(reference, int(row['entry'], 16), size,
                                  reference_base, reference_sections)
        if symbol is None:
            failures.append((row['entry'], 'missing object symbol'))
            continue
        section = obj_sections[symbol['section']]
        offset = symbol['value']
        body = section['code'][offset:offset + size]
        relocations = [position for position, _target, _kind in section['relocations']
                       if offset <= position < offset + size]
        if len(body) != size or body != expected or relocations:
            failures.append((row['entry'], 'object body mismatch'))
            continue
        object_matches += 1
        if candidate is not None:
            va = linked.get(name)
            linked_body = (function_bytes(candidate, va, size, candidate_base,
                                          candidate_sections) if va else b'')
            if linked_body == expected:
                linked_matches += 1
            else:
                failures.append((row['entry'], 'linked body mismatch'))
            if name in export_names:
                export_matches += 1
            else:
                failures.append((row['entry'], 'missing PE export'))
    result = {'functions': len(rows), 'reference_body_bytes': sum(int(r['body_bytes']) for r in rows),
              'object_exact_bodies': object_matches,
              'linked_exact_bodies': linked_matches if candidate else None,
              'matching_named_exports': export_matches if candidate else None,
              'failures': failures[:20]}
    print(json.dumps(result, indent=2))
    if failures or object_matches != len(rows):
        raise SystemExit(1)


if __name__ == '__main__':
    main()

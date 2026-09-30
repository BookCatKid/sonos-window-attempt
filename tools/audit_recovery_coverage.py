#!/usr/bin/env python3
"""Audit distinct reference-byte coverage from compiled-function match reports.

Function object scores assume recovered reference-address relocation placement.
This tool does not turn those constraints into a linked-DLL match score. A high
function count never substitutes for coverage of the executable section bytes.
"""
import argparse
import csv
import hashlib
import json
import struct
from pathlib import Path
from classify_functions import DLL


def merged_bytes(intervals):
    end = None
    total = 0
    for start, stop in sorted(intervals):
        if end is None or start >= end:
            total += stop - start
        elif stop > end:
            total += stop - end
        end = max(end if end is not None else start, stop)
    return total


def executable_sections(reference):
    pe = struct.unpack_from('<I', reference, 0x3c)[0]
    optional = pe + 24
    image_base = struct.unpack_from('<I', reference, optional + 28)[0]
    count = struct.unpack_from('<H', reference, pe + 6)[0]
    section_start = optional + struct.unpack_from('<H', reference, pe + 20)[0]
    sections = []
    for number in range(count):
        header = section_start + number * 40
        flags = struct.unpack_from('<I', reference, header + 36)[0]
        if not flags & 0x20000000:
            continue
        size, rva, raw_size = struct.unpack_from('<III', reference, header + 8)
        sections.append({'name': reference[header:header + 8].rstrip(b'\0').decode(),
                         'va': image_base + rva, 'virtual_bytes': size,
                         'raw_bytes': raw_size})
    return sections


def audit(paths, reference_path=DLL):
    reference = reference_path.read_bytes()
    sections = executable_sections(reference)
    exact = {}
    constraints = 0
    reports = []
    for path in paths:
        with path.open(newline='') as file:
            rows = list(csv.DictReader(file, delimiter='\t'))
        matching = 0
        for row in rows:
            if row.get('exact_after_known_relocations') != 'True':
                continue
            entry = int(row['entry'], 16)
            length = int(row['reference_bytes'])
            if length <= 0 or int(row['compiled_bytes']) != length or int(row['unresolved_relocations']):
                raise ValueError(f'{path}: invalid exact verdict at {entry:08x}')
            if not any(s['va'] <= entry and entry + length <= s['va'] + s['virtual_bytes']
                       for s in sections):
                raise ValueError(f'{path}: function outside executable sections: {entry:08x}')
            if entry in exact and exact[entry] != length:
                raise ValueError(f'{entry:08x}: conflicting reference lengths')
            exact[entry] = length
            matching += 1
            constraints += int(row['relocations']) > 0
        reports.append({'path': str(path), 'exact_functions': matching})
    body_sum = sum(exact.values())
    unique_bytes = merged_bytes((entry, entry + length) for entry, length in exact.items())
    executable_bytes = sum(s['virtual_bytes'] for s in sections)
    return {
        'reference': str(reference_path),
        'reference_sha256': hashlib.sha256(reference).hexdigest(),
        'reference_file_bytes': len(reference),
        'reference_executable_sections': sections,
        'reference_executable_virtual_bytes': executable_bytes,
        'exact_distinct_functions_after_relocation': len(exact),
        'exact_reference_body_bytes_sum': body_sum,
        'exact_reference_body_bytes_union': unique_bytes,
        'overlapping_body_bytes_removed': body_sum - unique_bytes,
        'executable_byte_coverage_percent': round(100 * unique_bytes / executable_bytes, 6),
        'required_executable_bytes_at_95_percent': (95 * executable_bytes + 99) // 100,
        'required_executable_bytes_at_100_percent': executable_bytes,
        'final_file_acceptance_percent': 100,
        'reports': reports,
        'linked_dll_match_verified': False,
        'scope': 'Verified object-function bodies assuming reference-address placement; '
                 'not a linked DLL or file byte equality percentage',
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reports', nargs='+', type=Path)
    parser.add_argument('--reference', type=Path, default=DLL)
    parser.add_argument('--output', type=Path)
    args = parser.parse_args()
    result = audit(args.reports, args.reference)
    text = json.dumps(result, indent=2) + '\n'
    if args.output:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text(text)
    print(text)


if __name__ == '__main__':
    main()

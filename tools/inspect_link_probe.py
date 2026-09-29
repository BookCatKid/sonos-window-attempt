#!/usr/bin/env python3
"""Measure the pinned MSVC linked wrapper probe against the Sonos reference."""

import argparse
import json
import re
import struct
from pathlib import Path

from classify_functions import DLL, function_bytes, section_map

BODY_FAMILIES = (
    ('Init', 'RefWrapper', 0x101a8d90, 41),
    ('Assign', 'RefWrapper', 0x101b2980, 61),
    ('Cleanup', 'ResourceOwner', 0x101d2970, 33),
)


def pe_profile(data):
    offset = struct.unpack_from('<I', data, 0x3c)[0]
    if data[:2] != b'MZ' or data[offset:offset + 4] != b'PE\0\0':
        raise ValueError('expected PE image')
    coff = offset + 4
    optional = coff + 20
    section_count = struct.unpack_from('<H', data, coff + 2)[0]
    section_head = optional + struct.unpack_from('<H', data, coff + 16)[0]
    names = [data[section_head + i * 40:section_head + i * 40 + 8]
             .split(b'\0')[0].decode('ascii', errors='replace')
             for i in range(section_count)]
    return {
        'machine': hex(struct.unpack_from('<H', data, coff)[0]),
        'image_base': hex(struct.unpack_from('<I', data, optional + 28)[0]),
        'section_alignment': struct.unpack_from('<I', data, optional + 32)[0],
        'file_alignment': struct.unpack_from('<I', data, optional + 36)[0],
        'dll_characteristics': hex(struct.unpack_from('<H', data, optional + 70)[0]),
        'sections': names,
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('candidate', type=Path)
    parser.add_argument('map_file', type=Path)
    parser.add_argument('--allow-partial', action='store_true',
                        help='accept older probes that link only some body families')
    args = parser.parse_args()
    candidate = args.candidate.read_bytes()
    reference = DLL.read_bytes()
    map_text = args.map_file.read_text(errors='replace')
    candidate_base, candidate_sections = section_map(candidate)
    reference_base, reference_sections = section_map(reference)
    bodies = []
    for method, class_name, reference_va, size in BODY_FAMILIES:
        symbol = re.compile(r'\?' + method + '@' + class_name +
                            r'\S+\s+([0-9a-fA-F]{8})\s+f\s+')
        match = symbol.search(map_text)
        if not match:
            bodies.append({'method': f'{class_name}::{method}', 'present': False})
            continue
        linked_va = int(match.group(1), 16)
        body = function_bytes(candidate, linked_va, size,
                              candidate_base, candidate_sections)
        original = function_bytes(reference, reference_va, size,
                                  reference_base, reference_sections)
        exact = len(body) == len(original) == size and body == original
        bodies.append({'method': f'{class_name}::{method}', 'present': True,
                       'linked_va': hex(linked_va), 'reference_va': hex(reference_va),
                       'exact_bytes': sum(a == b for a, b in zip(body, original)),
                       'body_size': size, 'byte_identical': exact})
    aligned = sum(a == b for a, b in zip(reference, candidate))
    result = {
        'candidate_file_bytes': len(candidate),
        'reference_file_bytes': len(reference),
        'aligned_identical_reference_bytes': aligned,
        'aligned_identical_reference_percent': round(100 * aligned / len(reference), 6),
        'linked_bodies': bodies,
        'linked_bodies_exact': sum(item.get('byte_identical', False) for item in bodies),
        'candidate_pe': pe_profile(candidate),
        'reference_pe': pe_profile(reference),
        'scope': 'Linked ownership-family DLL probe; not a full reconstruction',
    }
    print(json.dumps(result, indent=2))
    required = [item for item in bodies if item['present']] if args.allow_partial else bodies
    if not required or not all(item.get('byte_identical', False) for item in required):
        raise SystemExit(1)


if __name__ == '__main__':
    main()

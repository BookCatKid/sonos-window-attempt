#!/usr/bin/env python3
"""Measure the pinned MSVC linked wrapper probe against the Sonos reference."""

import argparse
import json
import re
import struct
from pathlib import Path

from classify_functions import DLL, function_bytes, section_map

REFERENCE_WRAPPER_VA = 0x101a8d90
REFERENCE_WRAPPER_SIZE = 41
LINKED_SYMBOL = re.compile(r'\?Init@RefWrapper\S+\s+([0-9a-fA-F]{8})\s+f\s+')


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
    args = parser.parse_args()
    candidate = args.candidate.read_bytes()
    reference = DLL.read_bytes()
    match = LINKED_SYMBOL.search(args.map_file.read_text(errors='replace'))
    if not match:
        parser.error('RefWrapper::Init missing from link map')
    linked_va = int(match.group(1), 16)
    candidate_base, candidate_sections = section_map(candidate)
    reference_base, reference_sections = section_map(reference)
    body = function_bytes(candidate, linked_va, REFERENCE_WRAPPER_SIZE,
                          candidate_base, candidate_sections)
    original = function_bytes(reference, REFERENCE_WRAPPER_VA,
                              REFERENCE_WRAPPER_SIZE, reference_base,
                              reference_sections)
    if len(body) != REFERENCE_WRAPPER_SIZE or len(original) != REFERENCE_WRAPPER_SIZE:
        parser.error('wrapper body not present in one of the PE images')
    aligned = sum(a == b for a, b in zip(reference, candidate))
    result = {
        'candidate_file_bytes': len(candidate),
        'reference_file_bytes': len(reference),
        'aligned_identical_reference_bytes': aligned,
        'aligned_identical_reference_percent': round(100 * aligned / len(reference), 6),
        'linked_wrapper_va': hex(linked_va),
        'representative_reference_wrapper_va': hex(REFERENCE_WRAPPER_VA),
        'linked_wrapper_exact_bytes': sum(a == b for a, b in zip(body, original)),
        'linked_wrapper_size': REFERENCE_WRAPPER_SIZE,
        'linked_wrapper_byte_identical': body == original,
        'candidate_pe': pe_profile(candidate),
        'reference_pe': pe_profile(reference),
        'scope': 'One-function linked DLL probe; not a full reconstruction',
    }
    print(json.dumps(result, indent=2))
    if not result['linked_wrapper_byte_identical']:
        raise SystemExit(1)


if __name__ == '__main__':
    main()

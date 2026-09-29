#!/usr/bin/env python3
"""Profile identified function coverage and unclassified bytes in the reference PE."""

import csv
import json
import struct

from classify_functions import DLL, INVENTORY


def u16(data, position):
    return struct.unpack_from('<H', data, position)[0]


def u32(data, position):
    return struct.unpack_from('<I', data, position)[0]


def main():
    image = DLL.read_bytes()
    pe = u32(image, 0x3c)
    coff = pe + 4
    optional = coff + 20
    image_base = u32(image, optional + 28)
    first_section = optional + u16(image, coff + 16)
    sections = {}
    for index in range(u16(image, coff + 2)):
        header = first_section + index * 40
        name = image[header:header + 8].split(b'\0')[0].decode('ascii')
        rva = u32(image, header + 12)
        raw_size = u32(image, header + 16)
        raw_offset = u32(image, header + 20)
        sections[name] = (rva, image[raw_offset:raw_offset + raw_size])
    text_rva, text_bytes = sections['.text']
    covered = bytearray(len(text_bytes))
    with INVENTORY.open(newline='') as file:
        for row in csv.DictReader(file, delimiter='\t'):
            offset = int(row['entry'], 16) - image_base - text_rva
            size = int(row['body_bytes'])
            if 0 <= offset and offset + size <= len(covered):
                covered[offset:offset + size] = b'\1' * size
    uncovered = len(covered) - sum(covered)
    uncovered_cc = sum(byte == 0xcc for index, byte in enumerate(text_bytes)
                       if not covered[index])
    result = {
        'reference_file_bytes': len(image),
        'text_raw_bytes': len(text_bytes),
        'text_identified_function_union_bytes': sum(covered),
        'text_unclassified_bytes': uncovered,
        'text_unclassified_cc_bytes': uncovered_cc,
        'text_unclassified_other_bytes': uncovered - uncovered_cc,
        'sections': {name: {'raw_bytes': len(data),
                            'zero_bytes': data.count(0),
                            'cc_bytes': data.count(0xcc)}
                     for name, (_rva, data) in sections.items()},
        'scope': 'Static reference PE byte profile; unclassified bytes are not assumed to be padding',
    }
    print(json.dumps(result, indent=2))


if __name__ == '__main__':
    main()

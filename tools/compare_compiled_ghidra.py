#!/usr/bin/env python3
"""Compare compiled x86 C++ functions with reference DLL instruction bodies.

Unlinked relocation slots are excluded from the fixed-byte score and prevent
an exact verdict. Results describe function bodies, never a whole-DLL match.
"""

import argparse
import csv
import json
import re
import struct
from collections import defaultdict
from pathlib import Path

from capstone import Cs, CS_ARCH_X86, CS_MODE_32

from classify_functions import DLL, function_bytes, section_map

DISASSEMBLER = Cs(CS_ARCH_X86, CS_MODE_32)


def u16(data, pos):
    return struct.unpack_from('<H', data, pos)[0]


def u32(data, pos):
    return struct.unpack_from('<I', data, pos)[0]


def read_coff(path):
    data = path.read_bytes()
    bigobj = len(data) >= 56 and u16(data, 0) == 0 and u16(data, 2) == 0xffff
    if bigobj:
        if u16(data, 6) != 0x14c:
            raise ValueError(f'{path}: expected x86 COFF BigObj')
        section_count = u32(data, 44)
        symbol_start = u32(data, 48)
        symbol_count = u32(data, 52)
        section_start = 56
        symbol_size = 20
        section_number_offset = 12
        type_offset = 16
        storage_offset = 18
        aux_offset = 19
    elif u16(data, 0) == 0x14c:
        section_count = u16(data, 2)
        symbol_start = u32(data, 8)
        symbol_count = u32(data, 12)
        section_start = 20 + u16(data, 16)
        symbol_size = 18
        section_number_offset = 12
        type_offset = 14
        storage_offset = 16
        aux_offset = 17
    else:
        raise ValueError(f'{path}: expected x86 COFF')
    strings = symbol_start + symbol_count * symbol_size
    sections = []
    for number in range(section_count):
        head = section_start + number * 40
        raw_size = u32(data, head + 16)
        raw_start = u32(data, head + 20)
        rel_start = u32(data, head + 24)
        rel_count = u16(data, head + 32)
        name = data[head:head + 8].split(b'\0')[0].decode('ascii', errors='replace')
        relocs = [(u32(data, rel_start + i * 10), u16(data, rel_start + i * 10 + 8))
                  for i in range(rel_count)]
        sections.append({'name': name, 'code': data[raw_start:raw_start + raw_size],
                         'relocations': relocs})
    symbols = []
    index = 0
    while index < symbol_count:
        head = symbol_start + index * symbol_size
        raw_name = data[head:head + 8]
        if raw_name[:4] == b'\0\0\0\0':
            string_pos = strings + u32(raw_name, 4)
            end = data.index(b'\0', string_pos)
            name = data[string_pos:end].decode('utf-8', errors='replace')
        else:
            name = raw_name.split(b'\0')[0].decode('utf-8', errors='replace')
        section = (struct.unpack_from('<i', data, head + section_number_offset)[0]
                   if bigobj else struct.unpack_from('<h', data, head + section_number_offset)[0])
        aux_count = data[head + aux_offset]
        if section > 0:
            symbols.append({'name': name, 'offset': u32(data, head + 8),
                            'section': section, 'storage': data[head + storage_offset],
                            'type': u16(data, head + type_offset)})
        index += 1 + aux_count
    return sections, symbols


def function_symbols(sections, symbols):
    by_section = defaultdict(list)
    for symbol in symbols:
        if symbol['storage'] != 2 or symbol['type'] & 0x20 == 0:
            continue
        if symbol['section'] > len(sections):
            continue
        if not sections[symbol['section'] - 1]['name'].startswith('.text'):
            continue
        match = re.search(r'(?:FUN|Unwind)_([0-9a-f]{8})', symbol['name'])
        if match:
            by_section[symbol['section']].append((symbol['offset'], match.group(1)))
    result = {}
    for section_number, entries in by_section.items():
        entries.sort()
        section = sections[section_number - 1]
        for index, (start, entry) in enumerate(entries):
            stop = entries[index + 1][0] if index + 1 < len(entries) else len(section['code'])
            code = section['code'][start:stop]
            instructions = list(DISASSEMBLER.disasm(code, 0))
            while instructions and instructions[-1].mnemonic in ('nop', 'int3'):
                instructions.pop()
            if instructions and instructions[-1].address + instructions[-1].size <= len(code):
                code = code[:instructions[-1].address + instructions[-1].size]
            relocs = [offset - start for offset, _type in section['relocations']
                      if start <= offset < start + len(code)]
            result[entry] = (code, relocs)
    return result


def compare_directory(directory, reference, image_base, pe_sections, object_path=None):
    sections, symbols = read_coff(object_path or directory / 'ghidra_recovered.obj')
    compiled = function_symbols(sections, symbols)
    rows = []
    with (directory / 'compiled-index.tsv').open(newline='') as file:
        for row in csv.DictReader(file, delimiter='\t'):
            entry = row['entry']
            expected = function_bytes(reference, int(entry, 16),
                                      int(row['reference_body_bytes']), image_base, pe_sections)
            candidate, relocs = compiled.get(entry, (b'', []))
            relocated = {offset for start in relocs for offset in range(start, start + 4)}
            compared = min(len(expected), len(candidate))
            fixed_positions = [i for i in range(compared) if i not in relocated]
            fixed_matches = sum(expected[i] == candidate[i] for i in fixed_positions)
            exact = bool(expected) and candidate == expected and not relocs
            same_length_fixed_match = (bool(expected) and len(candidate) == len(expected)
                                       and fixed_matches == len(fixed_positions))
            rows.append({'entry': entry, 'name': row['name'],
                         'reference_bytes': len(expected), 'compiled_bytes': len(candidate),
                         'relocations': len(relocs), 'fixed_compared': len(fixed_positions),
                         'fixed_matching': fixed_matches, 'exact': exact,
                         'same_length_fixed_match': same_length_fixed_match})
    return rows


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('output_dirs', nargs='+', type=Path)
    parser.add_argument('--object', type=Path,
                        help='Use this object for a single directory, e.g. a downloaded MSVC build')
    parser.add_argument('--report-name', default='match-report.tsv')
    args = parser.parse_args()
    if args.object and len(args.output_dirs) != 1:
        parser.error('--object requires exactly one output directory')
    reference = DLL.read_bytes()
    image_base, pe_sections = section_map(reference)
    unique = {}
    for directory in args.output_dirs:
        rows = compare_directory(directory, reference, image_base, pe_sections, args.object)
        with (directory / args.report_name).open('w', newline='') as file:
            writer = csv.DictWriter(file, fieldnames=rows[0].keys(), delimiter='\t') if rows else None
            if writer:
                writer.writeheader()
                writer.writerows(rows)
        unique.update((row['entry'], row) for row in rows)
    rows = list(unique.values())
    exact = [row for row in rows if row['exact']]
    fixed_match = [row for row in rows if row['same_length_fixed_match']]
    summary = {
        'object_compiled_functions': len(rows),
        'exact_function_bodies_without_relocations': len(exact),
        'exact_reference_body_bytes': sum(row['reference_bytes'] for row in exact),
        'same_length_fixed_byte_matches_pending_relocation': len(fixed_match),
        'same_length_fixed_match_reference_body_bytes': sum(
            row['reference_bytes'] for row in fixed_match),
        'same_length_function_bodies': sum(row['compiled_bytes'] == row['reference_bytes'] for row in rows),
        'functions_without_mapped_object_symbol': sum(row['compiled_bytes'] == 0 for row in rows),
        'functions_with_relocations': sum(row['relocations'] > 0 for row in rows),
        'fixed_bytes_matching_in_common_prefix': sum(row['fixed_matching'] for row in rows),
        'fixed_bytes_compared_in_common_prefix': sum(row['fixed_compared'] for row in rows),
        'scope': 'x86 COFF objects versus contiguous Ghidra function bodies; '
                 'not a full-DLL comparison',
    }
    print(json.dumps(summary, indent=2))


if __name__ == '__main__':
    main()

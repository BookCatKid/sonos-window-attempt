#!/usr/bin/env python3
"""Check semantic targets of MSVC COFF relocations against the reference DLL.

This verifies relocation targets for same-length, fixed-byte matching functions.
It does not claim that a reconstructed linked DLL has matching layout or bytes.
"""

import argparse
import csv
import json
import re
import struct
from collections import Counter, defaultdict
from pathlib import Path

from classify_functions import DLL, function_bytes, section_map

ROOT = Path(__file__).resolve().parents[1]
EXPORTS = ROOT / 'analysis' / 'exports.csv'
REPORT = ROOT / 'analysis' / 'compiled-cpp-scstr' / 'msvc-match-report.tsv'
INVENTORY = ROOT / 'analysis' / 'function-inventory.tsv'


def word(data, offset):
    return struct.unpack_from('<I', data, offset)[0]


def coff(path):
    data = path.read_bytes()
    if struct.unpack_from('<H', data, 0)[0] != 0x14c:
        raise ValueError('expected x86 COFF object')
    section_count = struct.unpack_from('<H', data, 2)[0]
    symbol_start, symbol_count = struct.unpack_from('<II', data, 8)
    section_start = 20 + struct.unpack_from('<H', data, 16)[0]
    string_start = symbol_start + symbol_count * 18
    sections = {}
    for number in range(1, section_count + 1):
        head = section_start + (number - 1) * 40
        name = data[head:head + 8].split(b'\0')[0].decode('ascii', errors='replace')
        raw_size, raw_start, rel_start = struct.unpack_from('<III', data, head + 16)
        rel_count = struct.unpack_from('<H', data, head + 32)[0]
        relocs = [struct.unpack_from('<IIH', data, rel_start + i * 10)
                  for i in range(rel_count)]
        sections[number] = {'name': name, 'code': data[raw_start:raw_start + raw_size],
                            'relocations': relocs}
    symbols = {}
    index = 0
    while index < symbol_count:
        head = symbol_start + index * 18
        raw = data[head:head + 8]
        if raw[:4] == b'\0' * 4:
            start = string_start + word(raw, 4)
            name = data[start:data.index(b'\0', start)].decode('utf-8', errors='replace')
        else:
            name = raw.split(b'\0')[0].decode('utf-8', errors='replace')
        value = word(data, head + 8)
        section = struct.unpack_from('<h', data, head + 12)[0]
        kind = struct.unpack_from('<H', data, head + 14)[0]
        storage = data[head + 16]
        symbols[index] = {'name': name, 'value': value, 'section': section,
                          'kind': kind, 'storage': storage}
        index += 1 + data[head + 17]
    return sections, symbols


def reference_bytes_at(data, va, length, image_base, sections):
    return function_bytes(data, va, length, image_base, sections)


def string_at(data, position, limit=4096):
    end = data.find(b'\0', position, position + limit)
    return data[position:end + 1] if end >= 0 else b''


def section_string(sections, symbol):
    section = sections.get(symbol['section'])
    if not section:
        return b''
    return string_at(section['code'], symbol['value'])


def matching_export(symbol_name, target_va, exports):
    match = re.search(r'\?([A-Za-z_]\w*)@SCStr@@', symbol_name)
    method = match.group(1) if match else ('operator==' if symbol_name.startswith('??8SCStr@@') else '')
    if not method:
        return False
    target = exports.get(target_va)
    if not target or f'SCStr::{method}' not in target['demangled']:
        return False
    # Distinguish the common two-argument and char/SCStr overloads.
    if method == 'int_allocRep':
        wants_two = 'PADI@Z' in symbol_name
        has_two = 'unsigned int' in target['demangled']
        if wants_two != has_two:
            return False
    if method == 'operator==':
        wants_char = 'PBD' in symbol_name
        has_char = 'char const *' in target['demangled']
        if wants_char != has_char:
            return False
    return True


def evaluate_relocation(entry, offset, relocation_type, symbol, sections,
                        reference_body, reference, image_base, pe_sections,
                        exports, thunks):
    if offset + 4 > len(reference_body):
        return 'outside_body'
    if relocation_type == 0x14:  # IMAGE_REL_I386_REL32
        displacement = struct.unpack_from('<i', reference_body, offset)[0]
        target = int(entry, 16) + offset + 4 + displacement
        target_name = symbol['name']
        thunk = re.search(r'thunk_FUN_[0-9a-f]{8}', target_name)
        if thunk:
            return ('function_target_match' if target in thunks.get(thunk.group(0), ())
                    else 'function_target_mismatch')
        function = re.search(r'FUN_([0-9a-f]{8})', target_name)
        if function:
            return 'function_target_match' if target == int(function.group(1), 16) else 'function_target_mismatch'
        return 'export_target_match' if matching_export(target_name, target, exports) else 'export_target_unverified'
    if relocation_type == 0x06:  # IMAGE_REL_I386_DIR32
        target = word(reference_body, offset)
        if not symbol['name'].startswith('??_C@'):
            return 'absolute_target_unverified'
        candidate_string = section_string(sections, symbol)
        if candidate_string:
            original_string = reference_bytes_at(reference, target, len(candidate_string),
                                                 image_base, pe_sections)
            return ('string_content_match' if original_string == candidate_string
                    else 'string_content_mismatch')
        return 'absolute_target_unverified'
    return 'unsupported_relocation_type'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('object', type=Path)
    parser.add_argument('--report', type=Path, default=REPORT)
    parser.add_argument('--output', type=Path,
                        default=ROOT / 'analysis' / 'compiled-cpp-scstr' /
                        'relocation-verification.tsv')
    args = parser.parse_args()
    sections, symbols = coff(args.object)
    with EXPORTS.open(newline='') as file:
        exports = {int(row['address']): row for row in csv.DictReader(file)}
    thunks = defaultdict(set)
    with INVENTORY.open(newline='') as file:
        for row in csv.DictReader(file, delimiter='\t'):
            if row['name'].startswith('thunk_FUN_'):
                thunks[row['name']].add(int(row['entry'], 16))
    with args.report.open(newline='') as file:
        rows = [row for row in csv.DictReader(file, delimiter='\t')
                if row['same_length_fixed_match'] == 'True']
    by_entry = {}
    for symbol in symbols.values():
        match = re.search(r'FUN_([0-9a-f]{8})', symbol['name'])
        if (match and match.group(1) not in by_entry and symbol['storage'] == 2
                and symbol['kind'] & 0x20 and symbol['section'] in sections
                and sections[symbol['section']]['name'].startswith('.text')):
            by_entry[match.group(1)] = symbol
    reference = DLL.read_bytes()
    image_base, pe_sections = section_map(reference)
    out_rows = []
    per_function = defaultdict(list)
    for row in rows:
        entry = row['entry']
        function = by_entry.get(entry)
        if not function:
            per_function[entry].append('object_symbol_unmapped')
            continue
        body = reference_bytes_at(reference, int(entry, 16), int(row['reference_bytes']),
                                  image_base, pe_sections)
        section = sections[function['section']]
        start = function['value']
        end = start + int(row['compiled_bytes'])
        for position, index, kind in section['relocations']:
            if not start <= position < end:
                continue
            offset = position - start
            target_symbol = symbols[index]
            verdict = evaluate_relocation(entry, offset, kind, target_symbol,
                                          sections, body, reference, image_base,
                                          pe_sections, exports, thunks)
            per_function[entry].append(verdict)
            out_rows.append({'entry': entry, 'body_offset': offset,
                             'relocation_type': kind, 'symbol': target_symbol['name'],
                             'verdict': verdict})
    args.output.parent.mkdir(parents=True, exist_ok=True)
    with args.output.open('w', newline='') as file:
        writer = csv.DictWriter(file, fieldnames=['entry', 'body_offset',
                                'relocation_type', 'symbol', 'verdict'], delimiter='\t')
        writer.writeheader()
        writer.writerows(out_rows)
    verified = {'function_target_match', 'export_target_match', 'string_content_match'}
    all_verified = [row for row in rows if per_function[row['entry']]
                    and all(item in verified for item in per_function[row['entry']])]
    print(json.dumps({
        'same_length_fixed_byte_matching_functions': len(rows),
        'relocation_verdicts': dict(Counter(row['verdict'] for row in out_rows)),
        'all_relocation_targets_semantically_verified': len(all_verified),
        'all_verified_reference_body_bytes': sum(int(row['reference_bytes']) for row in all_verified),
        'scope': 'COFF relocation target semantics only; no linked DLL byte match',
    }, indent=2))


if __name__ == '__main__':
    main()

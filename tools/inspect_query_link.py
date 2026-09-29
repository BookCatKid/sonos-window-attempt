#!/usr/bin/env python3
"""Compare linked C++ query bodies with the reference, masking relocation slots."""

import argparse
import csv
import json
import re
import struct
from pathlib import Path

from classify_functions import DLL, function_bytes, section_map
from verify_scstr_relocations import coff, evaluate_relocation, section_string

ROOT = Path(__file__).resolve().parents[1]
INDEX = ROOT / 'src' / 'generated' / 'query-family-index.tsv'
EXPORTS = ROOT / 'analysis' / 'exports.csv'
EQUALITY = ('??8SCStr@@QBE_NPBD@Z', 0x101a2dc0, 74)


def linked_symbols(map_text):
    result = {}
    for line in map_text.splitlines():
        match = re.match(r'\s*[0-9a-fA-F]{4}:[0-9a-fA-F]{8}\s+'
                         r'(\S+)\s+([0-9a-fA-F]{8})\s+f\s+', line)
        if match:
            result[match.group(1)] = int(match.group(2), 16)
    return result


def follow_jump(image, address, image_base, sections):
    for _ in range(4):
        head = function_bytes(image, address, 5, image_base, sections)
        if len(head) != 5 or head[0] != 0xe9:
            break
        address += 5 + struct.unpack_from('<i', head, 1)[0]
    return address


def inspect(candidate, reference, linked, obj_sections, obj_symbols,
            candidate_base, candidate_sections, reference_base, reference_sections,
            exports, name, entry, size):
    symbol = next((item for item in obj_symbols.values()
                   if item['name'] == name and item['section'] > 0), None)
    if symbol is None or name not in linked:
        return {'name': name, 'error': 'missing object or linked symbol'}
    section = obj_sections[symbol['section']]
    start = symbol['value']
    relocation_records = [(offset - start, obj_symbols[target], kind)
                          for offset, target, kind in section['relocations']
                   if start <= offset < start + size]
    relocations = [offset for offset, _symbol, _kind in relocation_records]
    if any(offset < 0 or offset + 4 > size for offset in relocations):
        return {'name': name, 'error': 'relocation crosses body boundary'}
    actual = function_bytes(candidate, linked[name], size,
                            candidate_base, candidate_sections)
    expected = function_bytes(reference, entry, size,
                              reference_base, reference_sections)
    if len(actual) != size or len(expected) != size:
        return {'name': name, 'error': 'body missing in PE image'}
    relocated = {position for offset in relocations
                 for position in range(offset, offset + 4)}
    fixed = [position for position in range(size) if position not in relocated]
    matches = sum(actual[position] == expected[position] for position in fixed)
    target_verdicts = []
    for offset, target_symbol, kind in relocation_records:
        reference_verdict = evaluate_relocation(f'{entry:08x}', offset, kind,
                                                target_symbol, obj_sections,
                                                expected, reference,
                                                reference_base, reference_sections,
                                                exports, {})
        if kind == 6:
            linked_target = struct.unpack_from('<I', actual, offset)[0]
            literal = section_string(obj_sections, target_symbol)
            candidate_literal = function_bytes(candidate, linked_target,
                                               len(literal), candidate_base,
                                               candidate_sections)
            linked_match = bool(literal) and candidate_literal == literal
        elif kind == 0x14:
            displacement = struct.unpack_from('<i', actual, offset)[0]
            linked_target = linked[name] + offset + 4 + displacement
            linked_match = (follow_jump(candidate, linked_target, candidate_base,
                                        candidate_sections) == linked.get(target_symbol['name']))
        else:
            linked_match = False
        target_verdicts.append(reference_verdict in
                               ('export_target_match', 'string_content_match')
                               and linked_match)
    return {'name': name, 'linked_va': hex(linked[name]),
            'reference_va': hex(entry), 'size': size,
            'relocations': len(relocations), 'fixed_bytes': len(fixed),
            'fixed_matching': matches, 'whole_body_exact': actual == expected,
            'target_matches': sum(target_verdicts),
            'target_count': len(target_verdicts)}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('candidate', type=Path)
    parser.add_argument('map_file', type=Path)
    parser.add_argument('query_object', type=Path)
    parser.add_argument('equality_object', type=Path)
    args = parser.parse_args()
    candidate = args.candidate.read_bytes()
    reference = DLL.read_bytes()
    candidate_base, candidate_sections = section_map(candidate)
    reference_base, reference_sections = section_map(reference)
    linked = linked_symbols(args.map_file.read_text(errors='replace'))
    with EXPORTS.open(newline='') as file:
        exports = {int(row['address']): row for row in csv.DictReader(file)}
    query_sections, query_symbols = coff(args.query_object)
    equality_sections, equality_symbols = coff(args.equality_object)
    rows = []
    with INDEX.open(newline='') as file:
        for item in csv.DictReader(file, delimiter='\t'):
            name = next((symbol['name'] for symbol in query_symbols.values()
                         if re.search(r'\?FUN_' + item['entry'] + '@', symbol['name'])), '')
            rows.append(inspect(candidate, reference, linked, query_sections,
                                query_symbols, candidate_base, candidate_sections,
                                reference_base, reference_sections, exports, name,
                                int(item['entry'], 16), int(item['reference_body_bytes'])))
    rows.append(inspect(candidate, reference, linked, equality_sections,
                        equality_symbols, candidate_base, candidate_sections,
                        reference_base, reference_sections, exports, *EQUALITY))
    failures = [item for item in rows if item.get('error') or
                item['fixed_matching'] != item['fixed_bytes'] or
                item['target_matches'] != item['target_count']]
    result = {
        'functions': len(rows), 'complete_fixed_matches': len(rows) - len(failures),
        'function_body_bytes': sum(item.get('size', 0) for item in rows),
        'fixed_bytes': sum(item.get('fixed_bytes', 0) for item in rows),
        'fixed_matching': sum(item.get('fixed_matching', 0) for item in rows),
        'whole_body_exact': sum(item.get('whole_body_exact', False) for item in rows),
        'relocations': sum(item.get('relocations', 0) for item in rows),
        'target_matches': sum(item.get('target_matches', 0) for item in rows),
        'failures': failures[:20],
        'scope': 'Linked function bodies, relocation slots excluded from fixed-byte score',
    }
    print(json.dumps(result, indent=2))
    if failures or len(rows) != 633:
        raise SystemExit(1)


if __name__ == '__main__':
    main()

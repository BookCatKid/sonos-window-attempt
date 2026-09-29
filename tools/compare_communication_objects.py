#!/usr/bin/env python3
"""Measure pinned-MSVC communication C++ objects against native function bodies."""

import argparse
import json
import re
import struct
from pathlib import Path

from capstone import Cs, CS_ARCH_X86, CS_MODE_32

from classify_functions import DLL, function_bytes, section_map
from verify_scstr_relocations import coff


TARGETS = (
    ('discovery_get_household', 0x102f7150, 97, r'^\?getHousehold@SCLibrary@@'),
    ('discovery_native_start', 0x11096620, 61, r'^\?start@DiscoveryObject@@'),
    ('soap_builder_candidate', 0x111c52e0, 392, r'^\?Build@SoapRequestBuilder@@'),
    ('soap_builder_storage_candidate', 0x111c3530, 286,
     r'^\?Initialize@SoapRequestStorage@@'),
    ('soap_length_candidate', 0x11252c80, 255,
     r'soap_length_candidate'),
    ('soap_length_parameter_helper', 0x11253130, 188,
     r'soap_length_parameter_helper'),
)
DISASSEMBLER = Cs(CS_ARCH_X86, CS_MODE_32)
DISCOVERY_START_TARGETS = {
    '@prepare_discovery_object@4': 0x1006156d,
    '_acquire_discovery_result': 0x1000daa3,
    '_refresh_discovery_context': 0x1004ec47,
    '@advance_discovery_context@4': 0x10075f45,
    '?finish@DiscoverySubobject@@QAEXXZ': 0x1003ceb6,
}


def body_in_object(path, pattern):
    sections, symbols = coff(path)
    matches = [symbol for symbol in symbols.values()
               if symbol['section'] in sections and symbol['storage'] == 2
               and symbol['kind'] & 0x20 and
               re.search(pattern, symbol['name'])]
    if len(matches) != 1:
        raise ValueError(f'{path}: expected one {pattern} symbol, found {len(matches)}')
    symbol = matches[0]
    section = sections[symbol['section']]
    start = symbol['value']
    next_functions = [other['value'] for other in symbols.values()
                      if other['section'] == symbol['section'] and
                      other['storage'] == 2 and other['kind'] & 0x20 and
                      other['value'] > start]
    stop = min(next_functions) if next_functions else len(section['code'])
    candidate = section['code'][start:stop]
    instructions = list(DISASSEMBLER.disasm(candidate, 0))
    while instructions and instructions[-1].mnemonic in ('nop', 'int3'):
        instructions.pop()
    if instructions:
        candidate = candidate[:instructions[-1].address + instructions[-1].size]
    relocations = [(offset - start, symbols[target]['name'], kind)
                   for offset, target, kind in section['relocations']
                   if start <= offset < start + len(candidate)]
    return candidate, relocations, symbol['name']


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('artifact_dir', type=Path)
    args = parser.parse_args()
    reference = DLL.read_bytes()
    image_base, pe_sections = section_map(reference)
    rows = []
    for name, entry, size, pattern in TARGETS:
        try:
            candidate, relocations, symbol = body_in_object(
                args.artifact_dir / f'{name}.obj', pattern)
            expected = function_bytes(reference, entry, size,
                                      image_base, pe_sections)
            if len(expected) != size:
                raise ValueError('reference body missing')
            relocated = {position for offset, _symbol, _kind in relocations
                         for position in range(offset, offset + 4)}
            shared = min(len(candidate), len(expected))
            fixed = [position for position in range(shared)
                     if position not in relocated]
            matches = sum(candidate[position] == expected[position]
                          for position in fixed)
            target_checks = []
            if name == 'discovery_native_start':
                for offset, target_symbol, kind in relocations:
                    actual_target = (entry + offset + 4 +
                                     struct.unpack_from('<i', expected, offset)[0])
                    target_checks.append(kind == 0x14 and
                                         DISCOVERY_START_TARGETS.get(target_symbol) ==
                                         actual_target)
            rows.append({'name': name, 'reference_va': hex(entry),
                         'reference_bytes': size, 'compiled_bytes': len(candidate),
                         'symbol': symbol, 'relocations': len(relocations),
                         'fixed_matching': matches, 'fixed_compared': len(fixed),
                         'same_length_all_fixed_match': len(candidate) == size and
                         matches == len(fixed),
                         'relocation_targets_verified':
                         len(target_checks) if target_checks and all(target_checks) else 0,
                         'relocation_targets_checked': len(target_checks),
                         'complete_relocatable_body_match':
                         len(candidate) == size and matches == len(fixed) and
                         len(target_checks) == len(relocations) and all(target_checks),
                         'exact_body': not relocations and candidate == expected})
        except Exception as error:
            rows.append({'name': name, 'reference_va': hex(entry),
                         'error': str(error)})
    print(json.dumps({'functions': rows,
                      'same_length_all_fixed_matches': sum(
                          row.get('same_length_all_fixed_match', False) for row in rows),
                      'complete_relocatable_body_matches': sum(
                          row.get('complete_relocatable_body_match', False)
                          for row in rows),
                      'exact_bodies': sum(row.get('exact_body', False) for row in rows)},
                     indent=2))
    if any('error' in row for row in rows):
        raise SystemExit(1)


if __name__ == '__main__':
    main()

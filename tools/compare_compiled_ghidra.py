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
from collections import defaultdict, ChainMap
from pathlib import Path

from capstone import Cs, CS_ARCH_X86, CS_MODE_32

from classify_functions import DLL, function_bytes, section_map

DISASSEMBLER = Cs(CS_ARCH_X86, CS_MODE_32)
DEFAULT_SYMBOLS = Path(__file__).resolve().parents[1] / 'analysis' / 'thunk-recovery-full' / 'symbols.jsonl'


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
        relocs = [
            {
                'offset': u32(data, rel_start + i * 10),
                'symbol_index': u32(data, rel_start + i * 10 + 4),
                'type': u16(data, rel_start + i * 10 + 8),
            }
            for i in range(rel_count)
        ]
        sections.append({'name': name, 'code': data[raw_start:raw_start + raw_size],
                         'relocations': relocs,'characteristics':u32(data,head+36)})
    symbols = []
    symbols_by_index = {}
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
        symbol = {'name': name, 'offset': u32(data, head + 8),
                  'section': section, 'storage': data[head + storage_offset],
                  'type': u16(data, head + type_offset)}
        symbols_by_index[index] = symbol
        if section > 0:
            symbols.append(symbol)
        index += 1 + aux_count
    return sections, symbols, symbols_by_index


def function_symbols(sections, symbols, symbols_by_index):
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
            relocs = []
            for reloc in section['relocations']:
                if start <= reloc['offset'] < start + len(code):
                    symbol = symbols_by_index.get(reloc['symbol_index'])
                    relocs.append({
                        'offset': reloc['offset'] - start,
                        'type': reloc['type'],
                        'symbol': symbol['name'] if symbol else '',
                    })
            result[entry] = (code, relocs)
    return result


def generated_symbol_name(name):
    """Extract the Ghidra-generated logical name from an MSVC symbol."""
    # Internal EH names include the parent function name but denote a different
    # address. They require independent graph verification, never FUN_ fallback.
    if name.startswith(('__ehhandler$', '__ehfuncinfo$', '__unwindtable$',
                        '__unwindmap$', '__unwindfunclet$')):
        return None
    match = re.search(r'((?:thunk_)?FUN_[0-9a-fA-F]{8})', name)
    if match:
        return match.group(1)
    match = re.search(r'(ghidra_jump_target_[0-9a-fA-F]{8})', name)
    if match:
        return match.group(1)
    match = re.search(r'(ghidra_vftable_[A-Za-z0-9_]+)', name)
    if match:
        return match.group(1)
    match = re.search(r'(_?DAT_[0-9a-fA-F]{8}|PTR_[A-Za-z0-9_]+|s_[A-Za-z0-9_]+)', name)
    if match:
        return match.group(1)
    # A global the recovered source declares itself is emitted by the compiler
    # in mangled form, ``?g_lSCObjCount@@3IA``, while the reference image records
    # the same global by its plain name.
    match = re.match(r'\?([A-Za-z_]\w*)@@', name)
    return match.group(1) if match else None


def load_symbol_vas(path):
    """Load every concrete address for each exported Ghidra symbol name."""
    result = defaultdict(set)
    if not path or not path.is_file():
        return result
    with path.open() as file:
        for line in file:
            record = json.loads(line)
            try:
                address = int(record['address'], 16)
            except (KeyError, TypeError, ValueError):
                continue
            name = record.get('name')
            qualified_name = record.get('qualified_name')
            if name:
                result[name].add(address)
                # Relocations name the imported method with the pointee constness
                # the decompiler inferred, which can differ from the decorated
                # name the reference image carries. Index the ABI-equivalent form
                # so those references still reach the import thunk.
                result[scstr_abi_key(name)].add(address)
            if qualified_name:
                result[qualified_name].add(address)
                result[scstr_abi_key(qualified_name)].add(address)
                if qualified_name.endswith('::vftable'):
                    owner = qualified_name[:-len('::vftable')]
                    alias = 'ghidra_vftable_' + re.sub(r'[^0-9A-Za-z_]', '_', owner.replace('::', '__'))
                    result[alias].add(address)
    return {name: sorted(addresses) for name, addresses in result.items()}


def scstr_abi_key(name):
    """Ignore access control and pointee constness; retain overload/calling ABI."""
    if '@SCStr@@' not in name:
        return name
    name = re.sub(r'(@SCStr@@)[AQI]', r'\1Q', name, count=1)
    return name.replace('PBD', 'PAD')


def add_scstr_export_targets(symbol_vas, reference, image_base, pe_sections):
    """Resolve exported SCStr signatures through reference incremental-link jumps."""
    path = DEFAULT_SYMBOLS.parents[1] / 'exports.csv'
    if not path.is_file():
        return
    with path.open(newline='') as file:
        for row in csv.DictReader(file):
            name = row['name']
            if '@SCStr@@' not in name:
                continue
            targets = set(symbol_vas.get(scstr_abi_key(name), []))
            address = int(row['address'])
            for _ in range(16):
                if address in targets:
                    break
                targets.add(address)
                code = function_bytes(reference, address, 5, image_base, pe_sections)
                if len(code) != 5 or code[0] != 0xe9:
                    break
                address += 5 + struct.unpack_from('<i', code, 1)[0]
            symbol_vas[scstr_abi_key(name)] = sorted(targets)



def relocation_value(reloc_type, target_va, addend, entry_va, offset, image_base):
    if reloc_type == 0x0006:  # IMAGE_REL_I386_DIR32
        return target_va + addend
    if reloc_type == 0x0007:  # IMAGE_REL_I386_DIR32NB
        return target_va - image_base + addend
    if reloc_type == 0x0014:  # IMAGE_REL_I386_REL32
        return target_va + addend - (entry_va + offset + 4)
    return None


def resolve_known_relocations(candidate, expected, relocs, entry_va, image_base, symbol_vas):
    """Apply x86 COFF relocations whose original target VA is encoded in the symbol.

    This resolves generated FUN_/thunk_FUN_ references and lowered Ghidra vtable
    aliases without linking the object. Unknown compiler/runtime symbols remain
    unresolved and cannot contribute to the relocation-aware exact verdict.
    """
    resolved = 0
    unresolved = 0
    patched = bytearray(candidate)
    for reloc in relocs:
        offset = reloc['offset']
        if offset < 0 or offset + 4 > len(patched):
            unresolved += 1
            continue
        logical_name = (reloc['symbol'] if reloc['symbol'] in symbol_vas else
                        generated_symbol_name(reloc['symbol']) or
                        scstr_abi_key(reloc['symbol']))
        if logical_name is None:
            unresolved += 1
            continue
        targets = symbol_vas.get(logical_name, [])
        if not targets:
            match = re.search(r'(?:FUN_|_?DAT_|ghidra_jump_target_)([0-9a-fA-F]{8})', logical_name)
            targets = [int(match.group(1), 16)] if match else []
        if not targets:
            unresolved += 1
            continue
        addend = u32(patched, offset)
        reloc_type = reloc['type']
        values = [relocation_value(reloc_type, target, addend, entry_va, offset, image_base)
                  for target in targets]
        values = [value for value in values if value is not None]
        if not values:
            unresolved += 1
            continue
        expected_field = expected[offset:offset + 4]
        matching_values = [value for value in values
                           if struct.pack('<I', value & 0xffffffff) == expected_field]
        if matching_values:
            value = matching_values[0]
        elif len(values) == 1:
            value = values[0]
        else:
            unresolved += 1
            continue
        struct.pack_into('<I', patched, offset, value & 0xffffffff)
        resolved += 1
    return bytes(patched), resolved, unresolved


def add_thunk_site_targets(symbol_vas, reference, image_base, pe_sections, inventory_path):
    """Alias every five-byte ``E9`` forwarder as a ``thunk_FUN_<target>`` site.

    The reference calls the same recovered body through several distinct jump
    thunks (incremental-link, export forwarders, Ordinal_ entries). Ghidra only
    records ``thunk_FUN_`` names at a subset of the sites, so a generated call
    can otherwise resolve to the body or the wrong site instead of the site the
    reference used.
    """
    if not inventory_path or not Path(inventory_path).is_file():
        return
    thunk_sites = defaultdict(list)
    with Path(inventory_path).open(newline='') as file:
        for row in csv.DictReader(file, delimiter='\t'):
            if row.get('body_bytes') != '5':
                continue
            va = int(row['entry'], 16)
            code = function_bytes(reference, va, 5, image_base, pe_sections)
            if len(code) != 5 or code[0] != 0xE9:
                continue
            target = va + 5 + struct.unpack_from('<i', code, 1)[0]
            thunk_sites[target].append(va)
    for target, sites in thunk_sites.items():
        # REL32 relocations may legally land on any forwarder for the body, so
        # both the bare FUN_ name and the thunk_ alias must offer every site.
        for key in (f'thunk_FUN_{target:08x}', f'FUN_{target:08x}'):
            merged = sorted(set(symbol_vas.get(key, ())) | set(sites))
            symbol_vas[key] = merged


def security_cookie_va(reference, image_base, pe_sections):
    """Read the /GS security cookie address out of the reference load config."""
    if len(reference) < 0x40:
        return None
    optional = u32(reference, 0x3c) + 24
    rva = u32(reference, optional + 96 + 10 * 8)
    load_config = function_bytes(reference, image_base + rva, 72, image_base, pe_sections)
    if len(load_config) != 72 or u32(load_config, 0) < 64:
        return None
    cookie = u32(load_config, 60)
    return cookie if function_bytes(reference, cookie, 4, image_base, pe_sections) else None


def compare_directory(directory, reference, image_base, pe_sections, symbol_vas, object_path=None,
                      accepted_fragment_sink=None):
    selected_object = object_path or directory / 'ghidra_recovered.obj'
    sections, symbols, symbols_by_index = read_coff(
        selected_object)
    cookie = security_cookie_va(reference, image_base, pe_sections)
    if cookie is not None:
        symbol_vas = ChainMap({'___security_cookie': [cookie]}, symbol_vas)
    if (directory / 'reference-eh-inventory.json').is_file():
        from verify_eh_placement import verified_eh_targets
        extra_targets, evidence = verified_eh_targets(directory, selected_object,
            reference, image_base, pe_sections, symbol_vas)
        symbol_vas = ChainMap(extra_targets, symbol_vas)
        if evidence is not None:
            (directory / f'eh-placement-{selected_object.stem}.json').write_text(
                json.dumps(evidence, indent=2) + '\n')
    compiled = function_symbols(sections, symbols, symbols_by_index)
    # String contents independently establish whether a reference data address
    # can be used for this literal. This is a placement constraint for linking.
    literals = {}
    for symbol in symbols:
        if not symbol['name'].startswith('??_C@_0') or not 0 < symbol['section'] <= len(sections):
            continue
        section = sections[symbol['section'] - 1]
        start = symbol['offset']
        end = section['code'].find(b'\0', start)
        if end >= start and not any(start <= r['offset'] <= end for r in section['relocations']):
            literals[symbol['name']] = section['code'][start:end + 1]
    rows = []
    with (directory / 'compiled-index.tsv').open(newline='') as file:
        for row in csv.DictReader(file, delimiter='\t'):
            entry = row['entry']
            expected = function_bytes(reference, int(entry, 16),
                                      int(row['reference_body_bytes']), image_base, pe_sections)
            candidate, relocs = compiled.get(entry, (b'', []))
            relocated = {offset for reloc in relocs
                         for offset in range(reloc['offset'], reloc['offset'] + 4)}
            compared = min(len(expected), len(candidate))
            fixed_positions = [i for i in range(compared) if i not in relocated]
            fixed_matches = sum(expected[i] == candidate[i] for i in fixed_positions)
            exact = bool(expected) and candidate == expected and not relocs
            targets_for_function = ChainMap({}, symbol_vas)
            for reloc in relocs:
                literal = literals.get(reloc['symbol'])
                offset = reloc['offset']
                if (not literal or reloc['type'] != 0x6 or offset < 0 or
                        offset + 4 > min(len(expected), len(candidate))):
                    continue
                target = u32(expected, offset)
                if function_bytes(reference, target, len(literal), image_base, pe_sections) == literal:
                    targets_for_function.maps[0].setdefault(reloc['symbol'], []).append(
                        target - u32(candidate, offset))
            resolved_candidate, resolved_relocs, unresolved_relocs = resolve_known_relocations(
                candidate, expected, relocs, int(entry, 16), image_base, targets_for_function)
            relocation_exact = (bool(expected) and resolved_candidate == expected
                                and unresolved_relocs == 0)
            same_length_fixed_match = (bool(expected) and len(candidate) == len(expected)
                                       and fixed_matches == len(fixed_positions))
            if relocation_exact and accepted_fragment_sink is not None:
                accepted_fragment_sink(entry, resolved_candidate, candidate, relocs,
                                       targets_for_function, literals)
            rows.append({'entry': entry, 'name': row['name'],
                         'reference_bytes': len(expected), 'compiled_bytes': len(candidate),
                         'relocations': len(relocs), 'fixed_compared': len(fixed_positions),
                         'fixed_matching': fixed_matches, 'exact': exact,
                         'resolved_relocations': resolved_relocs,
                         'unresolved_relocations': unresolved_relocs,
                         'exact_after_known_relocations': relocation_exact,
                         'same_length_fixed_match': same_length_fixed_match})
    return rows


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('output_dirs', nargs='+', type=Path)
    parser.add_argument('--object', type=Path,
                        help='Use this object for a single directory, e.g. a downloaded MSVC build')
    parser.add_argument('--objects-dir', type=Path,
                        help='Map each input directory basename to BASENAME.obj in this artifact directory')
    parser.add_argument('--report-name', default='match-report.tsv')
    parser.add_argument('--symbols', type=Path, default=DEFAULT_SYMBOLS,
                        help='Ghidra symbols.jsonl used to resolve generated relocation targets')
    args = parser.parse_args()
    if args.object and args.objects_dir:
        parser.error('--object and --objects-dir are mutually exclusive')
    if args.object and len(args.output_dirs) != 1:
        parser.error('--object requires exactly one output directory')
    reference = DLL.read_bytes()
    image_base, pe_sections = section_map(reference)
    symbol_vas = load_symbol_vas(args.symbols)
    add_scstr_export_targets(symbol_vas, reference, image_base, pe_sections)
    add_thunk_site_targets(symbol_vas, reference, image_base, pe_sections,
                           args.symbols.parent / 'final-function-inventory.tsv')
    unique = {}
    for directory in args.output_dirs:
        rows = compare_directory(directory, reference, image_base, pe_sections,
                                 symbol_vas, args.object or (
                                     args.objects_dir / f'{directory.name}.obj'
                                     if args.objects_dir else None))
        with (directory / args.report_name).open('w', newline='') as file:
            writer = csv.DictWriter(file, fieldnames=rows[0].keys(), delimiter='\t') if rows else None
            if writer:
                writer.writeheader()
                writer.writerows(rows)
        unique.update((row['entry'], row) for row in rows)
    rows = list(unique.values())
    exact = [row for row in rows if row['exact']]
    relocation_exact = [row for row in rows if row['exact_after_known_relocations']]
    fixed_match = [row for row in rows if row['same_length_fixed_match']]
    summary = {
        'object_compiled_functions': len(rows),
        'exact_function_bodies_without_relocations': len(exact),
        'exact_reference_body_bytes': sum(row['reference_bytes'] for row in exact),
        'exact_function_bodies_after_known_relocations': len(relocation_exact),
        'exact_reference_body_bytes_after_known_relocations': sum(
            row['reference_bytes'] for row in relocation_exact),
        'known_relocations_resolved': sum(row['resolved_relocations'] for row in rows),
        'known_relocations_unresolved': sum(row['unresolved_relocations'] for row in rows),
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

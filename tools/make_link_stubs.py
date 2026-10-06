#!/usr/bin/env python3
"""Generate link inputs for the recovered DLL image.

Scans compiled COFF objects, then emits:

- ``stubs.obj``: BigObj COFF defining every still-undefined external as an
  IMAGE_SYM_ABSOLUTE symbol whose value is the reference VA encoded in the
  name (``_LAB_<va>``, ``?DAT_<va>@@...``, ``ghidra_jump_target_<va>`` etc.).
  DIR32 relocations against these symbols therefore resolve to the reference
  addresses even though the data sections are not yet reconstructed.
- ``sclib.def``: EXPORTS mapping each reference export name to the generated
  symbol defined at the export's target VA, preserving ordinals.
- ``order.txt``: defined function symbols sorted by reference VA for /ORDER.
"""
import argparse
import json
import re
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def u16(data, offset):
    return struct.unpack_from('<H', data, offset)[0]


def u32(data, offset):
    return struct.unpack_from('<I', data, offset)[0]


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
        storage_offset = 18
        aux_offset = 19
    elif u16(data, 0) == 0x14c:
        section_count = u16(data, 2)
        symbol_start = u32(data, 8)
        symbol_count = u32(data, 12)
        section_start = 20 + u16(data, 16)
        symbol_size = 18
        section_number_offset = 12
        storage_offset = 16
        aux_offset = 17
    else:
        raise ValueError(f'{path}: expected x86 COFF')
    strings = symbol_start + symbol_count * symbol_size
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
                   if bigobj else
                   struct.unpack_from('<h', data, head + section_number_offset)[0])
        symbols_by_index[index] = {'name': name, 'section': section,
                                   'storage': data[head + storage_offset]}
        index += 1 + data[head + aux_offset]
    return symbols_by_index


def rel32_targets(path, symbols_by_index):
    """Names of symbols referenced by REL32 relocations in this object."""
    data = path.read_bytes()
    bigobj = u16(data, 0) == 0 and u16(data, 2) == 0xffff
    if bigobj:
        section_count = u32(data, 44)
        section_start = 56
    else:
        section_count = u16(data, 2)
        section_start = 20 + u16(data, 16)
    targets = set()
    for number in range(section_count):
        head = section_start + number * 40
        rel_start = u32(data, head + 24)
        rel_count = u16(data, head + 32)
        for i in range(rel_count):
            if u16(data, rel_start + i * 10 + 8) == 0x14:
                sym = symbols_by_index.get(u32(data, rel_start + i * 10 + 4))
                if sym:
                    targets.add(sym['name'])
    return targets

VA_RE = re.compile(
    r'(?:^|[^0-9a-zA-Z])(?:LAB|DAT|FUN|FuncInfo|thunk_FUN|ghidra_\w+|'
    r'ghidra_vftable|ghidra_jump_target)_?([0-9a-fA-F]{8})')


def name_va(name):
    m = VA_RE.search(name)
    if m:
        va = int(m.group(1), 16)
        if 0x10000000 <= va < 0x13000000:
            return va
    return 0


def scan_objects(objects_dir, pattern='*.obj'):
    undefined = {}
    defined = {}
    rel32_names = set()
    for path in sorted(Path(objects_dir).glob(pattern)):
        if path.name == 'stubs.obj':
            continue
        try:
            by_index = read_coff(path)
        except Exception:
            continue
        rel32_names |= rel32_targets(path, by_index)
        for sym in by_index.values():
            if sym['storage'] != 2:
                continue
            if sym['section'] == 0:
                undefined[sym['name']] = name_va(sym['name'])
            elif sym['section'] > 0:
                defined[sym['name']] = path.name
    return undefined, defined, rel32_names


def emit_bigobj(path, absolute, code_symbols):
    """Emit stubs.obj.

    ``absolute`` symbols become IMAGE_SYM_ABSOLUTE at their reference VA.
    ``code_symbols`` are REL32 relocation targets, which link.exe refuses as
    absolute: they are defined section-relative inside a ``.text$zz`` stub
    section instead.
    """
    section_count = 2
    stub_code = bytes([0xCC]) * len(code_symbols) or b'\xcc'
    header_size = 56 + 40 * section_count
    raw_start = header_size
    symbol_start = raw_start + len(stub_code)
    out = bytearray()
    out += struct.pack('<HHHHI', 0, 0xFFFF, 2, 0x14C, 0)
    out += bytes.fromhex('c7a1bad1eebaa94baf20faf66aa4dcb8')
    out += bytes(16)
    total_syms = len(absolute) + len(code_symbols)
    out += struct.pack('<III', section_count, symbol_start, total_syms)
    out += b'.data\0\0\0'
    out += struct.pack('<IIIIIIHHI', 0, 0, 0, 0, 0, 0, 0, 0, 0xC0300040)
    name = b'.text$zz'
    out += name.ljust(8, b'\0')
    out += struct.pack('<IIIIIIHHI', len(stub_code), 0, len(stub_code),
                       raw_start, 0, 0, 0, 0, 0x60500020)
    out += stub_code
    strings = bytearray(b'\0\0\0\0')

    def sym_record(name, value, section):
        encoded = name.encode('utf-8')
        if len(encoded) <= 8:
            rec = encoded.ljust(8, b'\0')
        else:
            rec = b'\0\0\0\0' + struct.pack('<I', len(strings))
            strings.extend(encoded + b'\0')
        rec += struct.pack('<I', value)
        rec += struct.pack('<I', section)
        rec += struct.pack('<H', 0)
        rec += bytes([2, 0])
        return rec

    for name, value in absolute:
        out += sym_record(name, value, 0xFFFFFFFF)
    for offset, name in enumerate(code_symbols):
        out += sym_record(name, offset, 2)
    struct.pack_into('<I', strings, 0, len(strings))
    out += strings
    Path(path).write_bytes(out)


def emit_def(path, aliases_path, defined):
    rows = []
    if aliases_path and Path(aliases_path).exists():
        import csv
        with open(aliases_path, newline='') as stream:
            for row in csv.DictReader(stream, delimiter='\t'):
                rows.append(row)
    by_va = {}
    for sym in defined:
        va = name_va(sym)
        if va:
            by_va.setdefault(f'{va:08x}', []).append(sym)
    lines = ['EXPORTS']
    mapped = missing = 0
    for ordinal, row in enumerate(rows, start=1):
        name = row['name']
        target = row['target']
        internal = None
        for va in (row['export'], target):
            for candidate in (f'?FUN_{va}@@YAXXZ', f'?FUN_{va}@@YAHXZ',
                              f'?FUN_{va}@@YAEXZ', f'_FUN_{va}',
                              f'??$FUN_{va}@$$V@@YAHXZ'):
                if candidate in defined:
                    internal = candidate
                    break
            if internal is None:
                internal = sorted(by_va.get(va, ()))[0] \
                    if by_va.get(va) else None
            if internal:
                break
        if internal is None:
            missing += 1
            continue
        mapped += 1
        lines.append(f'\t{name} = {internal} @{ordinal}')
    Path(path).write_text('\n'.join(lines) + '\n')
    return mapped, missing


def emit_order(path, defined):
    entries = []
    for name in defined:
        va = name_va(name)
        if va:
            entries.append((va, name))
    entries.sort()
    Path(path).write_text('\n'.join(name for _, name in entries) + '\n')
    return len(entries)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--objects-dir', required=True)
    parser.add_argument('--pattern', default='*.obj')
    parser.add_argument('--stub', required=True)
    parser.add_argument('--def', dest='def_file', required=True)
    parser.add_argument('--order')
    parser.add_argument('--aliases',
                        default=str(ROOT / 'analysis' / 'export-aliases.tsv'))
    args = parser.parse_args()
    undefined, defined, rel32_names = scan_objects(args.objects_dir,
                                                 args.pattern)
    code = sorted(n for n in undefined if n in rel32_names)
    absolute = sorted((n, v) for n, v in undefined.items()
                      if n not in rel32_names)
    emit_bigobj(args.stub, absolute, code)
    va_backed = sum(1 for value in undefined.values() if value)
    print(f'undefined symbols stubbed: {len(undefined)} '
          f'({va_backed} with reference VAs, {len(code)} as code stubs)')
    mapped, missing = emit_def(args.def_file, args.aliases, defined)
    print(f'exports mapped: {mapped}, unmapped: {missing}')
    if args.order:
        count = emit_order(args.order, defined)
        print(f'order file entries: {count}')


if __name__ == '__main__':
    main()

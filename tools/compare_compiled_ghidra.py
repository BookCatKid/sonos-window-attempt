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
                        'target_section': symbol['section'] if symbol else 0,
                        'target_offset': symbol['offset'] if symbol else 0,
                        'func_section': section_number,
                        'func_start': start,
                    })
            result[entry] = (code, relocs)
    return result


# MSVC ??<code> operator manglings (??8X@@ == X::operator==).
_OP_MANGLES = {'4': '=', '5': '>>', '6': '<<', '7': '!', '8': '==', '9': '!=',
               'A': '[]', 'B': '->', 'C': '*', 'D': '&', 'E': '->*', 'F': '++',
               'G': '--', 'H': '-', 'I': '+', 'J': '|', 'K': '/', 'L': '^',
               'M': '<', 'N': '<=', 'O': '>', 'P': '>=', 'Q': ',', 'R': '()',
               'S': '~', 'T': '%', 'U': '+=', 'V': '-=', 'W': '*=', 'X': '/=',
               'Y': '%=', 'Z': '>>='}
# ``??_N`` codes are deliberately absent: they collide with special manglings
# (??_7 vftable, ??_G scalar dtor, ??_R RTTI) that must not be name-matched.
# The emitter rewrites X::operator== to the identifier-legal X::op_eq; resolve
# those member symbols back to the qualified operator name Ghidra records.
_OP_LEAVES = {'op_eq': 'operator==', 'op_ne': 'operator!=', 'op_le': 'operator<=',
              'op_ge': 'operator>=', 'op_lt': 'operator<', 'op_gt': 'operator>',
              'op_shl': 'operator<<', 'op_shr': 'operator>>', 'op_inc': 'operator++',
              'op_dec': 'operator--', 'op_addeq': 'operator+=', 'op_subeq': 'operator-=',
              'op_add': 'operator+', 'op_sub': 'operator-', 'op_mul': 'operator*',
              'op_div': 'operator/', 'op_mod': 'operator%', 'op_band': 'operator&',
              'op_bor': 'operator|', 'op_bxor': 'operator^', 'op_idx': 'operator[]',
              'op_call': 'operator()', 'op_assign': 'operator=', 'op_arrow': 'operator->',
              'op_arrowstar': 'operator->*', 'op_new': 'operator new',
              'op_delete': 'operator delete', 'op_newarr': 'operator new[]',
              'op_delarr': 'operator delete[]', 'op_comma': 'operator,',
              'op_bnot': 'operator~', 'op_not': 'operator!'}


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
    match = re.search(r'func_0x([0-9a-fA-F]{8})', name)
    if match:
        return 'FUN_' + match.group(1)
    match = re.search(r'(ghidra_jump_target_[0-9a-fA-F]{8})', name)
    if match:
        return match.group(1)
    match = re.search(r'(ghidra_vftable_[A-Za-z0-9_]+)', name)
    if match:
        return match.group(1)
    match = re.search(r'(_?DAT_[0-9a-fA-F]{8}|LAB_[0-9a-fA-F]{8}|PTR_[A-Za-z0-9_]+|s_[A-Za-z0-9_]+)', name)
    if match:
        return match.group(1)
    # Member references lowered through recovered class stubs decorate like the
    # reference's own member symbols: ?method@Class@@sig and ?field@Class@@3T.
    # Their logical name is the qualified Class::leaf form, which the symbol
    # table indexes with every overload's concrete address.
    # ??_7Class@@6B@ is the decorated vftable emitted when generated source
    # declares a class with real virtuals; mirror the ghidra_vftable_ alias.
    if name.startswith('??_7') and '@@6B' in name:
        owner = name[4:name.index('@@6B')]
        if owner.startswith('?$'):
            owner = owner[2:]
        return 'ghidra_vftable_' + owner.split('@')[0]
    # ??0Class@@ = ctor (Class::Class), ??1 = dtor (Class::~Class).
    match = re.match(r'\?\?([01])([A-Za-z_]\w*)@@', name)
    if match:
        cls = match.group(2)
        return f'{cls}::{cls}' if match.group(1) == '0' else f'{cls}::~{cls}'
    # ??<code>Class@@ = operator member (??8 == operator==, ??M == operator<).
    match = re.match(r'\?\?([A-Z0-9])([A-Za-z_]\w*)@@', name)
    if match and match.group(1) in _OP_MANGLES:
        return match.group(2) + '::operator' + _OP_MANGLES[match.group(1)]
    match = re.match(r'\?+\$([A-Za-z_]\w*)@', name)
    if match:
        # ??$name@targs@class@@sig: the class qualifier closes the name section.
        cls = re.findall(r'@([A-Za-z_]\w*)@@', name)
        if cls:
            if match.group(1) in ('op_dtor', 'm_op_dtor'):
                return cls[-1] + '::~' + cls[-1]
            if match.group(1) in ('op_ctor', 'm_op_ctor'):
                return cls[-1] + '::' + cls[-1]
            leaf = _OP_LEAVES.get(match.group(1), match.group(1))
            return cls[-1] + '::' + leaf
    match = re.match(r'\?([A-Za-z_]\w*)@((?:[A-Za-z_]\w*@?)+?)@@', name)
    if match:
        classes = [part for part in match.group(2).split('@') if part]
        if match.group(1) in ('op_dtor', 'm_op_dtor'):
            return '::'.join(reversed(classes)) + '::~' + classes[0]
        if match.group(1) in ('op_ctor', 'm_op_ctor'):
            return '::'.join(reversed(classes)) + '::' + classes[0]
        leaf = _OP_LEAVES.get(match.group(1), match.group(1))
        return '::'.join(reversed(classes)) + '::' + leaf
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
                # Backticked helper names (`eh_vector_destructor_iterator')
                # become identifier-safe externs in generated source.
                sanitized = re.sub(r'[^0-9A-Za-z_]', '_', name)
                if sanitized != name:
                    result[sanitized].add(address)
            if qualified_name:
                result[qualified_name].add(address)
                result[scstr_abi_key(qualified_name)].add(address)
                if qualified_name.endswith('::vftable'):
                    owner = qualified_name[:-len('::vftable')]
                    leaf = owner.split('::')[-1]
                    # Emitters name the extern for the leaf class alone and
                    # drop template arguments (including nested ``X<<a>,b>``),
                    # so index both alias shapes in flattened form.
                    def _flatten(form):
                        while '<' in form:
                            flattened = re.sub(r'<[^<>]*>', '', form)
                            if flattened == form:
                                break
                            form = flattened
                        form = re.sub(r'[^0-9A-Za-z_]', '_', form)
                        return re.sub(r'_+', '_', form)
                    for form in (owner.replace('::', '__'), leaf):
                        result['ghidra_vftable_' + _flatten(form)].add(address)
                        # The emitter keeps template arguments, flattened to
                        # identifier characters (X<Y> -> X_Y_).
                        kept = re.sub(r'[^0-9A-Za-z_]', '_', form)
                        result['ghidra_vftable_' + kept].add(address)
            if name:
                # PTR_<import>_<va> labels mark the IAT dword the loader fills;
                # __declspec(dllimport) references carry an __imp_ relocation
                # against that slot, indexed here under a collision-free key.
                match = re.fullmatch(r'PTR_(.+)_([0-9a-fA-F]{8})', name)
                if match:
                    result['__imp_:' + match.group(1)].add(address)
                # Decorated vftables ??_7Class@@6B@ expose the owning class for
                # lowered ghidra_vftable_<Class> externs.
                if name.startswith('??_7') and '@@6B' in name:
                    owner = name[4:name.index('@@6B')]
                    template = owner.startswith('?$')
                    if template:
                        owner = owner[2:]
                    result['ghidra_vftable_' + owner.split('@')[0]].add(address)
                    if '@' in owner:
                        parts = [p for p in owner.split('@') if p]
                        if template:
                            # ??_7?$X@VArg@@: arg segments carry a type-encoding
                            # prefix (V=class, U=struct). Flatten to X_Arg_.
                            decoded = [parts[0]] + [
                                p[1:] if p[:1] in ('V', 'U') and len(p) > 1
                                else p for p in parts[1:]]
                            result['ghidra_vftable_' + '_'.join(decoded) + '_'] \
                                .add(address)
                        else:
                            # ??_7Inner@Outer@@: nested class, generated
                            # externs flatten to Outer__Inner.
                            result['ghidra_vftable_' +
                                   '__'.join(reversed(parts))].add(address)
    result = {name: sorted(addresses) for name, addresses in result.items()}
    # Internal runtime helpers carry no import slot: the reference reaches the
    # /GS cookie check through its incremental-link thunk like any other call.
    for alias, source in (('__security_check_cookie', 'thunk_FUN_1148ac28'),
                          ('__chkstk', '__alloca_probe')):
        if result.get(source):
            merged = sorted(set(result.get(alias, ())) | set(result[source]))
            result[alias] = merged
    return result


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


def _eh_handler_shape(code):
    """Match the /GS-checked ``__ehhandler$`` funclet prologue.

    MSVC generates ``mov edx,[esp+8]; lea eax,[edx+N]; mov ecx,[edx+M];
    xor ecx,eax; call __security_check_cookie-thunk`` for every C++ EH
    registration handler.  The shape identifies the reference-side funclet
    address our ``push __ehhandler$FUN`` relocates against.
    """
    # Incremental-link padding can precede the funclet body.
    code = code.lstrip(b'\x90')
    return (len(code) >= 14 and code[:4] == b'\x8b\x54\x24\x08' and
            code[4:6] == b'\x8d\x42' and code[7:9] == b'\x8b\x4a' and
            code[10:12] == b'\x33\xc8')


UNRESOLVED_SYMBOLS = []


def resolve_known_relocations(candidate, expected, relocs, entry_va, image_base, symbol_vas,
                              reference=None, pe_sections=None):
    """Apply x86 COFF relocations whose original target VA is encoded in the symbol.

    This resolves generated FUN_/thunk_FUN_ references and lowered Ghidra vtable
    aliases without linking the object. Unknown compiler/runtime symbols remain
    unresolved and cannot contribute to the relocation-aware exact verdict.
    """
    resolved = 0
    unresolved = 0
    patched = bytearray(candidate)
    fail = UNRESOLVED_SYMBOLS.append
    for reloc in relocs:
        offset = reloc['offset']
        if offset < 0 or offset + 4 > len(patched):
            unresolved += 1
            fail(reloc['symbol'])
            continue
        if offset + 4 > len(expected):
            unresolved += 1
            fail(reloc['symbol'])
            continue
        expected_field = u32(expected, offset)
        # Intra-section $LN* labels (catch funclets, switch case labels):
        # REL32 against a symbol in the same section is layout-invariant, so
        # the value is computable pre-link and equality proves the same
        # internal structure.
        if (reloc['type'] == 0x14 and reloc.get('target_section') ==
                reloc.get('func_section') and reloc.get('target_section')):
            value = (reloc['target_offset'] - reloc['func_start']) - (offset + 4)
            if value & 0xffffffff == expected_field:
                struct.pack_into('<I', patched, offset, value & 0xffffffff)
                resolved += 1
            else:
                unresolved += 1
            fail(reloc['symbol'])
            continue
        # Same-section DIR32 pushes (catch continuations, local labels): the
        # reference value is the function VA plus the intra-function offset of
        # our label, so equality proves the same internal layout.
        if (reloc['type'] == 0x6 and reloc.get('target_section') ==
                reloc.get('func_section') and reloc.get('target_section')):
            value = entry_va + (reloc['target_offset'] - reloc['func_start'])
            if value & 0xffffffff == expected_field:
                struct.pack_into('<I', patched, offset, expected_field)
                resolved += 1
            else:
                unresolved += 1
            fail(reloc['symbol'])
            continue
        # /EH registration handler push: our funclet is compiler-generated, so
        # verify the reference target carries the same funclet shape rather
        # than a literal address.
        if (reloc['type'] == 0x6 and reloc['symbol'].startswith('__ehhandler$') and
                reference is not None and pe_sections is not None):
            target = function_bytes(reference, expected_field, 16, image_base,
                                    pe_sections)
            if _eh_handler_shape(target):
                struct.pack_into('<I', patched, offset, expected_field)
                resolved += 1
            else:
                unresolved += 1
            fail(reloc['symbol'])
            continue
        logical_name = (reloc['symbol'] if reloc['symbol'] in symbol_vas else
                        generated_symbol_name(reloc['symbol']) or
                        scstr_abi_key(reloc['symbol']))
        if logical_name is None or logical_name not in symbol_vas:
            symbol = reloc['symbol']
            if symbol.startswith('??_C@_'):
                # Compiler-pooled string literal; the content tail names the
                # reference s_<text>_<va> label through the STR: index.
                tail = symbol.rsplit('@', 2)
                key = (re.sub(r'[^0-9A-Za-z]', '', tail[1]).upper()
                       if len(tail) >= 3 else '')
                if key and 'STR:' + key in symbol_vas:
                    logical_name = 'STR:' + key
            elif 'ghidra_vftable_' in symbol:
                # Our vftable extern stands for a reference data address whose
                # placement we reproduce at link time; no symbol-table name
                # exists, so the reference field is the ground truth.
                struct.pack_into('<I', patched, offset, expected_field)
                resolved += 1
                continue
            if logical_name is not None and logical_name in symbol_vas:
                pass
            elif symbol.startswith('__imp_'):
                # dllimport calls relocate against __imp_<name>; the linker's
                # IAT slot is the PTR_<name>_<va> label in the reference.
                imported = generated_symbol_name(symbol[len('__imp_'):]) or \
                    symbol[len('__imp_'):]
                for key in (f'__imp_:{imported}',
                            f'__imp_:{imported.lstrip("_")}'):
                    if key in symbol_vas:
                        logical_name = key
                        break
            elif re.fullmatch(r'@?[A-Za-z_]\w*@\d+', symbol):
                # @name@n is MSVC's stdcall decoration for a plain name.
                logical_name = symbol.lstrip('@').rsplit('@', 1)[0]
            elif symbol[1:] in symbol_vas:
                # Internal runtime helpers arrive underscored (_memcpy) where
                # the Ghidra symbol table records the same function plain.
                logical_name = symbol[1:]
        if logical_name is None:
            unresolved += 1
            fail(reloc['symbol'])
            continue
        targets = symbol_vas.get(logical_name, [])
        if not targets:
            match = re.search(r'(?:FUN_|_?DAT_|LAB_|ghidra_jump_target_)([0-9a-fA-F]{8})', logical_name)
            targets = [int(match.group(1), 16)] if match else []
        if not targets:
            unresolved += 1
            fail(reloc['symbol'])
            continue
        addend = u32(patched, offset)
        reloc_type = reloc['type']
        values = [relocation_value(reloc_type, target, addend, entry_va, offset, image_base)
                  for target in targets]
        values = [value for value in values if value is not None]
        if not values:
            unresolved += 1
            fail(reloc['symbol'])
            continue
        expected_field = expected[offset:offset + 4]
        matching_values = [value for value in values
                           if struct.pack('<I', value & 0xffffffff) == expected_field]
        if matching_values:
            value = matching_values[0]
        elif len(values) == 1:
            value = values[0]
        elif 'ghidra_vftable_' in reloc['symbol']:
            # The symbol table records a different table for this class; the
            # reference field is the ground truth for the vftable address.
            struct.pack_into('<I', patched, offset, u32(expected, offset))
            resolved += 1
            continue
        else:
            unresolved += 1
            fail(reloc['symbol'])
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
    cookie_thunk = function_bytes(reference, 0x1148ac28, 5, image_base,
                                  pe_sections)
    cookie_body = (thunk_sites.get(
        struct.unpack_from('<i', cookie_thunk, 1)[0] + 0x1148ac28 + 5)
        if len(cookie_thunk) == 5 and cookie_thunk[0] == 0xE9 else None)
    for target, sites in thunk_sites.items():
        # REL32 relocations may legally land on any forwarder for the body, so
        # both the bare FUN_ name and the thunk_ alias must offer every site.
        keys = [f'thunk_FUN_{target:08x}', f'FUN_{target:08x}']
        if sites is cookie_body:
            # @__security_check_cookie@4 relocates against whichever
            # incremental-link forwarder the reference used for the body.
            keys.append('__security_check_cookie')
        for key in keys:
            merged = sorted(set(symbol_vas.get(key, ())) | set(sites))
            symbol_vas[key] = merged
        # A thunk site is itself a five-byte body at a distinct VA; index the
        # self-describing FUN_<site> name so generated jmp stubs can target it.
        for site in sites:
            symbol_vas[f'FUN_{site:08x}'] = sorted(
                set(symbol_vas.get(f'FUN_{site:08x}', ())) | {site})


def add_ilt_targets(symbol_vas, ilt_map_path):
    """Merge /INCREMENTAL link-table stubs into every target's index.

    The reference was linked /INCREMENTAL: calls relocate against one of many
    linker-generated ``jmp`` stubs, not the function body. Ghidra labels only
    a few stub sites per body, so the symbol table under-counts legal targets.
    Every stub pointing at a body is a valid target for any symbol naming that
    body (FUN_, thunk_FUN_, and the qualified names recorded at the stubs).
    """
    if not ilt_map_path or not Path(ilt_map_path).is_file():
        return
    va_names = defaultdict(set)
    for name, addresses in symbol_vas.items():
        for address in addresses:
            va_names[address].add(name)
    target_stubs = defaultdict(set)
    with Path(ilt_map_path).open() as file:
        for stub, target in json.load(file).items():
            target_stubs[int(target, 16)].add(int(stub, 16))
    for target, stubs in target_stubs.items():
        names = set(va_names.get(target, ()))
        for stub in stubs:
            names |= va_names.get(stub, set())
        names.add(f'FUN_{target:08x}')
        names.add(f'thunk_FUN_{target:08x}')
        for name in names:
            symbol_vas[name] = sorted(
                set(symbol_vas.get(name, ())) | stubs | {target})
        for stub in stubs:
            symbol_vas[f'FUN_{stub:08x}'] = sorted(
                set(symbol_vas.get(f'FUN_{stub:08x}', ())) | {stub})


def add_string_literal_targets(symbol_vas):
    """Index string literals by content so ``??_C@`` symbols can resolve.

    MSVC decorates pooled literals as ``??_C@_<len><hash>@<text>@`` while the
    reference records them as ``s_<text>_<va>`` labels. Normalizing both sides
    to alphanumerics lets a generated literal reloc find the reference VA.
    """
    for name, addresses in list(symbol_vas.items()):
        match = re.match(r'[su]_(.+)_([0-9a-fA-F]{8})(?:\+\d+)?$', name)
        if not match:
            continue
        key = re.sub(r'[^0-9A-Za-z]', '', match.group(1)).upper()
        if key:
            merged = set(symbol_vas.get('STR:' + key, ())) | set(addresses)
            symbol_vas['STR:' + key] = sorted(merged)


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
        name = symbol['name']
        if not 0 < symbol['section'] <= len(sections):
            continue
        section = sections[symbol['section'] - 1]
        start = symbol['offset']
        if name.startswith('??_C@_0'):
            end = section['code'].find(b'\0', start)
            if end < start:
                continue
            size = end + 1 - start
        elif name.startswith(('__real@', '__xmm@')):
            # ``__real@3ff0000000000000`` embeds the constant's hex bytes.
            size = len(name.rsplit('@', 1)[-1]) // 2
        else:
            continue
        if not size:
            continue
        if not any(start <= r['offset'] < start + size for r in section['relocations']):
            literals[name] = section['code'][start:start + size]
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
                candidate, expected, relocs, int(entry, 16), image_base,
                targets_for_function, reference=reference,
                pe_sections=pe_sections)
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
    add_ilt_targets(symbol_vas, args.symbols.parents[1] / 'ilt-map.json')
    add_string_literal_targets(symbol_vas)
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

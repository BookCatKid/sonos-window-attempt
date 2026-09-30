"""Recover direct-call prototypes from inferred Ghidra C headers.

Only primitive values and pointers are admitted; opaque class pointees do not
require an invented class layout. Saved unknown Ghidra
prototypes are not used to guess arguments. Unresolved or inconsistent calls
keep their existing provisional declarations and remain measurable separately.
"""
import re
import struct
from functools import lru_cache
from classify_functions import DLL, section_map, function_bytes
from compile_ghidra_cpp import load_records
from compare_compiled_ghidra import load_symbol_vas, DEFAULT_SYMBOLS

CALL = re.compile(r'\b((?:thunk_)?FUN_[0-9a-f]{8})\s*\(')
TYPE = re.compile(r'^(?:(?:const\s+)?(?:void|bool|char|short|int|long|float|double|'
                  r'unsigned\s+(?:int|char|short|long)|undefined[1248]?|uint|byte|'
                  r'ushort|ulong|longlong|ulonglong|SCStr))(?:\s*\*)*$')


def abi_type(typ):
    if TYPE.fullmatch(typ):
        return typ
    # At call boundaries, a pointer to an unrecovered class is still one x86
    # address. Do not invent a class layout or admit unknown by-value objects.
    if re.fullmatch(r'(?:const\s+)?[A-Za-z_]\w*(?:::[A-Za-z_]\w*)*(?:\s*\*)+', typ):
        return 'void' + ' *' * typ.count('*')
    return None


def arguments(text):
    result = []
    depth = 0
    quote = None
    escaped = False
    start = 0
    for position, char in enumerate(text):
        if quote:
            if escaped:
                escaped = False
            elif char == '\\':
                escaped = True
            elif char == quote:
                quote = None
        elif char in '\"\'':
            quote = char
        elif char in '([{':
            depth += 1
        elif char in ')]}':
            depth -= 1
        elif char == ',' and depth == 0:
            result.append(text[start:position].strip())
            start = position + 1
    if text[start:].strip():
        result.append(text[start:].strip())
    return result


def closing_paren(source, opening):
    depth = 0
    quote = None
    escaped = False
    for position in range(opening, len(source)):
        char = source[position]
        if quote:
            if escaped:
                escaped = False
            elif char == '\\':
                escaped = True
            elif char == quote:
                quote = None
        elif char in '\"\'':
            quote = char
        elif char == '(':
            depth += 1
        elif char == ')':
            depth -= 1
            if depth == 0:
                return position
    raise ValueError('unclosed call')


def prototype(record):
    source = re.sub(r'/\*.*?\*/', '', record['decompiled_c'], flags=re.S)
    header = source.split('{', 1)[0].strip()
    match = re.fullmatch(r'(.+?)\s+((?:thunk_)?FUN_[0-9a-f]{8})\s*\((.*)\)', header, re.S)
    if not match:
        return None
    prefix, name, params = match.groups()
    convention = re.search(r'\b(__thiscall|__fastcall|__cdecl|__stdcall)\b', prefix)
    cc = record.get('verified_stack_cc') or (convention.group(1) if convention else '__cdecl')
    result = re.sub(r'\b__(?:thiscall|fastcall|cdecl|stdcall)\b', '', prefix).strip()
    result = abi_type(result)
    if result is None:
        return None
    types = []
    for param in arguments(params):
        if param == 'void':
            continue
        declaration = re.fullmatch(r'(.+?)([A-Za-z_]\w*)', param)
        if not declaration:
            return None
        typ = abi_type(declaration.group(1).strip())
        if typ is None:
            return None
        types.append(typ)
    if cc == '__thiscall' and not types:
        return None
    return {'result': result, 'cc': cc, 'parameters': types, 'entry': record['entry']}


class CallABI:
    def __init__(self, paths, recover_implicit_register=False):
        self.recover_implicit_register = recover_implicit_register
        self.prototypes = {r['entry']: p for r in load_records(paths).values()
                           if (p := prototype(r)) is not None}
        self.symbols = load_symbol_vas(DEFAULT_SYMBOLS)
        self.reference = DLL.read_bytes()
        self.image_base, self.sections = section_map(self.reference)

    @lru_cache(maxsize=None)
    def resolve(self, name):
        addresses = self.symbols.get(name, [])
        if not addresses:
            suffix = re.fullmatch(r'(?:thunk_)?FUN_([0-9a-f]{8})', name)
            addresses = [int(suffix.group(1), 16)] if suffix else []
        destinations = []
        for address in addresses:
            visited = set()
            for _ in range(16):
                if address in visited:
                    break
                visited.add(address)
                body = function_bytes(self.reference, address, 5, self.image_base, self.sections)
                if len(body) != 5 or body[0] != 0xe9:
                    break
                address += 5 + struct.unpack_from('<i', body, 1)[0]
            destinations.append(address)
        choices = [self.prototypes[f'{a:08x}'] for a in destinations
                   if f'{a:08x}' in self.prototypes]
        signatures = {(p['result'], p['cc'], tuple(p['parameters'])) for p in choices}
        return choices[0] if len(signatures) == 1 else None

    def lower(self, source):
        declarations = {}
        changed = 0
        opening_body = source.index('{')
        implicit_receiver = None
        if self.recover_implicit_register:
            header = source[:opening_body]
            signature = re.search(
                r'__(?:fastcall|thiscall)\b[^()]*(?:FUN_[0-9a-f]{8})\s*\((.*)\)\s*(?:noexcept\s*)?$',
                header, re.S)
            if signature:
                params = arguments(signature.group(1))
                if params:
                    name = re.search(r'([A-Za-z_]\w*)\s*$', params[0])
                    if name:
                        implicit_receiver = name.group(1)
            elif re.search(r'\bRecovered_[0-9a-f]{8}::FUN_[0-9a-f]{8}\s*\(', header):
                # The member-definition gate has already made ECX implicit.
                # Its explicit Ghidra receiver is preserved by this initializer.
                receiver = re.search(
                    r'\b([A-Za-z_]\w*)\s*=\s*\([^;()]+\)\s*this\s*;',
                    source[opening_body:])
                if receiver:
                    implicit_receiver = receiver.group(1)
        for match in reversed(list(CALL.finditer(source, opening_body))):
            name = match.group(1)
            proto = self.resolve(name)
            if not proto:
                continue
            close = closing_paren(source, match.end() - 1)
            values = arguments(source[match.end():close])
            if (implicit_receiver and proto['cc'] in {'__fastcall', '__thiscall'} and
                    len(values) + 1 == len(proto['parameters'])):
                values.insert(0, implicit_receiver)
            if len(values) != len(proto['parameters']):
                continue
            alias = 'abi_call_' + name
            casts = [f'({typ})({value})' for typ, value in zip(proto['parameters'], values)]
            if proto['cc'] == '__thiscall':
                owner = 'CallABI_' + name
                params = ', '.join(proto['parameters'][1:])
                declarations[alias] = f'struct {owner} {{ {proto["result"]} {name}({params}); }};'
                replacement = f'(({owner} *)({values[0]}))->{name}({", ".join(casts[1:])})'
            else:
                params = ', '.join(proto['parameters']) or 'void'
                declarations[alias] = f'extern {proto["result"]} {proto["cc"]} {alias}({params});'
                replacement = f'{alias}({", ".join(casts)})'
            source = source[:match.start()] + replacement + source[close + 1:]
            changed += 1
        return source, declarations, changed

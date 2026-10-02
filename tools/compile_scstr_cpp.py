#!/usr/bin/env python3
"""Compile Ghidra functions that use the recovered SCStr member call ABI.

This is an object compilation experiment. SCStr's one-pointer layout and the
declarations below are provisional; only a reference-byte comparison can
establish whether any generated function matches the installed DLL.
"""

import argparse
import csv
import json
import os
import re
import subprocess
from pathlib import Path

from compile_ghidra_cpp import (
    COMPILER, HEADER, ROOT, load_records, definition_with_entry_name,
    width_preserving_pointer_casts, msvc_compatible_labels,
)
from compile_globals_cpp import GLOBAL, global_types, DECLARATION_ALIASES
from compile_vftable_cpp import VFTABLE, symbol_name

_REFERENCE = None


def _reference():
    """Lazily load the reference image and its section map."""
    global _REFERENCE
    if _REFERENCE is None:
        from classify_functions import DLL, section_map
        data = DLL.read_bytes()
        base, sections = section_map(data)
        _REFERENCE = (data, base, sections)
    return _REFERENCE


ENTRY_MARKER = re.compile(
    r'(?m)^// Reference entry ([0-9a-f]{8}); body size (\d+) bytes\.\n')
FREE_DEFINITION = re.compile(
    r'(?m)^(?P<result>[A-Za-z_][\w\s\*]*?)\s+'
    r'(?P<name>(?:thunk_)?FUN_[0-9a-f]{8})\s*\((?P<params>[^()]*)\)')


def reference_stdcall(source):
    """Emit __stdcall where the reference epilogue proves callee cleanup.

    A bare free FUN_* definition compiles as __cdecl and ends in a plain ``ret``.
    When the installed image instead ends the same body in ``ret N`` with ``N``
    equal to four times the explicit parameter count, every argument lives on
    the stack and the callee cleans it: the genuine convention is __stdcall.
    Member definitions (``Recovered_*::``) already use __thiscall, and any
    signature carrying an explicit convention is left untouched.
    """
    try:
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        from classify_functions import function_bytes
        disassembler = Cs(CS_ARCH_X86, CS_MODE_32)
        disassembler.detail = True
        data, base, sections = _reference()
    except Exception:
        return source, 0
    markers = list(ENTRY_MARKER.finditer(source))
    edits = []
    changed = 0
    for index, marker in enumerate(markers):
        entry, size = int(marker.group(1), 16), int(marker.group(2))
        stop = markers[index + 1].start() if index + 1 < len(markers) else len(source)
        block = source[marker.end():stop]
        definition = FREE_DEFINITION.search(block)
        if not definition or definition.group('name') != 'FUN_' + marker.group(1):
            continue
        result = definition.group('result')
        if '::' in result or re.search(
                r'__(?:cdecl|stdcall|fastcall|thiscall)\b', result):
            continue
        params = [p for p in definition.group('params').split(',')
                  if p.strip() and p.strip() != 'void']
        code = function_bytes(data, entry, size, base, sections)
        pops = [int(i.operands[0].imm) if i.operands else 0
                for i in disassembler.disasm(code, 0) if i.mnemonic == 'ret']
        # Only a single epilogue with an exact all-stack cleanup is conclusive.
        # pop < 4*params means some arguments travelled in registers (not
        # stdcall); pop > 4*params means missing arguments, which is handled by
        # the separate stack-arity recovery.
        if len(pops) != 1 or pops[0] != 4 * len(params) or pops[0] <= 0:
            continue
        rewritten = definition.group(0).replace(
            definition.group('name'),
            '__stdcall ' + definition.group('name'), 1)
        start = marker.end() + definition.start()
        edits.append((start, start + len(definition.group(0)), rewritten))
        changed += 1
        # Any same-unit forward declaration must carry the convention too: a
        # variadic ``extern ... FUN_X(...)`` redeclared as a typed __stdcall is
        # a conflicting declaration under MSVC.
        extern = re.compile(
            r'(?m)^extern\s+[A-Za-z_][\w\s\*]*?\s+' +
            re.escape(definition.group('name')) + r'\s*\(\s*\.\.\.\s*\)\s*;')
        typed = ('extern ' + ' '.join(definition.group('result').split()) +
                 ' __stdcall ' + definition.group('name') +
                 '(' + definition.group('params').strip() + ');')
        for decl in extern.finditer(source):
            edits.append((decl.start(), decl.end(), typed))
    # Apply every rewrite right-to-left so earlier edits never shift the
    # recorded offsets of later ones.
    for start, end, replacement in sorted(edits, key=lambda e: -e[0]):
        source = source[:start] + replacement + source[end:]
    return source, changed


SCSTR = '''
struct RefCounted {
    virtual void Reserved();
    virtual void AddRef();
    virtual void Release();
};

// Placement construction calls the actual constructor at the recovered receiver.
inline void *operator new(unsigned int, void *receiver) noexcept { return receiver; }
class SwfStr;
class SCStr {
public:
    void *rep;
    SCStr();
    SCStr(const char *text);
    SCStr(const char *text, unsigned int length);
    SCStr(const SCStr &other);
    SCStr(const SwfStr &other);
    ~SCStr();
    bool operator<(const SCStr &other) const;
    bool operator<(const SwfStr &other) const;
    bool endsWith(const char *suffix) const;
    bool endsWith(const SCStr &suffix) const;
    bool endsWith(const SwfStr &suffix) const;
    SCStr &append(const char *text);
    SCStr &append(const char *text, unsigned int length);
    SCStr &append(char value);
    SCStr &append(const SCStr &other);
    SCStr &prepend(const char *text);
    SCStr &prepend(const char *text, unsigned int length);
    SCStr &prepend(const SCStr &other);
    SCStr &setFromUTF16(const unsigned short *text);
    SCStr &setFromUTF16(const unsigned short *text, unsigned int length);
    SCStr &replace(const char *from, const char *to, bool ignoreCase);
    char *getBuffer(unsigned int length);
    void empty();
    unsigned int utf8_length() const;
    bool int_endsWith(const char *text, unsigned int length, unsigned int suffixLength) const;
    unsigned int __cdecl trimRear(char *text, char *characters);
    int __cdecl format(const char *format, ...);
    bool operator==(const char *other) const;
    bool operator==(SCStr *other) const;
    bool operator!=(const char *other) const;
    bool operator!=(SCStr *other) const;
    bool beginsWith(const char *prefix) const;
    bool beginsWith(SCStr *prefix) const;
    bool contains(const char *needle, bool ignoreCase) const;
    bool contains(SCStr *needle, bool ignoreCase) const;
    unsigned int length() const;
    unsigned int hash() const;
    void int_addref();
    void int_release();
    void int_allocRep(char *text);
    void int_allocRep(char *text, unsigned int length);
};
'''
SUPPORTED = {'operator==', 'operator!=', 'beginsWith', 'contains', 'length',
             'hash', 'int_addref', 'int_release', 'int_allocRep', 'SCStr', '~SCStr',
             'operator<', 'endsWith', 'append', 'prepend', 'setFromUTF16',
             'replace', 'getBuffer', 'empty', 'utf8_length', 'int_endsWith',
             'trimRear', 'format'}
CALL = re.compile(r'SCStr::(operator==|operator!=|operator<|~SCStr|[A-Za-z_]\w*)\s*\(')
BLOCKED = re.compile(r'\b(?:LAB_|ExceptionList|stack0x|SUB_|unaff_|in_EBP)')
COMPLEX = re.compile(r'\._\d+_\d+_|\b(?:CONCAT\d+|SUB\d+|ZEXT\d+|SEXT\d+)\b')
PLAIN_CALL = re.compile(r'\b([A-Za-z_]\w*)\s*\(')
ALLOWED_CALLS = {'if', 'while', 'switch', 'sizeof', 'return', 'int', 'uint',
                 'long', 'short', 'char', 'float', 'double', 'undefined',
                 'undefined1', 'undefined2', 'undefined4', 'undefined8',
                 'code', 'SCStr', 'operator', 'AddRef', 'Release', 'new', 'for', 'byte', 'ushort', *SUPPORTED}
# Runtime and exported entry points the reference calls by name. They are real
# functions in the image or in the import library, so a declaration lets the
# compiler emit the reference's own call and the resolver reaches its thunk.
RUNTIME_CALLS = {'free', 'fclose', 'LOCK', 'operator_new',
                 '_invalid_parameter_noinfo_noreturn', 'SCLibFixCpUdnInUri',
                 'SCLibGetFixedSCUri', 'SCLibGetFixedSCUriTitle',
                 '_eh_vector_destructor_iterator_'}
ALLOWED_CALLS |= RUNTIME_CALLS
THISCALL = re.compile(
    r'(?P<result>[^\n]+?)\s+__thiscall\s+(?P<name>(?:thunk_)?FUN_[0-9a-f]{8})'
    r'\((?P<parameters>[^)]*)\)')
RAW_ADDREF = re.compile(r'\(\*\*\(code \*\*\)\(\*param_1 \+ 4\)\)\(\);')
QUERY_NAME = re.compile(r'\(param_3\)->operator==\("([^"\\]*)"\)')


def call_end(source, opening):
    depth = 0
    quote = None
    escaped = False
    for pos in range(opening, len(source)):
        char = source[pos]
        if quote:
            if escaped:
                escaped = False
            elif char == '\\':
                escaped = True
            elif char == quote:
                quote = None
        elif char in ('"', "'"):
            quote = char
        elif char == '(':
            depth += 1
        elif char == ')':
            depth -= 1
            if depth == 0:
                return pos
    raise ValueError('unclosed SCStr call')


def split_first_argument(arguments):
    depth = 0
    quote = None
    escaped = False
    for pos, char in enumerate(arguments):
        if quote:
            if escaped:
                escaped = False
            elif char == '\\':
                escaped = True
            elif char == quote:
                quote = None
        elif char in ('"', "'"):
            quote = char
        elif char in '([{':
            depth += 1
        elif char in ')]}':
            depth -= 1
        elif char == ',' and depth == 0:
            return arguments[:pos].strip(), arguments[pos + 1:].strip()
    return arguments.strip(), ''


def normalize_definition(record):
    """Normalize exported member definitions before lowering calls in the body."""
    source = re.sub(r'/\*.*?\*/', '', record['decompiled_c'], flags=re.S)
    header, sep, body = source.partition('{')
    definition = re.search(r'([^\s()]+)\s*\(', header)
    if not definition or not sep:
        return source
    prefix=header[:definition.start(1)]
    if record.get('verified_stack_cc') in {'__cdecl','__stdcall'}:
        prefix=re.sub(r'\b__(?:thiscall|fastcall|cdecl|stdcall)\b','',prefix).rstrip()+' '+record['verified_stack_cc']+' '
    header = (prefix + 'FUN_' + record['entry'] +
              header[definition.end(1):])
    # The recovered explicit receiver must not collide with C++'s this keyword.
    return re.sub(r'\bthis\b', 'ghidra_this', header + sep + body)


def rewrite_calls(source):
    # Work from right to left so replacement does not invalidate earlier offsets.
    matches = list(CALL.finditer(source))
    if not matches or any(match.group(1) not in SUPPORTED for match in matches):
        return None
    for match in reversed(matches):
        opening = match.end() - 1
        closing = call_end(source, opening)
        first, rest = split_first_argument(source[opening + 1:closing])
        if not first:
            return None
        method = match.group(1)
        # Ghidra represents reference arguments as pointers. Restore references
        # only for declarations whose original exported signature uses them.
        pointer_names = set(re.findall(r'\b(?:SCStr|SwfStr)\s*\*\s*(\w+)', source))
        argument, tail = split_first_argument(rest)
        is_object_pointer = (argument in pointer_names or
                             bool(re.search(r'\((?:SCStr|SwfStr)\s*\*\)', argument)))
        if method in {'SCStr', 'operator<', 'endsWith', 'append', 'prepend'} and is_object_pointer:
            rest = f'*({argument})' + (f', {tail}' if tail else '')
        if method == 'SCStr':
            replacement = f'new ({first}) SCStr({rest})'
        else:
            replacement = f'({first})->{method}({rest})'
        source = source[:match.start()] + replacement + source[closing + 1:]
    return source


def restore_scstr_byte_offsets(source):
    """Preserve offsets from Ghidra's one-byte opaque SCStr datatype.

    The real C++ class occupies four bytes on x86. Retain that layout for
    construction/calls, but perform recovered pointer arithmetic in bytes.
    Only explicit parenthesized additions/subtractions are admitted here;
    integer pointers and already cast expressions are left untouched.
    """
    names = set(re.findall(r'\bSCStr\s*\*\s*(\w+)', source))
    count = 0
    for name in sorted(names):
        pattern = (r'\(\s*' + re.escape(name) +
                   r'\s*([+-])\s*([^()\n]+)\)')
        def replace(match):
            nonlocal count
            offset = match.group(2).strip()
            # Do not swallow comparison, assignment, comma, or logical syntax.
            if not re.fullmatch(r'[A-Za-z_0-9\s+*/%&|^<>-]+', offset) or any(
                    token in offset for token in ('<<', '>>', '&&', '||', '<', '>')):
                return match.group(0)
            count += 1
            return f'((SCStr *)((char *){name} {match.group(1)} ({offset})))'
        source = re.sub(pattern, replace, source)
    return source, count


def restore_virtual_refcount_calls(source):
    """Recover implicit this for standalone zero-argument virtual slots 1/2.

    These are provisional Sonos refcount ABI candidates. A byte comparison must
    establish each resulting function before it can contribute to coverage.
    Do not reinterpret calls whose result is used, arguments are present, or
    whose object expression cannot be recovered directly from the vptr load.
    """
    count = 0
    patterns = [
        (r'(?m)^(\s*)\(\*\*\(code \*\*\)\(\*([A-Za-z_]\w*) \+ '
         r'(4|8|0x4|0x8)\)\)\(\);', False),
        (r'(?m)^(\s*)\(\*\*\(code \*\*\)\(\*\(int \*\)\(([^()\n]+)\) \+ '
         r'(4|8|0x4|0x8)\)\)\(\);', True),
    ]
    for pattern, _ in patterns:
        def replacement(match):
            nonlocal count
            count += 1
            method = 'AddRef' if int(match.group(3), 0) == 4 else 'Release'
            return f'{match.group(1)}((RefCounted *)({match.group(2)}))->{method}();'
        source = re.sub(pattern, replacement, source)
    return source, count


def restore_virtual_zero_arg_calls(source):
    """Restore this for integer-result virtual calls at observed x86 slots.

    These declarations are compiler probes, not established API prototypes.
    Only byte-verified resulting bodies may enter the coverage inventory.
    """
    slots = set()
    count = 0
    patterns = [
        r'\(\*\*\(code \*\*\)\(\*([A-Za-z_]\w*) \+ (0x[0-9a-f]+|\d+)\)\)\(\)',
        r'\(\*\*\(code \*\*\)\(\*\(int \*\)\(([^()\n]+)\) \+ (0x[0-9a-f]+|\d+)\)\)\(\)',
    ]
    def replace(match):
        nonlocal count
        offset = int(match.group(2), 0)
        if offset % 4 or offset > 1020:
            return match.group(0)
        slot = offset // 4
        slots.add(slot)
        count += 1
        return f'((RecoveredVirtualSlots *)({match.group(1)}))->VirtualSlot{slot}()'
    for pattern in patterns:
        source = re.sub(pattern, replace, source)
    # Slot zero is expressed without an addition by the decompiler.
    def replace_zero(match):
        nonlocal count
        slots.add(0)
        count += 1
        return f'((RecoveredVirtualSlots *)({match.group(1)}))->VirtualSlot0()'
    source = re.sub(r'\(\*\*\(code \*\*\)\*([A-Za-z_]\w*)\)\(\)', replace_zero, source)
    return source, count, slots


def restore_pointer_width_casts(source):
    """Make Ghidra's implicit pointer-to-undefined4 stores valid x86 C++."""
    word_pointers = set(re.findall(r'\bundefined4\s*\*\s*(\w+)', source))
    other_pointers = set(re.findall(r'\b(?:int|SCStr|char|void)\s*\*\s*(\w+)', source))
    for destination in word_pointers:
        for value in other_pointers:
            source = re.sub(r'(\*\s*' + re.escape(destination) +
                            r'\s*=\s*)' + re.escape(value) + r'(\s*;)',
                            r'\g<1>(undefined4)' + value + r'\2', source)
    return source


def restore_query_addref(source, body_bytes):
    """Recover the early-return source shape of repeated interface queries."""
    if body_bytes != 103 or len(RAW_ADDREF.findall(source)) != 2:
        return source
    names = QUERY_NAME.findall(source)
    if len(names) != 2 or names[1] != 'SCIObj':
        return source
    header = source[:source.index('{')].strip()
    if not re.fullmatch(
            r'undefined4 \* __thiscall FUN_[0-9a-f]{8}\('
            r'int \*param_1,undefined4 \*param_2,SCStr \*param_3\)', header):
        return source
    branch = '''
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
'''
    source = (f'{header}\n{{\n'
              f'  if (param_3->operator==("{names[0]}")) {{{branch}  }}\n'
              f'  if (param_3->operator==("SCIObj")) {{{branch}  }}\n'
              f'  *param_2 = 0;\n  return param_2;\n}}\n')
    return source


def eligible(source):
    body = source[source.find('{'):]
    if BLOCKED.search(body) or COMPLEX.search(source) or '::' in source:
        return False
    calls = set(PLAIN_CALL.findall(body))
    return not {call for call in calls - ALLOWED_CALLS
                if not re.fullmatch(r'(?:thunk_)?FUN_[0-9a-f]{8}|VirtualSlot\d+', call)}


def make_msvc_member(source, entry):
    """Represent an x86 Ghidra __thiscall as a genuine C++ member function."""
    match = THISCALL.search(source)
    if not match:
        return '', source
    receiver, separator, remaining = match.group('parameters').partition(',')
    name = re.search(r'\w+$', receiver.strip())
    if not name:
        raise ValueError(f'No receiver variable in {match.group(0)}')
    receiver_name = name.group(0)
    receiver_type = receiver[:name.start()].strip()
    if not receiver_type:
        raise ValueError(f'No receiver type in {match.group(0)}')
    rest = remaining.strip() if separator else ''
    class_name = 'Recovered_' + entry
    method_name = 'FUN_' + entry
    result_type = match.group('result').strip()
    suffix = ' noexcept' if re.match(r'\s*noexcept\b', source[match.end():]) else ''
    declaration = (f'struct {class_name} {{ '
                   f'{result_type} {method_name}({rest}){suffix}; }};')
    definition = (f'{result_type} {class_name}::{method_name}({rest})')
    changed = source[:match.start()] + definition + source[match.end():]
    opening = changed.index('{', match.start() + len(definition))
    changed = (changed[:opening + 1] +
               f'\n  {receiver_type} {receiver_name} = '
               f'({receiver_type})this;' + changed[opening + 1:])
    return declaration, changed


def cpp_source(records):
    globals_records = [{**r, 'decompiled_c': r['source']} for r in records]
    declarations = []
    for name, typ in sorted(global_types(globals_records).items()):
        declarations.append(f'extern {typ[:-2]} {name}[];' if typ.endswith('[]')
                            else f'extern {typ} {name};')
    vtables = sorted({label for r in records for label in r.get('vftables', [])})
    declarations.extend(f'extern char {symbol_name(label)}[];' for label in vtables)
    typed_declarations = {name: declaration for r in records
                          for name, declaration in r.get('abi_declarations', {}).items()}
    declarations.extend(typed_declarations.values())
    calls = sorted({name for r in records for name in
                    re.findall(r'\b(?:thunk_)?FUN_[0-9a-f]{8}\b',
                               r['source'].split('{', 1)[-1])})
    declarations.extend(f'extern int {name}(...);' for name in calls
                        if name not in typed_declarations)
    runtime = sorted({name for r in records for name in RUNTIME_CALLS
                      if re.search(r'\b' + re.escape(name) + r'\s*\(', r['source'])})
    declarations.extend(f'extern int {name}(...);' for name in runtime
                        if name not in typed_declarations)
    declarations = '\n'.join(declarations)
    # Different recovered functions can infer opposite signedness for the same
    # byte global. Preserve each local pointer type explicitly when taking its
    # address, so batching does not introduce a declaration conflict.
    members = []
    for record in records:
        source = record['source']
        for name in set(re.findall(r'\bchar\s*\*\s*(\w+)', source)):
            source = re.sub(r'(\b' + re.escape(name) + r'\s*=\s*)'
                            r'(&(?:DAT_|PTR_|s_)[A-Za-z_0-9]+)(\s*;)',
                            r'\1(char *)\2\3', source)
        members.append(make_msvc_member(source, record['entry']))
    member_declarations = '\n'.join(decl for decl, _ in members if decl)
    functions = '\n'.join(
        f'// Reference entry {r["entry"]}; body size {r["body_bytes"]} bytes.\n'
        f'#line 1 "ENTRY_{r["entry"]}"\n{member[1]}'
        for r, member in zip(records, members))
    virtual_slots = {slot for r in records for slot in r.get('virtual_slots', [])}
    virtual_class = ''
    if virtual_slots:
        virtual_class = ('struct RecoveredVirtualSlots {\n' + '\n'.join(
            f'  virtual int VirtualSlot{slot}();' for slot in range(max(virtual_slots)+1)) + '\n};\n')
    scstr_class = SCSTR
    if any(r.get('inline_scstr_cleanup') for r in records):
        scstr_class = SCSTR.replace('    ~SCStr();',
            '    ~SCStr() noexcept { int_release(); rep = 0; }')
    text = HEADER + DECLARATION_ALIASES + scstr_class + virtual_class + declarations + '\n' + member_declarations + '\n' + functions
    return reference_stdcall(text)[0]


def syntax(records, scratch):
    scratch.write_text(cpp_source(records))
    result = subprocess.run([str(COMPILER), '/nologo', '/Zs',
                             '/clang:--target=i686-pc-windows-msvc',
                             '/clang:-ferror-limit=0', os.path.relpath(scratch, ROOT)],
                            cwd=ROOT, capture_output=True, text=True)
    return result.returncode == 0, result.stderr


def split_valid(records, scratch, failures):
    if not records:
        return []
    good, error = syntax(records, scratch)
    if good:
        return records
    diagnostic = {m.group(1): m.group(2) for m in re.finditer(
        r'ENTRY_([0-9a-f]{8})\(\d+,\d+\): error: ([^\n]+)', error)}
    if diagnostic:
        failures.extend((r['entry'], diagnostic[r['entry']]) for r in records
                        if r['entry'] in diagnostic)
        return split_valid([r for r in records if r['entry'] not in diagnostic],
                           scratch, failures)
    if len(records) == 1:
        failures.append((records[0]['entry'], error.splitlines()[0] if error else 'syntax error'))
        return []
    middle = len(records) // 2
    return (split_valid(records[:middle], scratch, failures) +
            split_valid(records[middle:], scratch, failures))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('exports', nargs='+', type=Path)
    parser.add_argument('--output-dir', type=Path,
                        default=ROOT / 'analysis' / 'compiled-cpp-scstr')
    parser.add_argument('--virtual-refcount-calls', action='store_true',
                        help='Restore implicit this for standalone refcount virtual dispatches')
    parser.add_argument('--virtual-zero-arg-calls', action='store_true',
                        help='Probe implicit receivers for integer-result virtual calls without explicit arguments')
    parser.add_argument('--typed-calls', action='store_true',
                        help='Use inferred headers to recover direct call argument types and conventions')
    parser.add_argument('--byte-pointer-offsets', action='store_true',
                        help='Preserve byte arithmetic on Ghidra opaque SCStr pointers')
    parser.add_argument('--emit-source', type=Path)
    parser.add_argument('--emit-index', type=Path)
    args = parser.parse_args()
    output = args.output_dir.resolve()
    output.mkdir(parents=True, exist_ok=True)
    call_abi = None
    if args.typed_calls:
        from recovered_call_abi import CallABI
        call_abi = CallABI(args.exports)
        print(f'Inferred primitive prototypes: {len(call_abi.prototypes)}', flush=True)
    candidates = []
    for record in load_records(args.exports).values():
        source = normalize_definition(record)
        byte_offsets = 0
        if args.byte_pointer_offsets:
            source, byte_offsets = restore_scstr_byte_offsets(source)
        if 'SCStr::' not in source or BLOCKED.search(source[source.find('{'):]):
            continue
        rewritten = rewrite_calls(source)
        if rewritten:
            rewritten = width_preserving_pointer_casts(restore_pointer_width_casts(rewritten))
            labels = sorted(set(VFTABLE.findall(rewritten)))
            for label in sorted(labels, key=len, reverse=True):
                rewritten = rewritten.replace(label, f'(undefined4)&{symbol_name(label)}')
            rewritten = msvc_compatible_labels(rewritten)
            rewritten = restore_query_addref(rewritten, record['body_bytes'])
            virtual_count = 0
            virtual_slots = set()
            if args.virtual_zero_arg_calls:
                rewritten, virtual_count, virtual_slots = restore_virtual_zero_arg_calls(rewritten)
            if args.virtual_refcount_calls:
                rewritten, virtual_count = restore_virtual_refcount_calls(rewritten)
        if rewritten and eligible(rewritten):
            declarations, changed = {}, 0
            if call_abi:
                rewritten, declarations, changed = call_abi.lower(rewritten)
                if rewritten is None or changed + virtual_count == 0:
                    continue
            if (args.virtual_refcount_calls or args.virtual_zero_arg_calls) and not args.typed_calls and virtual_count == 0:
                continue
            candidates.append({**record, 'source': rewritten, 'vftables': labels,
                               'byte_offset_sites': byte_offsets,
                               'virtual_calls': virtual_count,
                               'virtual_slots': sorted(virtual_slots),
                               'abi_declarations': declarations, 'typed_calls': changed})
    candidates.sort(key=lambda r: int(r['entry'], 16))
    print(f'Candidates: {len(candidates)}', flush=True)
    scratch = output / '.syntax-probe.cpp'
    failures = []
    accepted = []
    for offset in range(0, len(candidates), 100):
        accepted.extend(split_valid(candidates[offset:offset + 100], scratch, failures))
        print(f'Checked {min(offset + 100, len(candidates))}/{len(candidates)}; '
              f'accepted {len(accepted)}', flush=True)
    scratch.unlink(missing_ok=True)
    source = output / 'ghidra_recovered.cpp'
    source.write_text(cpp_source(accepted))
    obj = output / 'ghidra_recovered.obj'
    result = subprocess.run([str(COMPILER), '/nologo', '/O2', '/c',
                             '/clang:--target=i686-pc-windows-msvc',
                             f'/Fo{obj}', os.path.relpath(source, ROOT)],
                            cwd=ROOT, capture_output=True, text=True)
    if result.returncode:
        raise SystemExit('Object compilation failed:\n' + result.stderr)
    with (output / 'compiled-index.tsv').open('w', newline='') as file:
        writer = csv.writer(file, delimiter='\t')
        writer.writerow(['entry', 'name', 'reference_body_bytes'])
        writer.writerows((r['entry'], r['name'], r['body_bytes']) for r in accepted)
    (output / 'failures.tsv').write_text('entry\terror\n' + ''.join(
        f'{entry}\t{error}\n' for entry, error in failures))
    if args.emit_source:
        args.emit_source.parent.mkdir(parents=True, exist_ok=True)
        args.emit_source.write_text(source.read_text())
    if args.emit_index:
        args.emit_index.parent.mkdir(parents=True, exist_ok=True)
        args.emit_index.write_text((output / 'compiled-index.tsv').read_text())
    metrics = {'candidate_functions': len(candidates), 'compiled_functions': len(accepted),
                      'compiled_reference_body_bytes': sum(r['body_bytes'] for r in accepted),
                      'syntax_rejected': len(failures),
                      'typed_call_sites': sum(r.get('typed_calls', 0) for r in accepted),
                      'virtual_call_sites': sum(r.get('virtual_calls', 0) for r in accepted),
                      'virtual_refcount_call_sites': sum(r.get('virtual_calls', 0) for r in accepted) if args.virtual_refcount_calls else 0,
                      'virtual_zero_arg_call_sites': sum(r.get('virtual_calls', 0) for r in accepted) if args.virtual_zero_arg_calls else 0,
                      'byte_offset_sites': sum(r.get('byte_offset_sites', 0) for r in accepted),
                      'object_bytes': obj.stat().st_size,
                      'scope': 'C++ object compilation; byte matching measured separately'}
    (output / 'coverage.json').write_text(json.dumps(metrics, indent=2) + '\n')
    print(json.dumps(metrics, indent=2))


if __name__ == '__main__':
    main()

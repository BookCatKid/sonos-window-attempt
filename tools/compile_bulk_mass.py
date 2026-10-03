#!/usr/bin/env python3
"""Bulk-compile decompiled records rejected by the strict eligibility gate.

The strict gate drops anything that calls another function, touches a data
symbol, uses a C++ member call, or contains Ghidra p-code helpers.  Every one
of those is mechanically recoverable:

  A::B::m(t, x)      -> ((StubA__B *)t)->m(x)          real thiscall + reloc
  A::B::member       -> static member decl inside a stub  data/fn + reloc
  Name<T>::x         -> strip <T> for stub naming; declare stub struct
  v._a_b_            -> *(undefined{b-a}*)((char*)&v+a) raw-offset access
  CONCATxy/ZEXT/SEXT -> plain C expression
  FUN_/DAT_/PTR_/s_/unaff_/in_/ExceptionList/stack0x -> extern declarations
  unknown calls      -> extern int name(...)           cdecl + reloc
  Capitalized type   -> struct decl (also covers X(...) construction)
  Type<args>/Ns::T   -> variadic template / nested decls

Calls and data references compile to COFF relocations, which the relocation
aware matcher masks - so they are matchable without knowing the target.
"""

import argparse
import csv
import json
import os
import re
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
COMPILER = Path('/opt/homebrew/opt/llvm/bin/clang-cl')
SYMBOLS = ROOT / 'analysis' / 'thunk-recovery-full' / 'symbols.jsonl'


def import_slot_names():
    """Ghidra names that own a ``PTR_<name>_<va>`` IAT slot in the reference.

    Calls to imported functions land on ``call dword ptr [__imp_*]`` in the
    reference, so extern decls for them must be ``__declspec(dllimport)`` to
    reproduce the indirect call instead of a direct E8 relocation.
    """
    names = set()
    if SYMBOLS.is_file():
        with SYMBOLS.open() as file:
            for line in file:
                try:
                    name = json.loads(line).get('name', '')
                except ValueError:
                    continue
                match = re.fullmatch(r'PTR_(.+)_([0-9a-fA-F]{8})', name)
                if match:
                    names.add(match.group(1))
    return names


IMPORT_SLOTS = import_slot_names()

HEADER = '''// Bulk recovered functions with mechanical artifact repair.
#define NULL 0
#define TRUE 1
#define FALSE 0
using undefined1 = unsigned char;
using undefined2 = unsigned short;
using undefined4 = unsigned int;
using undefined8 = unsigned long long;
using undefined = unsigned int;
using unsigned_int = unsigned int;
using uint = unsigned int;
using ulong = unsigned long;
using byte = unsigned char;
using ushort = unsigned short;
using longlong = long long;
using float10 = long double;
using code = int(...);
typedef unsigned int size_t;
typedef int FILE;
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef int BOOL;
typedef void *HANDLE;
typedef void *LPVOID;
typedef unsigned int UINT;
typedef long LONG;
typedef long HRESULT;
typedef wchar_t WCHAR;
typedef int int3;
typedef unsigned int uint3;
typedef struct { char _p[3]; } undefined3;
typedef struct { char _p[5]; } undefined5;
typedef struct { char _p[6]; } undefined6;
typedef struct { char _p[7]; } undefined7;
using ulonglong = unsigned long long;
using __time64_t = long long;
typedef long fpos_t;
typedef struct { char _p; } _Mbstatet;
struct GUID { char _pad; };
struct exception { char _pad; };
struct type_info { char _pad; };
extern "C" void *memcpy(void *, const void *, size_t);
extern "C" void *memset(void *, int, size_t);
extern "C" int memcmp(const void *, const void *, size_t);
extern "C" size_t strlen(const char *);
extern "C" size_t wcslen(const wchar_t *);
extern "C" size_t fread(void *, size_t, size_t, FILE *);
extern "C" size_t fwrite(const void *, size_t, size_t, FILE *);
extern "C" void *malloc(size_t);
extern "C" void free(void *);
extern "C" void *calloc(size_t, size_t);
extern "C" void *realloc(void *, size_t);
extern "C" char *strcpy(char *, const char *);
extern "C" wchar_t *wcscpy(wchar_t *, const wchar_t *);
extern "C" char *strstr(char *, const char *);
extern "C" int strcmp(const char *, const char *);
extern "C" int wcscmp(const wchar_t *, const wchar_t *);
'''

KEYWORDS = {'if', 'while', 'switch', 'sizeof', 'return', 'int', 'uint', 'long',
            'short', 'char', 'float', 'double', 'undefined', 'undefined1',
            'undefined2', 'undefined4', 'undefined8', 'code', 'for', 'do',
            'else', 'case', 'void', 'unsigned', 'signed', 'const', 'volatile',
            'static', 'extern', 'struct', 'class', 'union', 'enum', 'typedef',
            'goto', 'break', 'continue', 'default', 'this', 'new', 'delete',
            'true', 'false', 'bool', 'wchar_t', 'template', 'typename',
            'namespace', 'using', 'try', 'catch', 'throw', 'operator',
            'register', 'inline', 'virtual', 'public', 'private', 'protected',
            'friend', 'mutable', 'explicit', 'asm', 'auto', '__int64',
            '__int32', '__int16', '__int8', '__cdecl', '__stdcall',
            '__thiscall', '__fastcall', '__declspec', 'memcpy', 'memset',
            'memcmp', 'strlen', 'wcslen', 'fread', 'fwrite', 'malloc', 'free',
            'calloc', 'realloc', 'strcpy', 'wcscpy', 'strstr', 'strcmp',
            'wcscmp', 'size_t', 'FILE', 'DWORD', 'WORD', 'BYTE', 'BOOL',
            'HANDLE', 'LPVOID', 'UINT', 'LONG', 'HRESULT', 'WCHAR', 'GUID',
            'exception', 'type_info', 'int3', 'NULL', 'TRUE', 'FALSE',
            'noreturn', 'nullptr', 'and', 'or', 'not'}

INT_TYPE = {1: 'unsigned char', 2: 'unsigned short', 4: 'uint', 8: 'unsigned long long'}
SINT_TYPE = {1: 'char', 2: 'short', 4: 'int', 8: 'long long'}
SYMBOL_RE = re.compile(
    r'\b((?:thunk_)?_?FUN_[0-9a-f]{8}|_?DAT_\w+|_?PTR_\w+|'
    r's_[A-Za-z0-9_]+|unaff_\w+|in_\w+|ExceptionList|stack0x[0-9a-f]+|LAB_\w+|g_\w+)\b')


def _balanced(text, start, open_ch, close_ch):
    depth = 0
    for index in range(start, len(text)):
        char = text[index]
        if char == open_ch:
            depth += 1
        elif char == close_ch:
            depth -= 1
            if depth == 0:
                return index
    return -1


def _read_ident(text, start):
    end = start
    while end < len(text) and (text[end].isalnum() or text[end] == '_'):
        end += 1
    return text[start:end], end


def _scan_qualified_name(text, start):
    """Parse ``Ns::Cls<T>::leaf``; return (qualifier, leaf, end, is_call, leaf_templated)."""
    leaf, end = _read_ident(text, start)
    templated = False
    if text[end:end + 1] == '<':
        close = _balanced(text, end, '<', '>')
        if close < 0:
            return None
        after = close + 1
        while after < len(text) and text[after].isspace():
            after += 1
        if text[after:after + 2] != '::':
            return None
        qualifier, pos, templated = leaf, after, True
    elif text[end:end + 2] == '::':
        qualifier, pos = leaf, end
    else:
        return None
    while True:
        pos += 2
        while pos < len(text) and text[pos].isspace():
            pos += 1
        part, pos = _read_ident(text, pos)
        if not part:
            return None
        if part == 'operator':
            pos2 = pos
            while pos2 < len(text) and text[pos2] in ' \t':
                pos2 += 1
            sym, pos2 = _read_ident(text, pos2)
            if sym in ('new', 'delete'):
                part = 'op_' + sym
                pos = pos2
            else:
                m = re.match(r'[+\-*/<>=!&|%^~\[\]()]+', text[pos2:])
                if m:
                    part = 'op_' + re.sub(r'[^A-Za-z0-9]', '', str(ord(c) for c in m.group(0)) or 'x')
                    pos = pos2 + len(m.group(0))
        templated = False
        if pos < len(text) and text[pos] == '<':
            close = _balanced(text, pos, '<', '>')
            if close < 0:
                return None
            pos = close + 1
            templated = True
        after = pos
        while after < len(text) and text[after].isspace():
            after += 1
        if text[after:after + 2] == '::':
            qualifier += '::' + part
            pos = after
            continue
        tail = pos
        while tail < len(text) and text[tail].isspace():
            tail += 1
        is_call = tail < len(text) and text[tail] == '('
        return qualifier, part, tail, is_call, templated, pos


def _sanitize(name):
    name = re.sub(r'<[^>]*>', '', name)
    name = name.replace('std::', 'std__').replace('::', '__')
    name = re.sub(r'[^A-Za-z0-9_]', '_', name)
    name = re.sub(r'_+', '_', name).strip('_')
    return name or 'Anon'


def _pcode(source):
    def split_args(text, start):
        close = _balanced(text, start, '(', ')')
        if close < 0:
            return None, start
        inner = text[start + 1:close]
        depth = 0
        for index, char in enumerate(inner):
            if char in '([':
                depth += 1
            elif char in ')]':
                depth -= 1
            elif char == ',' and depth == 0:
                return [inner[:index], inner[index + 1:]], close
        return [inner], close

    out = []
    pos = 0
    pattern = re.compile(r'\b(CONCAT|ZEXT|SEXT|SUB)(\d)(\d)?\s*\(')
    while True:
        match = pattern.search(source, pos)
        if not match:
            out.append(source[pos:])
            break
        op, d1, d2 = match.group(1), int(match.group(2)), match.group(3)
        d2 = int(d2) if d2 else 0
        open_paren = match.end() - 1
        args, close = split_args(source, open_paren)
        out.append(source[pos:match.start()])
        if args is None:
            out.append(source[match.start():close + 1])
            pos = close + 1
            continue
        if op == 'CONCAT' and len(args) == 2:
            wide = 'unsigned long long' if d1 + d2 > 4 else 'uint'
            out.append(f'(({wide})({args[0].strip()}) << {d2 * 8} | ({wide})({args[1].strip()}))')
        elif op == 'ZEXT':
            out.append(f'({INT_TYPE.get(d2, "uint")})({args[0].strip()})')
        elif op == 'SEXT':
            out.append(f'({SINT_TYPE.get(d2, "int")})({args[0].strip()})')
        elif op == 'SUB':
            out.append(f'({INT_TYPE.get(d1, "uint")})(({args[0].strip()}) >> {d2 * 8})')
        else:
            out.append(source[match.start():close + 1])
        pos = close + 1
    return ''.join(out)


def _fieldrefs(source):
    def access(match):
        var, start, end = match.group(1), int(match.group(2)), int(match.group(3))
        kind = INT_TYPE.get(end - start, 'uint')
        return f'*({kind} *)((char *)&{var} + {start})'
    return re.sub(r'\b([A-Za-z_]\w*)\._(\d+)_(\d+)_', access, source)


def _rename_definition(source, entry):
    header_end = source.find('{')
    match = re.search(r'\b((?:thunk_)?FUN_[0-9a-f]{8})\s*\(', source[:header_end])
    if not match:
        return source
    return source[:match.start(1)] + 'FUN_' + entry + source[match.end(1):]


_OP_TAGS = {'==': 'op_eq', '!=': 'op_ne', '<=': 'op_le', '>=': 'op_ge',
            '<': 'op_lt', '>': 'op_gt', '<<': 'op_shl', '>>': 'op_shr',
            '++': 'op_inc', '--': 'op_dec', '+=': 'op_addeq', '-=': 'op_subeq',
            '+': 'op_add', '-': 'op_sub', '*': 'op_mul', '/': 'op_div',
            '%': 'op_mod', '&': 'op_band', '|': 'op_bor', '^': 'op_bxor',
            '[]': 'op_idx', '()': 'op_call', '=': 'op_assign', '->': 'op_arrow',
            '->*': 'op_arrowstar', ' new': 'op_new', ' delete': 'op_delete',
            ' new[]': 'op_newarr', ' delete[]': 'op_delarr', ',': 'op_comma',
            '~': 'op_bnot', '!': 'op_not'}


def _operators(body):
    """`X::operator==(a,b)` -> `X::op_eq(a,b)` so member-call machinery routes
    the first argument as `this` (the native thiscall shape)."""
    def tag(match):
        ops = match.group(2)
        if ops in _OP_TAGS:
            return match.group(1) + _OP_TAGS[ops] + '('
        return match.group(0)
    body = re.sub(r'\b((?:\w+::)+)operator\s*([^\w\s(]*)\s*\(', tag, body)
    body = re.sub(r'([.>])\s*operator\s*([^\w\s(]*)\s*\(',
                  lambda m: m.group(1) + _OP_TAGS.get(m.group(2), 'op_x') + '(',
                  body)
    return body


def transform(source, entry, stubs, externs, member_stubs, type_stubs,
              defined=frozenset(), member_methods=None):
    if member_methods is None:
        member_methods = {}
    """Return a C++-compilable form of one Ghidra definition."""
    source = re.sub(r'>\s*_+', '>', source)
    body_start = source.find('{')
    head, body = source[:body_start], source[body_start:]
    body = _pcode(body)
    body = _fieldrefs(body)
    body = re.sub(r'\(\s*code\s*\)', '(code *)', body)
    body = re.sub(r'\bcode\s*\(', 'code * (', body)
    body = _operators(body)
    out = []
    pos = 0
    while pos < len(body):
        match = re.search(r'[A-Za-z_]', body[pos:])
        if not match:
            out.append(body[pos:])
            break
        start = pos + match.start()
        out.append(body[pos:start])
        parsed = _scan_qualified_name(body, start)
        if parsed is None:
            _, end = _read_ident(body, start)
            out.append(body[start:end])
            pos = end
            continue
        qualifier, leaf, tail, is_call, templated, name_end = parsed
        before = body[max(0, start - 3):start]
        if before.endswith('.') or before.endswith('->'):
            member_stubs.setdefault(
                '__fcall__' if is_call else '__fields__', set()).add(leaf)
            out.append(body[start:tail])
            pos = tail
            continue
        if is_call:
            if leaf.startswith('op_') and leaf in ('op_new', 'op_delete'):
                flat = 'Ext_' + _sanitize(qualifier + '_' + leaf)
                externs.add(('call', flat))
                out.append(flat)
                pos = tail
            elif qualifier in KEYWORDS:
                out.append(body[start:tail])
                pos = tail
            else:
                stub_name = qualifier
                while '<' in stub_name:
                    stub_name = re.sub(r'<[^<>]*>', '', stub_name)
                member_methods.setdefault(qualifier, set()).add(leaf)
                open_paren = tail
                close_paren = _balanced(body, open_paren, '(', ')')
                if close_paren < 0:
                    out.append(body[start:tail])
                    pos = tail
                    continue
                inner = body[open_paren + 1:close_paren]
                depth = 0
                first_comma = -1
                for index, char in enumerate(inner):
                    if char in '([':
                        depth += 1
                    elif char in ')]':
                        depth -= 1
                    elif char == ',' and depth == 0 and first_comma < 0:
                        first_comma = index
                if first_comma < 0:
                    this_arg, rest = (inner, '') if inner.strip() else ('0', '')
                else:
                    this_arg, rest = inner[:first_comma], inner[first_comma + 1:]
                out.append(f'(({stub_name} *)({this_arg.strip()}))->{leaf}({rest.strip()})')
                pos = close_paren + 1
        else:
            after = tail
            while after < len(body) and body[after].isspace():
                after += 1
            next_char = body[after:after + 1]
            type_position = next_char in '*&' or (
                next_char.isalnum() or next_char == '_')
            if leaf == 'vftable':
                flat = 'ghidra_vftable_' + _sanitize(qualifier)
                externs.add(('data', flat))
                out.append(flat if before.endswith('&') else f'(uint)&{flat}')
                pos = tail
            elif templated:
                type_stubs.add(('nstemplate' if qualifier.startswith('std')
                                else 'template', qualifier + '::' + leaf))
                out.append(body[start:name_end])
                pos = name_end
            elif type_position:
                member_stubs.setdefault(qualifier, set()).add(leaf)
                out.append(body[start:name_end])
                pos = name_end
            else:
                if leaf == 'vftable':
                    flat = 'ghidra_vftable_' + _sanitize(qualifier)
                    externs.add(('data', flat))
                    out.append(flat if before.endswith('&') else f'(uint)&{flat}')
                else:
                    member_stubs.setdefault(qualifier, set()).add(leaf)
                    out.append(body[start:name_end])
                pos = tail
    result_body = re.sub(r'&\s*(LAB_\w+)', r'\1', ''.join(out))
    head = _pcode(head)
    for match in re.finditer(r'\bstd::(\w+)\s*<', head + result_body):
        type_stubs.add(('nstemplate', 'std::' + match.group(1)))
    for match in re.finditer(r'\b((?:\w+::)+)(\w+)\b', head):
        member_stubs.setdefault(match.group(1).rstrip(':'), set()).add(match.group(2))
    for match in re.finditer(r'\b((?:\w+::)*)?(\w+)\s*<[\w\s:,<>&*?]*>', head):
        qualifier, name = match.group(1) or '', match.group(2)
        if qualifier.startswith('std::') or qualifier == 'std':
            type_stubs.add(('nstemplate', 'std::' + name))
        elif qualifier:
            member_stubs.setdefault(qualifier.rstrip(':'), set()).add(name)
        else:
            type_stubs.add(('template', name))
    for match in re.finditer(r'\b((?:\w+::)*)?(\w+)\s*<[\w\s:,<>&*?]*>', result_body):
        qualifier, name = match.group(1) or '', match.group(2)
        if name[:1].isupper() or name.startswith('_') or 'std' in qualifier:
            kind = 'nstemplate' if 'std' in qualifier else 'template'
            type_stubs.add((kind, (qualifier.rstrip(':') + '::' + name) if qualifier else name))
    whole = head + result_body
    for symbol in SYMBOL_RE.findall(whole):
        bare = symbol.lstrip('_')
        if symbol.startswith('LAB_'):
            externs.add(('lab', symbol))
        elif bare.startswith(('FUN_', 'thunk_FUN_')):
            if symbol not in defined and bare not in defined:
                externs.add(('call', symbol))
        elif bare.startswith('PTR_'):
            externs.add(('ptr', symbol))
        elif symbol.startswith('s_'):
            externs.add(('str', symbol))
        elif symbol == 'ExceptionList':
            externs.add(('vptr', symbol))
        elif symbol.startswith('stack0x'):
            externs.add(('ptr', symbol))
        else:
            externs.add(('data', symbol))
    extern_names = {name for _, name in externs}
    for call in re.findall(r'\b([A-Za-z_]\w*)\s*\(', result_body):
        if call not in KEYWORDS and not call.startswith(('FUN_', 'thunk_FUN_', 'Stub_')) \
                and not re.match(r'[A-Z]', call) and call not in extern_names \
                and not SYMBOL_RE.fullmatch(call):
            externs.add(('call', call))
    for name in re.findall(r'\b([A-Z][A-Za-z0-9_]*)\b', whole):
        if name in KEYWORDS or re.match(r'^(FUN_|DAT_|PTR_|LAB_|Stub_|Ext_|ExceptionList|CONCAT|ZEXT|SEXT|SUB|unaff_|in_|stack0x|s_)', name):
            continue
        type_stubs.add(('struct' if re.search(r'[a-z]', name) else 'ptr', name))
    whole = re.sub(r'\bthis\b', 'this_', whole)
    head_end = whole.find('{')
    sig = whole[:head_end]
    open_paren = sig.find('(')
    if open_paren >= 0:
        close_paren = sig.rfind(')')
        params = sig[open_paren:close_paren]
        kws = ('new', 'delete', 'operator', 'template', 'register', 'catch',
               'throw', 'try', 'short', 'long', 'const', 'static', 'signed',
               'unsigned', 'void', 'int', 'char', 'float', 'double', 'bool',
               'case', 'switch', 'default', 'do', 'goto', 'if', 'else', 'for',
               'while', 'return', 'sizeof', 'struct', 'class', 'union', 'enum',
               'typedef', 'using', 'namespace', 'virtual', 'public', 'private',
               'protected', 'friend', 'inline', 'mutable', 'explicit',
               'volatile', 'extern', 'auto', 'asm', 'true', 'false', 'and',
               'or', 'not', 'wchar_t', 'typeid', 'nullptr', 'restrict',
               'alignas', 'alignof', 'bitand', 'bitor', 'compl', 'consteval',
               'constexpr', 'constinit', 'const_cast', 'continue', 'decltype',
               'dynamic_cast', 'export', 'noexcept', 'not_eq', 'or_eq',
               'static_assert', 'static_cast', 'reinterpret_cast', 'requires',
               'synchronized', 'thread_local', 'typename', 'xor', 'xor_eq',
               'and_eq')
        for kw in kws:
            params = _rename_kw_angle(params, kw)
        sig = sig[:open_paren] + params + sig[close_paren:]
        whole = sig + whole[head_end:]
    ret_type = None
    head_end = whole.find('{')
    tokens = whole[:head_end].split('(')[0].split()
    if len(tokens) >= 2:
        ret_type = ' '.join(t for t in tokens[:-1]
                            if not t.startswith('__') and
                            t not in ('static', 'extern', 'inline', 'virtual'))
    head_part, body_part = whole[:head_end], whole[head_end:]
    body_part = _eh_wrap(body_part)
    body_part = _fix_types(body_part, ret_type, head_part, externs)
    return _rename_definition(head_part + body_part, entry)


def _eh_wrap(body):
    """Drop Ghidra's explicit EH-frame bookkeeping and wrap the body in a
    try/catch so the compiler regenerates the frame itself.

    MSVC renders the registration as pushes plus ``mov fs:[0],eax`` while
    Ghidra exposes it as data-flow lines (``puStack_c = &LAB_handler``,
    ``local_10 = ExceptionList``, ``ExceptionList = &local_10``,
    ``local_8 = N`` ehstate writes, ``cookie ^ &stack0x``).  Emitted literally
    those lines produce an entirely different prologue; a real try block makes
    MSVC emit the registration frame it produced originally.
    """
    if 'ExceptionList' not in body and 'stack0x' not in body:
        return body
    # security cookie xor: `DAT_x ^ (uint)&stack0x*` is `xor eax, ebp`.
    body = re.sub(r'\^\s*\(uint\)\s*&\s*stack0x\w+', '', body)
    # pushed handler pointer and saved previous-handler chain node
    body = re.sub(r'^\s*\w+\s*=\s*\(?[^;{}]*?\bLAB_\w+\s*\)?\s*;', '', body,
                  flags=re.M)
    body = re.sub(r'^\s*\w+\s*=\s*\(?\s*(?:void\s*\*)?\s*\(?\s*ExceptionList'
                  r'\s*\)?\s*;', '', body, flags=re.M)
    # registration-node install and restore: `ExceptionList = ...;`
    body = re.sub(r'^\s*ExceptionList\s*=\s*[^;]+;', '', body, flags=re.M)
    # ehstate transition writes (`local_8 = N;`) are regenerated by scopes
    body = re.sub(r'^\s*(?:local_\w+|uStack_\w+|Stack_\w+)\s*=\s*'
                  r'(?:0x[0-9a-fA-F]+|\d+)\s*;', '', body, flags=re.M)
    open_brace = body.find('{')
    close_brace = body.rfind('}')
    if open_brace < 0 or close_brace <= open_brace:
        return body
    inner = body[open_brace + 1:close_brace]
    return (body[:open_brace + 1] + '\n try {' + inner +
            '\n } catch (...) { }\n' + body[close_brace:])


_NOT_TYPES = {'return', 'if', 'while', 'for', 'do', 'else', 'case', 'switch',
              'goto', 'sizeof', 'break', 'continue', 'default', 'throw',
              'delete', 'new', 'static_cast', 'reinterpret_cast', 'const_cast',
              'dynamic_cast', 'typedef', 'using', 'namespace', 'template',
              'typename', 'extern', 'static', 'inline', 'virtual', 'friend',
              'operator', 'this', 'assert'}
_DECL_RE = re.compile(
    r'^\s*((?:const\s+|unsigned\s+|signed\s+|struct\s+|long\s+|short\s+)*)'
    r'([A-Za-z_][\w:<>]*?)(\s*\*+\s*|\s+)([A-Za-z_]\w*)\s*(?=[;=,\)\[])',
    re.M)
_PARAM_RE = re.compile(
    r'((?:const\s+|unsigned\s+|signed\s+|struct\s+|long\s+|short\s+)*)'
    r'([A-Za-z_][\w:<>]*?)(\s*\*+\s*|\s+)([A-Za-z_]\w*)\s*(?=[,\)])')


def _varmap(text, params=''):
    """Collect local/parameter variable -> declared C type text."""
    varmap = {}
    for regex, text_part in ((_DECL_RE, text), (_PARAM_RE, params)):
        for match in regex.finditer(text_part):
            lead, base, stars, name = (match.group(1), match.group(2),
                                       match.group(3), match.group(4))
            if name in KEYWORDS or base in _NOT_TYPES:
                continue
            type_text = ' '.join(filter(None, [(lead or '').strip() or None, base]))
            if '*' in stars:
                type_text += ' ' + stars.replace(' ', '').replace('\t', '')
            varmap[name] = type_text
    return varmap


def _fix_types(body, ret_type, decl_text='', externs=frozenset()):
    """Cast assignment/return/comparison right-hand sides to the declared type
    of the destination so Ghidra's free mixing of int and pointer values
    typechecks (codegen is identical: a C cast emits no instructions)."""
    body = re.sub(r'/\*.*?\*/', '', body, flags=re.S)
    varmap = _varmap(body, decl_text)
    for kind, name in externs:
        varmap.setdefault(name, {'data': 'int', 'ptr': 'int *', 'vptr': 'void *',
                                 'str': 'char *', 'lab': 'undefined1 *'}.get(kind, 'int'))

    def cast_rhs(match):
        name, rhs = match.group(1), match.group(2)
        target = varmap.get(name)
        if not target or rhs.strip().startswith('{'):
            return match.group(0)
        return f'{name} = ({target})({rhs.strip()});'

    # `*name = rhs;` dereference assignments: cast rhs to the pointee type
    def cast_deref(match):
        name, rhs = match.group(1), match.group(2)
        target = varmap.get(name)
        if not target or not target.rstrip().endswith('*') or rhs.strip().startswith('{'):
            return match.group(0)
        pointee = target.rstrip()[:-1].rstrip()
        return f'*{name} = ({pointee})({rhs.strip()});'

    body = re.sub(r'\*\s*([A-Za-z_]\w*)\s*=(?![=])\s*([^;{}]*);', cast_deref, body)

    # `name[idx] = rhs;` element assignments: cast rhs to the element type.
    # Array declarations already store the element type in varmap; indexed
    # pointers drop one star.
    arrays = set(re.findall(r'\b([A-Za-z_]\w*)\s*\[[^\]]*\]\s*;', body))
    def cast_index(match):
        name, index, rhs = match.groups()
        target = varmap.get(name)
        if not target or rhs.strip().startswith('{'):
            return match.group(0)
        elem = target.rstrip()
        if name not in arrays and elem.endswith('*'):
            elem = elem[:-1].rstrip() or 'void'
        return f'{name}[{index}] = ({elem})({rhs.strip()});'
    body = re.sub(
        r'(?<![=!<>+\-*/%&|^?:])([A-Za-z_]\w*)\s*\[([^\]\[]*)\]\s*=(?![=])\s*([^;{}]*);',
        cast_index, body)
    # `T *name = rhs;` declaration-initializers (`*` blocks the name regex below)
    body = re.sub(
        r'^\s*([A-Za-z_][\w:<>]*(?:\s*\*+\s*)+)([A-Za-z_]\w*)\s*=\s*([^;{}]*);',
        lambda m: f'{m.group(1)}{m.group(2)} = '
                  f'({m.group(1).strip()})({m.group(3).strip()});'
                  if not m.group(3).strip().startswith('{') else m.group(0),
        body, flags=re.M)
    # plain `name = rhs;` assignments (not ==, <=, >=, !=, op=)
    body = re.sub(r'(?<![=!<>+\-*/%&|^?:])([A-Za-z_]\w*)\s*=(?![=])\s*([^;{}]*);',
                  cast_rhs, body)
    # comparisons ptrvar ==/!= sym and sym ==/!= ptrvar
    for name, target in varmap.items():
        if not target.rstrip().endswith('*'):
            continue
        body = re.sub(r'(\b' + re.escape(name) + r'\s*[!=]=\s*)([A-Za-z_]\w*)',
                      lambda m: m.group(1) + f'({target})({m.group(2)})', body)
        body = re.sub(r'\b([A-Za-z_]\w*)\s*([!=]=)\s*(\b' + re.escape(name) + r'\b)',
                      lambda m: f'({target})({m.group(1)}) {m.group(2)} {m.group(3)}', body)
    if ret_type and ret_type != 'void':
        body = re.sub(r'\breturn\s+([^;]+);',
                      lambda m: f'return ({ret_type})({m.group(1).strip()});', body)
    return body


def _rename_kw_angle(params, kw):
    """Rename keyword-as-identifier occurrences outside template <> args."""
    pattern = re.compile(r'\b' + kw + r'(?=\s*[=,)])')
    out = []
    pos = 0
    depth = 0
    for match in pattern.finditer(params):
        depth = params[:match.start()].count('<') - params[:match.start()].count('>')
        out.append(params[pos:match.start()])
        out.append(match.group(0) + '_' if depth == 0 else match.group(0))
        pos = match.end()
    out.append(params[pos:])
    return ''.join(out)


def transform_cached(record, defined):
    if 'xformed' not in record:
        stubs, member_stubs, externs, type_stubs = {}, {}, set(), set()
        member_methods = {}
        try:
            definition = transform(record['decompiled_c'], record['entry'],
                                   stubs, externs, member_stubs, type_stubs,
                                   defined, member_methods)
        except Exception:
            record['xformed'] = None
        else:
            record['xformed'] = (definition, stubs, member_stubs, externs,
                                 type_stubs, member_methods)
    return record['xformed']


def cpp_source(records, defined, bad_decls=()):
    stubs = {}
    member_stubs = {}
    member_methods = {}
    externs = set()
    type_stubs = set()
    definitions = []
    forward = []
    seen = set()
    for record in records:
        xformed = transform_cached(record, defined)
        if xformed is None:
            continue
        _, r_stubs, r_member, _, r_types, r_methods = xformed
        seen.update(r_stubs)
        seen.update(name.split('::')[-1] for _, name in r_types)
        seen.update(q.split('::')[0] for q in r_member
                    if not q.startswith('__'))
        seen.update(q.split('::')[0] for q in r_methods)
    for record in records:
        xformed = transform_cached(record, defined)
        if xformed is None:
            continue
        (definition, r_stubs, r_member, r_externs, r_types,
         r_methods) = xformed
        for name, methods in r_stubs.items():
            stubs.setdefault(name, set()).update(methods)
        for qualifier, leaves in r_member.items():
            member_stubs.setdefault(qualifier, set()).update(leaves)
        for qualifier, methods in r_methods.items():
            member_methods.setdefault(qualifier, set()).update(methods)
        externs |= r_externs
        type_stubs |= r_types
        head = definition[:definition.find('{')]
        sig = ' '.join(head.split())
        name_match = re.search(r'([A-Za-z_]\w*)\s*\([^;{}]*\)\s*$', head)
        fname = name_match.group(1) if name_match else None
        if fname and fname in seen:
            unique = f'{fname}_{record["entry"]}'
            head = (head[:name_match.start(1)] + unique +
                    head[name_match.end(1):])
            definition = head + definition[definition.find('{'):]
            sig = ' '.join(head.split())
            fname = unique
        if fname:
            seen.add(fname)
        if '(' in sig:
            forward.append(sig + ';')
        definitions.append(
            f'// Reference entry {record["entry"]}; body size {record["body_bytes"]} bytes.\n'
            f'#line 1 "ENTRY_{record["entry"]}"\n'
            f'{definition}')
    decls = []
    for kind, name in sorted(externs):
        if kind == 'call':
            dllimport = ' __declspec(dllimport)' if name in IMPORT_SLOTS else ''
            decls.append(f'extern{dllimport} int {name}(...);')
        elif kind == 'lab':
            decls.append(f'extern undefined1 {name}[];')
        elif kind == 'vptr':
            decls.append(f'extern void *{name};')
        elif kind == 'ptr':
            decls.append(f'extern int *{name};')
        elif kind == 'str':
            decls.append(f'extern char {name}[];')
        else:
            decls.append(f'extern int {name};')
    tree = {}
    for qualifier, leaves in member_stubs.items():
        if qualifier in ('__fields__', '__fcall__', ''):
            continue
        node = tree
        for part in qualifier.split('::'):
            node = node.setdefault(part.split('<')[0].strip() or '_t', {})
        node.setdefault('__leaves__', set()).update(leaves)
    for qualifier, methods in member_methods.items():
        if qualifier in ('__fields__', '__fcall__', ''):
            continue
        node = tree
        for part in qualifier.split('::'):
            node = node.setdefault(part.split('<')[0].strip() or '_t', {})
        node.setdefault('__methods__', set()).update(methods)

    fcalls = member_stubs.get('__fcall__', set())
    fields = member_stubs.get('__fields__', set()) - fcalls
    field_decls = (''.join(f' int {f};' for f in sorted(fields) if f.isidentifier()) +
                   ''.join(f' template<class... A> int {f}(A...);'
                           for f in sorted(fcalls) if f.isidentifier()))

    ops = (' template<class T> int operator==(T);'
           ' template<class T> int operator!=(T);'
           ' template<class T> int operator<(T);'
           ' template<class T> int operator<=(T);'
           ' template<class T> int operator>(T);'
           ' template<class T> int operator>=(T);'
           ' template<class T> int operator+(T);'
           ' template<class T> int operator-(T);'
           ' template<class T> int operator*(T);'
           ' template<class T> int operator/(T);'
           ' template<class T> int operator[](T);'
           ' template<class T> int operator=(T);'
           ' template<class... A> int operator()(A...);'
           ' int operator++(); int operator++(int);'
           ' int operator--(); int operator--(int);'
           ' int operator!();')

    def emit_tree(node):
        methods = node.get('__methods__', set())
        inner = ''.join(f' template<class... A> int {method}(A...);'
                        for method in sorted(methods) if method.isidentifier())
        inner += ''.join(f' static int {leaf};'
                         for leaf in sorted(set(node.get('__leaves__', ())) - methods)
                         if leaf.isidentifier())
        for name, child in sorted(node.items()):
            if name in ('__leaves__', '__methods__'):
                continue
            inner += (f' struct {name} {{ char _pad; {name}(...);{ops}'
                      f'{field_decls}{emit_tree(child)} }};')
        return inner

    nstemplates = {name.split('::')[-1] for kind, name in type_stubs if kind == 'nstemplate'}
    std_node = tree.pop('std', None)
    if std_node is not None:
        for name in nstemplates:
            std_node.pop(name, None)
            std_node.get('__leaves__', set()).discard(name)
        decls.append(f'namespace std {{{emit_tree(std_node)}}}')
    for name, child in sorted(tree.items()):
        decls.append(f'struct {name} {{ char _pad; {name}(...);{ops}'
                     f'{field_decls}{emit_tree(child)} }};')
    emitted_types = set(tree.keys())
    for kind, name in sorted(type_stubs):
        leaf_name = name.split('::')[-1]
        if leaf_name in emitted_types or leaf_name in stubs:
            continue
        emitted_types.add(leaf_name)
        if kind == 'struct':
            decls.append(f'struct {leaf_name} {{ char _pad; {leaf_name}(...);{ops}'
                         f'{field_decls} }};')
        elif kind == 'template':
            decls.append(f'template<class...> struct {leaf_name} '
                         f'{{ char _pad; {leaf_name}(...);{ops}{field_decls} }};')
        elif kind == 'nstemplate':
            decls.append(f'namespace std {{ template<class...> struct {leaf_name} '
                         f'{{ char _pad; {leaf_name}(...);{ops}{field_decls} }}; }}')
        else:
            decls.append(f'typedef void *{leaf_name};')
    for stub, methods in sorted(stubs.items()):
        decls.append(f'struct {stub} {{ {stub}(...);{ops}' + ''.join(
            f' int {method}(...);' for method in sorted(methods)) + ' };')
    decls.append('using namespace std;')
    decl_lines = [line for line in decls + forward if line not in bad_decls]
    return (HEADER + '\n'.join(decl_lines) + '\n' +
            '\n'.join(definitions), set(decl_lines))


def syntax_ok(source, scratch):
    scratch.write_text(source)
    result = subprocess.run([str(COMPILER), '/nologo', '/Zs', '/EHsc',
                             '/clang:--target=i686-pc-windows-msvc',
                             '/clang:-ferror-limit=0', os.path.relpath(scratch, ROOT)],
                            cwd=ROOT, capture_output=True, text=True)
    return result.returncode == 0, result.stderr + result.stdout


def split_valid(records, scratch, failures, bad_decls):
    if not records:
        return []
    defined = frozenset('FUN_' + record['entry'] for record in records)
    for record in records:
        transform_cached(record, defined)
    remaining = [r for r in records if r['xformed'] is not None]
    for record in records:
        if record['xformed'] is None:
            failures.append((record['entry'], 'transform error'))
    if not remaining:
        return []
    error = ''
    for _ in range(8):
        source, decl_lines = cpp_source(remaining, defined, bad_decls)
        good, error = syntax_ok(source, scratch)
        if good:
            return remaining
        diagnostic = {}
        for match in re.finditer(r'ENTRY_([0-9a-f]{8})\(\d+,\d+\): error: ([^\n]+)', error):
            diagnostic.setdefault(match.group(1), match.group(2))
        bad = set(diagnostic)
        source_lines = source.split('\n')
        for match in re.finditer(
                r'syntax-probe[^:()]*\.cpp\((\d+),\d+\): error:', error):
            line = int(match.group(1)) - 1
            if 0 <= line < len(source_lines) and source_lines[line] in decl_lines:
                bad_decls.add(source_lines[line])
        for record in remaining:
            if record['entry'] in bad:
                failures.append((record['entry'], diagnostic[record['entry']]))
        remaining = [r for r in remaining if r['entry'] not in bad]
        if not bad:
            break
        if not remaining:
            return []
    if len(remaining) == 1:
        failures.append((remaining[0]['entry'], error.splitlines()[0] if error else 'syntax'))
        return []
    mid = len(remaining) // 2
    return (split_valid(remaining[:mid], scratch, failures, bad_decls) +
            split_valid(remaining[mid:], scratch, failures, bad_decls))


def load_records(paths, skip):
    records = {}
    for path in paths:
        with open(path) as file:
            for line in file:
                try:
                    record = json.loads(line)
                except json.JSONDecodeError:
                    continue
                if 'decompiled_c' not in record:
                    continue
                entry = record['entry']
                if entry in records or entry in skip:
                    continue
                records[entry] = record
    return records


def eligible_bulk(source):
    return not re.search(r'\bswitchD_|\bSUB_|\bbadstackalloc|\bin_FS_SEGMENT|\bunaff_retaddr', source)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('exports', nargs='+', type=Path)
    parser.add_argument('--part-size', type=int, default=1500)
    parser.add_argument('--name-prefix', default='bulk')
    parser.add_argument('--source-dir', type=Path, default=ROOT / 'src' / 'generated' / 'bulk')
    parser.add_argument('--index-dir', type=Path, default=ROOT / 'analysis' / 'compiled-cpp-bulk')
    parser.add_argument('--skip-exact', type=Path, nargs='*', default=[])
    parser.add_argument('--limit', type=int, default=0)
    args = parser.parse_args()
    skip = set()
    for path in args.skip_exact:
        with open(path, newline='') as file:
            for row in csv.DictReader(file, delimiter='\t'):
                if row.get('exact_after_known_relocations') == 'True':
                    skip.add(row['entry'])
    records = sorted(load_records(args.exports, skip).values(),
                     key=lambda r: int(r['entry'], 16))
    candidates = [r for r in records if eligible_bulk(r['decompiled_c'])]
    if args.limit:
        candidates = candidates[:args.limit]
    print(f'{len(records)} records, {len(candidates)} candidates '
          f'({sum(r["body_bytes"] for r in candidates)} bytes), {len(skip)} skipped')
    args.source_dir.mkdir(parents=True, exist_ok=True)
    args.index_dir.mkdir(parents=True, exist_ok=True)
    scratch = args.index_dir / f'.syntax-probe-{args.name_prefix}-{os.getpid()}.cpp'
    failures = []
    accepted = []
    bad_decls = set()
    for offset in range(0, len(candidates), args.part_size):
        part = candidates[offset:offset + args.part_size]
        good = split_valid(part, scratch, failures, bad_decls)
        if not good:
            print(f'part {offset}: nothing survived')
            continue
        name = f'{args.name_prefix}_{offset // args.part_size:04d}'
        source_path = args.source_dir / f'{name}.cpp'
        source_path.write_text(
            cpp_source(good, frozenset('FUN_' + r['entry'] for r in good),
                       bad_decls)[0])
        index_dir = args.index_dir / name
        index_dir.mkdir(parents=True, exist_ok=True)
        with (index_dir / 'compiled-index.tsv').open('w', newline='') as file:
            writer = csv.writer(file, delimiter='\t')
            writer.writerow(['entry', 'name', 'reference_body_bytes'])
            writer.writerows([r['entry'], r['name'], r['body_bytes']] for r in good)
        accepted.extend(good)
        print(f'{name}: {len(good)}/{len(part)} fns '
              f'({sum(r["body_bytes"] for r in good)} bytes)', flush=True)
    scratch.unlink(missing_ok=True)
    (args.index_dir / f'failures-{args.name_prefix}.tsv').write_text(
        'entry\terror\n' + ''.join(
            f'{entry}\t{error}\n' for entry, error in failures))
    print(f'accepted {len(accepted)} fns / {sum(r["body_bytes"] for r in accepted)} bytes')


if __name__ == '__main__':
    main()

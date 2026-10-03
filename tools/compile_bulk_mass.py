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
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef unsigned char uchar;
typedef int BOOL;
typedef void *HANDLE;
typedef struct HINSTANCE__ { char _pad; } HINSTANCE__;
typedef HINSTANCE__ *HINSTANCE;
typedef void *LPVOID;
typedef unsigned int UINT;
typedef long LONG;
typedef long HRESULT;
typedef wchar_t WCHAR;
typedef int int3;
typedef unsigned int uint3;
typedef struct undefined3 { char _p[3]; undefined3(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined3;
typedef struct undefined5 { char _p[5]; undefined5(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined5;
typedef struct undefined6 { char _p[6]; undefined6(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined6;
typedef struct undefined7 { char _p[7]; undefined7(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined7;
using ulonglong = unsigned long long;
using __time64_t = long long;
typedef signed char sbyte;
typedef unsigned long long uint5;
typedef long long int5;
typedef unsigned long long uint6;
typedef long long int6;
typedef unsigned long long uint7;
typedef long long int7;
typedef unsigned int uintptr_t;
typedef int intptr_t;
typedef struct { char _p[10]; } unkuint10;
#define NAN 0.0f/0.0f
#define INFINITY 1.0f/0.0f
struct tm { int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon;
  int tm_year; int tm_wday; int tm_yday; int tm_isdst; };
struct SYSTEMTIME { WORD wYear; WORD wMonth; WORD wDayOfWeek; WORD wDay;
  WORD wHour; WORD wMinute; WORD wSecond; WORD wMilliseconds; };
struct _jmp_buf { int _p[16]; };
extern "C" void longjmp(void *, int);
typedef struct { char _p[256]; } _wfinddata64i32_t;
extern int vftable;
typedef struct { char *_ptr; int _cnt; char *_base; int _flag;
  int _file; int _charbuf; int _bufsiz; char *_tmpfname; char *ptr;
  int cnt; void *base; int file; } _FILE_stub;
typedef _FILE_stub FILE;
typedef _FILE_stub _iobuf;
struct facet { char _pad; };
struct id { char _pad; };
typedef long fpos_t;
typedef struct { char _p; } _Mbstatet;
struct GUID { char _pad; };
struct exception { char _pad; };
struct type_info { char _pad; };
extern "C" void *memcpy(void *, const void *, size_t);
extern "C" void *memset(void *, ...);
extern "C" int memcmp(const void *, const void *, ...);
extern "C" size_t strlen(const char *);
extern "C" size_t wcslen(const wchar_t *);
extern "C" size_t fread(void *, ...);
extern "C" size_t fwrite(const void *, ...);
extern "C" void *malloc(...);
extern "C" void free(void *);
extern "C" void *calloc(...);
extern "C" void *realloc(...);
extern "C" char *strcpy(char *, const char *);
extern "C" wchar_t *wcscpy(wchar_t *, const wchar_t *);
extern "C" char *strstr(...);
extern "C" int strcmp(const char *, const char *);
extern "C" int wcscmp(const wchar_t *, const wchar_t *);
extern "C" char *strchr(const void *, int);
extern "C" char *strrchr(const void *, int);
extern "C" char *strncpy(char *, const char *, size_t);
extern "C" char *strcat(char *, const char *);
extern "C" int strncmp(const char *, const char *, size_t);
extern "C" int atoi(const char *);
extern "C" int sprintf(char *, const char *, ...);
extern "C" int snprintf(char *, size_t, const char *, ...);
extern "C" int sscanf(const char *, const char *, ...);
extern "C" long strtol(const char *, char **, int);
extern "C" int fclose(void *);
typedef struct { char _p[64]; } _stat64i32;
typedef void (*_purecall_handler)(void);
extern "C" _purecall_handler _set_purecall_handler(_purecall_handler);
typedef _Mbstatet mbstate_t;
extern "C" size_t _Mbrtowc(wchar_t *, const char *, size_t, mbstate_t *,
                           void *);
extern "C" int feof(void *);
extern "C" int fflush(void *);
extern "C" unsigned long __readfsdword(unsigned long);
#pragma intrinsic(__readfsdword)
extern "C" int __except_handler4(void);
extern "C" int __except_handler3(void);
extern "C" void __security_check_cookie(size_t);
extern "C" int __security_cookie;
'''

HEADER_TYPES = {'WORD', 'DWORD', 'BYTE', 'BOOL', 'SHORT', 'LONG', 'ULONG',
                'FILE', '_iobuf', '_FILE_stub', 'fpos_t', '_Mbstatet', 'GUID',
                'exception', 'facet', 'id', 'bad_alloc', 'bad_cast',
                'bad_typeid', 'runtime_error', 'logic_error', 'length_error',
                'out_of_range', 'range_error', 'overflow_error',
                'underflow_error', 'ios_base', 'tm', 'SYSTEMTIME', '_jmp_buf',
                '_wfinddata64i32_t', '_stat64i32', '_purecall_handler',
                'size_t', 'ptrdiff_t', 'wchar_t', 'code', 'undefined',
                'undefined1', 'undefined2', 'undefined4', 'undefined8',
                'undefined16', 'byte', 'word', 'sbyte', 'sword', 'float10',
                'unkbyte9', 'EVEXTOUTPROC', 'HINSTANCE__', 'HINSTANCE',
                'IUnknown', 'mbstate_t'}

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
    r's_[A-Za-z0-9_]+|unaff_\w+|in_\w+|ExceptionList|stack0x[0-9a-f]+|LAB_\w+|'
    r'g_\w+|uRam\w+|_?UNK_\w+|uStack\w+|uRam\w+|_tls_\w+)\b')


def _balanced(text, start, open_ch, close_ch):
    depth = 0
    index = start
    while index < len(text):
        char = text[index]
        if char in '"\'':
            quote = char
            index += 1
            while index < len(text) and text[index] != quote:
                index += 2 if text[index] == '\\' else 1
            index += 1
            continue
        if char == open_ch:
            depth += 1
        elif char == close_ch:
            depth -= 1
            if depth == 0:
                return index
        index += 1
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
        if text[pos:pos + 1] == '~':
            pos += 1
            part, pos = _read_ident(text, pos)
            if not part:
                return None
            part = 'op_dtor'
        else:
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
                m = re.match(r'->\*|->|\[\]|\(\)|[+\-*/<>=!&|%^~]+',
                             text[pos2:])
                if m:
                    part = _OP_TAGS.get(m.group(0), 'op_x')
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

    pattern = re.compile(r'\b(CONCAT|ZEXT|SEXT|SUB)(\d)(\d)?\s*\(')

    def expand(src):
        out = []
        pos = 0
        while True:
            match = pattern.search(src, pos)
            if not match:
                out.append(src[pos:])
                break
            op, d1, d2 = match.group(1), int(match.group(2)), match.group(3)
            d2 = int(d2) if d2 else 0
            open_paren = match.end() - 1
            args, close = split_args(src, open_paren)
            out.append(src[pos:match.start()])
            if args is None:
                out.append(src[match.start():close + 1])
                pos = close + 1
                continue
            # Args may nest further pcode ops (CONCAT84(SUB84(x,0)&y, z));
            # expand them recursively since pos jumps past the whole match.
            args = [expand(arg) for arg in args]
            if op == 'CONCAT' and len(args) == 2:
                wide = 'unsigned long long' if d1 + d2 > 4 else 'uint'
                out.append(f'(({wide})({args[0].strip()}) << {d2 * 8} | ({wide})({args[1].strip()}))')
            elif op == 'ZEXT':
                out.append(f'({INT_TYPE.get(d2, "uint")})({args[0].strip()})')
            elif op == 'SEXT':
                out.append(f'({SINT_TYPE.get(d2, "int")})({args[0].strip()})')
            elif op == 'SUB' and len(args) == 2:
                # SUB{in}{out}(x, off): extract the out-sized subpiece at byte
                # offset `off` of the in-sized value x. Float operands need a
                # bit reinterpretation, so lvalues go through *(IN *)&x.
                arg0, arg1 = args[0].strip(), args[1].strip()
                in_t, out_t = (INT_TYPE.get(d1, 'uint'),
                               INT_TYPE.get(d2, 'uint'))
                if re.fullmatch(r'[A-Za-z_]\w*(\s*\[[^\]]*\])*', arg0):
                    bits = f'*({in_t} *)&({arg0})'
                else:
                    bits = f'({in_t})({arg0})'
                out.append(f'({out_t})(({bits}) >> (({arg1}) * 8))')
            else:
                out.append(src[match.start():close + 1])
            pos = close + 1
        return ''.join(out)

    out = [expand(source)]
    # Carry/borrow pcode ops: CARRY4(a,b) is the unsigned carry-out of a+b,
    # BORROW4(a,b) the unsigned borrow of a-b. Both appear inside Ghidra's
    # 64-bit add/sub decompositions.
    def carry(match):
        op, a, b = match.group(1), match.group(2).strip(), match.group(3).strip()
        wide = 'unsigned long long' if op.endswith('8') else 'uint'
        if op.startswith('CARRY') or op.startswith('SCARRY'):
            return f'(({wide})({a}) + ({wide})({b}) < ({wide})({a}))'
        return f'(({wide})({a}) < ({wide})({b}))'
    return re.sub(
        r'\b((?:S?CARRY|BORROW)[48])\s*\(([^,()]*(?:\([^()]*\)[^,()]*)*),'
        r'([^,()]*(?:\([^()]*\)[^,()]*)*)\)', carry, ''.join(out))


def _fieldrefs(source):
    def access(match):
        var, start, end = match.group(1), int(match.group(2)), int(match.group(3))
        kind = INT_TYPE.get(end - start, 'uint')
        return f'*({kind} *)((char *)&{var} + {start})'
    return re.sub(r'\b([A-Za-z_]\w*(?:\s*\[[^\]]*\])?)\._(\d+)_(\d+)_', access, source)


def _rename_definition(source, entry):
    header_end = source.find('{')
    head = source[:header_end]
    sig = head.rfind('*/') + 2 if '*/' in head else 0
    match = re.search(r'\b((?:thunk_)?FUN_[0-9a-f]{8})\s*\(', head[sig:])
    if match:
        match_start = sig + match.start(1)
        return source[:match_start] + 'FUN_' + entry + source[sig + match.end(1):]
    # Ghidra-named definitions such as `~pair<>` or `foo<bar>` are not valid
    # free-function declarators; rename the token before the parameter list.
    # Qualified member definitions ``std::X<args>::operator++`` must lose the
    # whole ``A::B<..>::`` qualifier, not just the leaf, or they become
    # out-of-class member definitions that need ``template<>``.
    paren = head.find('(', sig)
    if paren < 0:
        return source
    # Template arguments in Ghidra signatures span newlines; collapsing the
    # head's whitespace makes the qualified-name match below line-safe.
    head = head[:sig] + ' '.join(head[sig:].split())
    source = head + source[header_end:]
    paren = head.find('(', sig)
    targs = (r'<(?:[^()<>\n]|<(?:[^()<>\n]|<[^()<>\n]*>)*>)*>')
    name = re.search(
        r'((?:[A-Za-z_]\w*\s*(?:' + targs + r')?\s*::\s*)+'
        r'(?:operator[^\s(]*|~?\s*[A-Za-z_]\w*)\s*(?:' + targs + r')?|'
        r'~?\s*(?:operator[^\s(]*|[A-Za-z_]\w*)(?:\s*' + targs + r')?)\s*$',
        head[:paren])
    if not name:
        return source
    return source[:name.start(1)] + ' FUN_' + entry + source[paren:]


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
    # Ghidra spells multiword types with underscores inside template args and
    # declarations (``_Tree_simple_types<unsigned_int>``).
    source = re.sub(r'\b(unsigned|signed)_long_long_?\b',
                    r'\1 long long', source)
    source = re.sub(
        r'\b(unsigned|signed)_(int|char|short|long|float|double)_?\b',
        r'\1 \2', source)
    # ``struct_std::X``/``class_SCIFoo`` are the elaborated-type keywords
    # glued onto the name; the keyword is redundant once the name resolves.
    source = re.sub(r'\b(?:class|struct|enum|union)_std::', 'std::', source)
    source = re.sub(r'\b(?:class|struct|enum|union)_(?=[A-Z])',
                    '', source)
    body_start = source.find('{')
    head, body = source[:body_start], source[body_start:]
    body = _pcode(body)
    body = _fieldrefs(body)
    # Ghidra aliases stack locals/params with a leading underscore in some
    # records; the declaration keeps the plain name so drop the prefix.
    body = re.sub(r'\b_(local_\w+|param_\w+|uStack_\w+|in_\w+|unaff_\w+|'
                  r's_\w+|DAT_\w+|PTR_\w+|LAB_\w+|FUN_\w+)\b', r'\1', body)
    body = re.sub(r'\(\s*code\s*\)', '(code *)', body)
    body = re.sub(r'\bcode\s*\(', 'code * (', body)
    body = _operators(body)
    # ``~X<>()``/``~X()`` is Ghidra's pseudo-destructor call; route it to the
    # stub dtor like the ``X::~X`` member-call path does.
    body = re.sub(
        r'~\s*([A-Za-z_]\w*(?:::\w+)?)\s*(<[^;()]*>)?\s*\(\s*\)',
        lambda m: m.group(1) + (m.group(2) or '') + '::op_dtor()', body)
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
            ident, end = _read_ident(body, start)
            if (body[end:end + 1] == '<' and
                    (ident[0].isupper() or ident[0] == '_')):
                # Bare ``X<args>`` uses (no ``::`` suffix) still require a
                # template declaration; a ``typedef void *`` twin would make
                # the template-id ill-formed.
                close = _balanced(body, end, '<', '>')
                if close >= 0:
                    type_stubs.add(('template', ident))
                    out.append(body[start:close + 1])
                    pos = close + 1
                    continue
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
            elif qualifier == 'std':
                # std is a namespace: std::f(args) is a free call, not
                # a member call on a this object.
                member_methods.setdefault(qualifier, set()).add(leaf)
                out.append(body[start:tail])
                pos = tail
            else:
                stub_name = qualifier
                # ``<...>`` arguments are not kept in ``qualifier``; detect
                # them in the raw name instead.
                was_templated = '<' in body[start:tail]
                while '<' in stub_name:
                    stub_name = re.sub(r'<[^<>]*>', '', stub_name)
                if was_templated:
                    # The stub struct is emitted as `template<class...>`; a
                    # bare name in the this-cast would be a template-id error.
                    stub_name += '<>'
                # them through identifier-legal member names the resolver maps
                # back to X::~X / X::X.
                call_leaf = ('op_ctor' if leaf == stub_name.split(
                                '::')[-1].split('<')[0] else leaf)
                member_methods.setdefault(qualifier, set()).add(call_leaf)
                open_paren = tail
                close_paren = _balanced(body, open_paren, '(', ')')
                if close_paren < 0:
                    out.append(body[start:tail])
                    pos = tail
                    continue
                inner = body[open_paren + 1:close_paren]
                # The scan jumps past the call arguments; `std::X` names
                # used inside them still need std members/typedefs.
                for argname in re.findall(r'\bstd::(\w+)\b', inner):
                    member_stubs.setdefault('std', set()).add(argname)
                # ``X<args>::~X<args>`` used as a function-pointer argument
                # (eh_vector iterator dtor) never reaches the main scan.
                def arg_dtor(match):
                    bare = re.sub(r'<[^<>]*>', '', match.group(1))
                    member_methods.setdefault(bare, set()).add('op_dtor')
                    templated = '<' in match.group(0)
                    return ('((int (*)())&' + bare + ('<>' if templated else '')
                            + '::op_dtor)')
                def arg_ctor(match):
                    bare = re.sub(r'<[^<>]*>', '', match.group(1))
                    member_methods.setdefault(bare, set()).add('op_ctor')
                    templated = '<' in match.group(0)
                    return ('((int (*)())&' + bare + ('<>' if templated else '')
                            + '::op_ctor)')
                inner = re.sub(
                    r'\b([A-Za-z_]\w*(?:\s*<[^;()]*>)?'
                    r'(?:::\w+(?:\s*<[^;()]*>)?)*)'
                    r'::~\s*\w+(?:\s*<[^;()]*>)?',
                    arg_dtor, inner)
                inner = re.sub(
                    r'\b([A-Za-z_]\w*(?:\s*<[^;()]*>)?'
                    r'(?:::\w+(?:\s*<[^;()]*>)?)*)::'
                    r'([A-Za-z_]\w*(?:\s*<[^;()]*>)?)(?!\s*[(<])',
                    lambda m: (arg_ctor(m) if re.sub(
                                   r'<[^<>]*>', '', m.group(2)) ==
                               re.sub(r'<[^<>]*>', '',
                                      m.group(1).split('::')[-1])
                               else m.group(0)), inner)
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
                out.append(f'(({stub_name} *)({this_arg.strip()}))->{call_leaf}({rest.strip()})')
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
            elif leaf == 'op_dtor':
                # X::~X (templated or not) as a value is the dtor function
                # pointer; the templated check below would eat it first.
                stub_name = re.sub(r'<[^<>]*>', '', qualifier)
                member_methods.setdefault(qualifier, set()).add('op_dtor')
                out.append(f'((int (*)())&{stub_name}'
                           + ('<>' if '<' in body[start:name_end] else '')
                           + '::op_dtor)')
                pos = name_end
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
                    stub_name = qualifier
                    was_templated = '<' in stub_name
                    while '<' in stub_name:
                        stub_name = re.sub(r'<[^<>]*>', '', stub_name)
                    if was_templated:
                        stub_name += '<>'
                    if leaf == 'op_dtor' or leaf == stub_name.split(
                            '::')[-1].split('<')[0]:
                        # X::~X / X::X as a value is Ghidra's rendering of a
                        # dtor/ctor function pointer (&eh_vector iterator arg).
                        member_methods.setdefault(qualifier, set()).add(
                            'op_dtor' if leaf == 'op_dtor' else 'op_ctor')
                        method = ('op_dtor' if leaf == 'op_dtor'
                                  else 'op_ctor')
                        out.append(
                            f'((int (*)())&{stub_name}::{method})')
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
    # Lowercase template names in type position (``basic_ios<...> *x``) fall
    # outside the capitalized-type scan but still need a template stub. When
    # the same name exists as a bare ``std::name`` struct, an unqualified
    # global template would be ambiguous under ``using namespace std``, so
    # flatten the use to a global ``std_name`` template instead.
    flat_templates = set()
    for match in re.finditer(r'\b([a-z_]\w*)\s*<[^(){};=]*>(?=\s*[*&])',
                             head + result_body):
        name = match.group(1)
        if re.search(r'\bstd::\s*' + re.escape(name) + r'\b(?!\s*<)',
                     head + result_body):
            flat_templates.add(name)
    if flat_templates:
        flatten = re.compile(
            r'\b(' + '|'.join(sorted(flat_templates)) + r')\s*<')
        result_body = flatten.sub(
            lambda m: 'std_' + m.group(1) + '<', result_body)
        head = flatten.sub(lambda m: 'std_' + m.group(1) + '<', head)
        type_stubs.update(('template', 'std_' + n) for n in flat_templates)
    # Bare lowercase type names (``codecvt_base *p``) likewise collide with a
    # ``std::name`` struct stub under ``using namespace std``; flatten them to
    # the global ``std_name`` struct.
    whole = head + result_body
    for name in set(re.findall(r'\bstd::([a-z]\w*)\b(?!\s*<)', whole)):
        bare = re.compile(r'(?<![:\w.~])' + re.escape(name) +
                          r'(?=\s*[*&]+\s*\w|\s+\w+\s*[,)=;])')
        if bare.search(head + result_body):
            head = bare.sub('std_' + name, head)
            result_body = bare.sub('std_' + name, result_body)
            type_stubs.add(('struct', 'std_' + name))
    for match in re.finditer(r'\b([a-z_]\w*)\s*<[^(){};=]*>(?=\s*[*&])',
                             head + result_body):
        name = match.group(1)
        if not re.search(r'\bstd::\s*' + re.escape(name) + r'\b',
                         head + result_body):
            type_stubs.add(('template', name))
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
    for _cm in re.finditer(r'\b([A-Za-z_]\w*)\s*\(', result_body):
        pre = result_body[max(0, _cm.start() - 2):_cm.start()]
        if pre.endswith(('::', '->', '.')):
            continue
        call = _cm.group(1)
        if call not in KEYWORDS and not call.startswith(('FUN_', 'thunk_FUN_', 'Stub_')) \
                and not re.match(r'[A-Z]', call) and call not in extern_names \
                and not SYMBOL_RE.fullmatch(call):
            externs.add(('call', call))
    for name in re.findall(r'\b([A-Z][A-Za-z0-9_]*)\b', whole):
        if name in KEYWORDS or re.match(r'^(FUN_|DAT_|PTR_|LAB_|Stub_|Ext_|ExceptionList|CONCAT|ZEXT|SEXT|SUB|CARRY|SCARRY|BORROW|unaff_|in_|stack0x|s_)', name):
            continue
        type_stubs.add(('struct' if re.search(r'[a-z]', name) else 'ptr', name))
    # Capitalized template uses (`SCITearOffObjImpl<SCIObj,SCIPropertyBag> *p`)
    # need template stubs, not the plain struct the scan above would emit.
    # Skip names that exist under namespace std: a global twin would be
    # ambiguous under `using namespace std`.
    for name in re.findall(r'(?<![\w:])([A-Z]\w*)\s*<[^(){};=]*>(?=\s*[*&])',
                           whole):
        if not re.search(r'\bstd::\s*' + re.escape(name) + r'\b', whole):
            type_stubs.add(('template', name))
    # Ghidra function-pointer typedefs (_func_4879) start with '_' so the
    # capitalized-name scan misses them.
    for name in re.findall(r'\b(_func_\w+)\b', whole):
        type_stubs.add(('ptr', name))
    # _Capitalized enum/typedef names (_SCFixedSCUriID, _PtFuncCompare) need
    # typedef stubs wherever they appear, not only in cast position; skip
    # names the body declares as variables so the typedef never shadows a
    # real declaration.
    _vtypes = _varmap(whole)
    _declared = set(_vtypes)
    for name in re.findall(r'\b(_[A-Z]\w+)\b', whole):
        if name not in _declared and name not in extern_names:
            type_stubs.add(('ptr', name))
    # A `_Cap` typedef whose variables are field-accessed (`local.dwX`) is a
    # real struct (`_FILETIME`), not a `void *` typedef.
    for var, vtype in _vtypes.items():
        base = vtype.rstrip('*& ').rsplit(' ', 1)[-1]
        if not re.match(r'[_A-Z]', base):
            continue
        flds = set(re.findall(r'\b' + re.escape(var) + r'\s*(?:->|\.)\s*'
                              r'([A-Za-z_]\w*)', whole))
        if flds:
            member_stubs.setdefault('__fields__', set()).update(flds)
            type_stubs.discard(('ptr', base))
            type_stubs.add(('struct', base))
    # A scalar variable used with `.field`/`->field` is a struct pointer the
    # decompiler mistyped (`uVar.wYear`, `local_11c->ptr`). Reinterpret the
    # access through a field-bearing stub so the decl can stay scalar.
    for var, vtype in _vtypes.items():
        if vtype.rstrip().endswith('*'):
            continue
        flds = set(re.findall(r'\b' + re.escape(var) + r'\s*(?:->|\.)\s*'
                              r'([A-Za-z_]\w*)', whole))
        flds = {f for f in flds
                if f not in {'_0_1_','_1_3_','_0_2_','_2_2_','_0_4_','_4_4_',
                             '_0_8_','_8_8_','_0_12_','_12_4_','_0_16_'}
                and not re.fullmatch(r'_\d+_\d+_', f)}
        if not flds:
            continue
        member_stubs.setdefault('__scalarfields__', set()).update(flds)
        member_stubs.setdefault('__sfields2__', set()).update(
            re.findall(r'\b' + re.escape(var) + r'\s*(?:->|\.)\s*'
                       r'([A-Za-z_]\w*)\s*\.', whole))
        # `var.f.g` — the second-level leaf also needs an `__RFLD2` member.
        member_stubs.setdefault('__scalarfields__', set()).update(
            re.findall(r'\b' + re.escape(var) + r'\s*(?:->|\.)\s*'
                       r'[A-Za-z_]\w*\s*\.\s*([A-Za-z_]\w*)', whole))
        base = vtype.rstrip('*& ').rsplit(' ', 1)[-1]
        if base in {'FILE', '_FILE_stub', 'SYSTEMTIME', 'tm', 'GUID'}:
            result_body = re.sub(
                r'\b' + re.escape(var) + r'\s*->\s*([A-Za-z_]\w*)',
                r'(&' + var + r')->\1', result_body)
            result_body = re.sub(
                r'\b' + re.escape(var) + r'\s*\.\s*([A-Za-z_]\w*)',
                var + r'.\1', result_body)
        else:
            result_body = re.sub(r'\b' + re.escape(var) + r'\s*\.\s*([A-Za-z_]\w*)',
                          r'(*(struct __RFLD *)&' + var + r').\1', result_body)
            result_body = re.sub(r'\b' + re.escape(var) + r'\s*->\s*([A-Za-z_]\w*)',
                          r'((struct __RFLD *)(' + var + r'))->\1', result_body)
    # A capitalized name used only in `Name(` call position is a real
    # function (``GetSystemTimeAsFileTime(&x)``). The extern shadows the
    # struct stub in expression contexts, which also resolves the
    # most-vexing-parse of statement-level ``T(&x)`` calls; but if the name
    # appears in any non-call position (`T var`, `(T *)x`, `T::m`) it is a
    # type and a function twin would hide it.
    _text_all = head + result_body
    for call in re.findall(r'\b([A-Z]\w*)\s*\(', result_body):
        if (call not in extern_names and call not in _declared
                and call not in KEYWORDS
                and not re.search(r'\b' + re.escape(call) + r'\b(?!\s*\()',
                                  _text_all)):
            externs.add(('call', call))
    # `_sm_*` is Ghidra's static-class-member naming; treat as data externs.
    for name in re.findall(r'\b(_sm_\w+)\b', whole):
        externs.add(('data', name))
    # `*_exref` is Ghidra's naming for an external data reference.
    for name in re.findall(r'\b(\w+_exref)\b', whole):
        if name not in _declared:
            externs.add(('data', name))
    # ``result_body`` picked up the scalar-field rewrites after ``whole``
    # was last refreshed; resync before the head/body split below.
    whole = head + result_body
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
    # The head can carry Ghidra ``/* WARNING */`` comments whose own parens
    # would otherwise poison the return-type tokenization.
    head_clean = re.sub(r'/\*.*?\*/', ' ', whole[:head_end], flags=re.S)
    # A ``std::X<args>::member`` declarator tail must not leak into the
    # return type; drop the qualified name plus its parameter list open.
    _targs = r'<(?:[^()<>\n]|<(?:[^()<>\n]|<[^()<>\n]*>)*>)*>'
    head_clean = re.sub(
        r'(?:[A-Za-z_]\w*\s*(?:' + _targs + r')?\s*::\s*)+'
        r'(?:operator[^\s(]*|~?\s*[A-Za-z_]\w*)\s*(?:' + _targs +
        r')?\s*\(', '(', ' '.join(head_clean.split()))
    tokens = head_clean.split('(')[0].split()
    if len(tokens) >= 2:
        ret_type = ' '.join(t for t in tokens[:-1]
                            if not t.startswith('__') and
                            t not in ('static', 'extern', 'inline', 'virtual'))
    head_part, body_part = whole[:head_end], whole[head_end:]
    body_part = _eh_wrap(body_part)
    # A label must precede a statement; Ghidra labels can sit at block ends.
    body_part = re.sub(
        r'((?:LAB_\w+|case\b[^:\n]*|default|[A-Za-z_]\w*)\s*:)\s*(?=\})',
        r'\1;', body_part)
    # (code *)LAB_x casts an array extern straight to a function pointer;
    # take the address first so the cast is legal.
    body_part = re.sub(r'(\(\s*code\b[^)]*\*+\s*\)\s*)(LAB_\w+)', r'\1&\2',
                       body_part)
    # `(LAB_x)(args)` calls a code label as a function; cast it to `code *`.
    body_part = re.sub(r'(?<![&*\w)])(LAB_\w+)\s*\(',
                       r'((code *)\1)(', body_part)
    # `(*(int *)(X))(args)` calls the dereferenced value as a function; the
    # target is code so retype the pointer as `code *` for the same call [mem].
    body_part = re.sub(r'\(\s*\*\s*\((?:u?int|undefined4|void|long|short|char)\s*\*+\s*\)'
                       r'\s*((?:\([^()]*\)\s*)*(?:\([^()]*\)|[A-Za-z_]\w*))\s*\)\s*\(',
                       r'(*(code *)\1)(', body_part)
    # ``(T **)*DAT_x`` dereferences an integer extern; the global's value
    # is itself the pointer, so cast it rather than deref it.
    body_part = re.sub(
        r'(\(\s*[A-Za-z_][\w:<>,\s]*\s*\*+\s*\))\s*\*\s*'
        r'((?:DAT|PTR|uRam|uStack|_UNK)_\w+|s_\w+)',
        r'\1\2', body_part)
    body_part = _fix_types(body_part, ret_type, head_part, externs)
    body_part = re.sub(r'\(\s*\*\s*\((?:u?int|undefined4|void|long|short|char)\s*\*+\s*\)'
                       r'\s*((?:\([^()]*\)\s*)*(?:\([^()]*\)|[A-Za-z_]\w*))\s*\)\s*\(',
                       r'(*(code *)\1)(', body_part)
    # ThreadLocalStoragePointer is Ghidra's name for fs:[0x18]; the
    # __readfsdword intrinsic reproduces the exact segment-load instruction.
    body_part = re.sub(r'\bThreadLocalStoragePointer\b',
                       '((void *)__readfsdword(0x18))', body_part)
    # ``X<args>`` in the signature (e.g. an iterator parameter type) never
    # reaches the body scan loop; register it so the decl is a template.
    for head_tmpl in re.finditer(
            r'(?<!::)\b([A-Z_]\w*)\s*<[^;()]*>', head_part):
        name = head_tmpl.group(1)
        if name not in KEYWORDS:
            type_stubs.add(('template', name))
    # Names emitted as `template<class...> struct X` cannot be used bare;
    # give unqualified non-template-id uses an empty argument list. Runs last
    # so casts added by _fix_types are covered too.
    _tmpl_names = {name for kind, name in type_stubs
                   if kind in ('template', 'nstemplate')}
    # ``std::X`` is also reachable as bare ``X`` once the part's
    # ``using namespace std`` takes effect.
    _tmpl_names |= {name.split('::')[-1] for name in _tmpl_names}
    assembled = head_part + body_part
    for name in sorted(_tmpl_names, key=len, reverse=True):
        if name in _declared:
            continue
        assembled = re.sub(r'(?<![\w:])' + re.escape(name) + r'\b(?!\s*<)',
                           name + '<>', assembled)
    return _rename_definition(assembled, entry)


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
    # security cookie xor: `DAT_x ^ (uint)&stack0x*` is `xor eax, ebp` at
    # statement level, but inside a call's argument list it is a real operand
    # (the compiler xor's against ebp) — keep it there so the call stays valid.
    def xor_cookie(match):
        seg_start = max(body.rfind(';', 0, match.start()),
                        body.rfind('{', 0, match.start()),
                        body.rfind('}', 0, match.start())) + 1
        seg = body[seg_start:match.start()]
        if seg.count('(') != seg.count(')'):
            return match.group(0)
        return ''
    body = re.sub(r'\^\s*\(uint\)\s*&\s*stack0x\w+', xor_cookie, body)
    # pushed handler pointer and saved previous-handler chain node
    body = re.sub(r'^\s*\w+\s*=(?![=])\s*\(?[^;{}]*?\bLAB_\w+\s*\)?\s*;', '',
                  body, flags=re.M)
    body = re.sub(r'^\s*\w+\s*=(?![=])\s*\(?\s*(?:void\s*\*)?\s*\(?\s*'
                  r'ExceptionList\s*\)?\s*;', '', body, flags=re.M)
    # registration-node install and restore: `ExceptionList = ...;`
    body = re.sub(r'^\s*ExceptionList\s*=(?![=])\s*[^;]+;', '', body, flags=re.M)
    # ehstate transition writes (`local_8 = N;`) are regenerated by scopes
    body = re.sub(r'^\s*(?:local_\w+|uStack_\w+|Stack_\w+)\s*=(?![=])\s*'
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
    r'([A-Za-z_][\w:]*(?:<(?:[^()<>]|<[^()<>]*>)*>)*)(\s*\*+\s*|\s+)'
    r'([A-Za-z_]\w*)\s*(?=[;=,\)\[])',
    re.M)
_PARAM_RE = re.compile(
    r'((?:const\s+|unsigned\s+|signed\s+|struct\s+|long\s+|short\s+)*)'
    r'([A-Za-z_][\w:]*(?:<(?:[^()<>]|<[^()<>]*>)*>)*)(\s*\*+\s*|\s+)'
    r'([A-Za-z_]\w*)\s*(?=[,\)]|$)')


def _varmap(text, params=''):
    """Collect local/parameter variable -> declared C type text."""
    varmap = {}
    for regex, text_part in ((_DECL_RE, text), (_PARAM_RE, params)):
        for match in regex.finditer(text_part):
            lead, base, stars, name = (match.group(1), match.group(2),
                                       match.group(3), match.group(4))
            if name in KEYWORDS or base in _NOT_TYPES or base.endswith(':'):
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
    # Blank string/char literals for the duration of the pass: ``;``, ``,``
    # and ``()`` inside literals otherwise terminate RHS captures and inject
    # casts mid-string. Strings are masked before comments so ``"/*"`` inside
    # a literal cannot start a fake comment that eats the following lines.
    _strs = []
    def _blank_str(match):
        _strs.append(match.group(0))
        return f'__QSTR{len(_strs) - 1}Q__'
    body = re.sub(r'"(?:[^"\\]|\\.)*"|\'(?:[^\'\\]|\\.)*\'',
                  _blank_str, body)
    body = re.sub(r'/\*.*?\*/', '', body, flags=re.S)
    varmap = _varmap(body, decl_text)
    for kind, name in externs:
        varmap.setdefault(name, {'data': 'int', 'ptr': 'int *', 'vptr': 'void *',
                                 'str': 'char *', 'lab': 'undefined1 *'}.get(kind, 'int'))

    def top_comma(rhs):
        """Index of the first top-level `,` in rhs, or -1. Commas inside
        parens/brackets/braces are argument separators, not the C comma
        operator. An assignment inside a condition comma-expression must not
        have its cast absorb the following clauses."""
        depth = 0
        angle = 0
        quote = None
        i = 0
        while i < len(rhs):
            ch = rhs[i]
            if quote:
                if ch == '\\':
                    i += 1
                elif ch == quote:
                    quote = None
            elif ch in '"\'':
                quote = ch
            elif ch in '([{':
                depth += 1
            elif ch in ')]}':
                depth -= 1
            elif ch == '<':
                angle += 1
            elif ch == '>' and angle:
                angle -= 1
            elif ch == ',' and depth == 0 and angle == 0:
                return i
            i += 1
        return -1

    _CALL_RE = re.compile(
        r'\b([A-Za-z_]\w*)\s*\(')
    _CALL_TYPES = frozenset(
        'int char short long void float double byte uint ushort ulong '
        'undefined undefined1 undefined2 undefined4 undefined8 bool '
        'unsigned signed const volatile struct class union enum size_t '
        'if while for switch return sizeof static_cast reinterpret_cast '
        'const_cast dynamic_cast'.split())

    def has_call(rhs):
        # `expr)(` is a call through a pointer/expression; `name(` is direct.
        # `(T)(expr)` is a cast application, not a call — strip leading
        # parenthesised casts before testing the shapes.
        probe = rhs
        for _ in range(8):
            stripped = re.sub(
                r'^\s*\(\s*[A-Za-z_][\w:<>,\s]*?\*?\s*\)', '', probe)
            if stripped == probe:
                break
            probe = stripped
        # `)(` is a call only when the `)` does not close a `(T)` cast:
        # `(uint)(&x)` is a cast of a paren expr, not `expr(args)`.
        for m in re.finditer(r'\)\s*\(', probe):
            close = m.start()
            depth = 0
            j = close
            while j >= 0:
                if probe[j] == ')':
                    depth += 1
                elif probe[j] == '(':
                    depth -= 1
                    if depth == 0:
                        break
                j -= 1
            inner = probe[j + 1:close] if j >= 0 else ''
            if not re.fullmatch(
                    r'\s*[A-Za-z_][\w:<>,\s]*\*?\s*', inner):
                return True
        return any(m.group(1) not in _CALL_TYPES
                   for m in _CALL_RE.finditer(probe))

    def cast_wrap(target, rhs):
        """`(T)(rhs)`, void-tolerant: when rhs calls a function the typed
        decl may return ``void``, which MSVC/clang reject inside a value
        cast. ``(T)(rhs, 0)`` still evaluates the call through the comma
        operator but always yields a convertible 0."""
        if has_call(rhs):
            return f'({target})({rhs}, 0)'
        return f'({target})({rhs})'

    # `T name[N]` declarations: the declared type in varmap is the element
    # type; array names cannot be assigned or used as scalar values.
    arrays = set(re.findall(r'\b(?!(?:return|goto|if|else|while|for|do|switch|case|sizeof)\b)'
                            r'[\w:<>]+[\s*&]+([A-Za-z_]\w*)\s*\[[^\]]*\]\s*;', body))
    def cast_rhs(match):
        name, rhs = match.group(1), match.group(2)
        target = varmap.get(name)
        if not target or rhs.strip().startswith('{'):
            return match.group(0)
        rhs = rhs.strip()
        if name in arrays:
            # `arr = v` cannot assign an array; store through element 0.
            elem = target.rstrip('* ').rstrip() or target
            cut = top_comma(rhs)
            if cut >= 0:
                return f'{name}[0] = {cast_wrap(elem, rhs[:cut])}{rhs[cut:]};'
            return f'{name}[0] = {cast_wrap(elem, rhs)};'
        cut = top_comma(rhs)
        if cut >= 0:
            return f'{name} = {cast_wrap(target, rhs[:cut])}{rhs[cut:]};'
        return f'{name} = {cast_wrap(target, rhs)};'

    # `*name = rhs;` dereference assignments: cast rhs to the pointee type
    def cast_deref(match):
        name, rhs = match.group(1), match.group(2)
        target = varmap.get(name)
        if not target or not target.rstrip().endswith('*') or rhs.strip().startswith('{'):
            return match.group(0)
        pointee = target.rstrip()[:-1].rstrip()
        rhs = rhs.strip()
        cut = top_comma(rhs)
        if cut >= 0:
            return f'*{name} = {cast_wrap(pointee, rhs[:cut])}{rhs[cut:]};'
        return f'*{name} = {cast_wrap(pointee, rhs)};'

    body = re.sub(r'\*\s*([A-Za-z_]\w*)\s*=(?![=])\s*((?:(?!\b(?:goto|return|break|continue|case|default|else|do|switch|if|while|for)\b)[^;{}])*);', cast_deref, body)

    # `name[idx] = rhs;` element assignments: cast rhs to the element type.
    # Array declarations already store the element type in varmap; indexed
    # pointers drop one star.
    def cast_index(match):
        name, index, rhs = match.groups()
        target = varmap.get(name)
        if not target or rhs.strip().startswith('{'):
            return match.group(0)
        elem = target.rstrip()
        if name not in arrays and elem.endswith('*'):
            elem = elem[:-1].rstrip() or 'void'
        rhs = rhs.strip()
        cut = top_comma(rhs)
        if cut >= 0:
            return f'{name}[{index}] = {cast_wrap(elem, rhs[:cut])}{rhs[cut:]};'
        return f'{name}[{index}] = {cast_wrap(elem, rhs)};'
    body = re.sub(
        r'(?<![=!<>+\-*/%&|^?:])([A-Za-z_]\w*)\s*\[([^\]\[]*)\]\s*=(?![=])\s*((?:(?!\b(?:goto|return|break|continue|case|default|else|do|switch|if|while|for)\b)[^;{}])*);',
        cast_index, body)
    # `(&name)[i] = rhs;` — `&extern` elements are `int` (data) or
    # `int *` (PTR_ pointer slots).
    def cast_addr_index(match):
        elem = 'int *' if ('ptr', match.group(2)) in externs else 'int'
        return (f'{match.group(1)}[{match.group(3)}] = '
                f'{cast_wrap(elem, match.group(4).strip())};')
    body = re.sub(
        r'(?<![=!<>+\-*/%&|^?:])(\(\s*&\s*([A-Za-z_]\w*)\s*\))\s*'
        r'\[([^\]\[]*)\]\s*=(?![=])\s*'
        r'((?:(?!\b(?:goto|return|break|continue|case|default|else|do|'
        r'switch|if|while|for)\b)[^;{}])*);',
        cast_addr_index, body)
    # `x->field = rhs;` / `x.field = rhs;`: stub fields are int, so cast rhs.
    body = re.sub(
        r'((?:\([\w\s:\*&<>\[\]+()]*\)|[A-Za-z_]\w*)\s*(?:->|\.)'
        r'[A-Za-z_]\w*)\s*=(?![=])\s*((?:(?!\b(?:goto|return|break|continue|case|default|else|do|switch|if|while|for)\b)[^;{}])*);',
        lambda m: m.group(1) + ' = {}{};'.format(
            cast_wrap('int', m.group(2).strip()[:top_comma(m.group(2).strip())]
                      if top_comma(m.group(2).strip()) >= 0
                      else m.group(2).strip()),
            m.group(2).strip()[top_comma(m.group(2).strip()):]
            if top_comma(m.group(2).strip()) >= 0 else ''), body)
    # `&(T *)name` takes the address of a cast rvalue; reinterpret the
    # variable's own address instead (same value, legal lvalue).
    body = re.sub(r'&\s*\(\s*([A-Za-z_][\w:<>,\s]*\*)\s*\)\s*'
                  r'(\(\s*[A-Za-z_]\w*\s*\)|[A-Za-z_]\w*)',
                  r'((\1*)&(\2))', body)
    # `*name` where name is integral: Ghidra means dereference the address held
    # in the variable. Unary contexts only (never `a * b`).
    def deref_int(match):
        name = match.group(2)
        target = varmap.get(name)
        if target and not target.rstrip().endswith('*'):
            return match.group(1) + f'*(int *)(uint)({name})'
        return match.group(0)
    body = re.sub(
        r'((?:^|[=(,;{}:&|^!~<>?:]|\s[+\-])\s*|(?<![\w])(?:return|case|sizeof|if|while|for)\s+)'
        r'\*\s*([A-Za-z_]\w*)', deref_int, body, flags=re.M)
    # `T *name = rhs;` declaration-initializers (`*` blocks the name regex below)
    body = re.sub(
        r'^\s*([A-Za-z_][\w:<>]*(?:\s*\*+\s*)+)([A-Za-z_]\w*)\s*=(?![=])\s*((?:(?!\b(?:goto|return|break|continue|case|default|else|do|switch|if|while|for)\b)[^;{}])*);',
        lambda m: m.group(0) if ':' in m.group(1).replace('::', '') else
                  f'{m.group(1)}{m.group(2)} = '
                  f'({m.group(1).strip()})({m.group(3).strip()[:c]})'
                  f'{m.group(3).strip()[c:]};'
                  if (c := top_comma(m.group(3).strip())) >= 0 else
                  f'{m.group(1)}{m.group(2)} = '
                  f'({m.group(1).strip()})({m.group(3).strip()});'
                  if not m.group(3).strip().startswith('{') else m.group(0),
        body, flags=re.M)
    # plain `name = rhs;` assignments (not ==, <=, >=, !=, op=). The RHS may
    # be a parenthesised comma expression inside a condition, so stop before
    # statement keywords rather than swallowing a following goto/return.
    body = re.sub(r'(?<![=!<>+\-*/%&|^?:])([A-Za-z_]\w*)\s*=(?![=])\s*'
                  r'((?:(?!\b(?:goto|return|break|continue|case|default|else|'
                  r'do|switch|if|while|for)\b)[^;{}])*);',
                  cast_rhs, body)
    # `(..., name = rhs, ...)` comma-expression assignments inside conditions:
    # no semicolon terminates them, so the statement form above cannot wrap.
    def cast_comma(match):
        name, rhs = match.group(1), match.group(2)
        target = varmap.get(name)
        if not target:
            return match.group(0)
        return f'{name} = {cast_wrap(target, rhs.strip())},'
    body = re.sub(
        r'(?<![=!<>+\-*/%&|^?:\w])\b([A-Za-z_]\w*)\s*=(?![=>])\s*'
        r'((?:[^,;{}()=]|\((?:[^()]|\((?:[^()]|\([^()]*\))*\))*\))+?)\s*,',
        cast_comma, body)
    # comparisons ptrvar op sym and sym op ptrvar. All-caps typedef names
    # (``LSTATUS``) are emitted as ``typedef void *`` so treat them as
    # pointers too; a value cast of the comparison operand is harmless
    # either way.
    _CMP = (r'(?:==|!=|<=|>=|(?<![<>=!-])<(?![=<])|(?<![<>=!-])>(?![=>]))')
    for name, target in varmap.items():
        if not (target.rstrip().endswith('*')
                or re.fullmatch(r'[A-Z_][A-Z0-9_]*', target)):
            continue
        _qname = (r'[A-Za-z_]\w*(?:\s*<[^()]*>)?'
                  r'(?:::[A-Za-z_]\w*(?:\s*<[^()]*>)?)*')
        _mqname = _qname + r'(?:\s*(?:->|\.)\s*' + _qname + r')*'
        _cast_operand = (r'(?:&?\s*' + _qname + r'|0x[0-9a-fA-F]+[uUlL]*|\d+[uUlLfF]*'
                         r'|(?:\((?:[^()]|\((?:[^()]|\([^()]*\))*\))*\)\s*)+'
                         r'(?:[^,;()<>|&]|&\s*[A-Za-z_]'
                         r'|\((?:[^()]|\((?:[^()]|\([^()]*\))*\))*\))*)')
        def retarget_rhs(match):
            operand = match.group(2)
            # ``__QSTRnQ__`` is a masked char/string literal: it compares as
            # an integer, and a pointer cast around it is wrong.
            if re.fullmatch(r'__QSTR\d+Q__', operand.strip()):
                return match.group(0)
            # ``(U)(x)``: retype the head cast instead of double-wrapping
            # (which would parse ``(T *)(U)`` as a call of the cast group).
            # A lone ``(x)`` is a parenthesised expression, not a cast —
            # stripping it would leave a bare ``(T *)``.
            inner = re.match(r'^\s*(\(\s*[A-Za-z_][\w:<>,\s]*\**\s*\))(.*)',
                             operand, re.S)
            if (inner and inner.group(2).strip()
                    and re.match(r'[\(\w\d]', inner.group(2).lstrip())):
                return match.group(1) + re.sub(
                    r'^\s*\(\s*[A-Za-z_][\w:<>,\s]*\**\s*\)',
                    '(' + target + ')', operand, count=1)
            return match.group(1) + f'({target})({operand.replace(chr(32), "") if chr(38) in operand else operand})'
        body = re.sub(r'(?<![*&])(?<!\))(?<!\) )(?<!\)  )(\b' + re.escape(name) + r'\s*' + _CMP + r'\s*)(?<![*&])(' + _cast_operand + r')',
                      retarget_rhs, body)
        body = re.sub(r'(?<![*&])(?<![-+*/%])(?<![-+*/%]\s)(?<![\w])(?<![-.])(?<!->)(&?\s*\b' + _mqname + r'|0x[0-9a-fA-F]+[uUlL]*|\d+[uUlLfF]*)\s*(' + _CMP + r')\s*(?<![*&])(?<!\))(?<!\) )(?<!\)  )(\b' + re.escape(name) + r'\b(?!\s*(?:->|\.)))',
                      lambda m: m.group(0)
                      if re.fullmatch(r'__QSTR\d+Q__', m.group(1).strip())
                      else f'({target})({m.group(1).replace(" ", "")}) {m.group(2)} {m.group(3)}', body)
        # `name + off == &other`: the pointer side carries arithmetic, so the
        # bare-name patterns above cannot reach it; retarget the other side.
        body = re.sub(r'(?<![*&])(\b' + re.escape(name) + r'\s*[-+](?![=>])\s*[^,;()<>!=&|]*?)\s*(' + _CMP + r')\s*(&?\s*' + _qname + r')',
                      lambda m: f'{m.group(1)} {m.group(2)} ({target})({m.group(3).replace(" ", "")})', body)
        body = re.sub(r'(?<![*&])(&?\s*\b' + _qname + r')\s*(' + _CMP + r')\s*(?<![*&])(\b' + re.escape(name) + r'\s*[-+](?![=>])\s*[^,;()<>!=&|]*)',
                      lambda m: f'({target})({m.group(1).replace(" ", "")}) {m.group(2)} {m.group(3)}', body)
        # ``(T *)x op name[i]``: the indexed element is a scalar, so the
        # pointer cast must drop to the element type, not the other side up.
        if target.rstrip().endswith('*'):
            _elem = target.rstrip()[:-1].rstrip() or 'void'
            # `*name op other`: the pointee is a scalar, so the other side
            # drops to the element type rather than gaining a level.
            body = re.sub(
                r'\*(\s*\b' + re.escape(name) + r'\b)\s*(' + _CMP +
                r')\s*(\*?)\s*(&?\s*\b' + _qname + r'|0x[0-9a-fA-F]+|\d+)',
                lambda m: f'*{m.group(1)} {m.group(2)} ({_elem})({m.group(3)}({m.group(4).replace(" ", "")}))',
                body)
            body = re.sub(
                r'(?<![*&])(?<![\w])(&?\s*\b' + _qname + r'|0x[0-9a-fA-F]+|\d+)\s*(' + _CMP +
                r')\s*\*(\s*\b' + re.escape(name) + r'\b(?!\s*(?:->|\.)))',
                lambda m: f'({_elem})({m.group(1).replace(" ", "")}) {m.group(2)} *{m.group(3)}',
                body)
            _idx_operand = (r'(?:\(\s*[A-Za-z_]\w*\s*\)|[A-Za-z_]\w*'
                            r'|0x[0-9a-fA-F]+|\d+)')
            body = re.sub(
                r'\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\)\s*'
                r'(' + _idx_operand + r')\s*(' + _CMP +
                r')\s*(\b' + re.escape(name) + r'\s*\[[^\]]*\])',
                lambda m: f'({_elem})({m.group(1)}) {m.group(2)} {m.group(3)}',
                body)
            body = re.sub(
                r'(\b' + re.escape(name) + r'\s*\[[^\]]*\])\s*(' + _CMP +
                r')\s*\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\)\s*'
                r'(' + _idx_operand + r')',
                lambda m: f'{m.group(1)} {m.group(2)} ({_elem})({m.group(3)})',
                body)
            # `name[i]` on an *array* is the element type itself; an
            # explicit scalar cast on the other side must be retargeted.
            _ielem = (target.rstrip() if name in arrays
                      else _elem)
            _scal_cast = (r'\(\s*(?:u?int|short|ushort|char|byte|bool|long|'
                          r'longlong|float|double|undefined\d|sbyte|size_t|'
                          r'uint\d|DWORD)\s*\)')
            body = re.sub(
                r'(\b' + re.escape(name) + r'\s*\[[^\]]*\])\s*(' + _CMP +
                r')\s*' + _scal_cast,
                lambda m: f'{m.group(1)} {m.group(2)} ({_ielem})', body)
            body = re.sub(
                _scal_cast + r'\s*(' + _CMP +
                r')\s*(\b' + re.escape(name) + r'\s*\[[^\]]*\])',
                lambda m: f'({_ielem}) {m.group(1)} {m.group(2)}', body)
            # `name + expr op (U *)y` (and reversed): when the name side
            # carries arithmetic the explicit other-side cast may disagree
            # with ``name``'s declared pointer type; retarget it.
            _arith = (r'(?:\s*[-+]\s*(?:\((?:[^()]|\([^()]*\))*\)'
                      r'|[^,;()<>!=&|]))+?')
            def _retype_tail(tail, t=target.rstrip()):
                if '*' in t:
                    return tail
                return re.sub(r'\(\s*[A-Za-z_]\w*\s*\**\)', f'({t})', tail)
            body = re.sub(
                r'(\b' + re.escape(name) + _arith + r')\s*(' + _CMP +
                r')\s*\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)',
                lambda m: (_retype_tail(m.group(1)) + ' ' + m.group(2) +
                           ' (' + target.rstrip() + ')'), body)
            body = re.sub(
                r'\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*(' + _CMP +
                r')\s*(\b' + re.escape(name) + _arith + r')',
                lambda m: '(' + target.rstrip() + ') ' + m.group(2) + ' ' +
                          _retype_tail(m.group(3)), body)
    # `(scal)x CMP (T *)y` and reverse — the scalar cast head retargets to
    # the pointer type; `->`/`[]` on the new type still parse the same.
    _SCALCAST = (r'\(\s*(?:u?int|short|ushort|char|byte|bool|long|'
                 r'longlong|float|double|undefined\d|sbyte|size_t|uint\d|'
                 r'DWORD)\s*\)')
    body = re.sub(
        _SCALCAST + r'(\s*(?:\((?:[^()]|\([^()]*\))*\)|[^,;()])*?)'
        r'\s*(' + _CMP + r')\s*(\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\))',
        lambda m: f'({m.group(4)}){m.group(1)} {m.group(2)} {m.group(3)}',
        body)
    body = re.sub(
        r'(\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*'
        r'(?:[^,;()]|\([^()]*\))*?)\s*(' + _CMP + r')\s*' + _SCALCAST,
        lambda m: f'{m.group(1)} {m.group(3)} ({m.group(2)})', body)
    # `(T *)expr op operand` and `operand op (T *)expr`: the pointer side is
    # explicit; cast the other operand to the same type. When that operand is
    # itself a ``(U *)x`` cast it is retargeted rather than double-wrapped.
    _CAST_OPERAND = (r'(?:\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\)\s*'
                     r'(?:\((?:[^()]|\([^()]*\))*\)|0x[0-9a-fA-F]+|\d+|'
                     r'[A-Za-z_]\w*(?:\s*<[^()]*>)?'
                     r'(?:::[A-Za-z_]\w*(?:\s*<[^()]*>)?)*)'
                     r'|[A-Za-z_]\w*(?:\s*<[^()]*>)?'
                     r'(?:::[A-Za-z_]\w*(?:\s*<[^()]*>)?)*'
                     r'(?:\s*(?:->|\.)\s*\w+)*(?:\s*\[[^\]]*\])?)')
    def _drop_stars(ctype, expr):
        stars = len(expr.lstrip()) - len(expr.lstrip().lstrip('*'))
        for _ in range(stars):
            if not ctype.rstrip().endswith('*'):
                break
            ctype = ctype.rstrip()[:-1].rstrip()
        return ctype or 'void'

    def cast_operand(match):
        expr, ctype, op, operand = (match.group(1), match.group(2),
                                    match.group(3), match.group(4))
        if re.fullmatch(r'__QSTR\d+Q__', operand.strip()):
            return match.group(0)
        if expr.lstrip().startswith('*'):
            ctype = _drop_stars(ctype, expr)
        deref = re.fullmatch(
            r'\*\s*\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*(.*)', operand, re.S)
        if deref:
            pointee = deref.group(1).rstrip()[:-1].rstrip() or 'void'
            inner = re.fullmatch(
                r'\*\s*\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\)\s*(.*)', expr, re.S)
            if inner:
                return f'*({pointee} *)({inner.group(1)}) {op} {operand}'
            retarget = re.fullmatch(
                r'\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*(.*)', expr, re.S)
            if retarget:
                return f'({pointee})({retarget.group(2)}) {op} {operand}'
        retarget = re.fullmatch(
            r'\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*(.*)', operand, re.S)
        if retarget:
            operand = retarget.group(2)
        return f'{expr} {op} ({ctype})({operand})'
    body = re.sub(
        r'(\**\s*\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)'
        r'(?:\((?:[^()]|\([^()]*\))*\)|[^,;()=])*?)'
        r'\s*(' + _CMP + r')\s*((?<![\w])\*?\s*' + _CAST_OPERAND + r')',
        cast_operand, body)
    def cast_operand_rhs(match):
        operand, op, expr, ctype = (match.group(1), match.group(3),
                                    match.group(4), match.group(5))
        if re.fullmatch(r'__QSTR\d+Q__', operand.strip()):
            return match.group(0)
        lead_cast = match.group(2)
        if lead_cast:
            # ``(T *)*(U **)x op (V *)y``: the outer cast pins the
            # comparison type; retarget the right side to it rather than
            # retyping by the loaded pointee.
            expr_inner = re.fullmatch(
                r'\*?\s*\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\)\s*(.*)',
                expr, re.S)
            expr_inner = (expr_inner.group(1) if expr_inner
                          and not expr.lstrip().startswith('*') else expr)
            return (f'{operand} {op} '
                    f'({lead_cast})({expr_inner})')
        operand = operand
        if expr.lstrip().startswith('*'):
            ctype = _drop_stars(ctype, expr)
        # `*(T *)x op (U *)y` compares a pointee against a pointer: retarget
        # the pointer side's cast to the pointee type instead of wrapping x.
        deref = re.fullmatch(
            r'\*\s*\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*(.*)', operand, re.S)
        if deref:
            pointee = deref.group(1).rstrip()[:-1].rstrip() or 'void'
            inner = re.fullmatch(
                r'\*\s*\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\)\s*(.*)', expr, re.S)
            if inner:
                return f'{operand} {op} *({pointee} *)({inner.group(1)})'
            retarget = re.fullmatch(
                r'\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*(.*)', expr, re.S)
            if retarget:
                return f'{operand} {op} ({pointee})({retarget.group(2)})'
        retarget = re.fullmatch(
            r'\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*(.*)', operand, re.S)
        if retarget:
            operand = retarget.group(2)
        return f'({ctype})({operand}) {op} {expr}'
    # ``a + b == (T *)x``: the operand before the operator may be an addend
    # of a preceding arithmetic term — retargeting it to ``T *`` would
    # produce ``char * + char *``. The double lookbehind covers one or two
    # spaces between operator and operand.
    body = re.sub(
        r'(?<![-+*/%])(?<![-+*/%]\s)(?<![-+*/%]\s\s)'
        r'((?:\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*)?'
        r'(?:\*|(?<![&])(?<=[)(,=!~;{}<>&|^?:+\-*/%])&)?\s*(?<![\w])'
        + _CAST_OPERAND + r')\s*(' + _CMP + r')\s*'
        r'(\**\s*\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)'
        r'(?:\((?:[^()]|\([^()]*\))*\)|(?!\|\||&&)[^,;()=])*)',
        cast_operand_rhs, body)
    # `(int)x op (T *)y`` compares a value cast to a pointer cast; Ghidra
    # often writes `(int)ptr < N` where ``N`` was cast to the pointer type
    # instead. Retarget the scalar cast head to the pointer type.
    _scalar_cast = (r'\(\s*(?:u?int|short|ushort|char|byte|bool|long|'
                    r'longlong|float|double|undefined\d|sbyte|size_t|'
                    r'uint3|uint5|uint6|uint7|DWORD)\s*\)')
    _cmp_tail = (r'((?:\((?:[^()]|\([^()]*\))*\)\s*)*\s*\**\s*'
                 r'(?:[A-Za-z_]\w*\s*(?:\[[^\]]*\])?|\((?:[^()]|\([^()]*\))*\))'
                 r'(?:\s*[-+]\s*[^,;()<>!=|&]*)?)')
    body = re.sub(
        r'(?<![-+*/%])(?<![-+*/%]\s)(?<![-+*/%]\s\s)' +
        _scalar_cast + _cmp_tail + r'\s*(' + _CMP +
        r')\s*\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)',
        lambda m: '(' + m.group(3) + ')' + m.group(1) + ' ' + m.group(2)
        + ' (' + m.group(3) + ')',
        body)
    body = re.sub(
        r'\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*(' + _CMP +
        r')\s*' + _scalar_cast + _cmp_tail,
        lambda m: '(' + m.group(1) + ') ' + m.group(2) + ' ('
        + m.group(1) + ')' + m.group(3),
        body)
    # `x == (StubType)0` compares a scalar to a default-constructed stub; the
    # literal carries no type, so drop the value cast.
    body = re.sub(
        r'([!=]=)\s*\(\s*[A-Z]\w*(?:::\w+)?\s*\)\s*(0x0+|\b0)\b',
        r'\1 \2', body)
    body = re.sub(
        r'\(\s*[A-Z]\w*(?:::\w+)?\s*\)\s*(0x0+|\b0)\b\s*([!=]=)',
        r'\1 \2', body)
    # `**(T *)x` double-dereferences a scalar load: the loaded value is an
    # address, so load a pointer instead (`*(T **)x`).
    body = re.sub(r'\*(\s*\*\s*\(\s*(?:u?int|undefined\d|byte|char|short|long)\s*)\*(\s*\))',
                  r'*\1**\2', body)
    # `switch(ptrvar)` and `case (T *)0xN:` carry pointer types into a
    # context requiring an integer; reinterpret the discriminant as uint.
    for name, target in varmap.items():
        if target.rstrip().endswith('*'):
            body = re.sub(r'\bswitch\s*\(\s*' + re.escape(name) + r'\s*\)',
                          f'switch ((uint)({name}))', body)
    body = re.sub(r'\bcase\s*\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\)\s*'
                  r'\(?\s*(0x[0-9a-fA-F]+|\d+)\s*\)?\s*:',
                  r'case \1:', body)
    # `floatvar`, `floatvar[i]` or `*floatvar` cast to a pointer type:
    # evaluate the value then fold a zero — the C-style cast cannot
    # convert a float value to a pointer directly.
    for name, target in varmap.items():
        if target.rstrip().rstrip('*').strip() in ('float', 'double', 'float10'):
            body = re.sub(
                r'\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*\(\s*('
                + re.escape(name) + r'(?:\s*\[[^\]]*\])?)\s*\)',
                lambda m: f'({m.group(1)})({m.group(2)}, 0)', body)
            body = re.sub(
                r'\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*'
                + re.escape(name) + r'(\s*\[[^\]]*\])',
                lambda m: f'({m.group(1)})({name}{m.group(2)}, 0)', body)
            if target.count('*') == 1:
                body = re.sub(
                    r'\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*'
                    r'(?:\(\s*(\*\s*' + re.escape(name) + r'\b)\s*\)'
                    r'|(\*\s*' + re.escape(name) + r'\b))',
                    lambda m: (f'({m.group(1)})(*'
                               f'{name}, 0)'), body)
    # `(float)ptrvar` — the value cast needs the address as an integer.
    for name, target in varmap.items():
        if target.rstrip().endswith('*'):
            body = re.sub(
                r'\(\s*(float|double|float10)\s*\)\s*'
                r'(?:\(\s*' + re.escape(name) + r'\s*\)'
                r'|\b' + re.escape(name) + r'\b)(?!\s*\[)',
                lambda m: f'({m.group(1)})(uint)({name})', body)
    # `(float)(&x)` — the address cast to float routes through uint.
    body = re.sub(
        r'\(\s*(float|double|float10)\s*\)\s*'
        r'(\(\s*&\s*[A-Za-z_]\w*\s*\))',
        r'(\1)(uint)\2', body)
    # `*(T **)x` used as an integer operand (`iVar * *(T **)x`): the
    # pointer load is only plausible at one less indirection. The second
    # star must not abut another `*` — `**(T **)x` is a real double load,
    # not a multiply.
    body = re.sub(
        r'([-+*/%])\s*(?<!\*)\*\s*\(\s*([A-Za-z_][\w:<>,\s]*?)\s*\*\*\s*\)',
        r'\1 *(\2 *)', body)
    # `* *(T *)x` — the second-level load was spelled through a single
    # pointer cast; restore the missing indirection. In `a * *(T *)x`
    # the first star is binary multiplication and the deref is legal.
    def _dderef(match):
        pre = body[:match.start()].rstrip()
        if re.search(r'\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\)\s*$', pre):
            # `*(T *)` cast followed by `* *`: `(*(code *)* *(u4 *)x)(...)`
            # loads the pointer the call dereferences.
            return '*(' + match.group(1) + ' **)'
        if pre and (pre[-1].isalnum() or pre[-1] in '_)]}'):
            return match.group(0)
        return '**(' + match.group(1) + ' **)'
    body = re.sub(
        r'\*\s*\*\s*\(\s*([A-Za-z_][\w:<>,\s]*?)\s*\*\s*\)',
        _dderef, body)
    # `->(T *)((leaf))`/`.(T *)((leaf))` — a compare retarget wrapped only
    # the member leaf, leaving the `->`/`.` base outside the cast.
    body = re.sub(
        r'(->|\.)\s*\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\)\s*'
        r'\(\s*\(\s*([A-Za-z_]\w*)\s*\)\s*\)',
        r'\1\2', body)
    # `*scalarvar` — the variable holds an address; spell the load.
    for var, vtype in varmap.items():
        if vtype.rstrip().endswith('*'):
            continue
        def _star(m, var=var):
            pre = body[:m.start()].rstrip()
            if (pre and pre[-1] not in '=,([{;:!&|+-*/<>^~?:'
                    and not re.search(r'\breturn\s*$', pre)):
                return m.group(0)
            return '*(int *)' + var
        body = re.sub(r'\*\s*\b' + re.escape(var) + r'\b', _star, body)
    # `(T *)(num)` compared with an integer — the address literal is a
    # plain integer operand. The literal's parens are all-or-nothing: a
    # bare `)` belongs to the enclosing expression.
    body = re.sub(
        r'(==|!=|<=|>=)\s*\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\)\s*'
        r'(?:\(\s*(0x[0-9a-fA-F]+|\d+)\s*\)|\b(0x[0-9a-fA-F]+|\d+)\b)',
        lambda m: f'{m.group(1)} (uint){m.group(2) or m.group(3)}', body)
    body = re.sub(
        r'\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\)\s*'
        r'(?:\(\s*(0x[0-9a-fA-F]+|\d+)\s*\)|\b(0x[0-9a-fA-F]+|\d+)\b)'
        r'\s*(==|!=|<=|>=)',
        lambda m: f'(uint){m.group(1) or m.group(2)} {m.group(3)}', body)
    # `f(args) == (T *)x` — stub call externs return `int`; both sides
    # become integer operands.
    body = re.sub(
        r'(\b[A-Za-z_]\w*\s*\((?:[^()]|\([^()]*\))*\))'
        r'\s*(==|!=|<=|>=)\s*'
        r'(\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\))',
        r'(int)(\1) \2 (int)\3', body)
    body = re.sub(
        r'(\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\))'
        r'\s*(==|!=|<=|>=)\s*'
        r'(\b[A-Za-z_]\w*\s*\((?:[^()]|\([^()]*\))*\))',
        r'(int)\1 \2 (int)(\3)', body)
    # `*(T *)x == &name` — `&extern` is `int *`; retarget to the peer.
    body = re.sub(
        r'(\**\s*\(\s*([A-Za-z_][\w:<>,\s]*?)\s*\*+\s*\)\s*'
        r'(?:\((?:[^()]|\([^()]*\))*\)|[^,;()])*?)'
        r'\s*(==|!=|<=|>=)\s*&\s*([A-Za-z_]\w*)',
        lambda m: f'{m.group(1)} {m.group(3)} ({m.group(2)}*)&{m.group(4)}',
        body)
    body = re.sub(
        r'(?<!\))(?<!\) )(?<!\)  )&\s*([A-Za-z_]\w*)\s*(==|!=|<=|>=)\s*'
        r'(\**\s*\(\s*([A-Za-z_][\w:<>,\s]*?)\s*\*+\s*\)\s*'
        r'(?:\((?:[^()]|\([^()]*\))*\)|[^,;()])*?)',
        lambda m: f'({m.group(3)}*)&{m.group(1)} {m.group(2)} {m.group(4)}',
        body)
    # `(*(T **)x)[i] = rhs;` — the element type is `T`.
    body = re.sub(
        r'(\(\s*\*\s*\(\s*([A-Za-z_][\w:<>,\s]*?)\s*\*+\s*\)\s*'
        r'(?:[^,;()]|\([^()]*\))*?\)\s*\[[^\]]*\])\s*=(?![=])\s*([^;]+);',
        lambda m: f'{m.group(1)} = ({m.group(2)})({m.group(3).strip()});',
        body)
    # `((T *)&var)[i].field` — the element must carry fields, so the cast
    # retargets to the field-bearing struct.
    body = re.sub(
        r'\(\s*([A-Za-z_][\w:<>,\s]*?)\s*\*+\s*\)\s*&\s*([A-Za-z_]\w*)\s*'
        r'(?=\)\s*\[[^\]]*\]\s*(?:\.|->))',
        r'(__RFLD *)&\2', body)
    # `(T *)(float)x` — a float cannot cast to a pointer directly; routing
    # through `uint` keeps the conversion chain legal. The operand may open
    # a second paren before the float cast (`(T *)((float)expr)`).
    body = re.sub(
        r'(\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\))\s*\(\s*(\(?)\s*'
        r'(float|double|float10)\s*\)',
        lambda m: f'{m.group(1)}(uint)({m.group(2)}{m.group(3)})', body)
    # `CMP ... (T *)x - (scal)y` — inside a comparison the subtraction of
    # a scalar from a pointer-cast value is integer arithmetic; retype
    # the pointer cast to `int`.
    body = re.sub(
        r'(' + _CMP + r'|&&|\|\|)\s*((?:-\s*\d+\s*<<?\s*)?)'
        r'\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\)\s*'
        r'(\((?:[^()]|\([^()]*\))*\)|[A-Za-z_]\w*)\s*-(?![=>])\s*',
        lambda m: f'{m.group(1)} {m.group(2)}(int)({m.group(3)}) - ', body)
    # `*(scal)(x)` — dereferencing a scalar cast means the value is a
    # pointer: `*(int)(x)` -> `*(int *)(x)`.
    body = re.sub(
        r'(?<![\w)\]])(?<![\w)\]] )'
        r'\*\s*\(\s*(u?int|undefined\d|byte|sbyte|uint\d|short|ushort|'
        r'char|long|bool|size_t)\s*\)',
        r'*(\1 *)', body)
    # `&((uint)&x)` — the inner cast is an rvalue; the address is the
    # variable's own pointer.
    body = re.sub(
        r'&\s*\(\s*\(?(?:u?int|byte|undefined\d|sbyte|uint\d)\s*\)?\s*&\s*'
        r'([A-Za-z_]\w*)\s*\)?\s*\)',
        r'(uint *)&\1', body)
    # `(T *)*scalar` — dereferencing a non-pointer local is a mistyped
    # load; the cast alone carries the conversion.
    for name, target in varmap.items():
        if target.rstrip().endswith('*'):
            continue
        body = re.sub(r'(\(\s*[A-Za-z_][\w:<>,\s]*?\s*\*+\s*\))\s*\*\s*'
                      r'(\b' + re.escape(name) + r'\b)',
                      r'\1\2', body)
    # `(T *)(T *)x` — a retarget wrapped an existing cast of the same
    # type; the duplicate adds nothing.
    body = re.sub(
        r'(\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*)'
        r'(\(\s*\2\s*\)\s*)+', r'\1', body)
    # `ptrvar CMP (uint)(lit)` / `(T *)x CMP (uint)(lit)` — the literal
    # normalization above is wrong when the peer operand is pointer-typed;
    # restore the literal to the peer's pointer type.
    for name, target in varmap.items():
        if not target.rstrip().endswith('*'):
            continue
        body = re.sub(
            r'\b' + re.escape(name) + r'((?:\s*\[[^\]]*\])*)\s*'
            r'(==|!=|<=|>=)\s*\(\s*uint\s*\)\s*'
            r'(?:\(\s*(0x[0-9a-fA-F]+|\d+)\s*\)|\b(0x[0-9a-fA-F]+|\d+)\b)',
            lambda m, t=target.rstrip(): (f'({t})({name}{m.group(1)}) '
                f'{m.group(2)} ({t})({m.group(3) or m.group(4)})'), body)
        body = re.sub(
            r'\(\s*uint\s*\)\s*'
            r'(?:\(\s*(0x[0-9a-fA-F]+|\d+)\s*\)|\b(0x[0-9a-fA-F]+|\d+)\b)'
            r'\s*(==|!=|<=|>=)\s*\b' + re.escape(name) + r'((?:\s*\[[^\]]*\])*)',
            lambda m, t=target.rstrip(): (f'({t})({m.group(1) or m.group(2)}) '
                f'{m.group(3)} ({t})({name}{m.group(4)})'), body)
    _peer_operand = (r'(?:\((?:[^()]|\([^()]*\))*\)|[A-Za-z_]\w*'
                     r'(?:\s*\[[^\]]*\])*|\*\s*'
                     r'(?:\([^()]*\)|[A-Za-z_]\w*))'
                     r'(?:[^,;()]|\([^()]*\))*?')
    body = re.sub(
        r'(\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*' + _peer_operand +
        r')\s*(==|!=|<=|>=)\s*\(\s*uint\s*\)\s*'
        r'(?:\(\s*(0x[0-9a-fA-F]+|\d+)\s*\)|\b(0x[0-9a-fA-F]+|\d+)\b)',
        lambda m: (f'{m.group(1)} {m.group(3)} '
                   f'({m.group(2)})({m.group(4) or m.group(5)})'), body)
    body = re.sub(
        r'\(\s*uint\s*\)\s*'
        r'(?:\(\s*(0x[0-9a-fA-F]+|\d+)\s*\)|\b(0x[0-9a-fA-F]+|\d+)\b)'
        r'\s*(==|!=|<=|>=)\s*'
        r'(\(\s*([A-Za-z_][\w:<>,\s]*?\s*\*+)\s*\)\s*' + _peer_operand + r')',
        lambda m: (f'({m.group(4)})({m.group(1) or m.group(2)}) {m.group(3)} '
                   f'{m.group(5)}'), body)
    # `*(T *)e CMP (T *)lit` — the deref produces a value of type T, so the
    # literal side must drop its pointer cast: `!= (uint *)(0x0)` on a uint.
    body = re.sub(
        r'\*(\s*\(\s*([A-Za-z_][\w:<>,\s]*?)\s*\*\s*\)\s*'
        r'(?:\((?:[^()]|\([^()]*\))*\)|[A-Za-z_]\w*))\s*(' + _CMP +
        r')\s*\(\s*\2\s*\*\s*\)\s*'
        r'(\(\s*(?:0x[0-9a-fA-F]+|\d+)\s*\)|\b(?:0x[0-9a-fA-F]+|\d+)\b)',
        lambda m: f'*{m.group(1)} {m.group(3)} ({m.group(2)})({m.group(4)})',
        body)
    # `(void *)x +/- n` is invalid arithmetic; the address arithmetic is
    # byte-granular so `char *` carries the same meaning.
    body = re.sub(r'\(\s*void\s*\*\s*\)\s*(?=[&A-Za-z_(][\w.\[\]()+ \s>*&-]*[-+])',
                  '(char *)', body)
    # `(&name) op ...` treats the address as an integer: shifts, masks and
    # even +/- are byte arithmetic in pcode, not pointer arithmetic.
    body = re.sub(r'\(\s*&\s*([A-Za-z_]\w*)\s*\)\s*'
                  r'(?=>>|<<|\||\^|%|\+|-|\*(?!\s*\()|/|&(?!&))',
                  r'((uint)&\1) ', body)
    # `*(T *)expr = rhs;` dereference-through-cast assignments: the pointee is
    # spelled in the cast, so cast rhs to it. Runs last so earlier RHS wraps
    # cannot retype the assignment.
    def _deref_assign(match):
        stars = len(match.group(3)) - len(match.group(1))
        target = (match.group(2) + ' ' +
                  match.group(3)[:max(0, stars)]).strip() or 'void'
        rhs = match.group(5).strip()
        cut = top_comma(rhs)
        return '{}({}{}){} = {}{};'.format(
            match.group(1), match.group(2), match.group(3), match.group(4),
            cast_wrap(target, rhs[:cut] if cut >= 0 else rhs),
            rhs[cut:] if cut >= 0 else '')
    body = re.sub(
        r'(\*+)\s*\(\s*([A-Za-z_][\w:\s<>]*?)\s*(\*+)\s*\)\s*'
        r'([A-Za-z_(][\w.\[\]()&+ \s>*-]*?)\s*=(?![=])\s*'
        r'((?:(?!\b(?:goto|return|break|continue|case|default|else|do|switch|if|while|for)\b)[^;{}])*);',
        _deref_assign, body)
    # Bare array names in scalar context (`auVar30 & mask`, `f(auVar)`)
    # cannot decay where Ghidra treats them as values; use their address.
    for name in arrays:
        body = re.sub(r'(?<![*&\w])(?<![*&]\s)(?<!&\()'
                      r'(?<!&\s\()\b' + re.escape(name)
                      + r'\b(?!\s*\[)(?!\s*\)\s*\[)', '(uint)&' + name, body)
    # `name[i]` on a scalar or data extern is a pointer the decompiler
    # mistyped (`param_3[-4]`, `DAT_x[-1]`); subscript through the address.
    _scalar_bases = re.compile(
        r'^(?:u?int|short|ushort|char|byte|bool|long|longlong|ulong|'
        r'ulonglong|float|double|undefined\d|sbyte|uint3|size_t|DWORD|'
        r'LONG|HRESULT|UINT|int3|int5|int6|int7|uint5|uint6|uint7|'
        r'fpos_t|intptr_t|uintptr_t|__time64_t|float10|s?code|DWORD|WORD|'
        r'BYTE|BOOL|WCHAR|uchar|sbyte)\s*$')
    for name, target in varmap.items():
        if not target.rstrip().endswith('*') and name not in arrays:
            base = target.rstrip()
            elem = base if _scalar_bases.match(base) else 'int'
            # `name[i].f` — the element must be field-bearing, so
            # subscript through `__RFLD` whose members cover `f`.
            body = re.sub(r'\b' + re.escape(name) +
                          r'(?=\s*\[[^\]]*\]\s*(?:\.|->))',
                          f'((__RFLD *)&{name})', body)
            body = re.sub(r'\b' + re.escape(name) + r'(?=\s*\[)',
                          f'(({elem} *)&{name})', body)
    body = re.sub(r'\b(DAT_\w+|PTR_\w+)(?=\s*\[[^\]]*\]\s*(?:\.|->))',
                  r'((__RFLD *)&\1)', body)
    body = re.sub(r'\b(DAT_\w+|PTR_\w+)(?=\s*\[)', r'((int *)&\1)', body)
    # `name[i]->f` where the element is a `void *` typedef — cast the
    # element through the field-bearing struct so `->` resolves.
    _ptr_elems = {n for n, t in varmap.items()
                  if t.rstrip().endswith('*')
                  or re.fullmatch(r'[A-Z_][A-Z0-9_]*|HKEY__|PVOID|SCStr',
                                  t.rstrip())}
    for name in _ptr_elems:
        body = re.sub(r'\b' + re.escape(name) + r'(\s*\[[^\]]*\])'
                      r'(\s*\[[^\]]*\])\s*(?=(?:\.|->))',
                      f'((struct __RFLD *)({name}\\1))\\2', body)
        body = re.sub(r'\b' + re.escape(name) + r'(\s*\[[^\]]*\])\s*->',
                      f'((struct __RFLD *)({name}\\1))->', body)
    # In libc call position a `void *` is expected, not the `uint` form used
    # for arithmetic.
    def _libc_args(match):
        text = re.sub(r'\(\s*uint\s*\)\s*&', '(void *)&', match.group(0))
        fname, _, rest = text.partition('(')
        depth = 0
        commas, end = [], len(rest) - 1
        for i, ch in enumerate(rest):
            if ch == '(':
                depth += 1
            elif ch == ')':
                if depth == 0:
                    end = i
                    break
                depth -= 1
            elif ch == ',' and depth == 0:
                commas.append(i)
        parts, prev = [], 0
        for c in commas + [end]:
            parts.append(rest[prev:c])
            prev = c + 1
        for i in range(min(2, len(parts))):
            seg = parts[i].strip()
            t = varmap.get(seg)
            if (t is not None and not t.rstrip().endswith('*')
                    and _scalar_bases.match(t.rstrip())):
                parts[i] = ' (void *)(%s) ' % seg
        return fname + '(' + ','.join(parts) + rest[end:]
    body = re.sub(
        r'\b(?:memset|memcpy|memcmp|memmove|strlen|wcslen|strcpy|wcscpy|'
        r'strcmp|wcscmp|strstr|fread|fwrite|free|realloc|calloc|malloc)'
        r'\((?:[^()]|\((?:[^()]|\([^()]*\))*\))*\)', _libc_args, body)
    if ret_type and ret_type != 'void':
        body = re.sub(r'\breturn\s+((?:(?!\b(?:goto|return|break|continue|case|default|else|do|switch|if|while|for)\b)[^;{}])*);',
                      lambda m: f'return ({ret_type})({m.group(1).strip()});', body)
    return re.sub(r'__QSTR(\d+)Q__', lambda m: _strs[int(m.group(1))], body)


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
            # Wrong-arity callers (Ghidra signature guesses) get a variadic
            # overload; the decorated `?FUN_x@@..ZZ` still maps to FUN_x.
            # A `('call', fname)` extern already provides the `(...)` decl, so
            # skip the twin to avoid a same-signature return-type clash.
            if ('__thiscall' not in sig
                    and fname.startswith(('FUN_', 'thunk_FUN_'))
                    and ('call', fname) not in externs):
                prefix = sig[:sig.index(fname)]
                forward.append(f'extern {prefix}{fname}(...);')
        definitions.append(
            f'// Reference entry {record["entry"]}; body size {record["body_bytes"]} bytes.\n'
            f'#line 1 "ENTRY_{record["entry"]}"\n'
            f'{definition}')
    # Gate bisection can drop a callee after callers were transformed under
    # the assumption it would be defined here; give those dangling FUN_
    # references a variadic extern so the part still compiles.
    defined_here = set()
    for sig_text in forward:
        head_name = re.search(r'([A-Za-z_]\w*)\s*\(', sig_text)
        if head_name:
            defined_here.add(head_name.group(1))
    extern_names = {name for _, name in externs}
    used = set(re.findall(r'\b(?:thunk_)?FUN_\w+\b', ''.join(definitions)))
    for name in sorted(used - defined_here - extern_names):
        externs.add(('call', name))
    decls = []
    # Extern declarations go last among the decl lines: the signature
    # post-pass rewrites some of them into typed declarations that reference
    # struct/typedef stubs, so every type must already be declared.
    extern_decls = []
    for kind, name in sorted(externs):
        if kind == 'call':
            dllimport = ' __declspec(dllimport)' if name in IMPORT_SLOTS else ''
            extern_decls.append(f'extern{dllimport} int {name}(...);')
        elif kind == 'lab':
            extern_decls.append(f'extern undefined1 {name}[];')
        elif kind == 'vptr':
            extern_decls.append(f'extern void *{name};')
        elif kind == 'ptr':
            extern_decls.append(f'extern int *{name};')
        elif kind == 'str':
            extern_decls.append(f'extern char {name}[];')
        else:
            extern_decls.append(f'extern int {name};')
    tree = {}
    for qualifier, leaves in member_stubs.items():
        if qualifier in ('__fields__', '__fcall__', '__scalarfields__',
                         '__sfields2__', ''):
            continue
        node = tree
        for part in qualifier.split('::'):
            node = node.setdefault(part.split('<')[0].strip() or '_t', {})
        node.setdefault('__leaves__', set()).update(leaves)
    for qualifier, methods in member_methods.items():
        if qualifier in ('__fields__', '__fcall__', '__scalarfields__',
                         '__sfields2__', ''):
            continue
        node = tree
        for part in qualifier.split('::'):
            node = node.setdefault(part.split('<')[0].strip() or '_t', {})
        node.setdefault('__methods__', set()).update(methods)

    fcalls = member_stubs.get('__fcall__', set())
    fields = member_stubs.get('__fields__', set()) - fcalls
    scalar_fields = member_stubs.get('__scalarfields__', set())
    scalar_fields2 = member_stubs.get('__sfields2__', set())
    if scalar_fields:
        decls.append('struct __RFLD2 { ' + ''.join(
            f'int {f}; ' for f in sorted(scalar_fields)
            if f.isidentifier()) + '};')
        decls.append('struct __RFLD { ' + ''.join(
            f'__RFLD2 {f}; ' if f in scalar_fields2 else f'int {f}; '
            for f in sorted(scalar_fields)
            if f.isidentifier()) + '};')
    def field_decls_for(owner):
        return (''.join(f' static int {f};' for f in sorted(fields)
                        if f.isidentifier() and f != owner
                        and f not in {'operator', 'new', 'delete'}) +
                ''.join(f' template<class... A> static int {f}(A...);'
                        for f in sorted(fcalls)
                        if f.isidentifier() and f != owner
                        and f not in {'operator', 'new', 'delete'}))

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
           ' int operator!();'
           ' int operator~();'
           ' template<class T> int operator&(T);'
           ' template<class T> int operator|(T);'
           ' template<class T> int operator^(T);'
           ' template<class T> int operator<<(T);'
           ' template<class T> int operator>>(T);'
           # ``x->f`` on a stub *value* (array element, `CLSID p`) still
           # works: `->` yields the object address, then `->f` resolves.
           ' auto operator->() { return this; }'
           # stub objects freely convert to any scalar/pointer so Ghidra's
           # function-name stubs and class temps cast like the reference's
           # pointers (conversion is compile-time only; value is `_pad`)
           ' template<class T> operator T*();'
           ' template<class T> operator T();')

    # Names used inside a `<...>` argument list must resolve to types; a leaf
    # otherwise emitted as `static int` becomes a typedef instead.
    arg_tokens = set()
    for argtext in re.findall(r'<([^<>;]+)>', ''.join(definitions)):
        arg_tokens.update(re.findall(r'\b([A-Za-z_]\w*)\b', argtext))
    # Innermost-only misses outer args (`std::X` before `,`/`>` in a nested
    # argument list).
    arg_tokens.update(
        re.findall(r'\bstd::([A-Za-z_]\w*)\b(?=\s*[,>])',
                   ''.join(definitions)))

    def emit_tree(node, owner=''):
        methods = node.get('__methods__', set())
        # Free static decls without a body are a hard error under MSVC
        # (C2129); a trivial body also stays valid inside struct members.
        inner = ''
        for method in sorted(methods):
            if method.startswith('tdata:'):
                leaf = method[6:]
                if leaf.isidentifier() and leaf != owner:
                    inner += f' template<class... T> static int {leaf};'
            elif not (method.isidentifier() and method != owner):
                continue
            elif method.startswith('op_'):
                inner += f' static int {method}(...) {{ return 0; }}'
            else:
                inner += (f' template<class... A> static int '
                          f'{method}(A...) {{ return 0; }}')
        inner += ''.join(
            (f' typedef int {leaf};' if leaf in arg_tokens
             else f' static int {leaf};')
            for leaf in sorted(set(node.get('__leaves__', ())) - methods)
            if leaf.isidentifier() and leaf != owner
            and leaf not in {'operator', 'new', 'delete'})
        for name, child in sorted(node.items()):
            if name in ('__leaves__', '__methods__'):
                continue
            inner += (f' {"template<class...> " if ("template", name) in type_stubs else ""}'
                      f'struct {name} {{ char _pad; {name}(...);{ops}'
                      f'{field_decls_for(name)}{emit_tree(child, name)} }};')
        return inner

    nstemplates = {name.split('::')[-1] for kind, name in type_stubs if kind == 'nstemplate'}
    std_node = tree.pop('std', None)
    std_names = set()
    if std_node is not None:
        for name in nstemplates:
            std_node.pop(name, None)
            std_node.get('__leaves__', set()).discard(name)
        def collect_std(node):
            for key, child in node.items():
                if key in ('__leaves__', '__methods__'):
                    std_names.update(node[key])
                    continue
                std_names.add(key)
                collect_std(child)
        collect_std(std_node)
        # Each top-level name gets its own `namespace std` line: the syntax
        # gate bans decl *lines* wholesale, so one struct with an error must
        # not take every sibling declaration down with it.
        for name, child in sorted(std_node.items()):
            if name in ('__leaves__', '__methods__'):
                continue
            decls.append(
                f'namespace std {{ '
                f'{"template<class...> " if ("template", name) in type_stubs else ""}'
                f'struct {name} {{ char _pad; {name}(...);{ops}'
                f'{field_decls_for(name)}{emit_tree(child, name)} }}; }}')
        leftover = emit_tree({key: std_node[key] for key in
                              ('__leaves__', '__methods__')
                              if key in std_node})
        if leftover.strip():
            decls.append(f'namespace std {{{leftover} }}')
    # A name that lives under `namespace std` must not get a global struct or
    # typedef twin: unqualified uses would be ambiguous once the
    # `using namespace std` line below takes effect.
    for name in std_names:
        tree.pop(name, None)
        type_stubs = {kn for kn in type_stubs if kn[1].split('::')[-1] != name}
    # Qualified stubs (`X::m<T>` template ids, `A::B` types) declare the
    # leaf *inside* the owner — a global twin would not be found through
    # the `X::` qualification.
    for kind, name in sorted(type_stubs):
        if '::' not in name or kind == 'nstemplate':
            continue
        owner, _, leaf = name.rpartition('::')
        node = tree
        for part in owner.split('::'):
            node = node.setdefault(part.split('<')[0].strip() or '_t', {})
        if kind == 'ptr':
            node.setdefault('__leaves__', set()).add(leaf)
        else:
            node.setdefault('__methods__', set()).add('tdata:' + leaf)
    for name, child in sorted(tree.items()):
        if name in HEADER_TYPES:
            continue
        decls.append(f'{"template<class...> " if ("template", name) in type_stubs else ""}'
                     f'struct {name} {{ char _pad; {name}(...);{ops}'
                     f'{field_decls_for(name)}{emit_tree(child, name)} }};')
    emitted_types = set(tree.keys())
    extern_leaf_names = {name for _, name in externs}
    for kind, name in sorted(
            type_stubs,
            key=lambda kn: (kn[0] in ('ptr',), kn)):
        leaf_name = name.split('::')[-1]
        # Qualified names were routed into their owner node above.
        if '::' in name and kind != 'nstemplate':
            continue
        if leaf_name in HEADER_TYPES:
            continue
        # A name already declared inside namespace std must not get a global
        # twin: ``using namespace std`` would make every use ambiguous. A
        # typedef ('ptr') stub also yields to a template/struct stub for the
        # same name, since `typedef void *T` makes `T<...>` ill-formed, and
        # to a call extern (e.g. an imported CRT function) since a typedef
        # cannot share a name with a function declaration.
        if (leaf_name in emitted_types or leaf_name in stubs or
                (kind == 'struct' and ('template', name) in type_stubs) or
                (kind == 'ptr' and leaf_name in extern_leaf_names) or
                (kind != 'nstemplate' and leaf_name in nstemplates)):
            continue
        emitted_types.add(leaf_name)
        if kind == 'struct':
            decls.append(f'struct {leaf_name} {{ char _pad; {leaf_name}(...);{ops}'
                         f'{field_decls_for(leaf_name)} }};')
        elif kind == 'template':
            decls.append(f'template<class...> struct {leaf_name} '
                         f'{{ char _pad; {leaf_name}(...);{ops}'
                         f'{field_decls_for(leaf_name)} }};')
        elif kind == 'nstemplate':
            # ``std::X`` member calls (e.g. ``->op_inc()``) were collected
            # into member_methods before the std tree node was popped above.
            extra = ''.join(f' static int {m}(...);' for m in
                            sorted(member_methods.get(name, ()))
                            if m.isidentifier())
            decls.append(f'namespace std {{ template<class...> struct {leaf_name} '
                         f'{{ char _pad; {leaf_name}(...);{ops}'
                         f'{extra}{field_decls_for(leaf_name)} }}; }}')
        elif leaf_name.startswith('_func_'):
            # Ghidra function-pointer typedef (`_func_void_void_ptr`): the
            # value is called through `(*var)(args)`, so it must be a real
            # function type, not `void *`.
            decls.append(f'typedef void (*{leaf_name})(...);')
        else:
            decls.append(f'typedef void *{leaf_name};')
    for stub, methods in sorted(stubs.items()):
        if stub in HEADER_TYPES:
            continue
        prefix = ('template<class...> '
                  if ('template', stub) in type_stubs else '')
        decls.append(f'{prefix}struct {stub} {{ {stub}(...);{ops}' + ''.join(
            f' static int {method}(...);'
            for method in sorted(methods)
            if method != stub) + ' };')
    decls.append('using namespace std;')
    decl_lines = [line for line in decls + extern_decls + forward
                  if line not in bad_decls]
    return (HEADER + '\n'.join(decl_lines) + '\n' +
            '\n'.join(definitions), set(decl_lines))


def syntax_ok(source, scratch):
    # ``__thiscall`` is invalid on free functions but the post-pass lowers
    # every free thiscall def to a Recovered_Bulk member afterwards; strip it
    # for the probe so those records aren't rejected before the fix lands.
    scratch.write_text(re.sub(r'\b__thiscall\b', '', source))
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
    # MSVC EH funclets (Catch_All_*, FIN/dtor funclets) reference the parent
    # frame through unaff_EBP and register0x saves; they cannot codegen as
    # free functions.
    return not re.search(r'\bswitchD_|\bSUB_|\bbadstackalloc|\bin_FS_SEGMENT|'
                         r'\bunaff_retaddr|\bregister0x|\bCatch_All_|'
                         r'\bCatch_\w+\s*\(', source)


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
    for offset in range(0, len(candidates), args.part_size):
        # A decl line banned during one part's bisection was only bad in
        # that context; keeping the set per-part stops one blame from
        # stripping the decl out of every later part's emitted source.
        bad_decls = set()
        part = candidates[offset:offset + args.part_size]
        good = split_valid(part, scratch, failures, bad_decls)
        if not good:
            print(f'part {offset}: nothing survived')
            continue
        name = f'{args.name_prefix}_{offset // args.part_size:04d}'
        source_path = args.source_dir / f'{name}.cpp'
        defined_good = frozenset('FUN_' + r['entry'] for r in good)
        # Bisection bans decls blamed while a poisonous record was still in
        # the window, so prefer the unfiltered emit and only fall back to
        # the filtered one when it genuinely fails the gate.
        full_source = cpp_source(good, defined_good)[0]
        full_ok, _ = syntax_ok(full_source, scratch)
        source_path.write_text(
            full_source if full_ok
            else cpp_source(good, defined_good, bad_decls)[0])
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

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

SCSTR = '''
struct RefCounted {
    virtual void Reserved();
    virtual void AddRef();
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
                 'code', 'SCStr', 'operator', 'AddRef', 'new', 'for', 'byte', 'ushort', *SUPPORTED}
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
    header = (header[:definition.start(1)] + 'FUN_' + record['entry'] +
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
                if not re.fullmatch(r'(?:thunk_)?FUN_[0-9a-f]{8}', call)}


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
    declaration = (f'struct {class_name} {{ '
                   f'{result_type} {method_name}({rest}); }};')
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
    calls = sorted({name for r in records for name in
                    re.findall(r'\b(?:thunk_)?FUN_[0-9a-f]{8}\b',
                               r['source'].split('{', 1)[-1])})
    declarations.extend(f'extern int {name}(...);' for name in calls)
    declarations = '\n'.join(declarations)
    members = [make_msvc_member(r['source'], r['entry']) for r in records]
    member_declarations = '\n'.join(decl for decl, _ in members if decl)
    functions = '\n'.join(
        f'// Reference entry {r["entry"]}; body size {r["body_bytes"]} bytes.\n'
        f'#line 1 "ENTRY_{r["entry"]}"\n{member[1]}'
        for r, member in zip(records, members))
    return HEADER + DECLARATION_ALIASES + SCSTR + declarations + '\n' + member_declarations + '\n' + functions


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
    parser.add_argument('--emit-source', type=Path)
    parser.add_argument('--emit-index', type=Path)
    args = parser.parse_args()
    output = args.output_dir.resolve()
    output.mkdir(parents=True, exist_ok=True)
    candidates = []
    for record in load_records(args.exports).values():
        source = normalize_definition(record)
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
        if rewritten and eligible(rewritten):
            candidates.append({**record, 'source': rewritten, 'vftables': labels})
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
                      'object_bytes': obj.stat().st_size,
                      'scope': 'C++ object compilation; byte matching measured separately'}
    (output / 'coverage.json').write_text(json.dumps(metrics, indent=2) + '\n')
    print(json.dumps(metrics, indent=2))


if __name__ == '__main__':
    main()

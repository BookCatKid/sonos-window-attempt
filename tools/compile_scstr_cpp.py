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

from compile_ghidra_cpp import COMPILER, HEADER, ROOT, load_records

SCSTR = '''
struct SCStr {
    void *rep;
    bool operator==(const char *other);
    bool operator==(SCStr *other);
    bool operator!=(const char *other);
    bool operator!=(SCStr *other);
    bool beginsWith(const char *prefix);
    bool beginsWith(SCStr *prefix);
    bool contains(const char *needle, bool ignoreCase);
    bool contains(SCStr *needle, bool ignoreCase);
    unsigned int length();
    unsigned int hash();
    void int_addref();
    void int_release();
    void int_allocRep(char *text);
    void int_allocRep(char *text, unsigned int length);
};
'''
SUPPORTED = {'operator==', 'operator!=', 'beginsWith', 'contains', 'length',
             'hash', 'int_addref', 'int_release', 'int_allocRep'}
CALL = re.compile(r'SCStr::(operator==|operator!=|[A-Za-z_]\w*)\s*\(')
BLOCKED = re.compile(r'\b(?:DAT_|LAB_|ExceptionList|stack0x|FUN_|PTR_|s_|switchD_|SUB_)')
COMPLEX = re.compile(r'\._\d+_\d+_|\b(?:CONCAT\d+|SUB\d+|ZEXT\d+|SEXT\d+)\b')
PLAIN_CALL = re.compile(r'\b([A-Za-z_]\w*)\s*\(')
ALLOWED_CALLS = {'if', 'while', 'switch', 'sizeof', 'return', 'int', 'uint',
                 'long', 'short', 'char', 'float', 'double', 'undefined',
                 'undefined1', 'undefined2', 'undefined4', 'undefined8',
                 'code', 'SCStr', 'operator', *SUPPORTED}


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
        replacement = f'({first})->{match.group(1)}({rest})'
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


def eligible(source):
    body = source[source.find('{'):]
    if BLOCKED.search(body) or COMPLEX.search(source) or '::' in source:
        return False
    calls = set(PLAIN_CALL.findall(body))
    return not {call for call in calls - ALLOWED_CALLS
                if not call.startswith('thunk_FUN_')}


def cpp_source(records):
    thunks = sorted({name for record in records for name in
                     re.findall(r'\bthunk_FUN_[0-9a-f]{8}\b', record['source'])})
    declarations = '\n'.join(f'extern int {name}(...);' for name in thunks)
    functions = '\n'.join(
        f'// Reference entry {r["entry"]}; body size {r["body_bytes"]} bytes.\n'
        f'#line 1 "ENTRY_{r["entry"]}"\n{r["source"]}' for r in records)
    return HEADER + SCSTR + declarations + '\n' + functions


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
    args = parser.parse_args()
    output = args.output_dir.resolve()
    output.mkdir(parents=True, exist_ok=True)
    candidates = []
    for record in load_records(args.exports).values():
        source = record['decompiled_c']
        if 'SCStr::' not in source or BLOCKED.search(source[source.find('{'):]):
            continue
        rewritten = rewrite_calls(source)
        if rewritten:
            rewritten = restore_pointer_width_casts(rewritten)
        if rewritten and eligible(rewritten):
            candidates.append({**record, 'source': rewritten})
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
    print(json.dumps({'compiled_functions': len(accepted),
                      'compiled_reference_body_bytes': sum(r['body_bytes'] for r in accepted),
                      'syntax_rejected': len(failures),
                      'object_bytes': obj.stat().st_size}, indent=2))


if __name__ == '__main__':
    main()

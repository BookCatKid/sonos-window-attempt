#!/usr/bin/env python3
"""Compile a conservative subset of Ghidra's function output as x86 C++.

This is a syntax/object gate, not evidence of matching instructions or a linked DLL.
Rejected functions remain in the export for later type and call recovery.
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
CLASSES = ROOT / 'analysis' / 'function-classes.tsv'
HEADER = '''// Mechanically recovered Ghidra C-like functions, compiled as x86 C++.
// Types below are width-preserving placeholders, pending semantic recovery.
using undefined1 = unsigned char;
using undefined2 = unsigned short;
using undefined4 = unsigned int;
using undefined8 = unsigned long long;
using undefined = unsigned int;
using uint = unsigned int;
using ulong = unsigned long;
using code = int(...);
'''
KNOWN_CALLS = {'if', 'while', 'switch', 'sizeof', 'return', 'int', 'uint', 'long',
               'short', 'char', 'float', 'double', 'undefined', 'undefined1',
               'undefined2', 'undefined4', 'undefined8', 'code'}


def load_records(paths):
    records = {}
    for path in paths:
        with path.open() as file:
            for line in file:
                try:
                    record = json.loads(line)
                except json.JSONDecodeError:
                    if not line.endswith('\n'):
                        break
                    raise
                if 'decompiled_c' in record:
                    records[record['entry']] = record
    return records


def eligible(source):
    body = source[source.find('{'):]
    if re.search(r'\b(?:DAT_|LAB_|ExceptionList|stack0x|FUN_|PTR_|s_|switchD_|SUB_)', body):
        return False
    if re.search(r'\._\d+_\d+_|::|\b(?:CONCAT\d+|SUB\d+|ZEXT\d+|SEXT\d+)\b', source):
        return False
    calls = set(re.findall(r'\b([A-Za-z_]\w*)\s*\(', body))
    return not {call for call in calls - KNOWN_CALLS if not call.startswith('thunk_FUN_')}


def definition_with_entry_name(record):
    """Give recovered definitions distinct names when Ghidra thunk names collide."""
    source = record['decompiled_c']
    header_end = source.find('{')
    match = re.search(r'\b((?:thunk_)?FUN_[0-9a-f]{8})\s*\(', source[:header_end])
    if not match:
        return source
    return source[:match.start(1)] + 'FUN_' + record['entry'] + source[match.end(1):]


def cpp_source(records, rename_definitions=False):
    thunks = sorted({name for record in records for name in
                     re.findall(r'\bthunk_FUN_[0-9a-f]{8}\b', record['decompiled_c'])})
    declarations = '\n'.join(f'extern int {name}(...);' for name in thunks)
    return HEADER + declarations + '\n' + '\n'.join(
        f'// Reference entry {r["entry"]}; body size {r["body_bytes"]} bytes.\n'
        f'#line 1 "ENTRY_{r["entry"]}"\n'
        f'{definition_with_entry_name(r) if rename_definitions else r["decompiled_c"]}'
        for r in records)


def syntax_ok(source, scratch):
    scratch.write_text(source)
    result = subprocess.run([str(COMPILER), '/nologo', '/Zs',
                             '/clang:--target=i686-pc-windows-msvc',
                             '/clang:-ferror-limit=0', os.path.relpath(scratch, ROOT)],
                            cwd=ROOT, capture_output=True, text=True)
    return result.returncode == 0, result.stderr


def split_valid(records, scratch, failures, rename_definitions=False):
    if not records:
        return []
    remaining = list(records)
    for _ in range(8):
        source = cpp_source(remaining, rename_definitions)
        good, error = syntax_ok(source, scratch)
        if good:
            return remaining
        diagnostic = {}
        for match in re.finditer(r'ENTRY_([0-9a-f]{8})\(\d+,\d+\): error: ([^\n]+)', error):
            diagnostic.setdefault(match.group(1), match.group(2))
        bad = set(diagnostic)
        if not bad:
            break
        for record in remaining:
            if record['entry'] in bad:
                failures.append((record['entry'], diagnostic[record['entry']]))
        remaining = [r for r in remaining if r['entry'] not in bad]
        if not remaining:
            return []
    if len(remaining) == 1:
        failures.append((remaining[0]['entry'], error.splitlines()[0] if error else 'syntax error'))
        return []
    mid = len(remaining) // 2
    return (split_valid(remaining[:mid], scratch, failures, rename_definitions) +
            split_valid(remaining[mid:], scratch, failures, rename_definitions))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('exports', nargs='+', type=Path)
    parser.add_argument('--output-dir', type=Path, default=ROOT / 'analysis' / 'compiled-cpp')
    parser.add_argument('--batch-size', type=int, default=100)
    parser.add_argument('--rename-definitions', action='store_true',
                        help='use entry-address names to avoid duplicate Ghidra thunk definitions')
    args = parser.parse_args()
    if args.batch_size < 1:
        parser.error('--batch-size must be positive')
    if not COMPILER.is_file():
        parser.error(f'Missing clang-cl: {COMPILER}')
    output = args.output_dir.resolve()
    output.mkdir(parents=True, exist_ok=True)
    records = sorted(load_records(args.exports).values(), key=lambda r: int(r['entry'], 16))
    candidates = [r for r in records if eligible(r['decompiled_c'])]
    print(f'Loaded {len(records)} exports; first eligible: '
          f'{candidates[0]["entry"] if candidates else "none"}', flush=True)
    failures = []
    successes = []
    scratch = output / '.syntax-probe.cpp'
    for offset in range(0, len(candidates), args.batch_size):
        successes.extend(split_valid(candidates[offset:offset + args.batch_size], scratch,
                                     failures, args.rename_definitions))
        print(f'Checked {min(offset + args.batch_size, len(candidates))}/{len(candidates)} '
              f'candidates; accepted {len(successes)}', flush=True)
    scratch.unlink(missing_ok=True)
    source = output / 'ghidra_recovered.cpp'
    source.write_text(cpp_source(successes, args.rename_definitions))
    obj = output / 'ghidra_recovered.obj'
    result = subprocess.run([str(COMPILER), '/nologo', '/O2', '/c',
                             '/clang:--target=i686-pc-windows-msvc',
                             f'/Fo{obj}', os.path.relpath(source, ROOT)],
                            cwd=ROOT, capture_output=True, text=True)
    if result.returncode:
        raise SystemExit('Aggregate object compilation failed:\n' + result.stderr)
    with (output / 'compiled-index.tsv').open('w', newline='') as file:
        writer = csv.writer(file, delimiter='\t')
        writer.writerow(['entry', 'name', 'reference_body_bytes'])
        writer.writerows([r['entry'], r['name'], r['body_bytes']] for r in successes)
    (output / 'failures.tsv').write_text('entry\terror\n' + ''.join(
        f'{entry}\t{error}\n' for entry, error in failures))
    non_glue_functions = 0
    non_glue_bytes = 0
    if CLASSES.is_file():
        with CLASSES.open(newline='') as file:
            for row in csv.DictReader(file, delimiter='\t'):
                if row['class'] == 'other':
                    non_glue_functions += 1
                    non_glue_bytes += int(row['body_bytes'])
    metrics = {
        'exported_functions': len(records),
        'candidate_functions': len(candidates),
        'compiled_functions': len(successes),
        'compiled_reference_body_bytes': sum(r['body_bytes'] for r in successes),
        'identified_non_glue_functions': non_glue_functions,
        'identified_non_glue_body_bytes': non_glue_bytes,
        'non_glue_function_compilation_percent': round(100 * len(successes) / non_glue_functions, 4) if non_glue_functions else None,
        'non_glue_body_byte_compilation_percent': round(100 * sum(r['body_bytes'] for r in successes) / non_glue_bytes, 4) if non_glue_bytes else None,
        'object_bytes': obj.stat().st_size,
        'compiler': str(COMPILER),
        'object_compile_flags': ['/O2', '/c'],
        'target': 'i686-pc-windows-msvc',
        'scope': 'Independent x86 C++ object compilation; no instruction comparison or link',
    }
    (output / 'coverage.json').write_text(json.dumps(metrics, indent=2) + '\n')
    print(json.dumps(metrics, indent=2))


if __name__ == '__main__':
    main()

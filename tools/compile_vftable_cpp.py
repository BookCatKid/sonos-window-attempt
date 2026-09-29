#!/usr/bin/env python3
"""Compile Ghidra functions whose scoped references are vtable addresses.

Ghidra prints recovered vtable labels as C++-looking expressions such as
``SCIAction::vftable``.  They are data addresses in the reference image, not
member accesses that need a reconstructed class definition.  This tool lowers
those labels to ordinary external C++ symbols so the compiler can emit normal
DIR32 relocations while preserving readable source.
"""

import argparse
import csv
import json
import os
import re
import subprocess
from pathlib import Path

from compile_ghidra_cpp import (
    COMPILER,
    HEADER,
    ROOT,
    definition_with_entry_name,
    eligible,
    load_records,
    msvc_compatible_labels,
    msvc_compatible_thiscall,
)


VFTABLE = re.compile(r'(?<![\w:])((?:[A-Za-z_]\w*::)+vftable)')
SCOPED = re.compile(r'(?<![\w:])(?:[A-Za-z_]\w*::)+[A-Za-z_]\w*')
THUNK = re.compile(r'\bthunk_FUN_[0-9a-f]{8}\b')


def symbol_name(qualified):
    owner = qualified[:-len('::vftable')]
    return 'ghidra_vftable_' + owner.replace('::', '__')


def lower_vftables(source):
    labels = sorted(set(VFTABLE.findall(source)))
    if not labels:
        return None, []
    changed = source
    for label in sorted(labels, key=len, reverse=True):
        changed = re.sub(
            r'(?<![\w:])' + re.escape(label) + r'(?![\w:])',
            f'(undefined4)&{symbol_name(label)}',
            changed,
        )
    # Keep this tranche mechanical: any other qualified construct belongs in a
    # separate ABI-aware lowering pass.
    if SCOPED.search(changed):
        return None, labels
    return changed, labels


def source_for(records):
    vtables = sorted({label for record in records for label in record['vftables']})
    externs = '\n'.join(f'extern char {symbol_name(label)}[];' for label in vtables)
    thunks = sorted({name for record in records for name in THUNK.findall(record['source'])})
    thunk_decls = '\n'.join(f'extern int {name}(...);' for name in thunks)
    definitions = []
    for record in records:
        definition = msvc_compatible_labels(msvc_compatible_thiscall(record['source']))
        definitions.append(
            f'// Reference entry {record["entry"]}; body size {record["body_bytes"]} bytes.\n'
            f'#line 1 "ENTRY_{record["entry"]}"\n{definition}'
        )
    return HEADER + externs + '\n' + thunk_decls + '\n' + '\n'.join(definitions)


def syntax_ok(records, scratch):
    scratch.write_text(source_for(records))
    result = subprocess.run(
        [str(COMPILER), '/nologo', '/Zs', '/clang:--target=i686-pc-windows-msvc',
         '/clang:-ferror-limit=0', os.path.relpath(scratch, ROOT)],
        cwd=ROOT, capture_output=True, text=True,
    )
    return result.returncode == 0, result.stderr


def split_valid(records, scratch, failures):
    if not records:
        return []
    remaining = list(records)
    for _ in range(8):
        good, error = syntax_ok(remaining, scratch)
        if good:
            return remaining
        diagnostic = {}
        for match in re.finditer(
                r'ENTRY_([0-9a-f]{8})\(\d+,\d+\): error: ([^\n]+)', error):
            diagnostic.setdefault(match.group(1), match.group(2))
        if not diagnostic:
            break
        bad = set(diagnostic)
        for record in remaining:
            if record['entry'] in bad:
                failures.append((record['entry'], diagnostic[record['entry']]))
        remaining = [record for record in remaining if record['entry'] not in bad]
        if not remaining:
            return []
    if len(remaining) == 1:
        failures.append((remaining[0]['entry'], error.splitlines()[0] if error else 'syntax error'))
        return []
    middle = len(remaining) // 2
    return (split_valid(remaining[:middle], scratch, failures) +
            split_valid(remaining[middle:], scratch, failures))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('exports', nargs='+', type=Path)
    parser.add_argument('--output-dir', type=Path,
                        default=ROOT / 'analysis' / 'compiled-cpp-vftables')
    parser.add_argument('--batch-size', type=int, default=200)
    parser.add_argument('--emit-source', type=Path)
    parser.add_argument('--emit-index', type=Path)
    args = parser.parse_args()
    if args.batch_size < 1:
        parser.error('--batch-size must be positive')
    if not COMPILER.is_file():
        parser.error(f'Missing clang-cl: {COMPILER}')

    output = args.output_dir.resolve()
    output.mkdir(parents=True, exist_ok=True)
    candidates = []
    rejected_other_scoped = 0
    for record in load_records(args.exports).values():
        source = definition_with_entry_name(record)
        lowered, labels = lower_vftables(source)
        if lowered is None:
            if labels:
                rejected_other_scoped += 1
            continue
        if eligible(lowered):
            candidates.append({**record, 'source': lowered, 'vftables': labels})
    candidates.sort(key=lambda record: int(record['entry'], 16))
    print(f'Candidates: {len(candidates)}; vtable records with other scoped constructs: '
          f'{rejected_other_scoped}', flush=True)

    scratch = output / '.syntax-probe.cpp'
    failures = []
    accepted = []
    for offset in range(0, len(candidates), args.batch_size):
        accepted.extend(split_valid(candidates[offset:offset + args.batch_size], scratch, failures))
        print(f'Checked {min(offset + args.batch_size, len(candidates))}/{len(candidates)}; '
              f'accepted {len(accepted)}', flush=True)
    scratch.unlink(missing_ok=True)

    source = output / 'ghidra_recovered.cpp'
    source.write_text(source_for(accepted))
    obj = output / 'ghidra_recovered.obj'
    result = subprocess.run(
        [str(COMPILER), '/nologo', '/O2', '/c', '/clang:--target=i686-pc-windows-msvc',
         f'/Fo{obj}', os.path.relpath(source, ROOT)],
        cwd=ROOT, capture_output=True, text=True,
    )
    if result.returncode:
        raise SystemExit('Aggregate object compilation failed:\n' + result.stderr)

    index = output / 'compiled-index.tsv'
    with index.open('w', newline='') as file:
        writer = csv.writer(file, delimiter='\t')
        writer.writerow(['entry', 'name', 'reference_body_bytes'])
        writer.writerows((record['entry'], record['name'], record['body_bytes'])
                         for record in accepted)
    (output / 'failures.tsv').write_text('entry\terror\n' + ''.join(
        f'{entry}\t{error}\n' for entry, error in failures))

    if args.emit_source:
        args.emit_source.parent.mkdir(parents=True, exist_ok=True)
        args.emit_source.write_text(source.read_text())
    if args.emit_index:
        args.emit_index.parent.mkdir(parents=True, exist_ok=True)
        args.emit_index.write_text(index.read_text())

    metrics = {
        'candidate_functions': len(candidates),
        'compiled_functions': len(accepted),
        'compiled_reference_body_bytes': sum(record['body_bytes'] for record in accepted),
        'syntax_rejected': len(failures),
        'records_with_vftable_and_other_scoped_constructs': rejected_other_scoped,
        'distinct_vtable_symbols': len({label for record in accepted for label in record['vftables']}),
        'object_bytes': obj.stat().st_size,
        'scope': 'Ghidra-derived C++ object compilation with scoped vtable labels lowered to extern data addresses',
    }
    (output / 'coverage.json').write_text(json.dumps(metrics, indent=2) + '\n')
    print(json.dumps(metrics, indent=2))


if __name__ == '__main__':
    main()

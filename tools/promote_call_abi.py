#!/usr/bin/env python3
"""Apply recovered direct-call ABIs to existing primitive member batches.

Preserve original candidates. Syntax-check each transformed address and retain
its reference index; matching is measured separately using pinned MSVC.
"""
import argparse
import csv
import hashlib
import json
import os
import re
import subprocess
from pathlib import Path

from compile_ghidra_cpp import ROOT, COMPILER
from compile_globals_cpp import DECLARATION_ALIASES
from promote_msvc_members import MARKER
from recovered_call_abi import CallABI


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('directory', type=Path)
    parser.add_argument('--exports', nargs='+', type=Path, required=True)
    args = parser.parse_args()
    original = args.directory
    source = (original / 'ghidra_recovered.cpp').read_text()
    markers = list(MARKER.finditer(source))
    if not markers:
        parser.error('No address-indexed source markers')
    abi = CallABI(args.exports, recover_implicit_register=True)
    prefix = source[:markers[0].start()] + DECLARATION_ALIASES + '\nclass SCStr;\n'
    blocks, declarations, typed_calls = {}, {}, 0
    for index, marker in enumerate(markers):
        end = markers[index + 1].start() if index + 1 < len(markers) else len(source)
        block = source[marker.start():end]
        line = re.search(r'(?m)^#line 1 "ENTRY_[0-9a-f]{8}"\n', block)
        if not line:
            # Older plain definitions have no namespace or class preamble.
            line_end = marker.end() - marker.start()
        else:
            line_end = line.end()
        function = block[line_end:]
        # Global batches close their recovered namespace after each definition.
        changed, decls, count = abi.lower(function)
        if count:
            blocks[marker.group(1)] = block[:line_end] + changed
            declarations.update(decls)
            typed_calls += count
    if not blocks:
        raise SystemExit('No direct-call candidates in this batch')
    prefix += '\n'.join(declarations.values()) + '\n'
    family = original.name.removeprefix('compiled-cpp-')
    stem = family.replace('-', '_') + '_call_abi'
    output = ROOT / 'analysis' / ('compiled-cpp-' + family + '-call-abi')
    output.mkdir(parents=True, exist_ok=True)
    target = output / 'ghidra_recovered.cpp'
    rejected = {}
    while blocks:
        target.write_text(prefix + ''.join(blocks.values()))
        result = subprocess.run([
            str(COMPILER), '/nologo', '/Zs', '/clang:--target=i686-pc-windows-msvc', '/clang:-ferror-limit=0',
            os.path.relpath(target, ROOT),
        ], cwd=ROOT, capture_output=True, text=True)
        if not result.returncode:
            break
        errors = dict(re.findall(r'ENTRY_([0-9a-f]{8})\(\d+,\d+\): error: ([^\n]+)', result.stderr))
        removed = set(errors) & blocks.keys()
        if not removed:
            raise SystemExit(result.stdout + result.stderr)
        for entry in removed:
            rejected[entry] = errors[entry]
            del blocks[entry]
    if not blocks:
        raise SystemExit('No candidates survived syntax checking')
    obj = output / 'ghidra_recovered.obj'
    result = subprocess.run([
        str(COMPILER), '/nologo', '/O2', '/bigobj', '/MD', '/GS', '/GR', '/EHsc', '/Zi', '/c',
        '/clang:--target=i686-pc-windows-msvc', f'/Fo{obj}', os.path.relpath(target, ROOT),
    ], cwd=ROOT, capture_output=True, text=True)
    if result.returncode:
        raise SystemExit(result.stdout + result.stderr)
    with (original / 'compiled-index.tsv').open(newline='') as file:
        reader = csv.DictReader(file, delimiter='\t')
        fields = reader.fieldnames
        rows = [row for row in reader if row['entry'] in blocks]
    if not fields or not rows or {row['entry'] for row in rows} != blocks.keys():
        raise SystemExit('Compiled index does not cover every surviving source entry')
    with (output / 'compiled-index.tsv').open('w', newline='') as file:
        writer = csv.DictWriter(file, fieldnames=fields, delimiter='\t')
        writer.writeheader()
        writer.writerows(rows)
    inventory_path = original / 'reference-eh-inventory.json'
    if inventory_path.exists():
        inventory = [row for row in json.loads(inventory_path.read_text()) if row['entry'] in blocks]
        (output / 'reference-eh-inventory.json').write_text(json.dumps(inventory, indent=2) + '\n')
    emit_dir = ROOT / 'src/generated/member_abi'
    emit_dir.mkdir(parents=True, exist_ok=True)
    (emit_dir / (stem + '.cpp')).write_text(target.read_text())
    (emit_dir / (stem + '-index.tsv')).write_bytes((output / 'compiled-index.tsv').read_bytes())
    metrics = {'compiled_functions': len(rows), 'reference_body_bytes': sum(int(row['reference_body_bytes']) for row in rows),
               'candidate_typed_calls': typed_calls, 'syntax_rejected': rejected, 'pinned_msvc_verified': False,
               'input_source_sha256': hashlib.sha256(source.encode()).hexdigest(),
               'generated_source_sha256': hashlib.sha256(target.read_bytes()).hexdigest()}
    (output / 'coverage.json').write_text(json.dumps(metrics, indent=2) + '\n')
    manifest_path = emit_dir / 'tranches.json'
    manifest = json.loads(manifest_path.read_text()) if manifest_path.exists() else []
    object_name = stem + '_reference_flags'
    manifest = [row for row in manifest if row['object'] != object_name]
    manifest.append({'object': object_name, 'directory': str(output.relative_to(ROOT))})
    manifest_path.write_text(json.dumps(manifest, indent=2) + '\n')
    print(json.dumps({**metrics, 'syntax_rejected': len(rejected)}, indent=2))


if __name__ == '__main__':
    main()

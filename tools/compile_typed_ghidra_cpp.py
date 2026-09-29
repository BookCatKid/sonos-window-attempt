#!/usr/bin/env python3
"""Compile native Ghidra bodies with inferred direct-call ABI declarations."""
import argparse
import csv
import json
import os
import subprocess
from pathlib import Path
from compile_ghidra_cpp import ROOT, COMPILER, load_records, eligible, width_preserving_pointer_casts, msvc_compatible_labels
from compile_scstr_cpp import cpp_source, split_valid, normalize_definition
from recovered_call_abi import CallABI


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('exports', nargs='+', type=Path)
    parser.add_argument('--output-dir', type=Path, default=ROOT / 'analysis/compiled-cpp-native-typed')
    parser.add_argument('--emit-source', type=Path, default=ROOT / 'src/generated/native_typed.cpp')
    parser.add_argument('--emit-index', type=Path, default=ROOT / 'src/generated/native-typed-index.tsv')
    args = parser.parse_args()
    output = args.output_dir.resolve()
    output.mkdir(parents=True, exist_ok=True)
    abi = CallABI(args.exports)
    candidates = []
    for record in load_records(args.exports).values():
        source = normalize_definition(record)
        if record['body_bytes'] <= 5 or not eligible(source):
            continue
        source = msvc_compatible_labels(width_preserving_pointer_casts(source))
        source, declarations, changed = abi.lower(source)
        if source is not None and changed:
            candidates.append({**record, 'source': source, 'abi_declarations': declarations,
                               'typed_calls': changed})
    candidates.sort(key=lambda r: r['entry'])
    print(f'Candidates: {len(candidates)} / {sum(r["body_bytes"] for r in candidates)} reference bytes', flush=True)
    failures = []
    accepted = []
    scratch = output / '.syntax-probe.cpp'
    for start in range(0, len(candidates), 200):
        accepted.extend(split_valid(candidates[start:start + 200], scratch, failures))
        print(f'Checked {min(start+200,len(candidates))}/{len(candidates)}; accepted {len(accepted)}',flush=True)
    scratch.unlink(missing_ok=True)
    source = output / 'ghidra_recovered.cpp'
    source.write_text(cpp_source(accepted))
    obj = output / 'ghidra_recovered.obj'
    result = subprocess.run([str(COMPILER), '/nologo', '/O2', '/c',
                             '/clang:--target=i686-pc-windows-msvc', f'/Fo{obj}',
                             os.path.relpath(source,ROOT)],cwd=ROOT,capture_output=True,text=True)
    if result.returncode:
        raise SystemExit(result.stdout + result.stderr)
    index = output / 'compiled-index.tsv'
    with index.open('w',newline='') as file:
        writer=csv.writer(file,delimiter='\t')
        writer.writerow(['entry','name','reference_body_bytes'])
        writer.writerows((r['entry'],r['name'],r['body_bytes']) for r in accepted)
    (output/'failures.tsv').write_text('entry\terror\n'+''.join(f'{entry}\t{error}\n' for entry,error in failures))
    args.emit_source.parent.mkdir(parents=True,exist_ok=True)
    args.emit_source.write_text(source.read_text())
    args.emit_index.write_text(index.read_text())
    metrics={'compiled_functions':len(accepted),'compiled_reference_body_bytes':sum(r['body_bytes'] for r in accepted),
             'typed_call_sites':sum(r['typed_calls'] for r in accepted),'syntax_rejected':len(failures),
             'scope':'Inferred call ABI experiment; byte match requires pinned MSVC comparison'}
    (output/'coverage.json').write_text(json.dumps(metrics,indent=2)+'\n')
    print(json.dumps(metrics,indent=2))


if __name__=='__main__':
    main()

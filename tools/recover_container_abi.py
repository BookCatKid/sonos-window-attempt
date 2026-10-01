#!/usr/bin/env python3
"""Re-decompile proven container/event ABIs in a guarded copy of the Ghidra project.

Only analysis/container-call-abi/ghidra may be modified. The original project
is hashed before and after; exported pseudocode is evidence, not byte coverage.
"""
import argparse
import hashlib
import json
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def project_hashes(directory):
    result = {}
    for path in sorted(directory.rglob('*')):
        if path.is_file():
            with path.open('rb') as stream:
                result[str(path.relative_to(directory))] = hashlib.file_digest(stream, 'sha256').hexdigest()
    return result


def isolated_path(root):
    allowed = root / 'analysis/container-call-abi/ghidra'
    if allowed.resolve() != allowed.absolute():
        raise ValueError('The isolated project path must not resolve through a symlink')
    return allowed


def validate_exports(output, expected):
    log = (output / 'console.txt').read_text()
    if 'REPORT SCRIPT ERROR' in log or 'Save succeeded' not in log:
        raise ValueError('Ghidra did not complete and save the ABI restoration')
    applied = json.loads((output / 'applied-abi.json').read_text())
    if applied['ret_cleanup_bytes'] != 20:
        raise ValueError('Consumer ABI is not the proven twenty-byte argument layout')
    before = [json.loads(line) for line in (output / 'before.jsonl').read_text().splitlines()]
    after = [json.loads(line) for line in (output / 'after.jsonl').read_text().splitlines()]
    if {row['entry'] for row in before} != expected or {row['entry'] for row in after} != expected:
        raise ValueError('Incomplete before/after decompiler export')
    return before, after


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--event-objects', action='store_true')
    parser.add_argument('--output-dir', type=Path, required=True)
    parser.add_argument('--headless', type=Path, default=Path('/opt/homebrew/opt/ghidra/libexec/support/analyzeHeadless'))
    args = parser.parse_args()
    original = ROOT / 'analysis/thunk-recovery-full/ghidra'
    isolated = isolated_path(ROOT)
    before_hashes = project_hashes(original)
    if not before_hashes:
        raise ValueError('Original Ghidra project is missing')
    if not isolated.exists():
        isolated.parent.mkdir(parents=True, exist_ok=True)
        subprocess.run(['/bin/cp', '-cR', str(original), str(isolated)], check=True)
    callers = ROOT / 'analysis/container-call-abi/callers.txt'
    expected = set(callers.read_text().splitlines()) | {'10dee620'}
    output = args.output_dir.resolve()
    if output == ROOT.resolve() or original.resolve() in (output, *output.parents) or isolated.resolve() in (output, *output.parents):
        raise ValueError('Exports must be outside the Ghidra project directories')
    output.mkdir(parents=True, exist_ok=True)
    command = [str(args.headless), str(isolated), 'WindowAttempt', '-process', 'sclib-csharp.dll',
               '-noanalysis', '-scriptPath', str(ROOT / 'tools/ghidra'), '-postScript',
               'RestoreContainerCallABI.java', str(callers), str(output)]
    if args.event_objects:
        index = ROOT / 'analysis/compiled-cpp-empty-tree-arguments-none-nontrivial-homes-ordered/compiled-index.tsv'
        proof = json.loads((ROOT / 'analysis/recovery-msvc-tree-barrier-atomic-arity/summary.json').read_text())['variants'][0]
        if proof['exact_functions'] != 90 or proof['compiled_functions'] != 90 or hashlib.sha256(index.read_bytes()).hexdigest() != proof['index_sha256']:
            raise ValueError('Event constructor inventory lacks the pinned ninety-function proof')
        command.append(str(index))
        expected |= {'10deea50', '10def0d0', '10df15a0', '105ad940', '1034e100'}
    # Ghidra sometimes exits zero after a script exception; validate its exports
    # as well as the process result, and always verify original-project hashes.
    try:
        with (output / 'console.txt').open('w') as stream:
            subprocess.run(command, stdout=stream, stderr=subprocess.STDOUT, check=True, cwd=ROOT)
        before, after = validate_exports(output, expected)
    finally:
        after_hashes = project_hashes(original)
        if before_hashes != after_hashes:
            raise RuntimeError('Original Ghidra project changed during the isolated run')
    report = {'original_project_unchanged': True, 'original_project_hashes': before_hashes,
              'isolated_project': str(isolated), 'exported_functions': len(after),
              'changed_decompilations': sum(a.get('decompiled_c') != b.get('decompiled_c') for a, b in zip(before, after)),
              'script_sha256': hashlib.sha256((ROOT / 'tools/ghidra/RestoreContainerCallABI.java').read_bytes()).hexdigest(),
              'event_object_bytes': 24 if args.event_objects else None, 'byte_match_coverage_added': 0}
    (output / 'execution-proof.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({key: value for key, value in report.items() if key != 'original_project_hashes'}))


if __name__ == '__main__':
    main()

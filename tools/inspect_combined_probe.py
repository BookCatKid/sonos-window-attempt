#!/usr/bin/env python3
"""Run all linked C++ family checks and report their combined PE byte score."""

import argparse
import csv
import json
import subprocess
import sys
from pathlib import Path

from classify_functions import DLL
from inspect_link_probe import BODY_FAMILIES

ROOT = Path(__file__).resolve().parents[1]


def run(script, *arguments):
    process = subprocess.run([sys.executable, str(ROOT / 'tools' / script),
                              *(str(argument) for argument in arguments)],
                             capture_output=True, text=True, cwd=ROOT)
    if process.returncode:
        raise RuntimeError(f'{script} failed:\n{process.stdout}\n{process.stderr}')
    return json.loads(process.stdout)


def manifest_entries(path):
    with path.open(newline='') as file:
        return {int(row['entry'], 16): int(row['body_bytes'])
                for row in csv.DictReader(file, delimiter='\t')}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('artifact_dir', type=Path,
                        help='downloaded msvc-14-28-x86-objects directory')
    parser.add_argument('--threshold', type=float,
                        help='require this aligned whole-file byte percentage')
    args = parser.parse_args()
    directory = args.artifact_dir
    candidate_path = directory / 'combined_link_probe.dll'
    map_path = directory / 'combined_link_probe.map'
    swig = run('inspect_swig_delete_family.py', directory / 'swig_delete_family.obj',
               '--dll', candidate_path, '--map', map_path)
    single = run('inspect_single_ref_family.py', directory / 'single_ref_family.obj',
                 '--dll', candidate_path, '--map', map_path)
    mutations = run('inspect_single_ref_family.py',
                    directory / 'single_ref_mutations.obj', '--index',
                    ROOT / 'src/generated/single-ref-mutations-index.tsv',
                    '--dll', candidate_path, '--map', map_path)
    ownership = run('inspect_link_probe.py', candidate_path, map_path)
    query = run('inspect_query_link.py', candidate_path, map_path,
                directory / 'query_family_candidate.obj',
                directory / 'scstr_equals_candidate.obj')
    entries = {}
    for manifest in ('swig-delete-family-index.tsv',
                     'single-ref-family-index.tsv',
                     'single-ref-mutations-index.tsv'):
        for entry, size in manifest_entries(ROOT / 'src/generated' / manifest).items():
            if entry in entries and entries[entry] != size:
                raise ValueError(f'conflicting reference body size at 0x{entry:08x}')
            entries[entry] = size
    for _method, _class_name, entry, size in BODY_FAMILIES:
        if entry in entries and entries[entry] != size:
            raise ValueError(f'conflicting reference body size at 0x{entry:08x}')
        entries[entry] = size
    candidate = candidate_path.read_bytes()
    reference = DLL.read_bytes()
    aligned = sum(a == b for a, b in zip(candidate, reference))
    percent = 100 * aligned / len(reference)
    result = {
        'candidate_file_bytes': len(candidate),
        'reference_file_bytes': len(reference),
        'aligned_equal_file_bytes': aligned,
        'aligned_equal_file_percent': round(percent, 6),
        'unique_exact_linked_reference_functions': len(entries),
        'unique_exact_linked_reference_body_bytes': sum(entries.values()),
        'query_fixed_bytes_equal': query['fixed_matching'],
        'query_fixed_bytes_total': query['fixed_bytes'],
        'query_relocation_targets_matching': query['target_matches'],
        'query_relocations_total': query['relocations'],
        'swig_named_exports_matching': swig['matching_named_exports'],
        'family_checks': {
            'swig_delete': swig['linked_exact_bodies'],
            'single_reference_constructor': single['linked_exact_bodies'],
            'single_reference_mutations': mutations['linked_exact_bodies'],
            'representative_ownership': ownership['linked_bodies_exact'],
        },
        'scope': 'combined linked C++ probe; aligned whole-file bytes measured separately',
    }
    print(json.dumps(result, indent=2))
    if args.threshold is not None and percent < args.threshold:
        raise SystemExit(1)


if __name__ == '__main__':
    main()

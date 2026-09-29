#!/usr/bin/env python3
"""Measure compiler settings without treating variant overlap as new coverage."""
import argparse
import csv
import json
from pathlib import Path
from classify_functions import DLL, ROOT, section_map
from compare_compiled_ghidra import (
    DEFAULT_SYMBOLS, load_symbol_vas, add_scstr_export_targets, compare_directory,
)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('artifact_directory', type=Path)
    parser.add_argument('--manifest', type=Path, default=ROOT / 'tools/msvc_flag_sweep.json')
    parser.add_argument('--output-dir', type=Path, default=ROOT / 'analysis/msvc-flag-sweep')
    args = parser.parse_args()
    manifest = json.loads(args.manifest.read_text())
    expected = [args.artifact_directory / f'sweep_{f["name"]}_{p["name"]}.obj'
                for f in manifest['families'] for p in manifest['profiles']]
    missing = [str(p) for p in expected if not p.is_file()]
    if missing:
        parser.error('Missing sweep outputs: ' + ', '.join(missing))
    args.output_dir.mkdir(parents=True, exist_ok=True)
    reference = DLL.read_bytes()
    image_base, sections = section_map(reference)
    targets = load_symbol_vas(DEFAULT_SYMBOLS)
    add_scstr_export_targets(targets, reference, image_base, sections)
    summaries = []
    best = {}
    for family in manifest['families']:
        for profile in manifest['profiles']:
            name = f'sweep_{family["name"]}_{profile["name"]}'
            rows = compare_directory(ROOT / family['comparison_directory'], reference,
                                     image_base, sections, targets,
                                     args.artifact_directory / (name + '.obj'))
            path = args.output_dir / (name + '.tsv')
            with path.open('w', newline='') as file:
                writer = csv.DictWriter(file, fieldnames=rows[0].keys(), delimiter='\t')
                writer.writeheader()
                writer.writerows(rows)
            exact = [r for r in rows if r['exact_after_known_relocations']]
            for row in exact:
                best.setdefault(row['entry'], {**row, 'family': family['name'],
                                              'profile': profile['name'], 'flags': profile['flags']})
            summary = {'family': family['name'], 'profile': profile['name'],
                       'flags': profile['flags'], 'mapped_functions': sum(r['compiled_bytes'] > 0 for r in rows),
                       'exact_functions': len(exact),
                       'exact_reference_bytes': sum(r['reference_bytes'] for r in exact),
                       'same_length_fixed_match_functions': sum(r['same_length_fixed_match'] for r in rows)}
            summaries.append(summary)
            print(json.dumps(summary), flush=True)
    selected = sorted(best.values(), key=lambda r: r['entry'])
    with (args.output_dir / 'best-exact-functions.tsv').open('w', newline='') as file:
        if selected:
            writer = csv.DictWriter(file, fieldnames=selected[0].keys(), delimiter='\t')
            writer.writeheader()
            writer.writerows(selected)
    result = {'variants': summaries, 'distinct_exact_functions': len(best),
              'distinct_exact_reference_bytes_sum': sum(r['reference_bytes'] for r in best.values()),
              'scope': 'Object function comparisons with reference placement constraints; '
                       'use the byte coverage audit to merge with prior reports. Linked DLL unverified.'}
    (args.output_dir / 'summary.json').write_text(json.dumps(result, indent=2) + '\n')


if __name__ == '__main__':
    main()

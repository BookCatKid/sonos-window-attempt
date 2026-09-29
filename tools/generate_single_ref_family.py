#!/usr/bin/env python3
"""Recover every copy of the 24-byte single-reference constructor as C++."""

import csv
from pathlib import Path

from classify_functions import DLL, INVENTORY, function_bytes, section_map

ROOT = Path(__file__).resolve().parents[1]
OUTPUT = ROOT / 'src' / 'generated' / 'single_ref_family.cpp'
MANIFEST = ROOT / 'src' / 'generated' / 'single-ref-family-index.tsv'
MUTATION_OUTPUT = ROOT / 'src' / 'generated' / 'single_ref_mutations.cpp'
MUTATION_MANIFEST = ROOT / 'src' / 'generated' / 'single-ref-mutations-index.tsv'
REPRESENTATIVE = 0x10118470
SIZE = 24
MUTATIONS = (
    ('Reset', 0x101175c0, 30),
    ('Replace', 0x1012b910, 24),
)


def matching_entries(reference, image_base, sections, representative, size):
    expected = function_bytes(reference, representative, size,
                              image_base, sections)
    entries = []
    with INVENTORY.open(newline='') as file:
        for row in csv.DictReader(file, delimiter='\t'):
            if row['thunk'] == 'true' or int(row['body_bytes']) != size:
                continue
            entry = row['entry']
            if function_bytes(reference, int(entry, 16), size,
                              image_base, sections) == expected:
                entries.append(entry)
    return entries


def main():
    reference = DLL.read_bytes()
    image_base, sections = section_map(reference)
    entries = matching_entries(reference, image_base, sections,
                               REPRESENTATIVE, SIZE)
    lines = [
        '// Recovered C++ for all identical 24-byte single-reference constructors.',
        'struct SingleRefTarget {',
        '    virtual void Reserved();',
        '    virtual void AddRef();',
        '};',
        '',
    ]
    for entry in entries:
        name = f'Recovered_{entry}'
        lines += [
            f'// Reference entry 0x{entry}',
            f'struct {name} {{',
            '    SingleRefTarget* target;',
            f'    __declspec(noinline) {name}* Init(SingleRefTarget* value);',
            '};',
            f'{name}* {name}::Init(SingleRefTarget* value) {{',
            '    target = value;',
            '    if (value != nullptr) {',
            '        value->AddRef();',
            '    }',
            '    return this;',
            '}',
            '',
        ]
    OUTPUT.write_text('\n'.join(lines))
    with MANIFEST.open('w', newline='') as file:
        writer = csv.writer(file, delimiter='\t')
        writer.writerow(('entry', 'class_name', 'body_bytes'))
        writer.writerows((entry, f'Recovered_{entry}', SIZE) for entry in entries)
    print(f'{len(entries)} functions, {len(entries) * SIZE} reference body bytes')

    mutation_source = [
        '// Recovered C++ for repeated single-reference reset and replacement.',
        'struct ReleasableTarget {',
        '    virtual void Reserved0();',
        '    virtual void Reserved1();',
        '    virtual void Release();',
        '};',
        '',
    ]
    mutation_rows = []
    for method, representative, size in MUTATIONS:
        for entry in matching_entries(reference, image_base, sections,
                                      representative, size):
            class_name = f'Recovered{method}_{entry}'
            mutation_rows.append((entry, class_name, method, size))
            mutation_source += [
                f'// Reference entry 0x{entry}',
                f'struct {class_name} {{',
                '    ReleasableTarget* target;',
                f'    __declspec(noinline) void {method}(ReleasableTarget* value);',
                '};',
                f'void {class_name}::{method}(ReleasableTarget* value) {{',
                '    ReleasableTarget* old = target;',
                '    if (old != nullptr) {',
            ]
            if method == 'Reset':
                mutation_source.append('        target = nullptr;')
            mutation_source += [
                '        old->Release();',
                '    }',
                '    target = value;',
                '}',
                '',
            ]
    MUTATION_OUTPUT.write_text('\n'.join(mutation_source))
    with MUTATION_MANIFEST.open('w', newline='') as file:
        writer = csv.writer(file, delimiter='\t')
        writer.writerow(('entry', 'class_name', 'method_name', 'body_bytes'))
        writer.writerows(mutation_rows)
    print(f'{len(mutation_rows)} mutation functions, '
          f'{sum(row[3] for row in mutation_rows)} reference body bytes')


if __name__ == '__main__':
    main()

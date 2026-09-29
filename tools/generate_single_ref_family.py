#!/usr/bin/env python3
"""Recover every copy of the 24-byte single-reference constructor as C++."""

import csv
from pathlib import Path

from classify_functions import DLL, INVENTORY, function_bytes, section_map

ROOT = Path(__file__).resolve().parents[1]
OUTPUT = ROOT / 'src' / 'generated' / 'single_ref_family.cpp'
MANIFEST = ROOT / 'src' / 'generated' / 'single-ref-family-index.tsv'
REPRESENTATIVE = 0x10118470
SIZE = 24


def main():
    reference = DLL.read_bytes()
    image_base, sections = section_map(reference)
    expected = function_bytes(reference, REPRESENTATIVE, SIZE,
                              image_base, sections)
    entries = []
    with INVENTORY.open(newline='') as file:
        for row in csv.DictReader(file, delimiter='\t'):
            if row['thunk'] == 'true' or int(row['body_bytes']) != SIZE:
                continue
            entry = row['entry']
            if function_bytes(reference, int(entry, 16), SIZE,
                              image_base, sections) == expected:
                entries.append(entry)
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


if __name__ == '__main__':
    main()

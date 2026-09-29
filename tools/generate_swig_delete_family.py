#!/usr/bin/env python3
"""Recover the repeated exported C# deletion wrappers as ordinary C++."""

import csv
import re
from pathlib import Path

from classify_functions import DLL, INVENTORY, function_bytes, section_map

ROOT = Path(__file__).resolve().parents[1]
INDEX = ROOT / 'analysis' / 'readable-source' / 'index.tsv'
OUTPUT = ROOT / 'src' / 'generated' / 'swig_delete_family.cpp'
MANIFEST = ROOT / 'src' / 'generated' / 'swig-delete-family-index.tsv'
REPRESENTATIVE = 0x1019c350
BODY_SIZE = 16


def main():
    reference = DLL.read_bytes()
    image_base, sections = section_map(reference)
    expected = function_bytes(reference, REPRESENTATIVE, BODY_SIZE,
                              image_base, sections)
    with INDEX.open(newline='') as file:
        names = {row['entry']: row['export_alias']
                 for row in csv.DictReader(file, delimiter='\t')}
    rows = []
    with INVENTORY.open(newline='') as file:
        for row in csv.DictReader(file, delimiter='\t'):
            if row['thunk'] == 'true' or int(row['body_bytes']) != BODY_SIZE:
                continue
            entry = row['entry']
            if function_bytes(reference, int(entry, 16), BODY_SIZE,
                              image_base, sections) != expected:
                continue
            alias = names.get(entry, '')
            match = re.fullmatch(r'_([A-Za-z_]\w*)@4', alias)
            if not match:
                raise ValueError(f'{entry}: unexpected export alias {alias!r}')
            rows.append((entry, match.group(1), alias))
    source = [
        '// Generated from the repeated 16-byte C# deletion-wrapper family.',
        '// Each function has a separate exported symbol and a readable C++ body.',
        'struct SwigDeleteTarget {',
        '    virtual void Reserved0();',
        '    virtual void Reserved1();',
        '    virtual void Destroy();',
        '};',
        '',
    ]
    for entry, name, _alias in rows:
        source += [
            f'// Reference entry 0x{entry}',
            'extern "C" __declspec(dllexport) __declspec(noinline)',
            f'void __stdcall {name}(SwigDeleteTarget* value) {{',
            '    if (value != nullptr) {',
            '        value->Destroy();',
            '    }',
            '}',
            '',
        ]
    OUTPUT.write_text('\n'.join(source))
    with MANIFEST.open('w', newline='') as file:
        writer = csv.writer(file, delimiter='\t')
        writer.writerow(('entry', 'source_name', 'decorated_symbol', 'body_bytes'))
        writer.writerows((entry, name, alias, BODY_SIZE)
                         for entry, name, alias in rows)
    print(f'{len(rows)} functions, {len(rows) * BODY_SIZE} reference body bytes')


if __name__ == '__main__':
    main()

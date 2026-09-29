#!/usr/bin/env python3
"""Generate separate C++ functions for three repeated cleanup body families."""

import csv
from pathlib import Path

from classify_functions import DLL, INVENTORY, function_bytes, section_map

ROOT = Path(__file__).resolve().parents[1]
OUTPUT = ROOT / 'src' / 'generated' / 'cleanup_families.cpp'
INDEX = ROOT / 'src' / 'generated' / 'cleanup-families-index.tsv'
FAMILIES = (
    ('TwoFieldClear', 0x101bb140, 43),
    ('ResourceCleanupReturn', 0x101d4050, 37),
    ('SingleRefClear', 0x101b4d40, 28),
)


def main():
    reference = DLL.read_bytes()
    image_base, sections = section_map(reference)
    inventory = list(csv.DictReader(INVENTORY.open(newline=''), delimiter='\t'))
    source = [
        '// Recovered C++ for repeated cleanup functions, one body per entry.',
        'struct CleanupRef {',
        '    virtual void Reserved0();',
        '    virtual void Reserved1();',
        '    virtual void Release();',
        '};',
        'struct CleanupResource {',
        '    virtual void Reserved0();',
        '    virtual void Reserved1();',
        '    virtual void Reserved2();',
        '    virtual void Reserved3();',
        '    virtual void Dispose(bool owned);',
        '};',
        '',
    ]
    manifest = []
    for kind, representative, size in FAMILIES:
        expected = function_bytes(reference, representative, size,
                                  image_base, sections)
        for row in inventory:
            if row['thunk'] == 'true' or int(row['body_bytes']) != size:
                continue
            entry = row['entry']
            if function_bytes(reference, int(entry, 16), size,
                              image_base, sections) != expected:
                continue
            source.append(f'// Reference entry 0x{entry}')
            if kind == 'TwoFieldClear':
                name = f'ClearTwoFields_{entry}'
                prefix = f'@{name}@4'
                source += [
                    f'extern "C" __declspec(noinline) void __fastcall {name}(void* raw) {{',
                    '    struct Fields { void* target; CleanupRef* counter; };',
                    '    Fields* value = static_cast<Fields*>(raw);',
                    '    CleanupRef* old = value->counter;',
                    '    value->target = nullptr;',
                    '    value->counter = nullptr;',
                    '    if (old != nullptr) {',
                    '        old->Release();',
                    '        value->target = nullptr;',
                    '        value->counter = nullptr;',
                    '    }',
                    '}',
                ]
            elif kind == 'SingleRefClear':
                name = f'ClearSingleRef_{entry}'
                prefix = f'@{name}@4'
                source += [
                    f'extern "C" __declspec(noinline) void __fastcall {name}(CleanupRef** value) {{',
                    '    CleanupRef* old = *value;',
                    '    *value = nullptr;',
                    '    if (old != nullptr) {',
                    '        old->Release();',
                    '        *value = nullptr;',
                    '    }',
                    '}',
                ]
            else:
                name = f'ResourceOwnerReturned_{entry}'
                prefix = f'?Cleanup@{name}@@'
                source += [
                    f'struct {name} {{',
                    '    char precedingFields[36];',
                    '    CleanupResource* resource;',
                    f'    __declspec(noinline) {name}* Cleanup(void* unused);',
                    '};',
                    f'{name}* {name}::Cleanup(void* unused) {{',
                    '    CleanupResource* current = resource;',
                    '    if (current != nullptr) {',
                    '        current->Dispose(current != reinterpret_cast<CleanupResource*>(this));',
                    '        resource = nullptr;',
                    '    }',
                    '    return this;',
                    '}',
                ]
            source.append('')
            manifest.append((entry, kind, prefix, size))
    OUTPUT.write_text('\n'.join(source))
    with INDEX.open('w', newline='') as file:
        writer = csv.writer(file, delimiter='\t')
        writer.writerow(('entry', 'family', 'symbol_prefix', 'body_bytes'))
        writer.writerows(manifest)
    print(f'{len(manifest)} functions, {sum(row[3] for row in manifest)} reference body bytes')


if __name__ == '__main__':
    main()

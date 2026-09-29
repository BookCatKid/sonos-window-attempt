#!/usr/bin/env python3
"""Recover reference E9 thunks as ordinary C++ tail calls, with no assembly.

The opaque no-argument declarations are compiler-facing tail-transfer anchors.
They are not recovered API signatures. The byte comparator must verify each
wrapper before it can contribute to matching coverage. Neither DLL is executed.
"""
import argparse
import csv
import json
import os
import struct
import subprocess
from pathlib import Path

from classify_functions import DLL, ROOT, function_bytes, section_map
from compile_ghidra_cpp import COMPILER


def targets():
    reference = DLL.read_bytes()
    image_base, sections = section_map(reference)
    sources = set()
    inventory = ROOT / 'analysis/thunk-recovery-full/final-function-inventory.tsv'
    with inventory.open() as file:
        sources.update(int(r['entry'], 16) for r in csv.DictReader(file, delimiter='\t')
                       if int(r['body_bytes']) == 5)
    mappings = ROOT / 'analysis/thunk-recovery-full/all-thunk-targets.tsv'
    with mappings.open() as file:
        sources.update(int(r['source'], 16) for r in csv.DictReader(file, delimiter='\t'))
    result = []
    for address in sorted(sources):
        body = function_bytes(reference, address, 5, image_base, sections)
        if len(body) != 5 or body[0] != 0xe9:
            continue
        destination = address + 5 + struct.unpack_from('<i', body, 1)[0]
        if not function_bytes(reference, destination, 1, image_base, sections):
            raise ValueError(f'{address:08x}: target {destination:08x} outside reference sections')
        result.append((address, destination))
    return result


def source_for(records):
    declarations = '\n'.join(
        f'extern "C" int __cdecl ghidra_jump_target_{target:08x}();'
        for target in sorted({target for _, target in records}))
    definitions = '\n'.join(
        f'// Reference {address:08x}: direct tail transfer to {target:08x}.\n'
        f'__declspec(noinline) int __cdecl FUN_{address:08x}() {{\n'
        f'    return ghidra_jump_target_{target:08x}();\n}}\n'
        for address, target in records)
    return ('// Generated C++ tail-transfer wrappers. No assembly or instruction bytes.\n'
            '// Opaque signatures: verify machine bodies with the pinned compiler.\n'
            '// API type recovery and final linker placement remain separate work.\n' +
            declarations + '\n\n' + definitions)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output-dir', type=Path,
                        default=ROOT / 'analysis/compiled-cpp-direct-jumps')
    parser.add_argument('--emit-dir', type=Path,
                        default=ROOT / 'src/generated/direct_jumps')
    parser.add_argument('--chunk-size', type=int, default=4000)
    parser.add_argument('--limit', type=int)
    args = parser.parse_args()
    if args.chunk_size < 1 or (args.limit is not None and args.limit < 1):
        parser.error('chunk size and limit must be positive')
    records = targets()
    if args.limit:
        records = records[:args.limit]
    args.output_dir.mkdir(parents=True, exist_ok=True)
    args.emit_dir.mkdir(parents=True, exist_ok=True)
    for number, start in enumerate(range(0, len(records), args.chunk_size)):
        name = f'direct_jump_{number:03d}'
        chunk = records[start:start + args.chunk_size]
        output = args.output_dir / name
        output.mkdir(parents=True, exist_ok=True)
        source = args.emit_dir / f'{name}.cpp'
        source.write_text(source_for(chunk))
        with (output / 'compiled-index.tsv').open('w', newline='') as file:
            writer = csv.writer(file, delimiter='\t')
            writer.writerow(['entry', 'name', 'reference_body_bytes'])
            writer.writerows((f'{address:08x}', f'FUN_{address:08x}', 5)
                             for address, _ in chunk)
        with (args.emit_dir / f'{name}-index.tsv').open('w', newline='') as file:
            writer = csv.writer(file, delimiter='\t')
            writer.writerow(['entry', 'destination', 'reference_body_bytes'])
            writer.writerows((f'{address:08x}', f'{target:08x}', 5)
                             for address, target in chunk)
        obj = output / 'ghidra_recovered.obj'
        result = subprocess.run(
            [str(COMPILER), '/nologo', '/O2', '/Gy', '/c',
             '/clang:--target=i686-pc-windows-msvc', f'/Fo{obj.resolve()}',
             os.path.relpath(source, ROOT)], cwd=ROOT, capture_output=True, text=True)
        if result.returncode:
            raise SystemExit(result.stdout + result.stderr)
        print(f'{name}: {len(chunk):,} functions / {5 * len(chunk):,} reference bytes', flush=True)
    summary = {'compiled_functions': len(records), 'reference_body_bytes': 5 * len(records),
               'chunks': (len(records) + args.chunk_size - 1) // args.chunk_size,
               'scope': 'Opaque C++ tail-transfer wrappers; byte match and final DLL placement require verification'}
    (args.output_dir / 'coverage.json').write_text(json.dumps(summary, indent=2) + '\n')
    print(json.dumps(summary, indent=2))


if __name__ == '__main__':
    main()

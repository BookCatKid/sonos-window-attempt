#!/usr/bin/env python3
"""Build a typed early-return C++ candidate for repeated interface queries."""

import argparse
import csv
import re
import subprocess
from pathlib import Path

from compile_ghidra_cpp import COMPILER, ROOT, load_records
from compile_scstr_cpp import RAW_ADDREF, cpp_source

SIGNATURE = re.compile(
    r'undefined4 \* __thiscall FUN_([0-9a-f]{8})\('
    r'int \*param_1,undefined4 \*param_2,SCStr \*param_3\)')
EQUALITY = re.compile(r'SCStr::operator==\(param_3,"([^"\\]*)"\)')


def candidate(record):
    source = record['decompiled_c']
    if (record['body_bytes'] != 103 or not SIGNATURE.search(source)
            or len(RAW_ADDREF.findall(source)) != 2):
        return None
    names = EQUALITY.findall(source)
    if len(names) != 2 or names[1] != 'SCIObj':
        return None
    header = source[:source.index('{')].strip()
    branch = '''
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0) {
      ((RefCounted *)param_1)->AddRef();
    }
    return param_2;
'''
    rebuilt = (f'{header}\n{{\n'
               f'  if (param_3->operator==("{names[0]}")) {{{branch}  }}\n'
               f'  if (param_3->operator==("SCIObj")) {{{branch}  }}\n'
               f'  *param_2 = 0;\n  return param_2;\n}}\n')
    return {**record, 'source': rebuilt}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('exports', nargs='+', type=Path)
    parser.add_argument('--output-dir', type=Path,
                        default=ROOT / 'analysis' / 'query-family-candidate')
    args = parser.parse_args()
    records = [converted for record in load_records(args.exports).values()
               if (converted := candidate(record))]
    records.sort(key=lambda item: int(item['entry'], 16))
    output = args.output_dir.resolve()
    output.mkdir(parents=True, exist_ok=True)
    source = output / 'ghidra_recovered.cpp'
    source.write_text(cpp_source(records))
    obj = output / 'ghidra_recovered.obj'
    result = subprocess.run([str(COMPILER), '/nologo', '/O2', '/c',
                             '/clang:--target=i686-pc-windows-msvc',
                             f'/Fo{obj}', str(source.relative_to(ROOT))],
                            cwd=ROOT, capture_output=True, text=True)
    if result.returncode:
        raise SystemExit(result.stderr)
    with (output / 'compiled-index.tsv').open('w', newline='') as file:
        writer = csv.writer(file, delimiter='\t')
        writer.writerow(['entry', 'name', 'reference_body_bytes'])
        writer.writerows((r['entry'], r['name'], r['body_bytes']) for r in records)
    print(f'{len(records)} query functions; {sum(r["body_bytes"] for r in records)} '
          f'reference body bytes; object {obj.stat().st_size} bytes')


if __name__ == '__main__':
    main()

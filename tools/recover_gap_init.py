#!/usr/bin/env python3
"""Recover static-initializer functions that live outside the Ghidra
function inventory.

MSVC emits a tiny __E*-style initializer for each global object with a
non-trivial constructor::

    push <ctor arg VA>        ; 68 imm32
    mov  ecx, <object VA>     ; B9 imm32   (thiscall this)
    call <ctor VA>            ; E8 rel32
    push <dtor-thunk VA>      ; 68 imm32
    call _atexit              ; E8 rel32
    pop  ecx                  ; 59         (cdecl cleanup)
    ret                       ; C3

These 27-byte initializers sit in gap islands between inventoried
functions (``analysis/gap-islands.pkl`` from the gap scan). Each is
re-emitted as a genuine C++ source call::

    ((SCStr *)&DAT_<obj>)->int_allocRep((char *)&DAT_<str>);
    FUN_1004fff7(&LAB_<dtor>);

so the member-call stub machinery produces ``mov ecx,&DAT`` + push +
call, and the _atexit call produces push + call + pop ecx — the exact
27-byte body.
"""

import csv
import json
import pickle
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from classify_functions import function_bytes, section_map  # noqa: E402

REFERENCE = ROOT / 'reference' / 'SonosV2' / 'sclib-csharp.dll'
ISLANDS = ROOT / 'analysis' / 'gap-islands.pkl'
OUT = ROOT / 'analysis' / 'gap-init-recovery.jsonl'


def main():
    data = REFERENCE.read_bytes()
    image_base, sections = section_map(data)
    islands = pickle.loads(ISLANDS.read_bytes()) \
        if hasattr(pickle, 'loads') else pickle.load(open(ISLANDS, 'rb'))
    # Prefer the name the symbol table uses for each referenced address so
    # the generated relocations resolve against the reference map.
    sym_names = {}
    symbols_path = ROOT / 'analysis' / 'thunk-recovery-full' / 'symbols.jsonl'
    for line in symbols_path.open():
        rec = json.loads(line)
        try:
            sym_names[int(rec['address'], 16)] = rec['name']
        except (KeyError, ValueError):
            pass

    def sym(va, prefix):
        name = sym_names.get(va)
        if name and name.isidentifier():
            return name
        return f'{prefix}_{va:x}'
    emitted = 0
    skipped = []
    with OUT.open('w') as out:
        for va, code in islands:
            if (len(code) != 27 or code[:1] != b'\x68' or
                    code[5:6] != b'\xb9' or code[10:11] != b'\xe8' or
                    code[15:16] != b'\x68' or code[20:21] != b'\xe8' or
                    code[25:] != b'\x59\xc3'):
                continue
            str_va = struct.unpack('<I', code[1:5])[0]
            obj_va = struct.unpack('<I', code[6:10])[0]
            callee = va + 15 + struct.unpack('<i', code[11:15])[0]
            dtor_va = struct.unpack('<I', code[16:20])[0]
            atexit_va = va + 25 + struct.unpack('<i', code[21:25])[0]
            entry = f'{va:x}'
            # The ctor differs per island: most are SCStr::int_allocRep
            # (thiscall, char*), a few are the SCStr copy-ctor taking a
            # source object pointer.
            if callee == 0x1005273e:
                ctor = (f'SCStr::int_allocRep((SCStr *)&{sym(obj_va, "DAT")},'
                        f'(char *)&{sym(str_va, "DAT")});')
            elif callee == 0x10036c23:
                ctor = (f'SCStr::SCStr((SCStr *)&{sym(obj_va, "DAT")},'
                        f'(SCStr *)&{sym(str_va, "DAT")});')
            else:
                ctor = (f'((void (__thiscall *)(void *, char *))'
                        f'&{sym(callee, "FUN")})'
                        f'(&{sym(obj_va, "DAT")}, '
                        f'(char *)&{sym(str_va, "DAT")});')
            src = (f'void FUN_{entry}(void)\n{{\n'
                   f'  {ctor}\n'
                   f'  {sym(atexit_va, "FUN")}'
                   f'((void *)&{sym(dtor_va, "LAB")});\n'
                   f'}}\n')
            rec = {'target': entry, 'entry': entry,
                   'name': 'FUN_' + entry, 'body_bytes': 27,
                   'decompiled_c': src, 'decompiled': True,
                   'status': 'gap_init'}
            out.write(json.dumps(rec) + '\n')
            emitted += 1
    print(f'{emitted} gap-init records -> {OUT}')


if __name__ == '__main__':
    main()

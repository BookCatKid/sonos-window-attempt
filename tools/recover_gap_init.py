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

    def atexit_call(atexit_va, dtor_va):
        return (f'{sym(atexit_va, "FUN")}'
                f'((void *)&{sym(dtor_va, "FUN")});')

    emitted = 0
    with OUT.open('w') as out:
        for va, code in islands:
            body = entry = None
            if (len(code) == 27 and code[:1] == b'\x68' and
                    code[5:6] == b'\xb9' and code[10:11] == b'\xe8' and
                    code[15:16] == b'\x68' and code[20:21] == b'\xe8' and
                    code[25:] == b'\x59\xc3'):
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
                    ctor = (f'SCStr::int_allocRep('
                            f'(SCStr *)&{sym(obj_va, "DAT")},'
                            f'(char *)&{sym(str_va, "DAT")});')
                elif callee == 0x10036c23:
                    ctor = (f'SCStr::SCStr((SCStr *)&{sym(obj_va, "DAT")},'
                            f'(SCStr *)&{sym(str_va, "DAT")});')
                else:
                    ctor = (f'((void (__thiscall *)(void *, char *))'
                            f'&{sym(callee, "FUN")})'
                            f'(&{sym(obj_va, "DAT")}, '
                            f'(char *)&{sym(str_va, "DAT")});')
                body = f'  {ctor}\n  {atexit_call(atexit_va, dtor_va)}\n'
            # Pure _atexit registration: push dtor ; call _atexit ;
            # pop ecx ; ret (12 bytes) — a global whose ctor was
            # eliminated or which only needs destruction.
            elif (len(code) == 12 and code[:1] == b'\x68' and
                    code[5:6] == b'\xe8' and code[10:] == b'\x59\xc3'):
                dtor_va = struct.unpack('<I', code[1:5])[0]
                atexit_va = va + 10 + struct.unpack('<i', code[6:10])[0]
                entry = f'{va:x}'
                body = f'  {atexit_call(atexit_va, dtor_va)}\n'
            # One-arg cdecl ctor + _atexit: push &obj ; call ctor ;
            # push dtor ; call _atexit ; add esp,8 ; ret (24 bytes) —
            # MSVC coalesces both arg cleanups into the final add.
            elif (len(code) == 24 and code[:1] == b'\x68' and
                    code[5:6] == b'\xe8' and code[10:11] == b'\x68' and
                    code[15:16] == b'\xe8' and
                    code[20:] == b'\x83\xc4\x08\xc3'):
                obj_va = struct.unpack('<I', code[1:5])[0]
                ctor_va = va + 10 + struct.unpack('<i', code[6:10])[0]
                dtor_va = struct.unpack('<I', code[11:15])[0]
                atexit_va = va + 20 + struct.unpack('<i', code[16:20])[0]
                entry = f'{va:x}'
                body = (f'  {sym(ctor_va, "FUN")}'
                        f'(&{sym(obj_va, "DAT")});\n'
                        f'  {atexit_call(atexit_va, dtor_va)}\n')
            # Heap-object static-init: push size ; call operator_new ;
            # push dtor ; self-init stores ; mov [obj],eax ;
            # call _atexit ; add esp,8 ; ret (40 bytes). MSVC hoists
            # the _atexit argument push ahead of the stores.
            elif (len(code) == 40 and code[:1] == b'\x68' and
                    code[5:6] == b'\xe8' and code[10:11] == b'\x68' and
                    code[15:25] == b'\x89\x00\x89\x40\x04\x89\x40\x08'
                    b'\x66\xc7\x40\x0c\x01\x01' and
                    code[25:26] == b'\xa3' and code[30:31] == b'\xe8' and
                    code[35:] == b'\x83\xc4\x08\xc3'):
                size = struct.unpack('<I', code[1:5])[0]
                new_va = va + 10 + struct.unpack('<i', code[6:10])[0]
                dtor_va = struct.unpack('<I', code[11:15])[0]
                obj_va = struct.unpack('<I', code[26:30])[0]
                atexit_va = va + 35 + struct.unpack('<i', code[31:35])[0]
                entry = f'{va:x}'
                body = (f'  int *p = (int *){sym(new_va, "FUN")}({size});\n'
                        f'  p[0] = (int)p; p[1] = (int)p; p[2] = (int)p;\n'
                        f'  *(short *)(p + 3) = 0x101;\n'
                        f'  *(int **)&{sym(obj_va, "DAT")} = p;\n'
                        f'  {atexit_call(atexit_va, dtor_va)}\n')
            if body is None:
                continue
            src = f'void FUN_{entry}(void)\n{{\n{body}}}\n'
            rec = {'target': entry, 'entry': entry,
                   'name': 'FUN_' + entry, 'body_bytes': len(code),
                   'decompiled_c': src, 'decompiled': True,
                   'status': 'gap_init'}
            out.write(json.dumps(rec) + '\n')
            emitted += 1
    print(f'{emitted} gap-init records -> {OUT}')


if __name__ == '__main__':
    main()

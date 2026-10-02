#!/usr/bin/env python3
"""Recover SCOpImpl multi-base constructors with staged member EH states."""
import hashlib
import json
import re
import struct

from compile_event_factories import LIBRARY, emit_variant, funclet_jump_target
from compile_ghidra_cpp import ROOT
from classify_functions import DLL, function_bytes, section_map
from compare_compiled_ghidra import DISASSEMBLER

MEMBER8_CTOR = 0x11240650
ADDREF = 0x1123fce0
OBJ_COUNT = 'g_lSCObjCount'
BODY_SIZES = (278, 292)


def thunk_target(read, va):
    seen = set()
    while va not in seen:
        seen.add(va)
        code = read(va, 5)
        if len(code) != 5 or code[0] != 0xe9:
            return va
        va = (va + 5 + struct.unpack_from('<i', code, 1)[0]) & 0xffffffff
    raise ValueError('Cyclic linker jump')


def count(instructions, mnemonic, op_str):
    return sum(1 for i in instructions if i.mnemonic == mnemonic and i.op_str == op_str)


def lower(record, reference, base, sections):
    if record['body_bytes'] not in BODY_SIZES:
        return None
    text = record.get('decompiled_c', '')
    entry = record['entry']
    compact = re.sub(r'\s+', ' ', text)
    if text.count('thunk_FUN_11240650(') != 1 or text.count('thunk_FUN_1123fce0(') != 1:
        return None
    if compact.count('g_lSCObjCount = g_lSCObjCount + 1') != 2:
        return None
    if 'param_1[6] = param_2;' not in text or 'param_1 != ' in text:
        return None
    if 'param_2 != 0' not in re.sub(r'\s+', ' ', text):
        return None
    if '*(undefined2 *)(param_1 + 9) = 1000;' not in text:
        return None
    code = function_bytes(reference, int(entry, 16), record['body_bytes'], base, sections)
    instructions = list(DISASSEMBLER.disasm(code, int(entry, 16)))
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    calls = [thunk_target(read, int(i.op_str, 16))
             for i in instructions if i.mnemonic == 'call' and i.op_str.startswith('0x')]
    if calls != [MEMBER8_CTOR, ADDREF]:
        return None
    if [i.op_str for i in instructions if i.mnemonic == 'ret'] != ['4']:
        return None
    stores = [i for i in instructions if i.mnemonic == 'mov'
              and re.match(r'dword ptr \[(?:esi|edi|ebx)(?: \+ 0x[0-9a-f]+)?\], 0x[0-9a-f]+', i.op_str)]
    vtbls = [int(i.op_str.rsplit('0x', 1)[1], 16) for i in stores
             if int(i.op_str.rsplit('0x', 1)[1], 16) > 0x10000]
    expected = 10 if record['body_bytes'] == 292 else 8
    if len(vtbls) != expected:
        return None
    if record['body_bytes'] == 292:
        if not stores[-2].op_str.startswith('dword ptr [esi], 0x'):
            return None
        if not stores[-1].op_str.startswith('dword ptr [ebx], 0x'):
            return None
    vt = vtbls
    if sum(1 for i in instructions if i.mnemonic == 'inc'
           and i.op_str == 'dword ptr [0x121a0e68]') != 2:
        return None
    if count(instructions, 'xorps', 'xmm0, xmm0') != 1:
        return None
    bases = {}
    zero_offsets = []
    for i in instructions:
        if i.mnemonic == 'mov' and re.match(r'(edi|esi|ebx), ecx$', i.op_str) and 0 not in bases.values():
            bases[i.op_str.split(',')[0]] = 0
        m = re.match(r'(edi|esi|ebx), \[\w+ \+ (0x[0-9a-f]+|[0-9]+)\]$', i.op_str)
        if i.mnemonic == 'lea' and m and int(m.group(2), 0) in (8, 0x14):
            bases[i.op_str.split(',')[0]] = int(m.group(2), 0)
        m = re.match(r'dword ptr \[(\w+) \+ (0x[0-9a-f]+|[0-9]+)\], 0$', i.op_str)
        if i.mnemonic == 'mov' and m and m.group(1) in bases:
            zero_offsets.append(bases[m.group(1)] + int(m.group(2), 0))
    if sorted(zero_offsets) != [4, 0xc, 0x10, 0x1c, 0x20, 0x28, 0x2c, 0x34, 0x3c, 0x40, 0x44]:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'movq') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'mov'
           and i.op_str.startswith('word ptr ')) != 1:
        return None
    if count(instructions, 'mov', 'eax, 0x3e8') != 1:
        return None
    if count(instructions, 'test', 'ecx, ecx') != 1 or sum(1 for i in instructions if i.mnemonic == 'je') != 1:
        return None
    if count(instructions, 'add', 'esp, 4') != 1:
        return None
    if count(instructions, 'mov', 'ecx, dword ptr [ebp + 8]') != 1:
        return None
    if sum(1 for i in instructions if i.mnemonic == 'lea' and i.op_str == 'eax, [ecx + 4]') != 1:
        return None
    v0a, m8a, v0b, m8b, m14a, m14b, v30a, v30b = vt[:8]
    klass = 'NativeOpImpl_FUN_' + entry
    tail = ''
    if record['body_bytes'] == 292:
        v0c, m8c = vt[8], vt[9]
        tail = f'v0 = (void *)&DAT_{v0c:08x}; NativeOpMember8_thunk_FUN_101ba0c0::vptr = (void *)&DAT_{m8c:08x};\n'
    source = (
        f'{klass}::{klass}(void *param_2)\n'
        f'    : {klass}_vt(this), m14(param_2) {{\n'
        + tail + '}\n')
    return {**record, 'source': source, 'op_class': klass,
            'base_vtable': f'{v0a:08x}', 'vtables': vt,
            'derived_vtables': (v0b, m8b), 'm14_vtable': m14b}


def main():
    index = ROOT/'analysis/compiled-cpp-empty-tree-arguments-none-nontrivial-homes-ordered/compiled-index.tsv'
    proof = json.loads((ROOT/'analysis/recovery-msvc-tree-barrier-atomic-arity/summary.json').read_text())['variants'][0]
    if proof['exact_functions'] != 90 or hashlib.sha256(index.read_bytes()).hexdigest() != proof['index_sha256']:
        raise SystemExit('External event constructors lack the pinned ninety-function proof')
    reference = DLL.read_bytes()
    base, sections = section_map(reference)
    candidates = []
    for export in sorted(ROOT.glob('analysis/bulk*/**/*.jsonl')):
        for line in export.open():
            try:
                record = json.loads(line)
            except json.JSONDecodeError:
                if not line.endswith('\n'):
                    break
                raise
            if record.get('body_bytes') not in BODY_SIZES:
                continue
            candidate = lower(record, reference, base, sections)
            if candidate is not None:
                candidates.append(candidate)
    if not candidates:
        raise SystemExit('No op-impl constructor accepted')
    library = LIBRARY
    for va in sorted({va for r in candidates for va in r['vtables']} |
                     {int(r['base_vtable'], 16) for r in candidates}):
        library += f'extern unsigned int DAT_{va:08x};\n'
    library += ('#pragma warning(disable: 4355)\n'
                'extern unsigned int g_lSCObjCount;\n'
                'void __cdecl thunk_FUN_1123fce0(void *);\n'
                'int __cdecl thunk_FUN_1123fcd0(void *);\n'
                'struct NativeOpMember8V_thunk_FUN_11240650 { void *vptr; '
                'NativeOpMember8V_thunk_FUN_11240650(); ~NativeOpMember8V_thunk_FUN_11240650() {} };\n'
                'extern unsigned int DAT_1188eb3c;\n'
                'struct NativeOpMember8VD_thunk_FUN_11240850 : NativeOpMember8V_thunk_FUN_11240650 { '
                '~NativeOpMember8VD_thunk_FUN_11240850(); };\n'
                'struct NativeOpMember8_thunk_FUN_101ba0c0 : NativeOpMember8VD_thunk_FUN_11240850 { '
                '~NativeOpMember8_thunk_FUN_101ba0c0() { *(void *volatile *)&vptr = (void *)&DAT_1188206c; }'
                ' __forceinline NativeOpMember8_thunk_FUN_101ba0c0() { '
                '*(void *volatile *)&vptr = (void *)&DAT_1188206c; } };\n'
                'struct NativeOpMemberCItem { virtual void a(); virtual void b(); virtual void release(); };\n'
                'struct NativeOpMemberC_thunk_FUN_101b9eb0 { void *rep; NativeOpMemberCItem *next; ~NativeOpMemberC_thunk_FUN_101b9eb0(); '
                '__forceinline NativeOpMemberC_thunk_FUN_101b9eb0() { rep = 0; next = 0; } };\n'
                'NativeOpMemberC_thunk_FUN_101b9eb0::~NativeOpMemberC_thunk_FUN_101b9eb0() {\n'
                'NativeOpMemberCItem *n = next;\n'
                'if (n != 0) { rep = 0; next = 0; n->release(); }\n'
                '}\n'
                'struct NativeOpRepSub { void *p; ~NativeOpRepSub(); };\n'
                'struct NativeOpSmart14_thunk_FUN_101ba1b0 { NativeOpRepSub rep;\n'
                '    NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { rep.p = value; '
                'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); }\n'
                '    ~NativeOpSmart14_thunk_FUN_101ba1b0(); };\n'
                'struct NativeOpMember14V { void *vptr;\n'
                '    __forceinline NativeOpMember14V() { vptr = (void *)&DAT_1188207c; } };\n'
                'struct NativeOpS30 { void *vptr; void *f4;\n'
                '    __forceinline NativeOpS30() { vptr = (void *)&DAT_118820e4; f4 = 0; g_lSCObjCount++; } };\n'
                'struct NativeOpM30 : NativeOpS30 {\n'
                '    __forceinline NativeOpM30() { vptr = (void *)&DAT_11882120; } };\n'
                'struct NativeOpF38Base { unsigned int lo; unsigned int hi; };\n'
                'struct NativeOpF38 : NativeOpF38Base { NativeOpF38() : NativeOpF38Base{} { hi = 0; } };\n'
                'struct NativeOpTarget { virtual ~NativeOpTarget(); };\n'
                'NativeOpRepSub::~NativeOpRepSub() {\n'
                'void *v = p;\n'
                'if (v != 0) {\n'
                'if (thunk_FUN_1123fcd0((char *)v + 4) == 0)\n'
                'delete (NativeOpTarget *)v;\n'
                '}\n'
                '}\n')
    read = lambda va, size: function_bytes(reference, va, size, base, sections)
    evidence = {r['entry']: r for r in map(json.loads, (ROOT/'analysis/eh-lifetime-evidence.jsonl').open())}
    emitted_roots = set()
    for r in candidates:
        klass = r['op_class']
        resolved = funclet_jump_target(int(evidence[r['entry']]['metadata']['address'], 16), 0, read)
        if resolved is None:
            raise SystemExit(f'No base destructor funclet for {r["entry"]}')
        base_class = f'NativeOpImplBase_thunk_FUN_{resolved[1]:08x}_{r["entry"]}'
        r['base_class'] = base_class
        # Recover the two-stage base destruction: the derived dtor restores its
        # own vtable and decrements the object count, then the inlined root dtor
        # restores the root vtable. Pull both immediates out of the native body.
        dtor_body = read(resolved[1], 32)
        dtor_vtables = [int(i.op_str.rsplit('0x', 1)[1], 16)
                        for i in DISASSEMBLER.disasm(dtor_body, resolved[1])
                        if i.mnemonic == 'mov'
                        and re.match(r'dword ptr \[ecx\], 0x[0-9a-f]+', i.op_str)]
        if len(dtor_vtables) != 2:
            raise SystemExit(f'Unrecognized base destructor body at {resolved[1]:08x}')
        self_vtbl, root_vtbl = dtor_vtables
        root_class = f'NativeOpImplRoot_{resolved[1]:08x}'
        v0b, m8b = r['derived_vtables']
        if root_class not in emitted_roots:
            emitted_roots.add(root_class)
            library += (f'extern unsigned int DAT_{root_vtbl:08x};\n'
                        f'struct {root_class} {{ void *v0;\n'
                        f'~{root_class}() {{ v0 = (void *)&DAT_{root_vtbl:08x}; }} }};\n')
        library += (f'extern unsigned int DAT_{self_vtbl:08x};\n'
                    f'struct {base_class} : {root_class} {{ void *f4; ~{base_class}();\n'
                    f'__forceinline {base_class}() {{ v0 = (void *)&DAT_{r["base_vtable"]}; '
                    f'f4 = 0; g_lSCObjCount++; }} }};\n'
                    f'{base_class}::~{base_class}() {{ v0 = (void *)&DAT_{self_vtbl:08x}; '
                    f'g_lSCObjCount--; }};\n')
        library += (f'struct NativeOpMember14_{r["entry"]} : NativeOpMember14V {{'
                    f' NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;\n'
                    f'    __forceinline NativeOpMember14_{r["entry"]}(void *param)'
                    f' : smart(param) {{ f8 = 0;'
                    f' vptr = (void *)&DAT_{r["m14_vtable"]:08x}; }} }};\n')
        library += (f'struct {klass}_vt {{\n'
                    f'__forceinline {klass}_vt(void *self) {{ *(void **)self = (void *)&DAT_{v0b:08x}; '
                    f'*(void **)((char *)self + 8) = (void *)&DAT_{m8b:08x}; }} }};\n')
        library += (f'struct {klass} : {base_class}, NativeOpMember8_thunk_FUN_101ba0c0, {klass}_vt {{\n'
                    f'NativeOpMemberC_thunk_FUN_101b9eb0 fc; NativeOpMember14_{r["entry"]} m14;\n'
                    f'void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;\n'
                    f'NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;\n'
                    f'{klass}(void *param_2);\n}};\n')
    candidates = [{**r, 'abi_declarations': {'op_impl_library': library}} for r in candidates]
    roles = []
    for r in candidates:
        roles.append(('??1' + r['base_class'] + '@@QAE@XZ', r['entry'], 0))
        roles.append(('??1NativeOpMember8_thunk_FUN_101ba0c0@@QAE@XZ', r['entry'], 1))
        roles.append(('??1NativeOpMemberC_thunk_FUN_101b9eb0@@QAE@XZ', r['entry'], 2))
        roles.append(('??1NativeOpRepSub@@QAE@XZ', r['entry'], 3))
    emit_variant('op_impl_ctors', candidates, evidence, roles)


if __name__ == '__main__':
    main()

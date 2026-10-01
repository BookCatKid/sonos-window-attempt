#!/usr/bin/env python3
"""Emit constructor-scope shape hypotheses for pinned MSVC probing.

The op_impl_ctors and op_ref_ctors tranches need MSVC's inlined-member-ctor
EH scope: the construction-this spill repoint plus an arm before the member's
init body. Each variant isolates one source-level hypothesis; the focused
worker compiles them all and run_worker_matching-style comparison reports
which form reproduces the reference scope.
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
GENERATED = ROOT / 'src/generated/member_abi'
VARIANTS = ROOT / 'src/generated/ctor_scope_variants'
ANALYSIS = ROOT / 'analysis'


def library_for(source_path, entry):
    """Pull the emitted library decls covering one entry's class tower."""
    text = source_path.read_text()
    marker = f'// Reference entry {entry};'
    end = text.find(marker)
    if end < 0:
        raise SystemExit(f'{entry} missing from {source_path.name}')
    start = text.find('#pragma warning')
    if start < 0:
        start = text.find('extern unsigned int g_lSCObjCount')
    segment = text[start:end]
    # Shared declarations precede the first per-entry struct; each per-entry
    # struct block mentions the entry address in its name or vtable stores.
    shared_end = segment.find('struct NativeOpImplBase_')
    shared = segment[:shared_end]
    decls = [piece.strip() + '\n'
             for piece in re.split(r'(?=struct )', segment[shared_end:])
             if piece.startswith('struct ') and entry in piece]
    # Only the externs actually referenced survive.
    all_decls = shared + '\n'.join(decls)
    externs = '\n'.join(sorted(
        {f'extern unsigned int DAT_{m};'
         for m in set(re.findall(r'DAT_([0-9a-f]{8})', all_decls))}))
    return externs + '\n' + all_decls


def ctor_definition(source_path, entry):
    text = source_path.read_text()
    marker = f'// Reference entry {entry};'
    start = text.find(marker)
    body_start = text.find('\n', text.find('#line', start))
    end = text.find('// Reference entry', body_start)
    return text[body_start:end].strip()


def op_ref_variants():
    """m4 tracked-member shapes for entry 10687d70."""
    generated = (GENERATED / 'op_ref_ctors.cpp').read_text()
    definition = ctor_definition(GENERATED / 'op_ref_ctors.cpp', '10687d70')
    vtable = re.search(r'vptr = \(void \*\)&DAT_([0-9a-f]{8})', definition).group(1)
    base_vtable = re.search(
        r'NativeOpRefBase_FUN_10687d70\(\) \{ vptr = \(void \*\)&DAT_([0-9a-f]{8})',
        generated).group(1)
    library = (
        f'extern unsigned int DAT_{base_vtable};\n'
        f'extern unsigned int DAT_{vtable};\n'
        'void __cdecl thunk_FUN_1123fce0(void *);\n')
    base = ('struct NativeOpRefBase_FUN_10687d70 { void *vptr;\n'
            f'__forceinline NativeOpRefBase_FUN_10687d70() {{ vptr = (void *)&DAT_{base_vtable}; }} }};\n')
    ctor_tail = ('{\nm4.rep = param_2;\nif (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
                 f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n')
    # Variant declarations of the tracked member's constructor.
    m4_inline = ('struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
                 'NativeOpRefMember_thunk_FUN_101ba1b0(void *p) { rep = p; }\n'
                 '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n')
    m4_inline_addref = ('struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
                        'NativeOpRefMember_thunk_FUN_101ba1b0(void *p) { rep = p;\n'
                        'if (p != 0) thunk_FUN_1123fce0((char *)p + 4); }\n'
                        '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n')
    m4_outline_decl = ('struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
                       'NativeOpRefMember_thunk_FUN_101ba1b0(void *p);\n'
                       '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n')
    m4_outline_def = ('NativeOpRefMember_thunk_FUN_101ba1b0::NativeOpRefMember_thunk_FUN_101ba1b0(void *p) '
                      '{ rep = p; if (p != 0) thunk_FUN_1123fce0((char *)p + 4); }\n')
    m4_trivial = ('struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
                  '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n')
    klass = ('struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
             'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
             'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n')
    member_init = (
        'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
        '    : m4(param_2) {\nf8 = 0;\nvptr = (void *)&DAT_' + vtable + ';\n}\n')
    variants = {
        # control: current committed model — forceinline ctor holding both stores
        'op_ref_control': (
            m4_inline_addref.replace(
                'NativeOpRefMember_thunk_FUN_101ba1b0(void *p)',
                '__forceinline NativeOpRefMember_thunk_FUN_101ba1b0(void *p)'),
            member_init),
        # member ctor implicit-inline (in-class, no forceinline) holding rep+addref
        'op_ref_inline': (m4_inline_addref, member_init),
        # member ctor defined out-of-class — front-end call scope, backend inline
        'op_ref_outline': (m4_outline_decl, m4_outline_def + member_init),
        # trivial member init, stores in the outer body (af11ce0 minus value-init)
        'op_ref_default': (
            m4_trivial,
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            + ctor_tail),
        # member ctor stores rep only; addref in the outer body
        'op_ref_split': (
            m4_inline,
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\nif (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # user-provided empty member ctor: materialized scope repoints
        # construction-this, arm precedes the body's rep store
        'op_ref_m4_empty_ctor': (
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0() {}\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            + ctor_tail),
        # same empty ctor, explicitly value-initialized in the init list
        'op_ref_m4_empty_list': (
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0() {}\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4() ' + ctor_tail),
        # param-taking EMPTY ctor invoked via init list: the ctor invocation
        # materializes the member this-spill (repoint) while the body stays
        # empty so the arm still precedes the outer rep store
        'op_ref_m4_arg_ctor': (
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p) {}\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) ' + ctor_tail),
        # member ctor DECLARED only, defined out-of-class empty: the frontend
        # emits the ctor-call scope (lea this + spill repoint + arm) and the
        # backend inlines the empty body, leaving repoint + eax store
        'op_ref_m4_decl_empty': (
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p);\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0::NativeOpRefMember_thunk_FUN_101ba1b0(void *p) {}\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) ' + ctor_tail),
        # same but the ctor keeps a rep-store body; addref stays in outer body
        'op_ref_m4_decl_store': (
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p);\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0::NativeOpRefMember_thunk_FUN_101ba1b0(void *p) '
            '{ rep = p; }\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\nif (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
    }
    out = {}
    for name, (member, definition) in variants.items():
        out[name] = (library + base + member +
                     ('' if 'struct NativeOpRefCtor' in member else klass) +
                     '\n// Reference entry 10687d70; body size 114 bytes.\n'
                     '#line 1 "ENTRY_10687d70"\n' + definition)
    return out


def op_impl_variants():
    """smart nested-member scope shapes for entry 10687e80."""
    decls = library_for(GENERATED / 'op_impl_ctors.cpp', '10687e80')
    definition = ctor_definition(GENERATED / 'op_impl_ctors.cpp', '10687e80')
    smart_fi = ('struct NativeOpSmart14_thunk_FUN_101ba1b0 { void *p; ~NativeOpSmart14_thunk_FUN_101ba1b0();\n'
                '    __forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; '
                'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };')
    m14_fi = ('struct NativeOpMember14_10687e80 : NativeOpMember14V {'
              ' NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;\n'
              '    __forceinline NativeOpMember14_10687e80(void *param)\n'
              ' : smart(param) { f8 = 0; vptr = (void *)&DAT_118c62f8; } };')
    variants = {}
    # control: both forceinline (current)
    variants['op_impl_control'] = decls
    # smart's ctor implicit inline (in-class, no forceinline)
    variants['op_impl_smart_inline'] = decls.replace(
        '__forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value)',
        'NativeOpSmart14_thunk_FUN_101ba1b0(void *value)')
    # m14's ctor implicit inline
    variants['op_impl_m14_inline'] = decls.replace(
        '__forceinline NativeOpMember14_10687e80(void *param)',
        'NativeOpMember14_10687e80(void *param)')
    # neither forceinline
    variants['op_impl_both_inline'] = (
        variants['op_impl_smart_inline'].replace(
            '__forceinline NativeOpMember14_10687e80(void *param)',
            'NativeOpMember14_10687e80(void *param)'))
    # smart's ctor defined out-of-class: front-end call scope kept
    variants['op_impl_smart_outline'] = decls.replace(
        '    __forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; '
        'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };',
        '    NativeOpSmart14_thunk_FUN_101ba1b0(void *value); };\n'
        'NativeOpSmart14_thunk_FUN_101ba1b0::NativeOpSmart14_thunk_FUN_101ba1b0(void *value) '
        '{ p = value; if (value != 0) thunk_FUN_1123fce0((char *)value + 4); }')
    # m14's ctor defined out-of-class
    variants['op_impl_m14_outline'] = decls.replace(
        '    __forceinline NativeOpMember14_10687e80(void *param)\n'
        ' : smart(param) { f8 = 0; vptr = (void *)&DAT_118c62f8; } };',
        '    NativeOpMember14_10687e80(void *param); };\n'
        'NativeOpMember14_10687e80::NativeOpMember14_10687e80(void *param)\n'
        ' : smart(param) { f8 = 0; vptr = (void *)&DAT_118c62f8; }')
    # both defined out-of-class
    variants['op_impl_both_outline'] = (
        variants['op_impl_smart_outline'].replace(
            '    __forceinline NativeOpMember14_10687e80(void *param)\n'
            ' : smart(param) { f8 = 0; vptr = (void *)&DAT_118c62f8; } };',
            '    NativeOpMember14_10687e80(void *param); };\n'
            'NativeOpMember14_10687e80::NativeOpMember14_10687e80(void *param)\n'
            ' : smart(param) { f8 = 0; vptr = (void *)&DAT_118c62f8; }'))
    # smart gets a user-provided EMPTY ctor: its tracked scope materializes so
    # MSVC repoints construction-this and arms state3 before m14's body stores
    smart_empty = decls.replace(
        '    __forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; '
        'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };',
        '    NativeOpSmart14_thunk_FUN_101ba1b0() {} };').replace(
        ' : smart(param) { f8 = 0;',
        ' { smart.p = param; if (param != 0) thunk_FUN_1123fce0((char *)param + 4); f8 = 0;')
    variants['op_impl_smart_empty'] = smart_empty
    # same, plus f38 modeled as double-init to probe the xorps/movq store
    variants['op_impl_smart_empty_dbl'] = smart_empty.replace(
        'union NativeOpF38 { unsigned __int64 q; struct { unsigned int lo; unsigned int hi; } w; };',
        'union NativeOpF38 { double d; struct { unsigned int lo; unsigned int hi; } w; };')
    # smart ctor takes the arg but is EMPTY: the init-list invocation
    # materializes the nested construction-this repoint while the state arm
    # still precedes the smart.p store in m14's body
    smart_arg_empty = decls.replace(
        '    __forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; '
        'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };',
        '    NativeOpSmart14_thunk_FUN_101ba1b0(void *value) {} };').replace(
        ' : smart(param) { f8 = 0;',
        ' : smart(param) { smart.p = param; '
        'if (param != 0) thunk_FUN_1123fce0((char *)param + 4); f8 = 0;')
    variants['op_impl_smart_arg_empty'] = smart_arg_empty
    # smart ctor DECLARED in-class but defined out-of-line EMPTY: the frontend
    # emits the ctor-call scope (lea &smart + spill repoint + arm3) and the
    # backend inlines the empty body, leaving the nested repoint + [eax] store
    variants['op_impl_smart_decl_empty'] = decls.replace(
        '    __forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; '
        'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };',
        '    NativeOpSmart14_thunk_FUN_101ba1b0(void *value); };\n'
        'NativeOpSmart14_thunk_FUN_101ba1b0::NativeOpSmart14_thunk_FUN_101ba1b0(void *value) {}').replace(
        ' : smart(param) { f8 = 0;',
        ' : smart(param) { smart.p = param; '
        'if (param != 0) thunk_FUN_1123fce0((char *)param + 4); f8 = 0;')
    header = '// Constructor-scope hypothesis variants for entry 10687e80.\n'
    out = {}
    for name, library in variants.items():
        body = definition
        if name.endswith('_dbl'):
            body = body.replace('f38.q = 0;', 'f38.d = 0.0;')
        out[name] = (header + library +
                     '\n// Reference entry 10687e80; body size 278 bytes.\n'
                     '#line 1 "ENTRY_10687e80"\n' + body + '\n')
    return out


def main():
    VARIANTS.mkdir(parents=True, exist_ok=True)
    manifest = []
    for entry, variants, inventory_dir in (
            ('10687d70', op_ref_variants(), 'compiled-cpp-op-ref-ctors'),
            ('10687e80', op_impl_variants(), 'compiled-cpp-op-impl-ctors')):
        inventory = json.loads(
            (ANALYSIS / inventory_dir / 'reference-eh-inventory.json').read_text())
        row = [r for r in inventory if r['entry'] == entry]
        index_row = [line for line in
                     (ANALYSIS / inventory_dir / 'compiled-index.tsv').read_text().splitlines()
                     if line.startswith(entry)]
        for name, source in variants.items():
            (VARIANTS / (name + '.cpp')).write_text(source)
            directory = ANALYSIS / ('ctor-scope-' + name.replace('_', '-'))
            directory.mkdir(parents=True, exist_ok=True)
            (directory / 'ghidra_recovered.cpp').write_text(source)
            (directory / 'compiled-index.tsv').write_text(
                'entry\tname\treference_body_bytes\n' + '\n'.join(index_row) + '\n')
            (directory / 'reference-eh-inventory.json').write_text(json.dumps(row))
            manifest.append({'object': name + '_reference_flags',
                             'directory': str(directory.relative_to(ROOT))})
    (VARIANTS / 'tranches.json').write_text(json.dumps(manifest, indent=2) + '\n')
    print(f'{len(manifest)} ctor-scope variants emitted')


if __name__ == '__main__':
    main()

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
        'inline void *operator new(unsigned int, void *receiver) noexcept { return receiver; }\n'
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
        # placement-new into the member: binds eax=&m4, MSVC repoints the
        # construction-this spill so the funclet reads [ebp-0x10] bare
        'op_ref_m4_place': (
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0() {}\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '{\nNativeOpRefMember_thunk_FUN_101ba1b0 *pm =\n'
            '    new (&m4) NativeOpRefMember_thunk_FUN_101ba1b0();\n'
            'pm->rep = param_2;\nif (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # m4 ctor defined AFTER K's ctor in the TU: the frontend lowers the
        # init-list invocation as a call scope (lea &m4 + spill repoint + arm)
        # because the callee body is not yet visible; the backend inlines it
        # later, leaving the repoint + [eax] rep store
        'op_ref_m4_late': (
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p);\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            + klass,
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\nf8 = 0;\nvptr = (void *)&DAT_' + vtable + ';\n}\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0::NativeOpRefMember_thunk_FUN_101ba1b0(void *p) '
            '{ rep = p;\nif (p != 0) thunk_FUN_1123fce0((char *)p + 4); }\n'),
        # same late-definition trick but the member ctor only stores rep;
        # the addref call stays in K's body after the construction scope
        'op_ref_m4_late_split': (
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p);\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            + klass,
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\nif (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            'f8 = 0;\nvptr = (void *)&DAT_' + vtable + ';\n}\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0::NativeOpRefMember_thunk_FUN_101ba1b0(void *p) '
            '{ rep = p; }\n'),
        # m4 as a 1-ELEMENT ARRAY member: MSVC tracks array-element
        # construction through the dynamic construction-this spill —
        # lea eax,[esi+4]; mov [ebp-0x10],eax — and the funclet reads the
        # spill bare because the element address is not a fixed offset
        'op_ref_m4_array': (
            m4_inline +
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4[1]; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4{param_2} {\nif (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            'f8 = 0;\nvptr = (void *)&DAT_' + vtable + ';\n}\n'),
        # m4 nested inside a sub-struct member: the nested construction scope
        # repoints construction-this to &sub.m4
        'op_ref_m4_nested': (
            m4_inline +
            'struct NativeOpRefSub_FUN_10687d70 { NativeOpRefMember_thunk_FUN_101ba1b0 m4;\n'
            'NativeOpRefSub_FUN_10687d70(void *p) : m4(p) {} };\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefSub_FUN_10687d70 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\nif (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            'f8 = 0;\nvptr = (void *)&DAT_' + vtable + ';\n}\n'),
        # m4 as a SECOND BASE: MSVC gives each base its own construction scope —
        # repoint [ebp-0x10]=&m4, arm0 before the base ctor body stores rep
        'op_ref_m4_base': (
            m4_inline +
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70,'
            ' NativeOpRefMember_thunk_FUN_101ba1b0 {\nvoid *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : NativeOpRefMember_thunk_FUN_101ba1b0(param_2) {\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
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
    # smart placement-newed inside m14's body: the new-expression's &smart is
    # materialized in eax, MSVC repoints the construction spill to it (the
    # funclet reads [ebp-0x14] bare), arms state3, and the ctor body stores
    # smart.p through eax
    variants['op_impl_smart_place'] = decls.replace(
        '    __forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; '
        'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };',
        '    NativeOpSmart14_thunk_FUN_101ba1b0() {}\n'
        '    NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; '
        'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };').replace(
        ' : smart(param) { f8 = 0;',
        ' {\nNativeOpSmart14_thunk_FUN_101ba1b0 *ps = new (&smart) '
        'NativeOpSmart14_thunk_FUN_101ba1b0(param);\n(void)ps; f8 = 0;')
    # smart as a SECOND BASE of m14: MSVC emits a construction scope for each
    # base — repointing the construction-this spill to &base and arming the
    # state before the inlined base ctor body stores through eax
    variants['op_impl_smart_base'] = decls.replace(
        'struct NativeOpMember14_10687e80 : NativeOpMember14V {'
        ' NativeOpSmart14_thunk_FUN_101ba1b0 smart; void *f8;',
        'struct NativeOpMember14_10687e80 : NativeOpMember14V,'
        ' NativeOpSmart14_thunk_FUN_101ba1b0 { void *f8;').replace(
        ' : smart(param) {',
        ' : NativeOpSmart14_thunk_FUN_101ba1b0(param) {')
    # smart as a 1-ELEMENT ARRAY member of m14: MSVC tracks array-element
    # construction via the dynamic construction-this spill — emits
    # lea eax,[esi+4]; mov [ebp-0x14],eax — and the funclet reads it bare
    variants['op_impl_smart_array'] = decls.replace(
        ' NativeOpSmart14_thunk_FUN_101ba1b0 smart;',
        ' NativeOpSmart14_thunk_FUN_101ba1b0 smart[1];').replace(
        '    __forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; '
        'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };',
        '    NativeOpSmart14_thunk_FUN_101ba1b0() {} };').replace(
        ' : smart(param) { f8 = 0;',
        ' { smart[0].p = param; if (param != 0) thunk_FUN_1123fce0((char *)param + 4); f8 = 0;')
    header = ('// Constructor-scope hypothesis variants for entry 10687e80.\n'
              'inline void *operator new(unsigned int, void *receiver) noexcept { return receiver; }\n')
    out = {}
    for name, library in variants.items():
        body = definition
        if name.endswith('_dbl'):
            body = body.replace('f38.q = 0;', 'f38.d = 0.0;')
        out[name] = (header + library +
                     '\n// Reference entry 10687e80; body size 278 bytes.\n'
                     '#line 1 "ENTRY_10687e80"\n' + body + '\n')
    return out


def named_event_variants():
    """esi=eax constructor-result reuse hypotheses for entry 10e026f0."""
    generated = (GENERATED / 'named_event_callbacks.cpp').read_text()
    prefix = generated[:generated.find('// Reference entry')]
    ctor_decl = ('struct NativeNamedEvent_FUN_10df9440 : Event_thunk_FUN_10def0d0 {'
                 ' NativeNamedEvent_FUN_10df9440(); };\n')
    assert ctor_decl in prefix
    tail = ('((NativeEventProperties *)pe->representation.properties)->slot('
            'RecoveredString_FUN_1008c50b("opResult"), arg);\n'
            '((NativeEventDispatcher *)((char *)this - 0x10))'
            '->thunk_FUN_10df15a0(pe);\n}\n')
    variants = {
        # init-style member returning this: pe binds to the call's eax result
        'named_event_memberinit': (
            ctor_decl.replace('NativeNamedEvent_FUN_10df9440();',
                              'NativeNamedEvent_FUN_10df9440 *thunk_FUN_10df9440();'),
            'NativeNamedEvent_FUN_10df9440 event;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = event.thunk_FUN_10df9440();\n'),
        # no pointer alias at all: MSVC promotes &event to esi and reuses the
        # ctor's eax return (mov esi,eax) — arm lands lazily after the call
        'named_event_direct': (
            ctor_decl,
            'NativeNamedEvent_FUN_10df9440 event;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = &event;\n'),
        # tracked base-typed buffer + placement-new of the derived event:
        # the new-expression binds esi=eax while the funclet covers the buffer
        'named_event_placement_base': (
            ctor_decl,
            'Event_thunk_FUN_10def0d0 event;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = (NativeNamedEvent_FUN_10df9440 *)\n'
            '    new (&event) NativeNamedEvent_FUN_10df9440();\n'),
        # raw union storage + placement-new + explicit dtor: isolates whether
        # MSVC emits the construction-state funclet for a placement object
        'named_event_placement_union': (
            ctor_decl,
            'union NativeEventBuf { char b[24]; NativeNamedEvent_FUN_10df9440 e;\n'
            'NativeEventBuf() {} ~NativeEventBuf() {} } u;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = (NativeNamedEvent_FUN_10df9440 *)\n'
            '    new (&u.e) NativeNamedEvent_FUN_10df9440();\n'),
        # const-ref bound temporary: MSVC materializes the temp through the
        # ctor's eax result (mov esi,eax) and the temp stays EH-tracked so
        # the state0 funclet destroys [ebp-0x28]
        'named_event_ref_temp': (
            ctor_decl,
            'const NativeNamedEvent_FUN_10df9440 &event = '
            'NativeNamedEvent_FUN_10df9440();\n'),
        # rvalue-ref bound temp variant
        'named_event_rref_temp': (
            ctor_decl,
            'NativeNamedEvent_FUN_10df9440 &&event = '
            'NativeNamedEvent_FUN_10df9440();\n'),
    }
    out = {}
    for name, (decl, opening) in variants.items():
        library = prefix.replace(ctor_decl, decl, 1)
        src = (library +
               '\n// Reference entry 10e026f0; body size 149 bytes.\n'
               '#line 1 "ENTRY_10e026f0"\n'
               'void NativeNamedEventCallback::FUN_10e026f0(unsigned int arg) {\n'
               + opening + tail)
        if name.endswith('_temp'):
            src = (src.replace('pe->representation', 'event.representation')
                   .replace('thunk_FUN_10df15a0(pe)',
                            'thunk_FUN_10df15a0('
                            '(NativeNamedEvent_FUN_10df9440 *)&event)'))
        if name == 'named_event_direct':
            src = (src.replace('NativeNamedEvent_FUN_10df9440 *pe = &event;\n', '')
                   .replace('pe->representation', 'event.representation')
                   .replace('thunk_FUN_10df15a0(pe)',
                            'thunk_FUN_10df15a0(&event)'))
        out[name] = src
        if name == 'named_event_placement_union':
            out[name] = out[name].replace(
                '->thunk_FUN_10df15a0(pe);\n}\n',
                '->thunk_FUN_10df15a0(pe);\n'
                'u.e.Event_thunk_FUN_10def0d0::~Event_thunk_FUN_10def0d0();\n}\n')
    return out


def wiz_state_variants():
    """sret-temp flag-word hypotheses for entry 1061e8b0."""
    generated = (GENERATED / 'wiz_state_callbacks.cpp').read_text()
    prefix = generated[:generated.find('// Reference entry')]
    source_marker = 'NativeWizState_FUN_1061e8b0::NativeWizState_FUN_1061e8b0(void *arg) {'
    # the two trailing ops after the sret query call differ per variant
    tail_common = ('{ RecoveredString_FUN_1008c50b name("SCSubmitDiagsWizardDonePage");\n'
                   'thunk_FUN_106de0c0(&name, arg); }\n'
                   'vftable = &DAT_118bea44;\n')
    tail_end = ('vftable = &DAT_118bea58;\n'
                'DAT_121a2244 = (unsigned int)this;\n}\n')
    variants = {
        # control: bare temporary form (current tranche model)
        'wiz_temp_current': tail_common + 'thunk_FUN_106dfa00().endsWith("Page");\n',
        # named local initialized by sret — MSVC marks it flag-constructed
        'wiz_named_sret': tail_common + (
            'RecoveredString_FUN_1008c50b s2 = thunk_FUN_106dfa00();\n'
            's2.endsWith("Page");\n'),
        # placement-new into the dead scalar param slot: callee constructs
        # directly into arg storage via copy-elided sret
        'wiz_placement_param': tail_common + (
            'RecoveredString_FUN_1008c50b *pa = new (&arg) '
            'RecoveredString_FUN_1008c50b(thunk_FUN_106dfa00());\n'
            'pa->endsWith("Page");\n'
            'pa->~RecoveredString_FUN_1008c50b();\n'),
        # condition-scoped temporary
        'wiz_if_temp': tail_common + (
            'if (thunk_FUN_106dfa00().endsWith("Page")) { }\n'),
    }
    out = {}
    for name, body in variants.items():
        out[name] = (prefix +
                     '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
                     '#line 1 "ENTRY_1061e8b0"\n'
                     + source_marker + '\n' + body + tail_end)
    # out-param construction: s2 is uninitialized at decl, helper constructs
    # into &s2 and MSVC emits the construction flag plus flag-gated funclet;
    # thunk_FUN_106dfa00 becomes a member taking an out pointer
    sret_type = ('struct NativeWizSret { unsigned int rep;\n'
                 '~NativeWizSret() noexcept { ((SCStr *)this)->int_release(); rep = 0; }\n'
                 'bool endsWith(const char *suffix) const; };\n')
    old_klass = ('struct NativeWizState_FUN_1061e8b0 : NativeWizDtorBase_thunk_FUN_106de7d0 { void *vftable; ~NativeWizState_FUN_1061e8b0();\n'
                 'void thunk_FUN_106de0c0(RecoveredString_FUN_1008c50b *, void *);\n'
                 'RecoveredString_FUN_1008c50b thunk_FUN_106dfa00();\n'
                 'NativeWizState_FUN_1061e8b0(void *); };\n')
    klass = old_klass.replace('RecoveredString_FUN_1008c50b thunk_FUN_106dfa00();',
                              'NativeWizSret *thunk_FUN_106dfa00(NativeWizSret *);')
    assert old_klass in prefix
    out['wiz_outparam'] = (
        prefix.replace(old_klass, sret_type + klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'NativeWizSret s2;\n'
        'thunk_FUN_106dfa00(&s2)->endsWith("Page");\n' + tail_end)
    return out


def event_copier_variants():
    """ctor-result eax reuse hypotheses for entry 10df9390."""
    generated = (GENERATED / 'event_copier_callbacks.cpp').read_text()
    prefix = generated[:generated.find('// Reference entry')]
    sig = 'NativeCopierOutput *NativeCopierOutput::FUN_10df9390() {'
    head = 'NativeCopierOutput * volatile self = this;\n'
    variants = {
        # control: named locals (current tranche model)
        'copier_named': head + (
            'NativeCopierSource_FUN_10df9440 a;\n'
            'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
            'NativeCopierEvent_FUN_10df9510 e;\n'
            'e.thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # const-ref bound temporary source: MSVC pushes the ctor eax result
        'copier_ref_temp': head + (
            'const NativeCopierSource_FUN_10df9440 &a = NativeCopierSource_FUN_10df9440();\n'
            'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
            'NativeCopierEvent_FUN_10df9510 e;\n'
            'e.thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # temporary receiver: Event().thunk binds ecx to the ctor eax result
        'copier_temp_recv': head + (
            'NativeCopierSource_FUN_10df9440 a;\n'
            'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # both: ref-bound source temp + temporary receiver
        'copier_both_temp': head + (
            'const NativeCopierSource_FUN_10df9440 &a = NativeCopierSource_FUN_10df9440();\n'
            'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
    }
    out = {}
    for name, body in variants.items():
        out[name] = (prefix +
                     '\n// Reference entry 10df9390; body size 137 bytes.\n'
                     '#line 1 "ENTRY_10df9390"\n' + sig + '\n' + body + '}\n')
    return out


def delayed_variants():
    """param-reload hypotheses for entry 107fef90 (native reloads [ebp+8])."""
    generated = (GENERATED / 'delayed_event_callbacks.cpp').read_text()
    prefix = generated[:generated.find('// Reference entry')]
    decl = 'void FUN_107fef90(NativeDelayedDispatcher *);'
    body1 = ('if (dispatcher->thunk_FUN_10def450(NativeDelayedEvent_FUN_10dfbb10()))'
             ' { thunk_FUN_10ebbab0(16456); return; }')
    body2 = ('if (dispatcher->thunk_FUN_10def490(NativeFallbackEvent_FUN_10dfcab0())) {\n'
             '((NativeFallbackResult_10c *)thunk_FUN_10eb41b0())->flag = 1;\n}')
    variants = {
        # control: plain param
        'delayed_plain': ('NativeDelayedCallback::FUN_107fef90(NativeDelayedDispatcher *dispatcher)',
                          decl, body1 + '\n' + body2),
        # volatile param slot: forces a fresh [ebp+8] read per use
        'delayed_volatile_param': (
            'NativeDelayedCallback::FUN_107fef90(NativeDelayedDispatcher * volatile dispatcher)',
            'void FUN_107fef90(NativeDelayedDispatcher * volatile);',
            body1 + '\n' + body2),
        # volatile lvalue read of the param at each use site (old form)
        'delayed_volatile_read': (
            'NativeDelayedCallback::FUN_107fef90(NativeDelayedDispatcher *dispatcher)',
            decl,
            ('if ((*(NativeDelayedDispatcher * volatile *)&dispatcher)'
             '->thunk_FUN_10def450(NativeDelayedEvent_FUN_10dfbb10()))'
             ' { thunk_FUN_10ebbab0(16456); return; }\n'
             'if ((*(NativeDelayedDispatcher * volatile *)&dispatcher)'
             '->thunk_FUN_10def490(NativeFallbackEvent_FUN_10dfcab0())) {\n'
             '((NativeFallbackResult_10c *)thunk_FUN_10eb41b0())->flag = 1;\n}')),
        # param address escapes: MSVC may stop proving the slot unmodified
        'delayed_addr_taken': (
            'NativeDelayedCallback::FUN_107fef90(NativeDelayedDispatcher *dispatcher)',
            decl,
            'NativeDelayedDispatcher **slot = &dispatcher;\n(void)slot;\n' + body1 + '\n' + body2),
        # favor-size pragma: MSVC reloads the param instead of spending edi
        'delayed_os': (
            'NativeDelayedCallback::FUN_107fef90(NativeDelayedDispatcher *dispatcher)',
            decl,
            body1 + '\n' + body2),
        # global-opt off: MSVC cannot CSE the param load across the branches
        'delayed_barrier': (
            'NativeDelayedCallback::FUN_107fef90(NativeDelayedDispatcher *dispatcher)',
            decl,
            body1 + '\n' + body2),
    }
    pragma = {'delayed_os': '#pragma optimize("s", on)\n',
              'delayed_barrier': '#pragma optimize("g", off)\n'}
    out = {}
    for name, (sig_tail, decl_repl, body) in variants.items():
        src = prefix.replace(decl, decl_repl)
        out[name] = (src +
                     '\n// Reference entry 107fef90; body size 203 bytes.\n'
                     '#line 1 "ENTRY_107fef90"\n' + pragma.get(name, '') +
                     'void ' + sig_tail + ' {\n' + body + '\n}\n'
                     + ('#pragma optimize("", on)\n' if name in pragma else ''))
    return out


def main():
    VARIANTS.mkdir(parents=True, exist_ok=True)
    manifest = []
    for entry, variants, inventory_dir in (
            ('10687d70', op_ref_variants(), 'compiled-cpp-op-ref-ctors'),
            ('10687e80', op_impl_variants(), 'compiled-cpp-op-impl-ctors'),
            ('10e026f0', named_event_variants(),
             'compiled-cpp-named-event-callbacks'),
            ('1061e8b0', wiz_state_variants(),
             'compiled-cpp-wiz-state-callbacks'),
            ('10df9390', event_copier_variants(),
             'compiled-cpp-event-copier-callbacks'),
            ('107fef90', delayed_variants(),
             'compiled-cpp-delayed-event-callbacks')):
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

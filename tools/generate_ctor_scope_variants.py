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
        'void __cdecl thunk_FUN_1123fce0(void *);\n'
        'int __cdecl thunk_FUN_1123fcd0(void *);\n')
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
        # out-of-class member ctor {rep=p} + addref as a separate call after:
        # the frontend lowers the member-init as a call scope (lea &m4 +
        # spill repoint + arm — not FE-spliceable), the backend inlines the
        # body, and the addref call runs while m4 is alive so the funclet
        # must read the construction-this spill
        'op_ref_outline_split': (
            m4_outline_decl,
            'NativeOpRefMember_thunk_FUN_101ba1b0::NativeOpRefMember_thunk_FUN_101ba1b0(void *p) '
            '{ rep = p; }\n' +
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
        # const member: MSVC must route initialization through the ctor
        # invocation — the construction scope may keep its this-spill repoint
        'op_ref_m4_const': (
            m4_inline +
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'const NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\nif (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            'f8 = 0;\nvptr = (void *)&DAT_' + vtable + ';\n}\n'),
        # member ctor marked noexcept(false): the throwing ctor forces a real
        # construction scope (repoint + arm) around its inlined body
        'op_ref_m4_noexcept': (
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p) noexcept(false) { rep = p; }\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            + klass,
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
        # K has a virtual base: member tracking routes through the vbtable so
        # member addresses are materialized into the frame — the funclet can
        # no longer assume this+off and reads the spilled address bare
        'op_ref_m4_vbase': (
            'struct NativeOpRefVBase { void *vb; NativeOpRefVBase();\n'
            '~NativeOpRefVBase(); };\n' +
            m4_inline +
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70,'
            ' virtual NativeOpRefVBase {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\nif (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # delegating ctor: the delegate target's member tracking uses the
        # construction-this slot which the body then repoints for its stores
        'op_ref_m4_delegate': (
            m4_inline + klass.replace(
                'NativeOpRefCtor_FUN_10687d70(void *param_2);',
                'NativeOpRefCtor_FUN_10687d70();\n'
                'NativeOpRefCtor_FUN_10687d70(void *param_2);'),
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70()\n'
            '    : m4(0) {\nf8 = 0;\nvptr = (void *)&DAT_' + vtable + ';\n}\n'
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : NativeOpRefCtor_FUN_10687d70() {\nm4.rep = param_2;\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n}\n'),
        # function-try-block ctor: member-init runs inside a try region whose
        # funclet destroys via the materialized member address
        'op_ref_m4_functry': (
            m4_inline + klass,
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    try : m4(param_2) {\nif (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}} catch (...) {{ throw; }}\n'),
        # a second tracked member BEFORE m4: MSVC may switch to construction-
        # this tracking once multiple member scopes exist in one ctor
        'op_ref_m4_two_members': (
            m4_inline +
            'struct NativeOpRefM0 { void *x; NativeOpRefM0();\n~NativeOpRefM0(); };\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefM0 m0; NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m0(), m4(param_2) {\nif (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # member-init arg is a throwing temp: MSVC materializes &m4 before the
        # arg evaluation, spilling the construction target into the frame
        'op_ref_m4_argtemp': (
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p) { rep = p; }\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            'struct NativeOpRefArg { void *v; NativeOpRefArg(void *p) : v(p) {}\n'
            '~NativeOpRefArg(); };\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(NativeOpRefArg(param_2).v) {\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # m4 inside an anonymous union: union-member inits lower through
        # placement-style tracking — MSVC materializes the member address and
        # the funclet reads the spilled address bare
        'op_ref_m4_union': (
            m4_inline +
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'union { NativeOpRefMember_thunk_FUN_101ba1b0 m4; };\n'
            'void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\nif (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # NSDMI: `M4 m4 = M4()` default member init in-class — the ctor body
        # then assigns rep; the NSDMI scope may keep its materialized address
        'op_ref_m4_nsdmi': (
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0() { rep = 0; }\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4 = '
            'NativeOpRefMember_thunk_FUN_101ba1b0();\n'
            'void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            + ctor_tail),
        # member-init arg is a CALL: &m4 must be materialized before arg
        # evaluation (calls clobber ecx/eax) so the init-target address spills
        # and the member funclet reads the spilled address bare
        'op_ref_m4_callarg': (
            m4_inline +
            'extern void * __cdecl adjust_FUN(void *);\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(adjust_FUN(param_2)) {\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # member-init arg through a deref'd pointer param
        'op_ref_m4_derefarg': (
            m4_inline +
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void **param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void **param_2)\n'
            '    : m4(*param_2) {\n'
            'if (*param_2) thunk_FUN_1123fce0(*(char **)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # member-init arg is a conditional expression: the ?: value forces
        # MSVC to compute &m4 before evaluating the branch
        'op_ref_m4_condarg': (
            m4_inline +
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2 ? param_2 : (void *)0) {\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # member-init arg is a comma expression: MSVC materializes the init
        # target before evaluating the comma's left side
        'op_ref_m4_commaarg': (
            m4_inline +
            'extern void * __cdecl adjust_FUN(void *);\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4((adjust_FUN(param_2), param_2)) {\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # m4 is a member of the BASE Mid: K(p) : Mid(p) inlines Mid's ctor
        # whose own member-init m4(p) repoints the construction-this slot —
        # the funclet then reads the spilled member address bare
        'op_ref_m4_inbase': (
            m4_inline +
            'struct NativeOpRefMid_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4;\n'
            'NativeOpRefMid_FUN_10687d70(void *p) : m4(p) {} };\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefMid_FUN_10687d70 {\n'
            'void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : NativeOpRefMid_FUN_10687d70(param_2) {\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # same but Mid's ctor is forceinline — different inlining phase
        'op_ref_m4_inbase_fi': (
            m4_inline +
            'struct NativeOpRefMid_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4;\n'
            '__forceinline NativeOpRefMid_FUN_10687d70(void *p) : m4(p) {} };\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefMid_FUN_10687d70 {\n'
            'void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : NativeOpRefMid_FUN_10687d70(param_2) {\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # same but Mid's ctor is out-of-class: the base-init is a real call
        # scope at FE time, inlined by the backend — construction-this slot
        'op_ref_m4_inbase_outline': (
            m4_inline +
            'struct NativeOpRefMid_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4;\n'
            'NativeOpRefMid_FUN_10687d70(void *p); };\n'
            'NativeOpRefMid_FUN_10687d70::NativeOpRefMid_FUN_10687d70(void *p) : m4(p) {}\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefMid_FUN_10687d70 {\n'
            'void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : NativeOpRefMid_FUN_10687d70(param_2) {\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # M4's ctor itself uses a member-init list : rep(p) — a nested
        # member-init scope inside the inlined member ctor is what repoints
        # the construction-this slot to &m4
        'op_ref_m4_initlist': (
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { void *rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p) : rep(p) {}\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # M4 has a class-typed sub-member Sub{p}: M4(p):rep(p) invokes a real
        # member-init ctor call for rep — the inner construction scope uses
        # the shared ctor-this slot and leaves it pointing at &m4
        'op_ref_m4_submember': (
            'struct NativeOpRefSub { void *p; NativeOpRefSub(void *x);\n'
            '~NativeOpRefSub(); };\n'
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { NativeOpRefSub rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p);\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0::NativeOpRefMember_thunk_FUN_101ba1b0(void *p)\n'
            '    : rep(p) {}\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # Sub's ctor is trivial-inline (p=x store) but ~Sub is real: M4's
        # ctor inlines fully into K's ctor while the rep member-init scope
        # still needs the construction-this repoint for its unwind entry
        'op_ref_m4_subtrivial': (
            'struct NativeOpRefSub { void *p; NativeOpRefSub(void *x) : p(x) {}\n'
            '~NativeOpRefSub(); };\n'
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { NativeOpRefSub rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p) : rep(p) {}\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # addref inside M4's own ctor body: rep is built, then a throwing call
        # forces a real unwind scope inside M4's inlined ctor — the scope's
        # construction-this points at &m4 and the funclet reads it bare
        'op_ref_m4_sub_addref': (
            'struct NativeOpRefSub { void *p; NativeOpRefSub(void *x) : p(x) {}\n'
            '~NativeOpRefSub(); };\n'
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { NativeOpRefSub rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p) : rep(p) {\n'
            'if (p) thunk_FUN_1123fce0((char *)p + 4); }\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # forceinline M4's call-containing ctor: the rep member-init call is
        # folded by the backend inside an already-armed construction scope
        'op_ref_m4_sub_fi': (
            'struct NativeOpRefSub { void *p; NativeOpRefSub(void *x);\n'
            '~NativeOpRefSub(); };\n'
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { NativeOpRefSub rep;\n'
            '__forceinline NativeOpRefMember_thunk_FUN_101ba1b0(void *p) : rep(p) {}\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # M4's ctor default-init's rep then stores through it in the body:
        # the body store runs inside the armed member-construction state
        'op_ref_m4_subbody': (
            'struct NativeOpRefSub { void *p; NativeOpRefSub();\n'
            '~NativeOpRefSub(); };\n'
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { NativeOpRefSub rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p) : rep() { rep.p = p; }\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\n'
            'if (param_2) thunk_FUN_1123fce0((char *)param_2 + 4);\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # rep has no user ctor (implicit default-init is trivial); M4's ctor
        # body does the store + addref — the whole body runs inside M4's
        # armed construction scope → arm lands BEFORE the rep store
        'op_ref_m4_body_store': (
            'struct NativeOpRefSub { void *p; ~NativeOpRefSub(); };\n'
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { NativeOpRefSub rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p) { rep.p = p;\n'
            'if (p) thunk_FUN_1123fce0((char *)p + 4); }\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # body_store plus the real ~Sub definition (release+delete body
        # recovered from native 0x101ba1b0): tests whether a defined member
        # dtor keeps the repoint + bare funclet instead of inlining
        'op_ref_m4_body_store_dtordef': (
            'struct NativeOpRefSub { void *p; ~NativeOpRefSub(); };\n'
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { NativeOpRefSub rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p) { rep.p = p;\n'
            'if (p) thunk_FUN_1123fce0((char *)p + 4); }\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            'struct NativeOpRefTarget { virtual ~NativeOpRefTarget(); };\n'
            'NativeOpRefSub::~NativeOpRefSub() {\n'
            'void *v = p;\n'
            'if (v != 0) {\n'
            'if (thunk_FUN_1123fcd0((char *)v + 4) == 0)\n'
            'delete (NativeOpRefTarget *)v;\n'
            '}\n'
            '}\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\n'
            f'f8 = 0;\nvptr = (void *)&DAT_{vtable};\n}}\n'),
        # same but addref back in K's body — isolates whether the armed
        # scope covers M4's body store alone
        'op_ref_m4_body_only': (
            'struct NativeOpRefSub { void *p; ~NativeOpRefSub(); };\n'
            'struct NativeOpRefMember_thunk_FUN_101ba1b0 { NativeOpRefSub rep;\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0(void *p) { rep.p = p; }\n'
            '~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
            'struct NativeOpRefCtor_FUN_10687d70 : NativeOpRefBase_FUN_10687d70 {\n'
            'NativeOpRefMember_thunk_FUN_101ba1b0 m4; void *f8;\n'
            'NativeOpRefCtor_FUN_10687d70(void *param_2); };\n',
            'NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)\n'
            '    : m4(param_2) {\n'
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
    # smart wraps a Sub submember whose store happens inside smart's ctor
    # body: the submember-tracking scope is what repoints the shared
    # construction-object slot to &smart when member14 inlines
    variants['op_impl_smart_nestedrep'] = decls.replace(
        'struct NativeOpSmart14_thunk_FUN_101ba1b0 { void *p; ~NativeOpSmart14_thunk_FUN_101ba1b0();\n'
        '    __forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; '
        'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };',
        'struct NativeOpRepSub { void *p; ~NativeOpRepSub(); };\n'
        'struct NativeOpSmart14_thunk_FUN_101ba1b0 { NativeOpRepSub rep;\n'
        '    NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { rep.p = value; '
        'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); }\n'
        '    ~NativeOpSmart14_thunk_FUN_101ba1b0(); };')
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
    # const smart member: ctor-only init forces a tracked construction scope
    variants['op_impl_smart_const'] = decls.replace(
        ' NativeOpSmart14_thunk_FUN_101ba1b0 smart;',
        ' const NativeOpSmart14_thunk_FUN_101ba1b0 smart;').replace(
        '    __forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; '
        'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };',
        '    NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; } };').replace(
        ' : smart(param) { f8 = 0;',
        ' : smart(param) { if (param != 0) thunk_FUN_1123fce0((char *)param + 4); f8 = 0;')
    # smart ctor noexcept(false): a potentially-throwing ctor keeps the
    # construction scope materialized through inlining
    variants['op_impl_smart_noexcept'] = decls.replace(
        '    __forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; '
        'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };',
        '    NativeOpSmart14_thunk_FUN_101ba1b0(void *value) noexcept(false) '
        '{ p = value; if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };')
    # smart's ctor is a TRIVIAL {p=v} store and the addref is a separate call
    # in m14's body while smart is alive: if it throws, ~smart must run —
    # so MSVC arms a tracked state covering the call and repoints the
    # construction-this spill to &smart for the funclet
    variants['op_impl_smart_split'] = decls.replace(
        '    __forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; '
        'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };',
        '    __forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; } };').replace(
        ' : smart(param) { f8 = 0;',
        ' : smart(param) { if (param != 0) thunk_FUN_1123fce0((char *)param + 4); f8 = 0;')
    # split + smart's ctor defined OUT-OF-CLASS: the member-init lowers as a
    # real call scope (repoint to &smart), the backend inlines {p=v}, and the
    # addref in m14's body runs while smart is alive so the funclet reads the
    # repointed spill bare
    variants['op_impl_smart_outline_split'] = decls.replace(
        '    __forceinline NativeOpSmart14_thunk_FUN_101ba1b0(void *value) { p = value; '
        'if (value != 0) thunk_FUN_1123fce0((char *)value + 4); } };',
        '    NativeOpSmart14_thunk_FUN_101ba1b0(void *value); };\n'
        'NativeOpSmart14_thunk_FUN_101ba1b0::NativeOpSmart14_thunk_FUN_101ba1b0(void *value) '
        '{ p = value; }').replace(
        ' : smart(param) { f8 = 0;',
        ' : smart(param) { if (param != 0) thunk_FUN_1123fce0((char *)param + 4); f8 = 0;')
    # split + BOTH smart's and m14's ctors defined out-of-class: under /GL
    # each member-init is an IL call scope that /LTCG inlines after the EH
    # spill was committed — the shape native shows for both &m14 and &smart
    variants['op_impl_both_outline_split'] = (
        variants['op_impl_smart_outline_split'].replace(
            '    __forceinline NativeOpMember14_10687e80(void *param) : smart(param)'
            ' { if (param != 0) thunk_FUN_1123fce0((char *)param + 4);'
            ' f8 = 0; vptr = (void *)&DAT_118c62f8; } };',
            '    NativeOpMember14_10687e80(void *param); };\n'
            'NativeOpMember14_10687e80::NativeOpMember14_10687e80(void *param)'
            ' : smart(param) { if (param != 0) thunk_FUN_1123fce0((char *)param + 4);'
            ' f8 = 0; vptr = (void *)&DAT_118c62f8; }'))
    # tail-ordering hypotheses on top of the proven nestedrep model: native
    # emits f24..f2c stores BEFORE m30's inlined member construction, so those
    # fields are probably initialized during member-init (NSDMI), and f38's
    # movq+dword-overlap comes from a union member whose ctor writes q then w.hi
    nestedrep_decls = variants['op_impl_smart_nestedrep']
    nsdmi = nestedrep_decls.replace(
        'union NativeOpF38 { unsigned __int64 q; struct { unsigned int lo; unsigned int hi; } w; };',
        'union NativeOpF38 { unsigned __int64 q; struct { unsigned int lo; unsigned int hi; } w;\n'
        '    NativeOpF38() { q = 0; w.hi = 0; } };').replace(
        'void *f20; unsigned short f24; void *f28; void *f2c;\n'
        'NativeOpM30 m30; NativeOpF38 f38; void *f40; void *f44;',
        'void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;\n'
        'NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;')
    empty_body = ('NativeOpImpl_FUN_10687e80::NativeOpImpl_FUN_10687e80(void *param_2)\n'
                  '    : NativeOpImpl_FUN_10687e80_vt(this), m14(param_2) {}')
    variants['op_impl_tail_nsdmi'] = (nsdmi, None, empty_body)
    # member-init-list form of the same model
    initlist = nestedrep_decls.replace(
        'union NativeOpF38 { unsigned __int64 q; struct { unsigned int lo; unsigned int hi; } w; };',
        'union NativeOpF38 { unsigned __int64 q; struct { unsigned int lo; unsigned int hi; } w;\n'
        '    NativeOpF38() { q = 0; w.hi = 0; } };')
    init_body = ('NativeOpImpl_FUN_10687e80::NativeOpImpl_FUN_10687e80(void *param_2)\n'
                 '    : NativeOpImpl_FUN_10687e80_vt(this), m14(param_2),'
                 ' f24(1000), f20(0), f28(0), f2c(0), f40(0), f44(0) {}')
    variants['op_impl_tail_initlist'] = (initlist, None, init_body)
    # f38 store-shape probes: native emits xorps+movq (an 8-byte integer store
    # through xmm0) plus one trailing dword at +0x3c. Try forms that push the
    # u64 member-init through SSE instead of splitting into dword pairs.
    f38_struct = nestedrep_decls.replace(
        'union NativeOpF38 { unsigned __int64 q; struct { unsigned int lo; unsigned int hi; } w; };',
        'struct NativeOpF38 { void *lo; void *hi;\n'
        '    NativeOpF38() : lo(0), hi(0) {} };').replace(
        'void *f20; unsigned short f24; void *f28; void *f2c;\n'
        'NativeOpM30 m30; NativeOpF38 f38; void *f40; void *f44;',
        'void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;\n'
        'NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;')
    hi_body = ('NativeOpImpl_FUN_10687e80::NativeOpImpl_FUN_10687e80(void *param_2)\n'
               '    : NativeOpImpl_FUN_10687e80_vt(this), m14(param_2) { f38.hi = 0; }')
    variants['op_impl_f38_struct'] = (f38_struct, None, hi_body)
    # u64 member-init inside the union ctor: member-init scalar stores are
    # the form MSVC most readily materializes through SSE
    f38_uctor = nestedrep_decls.replace(
        'union NativeOpF38 { unsigned __int64 q; struct { unsigned int lo; unsigned int hi; } w; };',
        'union NativeOpF38 { unsigned __int64 q; struct { unsigned int lo; unsigned int hi; } w;\n'
        '    NativeOpF38() : q(0) {} };').replace(
        'void *f20; unsigned short f24; void *f28; void *f2c;\n'
        'NativeOpM30 m30; NativeOpF38 f38; void *f40; void *f44;',
        'void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;\n'
        'NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;')
    whi_body = ('NativeOpImpl_FUN_10687e80::NativeOpImpl_FUN_10687e80(void *param_2)\n'
                '    : NativeOpImpl_FUN_10687e80_vt(this), m14(param_2) { f38.hi = 0; }')
    variants['op_impl_f38_uctor'] = (f38_uctor, None, whi_body)
    # plain __int64 member at +0x38, unioned against an aliased dword member is
    # impossible, so test whether the +0x3c dword is a separate re-store: f38 is
    # a struct pair whose second field is re-assigned in the body
    f38_pair = nestedrep_decls.replace(
        'union NativeOpF38 { unsigned __int64 q; struct { unsigned int lo; unsigned int hi; } w; };',
        'struct NativeOpF38 { unsigned int lo; unsigned int hi; };').replace(
        'void *f20; unsigned short f24; void *f28; void *f2c;\n'
        'NativeOpM30 m30; NativeOpF38 f38; void *f40; void *f44;',
        'void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;\n'
        'NativeOpM30 m30; NativeOpF38 f38 = {}; void *f40 = 0; void *f44 = 0;')
    f38_pair_body = ('NativeOpImpl_FUN_10687e80::NativeOpImpl_FUN_10687e80(void *param_2)\n'
                     '    : NativeOpImpl_FUN_10687e80_vt(this), m14(param_2) { f38.hi = 0; }')
    variants['op_impl_f38_pair'] = (f38_pair, None, f38_pair_body)
    # native stores +0x3c BEFORE f40/f44, so the hi re-store must run inside
    # f38's own construction: derived class over an aggregate base — base
    # value-init should keep the xorps+movq while the derived body re-stores hi
    # during the member-init slot
    f38_derived = nestedrep_decls.replace(
        'union NativeOpF38 { unsigned __int64 q; struct { unsigned int lo; unsigned int hi; } w; };',
        'struct NativeOpF38Base { unsigned int lo; unsigned int hi; };\n'
        'struct NativeOpF38 : NativeOpF38Base { NativeOpF38() { hi = 0; } };').replace(
        'void *f20; unsigned short f24; void *f28; void *f2c;\n'
        'NativeOpM30 m30; NativeOpF38 f38; void *f40; void *f44;',
        'void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;\n'
        'NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;')
    variants['op_impl_f38_derived'] = (f38_derived, None, empty_body)
    # same but with an explicit aggregate base-init in the member-init list
    f38_baseinit = nestedrep_decls.replace(
        'union NativeOpF38 { unsigned __int64 q; struct { unsigned int lo; unsigned int hi; } w; };',
        'struct NativeOpF38Base { unsigned int lo; unsigned int hi; };\n'
        'struct NativeOpF38 : NativeOpF38Base { NativeOpF38() : NativeOpF38Base{} { hi = 0; } };').replace(
        'void *f20; unsigned short f24; void *f28; void *f2c;\n'
        'NativeOpM30 m30; NativeOpF38 f38; void *f40; void *f44;',
        'void *f20 = 0; unsigned short f24 = 1000; void *f28 = 0; void *f2c = 0;\n'
        'NativeOpM30 m30; NativeOpF38 f38; void *f40 = 0; void *f44 = 0;')
    variants['op_impl_f38_baseinit'] = (f38_baseinit, None, empty_body)
    header = ('// Constructor-scope hypothesis variants for entry 10687e80.\n'
              'inline void *operator new(unsigned int, void *receiver) noexcept { return receiver; }\n')
    out = {}
    for name, library in variants.items():
        body = definition
        init_repl = None
        body_repl = None
        if isinstance(library, tuple):
            if len(library) == 3:
                library, init_repl, body_repl = library
            else:
                library, init_repl = library
        if init_repl is not None:
            body = body.replace('m14(param_2)', init_repl)
        if body_repl is not None:
            body = body_repl
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
        # 1-element array + decay: pe binds to the element-ctor's eax result
        'named_event_array': (
            ctor_decl,
            'NativeNamedEvent_FUN_10df9440 event[1];\n'
            'NativeNamedEvent_FUN_10df9440 *pe = event;\n'),
        # sret-initialized local: Event event = f() emits lea ecx,[ebp-0x28];
        # call f — same bytes as the ctor call — and MSVC may bind esi=eax
        'named_event_sret': (
            ctor_decl.replace('struct NativeNamedEvent_FUN_10df9440 : '
                              'Event_thunk_FUN_10def0d0 {'
                              ' NativeNamedEvent_FUN_10df9440(); };\n',
                              ctor_decl.replace(
                                  'NativeNamedEvent_FUN_10df9440();',
                                  'NativeNamedEvent_FUN_10df9440() = default;') +
                              'NativeNamedEvent_FUN_10df9440 __fastcall '
                              'thunk_FUN_10df9440();\n'),
            'NativeNamedEvent_FUN_10df9440 event = thunk_FUN_10df9440();\n'
            'NativeNamedEvent_FUN_10df9440 *pe = &event;\n'),
        # noexcept init: the arm need not precede the (nonthrowing) call so
        # MSVC's scheduler can float it past the next arg-eval — matching the
        # reference's late arm while keeping pe = call-result → mov esi,eax
        'named_event_memberinit_noexcept': (
            ctor_decl.replace('NativeNamedEvent_FUN_10df9440();',
                              'NativeNamedEvent_FUN_10df9440 '
                              '*thunk_FUN_10df9440() noexcept;'),
            'NativeNamedEvent_FUN_10df9440 event;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = event.thunk_FUN_10df9440();\n'),
        # noexcept placement-new into a tracked base buffer: the placement
        # call is nonthrowing so the arm floats late like the reference
        'named_event_placement_base_noexcept': (
            ctor_decl.replace('NativeNamedEvent_FUN_10df9440();',
                              'NativeNamedEvent_FUN_10df9440() noexcept;'),
            'Event_thunk_FUN_10def0d0 event;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = (NativeNamedEvent_FUN_10df9440 *)\n'
            '    new (&event) NativeNamedEvent_FUN_10df9440();\n'),
        # holder aggregate: MSVC lowers the member construction as a ctor-call
        # scope (lazy arm after the call) and &h.event may reuse eax → esi
        'named_event_holder': (
            ctor_decl +
            'struct NativeEventHolder { NativeNamedEvent_FUN_10df9440 event; };\n',
            'NativeEventHolder holder;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = &holder.event;\n'),
        # raw byte buffer + placement new + frame-addressed explicit dtor:
        # the placement call runs unprotected (buffer untracked), pe binds
        # esi=eax, and ((T*)buf)->~T() rematerializes lea ecx,[ebp-0x28]
        'named_event_buf': (
            ctor_decl,
            'char ebuf[24];\n'
            'NativeNamedEvent_FUN_10df9440 *pe = (NativeNamedEvent_FUN_10df9440 *)\n'
            '    new (ebuf) NativeNamedEvent_FUN_10df9440();\n'),
        # plain local + separate pointer: the simplest model — ctor at state
        # -1, arm after, and MSVC may bind pe to the ctor's eax result
        'named_event_pe': (
            ctor_decl,
            'NativeNamedEvent_FUN_10df9440 event;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = &event;\n'),
        # same-declaration pointer: `Event event, *pe = &event` — the ctor's
        # eax return is live when pe initializes, so MSVC can reuse it
        'named_event_commadecl': (
            ctor_decl,
            'NativeNamedEvent_FUN_10df9440 event, *pe = &event;\n'),
        # placement-new on a TRACKED same-type local: new(&event) discards the
        # implicit-init path so the placement call runs unprotected, eax binds
        # pe, and the object stays tracked for the unwind map
        'named_event_tracked_place': (
            ctor_decl,
            'NativeNamedEvent_FUN_10df9440 event;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = (NativeNamedEvent_FUN_10df9440 *)\n'
            '    new (&event) NativeNamedEvent_FUN_10df9440();\n'),
        # pe bound through an integer round-trip: MSVC may fail to fold the
        # cast chain back to &event, keeping pe an opaque pointer pinned in
        # a callee-saved register
        'named_event_intcast': (
            ctor_decl,
            'NativeNamedEvent_FUN_10df9440 event;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = (NativeNamedEvent_FUN_10df9440 *)\n'
            '    (unsigned int)(void *)&event;\n'),
        # copy-initialized event: Event event = Event() runs the ctor as a
        # temp whose eax result is the construction address; pe = &event may
        # reuse it
        'named_event_copyinit': (
            ctor_decl,
            'NativeNamedEvent_FUN_10df9440 event = '
            'NativeNamedEvent_FUN_10df9440();\n'
            'NativeNamedEvent_FUN_10df9440 *pe = &event;\n'),
        # pe declared before the object and assigned from a forwarded
        # expression: pe outlives the ctor eax but binds opaquely
        'named_event_predcl': (
            ctor_decl,
            'NativeNamedEvent_FUN_10df9440 *pe;\n'
            'NativeNamedEvent_FUN_10df9440 event;\n'
            'pe = &event;\n'),
        # volatile self head: commits this to edi early so esi is free for
        # the event address — MSVC may then forward the ctor's eax result
        # (mov esi,eax) like the reference instead of rematerializing
        'named_event_vol': (
            ctor_decl,
            'NativeNamedEventCallback * volatile self = this;\n'
            'NativeNamedEvent_FUN_10df9440 event;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = &event;\n'),
        # volatile self + this read through self at the dispatcher: changes
        # RA so this is edi and the event pin can take esi
        'named_event_vol_self': (
            ctor_decl,
            'NativeNamedEventCallback * volatile self = this;\n'
            'NativeNamedEvent_FUN_10df9440 event;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = &event;\n'
            '(void)self;\n'),
        # placement-new without volatile: the new-expression's eax result
        # pins esi before this can claim it, leaving this for edi at its
        # late use in the dispatcher's lea ecx,[edi-0x10]
        'named_event_place': (
            ctor_decl,
            'Event_thunk_FUN_10def0d0 event;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = (NativeNamedEvent_FUN_10df9440 *)\n'
            '    new (&event) NativeNamedEvent_FUN_10df9440();\n'),
        # &-temp pointer binding (MSVC extension): pe binds the ctor's eax
        # directly (mov esi,eax), the temp stays EH-tracked at [ebp-0x28],
        # and pe's later uses flow through esi — matching the native pin
        'named_event_addrtemp': (
            ctor_decl,
            'NativeNamedEvent_FUN_10df9440 *pe = '
            '&NativeNamedEvent_FUN_10df9440();\n'),
        # bound-temp + &-of-bound: event is the tracked bound temp, pe folds
        'named_event_ref_addr': (
            ctor_decl,
            'NativeNamedEvent_FUN_10df9440 &event = '
            'NativeNamedEvent_FUN_10df9440();\n'
            'NativeNamedEvent_FUN_10df9440 *pe = &event;\n'),
        # placement-new into a tracked member of a local struct whose sole
        # member is the event: the member's arm may land lazily at the call
        'named_event_place_vol': (
            ctor_decl,
            'NativeNamedEventCallback * volatile self = this;\n'
            'Event_thunk_FUN_10def0d0 event;\n'
            'NativeNamedEvent_FUN_10df9440 *pe = (NativeNamedEvent_FUN_10df9440 *)\n'
            '    new (&event) NativeNamedEvent_FUN_10df9440();\n'),
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
        # by-value union param: the param slot is raw storage; the helper
        # constructs an SCStr into it — MSVC flag-tracks union members whose
        # lifetime is started manually by a callee write
        'wiz_union_param': tail_common + (
            'NativeWizSret *s2 = thunk_FUN_106dfa00(&arg.s);\n'
            's2->endsWith("Page");\n'
            'arg.s.~NativeWizSret();\n'),
        # raw int param + placement write through the out pointer
        'wiz_slot_out': tail_common + (
            'NativeWizSret *s2 = thunk_FUN_106dfa00((NativeWizSret *)&arg);\n'
            's2->endsWith("Page");\n'
            '((NativeWizSret *)&arg)->~NativeWizSret();\n'),
    }
    out = {}
    for name, body in variants.items():
        if name in ('wiz_union_param', 'wiz_slot_out'):
            continue
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
    # param-slot construction: the helper writes the SCStr into the raw
    # param slot — MSVC flag-tracks the callee-constructed object
    out['wiz_slot_out'] = (
        prefix.replace(old_klass, sret_type + klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'NativeWizSret *s2 = thunk_FUN_106dfa00((NativeWizSret *)&arg);\n'
        's2->endsWith("Page");\n'
        '((NativeWizSret *)&arg)->~NativeWizSret();\n' + tail_end)
    # by-value union param whose member is constructed by the callee
    union_type = ('union NativeWizSlot { void *raw; NativeWizSret s;\n'
                  'NativeWizSlot() {} ~NativeWizSlot() {} };\n')
    union_klass = klass.replace('NativeWizState_FUN_1061e8b0(void *);',
                                'NativeWizState_FUN_1061e8b0(NativeWizSlot);')
    out['wiz_union_param'] = (
        prefix.replace(old_klass, sret_type + union_type + union_klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'NativeWizSlot arg') + '\n' +
        tail_common.replace('thunk_FUN_106de0c0(&name, arg)',
                            'thunk_FUN_106de0c0(&name, arg.raw)') +
        'NativeWizSret *s2 = thunk_FUN_106dfa00(&arg.s);\n'
        's2->endsWith("Page");\n'
        'arg.s.~NativeWizSret();\n' + tail_end)
    # by-value RecoveredString param: MSVC owns a class-typed [ebp+8] slot,
    # reuses it for the sret temp of thunk_FUN_106dfa00(), and emits the
    # flag-gated funclet (test flag&1 / clear flag / ~SCStr) seen in the
    # reference unwind map
    byval_klass = old_klass.replace('NativeWizState_FUN_1061e8b0(void *);',
                                  'NativeWizState_FUN_1061e8b0(RecoveredString_FUN_1008c50b);')
    out['wiz_byval_param'] = (
        prefix.replace(old_klass, byval_klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'RecoveredString_FUN_1008c50b arg') + '\n' +
        tail_common.replace('thunk_FUN_106de0c0(&name, arg)',
                            'thunk_FUN_106de0c0(&name, (void *)arg.rep)') +
        'thunk_FUN_106dfa00().endsWith("Page");\n' + tail_end)
    # by-value param + out-call into &arg: the callee writes a new object
    # into the live param's slot so MSVC must flag which occupant owns it
    out['wiz_byval_out'] = (
        prefix.replace(old_klass, sret_type + klass.replace(
            'NativeWizSret *thunk_FUN_106dfa00(NativeWizSret *);',
            'NativeWizSret *thunk_FUN_106dfa00(NativeWizSret *);') .replace(
            'NativeWizState_FUN_1061e8b0(void *);',
            'NativeWizState_FUN_1061e8b0(NativeWizSret);')) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'NativeWizSret arg') + '\n' +
        tail_common.replace('thunk_FUN_106de0c0(&name, arg)',
                            'thunk_FUN_106de0c0(&name, (void *)arg.rep)') +
        'NativeWizSret *s2 = thunk_FUN_106dfa00(&arg);\n'
        's2->endsWith("Page");\n' + tail_end)
    # const-ref bound sret temp: MSVC flag-tracks ref-bound temporaries
    # (the flag marks whether the temp behind the reference materialized)
    out['wiz_refbound_sret'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'const RecoveredString_FUN_1008c50b &s2 = thunk_FUN_106dfa00();\n'
        's2.endsWith("Page");\n' + tail_end)
    # by-value param reassigned from an sret call: MSVC may evaluate the
    # result directly into &arg with a construction flag on the slot
    out['wiz_byval_assign'] = (
        prefix.replace(old_klass, byval_klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'RecoveredString_FUN_1008c50b arg') + '\n' +
        tail_common.replace('thunk_FUN_106de0c0(&name, arg)',
                            'thunk_FUN_106de0c0(&name, (void *)arg.rep)') +
        'arg = thunk_FUN_106dfa00();\n'
        'arg.endsWith("Page");\n' + tail_end)
    # ref bound to callee-constructed storage in the param slot: the ref's
    # referent is flag-tracked because MSVC cannot prove the callee wrote it
    out['wiz_ref_outslot'] = (
        prefix.replace(old_klass, sret_type + klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'NativeWizSret &s2 = *thunk_FUN_106dfa00((NativeWizSret *)&arg);\n'
        's2.endsWith("Page");\n'
        's2.~NativeWizSret();\n' + tail_end)
    # placement-new result bound to ref in the param slot: ref-bound
    # placement objects are flag-tracked (construction committed by callee)
    out['wiz_place_ref'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'RecoveredString_FUN_1008c50b &s2 = *new (&arg) '
        'RecoveredString_FUN_1008c50b(thunk_FUN_106dfa00());\n'
        's2.endsWith("Page");\n' + tail_end)
    # conditional-expression temp: both arms sret into the same slot and
    # MSVC flag-marks which constructed — the classic flag-word producer
    out['wiz_cond_temp'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'const RecoveredString_FUN_1008c50b &s2 =\n'
        '    arg != 0 ? thunk_FUN_106dfa00() : thunk_FUN_106dfa00();\n'
        's2.endsWith("Page");\n' + tail_end)
    # constant-folded condition: MSVC may keep the flag machinery while
    # folding the branch — producing the linear flag=1 + flag-gated funclet
    out['wiz_const_cond'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'const RecoveredString_FUN_1008c50b &s2 =\n'
        '    1 ? thunk_FUN_106dfa00() : thunk_FUN_106dfa00();\n'
        's2.endsWith("Page");\n' + tail_end)
    # short-circuit second-operand temp
    out['wiz_and_temp'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'arg != 0 && thunk_FUN_106dfa00().endsWith("Page");\n' + tail_end)
    # by-value class param re-initialized through its own address: the param
    # slot holds a live object that the callee overwrites — MSVC flag-tracks
    # which contents owns the slot at unwind time
    out['wiz_byval_reinit'] = (
        prefix.replace(old_klass, sret_type + klass.replace(
            'NativeWizState_FUN_1061e8b0(void *);',
            'NativeWizState_FUN_1061e8b0(NativeWizSret);')) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'NativeWizSret arg') + '\n' +
        tail_common.replace('thunk_FUN_106de0c0(&name, arg)',
                            'thunk_FUN_106de0c0(&name, (void *)arg.rep)') +
        'thunk_FUN_106dfa00(&arg)->endsWith("Page");\n' + tail_end)
    # sret call whose destination is the param slot but which returns the
    # destination for method chaining (SCStr* out-echo): models
    # thunk_FUN_106dfa00(&arg)->endsWith where the temp was callee-constructed
    out['wiz_outslot_chain'] = (
        prefix.replace(old_klass, sret_type + klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'thunk_FUN_106dfa00((NativeWizSret *)&arg)->endsWith("Page");\n' +
        '((NativeWizSret *)&arg)->~NativeWizSret();\n' + tail_end)
    # by-value SCStr param forwarded by value: MSVC treats the de0c0 pass as
    # moving the rep out of the param slot (flag drops to 0), then the sret
    # temp re-occupies [ebp+8] (flag rises to 1) — flag-gated funclet
    move_klass = old_klass.replace(
        'void thunk_FUN_106de0c0(RecoveredString_FUN_1008c50b *, void *);',
        'void thunk_FUN_106de0c0(RecoveredString_FUN_1008c50b *, RecoveredString_FUN_1008c50b);') .replace(
        'NativeWizState_FUN_1061e8b0(void *);',
        'NativeWizState_FUN_1061e8b0(RecoveredString_FUN_1008c50b);')
    out['wiz_byval_move'] = (
        prefix.replace(old_klass, move_klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'RecoveredString_FUN_1008c50b arg') + '\n' +
        tail_common +
        'thunk_FUN_106dfa00().endsWith("Page");\n' + tail_end)
    # same by-value move but the sret result binds a named local — MSVC may
    # still place it at the vacated [ebp+8] slot under the flag
    out['wiz_byval_move_named'] = (
        prefix.replace(old_klass, move_klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'RecoveredString_FUN_1008c50b arg') + '\n' +
        tail_common +
        'RecoveredString_FUN_1008c50b s2 = thunk_FUN_106dfa00();\n'
        's2.endsWith("Page");\n' + tail_end)
    # by-value param whose slot is reconstructed in place by the out call:
    # the flag distinguishes the original param from the callee-built object
    out['wiz_move_out'] = (
        prefix.replace(old_klass, sret_type + klass.replace(
            'void thunk_FUN_106de0c0(RecoveredString_FUN_1008c50b *, void *);',
            'void thunk_FUN_106de0c0(RecoveredString_FUN_1008c50b *, NativeWizSret);') .replace(
            'NativeWizState_FUN_1061e8b0(void *);',
            'NativeWizState_FUN_1061e8b0(NativeWizSret);')) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'NativeWizSret arg') + '\n' +
        tail_common.replace('thunk_FUN_106de0c0(&name, arg)',
                            'thunk_FUN_106de0c0(&name, arg)') +
        'thunk_FUN_106dfa00(&arg)->endsWith("Page");\n' + tail_end)
    # nested-scope temp: inner-block SCStr local after a dead scalar param —
    # MSVC may co-locate it with the flag machinery at [ebp+8]
    out['wiz_inner_scope'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        '{ RecoveredString_FUN_1008c50b s2 = thunk_FUN_106dfa00();\n'
        '  s2.endsWith("Page"); }\n' + tail_end)
    # C++17 if-init: MSVC flag-tracks the init-statement variable because its
    # lifetime is scoped to a conditional — flag machinery without a linear
    # branch when the if-body is empty
    out['wiz_if_init_cxx17'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'if (RecoveredString_FUN_1008c50b s2 = thunk_FUN_106dfa00();\n'
        '    s2.endsWith("Page")) { }\n' + tail_end)
    # C++17 if-init where the condition reads the object but the flag still
    # marks the init temp; body consumed unconditionally
    out['wiz_if_init_void_cxx17'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'if (RecoveredString_FUN_1008c50b s2 = thunk_FUN_106dfa00(); true) {\n'
        '  s2.endsWith("Page"); }\n' + tail_end)
    # rvalue-ref bound sret temp: MSVC flag-tracks the lifetime extension of
    # a temp bound to T&& (non-const lvalue ref can't bind, so the flag marks
    # temp materialization)
    out['wiz_rvref'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'RecoveredString_FUN_1008c50b &&s2 = thunk_FUN_106dfa00();\n'
        's2.endsWith("Page");\n' + tail_end)
    # move-constructed named object from the call temp: T s2 = move(f()) —
    # two tracked objects (temp + move result) may produce flag machinery
    out['wiz_move_bind'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'RecoveredString_FUN_1008c50b s2 = static_cast<RecoveredString_FUN_1008c50b &&>(\n'
        '    thunk_FUN_106dfa00());\n'
        's2.endsWith("Page");\n' + tail_end)
    # for-init scoped variable: MSVC flag-marks declaration temps inside
    # for-initializers
    out['wiz_for_init'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'for (RecoveredString_FUN_1008c50b s2 = thunk_FUN_106dfa00();\n'
        '     s2.endsWith("Page"); ) { break; }\n' + tail_end)
    # uninitialized decl then callee-side construction: MSVC flag-tracks the
    # adopted object because construction is not a visible ctor call
    adopt_klass = old_klass.replace(
        'RecoveredString_FUN_1008c50b thunk_FUN_106dfa00();',
        'void thunk_FUN_106dfa00(RecoveredString_FUN_1008c50b *);')
    adopt_str = ('struct RecoveredStringAdopt_FUN_1008c50b {\n'
                 'unsigned int rep;\n'
                 '__forceinline RecoveredStringAdopt_FUN_1008c50b() {}\n'
                 '__forceinline RecoveredStringAdopt_FUN_1008c50b(const char *text) { ((SCStr *)this)->int_allocRep((char *)text); }\n'
                 'bool endsWith(const char *suffix) const;\n'
                 '~RecoveredStringAdopt_FUN_1008c50b() noexcept { ((SCStr *)this)->int_release(); rep=0; }\n'
                 '};\n')
    out['wiz_decl_adopt'] = (
        prefix.replace(old_klass, adopt_str + adopt_klass.replace(
            'void thunk_FUN_106dfa00(RecoveredString_FUN_1008c50b *);',
            'void thunk_FUN_106dfa00(RecoveredStringAdopt_FUN_1008c50b *);')) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'RecoveredStringAdopt_FUN_1008c50b s2;\n'
        'thunk_FUN_106dfa00(&s2);\n'
        's2.endsWith("Page");\n' + tail_end)
    # function-try-block ctor: MSVC flag-tracks objects inside the try body
    # because member/base cleanup needs the "constructed" bits
    out['wiz_fn_try'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common.replace(
            'NativeWizState_FUN_1061e8b0::NativeWizState_FUN_1061e8b0(void *arg) {',
            'NativeWizState_FUN_1061e8b0::NativeWizState_FUN_1061e8b0(void *arg) try {') +
        'thunk_FUN_106dfa00().endsWith("Page");\n' +
        tail_end.replace('return this;\n}',
                         'return this;\n} catch (...) { throw; }'))
    # default-argument temp: MSVC flag-marks the materialized default arg
    defarg_klass = old_klass.replace(
        'NativeWizState_FUN_1061e8b0(void *);',
        'NativeWizState_FUN_1061e8b0(void *, int);')
    out['wiz_defarg'] = (
        prefix.replace(old_klass, defarg_klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'void *arg, int mode = 0') + '\n' +
        tail_common +
        'thunk_FUN_106dfa00().endsWith("Page");\n' + tail_end)
    # non-const ref binding of an sret temp (MSVC C4239 extension): MSVC
    # flag-tracks the temp's materialization for the permissive binding
    out['wiz_ncref_sret'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'RecoveredString_FUN_1008c50b &s2 = thunk_FUN_106dfa00();\n'
        's2.endsWith("Page");\n' + tail_end)
    # explicit destructor call on a tracked sret local: MSVC flag-marks the
    # object so the unwind funclet does not double-destroy it
    out['wiz_expl_dtor'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'RecoveredString_FUN_1008c50b s2 = thunk_FUN_106dfa00();\n'
        's2.endsWith("Page");\n'
        's2.~RecoveredString_FUN_1008c50b();\n' + tail_end)
    # explicit destructor call on the reinterpreted param slot after an
    # out-param construction — MSVC flags the adopted object in the slot
    out['wiz_slot_dtor'] = (
        prefix.replace(old_klass, sret_type + klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'thunk_FUN_106dfa00((NativeWizSret *)&arg)->endsWith("Page");\n'
        '((NativeWizSret *)&arg)->~NativeWizSret();\n' + tail_end)
    # trivially-copyable by-value param consumed by a by-value forward:
    # MSVC destructive-reads the rep into the callee arg, the param slot
    # dies, and the sret temp lands there with flag tracking
    trivial_str = ('struct RecoveredStringRaw_FUN_1008c50b {\n'
                   'unsigned int rep;\n'
                   'bool endsWith(const char *suffix) const;\n'
                   '~RecoveredStringRaw_FUN_1008c50b() noexcept { ((SCStr *)this)->int_release(); rep=0; }\n'
                   '};\n')
    trivial_klass = old_klass.replace(
        'void thunk_FUN_106de0c0(RecoveredString_FUN_1008c50b *, void *);',
        'void thunk_FUN_106de0c0(RecoveredString_FUN_1008c50b *, RecoveredStringRaw_FUN_1008c50b);').replace(
        'RecoveredString_FUN_1008c50b thunk_FUN_106dfa00();',
        'RecoveredStringRaw_FUN_1008c50b thunk_FUN_106dfa00();').replace(
        'NativeWizState_FUN_1061e8b0(void *);',
        'NativeWizState_FUN_1061e8b0(RecoveredStringRaw_FUN_1008c50b);')
    out['wiz_byval_trivial'] = (
        prefix.replace(old_klass, trivial_str + trivial_klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'RecoveredStringRaw_FUN_1008c50b arg') + '\n' +
        tail_common +
        'thunk_FUN_106dfa00().endsWith("Page");\n' + tail_end)
    # destructive reassignment of a by-value param: de0c0 consumes arg by
    # value (rep pushed raw, slot vacated), then `arg = f()` is lowered to
    # f(&arg) with the commit flag marking the reconstructed object
    assign_klass = old_klass.replace(
        'void thunk_FUN_106de0c0(RecoveredString_FUN_1008c50b *, void *);',
        'void thunk_FUN_106de0c0(RecoveredString_FUN_1008c50b *, RecoveredString_FUN_1008c50b);').replace(
        'NativeWizState_FUN_1061e8b0(void *);',
        'NativeWizState_FUN_1061e8b0(RecoveredString_FUN_1008c50b);')
    out['wiz_assign_recon'] = (
        prefix.replace(old_klass, assign_klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'RecoveredString_FUN_1008c50b arg') + '\n' +
        tail_common +
        'arg = thunk_FUN_106dfa00();\n'
        'arg.endsWith("Page");\n' + tail_end)
    # same but the assign is written through a reference bound to the param
    out['wiz_assign_ref'] = (
        prefix.replace(old_klass, assign_klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'RecoveredString_FUN_1008c50b arg') + '\n' +
        tail_common +
        'RecoveredString_FUN_1008c50b &r = arg;\n'
        'r = thunk_FUN_106dfa00();\n'
        'r.endsWith("Page");\n' + tail_end)
    # do-once loop scope: MSVC flag-tracks objects inside loop bodies because
    # their construction is iteration-conditional — the linear flag still
    # appears when the loop folds to a single pass
    out['wiz_do_once'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'do { thunk_FUN_106dfa00().endsWith("Page"); } while (0);\n' + tail_end)
    # for-loop scoped temp: flag-tracked construction, loop collapses
    out['wiz_loop_once'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'for (;;) { thunk_FUN_106dfa00().endsWith("Page"); break; }\n' + tail_end)
    # assignment into reinterpreted dead scalar slot: *(S*)&arg = f()
    out['wiz_assign_slot'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        '*(RecoveredString_FUN_1008c50b *)&arg = thunk_FUN_106dfa00();\n'
        '((RecoveredString_FUN_1008c50b *)&arg)->endsWith("Page");\n'
        '((RecoveredString_FUN_1008c50b *)&arg)->~RecoveredString_FUN_1008c50b();\n' + tail_end)
    # out-call into the param slot where the result object is bound via a
    # named reference and destroyed at scope end through that reference —
    # MSVC may flag-track the adopted object behind the reference
    out['wiz_refadopt'] = (
        prefix.replace(old_klass, sret_type + klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'NativeWizSret &s2 = *thunk_FUN_106dfa00((NativeWizSret *)&arg);\n'
        's2.endsWith("Page");\n' + tail_end)
    # conditional-expression receiver temp: (cond ? f() : f()).endsWith() —
    # MSVC flag-tracks the ?: result temp even when the foldable condition
    # makes the body linear; the temp is used in place with no ref copy
    out['wiz_cond_recv'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        '(arg != 0 ? thunk_FUN_106dfa00() : thunk_FUN_106dfa00())\n'
        '    .endsWith("Page");\n' + tail_end)
    # constant-folded ?: receiver temp: 1 ? f() : f() — MSVC keeps the flag
    # machinery while folding the branch (wiz_const_cond proved the flag
    # survives; dropping the ref binding removes the $S1 copy object)
    out['wiz_cond_recv_c'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        '(1 ? thunk_FUN_106dfa00() : thunk_FUN_106dfa00()).endsWith("Page");\n'
        + tail_end)
    # ?: with the ref-bound result used directly: both arms sret into the
    # param slot, flag picks the committed arm; the copy avoids $S1
    out['wiz_cond_direct'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'const RecoveredString_FUN_1008c50b &s2 =\n'
        '    arg != 0 ? thunk_FUN_106dfa00() : thunk_FUN_106dfa00();\n'
        '(void)s2.endsWith("Page");\n' + tail_end)
    # cond_recv_c with an opaque (extern) SCStr ctor: MSVC arms name's EH
    # state AFTER the ctor call like the reference instead of arming the
    # in-construction state before the inlined int_allocRep call
    extern_ctor = prefix.replace(
        '__forceinline RecoveredString_FUN_1008c50b(const char *text) { ((SCStr *)this)->int_allocRep((char *)text); }',
        'RecoveredString_FUN_1008c50b(const char *text);')
    out['wiz_cond_recv_e'] = (
        extern_ctor +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        '(1 ? thunk_FUN_106dfa00() : thunk_FUN_106dfa00()).endsWith("Page");\n'
        + tail_end)
    # cond_recv_c over a by-value SCStr param: MSVC flag-tracks the param
    # slot itself so the flag word gets a dedicated stack slot (live from
    # entry) instead of sharing name's dead slot
    out['wiz_cond_recv_p'] = (
        prefix.replace(old_klass, byval_klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'RecoveredString_FUN_1008c50b arg') + '\n' +
        tail_common.replace('thunk_FUN_106de0c0(&name, arg)',
                            'thunk_FUN_106de0c0(&name, (void *)arg.rep)') +
        '(1 ? thunk_FUN_106dfa00() : thunk_FUN_106dfa00()).endsWith("Page");\n'
        + tail_end)
    # cond_recv_c + keep name alive past the flag temp: an extra use forces
    # the flag word into its own slot instead of packing into name's
    out['wiz_cond_recv_k'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' +
        'RecoveredString_FUN_1008c50b name("SCSubmitDiagsWizardDonePage");\n'
        'thunk_FUN_106de0c0(&name, arg);\n'
        'vftable = &DAT_118bea44;\n'
        '(1 ? thunk_FUN_106dfa00() : thunk_FUN_106dfa00()).endsWith("Page");\n'
        + tail_end.replace('vftable = &DAT_118bea58;',
                           'vftable = &DAT_118bea58;\n'
                           '(void)name.endsWith("x");\n'))
    # cond_recv_c + volatile-backed rep: the dtor's rep=0 store cannot be
    # elided so name's slot stays written and the flag packs to [ebp-0x14]
    vol_klass = old_klass.replace(
        'struct RecoveredString_FUN_1008c50b {\nunsigned int rep;',
        'struct RecoveredString_FUN_1008c50b {\nvolatile unsigned int rep;')
    if vol_klass == old_klass:
        vol_klass = old_klass.replace('unsigned int rep;',
                                      'volatile unsigned int rep;', 1)
    out['wiz_cond_recv_v'] = (
        prefix.replace(old_klass, vol_klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        '(1 ? thunk_FUN_106dfa00() : thunk_FUN_106dfa00()).endsWith("Page");\n'
        + tail_end)
    # cond_recv_c + a still-live shadow local holding name's slot: a second
    # in-scope object forces the flag temp onto its own [ebp-0x14] dword
    # while name's mid-body release/rep=0 is preserved
    out['wiz_cond_recv_s'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' +
        'RecoveredString_FUN_1008c50b *pname;\n' +
        '{ RecoveredString_FUN_1008c50b name("SCSubmitDiagsWizardDonePage");\n'
        'thunk_FUN_106de0c0(&name, arg);\n'
        'pname = &name; }\n' +
        '(1 ? thunk_FUN_106dfa00() : thunk_FUN_106dfa00()).endsWith("Page");\n'
        + tail_end.replace('vftable = &DAT_118bea58;',
                           'vftable = &DAT_118bea58;\n'
                           '(void)*pname;\n'))
    # cond_recv_c + by-value SCStr param reassigned through the ?: so MSVC
    # may sret directly into the [ebp+8] param slot with a commit flag
    out['wiz_cond_recv_b'] = (
        prefix.replace(old_klass, byval_klass) +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker.replace('void *arg', 'RecoveredString_FUN_1008c50b arg') + '\n' +
        tail_common.replace('thunk_FUN_106de0c0(&name, arg)',
                            'thunk_FUN_106de0c0(&name, (void *)arg.rep)') +
        'arg = (1 ? thunk_FUN_106dfa00() : thunk_FUN_106dfa00());\n'
        'arg.endsWith("Page");\n' + tail_end)
    # cond_recv_c + the ?: temp moved by copy-init into the param slot:
    # SCStr arg = (?:) reuses the dead void* slot for the sret object
    out['wiz_cond_recv_i'] = (
        prefix +
        '\n// Reference entry 1061e8b0; body size 194 bytes.\n'
        '#line 1 "ENTRY_1061e8b0"\n' +
        source_marker + '\n' + tail_common +
        'RecoveredString_FUN_1008c50b s2 =\n'
        '    (1 ? thunk_FUN_106dfa00() : thunk_FUN_106dfa00());\n'
        's2.endsWith("Page");\n' + tail_end)
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
        # fully nested temporaries: Event().thunk(this, Aggregate(Source())) —
        # right-to-left arg eval constructs Source then Aggregate then the
        # receiver; each temp's ctor eax is reused (push eax / mov ecx,eax)
        # and all three destruct at end of the full expression in reverse
        'copier_nested_all': head + (
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return this;\n'),
        # nested_all minus the volatile self head: the volatile slot may be
        # what nudges regalloc into pinning &agg to esi instead of native's
        # rematerialized lea ecx,[ebp-0x5c]
        'copier_nested_novol': (
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return this;\n'),
        # three named locals with no volatile head: source ctor eax forwards
        # into the agg push, event ctor eax forwards into the receiver ecx,
        # and agg's address rematerializes per use — all three destroy in
        # reverse declaration order at scope end
        'copier_named_novol': (
            'NativeCopierSource_FUN_10df9440 a;\n'
            'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
            'NativeCopierEvent_FUN_10df9510 e;\n'
            'e.thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # nested full-expression via a plain self alias: changes the register
        # pressure shape so MSVC rematerializes &agg instead of pinning esi
        'copier_nested_dbluse': (
            'NativeCopierOutput *self = this;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(self,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return self;\n'),
        # named agg + temp source + temp event, no volatile: source temp dies
        # with the agg statement in MSVC mode but its eax pushes directly;
        # agg named so &agg rematerializes; event temp forwards ecx=eax
        'copier_temp_arg_novol': (
            'NativeCopierAggregate_FUN_10deee60 agg((NativeCopierSource_FUN_10df9440()));\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # non-const ref-bound temps (MSVC extension C4239): the compiler may
        # forward the ctor-result eax for the bound temp's address while still
        # destroying it at scope end
        'copier_ncref_src': (
            'NativeCopierSource_FUN_10df9440 &a = NativeCopierSource_FUN_10df9440();\n'
            'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
            'NativeCopierEvent_FUN_10df9510 e;\n'
            'e.thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        'copier_ncref_evt': (
            'NativeCopierSource_FUN_10df9440 a;\n'
            'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
            'NativeCopierEvent_FUN_10df9510 &e = NativeCopierEvent_FUN_10df9510();\n'
            'e.thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        'copier_ncref_both': (
            'NativeCopierSource_FUN_10df9440 &a = NativeCopierSource_FUN_10df9440();\n'
            'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
            'NativeCopierEvent_FUN_10df9510 &e = NativeCopierEvent_FUN_10df9510();\n'
            'e.thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # rvalue-ref bound temps: scope-lived and the bound slot may flow the
        # ctor result eax into both the push and the receiver ecx
        'copier_rref_both': (
            'NativeCopierSource_FUN_10df9440 &&a = NativeCopierSource_FUN_10df9440();\n'
            'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
            'NativeCopierEvent_FUN_10df9510 &&e = NativeCopierEvent_FUN_10df9510();\n'
            'e.thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # nested single-expression but with an extra this-use so RA prefers
        # esi for this and rematerializes &agg instead of pinning it
        'copier_nested_self2': (
            'NativeCopierOutput *self = this;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return self;\n'),
        # volatile self head (this-spill model) + nested expression passing
        # this directly — tests whether the volatile init commits esi to this
        # before the agg temp's address can be pinned
        'copier_nested_esi': (
            'NativeCopierOutput * volatile self = this;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return this;\n'),
        # volatile self head + nested expression where the return reads the
        # spilled self instead of this — changes which SSA values cross the
        # final call and may unpin the agg temp address
        'copier_nested_ret': (
            'NativeCopierOutput * volatile self = this;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return self;\n'),
        # named agg + temp source + temp event, no volatile: source temp dies
        # receiver: MSVC's non-standard C4239 temp extension may keep the
        # arg temp alive to scope end (~source lands last) while temp-ness
        # forwards the ctor's eax into the push
        'copier_temp_arg': head + (
            'NativeCopierAggregate_FUN_10deee60 agg((NativeCopierSource_FUN_10df9440()));\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # bound-temp aggregate: const& binds the Aggregate(Source()) temp so
        # it rematerializes (lea ecx) instead of pinning esi=eax, while the
        # nested Source() temp still forwards eax — and bound temps die in
        # reverse binding order at scope end (a last, e first)
        'copier_bound_agg': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)'),
            sig,
            head +
            'const NativeCopierSource_FUN_10df9440 &a = NativeCopierSource_FUN_10df9440();\n'
            'const NativeCopierAggregate_FUN_10deee60 &agg =\n'
            '    NativeCopierAggregate_FUN_10deee60(a);\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # copy-init named local: MSVC's elision may keep the temp's eax
        # forward while a remains a scope-lived tracked object
        'copier_copyinit': head + (
            'NativeCopierSource_FUN_10df9440 a = NativeCopierSource_FUN_10df9440();\n'
            'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # single-expression form returning this through a comma: temps die
        # at the end of the return full-expression = tail
        'copier_ret_comma': (
            'return (NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440())),\n'
            '    this);\n'),
        # nested temps + self as a plain pinned alias used for BOTH the arg
        # and the return: the alias value is born at entry so RA assigns it
        # esi before the agg temp's address can claim a callee-saved slot
        'copier_nested_self_arg': (
            'NativeCopierOutput *self = this;\n'
            'NativeCopierOutput *result = self;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(self,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return result;\n'),
        # bound-temp source (scope-lived, tail dtor) + named agg + temp
        # receiver: tests whether MSVC forwards the bound temp's ctor eax
        # into the push or rematerializes the temp's address
        'copier_bound_a': head + (
            'const NativeCopierSource_FUN_10df9440 &a = NativeCopierSource_FUN_10df9440();\n'
            'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # ref-bound temp whose ADDRESS feeds a pointer-param agg ctor: the
        # ref binds to the ctor-result register so &a can reuse eax
        'copier_ref_ptr_arg': (prefix.replace(
            'NativeCopierAggregate_FUN_10deee60(const Event_thunk_FUN_10def0d0 &);',
            'NativeCopierAggregate_FUN_10deee60(const Event_thunk_FUN_10def0d0 &);'
            ' NativeCopierAggregate_FUN_10deee60(const void *);'),
            head +
            'const NativeCopierSource_FUN_10df9440 &a = NativeCopierSource_FUN_10df9440();\n'
            'NativeCopierAggregate_FUN_10deee60 agg(&a);\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # entry as a real ??0 ctor of its own class: MSVC pins this to esi
        # and emits the [ebp-0x10] this-spill for ctor EH tracking, forcing
        # the agg temp's address to rematerialize via ecx at the push site
        'copier_ctor_nested': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct NativeCopierCtor { NativeCopierCtor(); };\n',
            'NativeCopierCtor::NativeCopierCtor() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'),
        # ctor + named locals: this->esi pin + spill, remat &agg
        'copier_ctor_named': (
            prefix + 'struct NativeCopierCtor { NativeCopierCtor(); };\n',
            'NativeCopierCtor::NativeCopierCtor() {',
            'NativeCopierSource_FUN_10df9440 a;\n'
            'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
            'NativeCopierEvent_FUN_10df9510 e;\n'
            'e.thunk_FUN_10defac0((NativeCopierOutput *)this, agg);\n'),
        # thunk param2 by-value: MSVC materializes Aggregate(Source()) as
        # the formal arg object at a fixed temp slot and pushes its address
        # (lea ecx,$T;push ecx) rather than pinning the ctor eax into esi —
        # matching native's remat while the temps die in reverse at tail
        'copier_byval': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60)'),
            sig,
            head +
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return this;\n'),
        # bound agg temp (its slot rematerializes for the push) whose nested
        # Source temp still forwards ctor eax — tests whether MSVC keeps the
        # inner arg temp alive to scope end under the bound ref's state
        'copier_bound_nested': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)'),
            sig,
            head +
            'const NativeCopierAggregate_FUN_10deee60 &agg =\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440());\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # nested temps but the receiver is evaluated as a named bound ref:
        # changes eval order so &agg need not survive another construction
        'copier_bound_evt_nested': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)'),
            sig,
            head +
            'NativeCopierAggregate_FUN_10deee60 &&agg =\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440());\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # agg temp's address dereferenced through a bound pointer variable:
        # MSVC may fold *pagg back to the fixed temp slot and rematerialize
        # lea ecx,$T2 at the push instead of pinning the ctor eax into esi
        'copier_ptrbind': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)'),
            sig,
            head +
            'NativeCopierAggregate_FUN_10deee60 *pagg =\n'
            '    &NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440());\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this, *pagg);\n'
            'return this;\n'),
        # *&temp inside the nested expression: the dereference may make MSVC
        # treat the arg as a fixed slot rather than a kept call-result
        'copier_derefstar': (
            prefix,
            sig,
            head +
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    *&NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return this;\n'),
        # ctor + ref-bound source temp (dies at scope end = native tail
        # dtor) + temp event receiver (dies at stmt end = mov ecx,eax + the
        # immediate ~Event) + named agg rematerialized through ecx
        'copier_ctor_mix': (
            prefix + 'struct NativeCopierCtor { NativeCopierCtor(); };\n',
            'NativeCopierCtor::NativeCopierCtor() {',
            'const NativeCopierSource_FUN_10df9440 &a = NativeCopierSource_FUN_10df9440();\n'
            'NativeCopierAggregate_FUN_10deee60 agg(a);\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this, agg);\n'),
        # ctor + named agg built from a temp arg: the inner Source temp
        # dies at the decl end (early ~ vs native tail) but pins this to
        # esi and remats &agg — measures how close a decl-arg temp gets
        'copier_ctor_namedarg': (
            prefix + 'struct NativeCopierCtor { NativeCopierCtor(); };\n',
            'NativeCopierCtor::NativeCopierCtor() {',
            'NativeCopierAggregate_FUN_10deee60 agg((NativeCopierSource_FUN_10df9440()));\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this, agg);\n'),
        # address-of-temp for the agg arg: &Aggregate(Source()) may
        # rematerialize the temp slot via lea instead of pinning the ctor
        # eax into esi — which would leave esi for this
        'copier_ctor_ptr': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 *)') +
            'struct NativeCopierCtor { NativeCopierCtor(); };\n',
            'NativeCopierCtor::NativeCopierCtor() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    &NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'),
        # nested temps where the ctor class has a plain data member: tests
        # whether a membered (but trivially-initialized) class triggers the
        # ctor _this$ spill that native shows at [ebp-0x10]
        'copier_ctor_nested_mem': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct NativeCopierCtor { void *vftable; NativeCopierCtor(); };\n',
            'NativeCopierCtor::NativeCopierCtor() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'),
        # nested temps where the ctor class declares a nontrivial dtor:
        # MSVC may emit the _this$ spill for unwind-time full-object
        # destruction even though the body never constructs members
        'copier_ctor_nested_dtor': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct NativeCopierCtor { ~NativeCopierCtor(); NativeCopierCtor(); };\n',
            'NativeCopierCtor::NativeCopierCtor() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'),
        # nested temps where the agg temp is bound through an explicit
        # const-ref cast: bound temps rematerialize their slot (lea) rather
        # than pinning the ctor eax, which may leave esi for this
        'copier_ctor_nested_cref': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct NativeCopierCtor { NativeCopierCtor(); };\n',
            'NativeCopierCtor::NativeCopierCtor() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    static_cast<const NativeCopierAggregate_FUN_10deee60 &>(\n'
            '        NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440())));\n'),
        # method model: a/agg/e are decl-armed tracked locals; the three
        # calls are noexcept pointer-returning methods whose results bind to
        # pa/pe — pa flows into the agg-method arg push (push eax) and pe
        # becomes the thunk receiver (mov ecx,eax); all three objects die in
        # reverse decl order at scope end; arms defer past noexcept calls
        'copier_methods': (
            prefix +
            'struct NativeCopierMethodAgg { EventCopy_thunk_FUN_10deea50 fields; unsigned int extra; '
            'void thunk_FUN_10deee60(void *) noexcept; ~NativeCopierMethodAgg() noexcept; };\n'
            'struct NativeCopierMethodA : Event_thunk_FUN_10def0d0 { void *thunk_FUN_10df9440() noexcept; };\n'
            'struct NativeCopierMethodE : Event_thunk_FUN_10def0d0 { NativeCopierMethodE *thunk_FUN_10df9510() noexcept; '
            'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierMethodAgg &); };\n',
            sig,
            head +
            'NativeCopierMethodA a;\n'
            'NativeCopierMethodAgg agg;\n'
            'NativeCopierMethodE e;\n'
            'void *pa = a.thunk_FUN_10df9440();\n'
            'agg.thunk_FUN_10deee60(pa);\n'
            'NativeCopierMethodE *pe = e.thunk_FUN_10df9510();\n'
            'pe->thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # method model without the volatile self head — measures whether the
        # dead [ebp-0x10] store is the volatile self or something else
        'copier_methods_novol': (
            prefix +
            'struct NativeCopierMethodAgg2 { EventCopy_thunk_FUN_10deea50 fields; unsigned int extra; '
            'void thunk_FUN_10deee60(void *) noexcept; ~NativeCopierMethodAgg2() noexcept; };\n'
            'struct NativeCopierMethodA2 : Event_thunk_FUN_10def0d0 { void *thunk_FUN_10df9440() noexcept; };\n'
            'struct NativeCopierMethodE2 : Event_thunk_FUN_10def0d0 { NativeCopierMethodE2 *thunk_FUN_10df9510() noexcept; '
            'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierMethodAgg2 &); };\n',
            sig,
            'NativeCopierMethodA2 a;\n'
            'NativeCopierMethodAgg2 agg;\n'
            'NativeCopierMethodE2 e;\n'
            'void *pa = a.thunk_FUN_10df9440();\n'
            'agg.thunk_FUN_10deee60(pa);\n'
            'NativeCopierMethodE2 *pe = e.thunk_FUN_10df9510();\n'
            'pe->thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # ctor + volatile self + nested temps: the volatile self store
        # reproduces native's [ebp-0x10] dead spill AND pins this to esi,
        # which should force the agg temp's address to rematerialize via
        # lea ecx instead of pinning esi — all three temps die at the tail
        # in reverse completion order (e, agg, a)
        'copier_ctor_nested_self': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct NativeCopierCtor { NativeCopierCtor(); };\n',
            'NativeCopierCtor::NativeCopierCtor() {',
            'NativeCopierOutput * volatile self = (NativeCopierOutput *)this;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    self,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'),
        # member access on the temp: passing Aggregate(Source()).fields makes
        # the temp a memory object — MSVC rematerializes its slot address
        # (lea ecx,[ebp-N]) instead of pinning the ctor eax in a register
        'copier_member_arg': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const EventCopy_thunk_FUN_10deea50 &)'),
            sig,
            head +
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    NativeCopierAggregate_FUN_10deee60(\n'
            '        NativeCopierSource_FUN_10df9440()).fields);\n'
            'return this;\n'),
        # conversion operator: the temp is whole but an inlined conv-op
        # folds to member access, which may remat the slot
        'copier_convop_arg': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const EventCopy_thunk_FUN_10deea50 &)').replace(
                'struct NativeCopierAggregate_FUN_10deee60 { EventCopy_thunk_FUN_10deea50 fields;',
                'struct NativeCopierAggregate_FUN_10deee60 { operator const EventCopy_thunk_FUN_10deea50 &() { return fields; } EventCopy_thunk_FUN_10deea50 fields;'),
            sig,
            head +
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    NativeCopierAggregate_FUN_10deee60(\n'
            '        NativeCopierSource_FUN_10df9440()));\n'
            'return this;\n'),
        # address-of-temp to a pointer param: &temp may remat as lea
        'copier_addr_arg': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const void *)'),
            sig,
            head +
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    &NativeCopierAggregate_FUN_10deee60(\n'
            '        NativeCopierSource_FUN_10df9440()));\n'
            'return this;\n'),
        # nested temps where the temp binds a CONST ref param: a const-ref
        # bound temp materializes as a slot object (like bound_nested) so
        # the arg push may rematerialize lea ecx,$T instead of pinning
        # esi=eax — while all three temps still die at the stmt tail
        'copier_nested_cref': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)'),
            sig,
            head +
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return this;\n'),
        # bound source temp (scope-lived, dies at tail last) feeding a temp
        # Aggregate arg inside the final thunk expression: the agg temp is
        # const-ref bound by the callee so it may remat its slot, and the
        # temps die in reverse completion order (e, agg, then bound s)
        'copier_bound_src_nested': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)'),
            sig,
            head +
            'const NativeCopierSource_FUN_10df9440 &a = NativeCopierSource_FUN_10df9440();\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    NativeCopierAggregate_FUN_10deee60(a));\n'
            'return this;\n'),
        # named Source local feeding the nested temp arg: tests whether the
        # named object's push forwards the just-returned ctor eax (the arm
        # store may sink past the push under the backend scheduler)
        'copier_named_src_nested': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)'),
            sig,
            head +
            'NativeCopierSource_FUN_10df9440 a;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    NativeCopierAggregate_FUN_10deee60(a));\n'
            'return this;\n'),
        # nested temps where the thunk param is an rvalue ref: MSVC
        # materializes a prvalue bound to T&& as a fixed slot object whose
        # address may remat (lea ecx,$T) instead of pinning the ctor eax
        'copier_nested_rref': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &&)'),
            sig,
            head +
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return this;\n'),
        # nested temps where the agg temp is produced by an inlined lambda
        # returning a bound const-ref: the lambda's bound temp materializes
        # in the caller frame as a slot object (remat lea) while the inner
        # Source temp stays expression-lived inside the thunk call
        'copier_lambda_agg': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)'),
            sig,
            head +
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    [&]() -> const NativeCopierAggregate_FUN_10deee60 & {\n'
            '        const NativeCopierAggregate_FUN_10deee60 &agg =\n'
            '            NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440());\n'
            '        return agg;\n'
            '    }());\n'
            'return this;\n'),
        # nested temps where the thunk takes the agg temp by POINTER param:
        # &temp may remat the slot address under LTCG backend codegen
        'copier_nested_ptr': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 *)'),
            sig,
            head +
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    &NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return this;\n'),
        # nested temps where the agg prvalue is explicitly cast to const&:
        # binding a prvalue to a reference materializes it as a slot object
        # whose address remats (lea ecx,$T) while keeping full-expression
        # lifetime so the inner Source temp still dies at the tail
        'copier_nested_bcref': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)'),
            sig,
            head +
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    static_cast<const NativeCopierAggregate_FUN_10deee60 &>(\n'
            '        NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440())));\n'
            'return this;\n'),
        # non-const ref cast (MSVC C4238 extension accepts binding a prvalue)
        'copier_nested_bref': (
            prefix,
            sig,
            head +
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    static_cast<NativeCopierAggregate_FUN_10deee60 &>(\n'
            '        NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440())));\n'
            'return this;\n'),
        # named local + pointer var bound to &a: MSVC forwards ctor eax into
        # bound pointer vars (the native mov esi,eax sites) so agg(*pa) may
        # push eax directly while a stays a scope-lived named local
        'copier_pa_arg': (
            prefix,
            sig,
            head +
            'NativeCopierSource_FUN_10df9440 a;\n'
            'NativeCopierSource_FUN_10df9440 *pa = &a;\n'
            'NativeCopierAggregate_FUN_10deee60 agg(*pa);\n'
            'NativeCopierEvent_FUN_10df9510 e;\n'
            'e.thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # agg ctor takes Event* and pa is bound to the ctor eax: agg(pa)
        # pushes the pointer value — if MSVC keeps pa in the ctor's eax the
        # push becomes push eax while a stays a scope-lived named local
        'copier_pa_ptr': (
            prefix.replace(
                'NativeCopierAggregate_FUN_10deee60(const Event_thunk_FUN_10def0d0 &)',
                'NativeCopierAggregate_FUN_10deee60(const Event_thunk_FUN_10def0d0 *)'),
            sig,
            head +
            'NativeCopierSource_FUN_10df9440 a;\n'
            'NativeCopierSource_FUN_10df9440 *pa = &a;\n'
            'NativeCopierAggregate_FUN_10deee60 agg(pa);\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this, agg);\n'
            'return this;\n'),
        # placement-new into declared union storage inside the thunk call:
        # the Aggregate is constructed at a fixed slot (remat lea ecx,$S)
        # while the inner Source temp stays expression-lived (push eax +
        # tail death); tests whether MSVC EH-tracks the placement object
        'copier_union_place': (
            prefix,
            sig,
            head +
            'union CopierAggSlot { char raw[28]; NativeCopierAggregate_FUN_10deee60 agg; CopierAggSlot() {} ~CopierAggSlot() {} } uslot;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    *new (&uslot.agg) NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return this;\n'),
        # placement into a raw aligned buffer — no union wrapper to arm
        'copier_buf_place': (
            prefix,
            sig,
            head +
            'char aggbuf[28];\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    *new (aggbuf) NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440()));\n'
            'return this;\n'),
        # agg as a nonzero-offset member of an inlined-ctor wrapper temp:
        # W(Source()).agg materializes the Aggregate member at a fixed
        # slot (lea ecx,$T+4 -> remat, not the pinned ctor eax) while the
        # inner Source temp stays expression-lived to the tail
        'copier_wrap_member': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct CopierWrapMember { unsigned int pad; NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            head +
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # wrapper variant with agg at offset 0: tests whether member access
        # alone (rather than the +4 slot+offset) triggers the remat
        'copier_wrap_member0': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct CopierWrapMember0 { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            head +
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # nested temps where the agg temp is the right operand of a comma:
        # the temp is still expression-lived but its address may no longer
        # be the bound call result
        'copier_ctor_nested_comma': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct NativeCopierCtor { NativeCopierCtor(); };\n',
            'NativeCopierCtor::NativeCopierCtor() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    (0,\n'
            '     NativeCopierAggregate_FUN_10deee60(NativeCopierSource_FUN_10df9440())));\n'),
        # wrap_member0 with the volatile self store inside the same full
        # expression via comma — sequencing may keep mov [ebp-0x10],esi
        # ahead of the temp-ctor lea as native shows
        'copier_wm0_comma': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct CopierWrapMember0c { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0c(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'NativeCopierOutput * volatile self;\n'
            '(self = this,\n'
            ' NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0c(NativeCopierSource_FUN_10df9440()).agg));\n'
            'return this;\n'),
        # wrap_member0 inside a real ctor of a class carrying a non-trivial
        # member: member-init unwind funclets need this, so MSVC emits the
        # prologue _this$ spill before any body lea — tests whether native's
        # early store is ctor bookkeeping
        'copier_wm0_ctor_member': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct CopierWrapMember0m { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0m(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n'
            'struct NativeCopierOutCtor { NativeCopierSource_FUN_10df9440 m_src; NativeCopierOutCtor(); };\n',
            'NativeCopierOutCtor::NativeCopierOutCtor() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    CopierWrapMember0m(NativeCopierSource_FUN_10df9440()).agg);\n'),
        # wrap_member0 where self is address-taken rather than volatile: the
        # materialization store is emitted at decl-init, possibly before the
        # next statement hoists its temp-slot lea
        'copier_wm0_addrself': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct CopierWrapMember0a { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0a(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'NativeCopierOutput *self = this;\n'
            'NativeCopierOutput **pself = &self;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0a(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return *pself;\n'),
        # wrap_member0 with the volatile store forced early by an ordering-
        # dependent second statement: the self store then a no-op statement
        # boundary that separates it from the expression arg evaluation
        'copier_wm0_scope': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct CopierWrapMember0s { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0s(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            '{\n'
            '    NativeCopierOutput * volatile self = this;\n'
            '}\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0s(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # aggregate-init a single-field struct: the member-init store
        # mov [ebp-0x10],esi is a plain decl-position write — MSVC may keep
        # it ahead of the next statement's hoisted temp-slot lea
        'copier_wm0_agginit': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct CopierSelfSlot { NativeCopierOutput *p; };\n'
            'struct CopierWrapMember0g { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0g(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'volatile CopierSelfSlot holder = { this };\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0g(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # same but through an array-of-one init list
        'copier_wm0_arrinit': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct CopierWrapMember0r { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0r(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'NativeCopierOutput * volatile holder[1] = { this };\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0r(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # ctor model where the -0x10 slot is a no-tracking member-qualifying
        # store: a class whose ctor body inits a member pointer from this —
        # reproduces mov [ebp-0x10],esi prologue-early without member EH
        'copier_wm0_memberptr': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct CopierWrapMember0p { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0p(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n'
            'struct NativeCopierOutPtr { void *m_self; NativeCopierOutPtr(); };\n',
            'NativeCopierOutPtr::NativeCopierOutPtr() : m_self(this) {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    CopierWrapMember0p(NativeCopierSource_FUN_10df9440()).agg);\n'),
        # wrap_member0 where NativeCopierOutput is polymorphic — MSVC may
        # emit the prologue this-spill for member fns of classes with a
        # vftable (catch-handler this adjustment), matching native's early
        # mov [ebp-0x10],esi without a user store
        'copier_wm0_vtbl': (
            prefix +
            'struct NativeCopierOutputV { virtual ~NativeCopierOutputV() {}\n'
            '  NativeCopierOutputV *FUN_10df9390(); };\n'
            'struct CopierWrapMember0t { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0t(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierOutputV *NativeCopierOutputV::FUN_10df9390() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    CopierWrapMember0t(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # polymorphic + volatile self: check whether class vtable-ness plus a
        # user store produces native ordering
        'copier_wm0_vtbl_vol': (
            prefix +
            'struct NativeCopierOutputW { virtual ~NativeCopierOutputW() {}\n'
            '  NativeCopierOutputW *FUN_10df9390(); };\n'
            'struct CopierWrapMember0w { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0w(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierOutputW *NativeCopierOutputW::FUN_10df9390() {',
            'NativeCopierOutputW * volatile self = this;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    CopierWrapMember0w(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # free __fastcall taking the impl ptr in ecx — native may not be a
        # member fn at all; MSVC homes fastcall reg params used across EH
        # regions to [ebp-0x10] early, matching the dead-store placement
        'copier_wm0_fastcall': (
            prefix +
            'struct CopierWrapMember0f { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0f(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n'
            'NativeCopierOutput *__fastcall copier_wm0_fastcall(NativeCopierOutput *p);\n',
            'NativeCopierOutput *__fastcall copier_wm0_fastcall(NativeCopierOutput *p) {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    p,\n'
            '    CopierWrapMember0f(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return p;\n'),
        # free __fastcall with a second edx param (unused) — two reg params may
        # force ecx homing
        'copier_wm0_fastcall2': (
            prefix +
            'struct CopierWrapMember0q { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0q(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n'
            'NativeCopierOutput *__fastcall copier_wm0_fastcall2(NativeCopierOutput *p, void *q);\n',
            'NativeCopierOutput *__fastcall copier_wm0_fastcall2(NativeCopierOutput *p, void *) {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    p,\n'
            '    CopierWrapMember0q(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return p;\n'),
        # wrap_member0 where FUN_10df9390 is itself a virtual method — MSVC
        # may home this to [ebp-0x10] early for virtual member fns (catch
        # handler needs the adjusted this)
        'copier_wm0_virt': (
            prefix +
            'struct NativeCopierOutputVirt { virtual ~NativeCopierOutputVirt() {}\n'
            '  virtual NativeCopierOutputVirt *FUN_10df9390(); };\n'
            'struct CopierWrapMember0virt { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0virt(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierOutputVirt *NativeCopierOutputVirt::FUN_10df9390() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    CopierWrapMember0virt(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # virtual method + volatile self combined
        'copier_wm0_virt_vol': (
            prefix +
            'struct NativeCopierOutputVv { virtual ~NativeCopierOutputVv() {}\n'
            '  virtual NativeCopierOutputVv *FUN_10df9390(); };\n'
            'struct CopierWrapMember0vv { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0vv(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierOutputVv *NativeCopierOutputVv::FUN_10df9390() {',
            'NativeCopierOutputVv * volatile self = this;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    CopierWrapMember0vv(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # volatile-qualified member fn: 'this' is volatile T* — MSVC may home
        # it early at the fixed [ebp-0x10] slot
        'copier_wm0_volmethod': (
            prefix +
            'struct NativeCopierOutputVm { NativeCopierOutputVm *FUN_10df9390() volatile; };\n'
            'struct CopierWrapMember0vm { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0vm(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierOutputVm *NativeCopierOutputVm::FUN_10df9390() volatile {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)const_cast<NativeCopierOutputVm *>(this),\n'
            '    CopierWrapMember0vm(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return const_cast<NativeCopierOutputVm *>(this);\n'),
        # dllexport class: exported member fns may get extra this handling
        'copier_wm0_dllexport': (
            prefix +
            'struct __declspec(dllexport) NativeCopierOutputDx {\n'
            '  NativeCopierOutputDx *FUN_10df9390(); };\n'
            'struct CopierWrapMember0x { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0x(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierOutputDx *NativeCopierOutputDx::FUN_10df9390() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    CopierWrapMember0x(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # a member store as the first statement: whether any early this-use
        # stays ahead of the temp-ctor lea
        'copier_wm0_mstore': (
            prefix.replace(
                'struct NativeCopierOutput {',
                'struct NativeCopierOutput { void *m_flag;') +
            'struct CopierWrapMember0m { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0m(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'm_flag = this;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0m(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # const-qualified member fn
        'copier_wm0_const': (
            prefix +
            'struct NativeCopierOutputC { NativeCopierOutputC *FUN_10df9390() const; };\n'
            'struct CopierWrapMember0c { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0c(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierOutputC *NativeCopierOutputC::FUN_10df9390() const {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)const_cast<NativeCopierOutputC *>(this),\n'
            '    CopierWrapMember0c(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return const_cast<NativeCopierOutputC *>(this);\n'),
        # class virtually inherits a base — MSVC may home this early for
        # vbptr/funclet handling even in a method without tracked members
        'copier_wm0_vbase': (
            prefix +
            'struct NativeCopierVRoot { virtual ~NativeCopierVRoot() {} };\n'
            'struct NativeCopierVBase : virtual NativeCopierVRoot {\n'
            '  NativeCopierVBase *FUN_10df9390(); };\n'
            'struct CopierWrapMember0b { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0b(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierVBase *NativeCopierVBase::FUN_10df9390() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    CopierWrapMember0b(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # this passed via a base-class-typed param: thunk takes SCIEventSink*
        # and 'this' must convert — MSVC may materialize the conversion
        'copier_wm0_basecast': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(void *, NativeCopierAggregate_FUN_10deee60 &)') +
            'struct CopierWrapMember0bc { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0bc(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierOutput *NativeCopierOutput::FUN_10df9390() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (void *)this,\n'
            '    CopierWrapMember0bc(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # volatile self but split decl from assign: assignment is a separate
        # statement MSVC emits before the expression arg eval
        'copier_wm0_sep': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput *, const NativeCopierAggregate_FUN_10deee60 &)') +
            'struct CopierWrapMember0v { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0v(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'NativeCopierOutput * volatile self;\n'
            'self = this;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0v(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # this passed via a REAL base-class param: thunk takes SCBase*, the
        # derived->base conversion may make MSVC materialize/home this
        'copier_wm0_base': (
            prefix +
            'struct NativeSinkBase { void *m_sink; };\n'
            'struct NativeCopierOutputB : NativeSinkBase { NativeCopierOutputB *FUN_10df9390(); };\n'
            'struct NativeCopierEventB : Event_thunk_FUN_10def0d0 { NativeCopierEventB();\n'
            '  void thunk_FUN_10defac0(NativeSinkBase *, NativeCopierAggregate_FUN_10deee60 &); };\n'
            'struct CopierWrapMember0bs { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0bs(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierOutputB *NativeCopierOutputB::FUN_10df9390() {',
            'NativeCopierEventB().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0bs(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # method returns a base-class pointer: return conversion homes this
        'copier_wm0_retbase': (
            prefix +
            'struct NativeSinkBase2 { void *m_sink; };\n'
            'struct NativeCopierOutputRB : NativeSinkBase2 { NativeSinkBase2 *FUN_10df9390(); };\n'
            'struct CopierWrapMember0rb { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0rb(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeSinkBase2 *NativeCopierOutputRB::FUN_10df9390() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    CopierWrapMember0rb(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # an inlined no-op member call on this before the expression:
        # the this-use for a member call may make MSVC home this to _this$
        'copier_wm0_mcall': (
            prefix +
            'struct NativeCopierOutputMC { void noop_() {}\n'
            '  NativeCopierOutputMC *FUN_10df9390(); };\n'
            'struct CopierWrapMember0mc { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0mc(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierOutputMC *NativeCopierOutputMC::FUN_10df9390() {',
            'noop_();\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    CopierWrapMember0mc(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # this captured by an immediately-invoked lambda — the [this] capture
        # materializes this into the closure (a stack slot that could be -0x10)
        'copier_wm0_lamcap': (
            prefix +
            'struct CopierWrapMember0lc { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0lc(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            '[this](){}();\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0lc(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # the whole call inside a this-capturing lambda: the closure this-init
        # lands before the arg-setup lea
        'copier_wm0_lamcall': (
            prefix +
            'struct CopierWrapMember0la { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0la(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            '[this]{ NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0la(NativeCopierSource_FUN_10df9440()).agg); }();\n'
            'return this;\n'),
        # noinline forces out-of-line instantiation bookkeeping
        'copier_wm0_noinline': (
            prefix.replace(
                'NativeCopierOutput *FUN_10df9390();',
                '__declspec(noinline) NativeCopierOutput *FUN_10df9390();') +
            'struct CopierWrapMember0ni { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0ni(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0ni(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # return value stored via a pointer local: X *p = this; ...; return p;
        # the named-alias keeps this homed
        'copier_wm0_alias': (
            prefix +
            'struct CopierWrapMember0al { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0al(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'NativeCopierOutput *p = this;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(p,\n'
            '    CopierWrapMember0al(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return p;\n'),
        # class with a user-declared dtor — non-POD this may be homed so the
        # EH funclets can reacquire it
        'copier_wm0_dtor': (
            prefix +
            'struct NativeCopierOutputD { ~NativeCopierOutputD();\n'
            '  NativeCopierOutputD *FUN_10df9390(); };\n'
            'NativeCopierOutputD::~NativeCopierOutputD() {}\n'
            'struct CopierWrapMember0d { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0d(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierOutputD *NativeCopierOutputD::FUN_10df9390() {',
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    CopierWrapMember0d(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # member fn that passes this to a callee which could re-enter/throw:
        # this wrapped in a guard object that needs materialization
        'copier_wm0_thisref': (
            prefix.replace(
                'void thunk_FUN_10defac0(NativeCopierOutput *, NativeCopierAggregate_FUN_10deee60 &)',
                'void thunk_FUN_10defac0(NativeCopierOutput * const &, NativeCopierAggregate_FUN_10deee60 &)') +
            'struct CopierWrapMember0tr { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0tr(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0tr(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # this returned through a static_cast — a cast expression may
        # materialize this
        'copier_wm0_scast': (
            prefix +
            'struct CopierWrapMember0sc { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0sc(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'NativeCopierOutput *self = static_cast<NativeCopierOutput *>(this);\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(self,\n'
            '    CopierWrapMember0sc(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return self;\n'),
        # safebuffers changes the /GS frame layout and may force a this home
        'copier_wm0_safebuf': (
            prefix.replace(
                'NativeCopierOutput *FUN_10df9390();',
                '__declspec(safebuffers) NativeCopierOutput *FUN_10df9390();') +
            'struct CopierWrapMember0sb { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0sb(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'NativeCopierOutput * volatile self = this;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0sb(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # dynamic exception specification throw() adds an estTypeList and
        # changes member-fn this handling
        'copier_wm0_throw0': (
            prefix.replace(
                'NativeCopierOutput *FUN_10df9390();',
                'NativeCopierOutput *FUN_10df9390() throw();') +
            'struct CopierWrapMember0t0 { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0t0(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierOutput *NativeCopierOutput::FUN_10df9390() throw() {',
            'NativeCopierOutput * volatile self = this;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(this,\n'
            '    CopierWrapMember0t0(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # this->self() member call as thunk arg — the receiver-use may force
        # _this$ allocation even though it inlines to plain this
        'copier_wm0_selfmeth': (
            prefix.replace(
                'struct NativeCopierOutput {',
                'struct NativeCopierOutput {\n'
                '  NativeCopierOutput *self_() { return this; }\n') +
            'struct CopierWrapMember0sm { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0sm(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    this->self_(),\n'
            '    CopierWrapMember0sm(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # this-> member call returning a member: thunk(this->get(), agg)
        'copier_wm0_marg': (
            prefix.replace(
                'struct NativeCopierOutput {',
                'struct NativeCopierOutput {\n'
                '  void *m_sink; NativeCopierOutput *get_() { return this; }\n') +
            'struct CopierWrapMember0mg { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0mg(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    this->get_(),\n'
            '    CopierWrapMember0mg(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # this->noop() statement + the expr — the member call receiver use
        # may allocate _this$ even if noop inlines away
        'copier_wm0_mcall2': (
            prefix +
            'struct NativeCopierOutputN { void register_(int) {}\n'
            '  NativeCopierOutputN *FUN_10df9390(); };\n'
            'struct CopierWrapMember0n2 { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0n2(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            'NativeCopierOutputN *NativeCopierOutputN::FUN_10df9390() {',
            'register_(0);\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (NativeCopierOutput *)this,\n'
            '    CopierWrapMember0n2(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # conditional this in arg position: (cond ? this : this) materializes
        # a temp that may land before arg-setup
        'copier_wm0_ternary': (
            prefix +
            'struct CopierWrapMember0t { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0t(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(\n'
            '    (this ? this : (NativeCopierOutput *)0),\n'
            '    CopierWrapMember0t(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return this;\n'),
        # this stored through a pointer-to-pointer — needs this materialized
        'copier_wm0_pptr': (
            prefix +
            'struct CopierWrapMember0pp { NativeCopierAggregate_FUN_10deee60 agg;\n'
            '  CopierWrapMember0pp(const NativeCopierSource_FUN_10df9440 &s) : agg(s) {} };\n',
            sig,
            'NativeCopierOutput *p = this;\n'
            'NativeCopierOutput **pp = &p;\n'
            'NativeCopierEvent_FUN_10df9510().thunk_FUN_10defac0(*pp,\n'
            '    CopierWrapMember0pp(NativeCopierSource_FUN_10df9440()).agg);\n'
            'return *pp;\n'),
    }
    out = {}
    for name, spec in variants.items():
        if isinstance(spec, tuple):
            if len(spec) == 3:
                pfx, fsig, body = spec
            else:
                pfx, fsig, body = spec[0], sig, spec[1]
        else:
            pfx, fsig, body = prefix, sig, spec
        out[name] = (pfx +
                     '\n// Reference entry 10df9390; body size 137 bytes.\n'
                     '#line 1 "ENTRY_10df9390"\n' + fsig + '\n' + body + '}\n')
    return out


def ltcgize(text, keep_extern=()):
    """Make a variant TU self-contained for link /LTCG: external data and
    declared-only member functions become real definitions so the link
    resolves them (calls stay calls — only the reference is satisfied).

    keep_extern names member functions (NAME(args) decl text) that must stay
    undefined in this TU — they are supplied by a paired TU_B source so the
    frontend emits a real construction-call scope for a callee whose body is
    invisible at IL emission."""
    # extern globals -> definitions (first declaration only; later duplicate
    # extern decls stay as declarations so the redefinition is legal)
    defined_globals = set()
    def _global_def(match):
        name = match.group(1)
        if name in defined_globals:
            return match.group(0)
        defined_globals.add(name)
        return f'unsigned int {name} = 0;'
    text = re.sub(r'extern unsigned int (\w+);', _global_def, text)
    text = re.sub(r'extern int (\w+)\(\.\.\.\);\s*\n', '', text)
    # typed free-function decls -> keep decl + emit a stub def
    stubs = []
    seen_stubs = set()
    for m in re.finditer(
            r'^(?:extern )?((?:void|int|bool|unsigned|char|const)\s*'
            r'(?:[\w\* ]*?))\s+(__cdecl |__thiscall |__fastcall )?'
            r'(\w+)\(([^;{]*)\);[ \t]*$', text, re.M):
        ret, conv, name, args = m.groups()
        if conv is None:
            for c in ('__cdecl', '__thiscall', '__fastcall'):
                head, sep, tail = ret.rpartition(' ' + c)
                if sep and tail == '':
                    ret, conv = head, c + ' '
                    break
        if name in seen_stubs or name in keep_extern:
            continue
        seen_stubs.add(name)
        # Opaque call inside every stub: an empty inlined body proves the
        # callee cannot throw, which lets /LTCG elide the EH scopes under
        # test. A volatile indirect call is unanalyzable, so scopes stay.
        stubs.append(f'__declspec(noinline) {ret} {conv or ""}{name}({args})'
                     ' { ltcg_opaque();'
                     + ('' if ret.strip() == 'void' else ' return 0;') + ' }')
    # member decls inside structs: NAME(args); or ~NAME(); with no body —
    # skip members that already have an out-of-class definition in the file
    for sm in re.finditer(r'struct (\w+)[^;{]*\{(.*?)\};', text, re.S):
        sname, body = sm.groups()
        for mm in re.finditer(
                r'(?<![\w:~])(~?)(\w+)\(([^;{}]*)\)'
                r'(?:\s*(?:noexcept|const|override|final))*;', body):
            tilde, mname, args = mm.groups()
            if mname != sname.lstrip('~') and '~' + sname != tilde + mname:
                continue
            if f'{tilde}{mname}({args})' in keep_extern:
                continue
            defined = (f'{sname}::~{sname}(' if tilde
                       else f'{sname}::{sname}(')
            if defined in text:
                continue
            key = f'{sname}::{tilde}{mname}({args})'
            if key in seen_stubs:
                continue
            seen_stubs.add(key)
            if tilde:
                stubs.append(f'__declspec(noinline) {sname}::~{sname}()'
                             ' noexcept { ltcg_opaque(); }')
            else:
                stubs.append(f'__declspec(noinline) {sname}::{sname}({args})'
                             ' { ltcg_opaque(); }')
    # CRT entry points referenced by /EHsc + /GS codegen — stubbed so the
    # /NODEFAULTLIB link resolves them; they are only call targets
    text += ('\nvoid (__cdecl * volatile ltcg_opaque)(void) = 0;\n'
             'extern "C" {\n'
             'int __cdecl __CxxFrameHandler3(void *, void *, void *, void *)'
             ' { return 0; }\n'
             'void __fastcall __security_check_cookie(unsigned int) { }\n'
             'unsigned int __security_cookie = 0x12345678;\n'
             '}\n'
             'void __cdecl __std_terminate() { for (;;) { } }\n')
    # Export every class so /LTCG does not dead-strip the .text we want to
    # inspect — a /NOENTRY dll has no other roots.
    text = re.sub(r'\bstruct (\w+)',
                  r'struct __declspec(dllexport) \1', text)
    return text + '\n// ltcg link stubs\n' + '\n'.join(stubs) + '\n'


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
    # LTCG probes: the native repoint signature (call-scope spill + funclet
    # reading it bare) implies member ctors were real calls at frontend
    # lowering and inlined afterwards — the /GL + /LTCG shape. Emit sources
    # for a separate /GL compile + /LTCG link step in the probe build.
    ltcg_dir = ROOT / 'src/generated/ltcg_variants'
    ltcg_dir.mkdir(parents=True, exist_ok=True)
    for name in ('op_ref_outline_split', 'op_impl_smart_outline_split',
                 'op_impl_both_outline_split', 'op_impl_smart_split',
                 'op_ref_split', 'op_ref_outline', 'op_impl_smart_outline',
                 'op_impl_both_outline', 'op_impl_m14_outline',
                 'copier_nested_all', 'copier_temp_arg', 'copier_byval',
                 'copier_bound_nested', 'copier_named_novol',
                 'copier_nested_cref', 'copier_bound_src_nested',
                 'copier_named_src_nested', 'copier_nested_rref',
                 'copier_lambda_agg', 'copier_nested_ptr',
                 'copier_nested_bcref', 'copier_nested_bref',
                 'copier_pa_arg', 'copier_pa_ptr', 'copier_union_place',
                 'copier_wrap_member', 'copier_wrap_member0',
                 'copier_buf_place'):
        (ltcg_dir / (name + '_ltcg.cpp')).write_text(
            ltcgize((VARIANTS / (name + '.cpp')).read_text()))
    # Two-TU probes: the member ctor stays DECLARED-ONLY in TU_A so the
    # frontend emits a construction-call scope against an opaque callee;
    # TU_B supplies the body and link /LTCG inlines it.  If the scope spill
    # was committed in the IL, the repoint survives — matching the native
    # nested-member shape (a real multi-TU build would do exactly this).
    op_impl_a = (VARIANTS / 'op_impl_both_outline_split.cpp').read_text()
    op_impl_a = re.sub(
        r'NativeOpSmart14_thunk_FUN_101ba1b0\(void \*value\) \{[^}]*\}',
        'NativeOpSmart14_thunk_FUN_101ba1b0(void *value);', op_impl_a)
    (ltcg_dir / 'op_impl_2tu_a_ltcg.cpp').write_text(ltcgize(
        op_impl_a,
        keep_extern=('NativeOpSmart14_thunk_FUN_101ba1b0(void *value)',
                     '~NativeOpSmart14_thunk_FUN_101ba1b0()')))
    (ltcg_dir / 'op_impl_2tu_b_ltcg.cpp').write_text(
        'void __cdecl thunk_FUN_1123fce0(void *);\n'
        'struct NativeOpRepSub { void *p; ~NativeOpRepSub(); };\n'
        'struct __declspec(dllexport) NativeOpSmart14_thunk_FUN_101ba1b0 {'
        ' NativeOpRepSub rep;'
        ' NativeOpSmart14_thunk_FUN_101ba1b0(void *value);'
        ' ~NativeOpSmart14_thunk_FUN_101ba1b0(); };\n'
        'NativeOpSmart14_thunk_FUN_101ba1b0::NativeOpSmart14_thunk_FUN_101ba1b0'
        '(void *value) { rep.p = value; if (value != 0)'
        ' thunk_FUN_1123fce0((char *)value + 4); }\n'
        'NativeOpSmart14_thunk_FUN_101ba1b0::~NativeOpSmart14_thunk_FUN_101ba1b0()'
        ' { if (rep.p != 0) thunk_FUN_1123fce0(rep.p); }\n')
    op_ref_a = (VARIANTS / 'op_ref_outline_split.cpp').read_text()
    op_ref_a = re.sub(
        r'NativeOpRefMember_thunk_FUN_101ba1b0::NativeOpRefMember_thunk_FUN_101ba1b0'
        r'\(void \*p\) \{[^}]*\}\n', '', op_ref_a)
    (ltcg_dir / 'op_ref_2tu_a_ltcg.cpp').write_text(ltcgize(
        op_ref_a,
        keep_extern=('NativeOpRefMember_thunk_FUN_101ba1b0(void *p)',
                     '~NativeOpRefMember_thunk_FUN_101ba1b0()')))
    (ltcg_dir / 'op_ref_2tu_b_ltcg.cpp').write_text(
        'void __cdecl thunk_FUN_1123fce0(void *);\n'
        'struct __declspec(dllexport) NativeOpRefMember_thunk_FUN_101ba1b0 {'
        ' void *rep; NativeOpRefMember_thunk_FUN_101ba1b0(void *p);'
        ' ~NativeOpRefMember_thunk_FUN_101ba1b0(); };\n'
        'NativeOpRefMember_thunk_FUN_101ba1b0::NativeOpRefMember_thunk_FUN_101ba1b0'
        '(void *p) { rep = p; }\n'
        'NativeOpRefMember_thunk_FUN_101ba1b0::~NativeOpRefMember_thunk_FUN_101ba1b0()'
        ' { if (rep != 0) thunk_FUN_1123fce0(rep); }\n')
    print(f'{len(manifest)} ctor-scope variants emitted')


if __name__ == '__main__':
    main()

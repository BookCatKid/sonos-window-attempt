#!/usr/bin/env python3
"""Apply reference-driven signature recovery to generated bulk parts.

Runs ``reference_stdcall`` then ``reference_arity`` (from compile_scstr_cpp.py)
over every ``src/generated/bulk/*.cpp`` so bare ``FUN_*`` bodies pick up the
``__stdcall`` convention and omitted stack arguments that the installed image
proves via ``ret N``.
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))

from compile_scstr_cpp import (reference_arity, reference_narrow_returns,
                               reference_stdcall)

DEFINITION = re.compile(
    r'(?m)^([A-Za-z_](?:[\w\s\*<>,&]|::)*?\s+(?:__cdecl|__stdcall|__fastcall|__thiscall'
    r'\s+)?)(FUN_\w+)\s*\(([^;{}]*)\)\s*\n\{')
FORWARD_DECL = re.compile(
    r'(?m)^(?:/\*.*?\*/\s*)?[A-Za-z_](?:[\w\s\*<>,&]|::)*?\s+'
    r'(?:__cdecl|__stdcall|__fastcall|__thiscall\s+)?FUN_\w+\s*'
    r'\([^;{}]*\)\s*;')


def sync_forward_decls(source):
    """Rewrite same-unit forward decls to match transformed definitions.

    ``reference_stdcall``/``reference_arity`` change a definition's convention
    or arity but only know about variadic ``extern`` decls; the bulk emitter's
    typed forward decls would then conflict with the definition.
    """
    defs = {m.group(2): m for m in DEFINITION.finditer(source)}
    if not defs:
        return source, 0
    changed = 0

    def replace(match):
        nonlocal changed
        decl = match.group(0)
        if re.search(r'\(\s*\.\.\.\s*\)', decl):
            # variadic overload for wrong-arity callers; keep as-is
            return decl
        name = re.search(r'(FUN_\w+)\s*\(', decl).group(1)
        definition = defs.get(name)
        if not definition:
            return decl
        comment = re.match(r'(/\*.*?\*/\s*)', decl)
        prefix = comment.group(1) if comment else ''
        canonical = (prefix + definition.group(1) + name +
                     '(' + definition.group(3).strip() + ');')
        if canonical != decl:
            changed += 1
        return canonical

    return FORWARD_DECL.sub(replace, source), changed


THISCALL_DEF = re.compile(
    r'(?m)^((?:[^\n]*?\*/\s*)?[A-Za-z_](?:[\w\s\*<>,&]|::)*?\s+)__thiscall\s+'
    r'(FUN_\w+)\s*\(([^;{}]*)\)\s*\{')
THISCALL_DECL = re.compile(
    r'(?m)^(?:[^\n]*?\*/\s*)?[A-Za-z_](?:[\w\s\*<>,&]|::)*?\s+__thiscall\s+'
    r'FUN_\w+\s*\([^;{}]*\)\s*;\n?')
CALL = re.compile(r'(?<![\w:.>~])(FUN_\w+)\s*\(')


def _split_args(text):
    depth = angle = 0
    args = []
    start = 0
    for pos, char in enumerate(text):
        if char in '([{':
            depth += 1
        elif char in ')]}':
            depth -= 1
        elif char == '<':
            angle += 1
        elif char == '>' and angle:
            angle -= 1
        elif char == ',' and depth == 0 and angle == 0:
            args.append(text[start:pos])
            start = pos + 1
    args.append(text[start:])
    return args


def lower_free_thiscall(source):
    """Lower free __thiscall functions to Recovered_Bulk members.

    MSVC rejects __thiscall outside member functions (C3865). A real member
    keeps the reference codegen exactly: ``this`` in ecx, remaining arguments
    on the stack. Definitions become ``R Recovered_Bulk::FUN_x(rest)`` with a
    synthetic ``param_1 = (T)this`` prologue, call sites
    ``FUN_x(a, rest)`` become ``((Recovered_Bulk*)a)->FUN_x(rest)``, and stale
    free forward declarations are removed.
    """
    methods = []
    renamed = set()

    def definition(match):
        result, name, params = match.groups()
        parts = result.split('*/')
        if len(parts) > 1:
            # `result` carries comment text: `/* ... */ T` keeps the whole
            # comment in the head, while a stray `*/ T` is the unclosed tail
            # of a multi-line comment and must re-close it.
            member_type = parts[-1]
            head_result = result if '/*' in result else '*/' + parts[-1]
        else:
            member_type = head_result = result
        params = params.strip()
        pieces = _split_args(params)
        first, rest = pieces[0], ','.join(pieces[1:]).strip()
        decl_params = rest if rest else 'void'
        # The member gets an ``m_`` name so bare ``FUN_x``/``&FUN_x`` keep
        # resolving to the free extern decl; overloading them with the
        # member makes address-taken and call sites ambiguous.
        methods.append(
            f' {" ".join(member_type.split())} __thiscall m_{name}({decl_params});'
            f' template<class... A> int m_{name}(A...);')
        renamed.add(name)
        prologue = ''
        # ``first`` may span lines when the this parameter is a template
        # type; collapse whitespace so the tail-identifier split works.
        param = re.match(r'(.+?)([A-Za-z_]\w*)\s*$',
                         ' '.join(first.strip().split()))
        if param and param.group(2) != 'void':
            ptype = param.group(1)
            prologue = (f'\n  {ptype}{param.group(2)} = '
                        f'({ptype})this;')
        head = (f'{" ".join(head_result.split())} __thiscall '
                f'Recovered_Bulk::m_{name}({decl_params})\n{{{prologue}')
        return head

    rewritten = THISCALL_DEF.sub(definition, source)
    if not renamed:
        return source, 0
    rewritten = THISCALL_DECL.sub('', rewritten)

    out = []
    pos = 0
    for match in CALL.finditer(rewritten):
        name = match.group(1)
        if name not in renamed:
            continue
        line_start = rewritten.rfind('\n', 0, match.start()) + 1
        prefix = rewritten[line_start:match.start()]
        word = re.search(r'([A-Za-z_]\w*)\s*$', prefix)
        # ``T name(...)`` or ``extern T name(...)`` on the line is a
        # declaration, not a call site; rewriting it leaves
        # ``extern int ((Recovered_Bulk*)...)->f()``.
        if ((word or re.search(r'[*&>]\s*$', prefix)) and
                (not word or word.group(1) not in (
                    'return', 'case', 'throw', 'sizeof', 'delete', 'new',
                    'while', 'for', 'if', 'switch', 'goto', 'else', 'do'))):
            continue
        depth = 1
        scan = match.end()
        while depth and scan < len(rewritten):
            if rewritten[scan] == '(':
                depth += 1
            elif rewritten[scan] == ')':
                depth -= 1
            scan += 1
        args = _split_args(rewritten[match.end():scan - 1])
        if not args[0].strip():
            continue
        first, rest = args[0].strip(), ','.join(args[1:])
        out.append(rewritten[pos:match.start()])
        out.append(f'((Recovered_Bulk*)({first}))->m_' + name + '(' + rest + ')')
        pos = scan
    out.append(rewritten[pos:])
    rewritten = ''.join(out)

    # The struct's member decls use bare ``std`` names (``basic_ostream``),
    # so it must land after the ``using namespace std`` line, not before.
    existing = re.search(r'struct Recovered_Bulk \{(.*?)\n?\};',
                         rewritten, re.S)
    if existing:
        # Re-runs on already-lowered files must merge into the first struct:
        # a second definition is a hard redefinition error.
        known = set(re.findall(r'\bFUN_\w+', existing.group(1)))
        merged = ''.join(m for m in methods
                         if re.search(r'FUN_\w+', m).group(0) not in known)
        if merged:
            rewritten = (rewritten[:existing.start(1)] +
                         existing.group(1) + merged +
                         rewritten[existing.end(1):])
        return rewritten, len(renamed)
    anchor = rewritten.find('using namespace std;')
    struct = ('struct Recovered_Bulk { char _pad;' + ''.join(methods) + ' };\n')
    if anchor >= 0:
        anchor += len('using namespace std;')
        rewritten = rewritten[:anchor] + '\n' + struct + rewritten[anchor:]
    else:
        rewritten = struct + rewritten
    return rewritten, len(renamed)


STDCALL_DECL = re.compile(
    r'\b__stdcall\s+((?:thunk_)?FUN_\w+)\s*\(')
FUNREF_CAST = re.compile(
    r'\(\(\s*[^(]*\(\*\)\s*\([^()]*\)\s*\)\s*&?((?:thunk_)?FUN_\w+)\)')


def sync_funref_casts(source):
    """Match `((R(*)(P))FUN_x)` casts to `__stdcall` decls.

    cpp_source emits the cast with the cdecl spelling, then
    ``reference_stdcall`` upgrades the decl — the cast must gain the same
    convention or overload resolution finds no exact candidate.
    """
    names = set(STDCALL_DECL.findall(source))
    if not names:
        return source, 0
    changed = 0

    def replace(match):
        nonlocal changed
        if match.group(1) in names:
            changed += 1
            return match.group(0).replace('(*)', '(__stdcall*)', 1)
        return match.group(0)

    return FUNREF_CAST.sub(replace, source), changed


def main():
    total_stdcall = total_arity = total_decls = total_thiscall = total_narrow = total_casts = files = 0
    for path in sorted((ROOT / 'src/generated').rglob('*.cpp')):
        source = path.read_text()
        source, n_thiscall = lower_free_thiscall(source)
        source, n_stdcall = reference_stdcall(source)
        source, n_arity = reference_arity(source)
        source, n_narrow = reference_narrow_returns(source)
        source, n_decls = sync_forward_decls(source)
        source, n_casts = sync_funref_casts(source)
        if (n_stdcall or n_arity or n_decls or n_thiscall or n_narrow
                or n_casts):
            path.write_text(source)
            files += 1
            total_stdcall += n_stdcall
            total_arity += n_arity
            total_decls += n_decls
            total_thiscall += n_thiscall
            total_narrow += n_narrow
            total_casts += n_casts
    print(f'__stdcall: {total_stdcall}, arity: {total_arity}, '
          f'decls synced: {total_decls}, thiscall->fastcall: {total_thiscall}, '
          f'narrowed returns: {total_narrow}, files changed: {files}')


if __name__ == '__main__':
    main()

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

from compile_scstr_cpp import reference_arity, reference_stdcall

DEFINITION = re.compile(
    r'(?m)^([A-Za-z_][\w\s\*]*?\s+(?:__cdecl|__stdcall|__fastcall|__thiscall'
    r'\s+)?)(FUN_\w+)\s*\(([^;{}]*)\)\s*\n\{')
FORWARD_DECL = re.compile(
    r'(?m)^(?:/\*.*?\*/\s*)?[A-Za-z_][\w\s\*]*?\s+'
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
    r'(?m)^((?:/\*[^\n]*?\*/\s*)?[A-Za-z_][\w\s\*]*?\s+)__thiscall\s+'
    r'(FUN_\w+)\s*\(([^;{}]*)\)\s*\n\{')
THISCALL_DECL = re.compile(
    r'(?m)^(?:/\*[^\n]*?\*/\s*)?[A-Za-z_][\w\s\*]*?\s+__thiscall\s+'
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
        params = params.strip()
        pieces = _split_args(params)
        first, rest = pieces[0], ','.join(pieces[1:]).strip()
        decl_params = rest if rest else 'void'
        methods.append(
            f' {" ".join(result.split())} __thiscall {name}({decl_params});'
            f' template<class... A> int {name}(A...);')
        renamed.add(name)
        prologue = ''
        param = re.match(r'(.*?)([A-Za-z_]\w*)\s*$', first.strip())
        if param and param.group(2) != 'void':
            ptype = param.group(1)
            prologue = (f'\n  {ptype}{param.group(2)} = '
                        f'({ptype})this;')
        head = (f'{" ".join(result.split())} __thiscall '
                f'Recovered_Bulk::{name}({decl_params})\n{{{prologue}')
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
        out.append(f'((Recovered_Bulk*)({first}))->' + name + '(' + rest + ')')
        pos = scan
    out.append(rewritten[pos:])
    rewritten = ''.join(out)

    anchor = rewritten.find('using namespace std;')
    struct = ('struct Recovered_Bulk { char _pad;' + ''.join(methods) + ' };\n')
    if anchor >= 0:
        rewritten = rewritten[:anchor] + struct + rewritten[anchor:]
    else:
        rewritten = struct + rewritten
    return rewritten, len(renamed)


def main():
    total_stdcall = total_arity = total_decls = total_thiscall = files = 0
    for path in sorted((ROOT / 'src/generated/bulk').glob('*.cpp')):
        source = path.read_text()
        source, n_thiscall = lower_free_thiscall(source)
        source, n_stdcall = reference_stdcall(source)
        source, n_arity = reference_arity(source)
        source, n_decls = sync_forward_decls(source)
        if n_stdcall or n_arity or n_decls or n_thiscall:
            path.write_text(source)
            files += 1
            total_stdcall += n_stdcall
            total_arity += n_arity
            total_decls += n_decls
            total_thiscall += n_thiscall
    print(f'__stdcall: {total_stdcall}, arity: {total_arity}, '
          f'decls synced: {total_decls}, thiscall->fastcall: {total_thiscall}, '
          f'files changed: {files}')


if __name__ == '__main__':
    main()

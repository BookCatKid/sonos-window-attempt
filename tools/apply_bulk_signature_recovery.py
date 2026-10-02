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


def main():
    total_stdcall = total_arity = total_decls = files = 0
    for path in sorted((ROOT / 'src/generated/bulk').glob('*.cpp')):
        source = path.read_text()
        source, n_stdcall = reference_stdcall(source)
        source, n_arity = reference_arity(source)
        source, n_decls = sync_forward_decls(source)
        if n_stdcall or n_arity or n_decls:
            path.write_text(source)
            files += 1
            total_stdcall += n_stdcall
            total_arity += n_arity
            total_decls += n_decls
    print(f'__stdcall: {total_stdcall}, arity: {total_arity}, '
          f'decls synced: {total_decls}, files changed: {files}')


if __name__ == '__main__':
    main()

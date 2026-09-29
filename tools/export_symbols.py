#!/usr/bin/env python3
"""Export the complete Ghidra symbol table from a saved offline DLL project."""

import argparse
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
GHIDRA = Path('/opt/homebrew/opt/ghidra/libexec/support/analyzeHeadless')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--project-dir', type=Path,
                        default=ROOT / 'analysis' / 'thunk-recovery-full' / 'ghidra')
    parser.add_argument('--project-name', default='WindowAttempt')
    parser.add_argument('--program', default='sclib-csharp.dll')
    parser.add_argument('--output', type=Path,
                        default=ROOT / 'analysis' / 'thunk-recovery-full' / 'symbols.jsonl')
    args = parser.parse_args()

    project_dir = args.project_dir.resolve()
    if not GHIDRA.is_file():
        parser.error(f'Ghidra analyzeHeadless missing: {GHIDRA}')
    if not (project_dir / f'{args.project_name}.gpr').is_file():
        parser.error(f'saved Ghidra project missing: {project_dir / (args.project_name + ".gpr")}')

    output = args.output.resolve()
    output.parent.mkdir(parents=True, exist_ok=True)
    log = output.with_suffix('.log')
    command = [
        str(GHIDRA), str(project_dir), args.project_name,
        '-process', args.program, '-noanalysis', '-readOnly',
        '-scriptPath', str(ROOT / 'tools' / 'ghidra'),
        '-postScript', 'ExportSymbols.java', str(output),
        '-log', str(log),
    ]
    subprocess.run(command, check=True)
    print(output)


if __name__ == '__main__':
    main()

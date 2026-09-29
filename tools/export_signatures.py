#!/usr/bin/env python3
"""Export Ghidra function signatures from the saved offline DLL project."""

import argparse
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
GHIDRA = Path('/opt/homebrew/opt/ghidra/libexec/support/analyzeHeadless')
PROJECT = ROOT / 'analysis' / 'ghidra'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--namespace', default='SCStr')
    parser.add_argument('--output', type=Path,
                        default=ROOT / 'analysis' / 'scstr-signatures.jsonl')
    parser.add_argument('--project-dir', type=Path, default=PROJECT,
                        help='Offline Ghidra project directory, including a recovered-target project')
    args = parser.parse_args()
    project = args.project_dir.resolve()
    if not (project / 'WindowAttempt.gpr').is_file():
        parser.error('saved Ghidra project missing')
    output = args.output.resolve()
    output.parent.mkdir(parents=True, exist_ok=True)
    command = [str(GHIDRA), str(project), 'WindowAttempt',
               '-process', 'sclib-csharp.dll', '-noanalysis', '-readOnly',
               '-scriptPath', str(ROOT / 'tools' / 'ghidra'),
               '-postScript', 'ExportSignatures.java', str(output), args.namespace,
               '-log', str(output.with_suffix('.log'))]
    subprocess.run(command, check=True)
    print(output)


if __name__ == '__main__':
    main()

#!/usr/bin/env python3
"""Run a callee-prototype propagation experiment in a separately copied project."""
import argparse,subprocess
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
GHIDRA=Path('/opt/homebrew/opt/ghidra/libexec/support/analyzeHeadless')

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--project-dir',type=Path,required=True)
    p.add_argument('--callers',type=Path,required=True)
    p.add_argument('--callees',type=Path,required=True)
    p.add_argument('--output-dir',type=Path,required=True)
    p.add_argument('--storage-only',action='store_true',
                   help='Commit inferred parameter storage/widths without speculative pointee datatypes')
    a=p.parse_args();project=a.project_dir.resolve()
    originals={ROOT/'analysis/ghidra',ROOT/'analysis/thunk-recovery-full/ghidra'}
    if project in originals:p.error('Signature inference modifies its database; use an isolated project copy')
    if not (project/'WindowAttempt.gpr').is_file():p.error('Missing copied WindowAttempt project')
    if not a.callers.is_file() or not a.callees.is_file():p.error('Missing entry-list input')
    out=a.output_dir.resolve();out.mkdir(parents=True,exist_ok=True)
    command=[str(GHIDRA),str(project),'WindowAttempt','-process','sclib-csharp.dll','-noanalysis',
             '-scriptPath',str(ROOT/'tools/ghidra'),'-postScript','PropagateCallSignatures.java',
             str(a.callers.resolve()),str(a.callees.resolve()),str(out),
             str(not a.storage_only).lower(),'-log',str(out/'headless.log')]
    with (out/'console.log').open('w') as log:
        result=subprocess.run(command,stdout=log,stderr=subprocess.STDOUT)
    if result.returncode:raise SystemExit(f'Ghidra failed; see {out / "console.log"}')
    print(out/'after.jsonl')

if __name__=='__main__':main()

#!/usr/bin/env python3
"""Export and validate native/SSA evidence from the isolated, read-only Ghidra project."""
import argparse
import gzip
import hashlib
import json
import subprocess
from pathlib import Path
from recover_container_abi import ROOT, isolated_path, project_hashes


def validate(path, expected):
    rows=[]
    with gzip.open(path,'rt') if path.suffix=='.gz' else path.open() as stream:
        for line in stream:
            row=json.loads(line);ranges=[(int(a,16),int(b,16)) for a,b in row['native_ranges']]
            def inside(address):return any(a<=int(address,16)<=b for a,b in ranges)
            if sum(b-a+1 for a,b in ranges)!=row['body_bytes']:raise ValueError('Native extent changed')
            if any(not inside(i['address']) or not inside(f'{int(i["address"],16)+i["length"]-1:x}') for i in row['instructions']):
                raise ValueError('Instruction crosses native body')
            outside=sum(not inside(op['native_address']) for op in row['high_pcode'])
            if outside!=row['high_operations_outside_native_body'] or row['eligible_for_automated_lowering']!=(outside==0):
                raise ValueError('Unreliable SSA eligibility marker')
            rows.append({'entry':row['entry'],'body_bytes':row['body_bytes'],
                         'instructions':len(row['instructions']),'high_operations':len(row['high_pcode']),
                         'outside_body_operations':outside,'eligible_for_automated_lowering':outside==0})
    if len(rows)!=len(expected) or {r['entry'] for r in rows}!=expected:raise ValueError('Incomplete structured export')
    return rows


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('entries',type=Path)
    p.add_argument('--output-dir',type=Path,required=True)
    p.add_argument('--headless',type=Path,default=Path('/opt/homebrew/opt/ghidra/libexec/support/analyzeHeadless'))
    a=p.parse_args();isolated=isolated_path(ROOT)
    originals=[ROOT/'analysis/thunk-recovery-full/ghidra',ROOT/'analysis/ghidra']
    before={str(x):project_hashes(x) for x in originals}
    if any(not hashes for hashes in before.values()):raise ValueError('Protected original project missing')
    output=a.output_dir.resolve()
    for project in [isolated,*originals]:
        if output==project.resolve() or project.resolve() in output.parents:raise ValueError('Export overlaps project')
    output.mkdir(parents=True,exist_ok=True);export=output/'functions.jsonl.gz'
    expected=set(a.entries.read_text().splitlines())
    command=[str(a.headless),str(isolated),'WindowAttempt','-process','sclib-csharp.dll',
             '-noanalysis','-readOnly','-scriptPath',str(ROOT/'tools/ghidra'),'-postScript',
             'ExportStructuredRecovery.java',str(a.entries.resolve()),str(export)]
    try:
        with (output/'console.txt').open('w') as log:
            subprocess.run(command,stdout=log,stderr=subprocess.STDOUT,check=True,cwd=ROOT)
        console=(output/'console.txt').read_text()
        if 'STRUCTURED_EXPORT_COMPLETE' not in console or 'REPORT SCRIPT ERROR' in console:raise ValueError('Ghidra script failed')
        rows=validate(export,expected)
    finally:
        if before!={str(x):project_hashes(x) for x in originals}:raise RuntimeError('Protected Ghidra project changed')
    report={'original_projects_unchanged':True,'protected_project_hashes':before,
            'export_sha256':hashlib.sha256(export.read_bytes()).hexdigest(),
            'script_sha256':hashlib.sha256((ROOT/'tools/ghidra/ExportStructuredRecovery.java').read_bytes()).hexdigest(),
            'functions':rows,'coverage_added':0}
    (output/'execution-proof.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps({k:v for k,v in report.items() if k!='protected_project_hashes'}))


if __name__=='__main__':main()

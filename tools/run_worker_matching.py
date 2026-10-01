#!/usr/bin/env python3
"""Keep reference evidence and strict library comparisons on the Windows worker."""
import argparse
import hashlib
import json
from pathlib import Path
from match_library_objects import match

REFERENCE_SHA256='3518f71487c58f378cc62562d257e1ffd7145288aba9153823b49ec3009af9ca'


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--evidence-root',type=Path,required=True)
    p.add_argument('--objects-root',type=Path,required=True)
    p.add_argument('--output',type=Path,required=True)
    a=p.parse_args()
    reference=a.evidence_root/'reference/SonosV2/sclib-csharp.dll'
    inventory=a.evidence_root/'analysis/thunk-recovery-full/final-function-inventory.tsv'
    data=reference.read_bytes()
    if hashlib.sha256(data).hexdigest()!=REFERENCE_SHA256:raise ValueError('Wrong worker reference DLL')
    if not inventory.is_file():raise ValueError('Worker function inventory is missing')
    a.output.mkdir(parents=True,exist_ok=True);summaries=[]
    for directory in sorted(a.objects_root.iterdir()):
        if not directory.is_dir():continue
        objects=sorted(directory.glob('*.obj'))
        if not objects:continue
        report=match(objects,data,inventory)
        (a.output/(directory.name+'.json')).write_text(json.dumps(report,indent=2)+'\n')
        summary={k:v for k,v in report.items() if k not in ('functions','objects')}
        summary['variant']=directory.name;summaries.append(summary)
        print(json.dumps(summary),flush=True)
    if not summaries:raise ValueError('No library variants compiled')
    (a.output/'summary.json').write_text(json.dumps(summaries,indent=2)+'\n')


if __name__=='__main__':main()

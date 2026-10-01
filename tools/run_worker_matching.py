#!/usr/bin/env python3
"""Keep reference evidence and strict library comparisons on the Windows worker."""
import argparse
import csv
import hashlib
import json
from pathlib import Path
from match_library_objects import match
from classify_functions import ROOT,section_map
import compare_compiled_ghidra as compare


def members(objects_root,evidence_root,data,output):
    manifest=json.loads((ROOT/'src/generated/member_abi/tranches.json').read_text())
    compare.DEFAULT_SYMBOLS=evidence_root/'analysis/thunk-recovery-full/symbols.jsonl'
    targets=compare.load_symbol_vas(compare.DEFAULT_SYMBOLS)
    base,sections=section_map(data);compare.add_scstr_export_targets(targets,data,base,sections)
    summaries=[]
    for item in manifest:
        obj=objects_root/(item['object']+'.obj')
        if not obj.is_file():continue
        directory=evidence_root/item['directory']
        rows=compare.compare_directory(directory,data,base,sections,targets,obj)
        if not rows:raise ValueError('Empty member comparison: '+item['object'])
        with (output/(item['object']+'.tsv')).open('w',newline='') as stream:
            writer=csv.DictWriter(stream,fieldnames=rows[0].keys(),delimiter='\t');writer.writeheader();writer.writerows(rows)
        exact=[r for r in rows if r['exact_after_known_relocations']]
        summary={'object':item['object'],'object_sha256':hashlib.sha256(obj.read_bytes()).hexdigest(),
                 'index_sha256':hashlib.sha256((directory/'compiled-index.tsv').read_bytes()).hexdigest(),
                 'compiled_functions':len(rows),'exact_functions':len(exact),
                 'exact_body_bytes':sum(r['reference_bytes'] for r in exact),'coverage_added':0}
        summaries.append(summary);print(json.dumps(summary),flush=True)
    if not summaries:raise ValueError('No member objects found')
    return summaries

REFERENCE_SHA256='3518f71487c58f378cc62562d257e1ffd7145288aba9153823b49ec3009af9ca'
INVENTORY_SHA256='5ad6a6707036175ed5883d022e675844774b67b6d2f02d9dc65aa7e01f7835c2'


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--evidence-root',type=Path,required=True)
    group=p.add_mutually_exclusive_group(required=True)
    group.add_argument('--objects-root',type=Path)
    group.add_argument('--member-objects-root',type=Path)
    p.add_argument('--output',type=Path,required=True)
    a=p.parse_args()
    reference=a.evidence_root/'reference/SonosV2/sclib-csharp.dll'
    inventory=a.evidence_root/'analysis/thunk-recovery-full/final-function-inventory.tsv'
    data=reference.read_bytes()
    if hashlib.sha256(data).hexdigest()!=REFERENCE_SHA256:raise ValueError('Wrong worker reference DLL')
    if not inventory.is_file():raise ValueError('Worker function inventory is missing')
    if hashlib.sha256(inventory.read_bytes()).hexdigest()!=INVENTORY_SHA256:raise ValueError('Wrong worker native inventory')
    a.output.mkdir(parents=True,exist_ok=True);summaries=[]
    if a.member_objects_root:
        summaries=members(a.member_objects_root,a.evidence_root,data,a.output)
        (a.output/'summary.json').write_text(json.dumps(summaries,indent=2)+'\n')
        return
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

#!/usr/bin/env python3
"""Reverify pinned upstream C objects and audit distinct exact executable bodies.

This extends the object-body audit only. It does not assert placement in a final
DLL, or award bytes for runtime identities, forwarding aliases, data or padding.
"""
import argparse
import csv
import hashlib
import json
from pathlib import Path
from audit_recovery_coverage import audit
from classify_functions import ROOT, DLL
from fetch_library_sources import SOURCES
from match_library_objects import match


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('artifact_root',type=Path)
    p.add_argument('--variants',nargs='+',default=['zlib_o2','expat_on_o2'])
    p.add_argument('--baseline',type=Path,required=True)
    p.add_argument('--output-dir',type=Path,required=True)
    a=p.parse_args();root=a.artifact_root.resolve()
    toolchain=(root/'toolchain.txt').read_text()
    if '19.28.29919' not in toolchain or 'for x86' not in toolchain:raise ValueError('Wrong library compiler')
    sources=json.loads((root/'sources.json').read_text())
    if sources!=SOURCES:raise ValueError('Library archives are not the pinned upstream C sources')
    variants=json.loads((root/'variants.json').read_text())
    available={item['library']+'_'+(item['variant'].lower() if item['library']=='expat' else item['variant']) for item in variants}
    unknown=set(a.variants)-available
    if unknown:raise ValueError('Unrecorded library configurations: '+str(sorted(unknown)))
    ref=DLL.read_bytes();baseline=json.loads(a.baseline.read_text())
    if hashlib.sha256(ref).hexdigest()!=baseline['reference_sha256']:raise ValueError('Reference differs from baseline')
    reports=[Path(r['path']) for r in baseline['reports']]
    a.output_dir.mkdir(parents=True,exist_ok=True);results=[]
    for variant in a.variants:
        objects=sorted((root/variant).glob('*.obj'))
        if not objects:raise ValueError('Missing library objects: '+variant)
        proof=match(objects,ref,ROOT/'analysis/thunk-recovery-full/final-function-inventory.tsv')
        (a.output_dir/(variant+'-proof.json')).write_text(json.dumps(proof,indent=2)+'\n')
        report=a.output_dir/(variant+'-match-report.tsv')
        with report.open('w',newline='') as stream:
            fields=['entry','name','reference_bytes','compiled_bytes','relocations','unresolved_relocations','exact_after_known_relocations']
            writer=csv.DictWriter(stream,fieldnames=fields,delimiter='\t');writer.writeheader()
            for row in proof['functions']:
                exact=row['closed_graph_exact']
                writer.writerow({'entry':row['entry'],'name':row['symbol'],'reference_bytes':row['bytes'],
                                 'compiled_bytes':row['bytes'],'relocations':row['relocations'],
                                 'unresolved_relocations':row['unresolved_relocations'],
                                 'exact_after_known_relocations':exact})
        reports.append(report)
        result={'variant':variant,'exact_functions':proof['closed_graph_exact_functions'],
                'exact_body_bytes':proof['closed_graph_body_bytes'],'proof_sha256':hashlib.sha256((a.output_dir/(variant+'-proof.json')).read_bytes()).hexdigest()}
        results.append(result);print(json.dumps(result),flush=True)
    coverage=audit(reports)
    coverage['new_distinct_functions']=coverage['exact_distinct_functions_after_relocation']-baseline['exact_distinct_functions_after_relocation']
    coverage['new_distinct_executable_bytes']=coverage['exact_reference_body_bytes_union']-baseline['exact_reference_body_bytes_union']
    (a.output_dir/'coverage-audit.json').write_text(json.dumps(coverage,indent=2)+'\n')
    summary={'variants':results,'baseline':str(a.baseline),
             'new_distinct_executable_bytes':coverage['new_distinct_executable_bytes'],
             'executable_byte_coverage_percent':coverage['executable_byte_coverage_percent'],
             'provenance':{name:hashlib.sha256((root/name).read_bytes()).hexdigest() for name in ['sources.json','variants.json','toolchain.txt','environment.json']},
             'source_archives':sources,'library_environment':json.loads((root/'environment.json').read_text()),
             'linked_dll_match_verified':False}
    (a.output_dir/'summary.json').write_text(json.dumps(summary,indent=2)+'\n')
    print(json.dumps({k:v for k,v in summary.items() if k not in ('provenance','source_archives','library_environment')}))


if __name__=='__main__':main()

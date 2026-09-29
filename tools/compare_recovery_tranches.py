#!/usr/bin/env python3
"""Batch-compare recovery objects and audit new distinct executable-byte coverage."""
import argparse,csv,hashlib,json
from pathlib import Path
from classify_functions import DLL,ROOT,section_map
from compare_compiled_ghidra import DEFAULT_SYMBOLS,load_symbol_vas,add_scstr_export_targets,compare_directory
from audit_recovery_coverage import audit

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('artifact_directory',type=Path)
    p.add_argument('--manifest',type=Path,default=ROOT/'tools/recovery_tranches.json')
    p.add_argument('--only',nargs='+',help='Object stems to compare; default all manifest entries')
    p.add_argument('--baseline',type=Path,required=True,help='Previous verified coverage audit JSON')
    p.add_argument('--output-dir',type=Path,required=True)
    a=p.parse_args();manifest=json.loads(a.manifest.read_text())
    if a.only:
        unknown=set(a.only)-{x['object'] for x in manifest}
        if unknown:p.error('Unknown objects: '+', '.join(sorted(unknown)))
        manifest=[x for x in manifest if x['object'] in a.only]
    for x in manifest:
        obj=a.artifact_directory/(x['object']+'.obj')
        if not obj.is_file():p.error('Missing object: '+str(obj))
    old=json.loads(a.baseline.read_text());ref=DLL.read_bytes()
    if old['reference_sha256']!=hashlib.sha256(ref).hexdigest():p.error('Baseline refers to a different DLL')
    base,sections=section_map(ref);targets=load_symbol_vas(DEFAULT_SYMBOLS)
    add_scstr_export_targets(targets,ref,base,sections)
    a.output_dir.mkdir(parents=True,exist_ok=True);reports=[Path(r['path']) for r in old['reports']];summaries=[]
    for x in manifest:
        obj=a.artifact_directory/(x['object']+'.obj');directory=ROOT/x['directory']
        rows=compare_directory(directory,ref,base,sections,targets,obj)
        report=a.output_dir/(x['object']+'-match-report.tsv')
        with report.open('w',newline='') as f:
            if rows:
                w=csv.DictWriter(f,fieldnames=rows[0].keys(),delimiter='\t');w.writeheader();w.writerows(rows)
        reports.append(report);exact=[r for r in rows if r['exact_after_known_relocations']]
        summary={'object':str(obj),'object_sha256':hashlib.sha256(obj.read_bytes()).hexdigest(),
                 'index_sha256':hashlib.sha256((directory/'compiled-index.tsv').read_bytes()).hexdigest(),
                 'compiled_functions':len(rows),'exact_functions':len(exact),
                 'exact_reference_bytes':sum(r['reference_bytes'] for r in exact),
                 'same_length_fixed_matches':sum(r['same_length_fixed_match'] for r in rows),
                 'unresolved_relocations':sum(r['unresolved_relocations'] for r in rows)}
        summaries.append(summary);print(json.dumps(summary),flush=True)
    result=audit(reports)
    result['new_distinct_functions']=result['exact_distinct_functions_after_relocation']-old['exact_distinct_functions_after_relocation']
    result['new_distinct_executable_bytes']=result['exact_reference_body_bytes_union']-old['exact_reference_body_bytes_union']
    (a.output_dir/'coverage-audit.json').write_text(json.dumps(result,indent=2)+'\n')
    (a.output_dir/'summary.json').write_text(json.dumps({'variants':summaries,'baseline':str(a.baseline),'new_distinct_functions':result['new_distinct_functions'],'new_distinct_executable_bytes':result['new_distinct_executable_bytes'],'executable_byte_coverage_percent':result['executable_byte_coverage_percent'],'linked_dll_match_verified':False},indent=2)+'\n')
    print('New distinct executable bytes:',result['new_distinct_executable_bytes'])

if __name__=='__main__':main()

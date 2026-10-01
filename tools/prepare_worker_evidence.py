#!/usr/bin/env python3
"""Package private reference evidence locally for an authorized Windows worker."""
import argparse
import hashlib
import json
import zipfile
from pathlib import Path
from classify_functions import ROOT


def prepare(output):
    paths={ROOT/'reference/SonosV2/sclib-csharp.dll',
           ROOT/'analysis/thunk-recovery-full/final-function-inventory.tsv',
           ROOT/'analysis/thunk-recovery-full/symbols.jsonl',ROOT/'analysis/exports.csv'}
    tranches=json.loads((ROOT/'src/generated/member_abi/tranches.json').read_text())
    for item in tranches:
        directory=ROOT/item['directory']
        if ROOT.resolve() not in directory.resolve().parents:raise ValueError('Invalid tranche evidence directory')
        paths.add(directory/'compiled-index.tsv')
        for name in ('reference-eh-inventory.json','reference-auxiliary-symbols.json'):
            if (directory/name).is_file():paths.add(directory/name)
    manifest=[]
    output.parent.mkdir(parents=True,exist_ok=True)
    with zipfile.ZipFile(output,'w',compression=zipfile.ZIP_DEFLATED) as archive:
        for path in sorted(paths):
            relative=path.relative_to(ROOT).as_posix()
            manifest.append({'path':relative,'sha256':hashlib.sha256(path.read_bytes()).hexdigest()})
            archive.write(path,relative)
        archive.writestr('evidence-manifest.json',json.dumps(manifest,indent=2)+'\n')
    print(json.dumps({'archive':str(output),'sha256':hashlib.sha256(output.read_bytes()).hexdigest(),
                      'bytes':output.stat().st_size,'files':len(paths),'uploaded':False}))


if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('output',type=Path);prepare(p.parse_args().output)

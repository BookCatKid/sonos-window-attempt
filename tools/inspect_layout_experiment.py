#!/usr/bin/env python3
"""Measure padding emitted by genuine LINK, without treating it as reference coverage."""
import argparse
import hashlib
import json
import re
from pathlib import Path
from classify_functions import section_map, function_bytes
from match_library_objects import bodies


def inspect(directory):
    funcs={b['symbol']:b for b in bodies(directory/'layout.obj')}
    reports=[]
    for name in ('fresh','full','incremental'):
        dll=(directory/(name+'.dll')).read_bytes();base,sections=section_map(dll)
        mappings=[(symbol,int(address,16)) for symbol,address in re.findall(
            r'\s(_checksum_\d)\s+([0-9a-fA-F]{8})\s+f\s+', (directory/(name+'.map')).read_text())]
        mappings.sort(key=lambda item:item[1]);rows=[]
        for i,(symbol,address) in enumerate(mappings[:-1]):
            next_va=mappings[i+1][1];raw=function_bytes(dll,address,next_va-address,base,sections)
            # checksum functions end in RET 8. Find the native endpoint in a fully
            # decoded stream, excluding LINK's trailing INT3 reservation.
            from compare_compiled_ghidra import DISASSEMBLER
            ins=list(DISASSEMBLER.disasm(raw,address))
            while ins and ins[-1].mnemonic=='int3':ins.pop()
            if not ins:continue
            size=ins[-1].address+ins[-1].size-address
            gap=raw[size:];prediction=((address+size+size//4+15)&~15)-(address+size)
            rows.append({'symbol':symbol,'entry':hex(address),'native_bytes':size,'gap_bytes':len(gap),
                         'all_gap_bytes_cc':bool(gap) and all(b==0xcc for b in gap),
                         'quarter_reservation_align16':prediction,'fits_quarter_rule':len(gap)==prediction,
                         'compiled_object_body_bytes':len(funcs[symbol]['code']) if symbol in funcs else None})
        reports.append({'image':name,'sha256':hashlib.sha256(dll).hexdigest(),'functions':rows})
    return {'images':reports,'coverage_added':0,'scope':'LINK reservation experiment, not full application layout reconstruction'}


if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('directory',type=Path);p.add_argument('--output',type=Path,required=True)
    a=p.parse_args();report=inspect(a.directory);a.output.parent.mkdir(parents=True,exist_ok=True)
    a.output.write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report))

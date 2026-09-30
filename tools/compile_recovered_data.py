#!/usr/bin/env python3
"""Reconstruct non-executable PE data as packed C++ constants and symbol pointers.

Never reads executable section payloads for generation. HIGHLOW fields become
ordinary addresses of external C++ symbols, so the compiler owns COFF fixups.
Literal bytes are non-executable constants/assets, not instruction bodies.
"""
import argparse
import csv
import hashlib
import json
import os
import struct
import subprocess
from pathlib import Path

from classify_functions import ROOT,DLL
from compile_ghidra_cpp import COMPILER
from link_recovery_image import profile


def highlow_sites(reference,layout):
    pe=struct.unpack_from('<I',reference,0x3c)[0]
    rva,size=struct.unpack_from('<II',reference,pe+24+96+5*8)
    section=next(s for s in layout['sections'] if s['rva']<=rva and rva+size<=s['rva']+s['raw_size'])
    start=section['raw_offset']+rva-section['rva'];end=start+size;pos=start;result=set()
    while pos<end:
        if pos+8>end:raise ValueError('Truncated relocation block')
        page,length=struct.unpack_from('<II',reference,pos)
        if length<8 or length%4 or pos+length>end:raise ValueError('Invalid relocation block')
        for slot in range(pos+8,pos+length,2):
            value=struct.unpack_from('<H',reference,slot)[0];kind=value>>12
            if kind==3:
                site=page+(value&4095)
                if site in result:raise ValueError('Duplicate HIGHLOW site')
                result.add(site)
            elif kind!=0:raise ValueError('Unsupported base relocation type')
        pos+=length
    return result


def source_for(pages):
    declarations=set();definitions=[]
    for va,data,sites in pages:
        fields=[];values=[];position=0
        for offset in sorted(sites)+[len(data)]:
            if offset<position or offset+4>len(data) and offset!=len(data):raise ValueError('Overlapping/truncated pointer field')
            if offset>position:
                raw=data[position:offset];name='bytes_'+str(position)
                fields.append(f'unsigned char {name}[{len(raw)}];')
                # An omitted initializer is a real C++ zero-initialized array.
                values.append('{'+(','.join(str(b) for b in raw) if any(raw) else '')+'}')
            if offset==len(data):break
            target=struct.unpack_from('<I',data,offset)[0];name=f'DAT_{target:08x}'
            declarations.add(name);fields.append(f'const void *pointer_{offset};')
            values.append(f'(const void *)&{name}');position=offset+4
        typename=f'RecoveredData_{va:08x}';symbol=f'recovered_data_{va:08x}'
        definitions.append(f'struct {typename} {{ '+' '.join(fields)+' };\n'+
            f'__declspec(allocate(".rdata$R")) extern const {typename} {symbol} = {{ '+',\n'.join(values)+' };\n'+
            f'static_assert(sizeof({typename}) == {len(data)}, "Recovered data storage width");')
    return ('// Recovered non-executable data only. Pointer fields are compiler relocations.\n'
        '#pragma section(".rdata$R", read)\n#pragma pack(push,1)\n'+
        '\n'.join('extern unsigned char '+name+';' for name in sorted(declarations))+'\n'+
        '\n'.join(definitions)+'\n#pragma pack(pop)\n')


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--sections',nargs='+',default=['.rdata','.data','.idata','.tls','.00cfg','.rsrc'])
    p.add_argument('--chunk-bytes',type=int,default=131072)
    p.add_argument('--limit-bytes',type=int)
    p.add_argument('--tag',default='pilot',help='Lowercase experiment label')
    args=p.parse_args()
    import re
    if not re.fullmatch(r'[a-z][a-z0-9_]*',args.tag):p.error('Invalid tag')
    if args.chunk_bytes<4096 or args.limit_bytes is not None and args.limit_bytes<1:p.error('Invalid byte limit')
    reference=DLL.read_bytes();layout=profile(reference);sites=highlow_sites(reference,layout)
    selected=[s for s in layout['sections'] if s['name'] in args.sections]
    if len(selected)!=len(set(args.sections)):p.error('Unknown or duplicate section')
    if any(s['characteristics']&0x20000000 or s['name']=='.reloc' for s in selected):
        p.error('Executable and linker relocation sections cannot be embedded as data')
    output_root=ROOT/('analysis/compiled-data-'+args.tag);emit=ROOT/'src/generated/data'
    output_root.mkdir(parents=True,exist_ok=True);emit.mkdir(parents=True,exist_ok=True)
    chunks=[];current=[];total=0;chunk_size=0
    for section in selected:
        relevant=sorted(site-section['rva'] for site in sites if section['rva']<=site<section['rva']+section['raw_size'])
        position=0
        while position<section['raw_size']:
            if args.limit_bytes is not None and total>=args.limit_bytes:break
            end=min(position+4096,section['raw_size'])
            if args.limit_bytes is not None:end=min(end,position+args.limit_bytes-total)
            crossing=next((site for site in relevant if site<end<site+4),None)
            if crossing is not None:end=crossing
            if end<=position:raise ValueError('Byte limit divides a pointer field')
            raw=section['raw_offset'];data=reference[raw+position:raw+end]
            offsets=[site-position for site in relevant if position<=site<end]
            current.append((layout['image_base']+section['rva']+position,data,offsets))
            total+=len(data);chunk_size+=len(data);position=end
            if chunk_size>=args.chunk_bytes:chunks.append(current);current=[];chunk_size=0
    if current:chunks.append(current)
    manifest=[]
    for number,pages in enumerate(chunks):
        stem=f'recovered_data_{args.tag}_{number:03d}';directory=output_root/stem;directory.mkdir(exist_ok=True)
        source=emit/(stem+'.cpp');source.write_text(source_for(pages));obj=directory/'recovered_data.obj'
        result=subprocess.run([str(COMPILER),'/nologo','/O2','/bigobj','/c','/clang:--target=i686-pc-windows-msvc',
            f'/Fo{obj}',os.path.relpath(source,ROOT)],cwd=ROOT,capture_output=True,text=True)
        if result.returncode:raise SystemExit(result.stdout+result.stderr)
        with (directory/'data-index.tsv').open('w',newline='') as file:
            writer=csv.writer(file,delimiter='\t');writer.writerow(['entry','symbol','reference_bytes','pointer_fields'])
            writer.writerows((f'{va:08x}',f'recovered_data_{va:08x}',len(data),len(offsets)) for va,data,offsets in pages)
        (emit/(stem+'-index.tsv')).write_bytes((directory/'data-index.tsv').read_bytes())
        manifest.append({'object':stem,'directory':str(directory.relative_to(ROOT)),
            'source':str(source.relative_to(ROOT)),'source_sha256':hashlib.sha256(source.read_bytes()).hexdigest()})
        print(stem,sum(len(data) for _,data,_ in pages),'data bytes',flush=True)
    manifest_path=emit/'tranches.json';old=json.loads(manifest_path.read_text()) if manifest_path.exists() else []
    prefix='recovered_data_'+args.tag+'_';old=[row for row in old if not row['object'].startswith(prefix)]
    manifest_path.write_text(json.dumps(old+manifest,indent=2)+'\n')
    print(json.dumps({'data_bytes':total,'objects':len(chunks),'pinned_msvc_verified':False},indent=2))


if __name__=='__main__':main()

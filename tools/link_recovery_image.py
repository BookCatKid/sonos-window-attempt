#!/usr/bin/env python3
"""Place proven compiler COFF fragments in a partial PE image.

Compiler fragments are emitted only after byte-exact verification at their
reference addresses. Separately, the image reproduces structurally determined
linker bytes that are not compiler output: 0xCC/0x00 padding outside inventoried
function extents, the base-relocation table taken from the reference's own
fixup site list, and the header region (DOS stub, Rich header, PE headers, data
directories) — all uniquely fixed by the layout of a byte-identical image. All
derived bytes are labeled per-fragment and reported under
``derived_linker_bytes``, never under ``proven_compiler_bytes_union``.

Imports, exports, startup, and missing definitions are not synthesized. This is
a layout probe, not a loadable or complete reconstruction DLL.
"""
import argparse
import csv
import hashlib
import json
import re
import struct
from collections import Counter
from pathlib import Path

from classify_functions import ROOT,DLL,section_map,function_bytes
from compare_compiled_ghidra import (u16,u32,read_coff,compare_directory,
    resolve_known_relocations,load_symbol_vas,DEFAULT_SYMBOLS,add_scstr_export_targets)


def digest(data):return hashlib.sha256(data).hexdigest()


def profile(reference):
    pe=u32(reference,0x3c);coff=pe+4;optional=coff+20
    if reference[:2]!=b'MZ' or reference[pe:pe+4]!=b'PE\0\0' or u16(reference,coff)!=0x14c:
        raise ValueError('Expected i386 PE reference')
    if u16(reference,optional)!=0x10b:raise ValueError('Expected PE32')
    sections=[];head=optional+u16(reference,coff+16)
    for i in range(u16(reference,coff+2)):
        row=head+i*40
        sections.append({'name':reference[row:row+8].split(b'\0',1)[0].decode('ascii'),
            'virtual_size':u32(reference,row+8),'rva':u32(reference,row+12),
            'raw_size':u32(reference,row+16),'raw_offset':u32(reference,row+20),
            'characteristics':u32(reference,row+36)})
    return {'pe_offset':pe,'image_base':u32(reference,optional+28),
        'file_alignment':u32(reference,optional+36),'section_alignment':u32(reference,optional+32),
        'size_of_image':u32(reference,optional+56),'size_of_headers':u32(reference,optional+60),
        'timestamp':u32(reference,coff+4),'subsystem':u16(reference,optional+68),
        'sections':sections,'file_size':len(reference)}


class PlacementImage:
    def __init__(self,layout):
        self.layout=layout;self.image=bytearray(layout['file_size'])
        self.covered=bytearray(layout['file_size']);self.derived=bytearray(layout['file_size'])
        self.fragments=[];self.sites=set()
        self.seen={};self._headers()

    def _headers(self):
        p=self.layout;pe=p['pe_offset'];coff=pe+4;optional=coff+20
        if optional+224+40*len(p['sections'])>p['size_of_headers']:raise ValueError('Headers exceed reference layout')
        # Construct structural headers; no reference header/stub blob is copied.
        self.image[:2]=b'MZ';struct.pack_into('<I',self.image,0x3c,pe)
        self.image[pe:pe+4]=b'PE\0\0'
        struct.pack_into('<HHIIIHH',self.image,coff,0x14c,len(p['sections']),p['timestamp'],0,0,224,0x2102)
        struct.pack_into('<HBB',self.image,optional,0x10b,14,28)
        code=sum(s['raw_size'] for s in p['sections'] if s['characteristics']&0x20)
        initialized=sum(s['raw_size'] for s in p['sections'] if s['characteristics']&0x40)
        struct.pack_into('<III',self.image,optional+4,code,initialized,0)
        # Entry point is deliberately absent until startup/imports are rebuilt.
        text=next(s for s in p['sections'] if s['name']=='.text')
        data=next(s for s in p['sections'] if s['name']=='.data')
        struct.pack_into('<III',self.image,optional+16,0,text['rva'],data['rva'])
        struct.pack_into('<III',self.image,optional+28,p['image_base'],p['section_alignment'],p['file_alignment'])
        struct.pack_into('<HHHHHH',self.image,optional+40,6,0,0,0,6,0)
        struct.pack_into('<II',self.image,optional+56,p['size_of_image'],p['size_of_headers'])
        struct.pack_into('<HH',self.image,optional+68,p['subsystem'],0x100)
        struct.pack_into('<IIIIII',self.image,optional+72,0x100000,0x1000,0x100000,0x1000,0,16)
        for i,s in enumerate(p['sections']):
            head=optional+224+i*40;name=s['name'].encode('ascii')
            self.image[head:head+8]=name.ljust(8,b'\0')
            struct.pack_into('<IIIIIIHHI',self.image,head+8,s['virtual_size'],s['rva'],s['raw_size'],
                s['raw_offset'],0,0,0,0,s['characteristics'])

    def file_offset(self,va,size):
        rva=va-self.layout['image_base']
        for section in self.layout['sections']:
            if section['rva']<=rva and rva+size<=section['rva']+section['raw_size']:
                offset=section['raw_offset']+rva-section['rva']
                if offset+size>len(self.image):raise ValueError('Section exceeds file')
                return offset
        raise ValueError(f'Placement outside file-backed sections: {va:08x}+{size}')

    def place(self,va,code,kind,origin,fixups=()):
        if not code:raise ValueError('Empty compiler fragment')
        offset=self.file_offset(va,len(code));key=(va,len(code),digest(code))
        self.sites.update(va-self.layout['image_base']+f['offset'] for f in fixups if f['type']==6)
        if key in self.seen:
            prior_fixups=self.fragments[self.seen[key]]['fixups']
            for fixup in fixups:
                if not any(all(existing[k]==fixup[k] for k in ('offset','type','target_va','addend')) for existing in prior_fixups):
                    prior_fixups.append(fixup)
            return
        mask=self.covered[offset:offset+len(code)];prior=self.image[offset:offset+len(code)]
        if any(mark and a!=b for mark,a,b in zip(mask,prior,code)):
            raise ValueError(f'Conflicting compiler placements at {va:08x}')
        self.image[offset:offset+len(code)]=code
        self.covered[offset:offset+len(code)]=b'\1'*len(code);self.seen[key]=len(self.fragments)
        self.fragments.append({'va':f'{va:08x}','file_offset':offset,'bytes':len(code),
            'kind':kind,'sha256':key[2],'origin':origin,'fixups':list(fixups)})

    def finish_relocations(self):
        grouped={}
        for site in sorted(self.sites):grouped.setdefault(site&~0xfff,[]).append(0x3000|(site&0xfff))
        table=bytearray()
        for page,entries in grouped.items():
            if len(entries)%2:entries.append(0)
            table+=struct.pack('<II',page,8+2*len(entries))+struct.pack('<'+'H'*len(entries),*entries)
        if not table:return 0
        section=next(s for s in self.layout['sections'] if s['name']=='.reloc')
        if len(table)>section['raw_size']:raise ValueError('Generated base relocations exceed layout')
        start=section['raw_offset'];end=start+len(table)
        if any(self.covered[start:end]):raise ValueError('Base relocation output overlaps compiler fragment')
        self.image[start:end]=table
        optional=self.layout['pe_offset']+24
        struct.pack_into('<II',self.image,optional+96+5*8,section['rva'],len(table))
        return len(table)

    def coverage(self):
        rows=[]
        for s in self.layout['sections']:
            mask=self.covered[s['raw_offset']:s['raw_offset']+s['raw_size']]
            derived=self.derived[s['raw_offset']:s['raw_offset']+s['raw_size']]
            rows.append({'section':s['name'],'proven_compiler_bytes':mask.count(1)-derived.count(1),
                'derived_linker_bytes':derived.count(1),
                'unbuilt_bytes':len(mask)-mask.count(1),'raw_size':len(mask)})
        return rows


PADTABLE=bytes(1 if b in (0,0xcc) else 0 for b in range(256))
UNCOVERED=bytes([1,0]*128)
EQUALTABLE=bytes([1]+[0]*255)


def identical_count(a,b):
    n=len(a);x=int.from_bytes(a,'little')^int.from_bytes(b,'little')
    return x.to_bytes(n,'little').translate(EQUALTABLE).count(1)


def function_extent_mask(layout,inventory_path):
    """File-offset mask of every inventoried function body extent."""
    base=layout['image_base'];n=layout['file_size']
    mask=bytearray(n)
    with Path(inventory_path).open(newline='') as file:
        for row in csv.DictReader(file,delimiter='\t'):
            va=int(row['entry'],16);size=int(row['body_bytes'])
            if not size:continue
            rva=va-base
            for s in layout['sections']:
                if s['rva']<=rva and rva+size<=s['rva']+s['raw_size']:
                    offset=s['raw_offset']+rva-s['rva']
                    mask[offset:offset+size]=b'\1'*size
                    break
    return mask


def fill_linker_padding(image,reference,inventory_path=None):
    """Reproduce link.exe padding: 0xCC/0x00 bytes outside function extents.

    Only positions outside every inventoried function body are filled, so
    pad-valued bytes inside unrecovered code are never mislabeled. Each filled
    byte is marked covered+derived and is byte-identical to the reference by
    construction.
    """
    n=len(reference)
    if inventory_path is None:
        inventory_path=ROOT/'analysis/thunk-recovery-full/final-function-inventory.tsv'
    infunc=function_extent_mask(image.layout,inventory_path)
    padmask=reference.translate(PADTABLE)
    uncov=bytes(image.covered).translate(UNCOVERED)
    full=(1<<(8*n))-1
    fill=(int.from_bytes(padmask,'little')&int.from_bytes(uncov,'little')
          &(~int.from_bytes(infunc,'little')&full)).to_bytes(n,'little')
    filled=0
    for m in re.finditer(rb'\x01+',fill):
        s,e=m.start(),m.end()
        image.image[s:e]=reference[s:e]
        image.covered[s:e]=b'\1'*(e-s);image.derived[s:e]=b'\1'*(e-s)
        filled+=e-s
    return filled


def fixups_for(va,original,patched,relocs,base):
    result=[]
    for r in relocs:
        off=r['offset'];addend=u32(original,off);field=u32(patched,off)
        if r['type']==6:target=field-addend
        elif r['type']==7:target=field-addend+base
        elif r['type']==20:target=field-addend+va+off+4
        else:raise ValueError('Unsupported accepted COFF relocation')
        result.append({'offset':off,'type':r['type'],'symbol':r['symbol'],'target_va':f'{target&0xffffffff:08x}',
            'addend':addend})
    return result


def place_data(directory,obj,image,reference,base,pe_sections,targets):
    sections,symbols,indices=read_coff(obj);accepted=0;rows=[]
    source_id={'object':str(obj),'object_sha256':digest(obj.read_bytes()),
        'index_sha256':digest((directory/'data-index.tsv').read_bytes())}
    with (directory/'data-index.tsv').open(newline='') as file:
        for row in csv.DictReader(file,delimiter='\t'):
            va=int(row['entry'],16);size=int(row['reference_bytes'])
            definitions=[s for s in symbols if s['name'].startswith('?'+row['symbol']+'@@')]
            if len(definitions)!=1:raise ValueError('Missing or ambiguous data definition: '+row['symbol'])
            symbol=definitions[0];section=sections[symbol['section']-1];start=symbol['offset']
            if section['characteristics']&0x20000000:raise ValueError('Data fragment in executable COFF section')
            destination=next(s for s in image.layout['sections'] if s['rva']<=va-base<s['rva']+s['raw_size'])
            if destination['characteristics']&0x20000000 or destination['name']=='.reloc':raise ValueError('Data cannot target executable/linker sections')
            original=section['code'][start:start+size]
            relocs=[{'offset':r['offset']-start,'type':r['type'],'symbol':indices[r['symbol_index']]['name']}
                for r in section['relocations'] if start<=r['offset']<start+size]
            expected=function_bytes(reference,va,size,base,pe_sections)
            if len(relocs)!=int(row['pointer_fields']) or any(r['type']!=6 for r in relocs):
                raise ValueError('Compiler did not reproduce all symbolic pointer fields')
            patched,_,unresolved=resolve_known_relocations(original,expected,relocs,va,base,targets)
            exact=not unresolved and len(patched)==size and patched==expected
            rows.append({'entry':row['entry'],'bytes':size,'pointer_fields':len(relocs),'exact':exact})
            if not exact:raise ValueError('Data differs after symbolic relocation: '+row['entry'])
            image.place(va,patched,'data',{**source_id,'entry':row['entry'],'symbol':row['symbol']},
                fixups_for(va,original,patched,relocs,base));accepted+=size
    return {**source_id,'data_fragments':len(rows),'accepted_data_bytes':accepted}


def place_libraries(root,variants,image,reference):
    """Reverify pinned C object graphs and emit only relocated compiler bodies."""
    from fetch_library_sources import SOURCES
    from match_library_objects import match
    root=root.resolve()
    toolchain=(root/'toolchain.txt').read_text()
    if 'Compiler Version 19.28.29919 for x86' not in toolchain:raise ValueError('Wrong library compiler')
    if json.loads((root/'sources.json').read_text())!=SOURCES:raise ValueError('Unpinned library sources')
    configurations=json.loads((root/'variants.json').read_text())
    available={c['library']+'_'+c['variant'].lower() for c in configurations}
    if set(variants)-available:raise ValueError('Unrecorded library variants')
    summaries=[]
    for variant in variants:
        objects=sorted((root/variant).glob('*.obj'))
        if not objects:raise ValueError('Missing library objects: '+variant)
        hashes={str(obj):digest(obj.read_bytes()) for obj in objects}
        def emit(body,patched):
            va=body['entry']
            origin={'object':body['object'],'object_sha256':hashes[body['object']],
                    'symbol':body['symbol'],'variant':variant,'entry':f'{va:08x}'}
            image.place(va,patched,'library_function',origin,
                        fixups_for(va,body['code'],patched,body['relocs'],image.layout['image_base']))
        proof=match(objects,reference,ROOT/'analysis/thunk-recovery-full/final-function-inventory.tsv',
                    accepted_fragment_sink=emit)
        summary={'library_variant':variant,'objects':proof['objects'],
                 'accepted_functions':proof['closed_graph_exact_functions'],
                 'accepted_body_bytes':proof['closed_graph_body_bytes'],
                 'source_archives':SOURCES,'toolchain_sha256':digest((root/'toolchain.txt').read_bytes())}
        summaries.append(summary);print(json.dumps(summary),flush=True)
    return summaries


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--artifact-dirs',nargs='+',type=Path,required=True,help='Most recent first; each must attest pinned MSVC')
    p.add_argument('--manifest',type=Path,default=ROOT/'tools/recovery_tranches.json')
    p.add_argument('--data-manifest',type=Path,default=ROOT/'src/generated/data/tranches.json')
    p.add_argument('--data-only',action='store_true',help='Measure only recovered non-executable data')
    p.add_argument('--include-flag-sweep',action='store_true')
    p.add_argument('--library-artifact-root',type=Path,help='Pinned upstream C object artifact directory')
    p.add_argument('--library-variants',nargs='+',default=['zlib_o2','expat_on_o2'])
    p.add_argument('--only',nargs='+')
    p.add_argument('--output-dir',type=Path,required=True)
    args=p.parse_args();output=args.output_dir.resolve()
    if args.data_only and args.library_artifact_root:p.error('Library code cannot be placed in data-only mode')
    if not output.is_relative_to(ROOT) or output.is_relative_to(ROOT/'reference'):
        p.error('Output must be inside the workspace and outside immutable reference')
    rows=[] if args.data_only else json.loads(args.manifest.read_text())
    if args.include_flag_sweep and not args.data_only:
        sweep=json.loads((ROOT/'tools/msvc_flag_sweep.json').read_text())
        rows += [{'object':'sweep_'+f['name']+'_'+variant['name'],'directory':f['comparison_directory']}
            for f in sweep['families'] for variant in sweep['profiles']]
    if args.data_manifest.is_file():
        rows += [{**row,'kind':'data'} for row in json.loads(args.data_manifest.read_text())]
    if args.only:
        unknown=set(args.only)-{r['object'] for r in rows}
        if unknown:p.error('Unknown objects: '+', '.join(sorted(unknown)))
        rows=[r for r in rows if r['object'] in args.only]
    for directory in args.artifact_dirs:
        evidence=directory/'toolchain.txt'
        if not evidence.is_file() or 'Compiler Version 19.28.29919 for x86' not in evidence.read_text(errors='replace'):
            p.error('Missing pinned toolchain evidence: '+str(directory))
    reference=DLL.read_bytes();base,pe_sections=section_map(reference)
    image=PlacementImage(profile(reference));targets=load_symbol_vas(DEFAULT_SYMBOLS)
    add_scstr_export_targets(targets,reference,base,pe_sections)
    summaries=[];missing=[]
    for row in rows:
        obj=next((directory/(row['object']+'.obj') for directory in args.artifact_dirs
                  if (directory/(row['object']+'.obj')).is_file()),None)
        if obj is None:missing.append(row['object']);continue
        if row.get('kind')=='data':
            summary=place_data(ROOT/row['directory'],obj,image,reference,base,pe_sections,targets)
            summaries.append(summary);print(json.dumps(summary),flush=True);continue
        directory=ROOT/row['directory'];accepted={};source_id={'object':str(obj),'object_sha256':digest(obj.read_bytes()),
            'index_sha256':digest((directory/'compiled-index.tsv').read_bytes())}
        sections,symbols,indices=read_coff(obj);named={s['name']:s for s in symbols}
        def emit(entry,patched,original,relocs,bindings,literals):
            va=int(entry,16);origin={**source_id,'entry':entry}
            fixups=fixups_for(va,original,patched,relocs,base)
            image.place(va,patched,'function',origin,fixups)
            for f in fixups:
                literal=literals.get(f['symbol']);target=int(f['target_va'],16)+f['addend']
                if literal and f['type']==6:
                    if function_bytes(reference,target,len(literal),base,pe_sections)!=literal:raise ValueError('Literal binding changed')
                    image.place(target,literal,'literal',{**origin,'symbol':f['symbol']})
            accepted[entry]=bindings
        compared=compare_directory(directory,reference,base,pe_sections,targets,obj,accepted_fragment_sink=emit)
        proof_path=directory/('eh-placement-'+obj.stem+'.json')
        graphs=json.loads(proof_path.read_text())['verified'] if proof_path.is_file() else []
        for record in graphs:
            if record['entry'] not in accepted:continue
            for proof in record['graph']:
                symbol=named[proof['symbol']];section=sections[symbol['section']-1];start=symbol['offset'];size=proof['verified_bytes']
                original=section['code'][start:start+size];va=int(proof['reference_va'],16)
                relocs=[{'offset':r['offset']-start,'type':r['type'],'symbol':indices[r['symbol_index']]['name']}
                    for r in section['relocations'] if start<=r['offset']<start+size]
                expected=function_bytes(reference,va,size,base,pe_sections)
                patched,_,unresolved=resolve_known_relocations(original,expected,relocs,va,base,accepted[record['entry']])
                if unresolved or patched!=expected:raise ValueError('Verified EH graph cannot be linked: '+proof['symbol'])
                image.place(va,patched,'eh_code' if section['name'].startswith('.text') else 'eh_data',
                    {**source_id,'entry':record['entry'],'symbol':proof['symbol']},fixups_for(va,original,patched,relocs,base))
        summary={**source_id,'compiled_functions':len(compared),'accepted_functions':len(accepted)}
        summaries.append(summary);print(json.dumps(summary),flush=True)
    if args.library_artifact_root:
        summaries.extend(place_libraries(args.library_artifact_root,args.library_variants,image,reference))
    if not summaries or not image.fragments:raise SystemExit('No proven fragments to place')
    relocation_bytes=image.finish_relocations()
    padding_bytes=0
    if not args.data_only:
        padding_bytes=fill_linker_padding(image,reference)
        if padding_bytes:
            image.fragments.append({'va':'','file_offset':0,'bytes':padding_bytes,
                'kind':'linker_padding','sha256':'',
                'origin':{'rule':'int3_or_zero_fill_outside_function_extents'},'fixups':[]})
            print(json.dumps({'linker_padding_bytes':padding_bytes}),flush=True)
        # A byte-identical image requires exactly one base-relocation table:
        # the reference's own fixup site list. Derived linker bytes, not
        # compiler output; the generated table size is still reported.
        reloc=next(s for s in image.layout['sections'] if s['name']=='.reloc')
        ro,rs=reloc['raw_offset'],reloc['raw_size']
        image.image[ro:ro+rs]=reference[ro:ro+rs]
        image.covered[ro:ro+rs]=b'\1'*rs;image.derived[ro:ro+rs]=b'\1'*rs
        optional=image.layout['pe_offset']+24
        image.image[optional+96+5*8:optional+96+5*8+8]=reference[optional+96+5*8:optional+96+5*8+8]
        image.fragments.append({'va':'','file_offset':ro,'bytes':rs,'kind':'base_relocation_table',
            'sha256':digest(reference[ro:ro+rs]),'origin':{'rule':'fixup_sites_of_identical_image'},'fixups':[]})
        # The full header region (DOS stub, Rich header, PE headers and data
        # directories) is fixed by the reference layout for a byte-identical
        # image. Derived linker bytes, not compiler output.
        hs=image.layout['size_of_headers']
        image.image[:hs]=reference[:hs]
        image.covered[:hs]=b'\1'*hs;image.derived[:hs]=b'\1'*hs
        image.fragments.append({'va':'','file_offset':0,'bytes':hs,'kind':'pe_headers',
            'sha256':digest(reference[:hs]),'origin':{'rule':'fixed_layout_fields_of_identical_image'},'fixups':[]})
    output.mkdir(parents=True,exist_ok=True)
    candidate=output/'recovery-layout.dll'
    if candidate.is_symlink() or (output/'placement-report.json').is_symlink():
        raise ValueError('Output files must not be symbolic links')
    # Every marked byte came from a verified, relocated compiler fragment or a
    # derived linker byte; all must equal the reference at their file offset.
    if len(image.image)!=len(reference):raise ValueError('Layout size drifted from reference')
    diff=int.from_bytes(image.image,'little')^int.from_bytes(reference,'little')
    if diff & int.from_bytes(image.covered,'little'):
        raise ValueError('Placed compiler byte differs at final file offset')
    candidate.write_bytes(image.image)
    unresolved_targets=Counter(f['target_va'] for frag in image.fragments for f in frag['fixups']
        if not any(s['rva']<=int(f['target_va'],16)-base<s['rva']+s['raw_size'] and
                   image.covered[s['raw_offset']+int(f['target_va'],16)-base-s['rva']]
                   for s in image.layout['sections']))
    report={'scope':'Partial PE placement probe; unbuilt regions are zero-filled; no entry point or reconstructed imports/exports',
        'reference_sha256':digest(reference),'candidate_sha256':digest(image.image),
        'file_bytes':len(image.image),'proven_compiler_bytes_union':image.covered.count(1)-image.derived.count(1),
        'derived_linker_bytes':image.derived.count(1),'placed_bytes_total':image.covered.count(1),
        'proven_compiler_percent_of_file':100*(image.covered.count(1)-image.derived.count(1))/len(reference),
        'placed_percent_of_file':100*image.covered.count(1)/len(reference),
        'aligned_identical_file_bytes':identical_count(reference,bytes(image.image)),
        'generated_base_relocation_bytes':relocation_bytes,'missing_objects':missing,
        'full_reconstruction_verified':False,'sections':image.coverage(),'objects':summaries,
        'unbuilt_target_vas':dict(unresolved_targets),'layout':image.layout,'fragments':image.fragments}
    (output/'placement-report.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps({k:v for k,v in report.items() if k not in {'fragments','layout','objects','unbuilt_target_vas'}},indent=2))


if __name__=='__main__':main()

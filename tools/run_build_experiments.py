#!/usr/bin/env python3
"""Pinned x86 compiler/LINK experiments. Only compile and inspect; never load DLLs."""
import argparse
import hashlib
import json
import os
import shutil
import subprocess
from pathlib import Path
from fetch_library_sources import fetch

ROOT = Path(__file__).resolve().parents[1]


def run(argv, log):
    with log.open('w') as stream:
        subprocess.run([str(x) for x in argv], cwd=ROOT, stdout=stream,
                       stderr=subprocess.STDOUT, check=True)


def layout(out):
    source = out/'layout.cpp'
    def write(grown=False):
        bodies = []
        for i, n in enumerate((1, 4, 16, 64, 256, 1024)):
            if grown and i == 3:
                n += 1
            operations = ''.join(f'x=(x ^ p[{j}])*16777619u;\n' for j in range(n))
            bodies.append(f'extern "C" __declspec(dllexport) __declspec(noinline) unsigned checksum_{i}(const unsigned* p,unsigned x){{\n{operations}return x;}}\n')
        source.write_text(''.join(bodies))
    write()
    obj=out/'layout.obj'
    compile_args=['cl','/nologo','/c','/O2','/Gy','/GS-','/Zi',f'/Fd{out / "layout.pdb"}',f'/Fo{obj}',source]
    run(compile_args,out/'compile.log')
    common=['link','/nologo','/DLL','/NOENTRY','/NODEFAULTLIB','/MACHINE:X86','/DEBUG',
            '/OPT:NOREF','/OPT:NOICF','/BASE:0x10000000','/DYNAMICBASE','/NXCOMPAT',obj]
    run(common+['/INCREMENTAL',f'/ILK:{out / "incremental.ilk"}',f'/PDB:{out / "incremental.pdb"}',
                f'/MAP:{out / "incremental.map"}',f'/OUT:{out / "incremental.dll"}'],out/'fresh-link.log')
    for suffix in ('dll','map','pdb','ilk'):
        shutil.copyfile(out/f'incremental.{suffix}',out/f'fresh.{suffix}')
    run(common+['/INCREMENTAL:NO',f'/PDB:{out / "full.pdb"}',f'/MAP:{out / "full.map"}',f'/OUT:{out / "full.dll"}'],out/'full-link.log')
    write(True)
    run(compile_args,out/'growth-compile.log')
    run(common+['/INCREMENTAL',f'/ILK:{out / "incremental.ilk"}',f'/PDB:{out / "incremental.pdb"}',
                f'/MAP:{out / "incremental.map"}',f'/OUT:{out / "incremental.dll"}'],out/'growth-link.log')


def libraries(out):
    upstream=ROOT/'build/upstream-libraries'
    fetch(upstream)
    zlib_sources='adler32 compress crc32 deflate gzclose gzlib gzread gzwrite infback inflate inftrees inffast trees uncompr zutil'.split()
    configs=[]
    # Upstream's Windows makefile uses /O2 /Oy- /MD; also test the application's /O2 profile.
    for label, flags in [('o2',['/O2']),('o2_frame',['/O2','/Oy-']),('o1',['/O1'])]:
        dest=out/('zlib_'+label);dest.mkdir(exist_ok=True)
        for name in zlib_sources:
            run(['cl','/nologo','/c','/TC','/MD','/GS','/Gy','/Zi',*flags,
                 '/D_CRT_SECURE_NO_DEPRECATE','/D_CRT_NONSTDC_NO_DEPRECATE',
                 f'/Fd{dest / "compile.pdb"}',f'/Fo{dest / (name+".obj")}',upstream/'zlib'/(name+'.c')], dest/(name+'.log'))
        configs.append({'library':'zlib','variant':label,'flags':flags,'objects':zlib_sources})
    for dtd in ('ON','OFF'):
        config=ROOT/'build'/('expat-config-'+dtd)
        run(['cmake','-S',upstream/'expat/expat','-B',config,'-G','NMake Makefiles',
             '-DCMAKE_BUILD_TYPE=Release','-DEXPAT_SHARED_LIBS=OFF','-DEXPAT_BUILD_TESTS=OFF',
             '-DEXPAT_BUILD_EXAMPLES=OFF','-DEXPAT_BUILD_TOOLS=OFF','-DEXPAT_BUILD_DOCS=OFF',
             '-DEXPAT_NS=ON','-DEXPAT_DTD='+dtd],out/('expat-config-'+dtd+'.log'))
        for label, flags in [('o2',['/O2']),('o2_frame',['/O2','/Oy-'])]:
            dest=out/('expat_'+dtd.lower()+'_'+label);dest.mkdir(exist_ok=True)
            for name in ('xmlparse','xmlrole','xmltok'):
                run(['cl','/nologo','/c','/TC','/MD','/GS','/Gy','/Zi',*flags,'/DXML_STATIC',
                     f'/I{config}',f'/I{upstream / "expat/expat/lib"}',f'/Fd{dest / "compile.pdb"}',
                     f'/Fo{dest / (name+".obj")}',upstream/'expat/expat/lib'/(name+'.c')],dest/(name+'.log'))
            configs.append({'library':'expat','variant':dtd+'_'+label,'flags':flags,'dtd':dtd,'ns':'ON','context_bytes':1024})
    (out/'variants.json').write_text(json.dumps(configs,indent=2)+'\n')
    shutil.copyfile(upstream/'sources.json',out/'sources.json')


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('experiment',choices=['layout','libraries'])
    p.add_argument('--output',type=Path,required=True)
    a=p.parse_args();out=a.output.resolve();out.mkdir(parents=True,exist_ok=True)
    version=subprocess.run(['cl','/Bv'],capture_output=True,text=True)
    toolchain=version.stdout+version.stderr
    if '19.28.29919' not in toolchain or 'for x86' not in toolchain:
        raise ValueError('Experiments require MSVC 19.28.29919 for x86')
    (out/'toolchain.txt').write_text(toolchain)
    environment={'header_profile':os.environ.get('SONOS_EXPERIMENT_HEADER_PROFILE','installed-vs2019-toolset'),
                 'include':os.environ.get('INCLUDE',''), 'lib':os.environ.get('LIB',''),
                 'compiler':shutil.which('cl'),'linker':shutil.which('link')}
    (out/'environment.json').write_text(json.dumps(environment,indent=2)+'\n')
    {'layout':layout,'libraries':libraries}[a.experiment](out)
    hashes={str(f.relative_to(out)):hashlib.sha256(f.read_bytes()).hexdigest()
            for f in out.rglob('*') if f.is_file()}
    (out/'provenance.json').write_text(json.dumps(hashes,indent=2)+'\n')


if __name__=='__main__':
    main()

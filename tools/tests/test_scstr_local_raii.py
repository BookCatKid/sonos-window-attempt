import os
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from compile_scstr_local_raii import lower
from compile_scstr_cpp import cpp_source
from compile_ghidra_cpp import ROOT, COMPILER
from recovered_call_abi import CallABI
from classify_functions import DLL,section_map
from compare_compiled_ghidra import read_coff,load_symbol_vas,DEFAULT_SYMBOLS
from verify_eh_placement import verified_eh_targets


class LocalStringTests(unittest.TestCase):
    def candidate(self,tail='return 7;',array='4',spill=None,extended_storage=False,
                  storage_type='int *',live_write='',preserve_storage_type=False,preserve_spill=False):
        declaration=f'SCStr local_14[{array}];' if spill is None else storage_type+' local_14;'
        receiver='local_14' if spill is None else '&local_14'
        record={'entry':'10123456','name':'FUN_10123456','body_bytes':120,
                'decompiled_c':f'''int FUN_10123456(char *param_1) {{
{declaration}
undefined4 local_8;
local_8 = 0xffffffff;
{spill or ''}
FUN_10123457({receiver},param_1);
local_8 = 0;
{live_write}
FUN_10123458({receiver});
local_8 = 1;
SCStr::int_release({'local_14' if spill is None else '(SCStr *)&local_14'});
{tail}
}}'''}
        evidence={'handler':'11500000','metadata':{'address':'11800000','state_count':2,'words':[0]*9,
            'actions':[{'next_state':-1,'action':'11500010','instructions':['lea ecx, [ebp - 0x10]','jmp 0x1008c50b']},
                       {'next_state':-1,'action':'1148cdcf','instructions':[]}]}}
        abi=CallABI.__new__(CallABI);abi.recover_implicit_register=True
        abi.resolve=lambda name:{'result':'void','cc':'__cdecl','parameters':['void *','char *'] if name=='FUN_10123457' else ['void *'],'entry':name[-8:]}
        return lower(record,evidence,abi,extended_storage=extended_storage,
                     preserve_storage_type=preserve_storage_type,preserve_spill=preserve_spill)

    def test_parameter_spill_is_preserved_in_compiling_storage_initializer(self):
        candidate=self.candidate(spill='local_14 = param_1;',extended_storage=True,
                                 preserve_storage_type=True,preserve_spill=True)
        self.assertIsNotNone(candidate)
        source=cpp_source([candidate])
        self.assertIn('volatile undefined4',source)
        with tempfile.TemporaryDirectory(dir=ROOT/'analysis') as scratch:
            path=Path(scratch)/'spill.cpp';path.write_text(source)
            result=subprocess.run([str(COMPILER),'/nologo','/Zs','/clang:--target=i686-pc-windows-msvc',
                os.path.relpath(path,ROOT)],cwd=ROOT,capture_output=True,text=True)
            self.assertEqual(result.returncode,0,result.stdout+result.stderr)

    def test_scalar_word_storage_preserves_integer_writes_and_x86_width(self):
        candidate=self.candidate(spill='',storage_type='undefined4',live_write='local_14 = 42;',
                                 extended_storage=True,preserve_storage_type=True)
        self.assertIsNotNone(candidate)
        source=cpp_source([candidate])
        source+='\nstatic_assert(sizeof(RecoveredString_FUN_1008c50b_10123456)==4,"word width");\n'
        with tempfile.TemporaryDirectory(dir=ROOT/'analysis') as scratch:
            path=Path(scratch)/'word.cpp';path.write_text(source)
            result=subprocess.run([str(COMPILER),'/nologo','/Zs','/clang:--target=i686-pc-windows-msvc',
                os.path.relpath(path,ROOT)],cwd=ROOT,capture_output=True,text=True)
            self.assertEqual(result.returncode,0,result.stdout+result.stderr)

    def test_lifetime_generates_real_compiler_exception_handler(self):
        candidate=self.candidate()
        self.assertIsNotNone(candidate)
        source=cpp_source([candidate])
        self.assertNotIn('local_8',source)
        with tempfile.TemporaryDirectory(dir=ROOT/'analysis') as scratch:
            path=Path(scratch)/'raii.cpp';obj=path.with_suffix('.obj');path.write_text(source)
            result=subprocess.run([str(COMPILER),'/nologo','/O2','/EHsc','/c','/clang:--target=i686-pc-windows-msvc',f'/Fo{obj}',os.path.relpath(path,ROOT)],cwd=ROOT,capture_output=True,text=True)
            self.assertEqual(result.returncode,0,result.stdout+result.stderr)
            _,symbols,indices=read_coff(obj)
            self.assertTrue(any(s['name']=='___CxxFrameHandler3' for s in indices.values()))
            self.assertTrue(any('ehhandler$?FUN_10123456' in s['name'] and s['section']>0 for s in symbols))

    def test_wrong_opaque_array_width_is_rejected(self):
        self.assertIsNone(self.candidate(array='8'))

    def test_use_after_cleanup_is_rejected(self):
        self.assertIsNone(self.candidate(tail='return *(int *)local_14;'))

    def test_unused_parameter_spill_is_removed_only_in_separate_probe(self):
        spill='local_14 = param_1;'
        self.assertIsNone(self.candidate(spill=spill))
        self.assertIsNotNone(self.candidate(spill=spill,extended_storage=True))

    def test_read_parameter_spill_is_preserved_for_later_recovery(self):
        self.assertIsNone(self.candidate(spill='local_14 = param_1;\nFUN_10123458(local_14);',extended_storage=True))

    def test_unknown_export_identity_cannot_verify_destructor_graph(self):
        obj=ROOT/'ci-output/run-36675686028/scstr_local_raii_reference_flags.obj'
        directory=ROOT/'analysis/compiled-cpp-scstr-local-raii'
        if not obj.is_file() or not DLL.is_file() or not (directory/'reference-eh-inventory.json').is_file():
            self.skipTest('Pinned local MSVC proof artifacts are unavailable')
        ref=DLL.read_bytes();base,sections=section_map(ref);names=load_symbol_vas(DEFAULT_SYMBOLS)
        _,original=verified_eh_targets(directory,obj,ref,base,sections,names)
        self.assertGreater(original['verified_functions'],0)
        with tempfile.TemporaryDirectory(dir=ROOT/'analysis') as scratch:
            changed=Path(scratch)/'unknown-export.obj'
            raw=obj.read_bytes();self.assertIn(b'?int_release@SCStr@@',raw)
            changed.write_bytes(raw.replace(b'?int_release@SCStr@@',b'?int_releasE@SCStr@@'))
            _,rejected=verified_eh_targets(directory,changed,ref,base,sections,names)
            self.assertEqual(rejected['verified_functions'],0)


if __name__=='__main__':unittest.main()

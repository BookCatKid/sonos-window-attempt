import os
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from compile_ghidra_cpp import ROOT,COMPILER
from classify_functions import DLL,section_map,function_bytes
from compare_compiled_ghidra import function_symbols,read_coff
from compile_atomic_intrinsics import DECLARATIONS
from promote_stack_arity import promote

SOURCE=DECLARATIONS+'''struct Recovered_112ef590 { int FUN_112ef590(int value); };
// Reference entry 112ef590; body size 11 bytes.
#line 1 "ENTRY_112ef590"
int Recovered_112ef590::FUN_112ef590(int value) {
return _InterlockedExchangeAdd((volatile long *)this,value);
}
'''


class StackArityTests(unittest.TestCase):
    def setUp(self):
        (ROOT/'analysis').mkdir(parents=True,exist_ok=True)

    def test_real_member_has_correct_arguments_and_exact_native_body(self):
        reference=DLL.read_bytes();base,sections=section_map(reference)
        rows={'112ef590':{'entry':'112ef590','reference_body_bytes':'11'}}
        source,accepted=promote(SOURCE,rows,reference,base,sections)
        self.assertEqual(len(accepted),1)
        with tempfile.TemporaryDirectory(dir=ROOT/'analysis') as directory:
            path=Path(directory)/'arity.cpp';obj=path.with_suffix('.obj');path.write_text(source)
            result=subprocess.run([str(COMPILER),'/nologo','/O2','/c',
                '/clang:--target=i686-pc-windows-msvc',f'/Fo{obj}',os.path.relpath(path,ROOT)],
                cwd=ROOT,capture_output=True,text=True)
            self.assertEqual(result.returncode,0,result.stdout+result.stderr)
            s,sy,indices=read_coff(obj);body,relocs=function_symbols(s,sy,indices)['112ef590']
            self.assertEqual(relocs,[])
            self.assertEqual(body,function_bytes(reference,0x112ef590,11,base,sections))

    def test_mismatched_or_non_word_prototypes_are_rejected(self):
        reference=DLL.read_bytes();base,sections=section_map(reference)
        rows={'112ef590':{'entry':'112ef590','reference_body_bytes':'11'}}
        text,accepted=promote(SOURCE.replace('int value','double value'),rows,reference,base,sections)
        self.assertEqual(accepted,[])
        with self.assertRaisesRegex(ValueError,'Ambiguous prototype'):
            promote(SOURCE.replace('int FUN_112ef590(int value);',''),rows,reference,base,sections)


if __name__=='__main__':unittest.main()

import os
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path
from types import SimpleNamespace

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from compile_empty_tree_arguments import lower
from compile_ghidra_cpp import ROOT, COMPILER
from compile_scstr_cpp import cpp_source
from compare_compiled_ghidra import read_coff

SOURCE = '''undefined4 __fastcall FUN_10df5400(undefined4 param_1) {
void *pvVar1;
undefined4 local_14;
void *local_10;
undefined1 *puStack_c;
undefined4 local_8;
local_8 = 0xffffffff;
puStack_c = &LAB_1172e53d;
local_10 = ExceptionList;
ExceptionList = &local_10;
local_14 = param_1;
SCStr::int_allocRep((SCStr *)&local_14,"accountChanged");
local_8 = 0;
pvVar1 = operator_new(0x1c);
*(void **)pvVar1 = pvVar1;
*(void **)((int)pvVar1 + 4) = pvVar1;
*(void **)((int)pvVar1 + 8) = pvVar1;
*(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
thunk_FUN_10dee620(&local_14,0x4b,0);
local_8 = 1;
SCStr::int_release((SCStr *)&local_14);
ExceptionList = local_10;
return param_1;
}'''
EVIDENCE = {'handler': '1172e53d', 'metadata': {
    'address': '11fb75a4', 'state_count': 2, 'words': [0] * 8 + [1],
    'actions': [
        {'next_state': -1, 'action': '1172e530',
         'instructions': ['lea ecx, [ebp - 0x10]', 'jmp 0x1008c50b']},
        {'next_state': -1, 'action': '1148cdcf', 'instructions': []}]}}


class EmptyTreeTests(unittest.TestCase):
    def candidate(self, source=SOURCE):
        record = {'entry': '10df5400', 'name': 'FUN_10df5400',
                  'body_bytes': 160, 'decompiled_c': source}
        abi = SimpleNamespace(lower=lambda text: (text, {}, 0))
        return lower(record, EVIDENCE, abi, 'none', nontrivial_copy=True, stack_homes=True)

    def test_by_value_container_has_compiler_owned_lifetime_and_layout(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        source = cpp_source([candidate])
        with tempfile.TemporaryDirectory(dir=ROOT / 'analysis') as directory:
            path = Path(directory) / 'tree.cpp'
            obj = path.with_suffix('.obj')
            path.write_text(source)
            result = subprocess.run([str(COMPILER), '/nologo', '/O2', '/EHsc', '/c',
                '/clang:--target=i686-pc-windows-msvc', f'/Fo{obj}',
                os.path.relpath(path, ROOT)], cwd=ROOT, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
            sections, symbols, indices = read_coff(obj)
            names = [symbol['name'] for symbol in indices.values()]
            self.assertTrue(any('thunk_FUN_10dee620' in name for name in names))
            self.assertTrue(any('CxxFrameHandler3' in name for name in names))
            self.assertFalse(any('??0RecoveredEmptyTree' in name for name in names))

    def test_unknown_node_ownership_and_size_are_rejected(self):
        for source in [SOURCE.replace('0x1c', '0x20'),
                       SOURCE.replace('thunk_FUN_10dee620', 'other_consumer'),
                       SOURCE.replace('local_8 = 1;', 'use_node(pvVar1); local_8 = 1;')]:
            self.assertIsNone(self.candidate(source))


if __name__ == '__main__':
    unittest.main()

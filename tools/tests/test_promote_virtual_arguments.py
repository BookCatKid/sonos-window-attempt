"""Verify recovered virtual dispatch against a typed x86 thiscall pointer."""
import os
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from compile_ghidra_cpp import COMPILER, ROOT
from compare_compiled_ghidra import read_coff
from promote_virtual_arguments import lower


class VirtualArgumentTests(unittest.TestCase):
    def test_dispatch_matches_typed_thiscall_pointer(self):
        pseudo = 'int FUN_10123456(int *param_1, void *param_2, void *param_3) { return (**(code **)(*param_1 + 0x20))(param_2,param_3); }'
        recovered, declarations, count = lower(pseudo)
        self.assertEqual(count, 1)
        typed = ('using Method = int (__thiscall *)(int *, void *, void *);\n'
                 'int FUN_10123456(int *param_1, void *param_2, void *param_3) { return (*(Method *)(*param_1 + 0x20))(param_1,param_2,param_3); }')
        with tempfile.TemporaryDirectory(dir=ROOT / 'analysis') as scratch:
            codes = []
            for name, source in [('typed', typed), ('recovered', '\n'.join(declarations.values()) + '\n' + recovered)]:
                path = Path(scratch) / (name + '.cpp')
                obj = path.with_suffix('.obj')
                path.write_text(source)
                result = subprocess.run([str(COMPILER), '/nologo', '/O2', '/c', '/clang:--target=i686-pc-windows-msvc', f'/Fo{obj}', os.path.relpath(path, ROOT)], cwd=ROOT, capture_output=True, text=True)
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
                sections, symbols, _ = read_coff(obj)
                symbol = next(x for x in symbols if 'FUN_10123456' in x['name'] and x['section'] > 0)
                codes.append(sections[symbol['section'] - 1]['code'][symbol['offset']:])
            self.assertEqual(codes[0], codes[1])

    def test_explicit_receiver_is_not_added_twice(self):
        source = '(**(code **)(*param_1 + 0x20))(param_1,param_2);'
        self.assertEqual(lower(source), (source, {}, 0))

    def test_unaligned_slot_is_left_for_later_recovery(self):
        source = '(**(code **)(*param_1 + 3))(param_2);'
        self.assertEqual(lower(source), (source, {}, 0))

    def test_nested_arguments_and_embedded_object_receiver(self):
        source = '(**(code **)(*(int *)(param_1 + 4) + 0x20))(&local_14,(int *)(param_2 + 4));'
        changed, _, count = lower(source)
        self.assertEqual(count, 1)
        self.assertIn(')->Invoke((void *)(&local_14), (void *)((int *)(param_2 + 4)))', changed)


if __name__ == '__main__':
    unittest.main()

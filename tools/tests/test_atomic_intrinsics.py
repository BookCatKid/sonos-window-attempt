import os
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from compile_atomic_intrinsics import DECLARATIONS, lower_atomic_blocks
from compile_ghidra_cpp import COMPILER, ROOT
from compare_compiled_ghidra import DISASSEMBLER, function_symbols, read_coff


class AtomicIntrinsicsTests(unittest.TestCase):
    def compile_body(self, body):
        lowered, count = lower_atomic_blocks(body)
        self.assertEqual(count, 1)
        with tempfile.TemporaryDirectory(dir=ROOT / 'analysis') as directory:
            source = Path(directory) / 'atomic.cpp'
            obj = source.with_suffix('.obj')
            source.write_text(DECLARATIONS + lowered)
            result = subprocess.run([str(COMPILER), '/nologo', '/O2', '/c',
                '/clang:--target=i686-pc-windows-msvc', f'/Fo{obj}',
                os.path.relpath(source, ROOT)], cwd=ROOT, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
            sections, symbols, indices = read_coff(obj)
            code, relocations = function_symbols(sections, symbols, indices)['10123456']
            self.assertEqual(relocations, [])
            return list(DISASSEMBLER.disasm(code, 0))

    def test_increment_emits_one_atomic_memory_instruction(self):
        instructions = self.compile_body('''void __fastcall FUN_10123456(int *p) {
LOCK(); *p = *p + 1; UNLOCK(); }''')
        atomic = [i for i in instructions if i.mnemonic.startswith('lock ')]
        self.assertEqual(len(atomic), 1)
        self.assertIn(atomic[0].mnemonic, {'lock inc', 'lock add'})
        self.assertFalse(any(i.mnemonic == 'call' for i in instructions))

    def test_fetch_add_returns_old_value_using_xadd(self):
        instructions = self.compile_body('''int __fastcall FUN_10123456(int *p, int amount) {
int old; LOCK(); old = *p; *p = old + amount; UNLOCK(); return old; }''')
        self.assertTrue(any(i.mnemonic == 'lock xadd' for i in instructions))
        self.assertFalse(any(i.mnemonic == 'call' for i in instructions))

    def test_byte_exchange_does_not_widen_memory_access(self):
        instructions = self.compile_body('''char __fastcall FUN_10123456(char *p, char value) {
char old; LOCK(); old = *p; *p = value; UNLOCK(); return old; }''')
        exchanges = [i for i in instructions if i.mnemonic == 'xchg']
        self.assertEqual(len(exchanges), 1)
        self.assertIn('byte ptr', exchanges[0].op_str)

    def test_control_flow_and_multiple_writes_remain_unlowered(self):
        for body in ['LOCK(); if (x) *p = 1; UNLOCK();',
                     'LOCK(); *p = 1; *q = 2; UNLOCK();',
                     'LOCK(); old = *p; next = old + 1; *p = next; UNLOCK();',
                     'LOCK(); old = *p; *p = old + old; UNLOCK();',
                     'LOCK(); old = *p; p = q; *p = old + 1; UNLOCK();',
                     'long long FUN_10123456(long long *p) { LOCK(); *p = 0; UNLOCK(); }',
                     'void FUN_10123456(void *p) { LOCK(); *(double *)p = 0; UNLOCK(); }']:
            lowered, count = lower_atomic_blocks(body)
            self.assertEqual((lowered, count), (body, 0))


if __name__ == '__main__':
    unittest.main()

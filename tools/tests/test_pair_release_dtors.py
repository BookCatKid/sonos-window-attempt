import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_pair_release_dtors as pair

ENTRY = 0x1062cca0
TEXT = '''
void __fastcall FUN_1062cca0(undefined4 *param_1)
{
  int *piVar1;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  return;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def dtor_instructions():
    a = ENTRY
    return [
        instruction(a, 'push', 'ebp'),
        instruction(a + 1, 'mov', 'ebp, esp'),
        instruction(a + 3, 'push', '-1'),
        instruction(a + 5, 'push', '0x115c2870'),
        instruction(a + 0xA, 'mov', 'eax, dword ptr fs:[0]'),
        instruction(a + 0x10, 'push', 'eax'),
        instruction(a + 0x11, 'mov', 'eax, dword ptr [0x12126b84]'),
        instruction(a + 0x16, 'xor', 'eax, ebp'),
        instruction(a + 0x18, 'push', 'eax'),
        instruction(a + 0x19, 'lea', 'eax, [ebp - 0xc]'),
        instruction(a + 0x1C, 'mov', 'dword ptr fs:[0], eax'),
        instruction(a + 0x22, 'mov', 'edx, dword ptr [ecx + 4]'),
        instruction(a + 0x25, 'mov', 'dword ptr [ebp - 4], 0'),
        instruction(a + 0x2C, 'test', 'edx, edx'),
        instruction(a + 0x2E, 'je', '0x1062cce4'),
        instruction(a + 0x30, 'mov', 'dword ptr [ecx], 0'),
        instruction(a + 0x36, 'mov', 'dword ptr [ecx + 4], 0'),
        instruction(a + 0x3D, 'mov', 'ecx, edx'),
        instruction(a + 0x3F, 'mov', 'eax, dword ptr [edx]'),
        instruction(a + 0x41, 'call', 'dword ptr [eax + 8]'),
        instruction(a + 0x44, 'mov', 'ecx, dword ptr [ebp - 0xc]'),
        instruction(a + 0x47, 'mov', 'dword ptr fs:[0], ecx'),
        instruction(a + 0x4E, 'pop', 'ecx'),
        instruction(a + 0x4F, 'mov', 'esp, ebp'),
        instruction(a + 0x51, 'pop', 'ebp'),
        instruction(a + 0x52, 'ret'),
    ]


class PairReleaseTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 83,
                  'decompiled_c': text}
        with patch.object(pair, 'function_bytes', return_value=b'\0' * 83), \
             patch.object(pair, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = (instructions if instructions is not None
                                           else dtor_instructions())
            return pair.lower(record, None, 0, [])

    def test_dtor_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        source = candidate['source']
        self.assertIn('NativePairRelease_FUN_1062cca0::FUN_1062cca0()', source)
        self.assertIn('NativeReleaseIface *p = (NativeReleaseIface *)next;', source)
        self.assertIn('rep = 0; next = 0;', source)
        self.assertIn('p->v8();', source)

    def test_wrong_calls_rejected(self):
        bad = dtor_instructions()
        bad[19] = instruction(ENTRY + 0x41, 'call', 'dword ptr [eax + 4]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = dtor_instructions()
        bad[19] = instruction(ENTRY + 0x41, 'call', '0x10000001')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_layout_rejected(self):
        bad = dtor_instructions()
        bad[-1] = instruction(ENTRY + 0x52, 'ret', '4')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = dtor_instructions()
        bad[15] = instruction(ENTRY + 0x30, 'mov', 'dword ptr [ecx + 4], 0')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in dtor_instructions()
               if i.op_str != 'dword ptr [ecx + 4], 0']
        self.assertIsNone(self.candidate(instructions=bad))
        bad = dtor_instructions()
        bad[14] = instruction(ENTRY + 0x2E, 'jne', '0x1062cce4')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_text_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('*param_1 = 0;', '*param_1 = 1;')))


if __name__ == '__main__':
    unittest.main()

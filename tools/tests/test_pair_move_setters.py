import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_pair_move_setters as moveset

ENTRY = 0x106a8e70
TEXT = '''
int * __thiscall FUN_106a8e70(int *param_1,int *param_2)
{
  int *piVar1;
  int *piVar2;
  param_1[1] = 0;
  *param_1 = 0;
  piVar1 = (int *)*param_2;
  *param_2 = 0;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    param_1[1] = (**(code **)(*piVar1 + 0xc))();
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def setter_instructions():
    a = ENTRY
    return [
        instruction(a + 0x00, 'mov', 'eax, dword ptr [esp + 4]'),
        instruction(a + 0x04, 'push', 'esi'),
        instruction(a + 0x05, 'mov', 'esi, ecx'),
        instruction(a + 0x07, 'push', 'edi'),
        instruction(a + 0x08, 'mov', 'dword ptr [esi + 4], 0'),
        instruction(a + 0x0F, 'mov', 'dword ptr [esi], 0'),
        instruction(a + 0x15, 'mov', 'edi, dword ptr [eax]'),
        instruction(a + 0x17, 'mov', 'dword ptr [eax], 0'),
        instruction(a + 0x1D, 'mov', 'ecx, dword ptr [esi + 4]'),
        instruction(a + 0x20, 'test', 'ecx, ecx'),
        instruction(a + 0x22, 'je', '0x106a8ea6'),
        instruction(a + 0x24, 'mov', 'dword ptr [esi], 0'),
        instruction(a + 0x2A, 'mov', 'dword ptr [esi + 4], 0'),
        instruction(a + 0x31, 'mov', 'eax, dword ptr [ecx]'),
        instruction(a + 0x33, 'call', 'dword ptr [eax + 8]'),
        instruction(a + 0x36, 'mov', 'dword ptr [esi], edi'),
        instruction(a + 0x39, 'test', 'edi, edi'),
        instruction(a + 0x3B, 'je', '0x106a8ebd'),
        instruction(a + 0x3D, 'mov', 'eax, dword ptr [edi]'),
        instruction(a + 0x3F, 'mov', 'ecx, edi'),
        instruction(a + 0x41, 'call', 'dword ptr [eax + 0xc]'),
        instruction(a + 0x44, 'mov', 'dword ptr [esi + 4], eax'),
        instruction(a + 0x47, 'mov', 'eax, esi'),
        instruction(a + 0x49, 'pop', 'edi'),
        instruction(a + 0x4A, 'pop', 'esi'),
        instruction(a + 0x4B, 'ret', '4'),
        instruction(a + 0x4C, 'pop', 'edi'),
        instruction(a + 0x4D, 'mov', 'dword ptr [esi + 4], 0'),
        instruction(a + 0x54, 'mov', 'eax, esi'),
        instruction(a + 0x56, 'pop', 'esi'),
        instruction(a + 0x57, 'ret', '4'),
    ]


class PairMoveSetterTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 91,
                  'decompiled_c': text}
        with patch.object(moveset, 'function_bytes', return_value=b'\0' * 91), \
             patch.object(moveset, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = (instructions if instructions is not None
                                           else setter_instructions())
            return moveset.lower(record, None, 0, [])

    def test_setter_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        source = candidate['source']
        self.assertIn('NativePairMoveSetter_FUN_106a8e70 *NativePairMoveSetter_FUN_106a8e70'
                      '::FUN_106a8e70(NativeReleaseIface **param_2)', source)
        self.assertIn('NativeReleaseIface *newrep = *param_2;', source)
        self.assertIn('*param_2 = 0;', source)
        self.assertIn('rep = 0; next = 0; old->v8();', source)
        self.assertIn('next = (NativeReleaseIface *)newrep->vC();', source)

    def test_wrong_calls_rejected(self):
        bad = setter_instructions()
        bad[13] = instruction(ENTRY + 0x33, 'call', 'dword ptr [eax + 4]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = setter_instructions()
        bad[20] = instruction(ENTRY + 0x41, 'call', '0x10000001')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_layout_rejected(self):
        bad = setter_instructions()
        bad[0] = instruction(ENTRY, 'mov', 'eax, dword ptr [esp + 8]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = setter_instructions()
        bad[4] = instruction(ENTRY + 0x08, 'mov', 'dword ptr [esi + 8], 0')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = setter_instructions()
        bad[-1] = instruction(ENTRY + 0x57, 'ret')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in setter_instructions() if i.op_str != 'dword ptr [eax], 0']
        self.assertIsNone(self.candidate(instructions=bad))
        bad = setter_instructions()
        bad[17] = instruction(ENTRY + 0x3B, 'jne', '0x106a8ebd')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_text_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('*param_2 = 0;', '*param_2 = 1;')))


if __name__ == '__main__':
    unittest.main()

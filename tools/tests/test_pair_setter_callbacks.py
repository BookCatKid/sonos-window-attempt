import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_pair_setter_callbacks as setter

ENTRY = 0x10656a30
TEXT = '''
int * __thiscall FUN_10656a30(int *param_1,int *param_2)
{
  int *piVar1;
  if (param_2 != (int *)*param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*param_2 + 0xc))();
      param_1[1] = (int)piVar1;
      (**(code **)(*piVar1 + 4))();
      return param_1;
    }
    param_1[1] = 0;
  }
  return param_1;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def setter_instructions():
    a = ENTRY
    return [
        instruction(a + 0x00, 'push', 'esi'),
        instruction(a + 0x01, 'mov', 'esi, ecx'),
        instruction(a + 0x03, 'push', 'edi'),
        instruction(a + 0x04, 'mov', 'edi, dword ptr [esp + 0xc]'),
        instruction(a + 0x08, 'cmp', 'edi, dword ptr [esi]'),
        instruction(a + 0x0A, 'je', '0x10656a7a'),
        instruction(a + 0x0C, 'mov', 'ecx, dword ptr [esi + 4]'),
        instruction(a + 0x0F, 'test', 'ecx, ecx'),
        instruction(a + 0x11, 'je', '0x10656a55'),
        instruction(a + 0x13, 'mov', 'dword ptr [esi], 0'),
        instruction(a + 0x19, 'mov', 'dword ptr [esi + 4], 0'),
        instruction(a + 0x20, 'mov', 'eax, dword ptr [ecx]'),
        instruction(a + 0x22, 'call', 'dword ptr [eax + 8]'),
        instruction(a + 0x25, 'mov', 'dword ptr [esi], edi'),
        instruction(a + 0x28, 'test', 'edi, edi'),
        instruction(a + 0x2A, 'je', '0x10656a73'),
        instruction(a + 0x2C, 'mov', 'eax, dword ptr [edi]'),
        instruction(a + 0x2E, 'mov', 'ecx, edi'),
        instruction(a + 0x30, 'call', 'dword ptr [eax + 0xc]'),
        instruction(a + 0x33, 'mov', 'dword ptr [esi + 4], eax'),
        instruction(a + 0x36, 'mov', 'ecx, eax'),
        instruction(a + 0x38, 'mov', 'edx, dword ptr [eax]'),
        instruction(a + 0x3A, 'call', 'dword ptr [edx + 4]'),
        instruction(a + 0x3D, 'pop', 'edi'),
        instruction(a + 0x3E, 'mov', 'eax, esi'),
        instruction(a + 0x40, 'pop', 'esi'),
        instruction(a + 0x41, 'ret', '4'),
        instruction(a + 0x43, 'mov', 'dword ptr [esi + 4], 0'),
        instruction(a + 0x4A, 'pop', 'edi'),
        instruction(a + 0x4B, 'mov', 'eax, esi'),
        instruction(a + 0x4D, 'pop', 'esi'),
        instruction(a + 0x4E, 'ret', '4'),
    ]


class PairSetterTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 81,
                  'decompiled_c': text}
        with patch.object(setter, 'function_bytes', return_value=b'\0' * 81), \
             patch.object(setter, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = (instructions if instructions is not None
                                           else setter_instructions())
            return setter.lower(record, None, 0, [])

    def test_setter_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        source = candidate['source']
        self.assertIn('NativePairSetter_FUN_10656a30 *NativePairSetter_FUN_10656a30::FUN_10656a30('
                      'NativeReleaseIface *param_2)', source)
        self.assertIn('if (param_2 != rep)', source)
        self.assertIn('rep = 0; next = 0; old->v8();', source)
        self.assertIn('next = (NativeReleaseIface *)param_2->vC(); next->v4();', source)
        self.assertIn('else next = 0;', source)
        self.assertIn('return this;', source)

    def test_wrong_calls_rejected(self):
        bad = setter_instructions()
        bad[12] = instruction(ENTRY + 0x22, 'call', 'dword ptr [eax + 4]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = setter_instructions()
        bad[18] = instruction(ENTRY + 0x30, 'call', 'dword ptr [eax + 0x10]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = setter_instructions()
        bad[22] = instruction(ENTRY + 0x3A, 'call', '0x10000001')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_layout_rejected(self):
        bad = setter_instructions()
        bad[3] = instruction(ENTRY + 0x04, 'mov', 'edi, dword ptr [esp + 8]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = setter_instructions()
        bad[6] = instruction(ENTRY + 0x0C, 'mov', 'ecx, dword ptr [esi + 8]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = setter_instructions()
        bad[9] = instruction(ENTRY + 0x13, 'mov', 'dword ptr [esi + 4], 0')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = setter_instructions()
        bad[-1] = instruction(ENTRY + 0x4E, 'ret')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = setter_instructions()
        bad[14] = instruction(ENTRY + 0x2A, 'jne', '0x10656a73')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_text_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('param_2 != (int *)*param_1',
                                                      'param_2 == (int *)*param_1')))
        self.assertIsNone(self.candidate(TEXT.replace('*param_1 = (int)param_2;',
                                                      '*param_1 = (int)param_3;')))


if __name__ == '__main__':
    unittest.main()

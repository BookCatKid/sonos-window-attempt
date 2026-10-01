import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_op_ref_ctors as opref

ENTRY = 0x10687d70
TEXT = '''
undefined4 * __thiscall FUN_10687d70(undefined4 *param_1,int param_2)
{
  *param_1 = &RControlAIOOpRefBase::vftable;
  local_8 = 0;
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[2] = 0;
  *param_1 = &RControlAIOOpRef<RUpnpCDCreateObjectAIOOp>::vftable;
  return param_1;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def ctor_instructions():
    a = ENTRY
    return [
        instruction(a, 'mov', 'esi, ecx'),
        instruction(a + 2, 'mov', 'dword ptr [ebp - 0x10], esi'),
        instruction(a + 5, 'lea', 'eax, [esi + 4]'),
        instruction(a + 8, 'mov', 'dword ptr [esi], 0x1188207c'),
        instruction(a + 0xE, 'mov', 'dword ptr [ebp - 0x10], eax'),
        instruction(a + 0x11, 'mov', 'ecx, dword ptr [ebp + 8]'),
        instruction(a + 0x14, 'mov', 'dword ptr [ebp - 4], 0'),
        instruction(a + 0x1B, 'mov', 'dword ptr [eax], ecx'),
        instruction(a + 0x1D, 'test', 'ecx, ecx'),
        instruction(a + 0x1F, 'je', '0x10687dc1'),
        instruction(a + 0x21, 'lea', 'eax, [ecx + 4]'),
        instruction(a + 0x24, 'push', 'eax'),
        instruction(a + 0x25, 'call', '0x10000001'),
        instruction(a + 0x2A, 'add', 'esp, 4'),
        instruction(a + 0x2D, 'mov', 'dword ptr [esi + 8], 0'),
        instruction(a + 0x34, 'mov', 'eax, esi'),
        instruction(a + 0x36, 'mov', 'dword ptr [esi], 0x118c62f8'),
        instruction(a + 0x3C, 'ret', '4'),
    ]


class OpRefCtorTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 114,
                  'decompiled_c': text}
        with patch.object(opref, 'function_bytes', return_value=b'\0' * 114), \
             patch.object(opref, 'thunk_target', side_effect=lambda read, va: opref.ADDREF), \
             patch.object(opref, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = (instructions if instructions is not None
                                           else ctor_instructions())
            return opref.lower(record, None, 0, [])

    def test_ctor_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        source = candidate['source']
        self.assertIn('NativeOpRefCtor_FUN_10687d70::NativeOpRefCtor_FUN_10687d70(void *param_2)',
                      source)
        self.assertIn(': m4(param_2)', source)
        self.assertNotIn('m4.rep = param_2;', source)
        self.assertIn('f8 = 0;', source)
        self.assertIn('vptr = (void *)&DAT_118c62f8;', source)
        self.assertEqual(candidate['first_vtable'], '1188207c')

    def test_wrong_calls_rejected(self):
        bad = ctor_instructions()
        bad[12] = instruction(ENTRY + 0x25, 'call', 'dword ptr [eax]')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_layout_rejected(self):
        bad = ctor_instructions()
        bad[-1] = instruction(ENTRY + 0x3C, 'ret')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = ctor_instructions()
        bad[2] = instruction(ENTRY + 5, 'lea', 'eax, [esi + 8]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in ctor_instructions()
               if not (i.mnemonic == 'mov' and i.op_str == 'dword ptr [esi + 8], 0')]
        self.assertIsNone(self.candidate(instructions=bad))
        bad = ctor_instructions()
        bad[9] = instruction(ENTRY + 0x1F, 'jne', '0x10687dc1')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = ctor_instructions()
        bad[11] = instruction(ENTRY + 0x24, 'push', 'ecx')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_text_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('param_1[1] = param_2;', 'param_1[2] = param_2;')))
        self.assertIsNone(self.candidate(TEXT.replace('param_2 != 0', 'param_2 == 0')))


if __name__ == '__main__':
    unittest.main()

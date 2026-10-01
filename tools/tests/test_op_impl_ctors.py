import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_op_impl_ctors as opimpl

ENTRY = 0x10687e80
TEXT = '''
undefined4 * __fastcall FUN_10687e80(undefined4 *param_1, int param_2)
{
  *param_1 = &SCIObjImpl<SCIOp>::vftable;
  param_1[1] = 0;
  g_lSCObjCount = g_lSCObjCount + 1;
  thunk_FUN_11240650(uVar1);
  param_1[2] = &RControlAIOOpCB::vftable;
  *param_1 = &SCOpImpl<SCIOp,RUpnpCDCreateObjectAIOOp>::vftable;
  param_1[2] = &SCOpImpl<SCIOp,RUpnpCDCreateObjectAIOOp>::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = &RControlAIOOpRefBase::vftable;
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = &RControlAIOOpRef<RUpnpCDCreateObjectAIOOp>::vftable;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = &SCIObjImpl<SCElapsedTimeMeasurement>::vftable;
  param_1[0xd] = 0;
  g_lSCObjCount = g_lSCObjCount + 1;
  param_1[0xc] = &SCElapsedTimeMeasurement::vftable;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}
'''
TEXT_292 = TEXT.rstrip('}\n') + '''  *param_1 = &SCOpImpl<SCIOp,Other>::vftable;
  param_1[2] = &SCOpImpl<SCIOp,Other>::vftable;
  return param_1;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def ctor_instructions(tail=False):
    a = ENTRY
    body = [
        instruction(a, 'mov', 'edi, ecx'),
        instruction(a + 2, 'mov', 'dword ptr [edi], 0x11882180'),
        instruction(a + 8, 'mov', 'dword ptr [edi + 4], 0'),
        instruction(a + 0xF, 'inc', 'dword ptr [0x121a0e68]'),
        instruction(a + 0x15, 'lea', 'esi, [edi + 8]'),
        instruction(a + 0x18, 'mov', 'ecx, esi'),
        instruction(a + 0x1A, 'call', '0x10000001'),
        instruction(a + 0x1F, 'mov', 'dword ptr [esi], 0x1188206c'),
        instruction(a + 0x25, 'mov', 'dword ptr [edi], 0x118c6304'),
        instruction(a + 0x2B, 'mov', 'dword ptr [esi], 0x118c634c'),
        instruction(a + 0x31, 'mov', 'dword ptr [edi + 0xc], 0'),
        instruction(a + 0x38, 'mov', 'dword ptr [edi + 0x10], 0'),
        instruction(a + 0x3F, 'lea', 'esi, [edi + 0x14]'),
        instruction(a + 0x42, 'lea', 'eax, [esi + 4]'),
        instruction(a + 0x45, 'mov', 'dword ptr [esi], 0x1188207c'),
        instruction(a + 0x4B, 'mov', 'ecx, dword ptr [ebp + 8]'),
        instruction(a + 0x4E, 'mov', 'dword ptr [eax], ecx'),
        instruction(a + 0x50, 'test', 'ecx, ecx'),
        instruction(a + 0x52, 'je', '0x10687ef0'),
        instruction(a + 0x54, 'lea', 'eax, [ecx + 4]'),
        instruction(a + 0x57, 'push', 'eax'),
        instruction(a + 0x58, 'call', '0x10000002'),
        instruction(a + 0x5D, 'add', 'esp, 4'),
        instruction(a + 0x60, 'mov', 'dword ptr [esi + 8], 0'),
        instruction(a + 0x67, 'mov', 'eax, 0x3e8'),
        instruction(a + 0x6C, 'mov', 'dword ptr [esi], 0x118c62f8'),
        instruction(a + 0x72, 'xorps', 'xmm0, xmm0'),
        instruction(a + 0x75, 'mov', 'word ptr [edi + 0x24], ax'),
        instruction(a + 0x7A, 'mov', 'dword ptr [edi + 0x20], 0'),
        instruction(a + 0x81, 'mov', 'dword ptr [edi + 0x28], 0'),
        instruction(a + 0x88, 'mov', 'dword ptr [edi + 0x2c], 0'),
        instruction(a + 0x8F, 'mov', 'dword ptr [edi + 0x30], 0x118820e4'),
        instruction(a + 0x96, 'mov', 'dword ptr [edi + 0x34], 0'),
        instruction(a + 0x9D, 'inc', 'dword ptr [0x121a0e68]'),
        instruction(a + 0xA3, 'mov', 'dword ptr [edi + 0x30], 0x11882120'),
        instruction(a + 0xAA, 'movq', 'qword ptr [edi + 0x38], xmm0'),
        instruction(a + 0xAF, 'mov', 'dword ptr [edi + 0x3c], 0'),
        instruction(a + 0xB6, 'mov', 'dword ptr [edi + 0x40], 0'),
        instruction(a + 0xBD, 'mov', 'dword ptr [edi + 0x44], 0'),
    ]
    if tail:
        body += [
            instruction(a + 0xC4, 'mov', 'dword ptr [esi], 0x118f1d34'),
            instruction(a + 0xCA, 'mov', 'dword ptr [ebx], 0x118f1d7c'),
        ]
    body += [instruction(a + 0x100, 'ret', '4')]
    return body


class OpImplCtorTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None, size=278):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': size,
                  'decompiled_c': text}
        targets = {0x10000001: opimpl.MEMBER8_CTOR, 0x10000002: opimpl.ADDREF}
        with patch.object(opimpl, 'function_bytes', return_value=b'\0' * size), \
             patch.object(opimpl, 'thunk_target', side_effect=lambda read, va: targets.get(va, va)), \
             patch.object(opimpl, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = (instructions if instructions is not None
                                           else ctor_instructions(size == 292))
            return opimpl.lower(record, None, 0, [])

    def test_ctor_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        source = candidate['source']
        self.assertIn('NativeOpImpl_FUN_10687e80::NativeOpImpl_FUN_10687e80(void *param_2)',
                      source)
        self.assertIn('m8.vptr = (void *)&DAT_118c634c;', source)
        self.assertIn('v0 = (void *)&DAT_118c6304;', source)
        self.assertIn(': m14(param_2) {', source)
        self.assertIn('m14.vptr = (void *)&DAT_118c62f8;', source)
        self.assertIn('f24 = 1000;', source)
        self.assertIn('g_lSCObjCount++;', source)
        self.assertIn('f38.q = 0; f38.w.hi = 0;', source)
        self.assertEqual(candidate['base_vtable'], '11882180')
        self.assertNotIn('DAT_118f1d34', source)

    def test_292_tail(self):
        candidate = self.candidate(text=TEXT_292, size=292)
        self.assertIsNotNone(candidate)
        self.assertIn('v0 = (void *)&DAT_118f1d34;', candidate['source'])
        self.assertIn('m8.vptr = (void *)&DAT_118f1d7c;', candidate['source'])

    def test_wrong_calls_rejected(self):
        bad = ctor_instructions()
        bad[20] = instruction(ENTRY + 0x58, 'call', '0x10000009')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = ctor_instructions()
        bad[6] = instruction(ENTRY + 0x1A, 'call', '0x10000002')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_layout_rejected(self):
        bad = ctor_instructions()
        bad[-1] = instruction(ENTRY + 0x100, 'ret', '8')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = ctor_instructions()
        bad[2] = instruction(ENTRY + 8, 'mov', 'dword ptr [edi + 8], 0')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in ctor_instructions()
               if not (i.mnemonic == 'xorps')]
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in ctor_instructions()
               if i.mnemonic != 'inc' or i.address != ENTRY + 0x9D]
        self.assertIsNone(self.candidate(instructions=bad))
        bad = ctor_instructions()
        bad[17] = instruction(ENTRY + 0x52, 'jne', '0x10687ef0')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_292_tail_operands_rejected(self):
        bad = ctor_instructions(tail=True)
        bad[-3] = instruction(ENTRY + 0xCA, 'mov', 'dword ptr [edi], 0x118f1d7c')
        self.assertIsNone(self.candidate(text=TEXT_292, instructions=bad, size=292))

    def test_text_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('param_1[6] = param_2;', 'param_1[7] = param_2;')))
        self.assertIsNone(self.candidate(TEXT.replace('(param_1 + 9) = 1000;', '(param_1 + 9) = 200;')))
        self.assertIsNone(self.candidate(TEXT.replace('g_lSCObjCount = g_lSCObjCount + 1;',
                                                      'g_lSCObjCount = g_lSCObjCount + 2;', 1)))
        self.assertIsNone(self.candidate(TEXT.replace('param_2 != 0', 'param_2 == 0')))


if __name__ == '__main__':
    unittest.main()

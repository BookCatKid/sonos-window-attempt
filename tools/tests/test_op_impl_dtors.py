import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_op_impl_dtors as dtor

ENTRY = 0x10688910
TEXT = '''
void __fastcall FUN_10688910(undefined4 *param_1)
{
  *param_1 = &SCOpImpl<SCIOp,RUpnpCDCreateObjectAIOOp>::vftable;
  param_1[2] = &SCOpImpl<SCIOp,RUpnpCDCreateObjectAIOOp>::vftable;
  if (param_1[3] != 0) {
    piVar1 = (int *)param_1[4];
    if (piVar1 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  param_1[0xc] = &SCIObjImpl<SCElapsedTimeMeasurement>::vftable;
  g_lSCObjCount = g_lSCObjCount + -1;
  param_1[0xc] = &SCIObj::vftable;
  local_8 = 0;
  SCStr::int_release((SCStr *)(param_1 + 0xb));
  param_1[0xb] = 0;
  local_8 = 1;
  SCStr::int_release((SCStr *)(param_1 + 10));
  param_1[10] = 0;
  param_1[5] = &RControlAIOOpRef<RUpnpCDCreateObjectAIOOp>::vftable;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)param_1[4];
  local_8 = 2;
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = &RControlAIOOpCB::vftable;
  thunk_FUN_11240850();
  *param_1 = &SCIObjImpl<SCIOp>::vftable;
  g_lSCObjCount = g_lSCObjCount + -1;
  *param_1 = &SCIObj::vftable;
  return;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def dtor_instructions():
    a = ENTRY
    return [
        instruction(a, 'mov', 'edi, ecx'),
        instruction(a + 2, 'mov', 'dword ptr [edi], 0x118c6304'),
        instruction(a + 8, 'mov', 'dword ptr [edi + 8], 0x118c634c'),
        instruction(a + 0xE, 'cmp', 'dword ptr [edi + 0xc], 0'),
        instruction(a + 0x12, 'je', '0x10688972'),
        instruction(a + 0x14, 'mov', 'ecx, dword ptr [edi + 0x10]'),
        instruction(a + 0x17, 'test', 'ecx, ecx'),
        instruction(a + 0x19, 'je', '0x10688964'),
        instruction(a + 0x1B, 'mov', 'dword ptr [edi + 0xc], 0'),
        instruction(a + 0x22, 'mov', 'dword ptr [edi + 0x10], 0'),
        instruction(a + 0x29, 'mov', 'eax, dword ptr [ecx]'),
        instruction(a + 0x2B, 'call', 'dword ptr [eax + 8]'),
        instruction(a + 0x2E, 'mov', 'dword ptr [edi + 0xc], 0'),
        instruction(a + 0x35, 'mov', 'dword ptr [edi + 0x10], 0'),
        instruction(a + 0x3C, 'mov', 'dword ptr [edi + 0x30], 0x118820e4'),
        instruction(a + 0x43, 'dec', 'dword ptr [0x121a0e68]'),
        instruction(a + 0x49, 'mov', 'dword ptr [edi + 0x30], 0x1186d2f4'),
        instruction(a + 0x50, 'lea', 'ecx, [edi + 0x2c]'),
        instruction(a + 0x53, 'call', '0x10000001'),
        instruction(a + 0x58, 'mov', 'dword ptr [edi + 0x2c], 0'),
        instruction(a + 0x5F, 'lea', 'ecx, [edi + 0x28]'),
        instruction(a + 0x62, 'call', '0x10000002'),
        instruction(a + 0x67, 'mov', 'dword ptr [edi + 0x28], 0'),
        instruction(a + 0x6E, 'lea', 'ecx, [edi + 0x14]'),
        instruction(a + 0x71, 'mov', 'dword ptr [ecx], 0x118c62f8'),
        instruction(a + 0x77, 'call', '0x10000003'),
        instruction(a + 0x7C, 'mov', 'ecx, dword ptr [edi + 0x10]'),
        instruction(a + 0x7F, 'test', 'ecx, ecx'),
        instruction(a + 0x81, 'je', '0x106889e1'),
        instruction(a + 0x83, 'mov', 'dword ptr [edi + 0xc], 0'),
        instruction(a + 0x8A, 'mov', 'dword ptr [edi + 0x10], 0'),
        instruction(a + 0x91, 'mov', 'eax, dword ptr [ecx]'),
        instruction(a + 0x93, 'call', 'dword ptr [eax + 8]'),
        instruction(a + 0x96, 'lea', 'ecx, [edi + 8]'),
        instruction(a + 0x99, 'mov', 'dword ptr [edi + 8], 0x1188206c'),
        instruction(a + 0xA0, 'call', '0x10000004'),
        instruction(a + 0xA5, 'mov', 'dword ptr [edi], 0x11882180'),
        instruction(a + 0xAB, 'dec', 'dword ptr [0x121a0e68]'),
        instruction(a + 0xB1, 'mov', 'dword ptr [edi], 0x1186d2f4'),
        instruction(a + 0xB8, 'ret'),
    ]


class OpImplDtorTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 260,
                  'decompiled_c': text}
        targets = {0x10000001: 0x101a4bf0, 0x10000002: 0x101a4bf0,
                   0x10000003: 0x101ba0d0, 0x10000004: 0x11240850}
        with patch.object(dtor, 'function_bytes', return_value=b'\0' * 260), \
             patch.object(dtor, 'thunk_target', side_effect=lambda read, va: targets.get(va, va)), \
             patch.object(dtor, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = (instructions if instructions is not None
                                           else dtor_instructions())
            return dtor.lower(record, None, 0, [])

    def test_dtor_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        source = candidate['source']
        self.assertIn('NativeOpDtor_FUN_10688910::~NativeOpDtor_FUN_10688910()', source)
        self.assertIn('v0 = (void *)&DAT_118c6304;', source)
        self.assertIn('NativeOpDB8_10688910::vptr = (void *)&DAT_118c634c;', source)
        self.assertIn('if (NativeOpDB8_10688910::rep != 0)', source)
        self.assertIn('((NativeOpDtorIface *)p)->slot8();', source)
        self.assertIn('v30 = (void *)&DAT_118820e4;', source)
        self.assertIn('g_lSCObjCount--;', source)
        self.assertIn('v30 = (void *)&DAT_1186d2f4;', source)
        self.assertEqual(candidate['m14_vtable'], '118c62f8')
        self.assertEqual(candidate['m8_vtable'], '1188206c')
        self.assertEqual(candidate['base_vtable'], '11882180')
        self.assertEqual(candidate['scobj_vtable'], '1186d2f4')

    def test_wrong_calls_rejected(self):
        bad = dtor_instructions()
        bad[18] = instruction(ENTRY + 0x53, 'call', '0x10000009')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = dtor_instructions()
        bad[26] = instruction(ENTRY + 0x77, 'call', '0x10000001')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_layout_rejected(self):
        bad = dtor_instructions()
        bad[-1] = instruction(ENTRY + 0xB8, 'ret', '4')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in dtor_instructions() if not (i.mnemonic == 'dec' and i.address == ENTRY + 0xAB)]
        self.assertIsNone(self.candidate(instructions=bad))
        bad = dtor_instructions()
        bad[4] = instruction(ENTRY + 0x12, 'jne', '0x10688972')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in dtor_instructions()
               if not (i.mnemonic == 'lea' and i.op_str == 'ecx, [edi + 0x28]')]
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in dtor_instructions()
               if not (i.mnemonic == 'call' and i.op_str == 'dword ptr [eax + 8]'
                       and i.address == ENTRY + 0x93)]
        self.assertIsNone(self.candidate(instructions=bad))

    def test_text_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('SCStr::int_release', 'release', 1)))
        self.assertIsNone(self.candidate(TEXT.replace('thunk_FUN_11240850', 'thunk_FUN_11240851')))
        self.assertIsNone(self.candidate(TEXT.replace('g_lSCObjCount = g_lSCObjCount + -1',
                                                      'g_lSCObjCount = g_lSCObjCount + 1', 1)))


if __name__ == '__main__':
    unittest.main()

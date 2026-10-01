import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_vcall_event_callbacks as vcall

ENTRY = 0x1068b210
TEXT = '''
void __thiscall FUN_1068b210(int param_1,undefined4 param_2,undefined4 param_3)
{
  piVar1 = (int *)(param_1 + -8);
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*piVar1 + 0xc))();
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))();
  if ((((*(char **)(param_1 + 0x20) != (char *)0x0) && (**(char **)(param_1 + 0x20) != '\\0')) &&
      (*(char **)(param_1 + 0x24) != (char *)0x0)) && (**(char **)(param_1 + 0x24) != '\\0')) {
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_8 = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  return;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def vcall_instructions(slot='0x34'):
    a = ENTRY
    return [
        instruction(a, 'mov', 'esi, ecx'),
        instruction(a + 2, 'lea', 'ebx, [esi - 8]'),
        instruction(a + 5, 'xor', 'edi, edi'),
        instruction(a + 7, 'test', 'ebx, ebx'),
        instruction(a + 9, 'je', '0x1068b25c'),
        instruction(a + 0xB, 'mov', 'eax, dword ptr [ebx]'),
        instruction(a + 0xD, 'mov', 'ecx, ebx'),
        instruction(a + 0xF, 'call', 'dword ptr [eax + 0xc]'),
        instruction(a + 0x12, 'mov', 'edi, eax'),
        instruction(a + 0x14, 'mov', 'ecx, edi'),
        instruction(a + 0x16, 'mov', 'edx, dword ptr [edi]'),
        instruction(a + 0x18, 'call', 'dword ptr [edx + 4]'),
        instruction(a + 0x1B, 'mov', 'eax, dword ptr [ebp + 0xc]'),
        instruction(a + 0x1E, 'lea', 'ecx, [esi + 0x28]'),
        instruction(a + 0x21, 'mov', 'word ptr [esi + 0x1c], ax'),
        instruction(a + 0x25, 'mov', 'eax, dword ptr [ecx]'),
        instruction(a + 0x27, 'mov', 'dword ptr [esi + 0x14], 0'),
        instruction(a + 0x2E, 'call', 'dword ptr [eax + 0x18]'),
        instruction(a + 0x31, 'mov', 'eax, dword ptr [esi + 0x20]'),
        instruction(a + 0x34, 'test', 'eax, eax'),
        instruction(a + 0x36, 'je', '0x1068b298'),
        instruction(a + 0x38, 'cmp', 'byte ptr [eax], 0'),
        instruction(a + 0x3B, 'je', '0x1068b298'),
        instruction(a + 0x3D, 'mov', 'eax, dword ptr [esi + 0x24]'),
        instruction(a + 0x40, 'test', 'eax, eax'),
        instruction(a + 0x42, 'je', '0x1068b298'),
        instruction(a + 0x44, 'cmp', 'byte ptr [eax], 0'),
        instruction(a + 0x47, 'je', '0x1068b298'),
        instruction(a + 0x49, 'mov', 'eax, dword ptr [ebx]'),
        instruction(a + 0x4B, 'mov', 'ecx, ebx'),
        instruction(a + 0x4D, 'call', f'dword ptr [eax + {slot}]'),
        instruction(a + 0x50, 'mov', 'ecx, dword ptr [esi + 4]'),
        instruction(a + 0x53, 'test', 'ecx, ecx'),
        instruction(a + 0x55, 'je', '0x1068b2d2'),
        instruction(a + 0x57, 'push', 'dword ptr [ebp + 0xc]'),
        instruction(a + 0x5A, 'mov', 'eax, dword ptr [ecx]'),
        instruction(a + 0x5C, 'push', 'dword ptr [ebp + 8]'),
        instruction(a + 0x5F, 'call', 'dword ptr [eax + 0x14]'),
        instruction(a + 0x62, 'mov', 'ecx, dword ptr [esi + 8]'),
        instruction(a + 0x65, 'test', 'ecx, ecx'),
        instruction(a + 0x67, 'je', '0x1068b2c4'),
        instruction(a + 0x69, 'mov', 'dword ptr [esi + 4], 0'),
        instruction(a + 0x70, 'mov', 'dword ptr [esi + 8], 0'),
        instruction(a + 0x77, 'mov', 'eax, dword ptr [ecx]'),
        instruction(a + 0x79, 'call', 'dword ptr [eax + 8]'),
        instruction(a + 0x7C, 'mov', 'dword ptr [esi + 4], 0'),
        instruction(a + 0x83, 'mov', 'dword ptr [esi + 8], 0'),
        instruction(a + 0x8A, 'test', 'edi, edi'),
        instruction(a + 0x8C, 'je', '0x1068b2e4'),
        instruction(a + 0x8E, 'mov', 'eax, dword ptr [edi]'),
        instruction(a + 0x90, 'mov', 'ecx, edi'),
        instruction(a + 0x92, 'call', 'dword ptr [eax + 8]'),
        instruction(a + 0x95, 'ret', '8'),
    ]


class VcallEventCallbackTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None, slot='0x34'):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 232,
                  'decompiled_c': text}
        with patch.object(vcall, 'function_bytes', return_value=b'\0' * 232), \
             patch.object(vcall, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = (instructions if instructions is not None
                                           else vcall_instructions(slot))
            return vcall.lower(record, None, 0, [])

    def test_vcall_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        source = candidate['source']
        self.assertIn('void NativeVcallHost_FUN_1068b210::FUN_1068b210(unsigned int param_2, unsigned int param_3)',
                      source)
        self.assertIn('(char *)this - 8', source)
        self.assertIn('piVar2 = piVar1->vC();', source)
        self.assertIn('m28.v18();', source)
        self.assertIn('piVar1->v34();', source)
        self.assertIn('f4->v14(param_2, param_3);', source)
        self.assertIn('((NativeVcallObj *)g2.p)->v8();', source)

    def test_alternate_slot(self):
        candidate = self.candidate(slot='0x60')
        self.assertIsNotNone(candidate)
        self.assertIn('piVar1->v60();', candidate['source'])

    def test_wrong_slot_order_rejected(self):
        bad = vcall_instructions()
        bad[7] = instruction(ENTRY + 0xF, 'call', 'dword ptr [eax + 0x10]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = vcall_instructions()
        bad[17] = instruction(ENTRY + 0x2E, 'call', 'dword ptr [eax + 0x1c]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = vcall_instructions()
        bad[30] = instruction(ENTRY + 0x4D, 'call', '0x10000001')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_layout_rejected(self):
        bad = vcall_instructions()
        bad[-1] = instruction(ENTRY + 0x95, 'ret')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = vcall_instructions()
        bad[1] = instruction(ENTRY + 2, 'lea', 'ebx, [esi - 0xc]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = vcall_instructions()
        bad[16] = instruction(ENTRY + 0x27, 'mov', 'dword ptr [esi + 0x18], 0')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in vcall_instructions()
               if not (i.mnemonic == 'push' and i.op_str == 'dword ptr [ebp + 0xc]')]
        self.assertIsNone(self.candidate(instructions=bad))
        bad = vcall_instructions()
        bad[12] = instruction(ENTRY + 0x21, 'mov', 'word ptr [esi + 0x1e], ax')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_text_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('param_1 + -8', 'param_1 + -4')))
        self.assertIsNone(self.candidate(TEXT.replace('(short)param_3', 'param_3')))


if __name__ == '__main__':
    unittest.main()

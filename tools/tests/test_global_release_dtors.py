import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_global_release_dtors as glob_rel

ENTRY = 0x117e8ad0
HI = 0x121a071c
LO = 0x121a0718
TEXT = f'''
void FUN_{ENTRY:08x}(void)
{{
  int *piVar1;
  piVar1 = DAT_{HI:08x};
  local_8 = 0;
  if (DAT_{HI:08x} != (int *)0x0) {{
    DAT_{LO:08x} = 0;
    DAT_{HI:08x} = (int *)0x0;
    (**(code **)(*piVar1 + 8))();
  }}
  return;
}}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def dtor_instructions():
    a = ENTRY
    return [
        instruction(a + 0x00, 'push', 'ebp'),
        instruction(a + 0x01, 'mov', 'ebp, esp'),
        instruction(a + 0x03, 'push', '-1'),
        instruction(a + 0x05, 'push', '0x114f4a40'),
        instruction(a + 0x0A, 'mov', 'eax, dword ptr fs:[0]'),
        instruction(a + 0x10, 'push', 'eax'),
        instruction(a + 0x11, 'mov', 'eax, dword ptr [0x12126b84]'),
        instruction(a + 0x16, 'xor', 'eax, ebp'),
        instruction(a + 0x18, 'push', 'eax'),
        instruction(a + 0x19, 'lea', 'eax, [ebp - 0xc]'),
        instruction(a + 0x1C, 'mov', 'dword ptr fs:[0], eax'),
        instruction(a + 0x22, 'mov', 'ecx, dword ptr [0x121a071c]'),
        instruction(a + 0x28, 'mov', 'dword ptr [ebp - 4], 0'),
        instruction(a + 0x2F, 'test', 'ecx, ecx'),
        instruction(a + 0x31, 'je', '0x117e8b1c'),
        instruction(a + 0x33, 'mov', 'dword ptr [0x121a0718], 0'),
        instruction(a + 0x3D, 'mov', 'dword ptr [0x121a071c], 0'),
        instruction(a + 0x47, 'mov', 'eax, dword ptr [ecx]'),
        instruction(a + 0x49, 'call', 'dword ptr [eax + 8]'),
        instruction(a + 0x4C, 'mov', 'ecx, dword ptr [ebp - 0xc]'),
        instruction(a + 0x4F, 'mov', 'dword ptr fs:[0], ecx'),
        instruction(a + 0x56, 'pop', 'ecx'),
        instruction(a + 0x57, 'mov', 'esp, ebp'),
        instruction(a + 0x59, 'pop', 'ebp'),
        instruction(a + 0x5A, 'ret'),
    ]


class GlobalReleaseTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 91,
                  'decompiled_c': text}
        with patch.object(glob_rel, 'function_bytes', return_value=b'\0' * 91), \
             patch.object(glob_rel, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = (instructions if instructions is not None
                                           else dtor_instructions())
            return glob_rel.lower(record, None, 0, [])

    def test_dtor_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        source = candidate['source']
        self.assertIn('void FUN_117e8ad0()', source)
        self.assertIn('NativeReleaseIface *p = (NativeReleaseIface *)DAT_121a071c;', source)
        self.assertIn('DAT_121a0718 = 0; DAT_121a071c = 0;', source)
        self.assertIn('p->v8();', source)

    def test_wrong_calls_rejected(self):
        bad = dtor_instructions()
        bad[18] = instruction(ENTRY + 0x49, 'call', 'dword ptr [eax + 4]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = dtor_instructions()
        bad[18] = instruction(ENTRY + 0x49, 'call', '0x10000001')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_layout_rejected(self):
        bad = dtor_instructions()
        bad[11] = instruction(ENTRY + 0x22, 'mov', 'ecx, dword ptr [0x121a0718]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = dtor_instructions()
        bad[16] = instruction(ENTRY + 0x3D, 'mov', 'dword ptr [0x121a0720], 0')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = dtor_instructions()
        bad[-1] = instruction(ENTRY + 0x5A, 'ret', '4')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = dtor_instructions()
        bad[14] = instruction(ENTRY + 0x31, 'jne', '0x117e8b1c')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_text_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('piVar1 = DAT_121a071c;',
                                                      'piVar1 = DAT_121a0718;')))
        self.assertIsNone(self.candidate(TEXT.replace('DAT_121a0718 = 0;',
                                                      'DAT_121a0718 = 1;')))


if __name__ == '__main__':
    unittest.main()

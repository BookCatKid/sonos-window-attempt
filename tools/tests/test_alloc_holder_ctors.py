import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_alloc_holder_ctors as hold

ENTRY = 0x105a5b40
TEXT = '''
undefined4 * __thiscall FUN_105a5b40(undefined4 *param_1,undefined4 param_2)
{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[1] = operator_new(0x14);
  return param_1;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def ctor_instructions():
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
        instruction(a + 0x22, 'mov', 'esi, ecx'),
        instruction(a + 0x24, 'mov', 'eax, dword ptr [ebp + 8]'),
        instruction(a + 0x27, 'mov', 'dword ptr [esi], eax'),
        instruction(a + 0x29, 'mov', 'dword ptr [esi + 4], 0'),
        instruction(a + 0x30, 'push', '0x14'),
        instruction(a + 0x32, 'call', '0x10000001'),
        instruction(a + 0x37, 'add', 'esp, 4'),
        instruction(a + 0x3A, 'mov', 'dword ptr [esi + 4], eax'),
        instruction(a + 0x3D, 'mov', 'eax, esi'),
        instruction(a + 0x3F, 'mov', 'ecx, dword ptr [ebp - 0xc]'),
        instruction(a + 0x42, 'mov', 'dword ptr fs:[0], ecx'),
        instruction(a + 0x49, 'pop', 'ecx'),
        instruction(a + 0x4A, 'mov', 'esp, ebp'),
        instruction(a + 0x4C, 'pop', 'ebp'),
        instruction(a + 0x4D, 'ret', '4'),
    ]


class AllocHolderCtorTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 93,
                  'decompiled_c': text}
        with patch.object(hold, 'function_bytes', return_value=b'\0' * 93), \
             patch.object(hold, 'thunk_target', side_effect=lambda read, va: hold.OPERATOR_NEW), \
             patch.object(hold, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = (instructions if instructions is not None
                                           else ctor_instructions())
            return hold.lower(record, None, 0, [])

    def test_ctor_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        source = candidate['source']
        self.assertIn('NativeAllocHolder_FUN_105a5b40::NativeAllocHolder_FUN_105a5b40(void *param_2)',
                      source)
        self.assertIn('f0 = param_2;', source)
        self.assertIn('f4 = operator_new(0x14);', source)

    def test_wrong_calls_rejected(self):
        bad = ctor_instructions()
        bad[16] = instruction(ENTRY + 0x32, 'call', 'dword ptr [eax]')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_layout_rejected(self):
        bad = ctor_instructions()
        bad[-1] = instruction(ENTRY + 0x4D, 'ret')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = ctor_instructions()
        bad[14] = instruction(ENTRY + 0x29, 'mov', 'dword ptr [esi + 8], 0')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = ctor_instructions()
        bad[13] = instruction(ENTRY + 0x27, 'mov', 'dword ptr [eax], esi')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = ctor_instructions()
        bad[15] = instruction(ENTRY + 0x30, 'push', '0x200')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_text_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('param_1[1] = 0;', 'param_1[2] = 0;')))
        self.assertIsNone(self.candidate(TEXT.replace('operator_new', 'operator_delete')))


if __name__ == '__main__':
    unittest.main()

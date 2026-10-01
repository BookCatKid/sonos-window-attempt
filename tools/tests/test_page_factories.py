import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_page_factories as pages

ENTRY = 0x1061ffa0
VTS = (0x118becc4, 0x118bed20, 0x118bed2c, 0x118bed38)
TEXT = '''
undefined4 * __thiscall FUN_1061ffa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
{
  puVar1 = operator_new(0xe0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = thunk_FUN_10eae120(param_1,param_2,param_3);
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = SCSubmitDiagsWizardErrorPage::vftable;
    puVar1[4] = SCSubmitDiagsWizardErrorPage::vftable;
    puVar1[0x23] = SCSubmitDiagsWizardErrorPage::vftable;
    puVar1[0x2a] = SCSubmitDiagsWizardErrorPage::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def factory_instructions():
    a = ENTRY
    return [
        instruction(a, 'push', 'edi'),
        instruction(a + 2, 'mov', 'edi, ecx'),
        instruction(a + 4, 'push', '0xe0'),
        instruction(a + 9, 'call', '0x10000001'),
        instruction(a + 0xE, 'mov', 'esi, eax'),
        instruction(a + 0x10, 'mov', 'dword ptr [ebp - 0x10], esi'),
        instruction(a + 0x13, 'test', 'esi, esi'),
        instruction(a + 0x15, 'je', '0x10620033'),
        instruction(a + 0x17, 'push', 'dword ptr [ebp + 0xc]'),
        instruction(a + 0x1A, 'lea', 'ecx, [ebp - 0x1c]'),
        instruction(a + 0x1D, 'push', 'dword ptr [ebp + 8]'),
        instruction(a + 0x20, 'push', 'edi'),
        instruction(a + 0x21, 'call', '0x10000002'),
        instruction(a + 0x26, 'push', 'eax'),
        instruction(a + 0x27, 'mov', 'ecx, esi'),
        instruction(a + 0x29, 'call', '0x10000003'),
        instruction(a + 0x2E, 'mov', f'dword ptr [esi], 0x{VTS[0]:x}'),
        instruction(a + 0x34, 'mov', 'eax, esi'),
        instruction(a + 0x36, 'mov', f'dword ptr [esi + 0x10], 0x{VTS[1]:x}'),
        instruction(a + 0x3D, 'mov', f'dword ptr [esi + 0x8c], 0x{VTS[2]:x}'),
        instruction(a + 0x47, 'mov', f'dword ptr [esi + 0xa8], 0x{VTS[3]:x}'),
        instruction(a + 0x51, 'ret', '8'),
        instruction(a + 0x55, 'xor', 'eax, eax'),
        instruction(a + 0x57, 'ret', '8'),
    ]


class PageFactoryTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 168,
                  'decompiled_c': text}
        targets = {0x10000001: pages.OPERATOR_NEW, 0x10000002: pages.HELPER,
                   0x10000003: pages.CTOR}
        with patch.object(pages, 'function_bytes', return_value=b'\0' * 168), \
             patch.object(pages, 'thunk_target', side_effect=lambda read, va: targets.get(va, va)), \
             patch.object(pages, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = instructions if instructions is not None else factory_instructions()
            return pages.lower(record, None, 0, [])

    def test_factory_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        self.assertEqual(candidate['alloc_size'], 0xe0)
        self.assertEqual(candidate['vtables'], list(VTS))
        self.assertIn('NativePageFactory::FUN_1061ffa0', candidate['source'])
        self.assertIn('return new NativeWizardPage_FUN_1061ffa0(', candidate['source'])
        self.assertIn('helper.thunk_FUN_10eae120(this, param_2, param_3)', candidate['source'])

    def test_wrong_call_order_rejected(self):
        bad = factory_instructions()
        bad[12] = instruction(ENTRY + 0x21, 'call', '0x10000003')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = factory_instructions()
        bad[14] = instruction(ENTRY + 0x29, 'call', '0x10000002')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_guard_and_frame_rejected(self):
        bad = [i for i in factory_instructions() if i.mnemonic != 'test']
        self.assertIsNone(self.candidate(instructions=bad))
        bad = factory_instructions()
        bad[9] = instruction(ENTRY + 0x1A, 'lea', 'ecx, [ebp - 0x20]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in factory_instructions() if i.mnemonic != 'mov' or i.op_str != 'edi, ecx']
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in factory_instructions() if i.mnemonic != 'xor']
        self.assertIsNone(self.candidate(instructions=bad))

    def test_vptr_layout_rejected(self):
        bad = factory_instructions()
        bad[18] = instruction(ENTRY + 0x36, 'mov', f'dword ptr [esi + 0x14], 0x{VTS[1]:x}')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in factory_instructions() if not i.op_str.startswith(f'dword ptr [esi + 0xa8]')]
        self.assertIsNone(self.candidate(instructions=bad))

    def test_signature_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('::vftable;', '::vft;', 1)))
        self.assertIsNone(self.candidate(TEXT.replace('return (undefined4 *)0x0;', 'return 0;')))
        self.assertIsNone(self.candidate(TEXT.replace('operator_new(', 'alloc(')))
        bad = factory_instructions()
        bad[21] = instruction(ENTRY + 0x51, 'ret', '4')
        bad[23] = instruction(ENTRY + 0x57, 'ret', '4')
        self.assertIsNone(self.candidate(instructions=bad))


if __name__ == '__main__':
    unittest.main()

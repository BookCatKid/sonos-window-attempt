import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_wiz_state_callbacks as wiz

ENTRY_A = 0x1061e420
ENTRY_B = 0x1061e8b0
NAME_VA = 0x118bea68
SUFFIX_VA = 0x118be644
VTBL1 = 0x118bea44
VTBL2 = 0x118bea58
GLOBAL_VA = 0x121a2244
TEXT_A = '''
undefined4 * __thiscall FUN_1061e420(undefined4 *param_1,char *param_2,undefined4 param_3)
{
  SCStr::int_allocRep((SCStr *)&param_2,param_2);
  thunk_FUN_106de0c0(&param_2,param_3);
  SCStr::int_release((SCStr *)&param_2);
  param_2 = (char *)0x0;
  *param_1 = SCNewWizStateTypeFor<SCSubmitDiagsWizardDonePage,SCSubmitDiagsWizard>::vftable;
  this = (SCStr *)thunk_FUN_106dfa00(&param_3);
  SCStr::endsWith(this,"Page");
  SCStr::int_release((SCStr *)&param_3);
  return param_1;
}
'''
TEXT_B = '''
undefined4 * __thiscall FUN_1061e8b0(undefined4 *param_1,undefined4 param_2)
{
  SCStr::int_allocRep((SCStr *)&local_14,"SCSubmitDiagsWizardDonePage");
  thunk_FUN_106de0c0(&local_14,param_2);
  SCStr::int_release((SCStr *)&local_14);
  local_14 = 0;
  *param_1 = SCNewWizStateTypeFor<SCSubmitDiagsWizardDonePage,SCSubmitDiagsWizard>::vftable;
  this = (SCStr *)thunk_FUN_106dfa00(&param_2);
  SCStr::endsWith(this,"Page");
  SCStr::int_release((SCStr *)&param_2);
  *param_1 = SCSubmitDiagsWizardDonePageType::vftable;
  DAT_121a2244 = param_1;
  return param_1;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def instructions_a():
    a = ENTRY_A
    return [
        instruction(a, 'mov', 'esi, ecx'),
        instruction(a + 2, 'mov', 'dword ptr [ebp - 0x14], esi'),
        instruction(a + 5, 'mov', 'dword ptr [ebp - 0x10], 0'),
        instruction(a + 0xC, 'lea', 'ecx, [ebp + 8]'),
        instruction(a + 0xF, 'push', 'dword ptr [ebp + 8]'),
        instruction(a + 0x15, 'call', '0x10000001'),
        instruction(a + 0x1A, 'push', 'dword ptr [ebp + 0xc]'),
        instruction(a + 0x1D, 'lea', 'eax, [ebp + 8]'),
        instruction(a + 0x20, 'push', 'eax'),
        instruction(a + 0x21, 'mov', 'ecx, esi'),
        instruction(a + 0x23, 'call', '0x10000002'),
        instruction(a + 0x28, 'lea', 'ecx, [ebp + 8]'),
        instruction(a + 0x2B, 'call', '0x10000003'),
        instruction(a + 0x30, 'lea', 'eax, [ebp + 0xc]'),
        instruction(a + 0x33, 'mov', 'dword ptr [ebp + 8], 0'),
        instruction(a + 0x3A, 'push', 'eax'),
        instruction(a + 0x3B, 'mov', 'ecx, esi'),
        instruction(a + 0x3D, 'mov', f'dword ptr [esi], 0x{VTBL1:x}'),
        instruction(a + 0x43, 'call', '0x10000004'),
        instruction(a + 0x48, 'push', f'0x{SUFFIX_VA:x}'),
        instruction(a + 0x4D, 'mov', 'ecx, eax'),
        instruction(a + 0x4F, 'call', '0x10000005'),
        instruction(a + 0x54, 'lea', 'ecx, [ebp + 0xc]'),
        instruction(a + 0x57, 'call', '0x10000006'),
        instruction(a + 0x5C, 'mov', 'eax, esi'),
        instruction(a + 0x5E, 'ret', '8'),
    ]


def instructions_b():
    a = ENTRY_B
    return [
        instruction(a, 'mov', 'esi, ecx'),
        instruction(a + 2, 'mov', 'dword ptr [ebp - 0x18], esi'),
        instruction(a + 5, 'push', f'0x{NAME_VA:x}'),
        instruction(a + 0xA, 'lea', 'ecx, [ebp - 0x10]'),
        instruction(a + 0x10, 'call', '0x10000001'),
        instruction(a + 0x15, 'push', 'dword ptr [ebp + 8]'),
        instruction(a + 0x18, 'lea', 'eax, [ebp - 0x10]'),
        instruction(a + 0x1B, 'push', 'eax'),
        instruction(a + 0x1C, 'mov', 'ecx, esi'),
        instruction(a + 0x1E, 'call', '0x10000002'),
        instruction(a + 0x23, 'lea', 'ecx, [ebp - 0x10]'),
        instruction(a + 0x26, 'call', '0x10000003'),
        instruction(a + 0x2B, 'lea', 'eax, [ebp + 8]'),
        instruction(a + 0x2E, 'mov', 'dword ptr [ebp - 0x10], 0'),
        instruction(a + 0x35, 'push', 'eax'),
        instruction(a + 0x36, 'mov', 'ecx, esi'),
        instruction(a + 0x38, 'mov', f'dword ptr [esi], 0x{VTBL1:x}'),
        instruction(a + 0x3E, 'call', '0x10000004'),
        instruction(a + 0x43, 'push', f'0x{SUFFIX_VA:x}'),
        instruction(a + 0x48, 'mov', 'ecx, eax'),
        instruction(a + 0x4A, 'call', '0x10000005'),
        instruction(a + 0x4F, 'lea', 'ecx, [ebp + 8]'),
        instruction(a + 0x52, 'call', '0x10000006'),
        instruction(a + 0x57, 'mov', f'dword ptr [esi], 0x{VTBL2:x}'),
        instruction(a + 0x5D, 'mov', 'eax, esi'),
        instruction(a + 0x5F, 'mov', f'dword ptr [0x{GLOBAL_VA:x}], esi'),
        instruction(a + 0x65, 'ret', '4'),
    ]


class WizStateCallbackTests(unittest.TestCase):
    def candidate(self, variant, text, instructions=None):
        entry = ENTRY_A if variant == 'a' else ENTRY_B
        record = {'entry': f'{entry:08x}', 'body_bytes': 194,
                  'decompiled_c': text}
        targets = {0x10000001: wiz.SCSTR_CTOR, 0x10000002: wiz.REGISTER,
                   0x10000003: wiz.SCSTR_DTOR, 0x10000004: wiz.QUERY,
                   0x10000005: wiz.ENDSWITH, 0x10000006: wiz.SCSTR_DTOR}
        data = {NAME_VA: b'SCSubmitDiagsWizardDonePage\0', SUFFIX_VA: b'Page\0'}
        bytes_at = lambda ref, va, size, base, sections: \
            data.get(va, b'\0' * size)
        fixture = instructions_a() if variant == 'a' else instructions_b()
        with patch.object(wiz, 'function_bytes', side_effect=bytes_at), \
             patch.object(wiz, 'thunk_target', side_effect=lambda read, va: targets.get(va, va)), \
             patch.object(wiz, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = instructions if instructions is not None else fixture
            return wiz.lower(record, None, 0, [])

    def test_variant_a_shape_and_source(self):
        candidate = self.candidate('a', TEXT_A)
        self.assertIsNotNone(candidate)
        self.assertEqual(candidate['wiz_class'], 'NativeWizState_FUN_1061e420')
        self.assertIn('(const char *type, NativeWizArg arg)', candidate['source'])
        self.assertIn('RecoveredString_FUN_1008c50b name(type);', candidate['source'])
        self.assertIn('vftable = &DAT_118bea44;', candidate['source'])
        self.assertIn('thunk_FUN_106dfa00(&arg)->endsWith("Page");', candidate['source'])
        self.assertNotIn('DAT_121a2244', candidate['source'])

    def test_variant_b_shape_and_source(self):
        candidate = self.candidate('b', TEXT_B)
        self.assertIsNotNone(candidate)
        self.assertIn('(NativeWizArg arg)', candidate['source'])
        self.assertIn('name("SCSubmitDiagsWizardDonePage")', candidate['source'])
        self.assertIn('vftable = &DAT_118bea44;', candidate['source'])
        self.assertIn('vftable = &DAT_118bea58;', candidate['source'])
        self.assertIn('DAT_121a2244 = (unsigned int)this;', candidate['source'])

    def test_wrong_call_order_rejected(self):
        bad = instructions_b()
        bad[9] = instruction(ENTRY_B + 0x1E, 'call', '0x10000003')
        self.assertIsNone(self.candidate('b', TEXT_B, bad))
        bad = instructions_b()
        bad[20] = instruction(ENTRY_B + 0x4A, 'call', 'dword ptr [edx + 0x28]')
        self.assertIsNone(self.candidate('b', TEXT_B, bad))
        bad = [i for i in instructions_b() if i.op_str != '0x10000006']
        self.assertIsNone(self.candidate('b', TEXT_B, bad))

    def test_variant_a_rejects_variant_b_layout(self):
        bad = instructions_a()
        bad[21] = instruction(ENTRY_A + 0x4F, 'lea', 'ecx, [ebp - 0x10]')
        self.assertIsNone(self.candidate('a', TEXT_A, bad))
        bad = instructions_a() + [instruction(ENTRY_A + 0x61, 'mov', f'dword ptr [0x{GLOBAL_VA:x}], esi')]
        self.assertIsNone(self.candidate('a', TEXT_A, bad))
        self.assertIsNone(self.candidate('a', TEXT_A.replace('char *param_2', 'char *param_9')))

    def test_literal_mismatch_rejected(self):
        self.assertIsNone(self.candidate('b', TEXT_B.replace('"SCSubmitDiagsWizardDonePage"', '"SCOther"')))
        self.assertIsNone(self.candidate('a', TEXT_A.replace('"Page"', '"Subwiz"')))
        bad = instructions_b()
        bad[2] = instruction(ENTRY_B + 5, 'push', '0x118d0000')
        self.assertIsNone(self.candidate('b', TEXT_B, bad))

    def test_signature_rejected(self):
        self.assertIsNone(self.candidate('b', TEXT_B.replace('thunk_FUN_106de0c0(', 'other(')))
        self.assertIsNone(self.candidate('b', TEXT_B.replace('return param_1;', 'return 0;')))
        bad = instructions_b()
        bad[-1] = instruction(ENTRY_B + 0x65, 'ret')
        self.assertIsNone(self.candidate('b', TEXT_B, bad))
        bad = [i for i in instructions_b() if i.op_str != f'dword ptr [0x{GLOBAL_VA:x}], esi']
        self.assertIsNone(self.candidate('b', TEXT_B, bad))


if __name__ == '__main__':
    unittest.main()

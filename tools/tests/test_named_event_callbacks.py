import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_named_event_callbacks as named

ENTRY = 0x10e026f0
SOURCE_CTOR = 0x10df9440
NAME_VA = 0x118d17f8
TEXT = '''
void FUN_10e026f0(undefined4 param_1)
{
  iVar1 = thunk_FUN_10df9440(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  SCStr::int_allocRep((SCStr *)&local_14,"opResult");
  local_8._0_1_ = 1;
  (**(code **)(**(int **)(iVar1 + 8) + 0x28))(&local_14,param_1);
  local_8._0_1_ = 2;
  SCStr::int_release((SCStr *)&local_14);
  local_14 = 0;
  local_8 = (uint)local_8._1_3_ << 8;
  thunk_FUN_10df15a0(iVar1);
  thunk_FUN_10def0d0();
  return;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def named_instructions():
    a = ENTRY
    return [
        instruction(a, 'push', '-1'),
        instruction(a + 2, 'push', '0x11732205'),
        instruction(a + 7, 'mov', 'edi, ecx'),
        instruction(a + 9, 'lea', 'ecx, [ebp - 0x28]'),
        instruction(a + 0xC, 'call', '0x10000001'),
        instruction(a + 0x11, 'mov', 'esi, eax'),
        instruction(a + 0x13, 'push', f'0x{NAME_VA:x}'),
        instruction(a + 0x18, 'lea', 'ecx, [ebp - 0x10]'),
        instruction(a + 0x1B, 'mov', 'dword ptr [ebp - 4], 0'),
        instruction(a + 0x22, 'call', '0x10000002'),
        instruction(a + 0x27, 'mov', 'ecx, dword ptr [esi + 8]'),
        instruction(a + 0x2A, 'lea', 'eax, [ebp - 0x10]'),
        instruction(a + 0x2D, 'push', 'dword ptr [ebp + 8]'),
        instruction(a + 0x30, 'mov', 'byte ptr [ebp - 4], 1'),
        instruction(a + 0x34, 'push', 'eax'),
        instruction(a + 0x35, 'mov', 'edx, dword ptr [ecx]'),
        instruction(a + 0x37, 'call', 'dword ptr [edx + 0x28]'),
        instruction(a + 0x3A, 'lea', 'ecx, [ebp - 0x10]'),
        instruction(a + 0x3D, 'mov', 'byte ptr [ebp - 4], 2'),
        instruction(a + 0x41, 'call', '0x10000003'),
        instruction(a + 0x46, 'push', 'esi'),
        instruction(a + 0x47, 'lea', 'ecx, [edi - 0x10]'),
        instruction(a + 0x4A, 'mov', 'dword ptr [ebp - 0x10], 0'),
        instruction(a + 0x51, 'mov', 'byte ptr [ebp - 4], 0'),
        instruction(a + 0x55, 'call', '0x10000004'),
        instruction(a + 0x5A, 'lea', 'ecx, [ebp - 0x28]'),
        instruction(a + 0x5D, 'call', '0x10000005'),
        instruction(a + 0x62, 'ret', '4'),
    ]


class NamedEventCallbackTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 149,
                  'decompiled_c': text}
        targets = {0x10000001: SOURCE_CTOR, 0x10000002: named.SCSTR_CTOR,
                   0x10000003: named.SCSTR_DTOR, 0x10000004: named.DISPATCH,
                   0x10000005: named.DESTRUCTOR}
        bytes_at = lambda ref, va, size, base, sections: \
            b'\0' * size if va == ENTRY else b'opResult\0'
        with patch.object(named, 'function_bytes', side_effect=bytes_at), \
             patch.object(named, 'thunk_target', side_effect=lambda read, va: targets.get(va, va)), \
             patch.object(named, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = instructions if instructions is not None else named_instructions()
            return named.lower(record, None, 0, [])

    def test_named_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        self.assertEqual(candidate['constructor'], '10df9440')
        self.assertEqual(candidate['event_class'], 'NativeNamedEvent_FUN_10df9440')
        self.assertIn('NativeNamedEvent_FUN_10df9440 event;', candidate['source'])
        self.assertIn('->slot(RecoveredString_FUN_1008c50b("opResult"), arg);', candidate['source'])
        self.assertIn('((char *)this - 0x10)', candidate['source'])
        self.assertIn('thunk_FUN_10df15a0(pe);', candidate['source'])

    def test_wrong_call_sequence_rejected(self):
        bad = named_instructions()
        bad[9] = instruction(ENTRY + 0x22, 'call', '0x10000003')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = named_instructions()
        bad[19] = instruction(ENTRY + 0x41, 'call', '0x10000004')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in named_instructions() if i.op_str != '0x10000005']
        self.assertIsNone(self.candidate(instructions=bad))

    def test_virtual_call_and_frame_rejected(self):
        bad = named_instructions()
        bad[16] = instruction(ENTRY + 0x37, 'call', 'dword ptr [edx + 0x2c]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = named_instructions()
        bad[10] = instruction(ENTRY + 0x27, 'mov', 'ecx, dword ptr [esi + 0xc]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = named_instructions()
        bad[21] = instruction(ENTRY + 0x47, 'lea', 'ecx, [edi - 0x14]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = named_instructions()
        bad[22] = instruction(ENTRY + 0x4A, 'mov', 'dword ptr [ebp - 0x14], 0')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_signature_and_arguments_rejected(self):
        bad = named_instructions()
        bad[-1] = instruction(ENTRY + 0x62, 'ret')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in named_instructions() if i.op_str != 'dword ptr [ebp + 8]']
        self.assertIsNone(self.candidate(instructions=bad))
        self.assertIsNone(self.candidate(TEXT.replace('"opResult"', '"status"')))
        self.assertIsNone(self.candidate(TEXT.replace('SCStr::int_release', 'release')))
        self.assertIsNone(self.candidate(TEXT.replace('thunk_FUN_10def0d0()', 'thunk_FUN_10deee60()')))


if __name__ == '__main__':
    unittest.main()

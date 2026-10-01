import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_event_copier_callbacks as copier

ENTRY = 0x10ccccc0
SOURCE_CTOR = 0x10df9440
EVENT_CTOR = 0x10df9510
TEXT = '''
undefined4 __fastcall FUN_10ccccc0(undefined4 param_1)
{
  uVar1 = thunk_FUN_10df9440(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  thunk_FUN_10deee60(uVar1);
  thunk_FUN_10df9510();
  thunk_FUN_10defac0(param_1,local_60);
  thunk_FUN_10def0d0();
  thunk_FUN_105a0530();
  thunk_FUN_10def0d0();
  return param_1;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def copier_instructions():
    a = ENTRY
    return [
        instruction(a, 'mov', 'esi, ecx'),
        instruction(a + 0x2, 'mov', 'dword ptr [ebp - 0x10], esi'),
        instruction(a + 0x5, 'lea', 'ecx, [ebp - 0x40]'),
        instruction(a + 0x8, 'call', '0x10000001'),
        instruction(a + 0xd, 'push', 'eax'),
        instruction(a + 0xe, 'lea', 'ecx, [ebp - 0x5c]'),
        instruction(a + 0x11, 'mov', 'dword ptr [ebp - 4], 0'),
        instruction(a + 0x18, 'call', '0x10000002'),
        instruction(a + 0x1d, 'lea', 'ecx, [ebp - 0x28]'),
        instruction(a + 0x20, 'mov', 'byte ptr [ebp - 4], 1'),
        instruction(a + 0x24, 'call', '0x10000003'),
        instruction(a + 0x29, 'lea', 'ecx, [ebp - 0x5c]'),
        instruction(a + 0x2c, 'mov', 'byte ptr [ebp - 4], 2'),
        instruction(a + 0x30, 'push', 'ecx'),
        instruction(a + 0x31, 'push', 'esi'),
        instruction(a + 0x32, 'mov', 'ecx, eax'),
        instruction(a + 0x34, 'call', '0x10000004'),
        instruction(a + 0x39, 'lea', 'ecx, [ebp - 0x28]'),
        instruction(a + 0x3c, 'call', '0x10000005'),
        instruction(a + 0x41, 'lea', 'ecx, [ebp - 0x5c]'),
        instruction(a + 0x44, 'call', '0x10000006'),
        instruction(a + 0x49, 'lea', 'ecx, [ebp - 0x40]'),
        instruction(a + 0x4c, 'call', '0x10000007'),
        instruction(a + 0x51, 'mov', 'eax, esi'),
        instruction(a + 0x53, 'ret'),
    ]


class EventCopierCallbackTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 137,
                  'decompiled_c': text}
        targets = {0x10000001: SOURCE_CTOR, 0x10000002: copier.AGGREGATE,
                   0x10000003: EVENT_CTOR, 0x10000004: copier.COPY,
                   0x10000005: copier.EVENT_DTOR, 0x10000006: copier.AGGREGATE_DTOR,
                   0x10000007: copier.EVENT_DTOR}
        with patch.object(copier, 'function_bytes', return_value=b'\0' * 137), \
             patch.object(copier, 'thunk_target', side_effect=lambda read, va: targets.get(va, va)), \
             patch.object(copier, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = instructions if instructions is not None else copier_instructions()
            return copier.lower(record, None, 0, [])

    def test_copier_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        self.assertEqual(candidate['constructor'], '10df9510')
        self.assertEqual(candidate['source_constructor'], '10df9440')
        self.assertEqual(candidate['event_class'], 'NativeCopierEvent_FUN_10df9510')
        self.assertIn('NativeCopierSource_FUN_10df9440 a;', candidate['source'])
        self.assertIn('NativeCopierAggregate_FUN_10deee60 agg(a);', candidate['source'])
        self.assertIn('c.thunk_FUN_10defac0(this, agg);', candidate['source'])
        self.assertIn('return this;', candidate['source'])

    def test_wrong_call_sequence_rejected(self):
        bad = copier_instructions()
        bad[7] = instruction(ENTRY + 0x18, 'call', '0x10000003')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = copier_instructions()
        bad[15] = instruction(ENTRY + 0x39, 'call', '0x10000006')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in copier_instructions() if i.op_str != '0x10000007']
        self.assertIsNone(self.candidate(instructions=bad))

    def test_cleanup_and_receiver_rejected(self):
        bad = copier_instructions()
        bad[-1] = instruction(ENTRY + 0x53, 'ret', '4')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = copier_instructions()
        bad[0] = instruction(ENTRY, 'mov', 'edi, ecx')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = copier_instructions()
        bad[-2] = instruction(ENTRY + 0x51, 'mov', 'eax, ecx')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = copier_instructions()
        bad[1] = instruction(ENTRY + 0x2, 'mov', 'dword ptr [ebp - 0x14], esi')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_frame_layout_rejected(self):
        bad = copier_instructions()
        bad[2] = instruction(ENTRY + 0x5, 'lea', 'ecx, [ebp - 0x44]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in copier_instructions() if i.op_str != 'ecx, [ebp - 0x5c]' or i.address == ENTRY + 0x29]
        self.assertIsNone(self.candidate(instructions=bad))

    def test_signature_and_destructors_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('__fastcall', '__cdecl')))
        self.assertIsNone(self.candidate(TEXT.replace('return param_1', 'return 0')))
        self.assertIsNone(self.candidate(TEXT.replace('thunk_FUN_10def0d0();',
                                                      'thunk_FUN_10def0d0(); thunk_FUN_10def0d0();', 1)))


if __name__ == '__main__':
    unittest.main()

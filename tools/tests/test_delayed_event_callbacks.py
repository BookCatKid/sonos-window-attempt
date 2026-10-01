import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_delayed_event_callbacks as delayed

ENTRY = 0x10ccccc0
CTOR = 0x10dfbb10
TIMER_TEXT = '''
void FUN_10ccccc0(void)
{
  uVar2 = thunk_FUN_10dfbb10(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = thunk_FUN_10def450(uVar2);
  thunk_FUN_10def0d0();
  if (cVar1 != '\\0') {
    thunk_FUN_10ebb8e0("delay",2000);
  }
}
'''
STORE_TEXT = TIMER_TEXT.replace('thunk_FUN_10ebb8e0("delay",2000);',
                                'iVar3 = thunk_FUN_10eb41b0();\n    *(undefined4 *)(iVar3 + 0x108) = 0;')
DAT_TEXT = TIMER_TEXT.replace('thunk_FUN_10ebb8e0("delay",2000);',
                              'thunk_FUN_10ebb8e0(&DAT_11907e20,500);')
SIMPLE_TEXT = TIMER_TEXT.replace('thunk_FUN_10ebb8e0("delay",2000);',
                                 'thunk_FUN_10ebbab0(8);')


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def timer_instructions(name_va='0x118c11e0', delay='0x7d0'):
    a = ENTRY
    return [
        instruction(a, 'mov', 'esi, ecx'),
        instruction(a + 4, 'lea', 'ecx, [ebp - 0x24]'),
        instruction(a + 8, 'call', '0x10000001'),
        instruction(a + 0x10, 'mov', 'ecx, dword ptr [ebp + 8]'),
        instruction(a + 0x14, 'push', 'eax'),
        instruction(a + 0x18, 'call', '0x10000002'),
        instruction(a + 0x20, 'lea', 'ecx, [ebp - 0x24]'),
        instruction(a + 0x24, 'call', '0x10000003'),
        instruction(a + 0x30, 'test', 'bl, bl'),
        instruction(a + 0x32, 'je', '0x10ccd000'),
        instruction(a + 0x34, 'push', delay),
        instruction(a + 0x39, 'push', name_va),
        instruction(a + 0x3e, 'mov', 'ecx, esi'),
        instruction(a + 0x40, 'call', '0x10000004'),
        instruction(a + 0x45, 'ret', '4'),
    ]


def store_instructions():
    a = ENTRY
    return [
        instruction(a, 'mov', 'esi, ecx'),
        instruction(a + 4, 'lea', 'ecx, [ebp - 0x24]'),
        instruction(a + 8, 'call', '0x10000001'),
        instruction(a + 0x10, 'mov', 'ecx, dword ptr [ebp + 8]'),
        instruction(a + 0x14, 'push', 'eax'),
        instruction(a + 0x18, 'call', '0x10000002'),
        instruction(a + 0x20, 'lea', 'ecx, [ebp - 0x24]'),
        instruction(a + 0x24, 'call', '0x10000003'),
        instruction(a + 0x30, 'test', 'bl, bl'),
        instruction(a + 0x32, 'je', '0x10ccd000'),
        instruction(a + 0x34, 'mov', 'ecx, esi'),
        instruction(a + 0x36, 'call', '0x10000005'),
        instruction(a + 0x3b, 'mov', 'dword ptr [eax + 0x108], 0'),
        instruction(a + 0x45, 'ret', '4'),
    ]


def simple_instructions(value='8'):
    a = ENTRY
    return [
        instruction(a, 'mov', 'esi, ecx'),
        instruction(a + 4, 'lea', 'ecx, [ebp - 0x24]'),
        instruction(a + 8, 'call', '0x10000001'),
        instruction(a + 0x10, 'mov', 'ecx, dword ptr [ebp + 8]'),
        instruction(a + 0x14, 'push', 'eax'),
        instruction(a + 0x18, 'call', '0x10000002'),
        instruction(a + 0x20, 'lea', 'ecx, [ebp - 0x24]'),
        instruction(a + 0x24, 'call', '0x10000003'),
        instruction(a + 0x30, 'test', 'bl, bl'),
        instruction(a + 0x32, 'je', '0x10ccd000'),
        instruction(a + 0x34, 'push', value),
        instruction(a + 0x36, 'mov', 'ecx, esi'),
        instruction(a + 0x38, 'call', '0x10000006'),
        instruction(a + 0x3d, 'ret', '4'),
    ]


class DelayedEventCallbackTests(unittest.TestCase):
    def candidate(self, text=TIMER_TEXT, instructions=None, native=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 122,
                  'decompiled_c': text}
        targets = {0x10000001: 0x10dfbb10,
                   0x10000002: delayed.DISPATCH, 0x10000003: delayed.DESTRUCTOR,
                   0x10000004: delayed.TIMER, 0x10000005: delayed.RESULT_STORE,
                   0x10000006: 0x10ebbab0}
        def read(va, size):
            if va == 0x118c11e0:
                return b'delay\0'[:size]
            if va in (0x10000001, 0x10000002, 0x10000003, 0x10000004, 0x10000005):
                return b'X' * size
            return b'\0' * size
        with patch.object(delayed, 'function_bytes', side_effect=lambda ref, va, size, b, s: read(va, size) if va == 0x118c11e0 else b'\0' * size), \
             patch.object(delayed, 'thunk_target', side_effect=lambda read, va: targets.get(va, va)), \
             patch.object(delayed, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = instructions if instructions is not None else timer_instructions()
            return delayed.lower(record, None, 0, [])

    def test_timer_callback_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        self.assertEqual(candidate['constructor'], '10dfbb10')
        self.assertIn('NativeDelayedDispatcher *dispatcher', candidate['source'])
        self.assertIn('thunk_FUN_10def450(NativeDelayedEvent_FUN_10dfbb10())', candidate['source'])
        self.assertIn('thunk_FUN_10ebb8e0("delay",2000);', candidate['source'])

    def test_result_store_variant(self):
        candidate = self.candidate(STORE_TEXT, store_instructions())
        self.assertIn('thunk_FUN_10eb41b0()->value = 0;', candidate['source'])

    def test_global_name_argument(self):
        candidate = self.candidate(DAT_TEXT, timer_instructions('0x11907e20', '0x1f4'))
        self.assertIn('thunk_FUN_10ebb8e0((const char *)&DAT_11907e20,500);', candidate['source'])

    def test_wrong_call_sequence_or_cleanup_rejected(self):
        bad = timer_instructions()
        bad[5] = instruction(ENTRY + 0x18, 'call', '0x10000009')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = timer_instructions()
        bad[-1] = instruction(ENTRY + 0x45, 'ret', '0')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_missing_receiver_or_argument_home_rejected(self):
        bad = timer_instructions()
        bad[3] = instruction(ENTRY + 0x10, 'mov', 'ecx, dword ptr [ebp + 4]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = timer_instructions()
        bad[0] = instruction(ENTRY, 'mov', 'edi, ecx')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_single_argument_action(self):
        candidate = self.candidate(SIMPLE_TEXT, simple_instructions())
        self.assertIn('thunk_FUN_10ebbab0(8);', candidate['source'])
        bad = self.candidate(SIMPLE_TEXT.replace('(8)', '(9)'), simple_instructions())
        self.assertIsNone(bad)
        bad = self.candidate(SIMPLE_TEXT, simple_instructions('0x20'))
        self.assertIsNone(bad)

    def test_missing_branch_guard_or_store_rejected(self):
        bad = [i for i in store_instructions() if i.op_str != 'dword ptr [eax + 0x108], 0']
        self.assertIsNone(self.candidate(STORE_TEXT, bad))
        bad = [i for i in timer_instructions() if i.mnemonic != 'test']
        self.assertIsNone(self.candidate(instructions=bad))


if __name__ == '__main__':
    unittest.main()

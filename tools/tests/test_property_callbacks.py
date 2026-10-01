import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from compile_property_callbacks import lower


SOURCE = '''
SCStr::int_allocRep((SCStr *)&local_14,"eventName");
thunk_FUN_10dee620((undefined1 *)&event,(undefined1 *)&local_14,0x27,(undefined1 *)0x0,tree);
SCStr::int_allocRep((SCStr *)&key,"deviceid");
(*(event.properties)->vtable->setString)(event.properties,(undefined1 *)&key,param_2);
SCStr::int_allocRep((SCStr *)&param_2,"state");
(*(event.properties)->vtable->setInteger)(event.properties,(undefined1 *)&param_2,param_3);
thunk_FUN_10df15a0((undefined1 *)(param_1 + -0x10),&event);
'''


class PropertyCallbackTests(unittest.TestCase):
    def candidate(self, source=SOURCE, slots=(0x1c, 0x28), cleanup=8):
        instructions = [SimpleNamespace(mnemonic='call', op_str=f'dword ptr [eax + {hex(slot)}]') for slot in slots]
        instructions.append(SimpleNamespace(mnemonic='ret', op_str=hex(cleanup)))
        record = {'entry': '10e02910', 'body_bytes': 302, 'decompiled_c': source}
        with patch('compile_property_callbacks.function_bytes', return_value=b''), \
             patch('compile_property_callbacks.DISASSEMBLER') as decoder:
            decoder.disasm.return_value = instructions
            return lower(record, b'', 0, [])

    def test_incoming_values_survive_reused_decompiler_argument_homes(self):
        candidate = self.candidate()
        self.assertEqual(candidate['parameters'], 'SCStr *value0, unsigned int value1')
        self.assertIn('setString((SCStr *)&key,value0)', candidate['source'])
        self.assertIn('setInteger((SCStr *)&key,value1)', candidate['source'])

    def test_native_slot_and_stack_cleanup_disagreements_reject_candidate(self):
        self.assertIsNone(self.candidate(slots=(0x28, 0x1c)))
        self.assertIsNone(self.candidate(cleanup=4))
        self.assertIsNone(self.candidate(slots=(0x1c, 0x28, 0x40)))

    def test_missing_and_aliased_forwarded_arguments_reject_candidate(self):
        self.assertIsNone(self.candidate(SOURCE.replace(',param_3);', ',param_2);')))
        self.assertIsNone(self.candidate(SOURCE.replace(',param_3);', ',0);')))
        self.assertIsNone(self.candidate(SOURCE.replace('->setInteger)', '->unknownSetter)')))


if __name__ == '__main__':
    unittest.main()

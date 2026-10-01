import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_query_interface_callbacks as query

ENTRY = 0x1061dcf0
NAME1_VA = 0x1186f62c
NAME2_VA = 0x1186d30c
TEXT = '''
undefined4 * __thiscall FUN_1061dcf0(int *param_1,undefined4 *param_2,SCStr *param_3)
{
  bool bVar1;
  bVar1 = SCStr::operator==(param_3,"SCIUrlSessionCallback");
  if (bVar1) {
    *param_2 = param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = SCStr::operator==(param_3,"SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    *param_2 = param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def query_instructions():
    a = ENTRY
    return [
        instruction(a, 'mov', 'edi, dword ptr [esp + 0x10]'),
        instruction(a + 4, 'mov', 'esi, ecx'),
        instruction(a + 6, 'push', f'0x{NAME1_VA:x}'),
        instruction(a + 0xB, 'mov', 'ecx, edi'),
        instruction(a + 0xD, 'call', '0x10000001'),
        instruction(a + 0x12, 'test', 'al, al'),
        instruction(a + 0x14, 'je', '0x1061dd20'),
        instruction(a + 0x16, 'mov', 'edi, dword ptr [esp + 0xc]'),
        instruction(a + 0x1A, 'mov', 'dword ptr [edi], esi'),
        instruction(a + 0x1C, 'test', 'esi, esi'),
        instruction(a + 0x1E, 'je', '0x1061dd41'),
        instruction(a + 0x20, 'mov', 'eax, dword ptr [esi]'),
        instruction(a + 0x22, 'mov', 'ecx, esi'),
        instruction(a + 0x24, 'call', 'dword ptr [eax + 4]'),
        instruction(a + 0x27, 'mov', 'eax, edi'),
        instruction(a + 0x29, 'ret', '8'),
        instruction(a + 0x30, 'push', f'0x{NAME2_VA:x}'),
        instruction(a + 0x35, 'mov', 'ecx, edi'),
        instruction(a + 0x37, 'call', '0x10000002'),
        instruction(a + 0x3C, 'test', 'al, al'),
        instruction(a + 0x3E, 'je', '0x1061dd48'),
        instruction(a + 0x40, 'mov', 'edi, dword ptr [esp + 0xc]'),
        instruction(a + 0x44, 'mov', 'dword ptr [edi], esi'),
        instruction(a + 0x46, 'test', 'esi, esi'),
        instruction(a + 0x48, 'je', '0x1061dd41'),
        instruction(a + 0x4A, 'mov', 'edx, dword ptr [esi]'),
        instruction(a + 0x4C, 'mov', 'ecx, esi'),
        instruction(a + 0x4E, 'call', 'dword ptr [edx + 4]'),
        instruction(a + 0x51, 'mov', 'eax, edi'),
        instruction(a + 0x53, 'ret', '8'),
        instruction(a + 0x58, 'mov', 'eax, dword ptr [esp + 0xc]'),
        instruction(a + 0x5C, 'mov', 'dword ptr [eax], 0'),
        instruction(a + 0x62, 'ret', '8'),
    ]


class QueryInterfaceCallbackTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 103,
                  'decompiled_c': text}
        targets = {0x10000001: query.NAME_EQUAL, 0x10000002: query.NAME_EQUAL}
        data = {NAME1_VA: b'SCIUrlSessionCallback\0', NAME2_VA: b'SCIObj\0'}
        bytes_at = lambda ref, va, size, base, sections: data.get(va, b'\0' * size)
        with patch.object(query, 'function_bytes', side_effect=bytes_at), \
             patch.object(query, 'thunk_target', side_effect=lambda read, va: targets.get(va, va)), \
             patch.object(query, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = instructions if instructions is not None else query_instructions()
            return query.lower(record, None, 0, [])

    def test_query_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        self.assertIn('NativeQueryInterfaceHost::FUN_1061dcf0', candidate['source'])
        self.assertEqual(candidate['source'].count('thunk_FUN_101a2dc0('), 2)
        self.assertIn('"SCIUrlSessionCallback"', candidate['source'])
        self.assertIn('"SCIObj"', candidate['source'])
        self.assertEqual(candidate['source'].count('AddRef();'), 2)
        self.assertIn('*out = 0;', candidate['source'])

    def test_wrong_calls_rejected(self):
        bad = query_instructions()
        bad[17] = instruction(ENTRY + 0x37, 'call', '0x10000003')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in query_instructions() if i.op_str != '0x10000002']
        self.assertIsNone(self.candidate(instructions=bad))

    def test_branch_and_receiver_rejected(self):
        bad = [i for i in query_instructions() if i.mnemonic != 'je' or i.address != ENTRY + 0x48]
        self.assertIsNone(self.candidate(instructions=bad))
        bad = query_instructions()
        bad[13] = instruction(ENTRY + 0x24, 'call', 'dword ptr [eax + 8]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = query_instructions()
        bad[0] = instruction(ENTRY, 'mov', 'edi, dword ptr [esp + 0x14]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in query_instructions() if i.op_str != 'mov' or i.op_str != 'dword ptr [eax], 0']
        bad = [i for i in query_instructions() if not (i.mnemonic == 'mov' and i.op_str == 'dword ptr [eax], 0')]
        self.assertIsNone(self.candidate(instructions=bad))

    def test_literal_and_text_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('"SCIUrlSessionCallback"', '"Other"')))
        self.assertIsNone(self.candidate(TEXT.replace('SCStr::operator==', 'compare', 1)))
        self.assertIsNone(self.candidate(TEXT.replace('*param_2 = 0;', '*param_2 = 1;')))
        self.assertIsNone(self.candidate(TEXT.replace('return param_2;', 'return 0;', 1)))
        bad = query_instructions()
        bad[-1] = instruction(ENTRY + 0x62, 'ret', '4')
        self.assertIsNone(self.candidate(instructions=bad))


if __name__ == '__main__':
    unittest.main()

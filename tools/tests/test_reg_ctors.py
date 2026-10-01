import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_reg_ctors as reg

ENTRY = 0x10df5400
TEXT = '''
undefined4 __fastcall FUN_10df5400(undefined4 param_1)
{
  local_8 = 0xffffffff;
  local_14 = param_1;
  SCStr::int_allocRep((SCStr *)&local_14,"accountChanged");
  local_8 = 0;
  pvVar1 = operator_new(0x1c);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  thunk_FUN_10dee620(&local_14,0x4b,0);
  local_8 = 1;
  SCStr::int_release((SCStr *)&local_14);
  return param_1;
}
'''

NAME_VA = 0x11937488
DISPATCH_THUNK = 0x1000d715


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def ctor_instructions():
    a = ENTRY
    return [
        instruction(a + 0x00, 'push', 'ebp'),
        instruction(a + 0x01, 'mov', 'ebp, esp'),
        instruction(a + 0x03, 'push', '-1'),
        instruction(a + 0x05, 'push', '0x1172e53d'),
        instruction(a + 0x0A, 'mov', 'eax, dword ptr fs:[0]'),
        instruction(a + 0x10, 'push', 'eax'),
        instruction(a + 0x11, 'sub', 'esp, 8'),
        instruction(a + 0x14, 'push', 'esi'),
        instruction(a + 0x15, 'push', 'edi'),
        instruction(a + 0x16, 'mov', 'eax, dword ptr [0x12126b84]'),
        instruction(a + 0x1B, 'xor', 'eax, ebp'),
        instruction(a + 0x1D, 'push', 'eax'),
        instruction(a + 0x1E, 'lea', 'eax, [ebp - 0xc]'),
        instruction(a + 0x21, 'mov', 'dword ptr fs:[0], eax'),
        instruction(a + 0x27, 'mov', 'edi, ecx'),
        instruction(a + 0x29, 'mov', 'dword ptr [ebp - 0x10], edi'),
        instruction(a + 0x2C, 'push', '0x11937488'),
        instruction(a + 0x31, 'lea', 'ecx, [ebp - 0x10]'),
        instruction(a + 0x34, 'call', '0x1005273e'),
        instruction(a + 0x39, 'sub', 'esp, 8'),
        instruction(a + 0x3C, 'mov', 'dword ptr [ebp - 4], 0'),
        instruction(a + 0x43, 'mov', 'esi, esp'),
        instruction(a + 0x45, 'mov', 'dword ptr [ebp - 0x14], esi'),
        instruction(a + 0x48, 'push', '0x1c'),
        instruction(a + 0x4A, 'mov', 'dword ptr [esi], 0'),
        instruction(a + 0x50, 'mov', 'dword ptr [esi + 4], 0'),
        instruction(a + 0x57, 'call', '0x10024f14'),
        instruction(a + 0x5C, 'add', 'esp, 4'),
        instruction(a + 0x5F, 'mov', 'ecx, edi'),
        instruction(a + 0x61, 'mov', 'dword ptr [eax], eax'),
        instruction(a + 0x63, 'mov', 'dword ptr [eax + 4], eax'),
        instruction(a + 0x66, 'mov', 'dword ptr [eax + 8], eax'),
        instruction(a + 0x69, 'mov', 'word ptr [eax + 0xc], 0x101'),
        instruction(a + 0x6F, 'push', '0'),
        instruction(a + 0x71, 'mov', 'dword ptr [esi], eax'),
        instruction(a + 0x73, 'lea', 'eax, [ebp - 0x10]'),
        instruction(a + 0x76, 'push', '0x4b'),
        instruction(a + 0x78, 'push', 'eax'),
        instruction(a + 0x79, 'call', '0x1000d715'),
        instruction(a + 0x7E, 'lea', 'ecx, [ebp - 0x10]'),
        instruction(a + 0x81, 'mov', 'dword ptr [ebp - 4], 1'),
        instruction(a + 0x88, 'call', '0x1005c315'),
        instruction(a + 0x8D, 'mov', 'eax, edi'),
        instruction(a + 0x8F, 'mov', 'ecx, dword ptr [ebp - 0xc]'),
        instruction(a + 0x92, 'mov', 'dword ptr fs:[0], ecx'),
        instruction(a + 0x99, 'pop', 'ecx'),
        instruction(a + 0x9A, 'pop', 'edi'),
        instruction(a + 0x9B, 'pop', 'esi'),
        instruction(a + 0x9C, 'mov', 'esp, ebp'),
        instruction(a + 0x9E, 'pop', 'ebp'),
        instruction(a + 0x9F, 'ret'),
    ]


THUNKS = {0x1005273e: reg.ALLOC_REP, 0x10024f14: reg.OPERATOR_NEW,
          0x1000d715: reg.DISPATCH, 0x1005c315: reg.RELEASE}


class RegCtorTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 160,
                  'decompiled_c': text}
        def read(va, size):
            if va == NAME_VA:
                return b'accountChanged\0' + b'\0' * (size - 14)
            return b'\0' * size
        with patch.object(reg, 'function_bytes', side_effect=lambda ref, va, n, b, s: b'\0' * 160), \
             patch.object(reg, 'thunk_target', side_effect=lambda r, va: THUNKS.get(va, va)), \
             patch.object(reg, 'read_cstring', return_value=b'accountChanged'), \
             patch.object(reg, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = (instructions if instructions is not None
                                           else ctor_instructions())
            return reg.lower(record, None, 0, [])

    def test_ctor_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        source = candidate['source']
        self.assertIn('NativeRegCtor_FUN_10df5400::NativeRegCtor_FUN_10df5400()', source)
        self.assertIn('*(volatile unsigned int *)&text = (unsigned int)this', source)
        self.assertIn('(char *)&DAT_11937488', source)
        self.assertIn('thunk_FUN_10dee620((SCStr *)&text, 75, 0, FactoryTree());', source)

    def test_wrong_calls_rejected(self):
        bad = ctor_instructions()
        bad[39] = instruction(ENTRY + 0x79, 'call', '0x1005c315')
        # thunk map returns same for the release thunk; wrong-order rejection
        # relies on exact call tuple — swap dispatch with an unknown target.
        with patch.object(reg, 'function_bytes', return_value=b'\0' * 160), \
             patch.object(reg, 'thunk_target', side_effect=lambda r, va: THUNKS.get(va, va)), \
             patch.object(reg, 'read_cstring', return_value=b'accountChanged'), \
             patch.object(reg, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = bad
            record = {'entry': f'{ENTRY:08x}', 'body_bytes': 160, 'decompiled_c': TEXT}
            self.assertIsNone(reg.lower(record, None, 0, []))

    def test_layout_rejected(self):
        bad = ctor_instructions()
        bad[-1] = instruction(ENTRY + 0x9F, 'ret', '4')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = ctor_instructions()
        bad[32] = instruction(ENTRY + 0x69, 'mov', 'word ptr [eax + 0xc], 0x100')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = ctor_instructions()
        bad[19] = instruction(ENTRY + 0x39, 'sub', 'esp, 4')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = ctor_instructions()
        bad[37] = instruction(ENTRY + 0x76, 'push', '0x5000')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = ctor_instructions()
        bad[15] = instruction(ENTRY + 0x29, 'mov', 'dword ptr [ebp - 0x18], edi')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_text_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('thunk_FUN_10dee620', 'thunk_FUN_10deea50')))
        self.assertIsNone(self.candidate(TEXT.replace('int_allocRep', 'int_release')))


if __name__ == '__main__':
    unittest.main()

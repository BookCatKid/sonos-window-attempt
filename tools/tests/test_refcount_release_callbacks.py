import sys
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import compile_refcount_release_callbacks as refcount

ENTRY = 0x10687970
TEXT = '''
int __fastcall FUN_10687970(int *param_1)
{
  thunk_FUN_101b9190(param_1);
  local_8 = 0;
  iVar2 = SCThreadSafeDec(param_1 + 1);
  if (iVar2 == 0) {
    thunk_FUN_101b9240(uVar1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x10))(1);
    }
  }
  thunk_FUN_101b91d0();
  return iVar2;
}
'''


def instruction(address, mnemonic, op_str=''):
    return SimpleNamespace(address=address, mnemonic=mnemonic, op_str=op_str)


def release_instructions():
    a = ENTRY
    return [
        instruction(a, 'push', 'esi'),
        instruction(a + 1, 'mov', 'esi, ecx'),
        instruction(a + 3, 'push', 'esi'),
        instruction(a + 4, 'lea', 'ecx, [ebp - 0x14]'),
        instruction(a + 7, 'call', '0x10000001'),
        instruction(a + 0xC, 'lea', 'eax, [esi + 4]'),
        instruction(a + 0xF, 'push', 'eax'),
        instruction(a + 0x10, 'call', '0x10000002'),
        instruction(a + 0x15, 'mov', 'edi, eax'),
        instruction(a + 0x17, 'test', 'edi, edi'),
        instruction(a + 0x19, 'jne', '0x106879d0'),
        instruction(a + 0x1B, 'lea', 'ecx, [ebp - 0x14]'),
        instruction(a + 0x1E, 'call', '0x10000003'),
        instruction(a + 0x23, 'test', 'esi, esi'),
        instruction(a + 0x25, 'je', '0x106879d0'),
        instruction(a + 0x27, 'mov', 'edx, dword ptr [esi]'),
        instruction(a + 0x29, 'mov', 'ecx, esi'),
        instruction(a + 0x2B, 'push', '1'),
        instruction(a + 0x2C, 'call', 'dword ptr [edx + 0x10]'),
        instruction(a + 0x30, 'lea', 'ecx, [ebp - 0x14]'),
        instruction(a + 0x33, 'call', '0x10000004'),
        instruction(a + 0x38, 'mov', 'eax, edi'),
        instruction(a + 0x3A, 'ret'),
    ]


class RefcountReleaseCallbackTests(unittest.TestCase):
    def candidate(self, text=TEXT, instructions=None):
        record = {'entry': f'{ENTRY:08x}', 'body_bytes': 123,
                  'decompiled_c': text}
        targets = {0x10000001: refcount.GUARD_CTOR, 0x10000002: refcount.DECREMENT,
                   0x10000003: refcount.UNLOCK, 0x10000004: refcount.GUARD_DTOR}
        with patch.object(refcount, 'function_bytes', return_value=b'\0' * 123), \
             patch.object(refcount, 'thunk_target', side_effect=lambda read, va: targets.get(va, va)), \
             patch.object(refcount, 'DISASSEMBLER') as decoder:
            decoder.disasm.return_value = instructions if instructions is not None else release_instructions()
            return refcount.lower(record, None, 0, [])

    def test_release_shape_and_source(self):
        candidate = self.candidate()
        self.assertIsNotNone(candidate)
        self.assertIn('NativeRefCountedHost::FUN_10687970()', candidate['source'])
        self.assertIn('NativeGuard_thunk_FUN_101b91d0 guard((int *)this);', candidate['source'])
        self.assertIn('SCThreadSafeDec(&this->refcount);', candidate['source'])
        self.assertIn('guard.thunk_FUN_101b9240();', candidate['source'])
        self.assertIn('slot4(1);', candidate['source'])
        self.assertIn('return r;', candidate['source'])

    def test_wrong_call_order_rejected(self):
        bad = release_instructions()
        bad[7] = instruction(ENTRY + 0x10, 'call', '0x10000003')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = release_instructions()
        bad[19] = instruction(ENTRY + 0x33, 'call', '0x10000001')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in release_instructions() if i.op_str != '0x10000003']
        self.assertIsNone(self.candidate(instructions=bad))

    def test_vcall_and_frame_rejected(self):
        bad = release_instructions()
        bad[18] = instruction(ENTRY + 0x2C, 'call', 'dword ptr [edx + 0x14]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = release_instructions()
        bad[5] = instruction(ENTRY + 0xC, 'lea', 'eax, [esi + 8]')
        self.assertIsNone(self.candidate(instructions=bad))
        bad = [i for i in release_instructions()
               if not (i.mnemonic == 'lea' and i.op_str == 'ecx, [ebp - 0x14]' and i.address == ENTRY + 0x30)]
        self.assertIsNone(self.candidate(instructions=bad))
        bad = release_instructions()
        bad[-1] = instruction(ENTRY + 0x3A, 'ret', '4')
        self.assertIsNone(self.candidate(instructions=bad))

    def test_text_rejected(self):
        self.assertIsNone(self.candidate(TEXT.replace('thunk_FUN_101b91d0()', 'cleanup()')))
        self.assertIsNone(self.candidate(TEXT.replace('(1);', '(2);')))
        self.assertIsNone(self.candidate(TEXT.replace('return iVar2;', 'return 0;')))
        self.assertIsNone(self.candidate(TEXT.replace('param_1 != (int *)0x0', 'param_1 == (int *)0x0')))


if __name__ == '__main__':
    unittest.main()

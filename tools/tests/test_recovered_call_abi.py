import sys
import unittest
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from recovered_call_abi import CallABI


class IncomingReceiverTests(unittest.TestCase):
    def abi(self, enabled):
        abi=CallABI.__new__(CallABI)
        abi.recover_implicit_register=enabled
        abi.resolve=lambda name: {'result':'int','cc':'__thiscall','parameters':['int','int'],'entry':'10123457'}
        return abi

    def test_member_uses_preserved_receiver_for_missing_call_argument(self):
        source='int Recovered_10123456::FUN_10123456(int value) { int ghidra_this = (int)this; return FUN_10123457(value); }'
        changed,_,count=self.abi(True).lower(source)
        self.assertEqual(count,1)
        self.assertIn('((CallABI_FUN_10123457 *)(ghidra_this))->FUN_10123457((int)(value))',changed)
        self.assertEqual(self.abi(False).lower(source),(source,{},0))

    def test_explicit_receiver_is_preserved(self):
        source='int __thiscall FUN_10123456(int receiver,int value) { return FUN_10123457(other,value); }'
        changed,_,count=self.abi(True).lower(source)
        self.assertEqual(count,1)
        self.assertIn(' *)(other))->FUN_10123457',changed)


if __name__=='__main__':unittest.main()

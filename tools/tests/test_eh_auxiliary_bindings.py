import json
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from classify_functions import DLL, function_bytes, section_map
from verify_eh_placement import bound_helper_body


class NativeAuxiliaryIdentityTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        if not DLL.is_file():
            raise unittest.SkipTest('Immutable native reference is unavailable')
        cls.reference = DLL.read_bytes()
        cls.base, cls.sections = section_map(cls.reference)
        cls.binding = {'owner_entry': '10e00c90', 'state': 2,
                       'call_target': '10059287', 'body_entry': '10dff3e0'}
        cls.inventory = {'10e00c90': {'reference_metadata': '11fb89e0'}}

    def read(self, va, size):
        return function_bytes(self.reference, va, size, self.base, self.sections)

    def test_native_unwind_slot_and_linker_jump_establish_body(self):
        self.assertEqual(bound_helper_body(self.binding, 0x10059287, self.inventory, self.read), 0x10dff3e0)

    def test_same_size_wrong_helper_is_rejected(self):
        binding = {**self.binding, 'body_entry': '10dff3d0'}
        self.assertIsNone(bound_helper_body(binding, 0x10059287, self.inventory, self.read))

    def test_wrong_unwind_slot_cannot_bind_destructor(self):
        binding = {**self.binding, 'state': 0}
        self.assertIsNone(bound_helper_body(binding, 0x10059287, self.inventory, self.read))

    def test_wrong_call_operand_is_rejected(self):
        self.assertIsNone(bound_helper_body(self.binding, 0x1003be35, self.inventory, self.read))

    def test_missing_owner_or_out_of_range_state_is_rejected(self):
        for change in [{'owner_entry': 'unproven'}, {'state': -1}, {'state': 7}]:
            with self.subTest(change=change):
                self.assertIsNone(bound_helper_body({**self.binding, **change}, 0x10059287, self.inventory, self.read))

    def test_tampered_linker_jump_is_rejected(self):
        def read(va, size):
            data = self.read(va, size)
            return bytes([data[0] ^ 1]) + data[1:] if va == 0x10059287 else data
        self.assertIsNone(bound_helper_body(self.binding, 0x10059287, self.inventory, read))


if __name__ == '__main__':
    unittest.main()

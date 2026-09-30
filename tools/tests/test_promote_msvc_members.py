"""Check real x86 receiver/stack ABI preservation, without the reference DLL."""
import subprocess
import os
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from compile_ghidra_cpp import COMPILER, ROOT
from compare_compiled_ghidra import read_coff
from promote_msvc_members import promote


class MemberPromotionTests(unittest.TestCase):
    def test_machine_abi_survives_member_promotion(self):
        # Clang accepts Ghidra's original free thiscall. Compare its actual
        # instructions with the C++ member form to detect lost ECX receivers,
        # changed stack argument positions, or changed callee stack popping.
        for receiver, body in [
            ("int param_1", "return param_1 + param_2 + param_3;"),
            ("int *param_1", "*param_1 = param_2; return param_1[param_3];"),
        ]:
            with self.subTest(receiver=receiver), tempfile.TemporaryDirectory(dir=ROOT / "analysis") as scratch:
                source = ('// Reference entry 10123456; body size 20 bytes.\n'
                          'namespace recovered_10123456 {\n#line 1 "ENTRY_10123456"\n'
                          f'int __thiscall FUN_10123456({receiver}, int param_2, int param_3) noexcept {{ {body} }}\n}}\n')
                changed, count = promote(source)
                self.assertEqual(count, 1)
                codes = []
                for name, text in [("original", source), ("member", changed)]:
                    path = Path(scratch) / (name + ".cpp")
                    obj = path.with_suffix(".obj")
                    path.write_text(text)
                    result = subprocess.run([str(COMPILER), "/nologo", "/O2", "/c", "/clang:--target=i686-pc-windows-msvc", f"/Fo{obj}", os.path.relpath(path, ROOT)], cwd=ROOT, capture_output=True, text=True)
                    self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
                    sections, symbols, _ = read_coff(obj)
                    symbol = next(x for x in symbols if "FUN_10123456" in x["name"] and x["section"] > 0)
                    codes.append(sections[symbol["section"] - 1]["code"][symbol["offset"]:])
                self.assertEqual(codes[0], codes[1])
                self.assertIn(b"\xc2\x08\x00", codes[1])

    def test_unrecognized_thiscall_fails_closed(self):
        with self.assertRaises(ValueError):
            promote('// Reference entry 10123456; body size 20 bytes.\nvoid __thiscall OddName(int receiver) {}\n')

    def test_cdecl_definition_is_preserved(self):
        source = '// Reference entry 10123456; body size 20 bytes.\nint __cdecl FUN_10123456(int param_1) { return param_1; }\n'
        self.assertEqual(promote(source), (source, 0))


if __name__ == "__main__":
    unittest.main()

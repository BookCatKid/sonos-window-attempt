import json
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from recover_container_abi import isolated_path, project_hashes, validate_exports


class ContainerABIIsolationTests(unittest.TestCase):
    def test_project_hashes_detect_database_change(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            database = root / 'WindowAttempt.rep/database'
            database.parent.mkdir()
            database.write_bytes(b'original')
            before = project_hashes(root)
            database.write_bytes(b'changed')
            self.assertNotEqual(before, project_hashes(root))
            self.assertEqual(set(before), {'WindowAttempt.rep/database'})

    def test_symlink_cannot_redirect_edits_to_original(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            original = root / 'analysis/thunk-recovery-full/ghidra'
            original.mkdir(parents=True)
            clone = root / 'analysis/container-call-abi/ghidra'
            clone.parent.mkdir(parents=True)
            clone.symlink_to(original, target_is_directory=True)
            with self.assertRaisesRegex(ValueError, 'symlink'):
                isolated_path(root)

    def test_silent_script_failure_cannot_reuse_stale_exports(self):
        with tempfile.TemporaryDirectory() as directory:
            output = Path(directory)
            (output / 'console.txt').write_text('REPORT SCRIPT ERROR\nSave succeeded\n')
            with self.assertRaisesRegex(ValueError, 'complete'):
                validate_exports(output, {'10dee620'})

    def test_incomplete_export_is_rejected(self):
        with tempfile.TemporaryDirectory() as directory:
            output = Path(directory)
            (output / 'console.txt').write_text('Save succeeded')
            (output / 'applied-abi.json').write_text(json.dumps({'ret_cleanup_bytes': 20}))
            for name in ['before', 'after']:
                (output / (name + '.jsonl')).write_text(json.dumps({'entry': '10dee620'}) + '\n')
            with self.assertRaisesRegex(ValueError, 'Incomplete'):
                validate_exports(output, {'10dee620', '10e00c90'})


if __name__ == '__main__':
    unittest.main()

import csv
import os
import struct
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from compile_recovered_data import source_for
from compile_ghidra_cpp import ROOT,COMPILER
from link_recovery_image import PlacementImage,place_data
from compare_compiled_ghidra import read_coff
from classify_functions import section_map
from test_link_recovery_image import layout


class RecoveredDataTests(unittest.TestCase):
    def test_packed_data_uses_real_pointer_fixups_without_executable_payload(self):
        data=struct.pack('<III',0x10001000,11,0x10003000)
        with tempfile.TemporaryDirectory(dir=ROOT/'analysis') as scratch:
            directory=Path(scratch);source=directory/'data.cpp';obj=source.with_suffix('.obj')
            source.write_text(source_for([(0x10002000,data,[0,8],True)]))
            result=subprocess.run([str(COMPILER),'/nologo','/O2','/c','/clang:--target=i686-pc-windows-msvc',
                f'/Fo{obj}',os.path.relpath(source,ROOT)],cwd=ROOT,capture_output=True,text=True)
            self.assertEqual(result.returncode,0,result.stdout+result.stderr)
            sections,_,_=read_coff(obj)
            self.assertFalse(any(s['characteristics']&0x20000000 and s['code'] for s in sections))
            self.assertTrue(any(s['name']=='.data$R' and s['characteristics']&0x80000000 for s in sections))
            index=directory/'data-index.tsv'
            with index.open('w',newline='') as file:
                writer=csv.writer(file,delimiter='\t');writer.writerow(['entry','symbol','reference_bytes','pointer_fields'])
                writer.writerow(['10002000','recovered_data_10002000',12,2])
            reference=PlacementImage(layout()).image
            reference[1536:1548]=data;base,pe_sections=section_map(reference)
            candidate=PlacementImage(layout())
            proof=place_data(directory,obj,candidate,reference,base,pe_sections,{})
            self.assertEqual(proof['accepted_data_bytes'],12)
            self.assertEqual(candidate.image[1536:1548],data)
            self.assertEqual(candidate.sites,{0x2000,0x2008})
            index.write_text(index.read_text().replace('\t2\n','\t1\n'))
            with self.assertRaises(ValueError):place_data(directory,obj,PlacementImage(layout()),reference,base,pe_sections,{})

    def test_overlapping_pointer_fields_cannot_be_generated(self):
        with self.assertRaises(ValueError):source_for([(0x10002000,bytes(12),[0,2])])


if __name__=='__main__':unittest.main()

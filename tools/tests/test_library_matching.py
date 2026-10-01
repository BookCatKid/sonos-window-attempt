"""Negative gates for library correspondence; synthetic bytes are test data only."""
import csv
import struct
import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from match_library_objects import fixed_runs, match, imported_targets


class LibraryMatchingTests(unittest.TestCase):
    def fixture(self, broken_dependency=False, unknown=False):
        image=bytearray(1024);image[:2]=b'MZ';struct.pack_into('<I',image,0x3c,0x80)
        image[0x80:0x84]=b'PE\0\0';struct.pack_into('<HH',image,0x84,0x14c,1)
        struct.pack_into('<H',image,0x94,224);struct.pack_into('<I',image,0x98+28,0x10000000)
        h=0x98+224;image[h:h+8]=b'.text\0\0\0'
        struct.pack_into('<III',image,h+12,0x1000,512,512)
        struct.pack_into('<I',image,h+36,0x60000020)
        a=b'AAAABBBBccccdddd';b=b'1111222233334444'
        # The verifier only needs byte extents here; no executable test is generated.
        native_a=a[:4]+struct.pack('<i',0x10001040-(0x10001000+4+4))+a[8:]
        image[512:528]=native_a;image[576:592]=b if not broken_dependency else b'xxxx'+b[4:]
        obj=Path(self.tmp.name)/'example.obj';obj.write_bytes(b'test object provenance')
        inventory=Path(self.tmp.name)/'inventory.tsv'
        with inventory.open('w',newline='') as stream:
            w=csv.writer(stream,delimiter='\t');w.writerow(['entry','body_bytes','thunk','external'])
            w.writerows([['10001000',16,'false','false'],['10001040',16,'false','false']])
        rows=[{'object':str(obj),'symbol':'_a','public':True,'code':a[:4]+b'\0'*4+a[8:],
               'relocs':[{'offset':4,'type':20,'symbol':'_missing' if unknown else '_b'}], 'sections':[], 'symbols':[]},
              {'object':str(obj),'symbol':'_b','public':True,'code':b,'relocs':[], 'sections':[], 'symbols':[]}]
        with patch('match_library_objects.bodies',return_value=rows):return match([obj],bytes(image),inventory)

    def setUp(self):self.tmp=tempfile.TemporaryDirectory()
    def tearDown(self):self.tmp.cleanup()

    def test_closed_graph_accepts_entire_relocation(self):
        result=self.fixture();self.assertEqual(result['closed_graph_exact_functions'],2)
        self.assertEqual(result['coverage_added'],0)

    def test_unknown_symbol_cannot_be_bound_from_reference_slot(self):
        result=self.fixture(unknown=True);self.assertEqual(result['closed_graph_exact_functions'],1)
        self.assertFalse(next(r for r in result['functions'] if r['symbol']=='_a')['closed_graph_exact'])

    def test_changed_dependency_rejects_dependent_function(self):
        result=self.fixture(broken_dependency=True);self.assertEqual(result['unique_fixed_candidates'],1)
        self.assertEqual(result['closed_graph_exact_functions'],0)

    def test_unsupported_and_straddling_relocations_rejected(self):
        for kind,offset in [(99,4),(6,14),(20,-1)]:
            self.assertEqual(fixed_runs(b'x'*16,[{'type':kind,'offset':offset}]),[])

    def test_import_targets_require_named_iat_and_actual_jump_chain(self):
        image=bytearray(1024);struct.pack_into('<I',image,0x3c,0x80)
        struct.pack_into('<H',image,0x84+2,1);struct.pack_into('<H',image,0x84+16,224)
        struct.pack_into('<I',image,0x98+28,0x10000000)
        struct.pack_into('<III',image,0x98+224+12,0x1000,512,512)
        struct.pack_into('<II',image,0x98+96+8,0x1100,40)
        struct.pack_into('<IIIII',image,768,0x1140,0,0,0x1180,0x1150)
        struct.pack_into('<I',image,832,0x1160);struct.pack_into('<I',image,848,0x1160)
        image[864:873]=b'\0\0malloc\0'
        image[512:518]=b'\xff\x25'+struct.pack('<I',0x10001150)
        image[576:581]=b'\xe9'+struct.pack('<i',0x10001000-(0x10001040+5))
        image[640:646]=b'\xff\x25'+struct.pack('<I',0x10009999)
        inventory=Path(self.tmp.name)/'import-inventory.tsv'
        inventory.write_text('entry\tbody_bytes\n10001000\t6\n10001040\t5\n10001080\t6\n')
        result=imported_targets(bytes(image),inventory)
        self.assertEqual(set(result['_malloc']),{0x10001000,0x10001040})
        self.assertEqual(result['__imp__malloc'],[0x10001150])


if __name__=='__main__':unittest.main()

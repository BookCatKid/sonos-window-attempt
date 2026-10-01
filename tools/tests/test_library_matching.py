"""Negative gates for library correspondence; synthetic bytes are test data only."""
import csv
import struct
import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch
sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from match_library_objects import fixed_runs, match, imported_targets, immutable_data_definitions, security_cookie_targets
from types import SimpleNamespace


class LibraryMatchingTests(unittest.TestCase):
    def fixture(self, broken_dependency=False, unknown=False, forwarding=False, bad_forward=False):
        image=bytearray(1024);image[:2]=b'MZ';struct.pack_into('<I',image,0x3c,0x80)
        image[0x80:0x84]=b'PE\0\0';struct.pack_into('<HH',image,0x84,0x14c,1)
        struct.pack_into('<H',image,0x94,224);struct.pack_into('<I',image,0x98+28,0x10000000)
        h=0x98+224;image[h:h+8]=b'.text\0\0\0'
        struct.pack_into('<III',image,h+12,0x1000,512,512)
        struct.pack_into('<I',image,h+36,0x60000020)
        a=b'AAAABBBBccccdddd';b=b'1111222233334444'
        # The verifier only needs byte extents here; no executable test is generated.
        native_a=a[:4]+struct.pack('<i',0x10001040-(0x10001000+4+4))+a[8:]
        if forwarding:
            native_a=a[:4]+struct.pack('<i',0x10001080-(0x10001000+4+4))+a[8:]
            target=0x10009999 if bad_forward else 0x10001040
            image[640:645]=b'\xe9'+struct.pack('<i',target-(0x10001080+5))
        image[512:528]=native_a;image[576:592]=b if not broken_dependency else b'xxxx'+b[4:]
        obj=Path(self.tmp.name)/'example.obj';obj.write_bytes(b'test object provenance')
        inventory=Path(self.tmp.name)/'inventory.tsv'
        with inventory.open('w',newline='') as stream:
            w=csv.writer(stream,delimiter='\t');w.writerow(['entry','body_bytes','thunk','external'])
            w.writerows([['10001000',16,'false','false'],['10001040',16,'false','false']])
            if forwarding:w.writerow(['10001080',5,'true','false'])
        rows=[{'object':str(obj),'symbol':'_a','public':True,'code':a[:4]+b'\0'*4+a[8:],
               'relocs':[{'offset':4,'type':20,'symbol':'_missing' if unknown else '_forward' if forwarding else '_b'}], 'sections':[], 'symbols':[]},
              {'object':str(obj),'symbol':'_b','public':True,'code':b,'relocs':[], 'sections':[], 'symbols':[]}]
        if forwarding:rows.append({'object':str(obj),'symbol':'_forward','public':True,'code':b'\xe9'+b'\0'*4,
                                   'relocs':[{'offset':1,'type':20,'symbol':'_b'}],'sections':[],'symbols':[]})
        with patch('match_library_objects.bodies',return_value=rows),patch('match_library_objects.read_coff',return_value=([],[],{})):
            return match([obj],bytes(image),inventory)

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

    def test_forwarding_alias_requires_entire_jump_to_verified_callee(self):
        result=self.fixture(forwarding=True)
        self.assertEqual(result['closed_graph_exact_functions'],2)
        self.assertEqual(result['closed_graph_body_bytes'],32)
        self.assertTrue(result['compiled_forwarding_identity_evidence'])
        for kwargs in [{'bad_forward':True},{'broken_dependency':True}]:
            rejected=self.fixture(forwarding=True,**kwargs)
            self.assertFalse(next(r for r in rejected['functions'] if r['symbol']=='_a')['closed_graph_exact'])
            self.assertFalse(rejected['compiled_forwarding_identity_evidence'])

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

    def test_immutable_data_requires_entire_extent_and_no_fixups(self):
        symbols=[{'name':'_table','offset':0,'section':1,'storage':2,'type':0},
                 {'name':'_next','offset':8,'section':1,'storage':2,'type':0}]
        section={'characteristics':0x40000040,'code':b'constantTAIL','relocations':[]}
        definitions=immutable_data_definitions([section],symbols)
        self.assertEqual(definitions[0]['data'],b'constant')
        for flags,relocs in [(0x80000040,[]),(0x60000040,[]),(0x40000040,[{'offset':4}])]:
            altered=dict(section,characteristics=flags,relocations=relocs)
            self.assertNotIn('_table',[x['symbol'] for x in immutable_data_definitions([altered],symbols)])

    def test_cookie_identity_rejects_wrong_compare_and_unknown_failure(self):
        inventory=Path(self.tmp.name)/'cookie.tsv'
        inventory.write_text('entry\tbody_bytes\n10001000\t17\n10002000\t20\n')
        cookie=0x12345678
        raw=b'ab'+struct.pack('<I',cookie)+b'x'*26
        compare=SimpleNamespace(address=0x10001000,mnemonic='cmp',op_str=f'ecx, dword ptr [0x{cookie:x}]')
        branch=SimpleNamespace(address=0x10001006,mnemonic='jne',op_str='0x10002000')
        ret=SimpleNamespace(address=0x10001008,mnemonic='ret',op_str='')
        with patch('match_library_objects.section_map',return_value=(0x10000000,[])),\
             patch('match_library_objects.security_cookie_va',return_value=cookie),\
             patch('match_library_objects.function_bytes',return_value=raw),\
             patch('match_library_objects.DISASSEMBLER') as decoder:
            decoder.disasm.return_value=[compare,branch,ret]
            targets,_=security_cookie_targets(b'',inventory)
            self.assertIn(0x10001000,targets['@__security_check_cookie@4'])
            branch.op_str='0x10009999'
            self.assertNotIn('@__security_check_cookie@4',security_cookie_targets(b'',inventory)[0])
            branch.op_str='0x10002000';compare.op_str='eax, dword ptr [0x12345678]'
            self.assertNotIn('@__security_check_cookie@4',security_cookie_targets(b'',inventory)[0])

    def test_cross_object_table_binding_checks_all_native_bytes_and_permissions(self):
        for mutation,source_writable,native_writable in [(False,False,False),(True,False,False),(False,True,False),(False,False,True)]:
            image=bytearray(1536);struct.pack_into('<I',image,0x3c,0x80)
            struct.pack_into('<H',image,0x84+2,2);struct.pack_into('<H',image,0x84+16,224)
            struct.pack_into('<I',image,0x98+28,0x10000000)
            h=0x98+224;struct.pack_into('<III',image,h+12,0x1000,512,512)
            struct.pack_into('<I',image,h+36,0x60000020)
            struct.pack_into('<III',image,h+40+12,0x2000,512,1024)
            struct.pack_into('<I',image,h+40+36,0x80000040 if native_writable else 0x40000040)
            code=b'AAAA'+b'\0'*4+b'ccccdddd'
            image[512:528]=code[:4]+struct.pack('<I',0x10002000)+code[8:]
            image[1024:1032]=b'constanX' if mutation else b'constant'
            caller=Path(self.tmp.name)/'caller.obj';table=Path(self.tmp.name)/'table.obj'
            for p in (caller,table):p.write_bytes(b'test provenance')
            inventory=Path(self.tmp.name)/'table-inventory.tsv'
            inventory.write_text('entry\tbody_bytes\tthunk\texternal\n10001000\t16\tfalse\tfalse\n')
            body={'object':str(caller),'symbol':'_caller','public':True,'code':code,
                  'relocs':[{'offset':4,'type':6,'symbol':'_table'}],'sections':[],'symbols':[]}
            section={'code':b'constant','relocations':[],'characteristics':0x80000040 if source_writable else 0x40000040}
            symbol={'name':'_table','offset':0,'section':1,'storage':2,'type':0}
            with patch('match_library_objects.bodies',side_effect=lambda p:[body] if p==caller else []),\
                 patch('match_library_objects.read_coff',side_effect=lambda p:([section],[symbol],{}) if p==table else ([],[],{})):
                result=match([caller,table],bytes(image),inventory)
            self.assertEqual(result['closed_graph_exact_functions'],int(not (mutation or source_writable or native_writable)))


if __name__=='__main__':unittest.main()

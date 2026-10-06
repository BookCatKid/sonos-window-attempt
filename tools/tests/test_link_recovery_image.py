import struct
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from link_recovery_image import PlacementImage,fixups_for,fill_linker_padding,identical_count
from compare import sections as read_pe_sections


def layout():
    result={'pe_offset':128,'image_base':0x10000000,'file_alignment':512,'section_alignment':4096,
        'size_of_image':0x5000,'size_of_headers':1024,'timestamp':1,'subsystem':2,'file_size':3072,'sections':[]}
    for i,name in enumerate(['.text','.rdata','.data','.reloc']):
        result['sections'].append({'name':name,'virtual_size':512,'raw_size':512,
            'rva':4096*(i+1),'raw_offset':512*(i+2),'characteristics':0x60000020 if i==0 else 0x40000040})
    return result


class PlacementTests(unittest.TestCase):
    def test_compiler_fragment_is_placed_and_unbuilt_bytes_stay_empty(self):
        image=PlacementImage(layout());source=b'compiler-produced-fragment'
        image.place(0x10001010,source,'function',{'object':'fixture.obj'})
        self.assertEqual(read_pe_sections(image.image)['.text'][16:16+len(source)],source)
        self.assertEqual(image.covered.count(1),len(source))
        self.assertEqual(image.image[1536:2048],bytes(512))
        self.assertEqual(struct.unpack_from('<I',image.image,128+24+16)[0],0)

    def test_conflicting_overlaps_and_out_of_bounds_fail(self):
        image=PlacementImage(layout());image.place(0x10001000,b'ABC','function',{})
        image.place(0x10001001,b'BCDE','function',{})
        with self.assertRaises(ValueError):image.place(0x10001001,b'WRONG','function',{})
        with self.assertRaises(ValueError):image.place(0x100011ff,b'AB','function',{})

    def test_duplicate_bytes_retain_new_base_relocation_evidence(self):
        image=PlacementImage(layout());source=struct.pack('<I',0x10002000)
        image.place(0x10001000,source,'function',{})
        fixup={'offset':0,'type':6,'symbol':'data','target_va':'10002000','addend':0}
        image.place(0x10001000,source,'function',{},[fixup])
        self.assertEqual(len(image.fragments),1)
        self.assertEqual(image.fragments[0]['fixups'],[fixup])
        self.assertEqual(image.finish_relocations(),12)
        page,size,entry,padding=struct.unpack_from('<IIHH',image.image,2560)
        self.assertEqual((page,size,entry,padding),(0x1000,12,0x3000,0))

    def test_dir32_rel32_and_rva_fixups_decode_the_same_target(self):
        va=0x10001000;base=0x10000000;target=0x10002000;addend=4
        for typ,value in [(6,target+addend),(7,target-base+addend),(20,target+addend-va-4)]:
            result=fixups_for(va,struct.pack('<I',addend),struct.pack('<I',value),
                [{'offset':0,'type':typ,'symbol':'callee'}],base)
            self.assertEqual(result[0]['target_va'],'10002000')

    def test_padding_fill_skips_inventoried_function_extents(self):
        lay=layout();image=PlacementImage(lay)
        # .text lives at rva 0x1000/raw 0x400; inventory a function at va
        # 0x10001000 covering 8 bytes so its interior pads are never claimed.
        ref=bytearray(image.image);ref[0x400:0x420]=b'\xcc'*32
        with tempfile.NamedTemporaryFile('w',suffix='.tsv',delete=False) as file:
            file.write('entry\tbody_bytes\n10001000\t8\n');name=file.name
        fill_linker_padding(image,bytes(ref),name)
        self.assertEqual(image.image[0x400:0x408],bytes(8))      # inside function
        self.assertEqual(image.covered[0x400:0x408],bytes(8))
        self.assertEqual(image.image[0x408:0x420],b'\xcc'*24)   # outside: filled
        self.assertEqual(image.derived[0x408],1)
        self.assertGreater(image.derived.count(1),24)

    def test_padding_fill_never_claims_nonpad_bytes_or_covered_positions(self):
        lay=layout();image=PlacementImage(lay)
        ref=bytearray(image.image);ref[0x400:0x410]=b'\xcc'*8+b'\x55'*4+b'\x00'*4
        image.place(0x10001010,b'XY','function',{})  # raw 0x410
        with tempfile.NamedTemporaryFile('w',suffix='.tsv',delete=False) as file:
            file.write('entry\tbody_bytes\n');name=file.name
        fill_linker_padding(image,bytes(ref),name)
        self.assertEqual(image.image[0x408:0x40c],bytes(4))     # 0x55 not pad
        self.assertEqual(image.covered[0x408:0x40c],bytes(4))
        self.assertEqual(image.image[0x410:0x412],b'XY')        # placed stays

    def test_identical_count_and_derived_accounting(self):
        a=b'\x01\x02\x03'*10;b=bytes(a);self.assertEqual(identical_count(a,b),30)
        b=b'\x01\x02\x04'+a[3:];self.assertEqual(identical_count(a,b),29)
        lay=layout();image=PlacementImage(lay)
        image.place(0x10001000,b'AB','function',{})  # covers raw 0x400-0x401
        image.derived[0x400]=1  # one byte of that coverage is derived, not compiler
        row=next(r for r in image.coverage() if r['section']=='.text')
        self.assertEqual(row['derived_linker_bytes'],1)
        self.assertEqual(row['proven_compiler_bytes'],1)


if __name__=='__main__':unittest.main()

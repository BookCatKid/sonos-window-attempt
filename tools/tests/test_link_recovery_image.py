import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from link_recovery_image import PlacementImage,fixups_for
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


if __name__=='__main__':unittest.main()

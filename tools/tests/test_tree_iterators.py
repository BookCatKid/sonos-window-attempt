import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[1]))
from compile_tree_iterators import NODE,BODY,BODY_ASCENDING_FIRST,BODY_CACHED_NODE,BODY_SHARED_NODE
from compile_ghidra_cpp import ROOT


class TreeIteratorTests(unittest.TestCase):
    def test_postfix_traversal_preserves_return_value_and_updates_receiver(self):
        self.check_traversal(BODY)

    def test_native_branch_order_preserves_traversal(self):
        self.check_traversal(BODY_ASCENDING_FIRST)

    def test_cached_node_preserves_traversal(self):
        self.check_traversal(BODY_CACHED_NODE)

    def test_shared_node_preserves_traversal(self):
        self.check_traversal(BODY_SHARED_NODE)

    def check_traversal(self,body):
        source=NODE+'''struct Recovered_test {
RecoveredIteratorNode *node;
Recovered_test FUN_test(int unused);
};
Recovered_test Recovered_test::FUN_test(int unused) '''+body.replace('ENTRY','test')+'''
int main() {
RecoveredIteratorNode nil{}; nil.nil=1; nil.left=&nil; nil.right=&nil; nil.parent=&nil;
RecoveredIteratorNode low{},root{},middle{},high{};
low.left=&nil; low.right=&nil; low.parent=&root;
root.left=&low; root.right=&high; root.parent=&nil;
high.left=&middle; high.right=&nil; high.parent=&root;
middle.left=&nil; middle.right=&nil; middle.parent=&high;
Recovered_test iterator{&low};
if (iterator.FUN_test(0).node!=&low || iterator.node!=&root) return 1;
if (iterator.FUN_test(0).node!=&root || iterator.node!=&middle) return 2;
if (iterator.FUN_test(0).node!=&middle || iterator.node!=&high) return 3;
if (iterator.FUN_test(0).node!=&high || iterator.node!=&nil) return 4;
return 0;
}
'''
        (ROOT/'analysis').mkdir(exist_ok=True)
        with tempfile.TemporaryDirectory(dir=ROOT/'analysis') as directory:
            path=Path(directory)/'iterator.cpp';binary=path.with_suffix('');path.write_text(source)
            compilation=subprocess.run(['/opt/homebrew/opt/llvm/bin/clang++','-std=c++17','-O2',str(path),'-o',str(binary)],capture_output=True,text=True)
            self.assertEqual(compilation.returncode,0,compilation.stderr)
            result=subprocess.run([str(binary)],capture_output=True,text=True)
            self.assertEqual(result.returncode,0)


if __name__=='__main__':unittest.main()

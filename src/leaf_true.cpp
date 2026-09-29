// Representative of native leaf methods whose entire body returns true.
struct BooleanLeaf {
    __declspec(noinline) unsigned char IsTrue() const;
};

unsigned char BooleanLeaf::IsTrue() const {
    return 1;
}

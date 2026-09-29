// Representative of native leaf methods whose entire body returns false.
struct BooleanLeaf {
    __declspec(noinline) unsigned char IsFalse() const;
};

unsigned char BooleanLeaf::IsFalse() const {
    return 0;
}

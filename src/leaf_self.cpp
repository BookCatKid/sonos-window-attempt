// Representative of native leaf methods whose entire body returns this.
struct IdentityLeaf {
    __declspec(noinline) IdentityLeaf *Self();
};

IdentityLeaf *IdentityLeaf::Self() {
    return this;
}

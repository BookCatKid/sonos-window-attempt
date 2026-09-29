// Single-reference replacement. Representative: 0x1012b910.
struct ReleasableOne {
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Release();
};

struct SingleRefReplace {
    ReleasableOne* target;
    __declspec(noinline) void Replace(ReleasableOne* value);
};

void SingleRefReplace::Replace(ReleasableOne* value) {
    ReleasableOne* old = target;
    if (old != nullptr) {
        old->Release();
    }
    target = value;
}

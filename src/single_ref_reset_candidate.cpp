// Single-reference assignment with release. Representative: 0x101175c0.
struct Releasable {
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Release();
};

struct SingleRefSlot {
    Releasable* target;
    __declspec(noinline) void Reset(Releasable* value);
};

void SingleRefSlot::Reset(Releasable* value) {
    Releasable* old = target;
    if (old != nullptr) {
        target = nullptr;
        old->Release();
    }
    target = value;
}

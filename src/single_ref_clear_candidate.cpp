// Single-reference wrapper cleanup. Representative: 0x101b4d40.
struct ClearableSingleRef {
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Release();
};

struct SingleRefClear {
    ClearableSingleRef* target;
};

extern "C" __declspec(noinline) void __fastcall
ClearSingleRef(SingleRefClear* value) {
    ClearableSingleRef* old = value->target;
    value->target = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
    }
}

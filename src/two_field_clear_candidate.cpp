// Two-field wrapper cleanup. Representative: 0x101bb140.
struct ClearableRef {
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Release();
};

struct TwoFieldClear {
    void* target;
    ClearableRef* counter;
};

extern "C" __declspec(noinline) void __fastcall
ClearTwoFields(TwoFieldClear* value) {
    ClearableRef* old = value->counter;
    value->target = nullptr;
    value->counter = nullptr;
    if (old != nullptr) {
        old->Release();
        value->target = nullptr;
        value->counter = nullptr;
    }
}

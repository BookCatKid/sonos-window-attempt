// Candidate for the common 61-byte two-field reference wrapper assignment.
// Reference example: sclib-csharp.dll VA 0x101b2980.
struct RefCounter {
    virtual void Reserved();
    virtual void AddRef();
    virtual void Release();
};

struct RefTarget {
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Reserved2();
    virtual RefCounter* Counter();
};

struct RefWrapper {
    RefTarget* target;
    RefCounter* counter;

    __declspec(noinline) void Assign(RefTarget* value);
};

void RefWrapper::Assign(RefTarget* value) {
    RefCounter* old = counter;
    if (old != nullptr) {
        target = nullptr;
        counter = nullptr;
        old->Release();
    }
    target = value;
    if (value != nullptr) {
        counter = value->Counter();
    } else {
        counter = nullptr;
    }
}

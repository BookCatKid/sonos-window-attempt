// Candidate for the common 41-byte two-field reference wrapper constructor.
// Reference example: sclib-csharp.dll VA 0x101a8d90.
struct RefCounter {
    virtual void Reserved();
    virtual void AddRef();
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

    __declspec(noinline) RefWrapper* Init(RefTarget* value);
};

RefWrapper* RefWrapper::Init(RefTarget* value) {
    target = value;
    counter = nullptr;
    if (value != nullptr) {
        counter = value->Counter();
        counter->AddRef();
    }
    return this;
}

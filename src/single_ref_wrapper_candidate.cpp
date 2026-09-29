// Single-reference wrapper constructor. Representative: 0x10118470.
struct RefCountedOne {
    virtual void Reserved();
    virtual void AddRef();
};

struct SingleRefWrapper {
    RefCountedOne* target;
    __declspec(noinline) SingleRefWrapper* Init(RefCountedOne* value);
};

SingleRefWrapper* SingleRefWrapper::Init(RefCountedOne* value) {
    target = value;
    if (value != nullptr) {
        value->AddRef();
    }
    return this;
}

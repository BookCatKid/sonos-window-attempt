// Resource cleanup that returns its owner. Representative: 0x101d4050.
struct DisposedResource {
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Reserved2();
    virtual void Reserved3();
    virtual void Dispose(bool owned);
};

struct ResourceOwnerReturned {
    char precedingFields[36];
    DisposedResource* resource;

    __declspec(noinline) ResourceOwnerReturned* Cleanup(void* unused);
};

ResourceOwnerReturned* ResourceOwnerReturned::Cleanup(void* unused) {
    DisposedResource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<DisposedResource*>(this));
        resource = nullptr;
    }
    return this;
}

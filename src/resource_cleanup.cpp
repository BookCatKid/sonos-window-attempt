// Candidate for the common 33-byte owned-resource cleanup body.
// Reference example: sclib-csharp.dll VA 0x101d2970.
struct Resource {
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Reserved2();
    virtual void Reserved3();
    virtual void Dispose(bool owned);
};

struct ResourceOwner {
    char precedingFields[36];
    Resource* resource;

    __declspec(noinline) void Cleanup();
};

void ResourceOwner::Cleanup() {
    Resource* current = resource;
    if (current != nullptr) {
        current->Dispose(current != reinterpret_cast<Resource*>(this));
        resource = nullptr;
    }
}

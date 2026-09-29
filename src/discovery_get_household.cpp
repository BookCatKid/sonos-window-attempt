// High-level reconstruction of SCLibrary::getHousehold at VA 0x102f7150.
// This candidate models the move from SCRetPtr<SCHousehold> to
// SCRetPtr<SCIHousehold>; it intentionally leaves the lower getter external.

struct SCIHousehold;
struct SCHousehold;

struct RefCounted {
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Release();
};

struct SCIHousehold : RefCounted {};
struct SCHousehold : SCIHousehold {};

template <class T>
struct SCRetPtr {
    // Keep the moved-from temporary and its guarded cleanup visible to MSVC.
    // This does not establish the original member's source-level qualifier.
    T *volatile value;

    SCRetPtr();
    SCRetPtr(const SCRetPtr &other);

    template <class U>
    SCRetPtr(SCRetPtr<U> &&other) {
        T *moved = other.value;
        other.value = nullptr;
        value = moved;
    }

    ~SCRetPtr() {
        T *current = value;
        if (current)
            current->Release();
    }
};

struct SCLibrary {
    __declspec(noinline) SCRetPtr<SCHousehold> getSCHousehold();
    __declspec(noinline) SCRetPtr<SCIHousehold> getHousehold();
};

SCRetPtr<SCIHousehold> SCLibrary::getHousehold() {
    return getSCHousehold();
}

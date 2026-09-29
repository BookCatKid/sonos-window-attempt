// High-level reconstruction of SCLibrary::getHousehold at VA 0x102f7150.
// This candidate models the move from SCRetPtr<SCHousehold> to
// SCRetPtr<SCIHousehold>; it intentionally leaves the lower getter external.

struct SCIHousehold;
struct SCHousehold;

struct RefCounted {
    virtual void Reserved();
    virtual void Release();
};

struct SCIHousehold : RefCounted {};
struct SCHousehold : SCIHousehold {};

template <class T>
struct SCRetPtr {
    // `volatile` forces this clang-cl experiment to keep the moved-from
    // temporary and its guarded cleanup visible. It is a code-generation aid,
    // not evidence that the original SCRetPtr member was declared volatile.
    T *volatile value;

    SCRetPtr();
    SCRetPtr(const SCRetPtr &other);

    template <class U>
    SCRetPtr(SCRetPtr<U> &&other) : value(other.value) {
        other.value = nullptr;
    }

    ~SCRetPtr() {
        if (value)
            value->Release();
    }
};

struct SCLibrary {
    __declspec(noinline) SCRetPtr<SCHousehold> getSCHousehold();
    __declspec(noinline) SCRetPtr<SCIHousehold> getHousehold();
};

SCRetPtr<SCIHousehold> SCLibrary::getHousehold() {
    return getSCHousehold();
}

// Readable reconstruction candidate for the native discovery object method at
// VA 0x11096620. Thunk names preserve the address-level evidence; their exact
// higher-level responsibilities are not established by this body alone.

using Word = unsigned int;

struct RetainedDiscoveryResult {
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Release();
};

extern "C" void __fastcall prepare_discovery_object(void *self); // 0x1006156d
extern "C" RetainedDiscoveryResult *__cdecl acquire_discovery_result(); // 0x1000daa3
extern "C" void *__cdecl refresh_discovery_context(); // 0x1004ec47
extern "C" void __fastcall advance_discovery_context(void *self); // 0x10075f45

struct DiscoverySubobject {
    __declspec(noinline) void finish(); // 0x1003ceb6
};

struct DiscoveryObject {
    unsigned char reserved[0x1c4];
    Word marker_1c4;
    unsigned char reserved_to_subobject[0x498];
    DiscoverySubobject subobject_660;

    __declspec(noinline) void start();
};

void DiscoveryObject::start() {
    marker_1c4 = 1;
    prepare_discovery_object(this);

    RetainedDiscoveryResult *result = acquire_discovery_result();
    result->Release();

    prepare_discovery_object(this);
    void *context = refresh_discovery_context();
    advance_discovery_context(context);
    subobject_660.finish();
}

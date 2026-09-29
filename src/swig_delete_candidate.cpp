// C# wrapper deletion path. Representative: SCIAbilityDelegate at 0x1019c350.
struct SwigObject {
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Destroy();
};

extern "C" __declspec(noinline) void __stdcall
CSharp_delete_SCIAbilityDelegate(SwigObject* value) {
    if (value != nullptr) {
        value->Destroy();
    }
}

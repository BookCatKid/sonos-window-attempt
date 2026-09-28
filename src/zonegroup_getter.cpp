// C++ candidate for the native ZoneGroupState field getter.
// Reference implementation: VA 0x10383540 in sclib-csharp.dll.
// The operation wrapper stores its RUpnpZGTGetZoneGroupStateAIOOp* at +0x18.
// That object stores the ZoneGroupState output string at +0xd7d0.

extern "C" __declspec(noinline) unsigned char * __thiscall
GetZoneGroupStateField(void *operation) {
    unsigned char *aio = *reinterpret_cast<unsigned char * volatile *>(
        static_cast<unsigned char *>(operation) + 0x18);
    return aio + 0xd7d0;
}

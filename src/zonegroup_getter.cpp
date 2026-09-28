// C++ candidate for the native ZoneGroupState field getter.
// Reference implementation: VA 0x10383540 in sclib-csharp.dll.
// The operation wrapper stores its RUpnpZGTGetZoneGroupStateAIOOp* at +0x18.
// That object stores the ZoneGroupState output string at +0xd7d0.

struct ZoneGroupOperation {
    __declspec(noinline) unsigned char *GetZoneGroupStateField();
};

unsigned char *ZoneGroupOperation::GetZoneGroupStateField() {
    unsigned char *aio = *reinterpret_cast<unsigned char * volatile *>(
        reinterpret_cast<unsigned char *>(this) + 0x18);
    return aio + 0xd7d0;
}

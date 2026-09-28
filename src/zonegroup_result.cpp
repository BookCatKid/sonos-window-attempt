// Native SCOpZoneGroupTopologyGetZoneGroupState result-code getter.
// Reference implementation: VA 0x1037e840 in sclib-csharp.dll.
// The operation wrapper stores its 16-bit result at +0x24.

extern "C" __declspec(noinline) unsigned short __thiscall
GetZoneGroupOperationResult(const void *operation) {
    return *reinterpret_cast<const unsigned short *>(
        static_cast<const unsigned char *>(operation) + 0x24);
}

// Native SCOpZoneGroupTopologyGetZoneGroupState result-code getter.
// Reference implementation: VA 0x1037e840 in sclib-csharp.dll.
// The operation wrapper stores its 16-bit result at +0x24.

struct ZoneGroupOperation {
    __declspec(noinline) unsigned short GetZoneGroupOperationResult() const;
};

unsigned short ZoneGroupOperation::GetZoneGroupOperationResult() const {
    return *reinterpret_cast<const unsigned short *>(
        reinterpret_cast<const unsigned char *>(this) + 0x24);
}

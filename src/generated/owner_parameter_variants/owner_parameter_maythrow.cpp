// Mechanically recovered Ghidra C-like functions, compiled as x86 C++.
// Types below are width-preserving placeholders, pending semantic recovery.
using undefined1 = unsigned char;
using undefined2 = unsigned short;
using undefined4 = unsigned int;
using undefined8 = unsigned long long;
using undefined = unsigned int;
using uint = unsigned int;
using ulong = unsigned long;
using byte = unsigned char;
using ushort = unsigned short;
using longlong = long long;
using float10 = long double;
using code = int(...);

using byte = unsigned char;
using uchar = unsigned char;
using ushort = unsigned short;
using longlong = long long;
using ulonglong = unsigned long long;
using float10 = long double;
using DWORD = unsigned long;
using BOOL = int;
using LPCSTR = const char *;
using __time64_t = long long;
struct FILE;
struct tm;
struct ThrowInfo;

struct RefCounted {
    virtual void Reserved();
    virtual void AddRef();
    virtual void Release();
};

// Placement construction calls the actual constructor at the recovered receiver.
inline void *operator new(unsigned int, void *receiver) noexcept { return receiver; }
class SwfStr;
class SCStr {
public:
    void *rep;
    SCStr();
    SCStr(const char *text);
    SCStr(const char *text, unsigned int length);
    SCStr(const SCStr &other);
    SCStr(const SwfStr &other);
    ~SCStr();
    bool operator<(const SCStr &other) const;
    bool operator<(const SwfStr &other) const;
    bool endsWith(const char *suffix) const;
    bool endsWith(const SCStr &suffix) const;
    bool endsWith(const SwfStr &suffix) const;
    SCStr &append(const char *text);
    SCStr &append(const char *text, unsigned int length);
    SCStr &append(char value);
    SCStr &append(const SCStr &other);
    SCStr &prepend(const char *text);
    SCStr &prepend(const char *text, unsigned int length);
    SCStr &prepend(const SCStr &other);
    SCStr &setFromUTF16(const unsigned short *text);
    SCStr &setFromUTF16(const unsigned short *text, unsigned int length);
    SCStr &replace(const char *from, const char *to, bool ignoreCase);
    char *getBuffer(unsigned int length);
    void empty();
    unsigned int utf8_length() const;
    bool int_endsWith(const char *text, unsigned int length, unsigned int suffixLength) const;
    unsigned int __cdecl trimRear(char *text, char *characters);
    int __cdecl format(const char *format, ...);
    bool operator==(const char *other) const;
    bool operator==(SCStr *other) const;
    bool operator!=(const char *other) const;
    bool operator!=(SCStr *other) const;
    bool beginsWith(const char *prefix) const;
    bool beginsWith(SCStr *prefix) const;
    bool contains(const char *needle, bool ignoreCase) const;
    bool contains(SCStr *needle, bool ignoreCase) const;
    unsigned int length() const;
    unsigned int hash() const;
    void int_addref();
    void int_release();
    void int_allocRep(char *text);
    void int_allocRep(char *text, unsigned int length);
};
struct RecoveredVirtualSlots {
  virtual int VirtualSlot0();
  virtual int VirtualSlot1();
  virtual int VirtualSlot2();
};
struct RecoveredParamOwner_FUN_10003e40 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10003e40() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredOwnerParameterCallback2 { virtual int Reserved0(); virtual int Reserved1(); virtual int VirtualSlot2(void *, void *); };
extern __declspec(noreturn) void __cdecl thunk_FUN_1148a05a(void);
struct RecoveredParamOwner_FUN_1006b7f7 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1006b7f7() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredOwnerParameterCallback1 { virtual int Reserved0(); virtual int Reserved1(); virtual int VirtualSlot2(void *); };
struct RecoveredParamOwner_FUN_100090b6 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_100090b6() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10011e69 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10011e69() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1009435f { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1009435f() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1004c35c { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1004c35c() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10001b9f { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10001b9f() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_100039c7 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_100039c7() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10004813 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10004813() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10087ebb { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10087ebb() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10033c3f { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10033c3f() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1002c33b { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1002c33b() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1001e51a { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1001e51a() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10017de1 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10017de1() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10002324 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10002324() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1007e9ab { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1007e9ab() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_100028d3 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_100028d3() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1000d6d4 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1000d6d4() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10001d5c { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10001d5c() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1007fdd8 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1007fdd8() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1000d9b8 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1000d9b8() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10071607 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10071607() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1000fbcd { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1000fbcd() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10051398 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10051398() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10086174 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10086174() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10024cd0 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10024cd0() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10002257 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10002257() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10076cfb { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10076cfb() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10014bb4 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10014bb4() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10054bb5 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10054bb5() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_100613d3 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_100613d3() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_100660c7 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_100660c7() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1008f4b8 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1008f4b8() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10023ea2 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10023ea2() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1001f514 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1001f514() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1002cd72 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1002cd72() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1004f6c4 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1004f6c4() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_100692b8 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_100692b8() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10004151 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10004151() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_100040bb { unsigned int first; int *second; ~RecoveredParamOwner_FUN_100040bb() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_100031d4 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_100031d4() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10044076 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10044076() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10032c22 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10032c22() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1004b759 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1004b759() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_100125c1 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_100125c1() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10058864 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10058864() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1008ee46 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1008ee46() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_10049eb8 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_10049eb8() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_100402b9 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_100402b9() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1001cf12 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1001cf12() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1002b58a { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1002b58a() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct RecoveredParamOwner_FUN_1006d331 { unsigned int first; int *second; ~RecoveredParamOwner_FUN_1006d331() noexcept(false) { if (second) { int *value = second; first = 0; second = 0; ((RecoveredVirtualSlots *)value)->VirtualSlot2(); } } };
struct Recovered_101d4d60 { void FUN_101d4d60(RecoveredParamOwner_FUN_10003e40 recovered_owner,undefined4 param_4); };
struct Recovered_10259740 { void FUN_10259740(RecoveredParamOwner_FUN_1006b7f7 recovered_owner); };
struct Recovered_102597d0 { void FUN_102597d0(RecoveredParamOwner_FUN_100090b6 recovered_owner); };
struct Recovered_102c5480 { void FUN_102c5480(RecoveredParamOwner_FUN_10011e69 recovered_owner,undefined4 param_4); };
struct Recovered_102c5520 { void FUN_102c5520(RecoveredParamOwner_FUN_1009435f recovered_owner,undefined4 param_4); };
struct Recovered_102cd6c0 { void FUN_102cd6c0(RecoveredParamOwner_FUN_1004c35c recovered_owner,undefined4 param_4); };
struct Recovered_102cd760 { void FUN_102cd760(RecoveredParamOwner_FUN_10001b9f recovered_owner,undefined4 param_4); };
struct Recovered_10367a00 { void FUN_10367a00(RecoveredParamOwner_FUN_100039c7 recovered_owner,undefined4 param_4); };
struct Recovered_103c3a00 { void FUN_103c3a00(RecoveredParamOwner_FUN_10004813 recovered_owner,undefined4 param_4); };
struct Recovered_103c3aa0 { void FUN_103c3aa0(RecoveredParamOwner_FUN_10087ebb recovered_owner,undefined4 param_4); };
struct Recovered_103fbcd0 { void FUN_103fbcd0(RecoveredParamOwner_FUN_10033c3f recovered_owner,undefined4 param_4); };
struct Recovered_103fbd70 { void FUN_103fbd70(RecoveredParamOwner_FUN_1002c33b recovered_owner,undefined4 param_4); };
struct Recovered_103fbe10 { void FUN_103fbe10(RecoveredParamOwner_FUN_1001e51a recovered_owner,undefined4 param_4); };
struct Recovered_103fbeb0 { void FUN_103fbeb0(RecoveredParamOwner_FUN_10017de1 recovered_owner,undefined4 param_4); };
struct Recovered_1043aa90 { void FUN_1043aa90(RecoveredParamOwner_FUN_10002324 recovered_owner,undefined4 param_4); };
struct Recovered_104626d0 { void FUN_104626d0(RecoveredParamOwner_FUN_1007e9ab recovered_owner,undefined4 param_4); };
struct Recovered_104ad7c0 { void FUN_104ad7c0(RecoveredParamOwner_FUN_100028d3 recovered_owner,undefined4 param_4); };
struct Recovered_106d0230 { void FUN_106d0230(RecoveredParamOwner_FUN_1000d6d4 recovered_owner,undefined4 param_4); };
struct Recovered_10b99bb0 { void FUN_10b99bb0(RecoveredParamOwner_FUN_10001d5c recovered_owner,undefined4 param_4); };
struct Recovered_10c366e0 { void FUN_10c366e0(RecoveredParamOwner_FUN_1007fdd8 recovered_owner,undefined4 param_4); };
struct Recovered_10c4b940 { void FUN_10c4b940(RecoveredParamOwner_FUN_1000d9b8 recovered_owner,undefined4 param_4); };
struct Recovered_10cdc440 { void FUN_10cdc440(RecoveredParamOwner_FUN_10071607 recovered_owner,undefined4 param_4); };
struct Recovered_10ce78f0 { void FUN_10ce78f0(RecoveredParamOwner_FUN_1000fbcd recovered_owner,undefined4 param_4); };
struct Recovered_10ce7990 { void FUN_10ce7990(RecoveredParamOwner_FUN_10051398 recovered_owner,undefined4 param_4); };
struct Recovered_10ceec50 { void FUN_10ceec50(RecoveredParamOwner_FUN_10086174 recovered_owner,undefined4 param_4); };
struct Recovered_10d75f10 { void FUN_10d75f10(RecoveredParamOwner_FUN_10024cd0 recovered_owner,undefined4 param_4); };
struct Recovered_10d75fb0 { void FUN_10d75fb0(RecoveredParamOwner_FUN_10002257 recovered_owner,undefined4 param_4); };
struct Recovered_10d76050 { void FUN_10d76050(RecoveredParamOwner_FUN_10076cfb recovered_owner,undefined4 param_4); };
struct Recovered_10e28e00 { void FUN_10e28e00(RecoveredParamOwner_FUN_10014bb4 recovered_owner,undefined4 param_4); };
struct Recovered_10e28ea0 { void FUN_10e28ea0(RecoveredParamOwner_FUN_10054bb5 recovered_owner,undefined4 param_4); };
struct Recovered_10e28f40 { void FUN_10e28f40(RecoveredParamOwner_FUN_100613d3 recovered_owner,undefined4 param_4); };
struct Recovered_10e28fe0 { void FUN_10e28fe0(RecoveredParamOwner_FUN_100660c7 recovered_owner,undefined4 param_4); };
struct Recovered_10e5fb00 { void FUN_10e5fb00(RecoveredParamOwner_FUN_1008f4b8 recovered_owner,undefined4 param_4); };
struct Recovered_10e5fba0 { void FUN_10e5fba0(RecoveredParamOwner_FUN_10023ea2 recovered_owner,undefined4 param_4); };
struct Recovered_10e5fc40 { void FUN_10e5fc40(RecoveredParamOwner_FUN_1001f514 recovered_owner,undefined4 param_4); };
struct Recovered_10e5fce0 { void FUN_10e5fce0(RecoveredParamOwner_FUN_1002cd72 recovered_owner,undefined4 param_4); };
struct Recovered_10e5fd80 { void FUN_10e5fd80(RecoveredParamOwner_FUN_1004f6c4 recovered_owner,undefined4 param_4); };
struct Recovered_10e96a90 { void FUN_10e96a90(RecoveredParamOwner_FUN_100692b8 recovered_owner,undefined4 param_4); };
struct Recovered_10e96b30 { void FUN_10e96b30(RecoveredParamOwner_FUN_10004151 recovered_owner,undefined4 param_4); };
struct Recovered_10e96bd0 { void FUN_10e96bd0(RecoveredParamOwner_FUN_100040bb recovered_owner,undefined4 param_4); };
struct Recovered_10e96c70 { void FUN_10e96c70(RecoveredParamOwner_FUN_100031d4 recovered_owner,undefined4 param_4); };
struct Recovered_10e96d10 { void FUN_10e96d10(RecoveredParamOwner_FUN_10044076 recovered_owner,undefined4 param_4); };
struct Recovered_10e96db0 { void FUN_10e96db0(RecoveredParamOwner_FUN_10032c22 recovered_owner,undefined4 param_4); };
struct Recovered_10edfb10 { void FUN_10edfb10(RecoveredParamOwner_FUN_1004b759 recovered_owner,undefined4 param_4); };
struct Recovered_10eebf70 { void FUN_10eebf70(RecoveredParamOwner_FUN_100125c1 recovered_owner,undefined4 param_4); };
struct Recovered_10eec010 { void FUN_10eec010(RecoveredParamOwner_FUN_10058864 recovered_owner,undefined4 param_4); };
struct Recovered_10f525b0 { void FUN_10f525b0(RecoveredParamOwner_FUN_1008ee46 recovered_owner,undefined4 param_4); };
struct Recovered_10f66240 { void FUN_10f66240(RecoveredParamOwner_FUN_10049eb8 recovered_owner,undefined4 param_4); };
struct Recovered_10f711c0 { void FUN_10f711c0(RecoveredParamOwner_FUN_100402b9 recovered_owner,undefined4 param_4); };
struct Recovered_10f83230 { void FUN_10f83230(RecoveredParamOwner_FUN_1001cf12 recovered_owner,undefined4 param_4); };
struct Recovered_11008050 { void FUN_11008050(RecoveredParamOwner_FUN_1002b58a recovered_owner,undefined4 param_4); };
struct Recovered_1103dbd0 { void FUN_1103dbd0(RecoveredParamOwner_FUN_1006d331 recovered_owner,undefined4 param_4); };
// Reference entry 101d4d60; body size 116 bytes.
#line 1 "ENTRY_101d4d60"

void Recovered_101d4d60::FUN_101d4d60(RecoveredParamOwner_FUN_10003e40 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10259740; body size 112 bytes.
#line 1 "ENTRY_10259740"

void Recovered_10259740::FUN_10259740(RecoveredParamOwner_FUN_1006b7f7 recovered_owner)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback1 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 102597d0; body size 112 bytes.
#line 1 "ENTRY_102597d0"

void Recovered_102597d0::FUN_102597d0(RecoveredParamOwner_FUN_100090b6 recovered_owner)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback1 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 102c5480; body size 116 bytes.
#line 1 "ENTRY_102c5480"

void Recovered_102c5480::FUN_102c5480(RecoveredParamOwner_FUN_10011e69 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 102c5520; body size 116 bytes.
#line 1 "ENTRY_102c5520"

void Recovered_102c5520::FUN_102c5520(RecoveredParamOwner_FUN_1009435f recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 102cd6c0; body size 116 bytes.
#line 1 "ENTRY_102cd6c0"

void Recovered_102cd6c0::FUN_102cd6c0(RecoveredParamOwner_FUN_1004c35c recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 102cd760; body size 116 bytes.
#line 1 "ENTRY_102cd760"

void Recovered_102cd760::FUN_102cd760(RecoveredParamOwner_FUN_10001b9f recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10367a00; body size 116 bytes.
#line 1 "ENTRY_10367a00"

void Recovered_10367a00::FUN_10367a00(RecoveredParamOwner_FUN_100039c7 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 103c3a00; body size 116 bytes.
#line 1 "ENTRY_103c3a00"

void Recovered_103c3a00::FUN_103c3a00(RecoveredParamOwner_FUN_10004813 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 103c3aa0; body size 116 bytes.
#line 1 "ENTRY_103c3aa0"

void Recovered_103c3aa0::FUN_103c3aa0(RecoveredParamOwner_FUN_10087ebb recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 103fbcd0; body size 116 bytes.
#line 1 "ENTRY_103fbcd0"

void Recovered_103fbcd0::FUN_103fbcd0(RecoveredParamOwner_FUN_10033c3f recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 103fbd70; body size 116 bytes.
#line 1 "ENTRY_103fbd70"

void Recovered_103fbd70::FUN_103fbd70(RecoveredParamOwner_FUN_1002c33b recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 103fbe10; body size 116 bytes.
#line 1 "ENTRY_103fbe10"

void Recovered_103fbe10::FUN_103fbe10(RecoveredParamOwner_FUN_1001e51a recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 103fbeb0; body size 116 bytes.
#line 1 "ENTRY_103fbeb0"

void Recovered_103fbeb0::FUN_103fbeb0(RecoveredParamOwner_FUN_10017de1 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 1043aa90; body size 116 bytes.
#line 1 "ENTRY_1043aa90"

void Recovered_1043aa90::FUN_1043aa90(RecoveredParamOwner_FUN_10002324 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 104626d0; body size 116 bytes.
#line 1 "ENTRY_104626d0"

void Recovered_104626d0::FUN_104626d0(RecoveredParamOwner_FUN_1007e9ab recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 104ad7c0; body size 116 bytes.
#line 1 "ENTRY_104ad7c0"

void Recovered_104ad7c0::FUN_104ad7c0(RecoveredParamOwner_FUN_100028d3 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 106d0230; body size 116 bytes.
#line 1 "ENTRY_106d0230"

void Recovered_106d0230::FUN_106d0230(RecoveredParamOwner_FUN_1000d6d4 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10b99bb0; body size 116 bytes.
#line 1 "ENTRY_10b99bb0"

void Recovered_10b99bb0::FUN_10b99bb0(RecoveredParamOwner_FUN_10001d5c recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10c366e0; body size 116 bytes.
#line 1 "ENTRY_10c366e0"

void Recovered_10c366e0::FUN_10c366e0(RecoveredParamOwner_FUN_1007fdd8 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10c4b940; body size 116 bytes.
#line 1 "ENTRY_10c4b940"

void Recovered_10c4b940::FUN_10c4b940(RecoveredParamOwner_FUN_1000d9b8 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10cdc440; body size 116 bytes.
#line 1 "ENTRY_10cdc440"

void Recovered_10cdc440::FUN_10cdc440(RecoveredParamOwner_FUN_10071607 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10ce78f0; body size 116 bytes.
#line 1 "ENTRY_10ce78f0"

void Recovered_10ce78f0::FUN_10ce78f0(RecoveredParamOwner_FUN_1000fbcd recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10ce7990; body size 116 bytes.
#line 1 "ENTRY_10ce7990"

void Recovered_10ce7990::FUN_10ce7990(RecoveredParamOwner_FUN_10051398 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10ceec50; body size 116 bytes.
#line 1 "ENTRY_10ceec50"

void Recovered_10ceec50::FUN_10ceec50(RecoveredParamOwner_FUN_10086174 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10d75f10; body size 116 bytes.
#line 1 "ENTRY_10d75f10"

void Recovered_10d75f10::FUN_10d75f10(RecoveredParamOwner_FUN_10024cd0 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10d75fb0; body size 116 bytes.
#line 1 "ENTRY_10d75fb0"

void Recovered_10d75fb0::FUN_10d75fb0(RecoveredParamOwner_FUN_10002257 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10d76050; body size 116 bytes.
#line 1 "ENTRY_10d76050"

void Recovered_10d76050::FUN_10d76050(RecoveredParamOwner_FUN_10076cfb recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e28e00; body size 116 bytes.
#line 1 "ENTRY_10e28e00"

void Recovered_10e28e00::FUN_10e28e00(RecoveredParamOwner_FUN_10014bb4 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e28ea0; body size 116 bytes.
#line 1 "ENTRY_10e28ea0"

void Recovered_10e28ea0::FUN_10e28ea0(RecoveredParamOwner_FUN_10054bb5 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e28f40; body size 116 bytes.
#line 1 "ENTRY_10e28f40"

void Recovered_10e28f40::FUN_10e28f40(RecoveredParamOwner_FUN_100613d3 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e28fe0; body size 116 bytes.
#line 1 "ENTRY_10e28fe0"

void Recovered_10e28fe0::FUN_10e28fe0(RecoveredParamOwner_FUN_100660c7 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e5fb00; body size 116 bytes.
#line 1 "ENTRY_10e5fb00"

void Recovered_10e5fb00::FUN_10e5fb00(RecoveredParamOwner_FUN_1008f4b8 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e5fba0; body size 116 bytes.
#line 1 "ENTRY_10e5fba0"

void Recovered_10e5fba0::FUN_10e5fba0(RecoveredParamOwner_FUN_10023ea2 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e5fc40; body size 116 bytes.
#line 1 "ENTRY_10e5fc40"

void Recovered_10e5fc40::FUN_10e5fc40(RecoveredParamOwner_FUN_1001f514 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e5fce0; body size 116 bytes.
#line 1 "ENTRY_10e5fce0"

void Recovered_10e5fce0::FUN_10e5fce0(RecoveredParamOwner_FUN_1002cd72 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e5fd80; body size 116 bytes.
#line 1 "ENTRY_10e5fd80"

void Recovered_10e5fd80::FUN_10e5fd80(RecoveredParamOwner_FUN_1004f6c4 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e96a90; body size 116 bytes.
#line 1 "ENTRY_10e96a90"

void Recovered_10e96a90::FUN_10e96a90(RecoveredParamOwner_FUN_100692b8 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e96b30; body size 116 bytes.
#line 1 "ENTRY_10e96b30"

void Recovered_10e96b30::FUN_10e96b30(RecoveredParamOwner_FUN_10004151 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e96bd0; body size 116 bytes.
#line 1 "ENTRY_10e96bd0"

void Recovered_10e96bd0::FUN_10e96bd0(RecoveredParamOwner_FUN_100040bb recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e96c70; body size 116 bytes.
#line 1 "ENTRY_10e96c70"

void Recovered_10e96c70::FUN_10e96c70(RecoveredParamOwner_FUN_100031d4 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e96d10; body size 116 bytes.
#line 1 "ENTRY_10e96d10"

void Recovered_10e96d10::FUN_10e96d10(RecoveredParamOwner_FUN_10044076 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10e96db0; body size 116 bytes.
#line 1 "ENTRY_10e96db0"

void Recovered_10e96db0::FUN_10e96db0(RecoveredParamOwner_FUN_10032c22 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10edfb10; body size 116 bytes.
#line 1 "ENTRY_10edfb10"

void Recovered_10edfb10::FUN_10edfb10(RecoveredParamOwner_FUN_1004b759 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10eebf70; body size 116 bytes.
#line 1 "ENTRY_10eebf70"

void Recovered_10eebf70::FUN_10eebf70(RecoveredParamOwner_FUN_100125c1 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10eec010; body size 116 bytes.
#line 1 "ENTRY_10eec010"

void Recovered_10eec010::FUN_10eec010(RecoveredParamOwner_FUN_10058864 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10f525b0; body size 116 bytes.
#line 1 "ENTRY_10f525b0"

void Recovered_10f525b0::FUN_10f525b0(RecoveredParamOwner_FUN_1008ee46 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10f66240; body size 116 bytes.
#line 1 "ENTRY_10f66240"

void Recovered_10f66240::FUN_10f66240(RecoveredParamOwner_FUN_10049eb8 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10f711c0; body size 116 bytes.
#line 1 "ENTRY_10f711c0"

void Recovered_10f711c0::FUN_10f711c0(RecoveredParamOwner_FUN_100402b9 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 10f83230; body size 116 bytes.
#line 1 "ENTRY_10f83230"

void Recovered_10f83230::FUN_10f83230(RecoveredParamOwner_FUN_1001cf12 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 11008050; body size 116 bytes.
#line 1 "ENTRY_11008050"

void Recovered_11008050::FUN_11008050(RecoveredParamOwner_FUN_1002b58a recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


// Reference entry 1103dbd0; body size 116 bytes.
#line 1 "ENTRY_1103dbd0"

void Recovered_1103dbd0::FUN_1103dbd0(RecoveredParamOwner_FUN_1006d331 recovered_owner,undefined4 param_4)

{
  int param_1 = (int)this;
  int *piVar1;


  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    ((RecoveredOwnerParameterCallback2 *)*(int **)(param_1 + 0x24))->VirtualSlot2((void *)(&recovered_owner.first), (void *)(&param_4));

    return;
  }
                    
  thunk_FUN_1148a05a();
}


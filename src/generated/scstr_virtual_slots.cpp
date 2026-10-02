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
  virtual int VirtualSlot3();
  virtual int VirtualSlot4();
  virtual int VirtualSlot5();
  virtual int VirtualSlot6();
  virtual int VirtualSlot7();
  virtual int VirtualSlot8();
  virtual int VirtualSlot9();
  virtual int VirtualSlot10();
  virtual int VirtualSlot11();
  virtual int VirtualSlot12();
  virtual int VirtualSlot13();
  virtual int VirtualSlot14();
  virtual int VirtualSlot15();
  virtual int VirtualSlot16();
  virtual int VirtualSlot17();
  virtual int VirtualSlot18();
  virtual int VirtualSlot19();
  virtual int VirtualSlot20();
  virtual int VirtualSlot21();
  virtual int VirtualSlot22();
  virtual int VirtualSlot23();
  virtual int VirtualSlot24();
  virtual int VirtualSlot25();
  virtual int VirtualSlot26();
  virtual int VirtualSlot27();
  virtual int VirtualSlot28();
  virtual int VirtualSlot29();
  virtual int VirtualSlot30();
  virtual int VirtualSlot31();
  virtual int VirtualSlot32();
  virtual int VirtualSlot33();
  virtual int VirtualSlot34();
  virtual int VirtualSlot35();
  virtual int VirtualSlot36();
  virtual int VirtualSlot37();
  virtual int VirtualSlot38();
  virtual int VirtualSlot39();
  virtual int VirtualSlot40();
  virtual int VirtualSlot41();
  virtual int VirtualSlot42();
  virtual int VirtualSlot43();
  virtual int VirtualSlot44();
  virtual int VirtualSlot45();
  virtual int VirtualSlot46();
  virtual int VirtualSlot47();
  virtual int VirtualSlot48();
  virtual int VirtualSlot49();
  virtual int VirtualSlot50();
  virtual int VirtualSlot51();
  virtual int VirtualSlot52();
  virtual int VirtualSlot53();
  virtual int VirtualSlot54();
  virtual int VirtualSlot55();
  virtual int VirtualSlot56();
  virtual int VirtualSlot57();
  virtual int VirtualSlot58();
  virtual int VirtualSlot59();
  virtual int VirtualSlot60();
  virtual int VirtualSlot61();
  virtual int VirtualSlot62();
  virtual int VirtualSlot63();
  virtual int VirtualSlot64();
  virtual int VirtualSlot65();
  virtual int VirtualSlot66();
  virtual int VirtualSlot67();
  virtual int VirtualSlot68();
  virtual int VirtualSlot69();
  virtual int VirtualSlot70();
  virtual int VirtualSlot71();
  virtual int VirtualSlot72();
  virtual int VirtualSlot73();
  virtual int VirtualSlot74();
  virtual int VirtualSlot75();
  virtual int VirtualSlot76();
  virtual int VirtualSlot77();
  virtual int VirtualSlot78();
  virtual int VirtualSlot79();
  virtual int VirtualSlot80();
  virtual int VirtualSlot81();
  virtual int VirtualSlot82();
  virtual int VirtualSlot83();
  virtual int VirtualSlot84();
  virtual int VirtualSlot85();
  virtual int VirtualSlot86();
  virtual int VirtualSlot87();
  virtual int VirtualSlot88();
  virtual int VirtualSlot89();
  virtual int VirtualSlot90();
  virtual int VirtualSlot91();
  virtual int VirtualSlot92();
  virtual int VirtualSlot93();
  virtual int VirtualSlot94();
  virtual int VirtualSlot95();
  virtual int VirtualSlot96();
  virtual int VirtualSlot97();
  virtual int VirtualSlot98();
  virtual int VirtualSlot99();
  virtual int VirtualSlot100();
  virtual int VirtualSlot101();
};
extern undefined4 DAT_00000004;
extern undefined4 DAT_0000000c;
extern undefined4 DAT_00000018;
extern undefined1 DAT_1186d2ee;
extern undefined4 DAT_11882ff0;
extern undefined4 DAT_12126b84;
extern code * DAT_121a06d8;
extern int thunk_FUN_10124c80(...);
extern int thunk_FUN_101f08d0(...);
extern int thunk_FUN_1020bd10(...);
extern int thunk_FUN_10219650(...);
extern int thunk_FUN_1023a9f0(...);
extern int thunk_FUN_10242870(...);
extern int thunk_FUN_1025e860(...);
extern int thunk_FUN_1026ca70(...);
extern int thunk_FUN_103d63d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6d80(...);
extern int thunk_FUN_103d6e70(...);
extern int thunk_FUN_103eb610(...);
extern int thunk_FUN_104d9d00(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_105b5360(...);
extern int thunk_FUN_10bc8b30(...);
extern int thunk_FUN_10c1f630(...);
extern int thunk_FUN_10e2f240(...);
extern int thunk_FUN_1104f960(...);
extern int thunk_FUN_11052090(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11093530(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a48f0(...);
extern int thunk_FUN_110cead0(...);
extern int thunk_FUN_110da8b0(...);
extern int thunk_FUN_1115bf90(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_11456530(...);
extern int thunk_FUN_1148ac28(...);
struct Recovered_10001401 { undefined4 * FUN_10001401(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10001b09 { undefined4 * FUN_10001b09(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10001bbd { undefined4 * FUN_10001bbd(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10001e10 { undefined4 * FUN_10001e10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10001e3d { undefined4 * FUN_10001e3d(undefined4 *param_2,SCStr *param_3); };
struct Recovered_100021e4 { undefined4 * FUN_100021e4(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10002275 { void FUN_10002275(SCStr *param_2); };
struct Recovered_100027b6 { undefined4 * FUN_100027b6(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1000281f { undefined4 * FUN_1000281f(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10002b30 { undefined4 * FUN_10002b30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_100035d0 { undefined4 * FUN_100035d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10003634 { undefined4 * FUN_10003634(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10003648 { undefined4 * FUN_10003648(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10003a6c { undefined4 * FUN_10003a6c(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10124590 { SCStr * FUN_10124590(SCStr *param_2); };
struct Recovered_10124b40 { int FUN_10124b40(int param_2); };
struct Recovered_1013d0b0 { undefined4 * FUN_1013d0b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d120 { undefined4 * FUN_1013d120(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d190 { undefined4 * FUN_1013d190(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d200 { undefined4 * FUN_1013d200(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d270 { undefined4 * FUN_1013d270(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d2e0 { undefined4 * FUN_1013d2e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d350 { undefined4 * FUN_1013d350(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d3c0 { undefined4 * FUN_1013d3c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d430 { undefined4 * FUN_1013d430(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d4a0 { undefined4 * FUN_1013d4a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d510 { undefined4 * FUN_1013d510(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d580 { undefined4 * FUN_1013d580(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d5f0 { undefined4 * FUN_1013d5f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d660 { undefined4 * FUN_1013d660(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d6d0 { undefined4 * FUN_1013d6d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d740 { undefined4 * FUN_1013d740(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d7b0 { undefined4 * FUN_1013d7b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d820 { undefined4 * FUN_1013d820(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d890 { undefined4 * FUN_1013d890(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d900 { undefined4 * FUN_1013d900(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d970 { undefined4 * FUN_1013d970(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013d9e0 { undefined4 * FUN_1013d9e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013da50 { undefined4 * FUN_1013da50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013dac0 { undefined4 * FUN_1013dac0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013db30 { undefined4 * FUN_1013db30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013dba0 { undefined4 * FUN_1013dba0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013dc10 { undefined4 * FUN_1013dc10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013dc80 { undefined4 * FUN_1013dc80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013dcf0 { undefined4 * FUN_1013dcf0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013dd60 { undefined4 * FUN_1013dd60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013ddd0 { undefined4 * FUN_1013ddd0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013de40 { undefined4 * FUN_1013de40(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013deb0 { undefined4 * FUN_1013deb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013df20 { undefined4 * FUN_1013df20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013df90 { undefined4 * FUN_1013df90(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e000 { undefined4 * FUN_1013e000(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e070 { undefined4 * FUN_1013e070(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e0e0 { undefined4 * FUN_1013e0e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e150 { undefined4 * FUN_1013e150(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e1c0 { undefined4 * FUN_1013e1c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e230 { undefined4 * FUN_1013e230(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e2a0 { undefined4 * FUN_1013e2a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e310 { undefined4 * FUN_1013e310(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e380 { undefined4 * FUN_1013e380(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e3f0 { undefined4 * FUN_1013e3f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e460 { undefined4 * FUN_1013e460(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e4d0 { undefined4 * FUN_1013e4d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e540 { undefined4 * FUN_1013e540(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e6d0 { undefined4 * FUN_1013e6d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e740 { undefined4 * FUN_1013e740(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e7b0 { undefined4 * FUN_1013e7b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1013e820 { undefined4 * FUN_1013e820(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101aaa70 { SCStr * FUN_101aaa70(SCStr *param_2); };
struct Recovered_101d40d0 { int FUN_101d40d0(int param_2); };
struct Recovered_101dd860 { undefined4 * FUN_101dd860(undefined4 *param_2,SCStr *param_3); };
struct Recovered_101e5ff0 { void FUN_101e5ff0(SCStr *param_2); };
struct Recovered_101f3310 { void FUN_101f3310(int param_2); };
struct Recovered_1020f4f0 { int * FUN_1020f4f0(int *param_2,uint param_3); };
struct Recovered_1021f010 { undefined4 * FUN_1021f010(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1021f0b0 { undefined4 * FUN_1021f0b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1021f180 { undefined4 * FUN_1021f180(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1021f270 { int * FUN_1021f270(int *param_2,SCStr *param_3); };
struct Recovered_1021f420 { undefined4 * FUN_1021f420(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1021f570 { undefined4 * FUN_1021f570(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10258f00 { SCStr * FUN_10258f00(SCStr *param_2); };
struct Recovered_10261e70 { bool FUN_10261e70(SCStr *param_2); };
struct Recovered_102620d0 { bool FUN_102620d0(SCStr *param_2); };
struct Recovered_10262390 { undefined4 * FUN_10262390(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10262440 { undefined4 * FUN_10262440(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102678c0 { void FUN_102678c0(undefined4 *param_2,int param_3); };
struct Recovered_10268730 { void FUN_10268730(undefined4 *param_2,int *param_3); };
struct Recovered_102921f0 { SCStr * FUN_102921f0(SCStr *param_2); };
struct Recovered_102922f0 { SCStr * FUN_102922f0(SCStr *param_2); };
struct Recovered_102aa8a0 { int FUN_102aa8a0(int param_2); };
struct Recovered_102b8a60 { undefined4 * FUN_102b8a60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102c9c70 { undefined4 * FUN_102c9c70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102c9d40 { undefined4 * FUN_102c9d40(undefined4 *param_2,SCStr *param_3); };
struct Recovered_102f70f0 { SCStr * FUN_102f70f0(SCStr *param_2); };
struct Recovered_102fe680 { undefined4 * FUN_102fe680(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10321920 { SCStr * FUN_10321920(SCStr *param_2); };
struct Recovered_10323df0 { SCStr * FUN_10323df0(SCStr *param_2); };
struct Recovered_10391510 { void FUN_10391510(int param_2); };
struct Recovered_104d8330 { void FUN_104d8330(undefined4 param_2); };
struct Recovered_104d8370 { void FUN_104d8370(undefined4 param_2); };
struct Recovered_104d9880 { void FUN_104d9880(undefined4 param_2); };
struct Recovered_104ff770 { undefined4 * FUN_104ff770(undefined4 *param_2,SCStr *param_3); };
struct Recovered_104ff840 { undefined4 * FUN_104ff840(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10507800 { SCStr * FUN_10507800(SCStr *param_2,undefined4 param_3); };
struct Recovered_10507860 { SCStr * FUN_10507860(SCStr *param_2); };
struct Recovered_10509680 { void FUN_10509680(SCStr *param_2); };
struct Recovered_1050b420 { undefined4 * FUN_1050b420(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1051a400 { void FUN_1051a400(int *param_2); };
struct Recovered_10524730 { undefined4 * FUN_10524730(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10541b60 { undefined4 FUN_10541b60(SCStr *param_2); };
struct Recovered_10545390 { undefined4 * FUN_10545390(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10545430 { undefined4 * FUN_10545430(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105454e0 { undefined4 * FUN_105454e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10545590 { undefined4 * FUN_10545590(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1054bd70 { void FUN_1054bd70(SCStr *param_2); };
struct Recovered_1054bde0 { void FUN_1054bde0(SCStr *param_2); };
struct Recovered_1054be50 { void FUN_1054be50(SCStr *param_2); };
struct Recovered_1054d4c0 { undefined4 * FUN_1054d4c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105783d0 { undefined4 * FUN_105783d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10578470 { undefined4 * FUN_10578470(undefined4 *param_2,SCStr *param_3); };
struct Recovered_105a2ad0 { SCStr * FUN_105a2ad0(SCStr *param_2); };
struct Recovered_105b24a0 { void FUN_105b24a0(int param_2,SCStr *param_3); };
struct Recovered_105b2bb0 { void FUN_105b2bb0(int *param_2,SCStr *param_3); };
struct Recovered_105e7600 { void FUN_105e7600(SCStr *param_2,SCStr *param_3,int *param_4,undefined4 param_5); };
struct Recovered_106877d0 { undefined4 * FUN_106877d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10687820 { undefined4 * FUN_10687820(undefined4 *param_2,SCStr *param_3); };
struct Recovered_106a1a50 { undefined4 FUN_106a1a50(int *param_2); };
struct Recovered_106cc960 { undefined4 * FUN_106cc960(undefined4 *param_2,SCStr *param_3); };
struct Recovered_106f6bf0 { undefined4 * FUN_106f6bf0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10827f70 { SCStr * FUN_10827f70(SCStr *param_2); };
struct Recovered_108f8070 { void FUN_108f8070(SCStr *param_2); };
struct Recovered_10bedc30 { undefined4 * FUN_10bedc30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bf13a0 { undefined4 * FUN_10bf13a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10bf1470 { undefined4 * FUN_10bf1470(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c00c70 { undefined4 * FUN_10c00c70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c20ab0 { void FUN_10c20ab0(undefined4 param_2); };
struct Recovered_10c20b20 { undefined4 * FUN_10c20b20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c20c30 { undefined4 * FUN_10c20c30(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c67b50 { undefined4 * FUN_10c67b50(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c6e370 { undefined4 * FUN_10c6e370(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c6edd0 { undefined4 * FUN_10c6edd0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c7fb20 { undefined4 * FUN_10c7fb20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10c89d40 { undefined4 * FUN_10c89d40(undefined4 *param_2); };
struct Recovered_10c92dc0 { undefined4 * FUN_10c92dc0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cbe0d0 { undefined4 * FUN_10cbe0d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ce1ea0 { undefined4 * FUN_10ce1ea0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ce1f40 { undefined4 * FUN_10ce1f40(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ce2a80 { undefined4 * FUN_10ce2a80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cebbc0 { undefined4 * FUN_10cebbc0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cfb040 { undefined4 * FUN_10cfb040(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cfdde0 { undefined4 * FUN_10cfdde0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10cfdeb0 { undefined4 * FUN_10cfdeb0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d14dd0 { undefined4 * FUN_10d14dd0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d14e70 { undefined4 * FUN_10d14e70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d14f40 { undefined4 * FUN_10d14f40(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d16fb0 { void FUN_10d16fb0(int param_2,SCStr *param_3); };
struct Recovered_10d1e560 { undefined4 * FUN_10d1e560(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d2b170 { undefined4 * FUN_10d2b170(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d39ec0 { undefined4 * FUN_10d39ec0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d41c80 { undefined4 * FUN_10d41c80(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d41da0 { undefined4 * FUN_10d41da0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d41e70 { undefined4 * FUN_10d41e70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d44040 { void FUN_10d44040(undefined4 param_2,SCStr *param_3); };
struct Recovered_10d440e0 { void FUN_10d440e0(undefined4 param_2,SCStr *param_3); };
struct Recovered_10d44120 { void FUN_10d44120(undefined4 param_2,SCStr *param_3); };
struct Recovered_10d44200 { void FUN_10d44200(undefined4 param_2,SCStr *param_3); };
struct Recovered_10d49470 { undefined4 * FUN_10d49470(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d49540 { undefined4 * FUN_10d49540(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d49620 { undefined4 * FUN_10d49620(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d496f0 { undefined4 * FUN_10d496f0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d497d0 { undefined4 * FUN_10d497d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d498a0 { undefined4 * FUN_10d498a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d51180 { undefined4 * FUN_10d51180(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d51220 { undefined4 * FUN_10d51220(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d58880 { undefined4 * FUN_10d58880(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d5a990 { undefined4 * FUN_10d5a990(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d63500 { undefined4 * FUN_10d63500(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d67340 { undefined4 * FUN_10d67340(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d67410 { undefined4 * FUN_10d67410(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d674e0 { undefined4 * FUN_10d674e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d675b0 { undefined4 * FUN_10d675b0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d71360 { undefined4 * FUN_10d71360(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10d71470 { undefined4 * FUN_10d71470(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10da6df0 { void FUN_10da6df0(SCStr *param_2,undefined4 param_3); };
struct Recovered_10db8e40 { SCStr * FUN_10db8e40(SCStr *param_2); };
struct Recovered_10dc76d0 { undefined4 * FUN_10dc76d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10dd2710 { SCStr * FUN_10dd2710(SCStr *param_2); };
struct Recovered_10dd2780 { SCStr * FUN_10dd2780(SCStr *param_2); };
struct Recovered_10def210 { SCStr * FUN_10def210(SCStr *param_2); };
struct Recovered_10e2b7d0 { void FUN_10e2b7d0(int param_2,ushort param_3); };
struct Recovered_10e30d60 { SCStr * FUN_10e30d60(SCStr *param_2); };
struct Recovered_10e5f7a0 { SCStr * FUN_10e5f7a0(SCStr *param_2); };
struct Recovered_10ea2980 { undefined4 * FUN_10ea2980(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ea2c70 { undefined4 * FUN_10ea2c70(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ea2d10 { undefined4 * FUN_10ea2d10(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ec2bf0 { int * FUN_10ec2bf0(int *param_2); };
struct Recovered_10f47070 { void FUN_10f47070(SCStr *param_2,SCStr *param_3,uint param_4); };
struct Recovered_10f4bef0 { SCStr * FUN_10f4bef0(SCStr *param_2,int param_3); };
struct Recovered_10f51510 { undefined4 * FUN_10f51510(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fb0da0 { int * FUN_10fb0da0(int *param_2); };
struct Recovered_10fcb7d0 { SCStr * FUN_10fcb7d0(SCStr *param_2); };
struct Recovered_10fd25c0 { undefined4 * FUN_10fd25c0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fdd5a0 { undefined4 * FUN_10fdd5a0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fe6e20 { undefined4 * FUN_10fe6e20(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10fe86d0 { undefined4 * FUN_10fe86d0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10ff85e0 { undefined4 * FUN_10ff85e0(undefined4 *param_2,SCStr *param_3); };
struct Recovered_1102b260 { SCStr * FUN_1102b260(SCStr *param_2); };
struct Recovered_11030e00 { SCStr * FUN_11030e00(SCStr *param_2); };
struct Recovered_11037990 { undefined4 * FUN_11037990(undefined4 *param_2,SCStr *param_3); };
struct Recovered_11037ab0 { undefined4 * FUN_11037ab0(undefined4 *param_2,SCStr *param_3); };
// Reference entry 10001401; body size 5 bytes.
#line 1 "ENTRY_10001401"

undefined4 * Recovered_10001401::FUN_10001401(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIStringInput");
  if (((bVar1) || (bVar1 = (param_3)->operator==("SCIStringInputBase"), bVar1)) ||
     (bVar1 = (param_3)->operator==("SCIInput"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10001b09; body size 5 bytes.
#line 1 "ENTRY_10001b09"

undefined4 * Recovered_10001b09::FUN_10001b09(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10001bbd; body size 5 bytes.
#line 1 "ENTRY_10001bbd"

undefined4 * Recovered_10001bbd::FUN_10001bbd(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIMdnsDelegate");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10001e10; body size 5 bytes.
#line 1 "ENTRY_10001e10"

undefined4 * Recovered_10001e10::FUN_10001e10(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlSessionCallback");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10001e3d; body size 5 bytes.
#line 1 "ENTRY_10001e3d"

undefined4 * Recovered_10001e3d::FUN_10001e3d(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpRenderingControlSetRoomCalibrationStatus");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 100021e4; body size 5 bytes.
#line 1 "ENTRY_100021e4"

undefined4 * Recovered_100021e4::FUN_100021e4(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIController");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10002275; body size 5 bytes.
#line 1 "ENTRY_10002275"

void Recovered_10002275::FUN_10002275(SCStr *param_2)

{
  int * param_1 = (int *)this;
  char cVar1;
  char cVar2;
  SCStr *ghidra_this;
  
  cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot12();
  ghidra_this = (SCStr *)(param_1[2] + 0xf8);
  if (param_2 != ghidra_this) {
    (ghidra_this)->int_release();
    *(undefined4 *)ghidra_this = *(undefined4 *)param_2;
    (ghidra_this)->int_addref();
  }
  cVar2 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot12();
  if (cVar1 != cVar2) {
    (**(code **)(*(int *)param_1[2] + 0x88))();
  }
  return;
}


// Reference entry 100027b6; body size 5 bytes.
#line 1 "ENTRY_100027b6"

undefined4 * Recovered_100027b6::FUN_100027b6(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchHistoryBrowseDataSource");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 1000281f; body size 5 bytes.
#line 1 "ENTRY_1000281f"

undefined4 * Recovered_1000281f::FUN_1000281f(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 100029cd; body size 5 bytes.
#line 1 "ENTRY_100029cd"

void __fastcall FUN_100029cd(int param_1)

{
  int *piVar1;
  char cVar2;
  SCStr aSStack_18 [4];
  int *piStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0x10d2359f;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
  if (*(char *)(param_1 + 0x1d) != cVar2) {
    *(char *)(param_1 + 0x1d) = cVar2;
    piVar1 = (int *)(param_1 + -0x90);
    uStack_10 = 0x10d235b9;
    cVar2 = ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot36();
    uStack_10 = 0;
    if (cVar2 != '\0') {
      piStack_14 = piVar1;
      (aSStack_18)->int_allocRep("SCIBrowseDataSource:onInvalidation");
      thunk_FUN_103d65f0();
      return;
    }
    piStack_14 = (int *)0x10d235e8;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot68();
  }
  return;
}


// Reference entry 10002b30; body size 5 bytes.
#line 1 "ENTRY_10002b30"

undefined4 * Recovered_10002b30::FUN_10002b30(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpContentDirectoryGetAlbumArtistDisplayOption");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 100034e0; body size 5 bytes.
#line 1 "ENTRY_100034e0"

SCStr * FUN_100034e0(SCStr *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  iVar2 = thunk_FUN_101f08d0();
  if (iVar2 != 0x40) {
    iVar2 = thunk_FUN_101f08d0();
    if (iVar2 != 0x200) {
      piVar3 = (int *)thunk_FUN_110828b0();
      if (piVar3 != (int *)0x0) {
        cVar1 = ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot15();
        if (cVar1 != '\0') {
          pcVar4 = (char *)thunk_FUN_1109aba0(0x25cb,&DAT_11882ff0);
          (param_1)->int_allocRep(pcVar4);
          return param_1;
        }
      }
      pcVar4 = (char *)thunk_FUN_1109aba0(0x25cc,&DAT_11882ff0);
      (param_1)->int_allocRep(pcVar4);
      return param_1;
    }
  }
  (param_1)->int_allocRep("");
  return param_1;
}


// Reference entry 100035d0; body size 5 bytes.
#line 1 "ENTRY_100035d0"

undefined4 * Recovered_100035d0::FUN_100035d0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIIntegerSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10003634; body size 5 bytes.
#line 1 "ENTRY_10003634"

undefined4 * Recovered_10003634::FUN_10003634(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIWebsocketDelegate");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10003648; body size 5 bytes.
#line 1 "ENTRY_10003648"

undefined4 * Recovered_10003648::FUN_10003648(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10003a6c; body size 5 bytes.
#line 1 "ENTRY_10003a6c"

undefined4 * Recovered_10003a6c::FUN_10003a6c(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10124590; body size 1116 bytes.
#line 1 "ENTRY_10124590"

SCStr * Recovered_10124590::FUN_10124590(SCStr *param_2)

{
  SCStr * param_1 = (SCStr *)this;
  SCStr *pSVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 != param_1) {
    (param_1)->int_release();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    (param_1)->int_addref();
  }
  pSVar1 = param_1 + 4;
  if (param_2 + 4 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (4)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0xc;
  param_1[8] = param_2[8];
  if (param_2 + 0xc != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0xc)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0x10;
  if (param_2 + 0x10 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0x10)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0x14;
  if (param_2 + 0x14 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0x14)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0x18;
  if (param_2 + 0x18 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0x18)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0x1c;
  if (param_2 + 0x1c != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0x1c)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0x20;
  if (param_2 + 0x20 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0x20)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0x24;
  if (param_2 + 0x24 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0x24)));
    (pSVar1)->int_addref();
  }
  iVar3 = *(int *)((SCStr *)((char *)param_2 + (0x28)));
  if (iVar3 != *(int *)((SCStr *)((char *)param_1 + (0x28)))) {
    piVar2 = *(int **)((SCStr *)((char *)param_1 + (0x2c)));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)((SCStr *)((char *)param_1 + (0x28))) = 0;
      *(undefined4 *)((SCStr *)((char *)param_1 + (0x2c))) = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
      iVar3 = *(int *)((SCStr *)((char *)param_2 + (0x28)));
    }
    *(int *)((SCStr *)((char *)param_1 + (0x28))) = iVar3;
    piVar2 = *(int **)((SCStr *)((char *)param_2 + (0x2c)));
    *(int **)((SCStr *)((char *)param_1 + (0x2c))) = piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
    }
  }
  pSVar1 = param_1 + 0x30;
  if (param_2 + 0x30 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0x30)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0x34;
  if (param_2 + 0x34 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0x34)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0x38;
  if (param_2 + 0x38 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0x38)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0x3c;
  if (param_2 + 0x3c != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0x3c)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0x40;
  if (param_2 + 0x40 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0x40)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0x44;
  if (param_2 + 0x44 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0x44)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0x4c;
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x48))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0x48)));
  if (param_2 + 0x4c != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0x4c)));
    (pSVar1)->int_addref();
  }
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = param_2[0x51];
  param_1[0x52] = param_2[0x52];
  param_1[0x53] = param_2[0x53];
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x54))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0x54)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x58))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0x58)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x5c))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0x5c)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x60))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0x60)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (100))) = *(undefined4 *)((SCStr *)((char *)param_2 + (100)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (0x68))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0x68)));
  thunk_FUN_10124c80((SCStr *)((char *)param_2 + (0x6c)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xb4))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0xb4)));
  pSVar1 = param_1 + 0xd8;
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xb8))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0xb8)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xbc))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0xbc)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xc0))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0xc0)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xc4))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0xc4)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (200))) = *(undefined4 *)((SCStr *)((char *)param_2 + (200)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xcc))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0xcc)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xd0))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0xd0)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xd4))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0xd4)));
  if (param_2 + 0xd8 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0xd8)));
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0xdc;
  if (param_2 + 0xdc != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)((SCStr *)((char *)param_2 + (0xdc)));
    (pSVar1)->int_addref();
  }
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xe0))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0xe0)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xe4))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0xe4)));
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xe8))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0xe8)));
  param_1[0xec] = param_2[0xec];
  param_1[0xed] = param_2[0xed];
  param_1[0xee] = param_2[0xee];
  iVar3 = *(int *)((SCStr *)((char *)param_2 + (0xf0)));
  if (iVar3 != *(int *)((SCStr *)((char *)param_1 + (0xf0)))) {
    piVar2 = *(int **)((SCStr *)((char *)param_1 + (0xf4)));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)((SCStr *)((char *)param_1 + (0xf0))) = 0;
      *(undefined4 *)((SCStr *)((char *)param_1 + (0xf4))) = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
      iVar3 = *(int *)((SCStr *)((char *)param_2 + (0xf0)));
    }
    *(int *)((SCStr *)((char *)param_1 + (0xf0))) = iVar3;
    piVar2 = *(int **)((SCStr *)((char *)param_2 + (0xf4)));
    *(int **)((SCStr *)((char *)param_1 + (0xf4))) = piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
    }
  }
  iVar3 = *(int *)((SCStr *)((char *)param_2 + (0xf8)));
  if (iVar3 != *(int *)((SCStr *)((char *)param_1 + (0xf8)))) {
    piVar2 = *(int **)((SCStr *)((char *)param_1 + (0xfc)));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)((SCStr *)((char *)param_1 + (0xf8))) = 0;
      *(undefined4 *)((SCStr *)((char *)param_1 + (0xfc))) = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
      iVar3 = *(int *)((SCStr *)((char *)param_2 + (0xf8)));
    }
    *(int *)((SCStr *)((char *)param_1 + (0xf8))) = iVar3;
    piVar2 = *(int **)((SCStr *)((char *)param_2 + (0xfc)));
    *(int **)((SCStr *)((char *)param_1 + (0xfc))) = piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
    }
  }
  iVar3 = *(int *)((SCStr *)((char *)param_2 + (0x100)));
  if (iVar3 != *(int *)((SCStr *)((char *)param_1 + (0x100)))) {
    piVar2 = *(int **)((SCStr *)((char *)param_1 + (0x104)));
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)((SCStr *)((char *)param_1 + (0x100))) = 0;
      *(undefined4 *)((SCStr *)((char *)param_1 + (0x104))) = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
      iVar3 = *(int *)((SCStr *)((char *)param_2 + (0x100)));
    }
    *(int *)((SCStr *)((char *)param_1 + (0x100))) = iVar3;
    piVar2 = *(int **)((SCStr *)((char *)param_2 + (0x104)));
    *(int **)((SCStr *)((char *)param_1 + (0x104))) = piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
    }
  }
  return param_1;
}


// Reference entry 10124b40; body size 248 bytes.
#line 1 "ENTRY_10124b40"

int Recovered_10124b40::FUN_10124b40(int param_2)

{
  int param_1 = (int)this;
  SCStr *pSVar1;
  int *piVar2;
  int iVar3;
  
  pSVar1 = (SCStr *)(param_1 + 4);
  if ((SCStr *)(param_2 + 4) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 4);
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 8);
  if ((SCStr *)(param_2 + 8) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 8);
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0xc);
  if ((SCStr *)(param_2 + 0xc) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0xc);
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x10);
  if ((SCStr *)(param_2 + 0x10) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x10);
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x14);
  if ((SCStr *)(param_2 + 0x14) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x14);
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x18);
  if ((SCStr *)(param_2 + 0x18) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x18);
    (pSVar1)->int_addref();
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 != *(int *)(param_1 + 0x1c)) {
    piVar2 = *(int **)(param_1 + 0x20);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
      iVar3 = *(int *)(param_2 + 0x1c);
    }
    *(int *)(param_1 + 0x1c) = iVar3;
    piVar2 = *(int **)(param_2 + 0x20);
    *(int **)(param_1 + 0x20) = piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
    }
  }
  return param_1;
}


// Reference entry 1013d0b0; body size 79 bytes.
#line 1 "ENTRY_1013d0b0"

undefined4 * Recovered_1013d0b0::FUN_1013d0b0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAbilityDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d120; body size 79 bytes.
#line 1 "ENTRY_1013d120"

undefined4 * Recovered_1013d120::FUN_1013d120(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d190; body size 79 bytes.
#line 1 "ENTRY_1013d190"

undefined4 * Recovered_1013d190::FUN_1013d190(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionFactory");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d200; body size 79 bytes.
#line 1 "ENTRY_1013d200"

undefined4 * Recovered_1013d200::FUN_1013d200(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionFilter");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d270; body size 79 bytes.
#line 1 "ENTRY_1013d270"

undefined4 * Recovered_1013d270::FUN_1013d270(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d2e0; body size 79 bytes.
#line 1 "ENTRY_1013d2e0"

undefined4 * Recovered_1013d2e0::FUN_1013d2e0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAutomationDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d350; body size 79 bytes.
#line 1 "ENTRY_1013d350"

undefined4 * Recovered_1013d350::FUN_1013d350(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBTAccessoryDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d3c0; body size 79 bytes.
#line 1 "ENTRY_1013d3c0"

undefined4 * Recovered_1013d3c0::FUN_1013d3c0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBTClassicConnectionCallback");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d430; body size 79 bytes.
#line 1 "ENTRY_1013d430"

undefined4 * Recovered_1013d430::FUN_1013d430(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBTClassicConnectionProvider");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d4a0; body size 79 bytes.
#line 1 "ENTRY_1013d4a0"

undefined4 * Recovered_1013d4a0::FUN_1013d4a0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBleDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d510; body size 79 bytes.
#line 1 "ENTRY_1013d510"

undefined4 * Recovered_1013d510::FUN_1013d510(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBlePeripheralDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d580; body size 79 bytes.
#line 1 "ENTRY_1013d580"

undefined4 * Recovered_1013d580::FUN_1013d580(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d5f0; body size 79 bytes.
#line 1 "ENTRY_1013d5f0"

undefined4 * Recovered_1013d5f0::FUN_1013d5f0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIChirpDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d660; body size 79 bytes.
#line 1 "ENTRY_1013d660"

undefined4 * Recovered_1013d660::FUN_1013d660(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIClipboardDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d6d0; body size 79 bytes.
#line 1 "ENTRY_1013d6d0"

undefined4 * Recovered_1013d6d0::FUN_1013d6d0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCICrashReportProvider");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d740; body size 79 bytes.
#line 1 "ENTRY_1013d740"

undefined4 * Recovered_1013d740::FUN_1013d740(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCICustomSubWizard");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d7b0; body size 79 bytes.
#line 1 "ENTRY_1013d7b0"

undefined4 * Recovered_1013d7b0::FUN_1013d7b0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d820; body size 79 bytes.
#line 1 "ENTRY_1013d820"

undefined4 * Recovered_1013d820::FUN_1013d820(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIExperimentManagerProvider");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d890; body size 79 bytes.
#line 1 "ENTRY_1013d890"

undefined4 * Recovered_1013d890::FUN_1013d890(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIGetAboutSonosStringCB");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d900; body size 79 bytes.
#line 1 "ENTRY_1013d900"

undefined4 * Recovered_1013d900::FUN_1013d900(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIGetSonosPlaylistsCB");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d970; body size 79 bytes.
#line 1 "ENTRY_1013d970"

undefined4 * Recovered_1013d970::FUN_1013d970(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIHapticDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013d9e0; body size 79 bytes.
#line 1 "ENTRY_1013d9e0"

undefined4 * Recovered_1013d9e0::FUN_1013d9e0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIInAppMessagingProvider");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013da50; body size 79 bytes.
#line 1 "ENTRY_1013da50"

undefined4 * Recovered_1013da50::FUN_1013da50(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIInAppPurchaseManagerProvider");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013dac0; body size 79 bytes.
#line 1 "ENTRY_1013dac0"

undefined4 * Recovered_1013dac0::FUN_1013dac0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCILifecycleAppProvider");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013db30; body size 79 bytes.
#line 1 "ENTRY_1013db30"

undefined4 * Recovered_1013db30::FUN_1013db30(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCILocalMediaCollection");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013dba0; body size 79 bytes.
#line 1 "ENTRY_1013dba0"

undefined4 * Recovered_1013dba0::FUN_1013dba0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCILocalMusicBrowseItemInfo");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013dc10; body size 79 bytes.
#line 1 "ENTRY_1013dc10"

undefined4 * Recovered_1013dc10::FUN_1013dc10(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCILocalMusicSearchableDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013dc80; body size 79 bytes.
#line 1 "ENTRY_1013dc80"

undefined4 * Recovered_1013dc80::FUN_1013dc80(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCILoggingProvider");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013dcf0; body size 79 bytes.
#line 1 "ENTRY_1013dcf0"

undefined4 * Recovered_1013dcf0::FUN_1013dcf0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIMdnsDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013dd60; body size 79 bytes.
#line 1 "ENTRY_1013dd60"

undefined4 * Recovered_1013dd60::FUN_1013dd60(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIMusicServerBrowseDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013ddd0; body size 79 bytes.
#line 1 "ENTRY_1013ddd0"

undefined4 * Recovered_1013ddd0::FUN_1013ddd0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIMusicServerDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013de40; body size 79 bytes.
#line 1 "ENTRY_1013de40"

undefined4 * Recovered_1013de40::FUN_1013de40(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCINetstartListener");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013deb0; body size 79 bytes.
#line 1 "ENTRY_1013deb0"

undefined4 * Recovered_1013deb0::FUN_1013deb0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCINetworkManagementDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013df20; body size 79 bytes.
#line 1 "ENTRY_1013df20"

undefined4 * Recovered_1013df20::FUN_1013df20(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCINewWizDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013df90; body size 79 bytes.
#line 1 "ENTRY_1013df90"

undefined4 * Recovered_1013df90::FUN_1013df90(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCINfcDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e000; body size 79 bytes.
#line 1 "ENTRY_1013e000"

undefined4 * Recovered_1013e000::FUN_1013e000(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpCB");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e070; body size 79 bytes.
#line 1 "ENTRY_1013e070"

undefined4 * Recovered_1013e070::FUN_1013e070(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISavedDataProvider");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e0e0; body size 79 bytes.
#line 1 "ENTRY_1013e0e0"

undefined4 * Recovered_1013e0e0::FUN_1013e0e0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISecureStore");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e150; body size 79 bytes.
#line 1 "ENTRY_1013e150"

undefined4 * Recovered_1013e150::FUN_1013e150(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISecurityContext");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e1c0; body size 79 bytes.
#line 1 "ENTRY_1013e1c0"

undefined4 * Recovered_1013e1c0::FUN_1013e1c0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIServiceAppInterop");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e230; body size 79 bytes.
#line 1 "ENTRY_1013e230"

undefined4 * Recovered_1013e230::FUN_1013e230(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIStackTraceCaptureDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e2a0; body size 79 bytes.
#line 1 "ENTRY_1013e2a0"

undefined4 * Recovered_1013e2a0::FUN_1013e2a0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIStringInput");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e310; body size 79 bytes.
#line 1 "ENTRY_1013e310"

undefined4 * Recovered_1013e310::FUN_1013e310(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCITrackInfo");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e380; body size 79 bytes.
#line 1 "ENTRY_1013e380"

undefined4 * Recovered_1013e380::FUN_1013e380(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrbanAirshipDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e3f0; body size 79 bytes.
#line 1 "ENTRY_1013e3f0"

undefined4 * Recovered_1013e3f0::FUN_1013e3f0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlConnection");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e460; body size 79 bytes.
#line 1 "ENTRY_1013e460"

undefined4 * Recovered_1013e460::FUN_1013e460(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlSessionCallback");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e4d0; body size 79 bytes.
#line 1 "ENTRY_1013e4d0"

undefined4 * Recovered_1013e4d0::FUN_1013e4d0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlSessionProvider");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e540; body size 79 bytes.
#line 1 "ENTRY_1013e540"

undefined4 * Recovered_1013e540::FUN_1013e540(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIVoiceServiceDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e6d0; body size 79 bytes.
#line 1 "ENTRY_1013e6d0"

undefined4 * Recovered_1013e6d0::FUN_1013e6d0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIVpnDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e740; body size 79 bytes.
#line 1 "ENTRY_1013e740"

undefined4 * Recovered_1013e740::FUN_1013e740(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIWebsocketCallback");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e7b0; body size 79 bytes.
#line 1 "ENTRY_1013e7b0"

undefined4 * Recovered_1013e7b0::FUN_1013e7b0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIWebsocketDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1013e820; body size 79 bytes.
#line 1 "ENTRY_1013e820"

undefined4 * Recovered_1013e820::FUN_1013e820(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIWifiDelegate");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 1016ffd0; body size 41 bytes.
#line 1 "ENTRY_1016ffd0"

void __stdcall FUN_1016ffd0(int *param_1)

{
  SCStr *ghidra_this;
  uint uVar1;
  undefined1 *puVar2;
  
  ghidra_this = (SCStr *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot13();
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)ghidra_this != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)ghidra_this;
  }
  uVar1 = (ghidra_this)->length();
  (*DAT_121a06d8)(puVar2,uVar1);
  return;
}


// Reference entry 10170010; body size 41 bytes.
#line 1 "ENTRY_10170010"

void __stdcall FUN_10170010(int *param_1)

{
  SCStr *ghidra_this;
  uint uVar1;
  undefined1 *puVar2;
  
  ghidra_this = (SCStr *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot10();
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)ghidra_this != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)ghidra_this;
  }
  uVar1 = (ghidra_this)->length();
  (*DAT_121a06d8)(puVar2,uVar1);
  return;
}


// Reference entry 10170100; body size 41 bytes.
#line 1 "ENTRY_10170100"

void __stdcall FUN_10170100(int *param_1)

{
  SCStr *ghidra_this;
  uint uVar1;
  undefined1 *puVar2;
  
  ghidra_this = (SCStr *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot7();
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)ghidra_this != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)ghidra_this;
  }
  uVar1 = (ghidra_this)->length();
  (*DAT_121a06d8)(puVar2,uVar1);
  return;
}


// Reference entry 10170140; body size 41 bytes.
#line 1 "ENTRY_10170140"

void __stdcall FUN_10170140(int *param_1)

{
  SCStr *ghidra_this;
  uint uVar1;
  undefined1 *puVar2;
  
  ghidra_this = (SCStr *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot6();
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)ghidra_this != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)ghidra_this;
  }
  uVar1 = (ghidra_this)->length();
  (*DAT_121a06d8)(puVar2,uVar1);
  return;
}


// Reference entry 10170180; body size 41 bytes.
#line 1 "ENTRY_10170180"

void __stdcall FUN_10170180(int *param_1)

{
  SCStr *ghidra_this;
  uint uVar1;
  undefined1 *puVar2;
  
  ghidra_this = (SCStr *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot14();
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)ghidra_this != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)ghidra_this;
  }
  uVar1 = (ghidra_this)->length();
  (*DAT_121a06d8)(puVar2,uVar1);
  return;
}


// Reference entry 101701d0; body size 41 bytes.
#line 1 "ENTRY_101701d0"

void __stdcall FUN_101701d0(int *param_1)

{
  SCStr *ghidra_this;
  uint uVar1;
  undefined1 *puVar2;
  
  ghidra_this = (SCStr *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot5();
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)ghidra_this != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)ghidra_this;
  }
  uVar1 = (ghidra_this)->length();
  (*DAT_121a06d8)(puVar2,uVar1);
  return;
}


// Reference entry 10170340; body size 41 bytes.
#line 1 "ENTRY_10170340"

void __stdcall FUN_10170340(int *param_1)

{
  SCStr *ghidra_this;
  uint uVar1;
  undefined1 *puVar2;
  
  ghidra_this = (SCStr *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot5();
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)ghidra_this != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)ghidra_this;
  }
  uVar1 = (ghidra_this)->length();
  (*DAT_121a06d8)(puVar2,uVar1);
  return;
}


// Reference entry 10170380; body size 41 bytes.
#line 1 "ENTRY_10170380"

void __stdcall FUN_10170380(int *param_1)

{
  SCStr *ghidra_this;
  uint uVar1;
  undefined1 *puVar2;
  
  ghidra_this = (SCStr *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot9();
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)ghidra_this != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)ghidra_this;
  }
  uVar1 = (ghidra_this)->length();
  (*DAT_121a06d8)(puVar2,uVar1);
  return;
}


// Reference entry 101703d0; body size 41 bytes.
#line 1 "ENTRY_101703d0"

void __stdcall FUN_101703d0(int *param_1)

{
  SCStr *ghidra_this;
  uint uVar1;
  undefined1 *puVar2;
  
  ghidra_this = (SCStr *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot7();
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)ghidra_this != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)ghidra_this;
  }
  uVar1 = (ghidra_this)->length();
  (*DAT_121a06d8)(puVar2,uVar1);
  return;
}


// Reference entry 10170410; body size 41 bytes.
#line 1 "ENTRY_10170410"

void __stdcall FUN_10170410(int *param_1)

{
  SCStr *ghidra_this;
  uint uVar1;
  undefined1 *puVar2;
  
  ghidra_this = (SCStr *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot8();
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)ghidra_this != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)ghidra_this;
  }
  uVar1 = (ghidra_this)->length();
  (*DAT_121a06d8)(puVar2,uVar1);
  return;
}


// Reference entry 101aaa70; body size 90 bytes.
#line 1 "ENTRY_101aaa70"



SCStr * Recovered_101aaa70::FUN_101aaa70(SCStr *param_2)

{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;
  int iVar2;
  
  if (param_2 != param_1) {
    (param_1)->int_release();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    (param_1)->int_addref();
  }
  iVar2 = *(int *)((SCStr *)((char *)param_2 + (4)));
  if (iVar2 != *(int *)((SCStr *)((char *)param_1 + (4)))) {
    piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
      *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
      iVar2 = *(int *)((SCStr *)((char *)param_2 + (4)));
    }
    *(int *)((SCStr *)((char *)param_1 + (4))) = iVar2;
    piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
    *(int **)((SCStr *)((char *)param_1 + (8))) = piVar1;
    if (piVar1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
    }
  }
  return param_1;
}


// Reference entry 101d40d0; body size 144 bytes.
#line 1 "ENTRY_101d40d0"

int Recovered_101d40d0::FUN_101d40d0(int param_2)

{
  int param_1 = (int)this;
  SCStr *pSVar1;
  int *piVar2;
  int iVar3;
  
  pSVar1 = (SCStr *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  if ((SCStr *)(param_2 + 0xc) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0xc);
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x10);
  if ((SCStr *)(param_2 + 0x10) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x10);
    (pSVar1)->int_addref();
  }
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 != *(int *)(param_1 + 0x14)) {
    piVar2 = *(int **)(param_1 + 0x18);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
      iVar3 = *(int *)(param_2 + 0x14);
    }
    *(int *)(param_1 + 0x14) = iVar3;
    piVar2 = *(int **)(param_2 + 0x18);
    *(int **)(param_1 + 0x18) = piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
    }
  }
  return param_1;
}


// Reference entry 101dd860; body size 119 bytes.
#line 1 "ENTRY_101dd860"

undefined4 * Recovered_101dd860::FUN_101dd860(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionNoArgDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 101e55f0; body size 91 bytes.
#line 1 "ENTRY_101e55f0"

void __fastcall FUN_101e55f0(SCStr *param_1)

{
  int *piVar1;
  
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 2;
  (param_1)->format((char *)((SCStr *)((char *)param_1 + (0x10))));
  if (*(int *)((SCStr *)((char *)param_1 + (0x14))) != 0) {
    piVar1 = *(int **)((SCStr *)((char *)param_1 + (0x18)));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)((SCStr *)((char *)param_1 + (0x14))) = 0;
      *(undefined4 *)((SCStr *)((char *)param_1 + (0x18))) = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x14))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x18))) = 0;
  }
  return;
}


// Reference entry 101e5720; body size 81 bytes.
#line 1 "ENTRY_101e5720"

void __fastcall FUN_101e5720(SCStr *param_1)

{
  int *piVar1;
  
  *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 1;
  (param_1)->format((char *)((SCStr *)((char *)param_1 + (0x10))));
  if (*(int *)((SCStr *)((char *)param_1 + (0x14))) != 0) {
    piVar1 = *(int **)((SCStr *)((char *)param_1 + (0x18)));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)((SCStr *)((char *)param_1 + (0x14))) = 0;
      *(undefined4 *)((SCStr *)((char *)param_1 + (0x18))) = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x14))) = 0;
    *(undefined4 *)((SCStr *)((char *)param_1 + (0x18))) = 0;
  }
  return;
}


// Reference entry 101e5ff0; body size 93 bytes.
#line 1 "ENTRY_101e5ff0"

void Recovered_101e5ff0::FUN_101e5ff0(SCStr *param_2)

{
  int param_1 = (int)this;
  SCStr *ghidra_this;
  int *piVar1;
  
  ghidra_this = (SCStr *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 8) = 3;
  if (param_2 != ghidra_this) {
    (ghidra_this)->int_release();
    *(undefined4 *)ghidra_this = *(undefined4 *)param_2;
    (ghidra_this)->int_addref();
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


// Reference entry 101f3310; body size 271 bytes.
#line 1 "ENTRY_101f3310"

void Recovered_101f3310::FUN_101f3310(int param_2)

{
  int param_1 = (int)this;
  SCStr *pSVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int aiStack_1c [3];
  
  pSVar1 = (SCStr *)(param_1 + 0x50);
  aiStack_1c[0] = param_1;
  if ((SCStr *)(param_2 + 4) != pSVar1) {
    aiStack_1c[2] = 0x101f332b;
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 4);
    aiStack_1c[2] = 0x101f3337;
    (pSVar1)->int_addref();
    aiStack_1c[0] = extraout_ECX;
  }
  pSVar1 = (SCStr *)(param_1 + 0x54);
  if ((SCStr *)(param_2 + 8) != pSVar1) {
    aiStack_1c[2] = 0x101f3348;
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 8);
    aiStack_1c[2] = 0x101f3354;
    (pSVar1)->int_addref();
    aiStack_1c[0] = extraout_ECX_00;
  }
  pSVar1 = (SCStr *)(param_1 + 0x58);
  if ((SCStr *)(param_2 + 0xc) != pSVar1) {
    aiStack_1c[2] = 0x101f3365;
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0xc);
    aiStack_1c[2] = 0x101f3371;
    (pSVar1)->int_addref();
    aiStack_1c[0] = extraout_ECX_01;
  }
  pSVar1 = (SCStr *)(param_1 + 0x5c);
  if ((SCStr *)(param_2 + 0x10) != pSVar1) {
    aiStack_1c[2] = 0x101f3382;
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x10);
    aiStack_1c[2] = 0x101f338e;
    (pSVar1)->int_addref();
    aiStack_1c[0] = extraout_ECX_02;
  }
  pSVar1 = (SCStr *)(param_1 + 0x60);
  if ((SCStr *)(param_2 + 0x14) != pSVar1) {
    aiStack_1c[2] = 0x101f339f;
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x14);
    aiStack_1c[2] = 0x101f33ab;
    (pSVar1)->int_addref();
    aiStack_1c[0] = extraout_ECX_03;
  }
  pSVar1 = (SCStr *)(param_1 + 100);
  if ((SCStr *)(param_2 + 0x18) != pSVar1) {
    aiStack_1c[2] = 0x101f33bc;
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x18);
    aiStack_1c[2] = 0x101f33c8;
    (pSVar1)->int_addref();
    aiStack_1c[0] = extraout_ECX_04;
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 != *(int *)(param_1 + 0x68)) {
    piVar2 = *(int **)(param_1 + 0x6c);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      aiStack_1c[2] = 0x101f33ea;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
      iVar3 = *(int *)(param_2 + 0x1c);
    }
    *(int *)(param_1 + 0x68) = iVar3;
    piVar2 = *(int **)(param_2 + 0x20);
    *(int **)(param_1 + 0x6c) = piVar2;
    aiStack_1c[0] = 0;
    if (piVar2 != (int *)0x0) {
      aiStack_1c[2] = 0x101f33ff;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
      aiStack_1c[0] = extraout_ECX_05;
    }
  }
  aiStack_1c[2] = 0;
  aiStack_1c[1] = 0;
  ((SCStr *)aiStack_1c)->int_allocRep("SCISettingsMenu:onUrlChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 1020f4f0; body size 217 bytes.
#line 1 "ENTRY_1020f4f0"

int * Recovered_1020f4f0::FUN_1020f4f0(int *param_2,uint param_3)

{
  int * param_1 = (int *)this;
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uStack_18;
  int *piStack_14;
  uint uStack_10;
  
  if (*(char *)((int)param_1 + 0xc5) != '\0') {
    uStack_10 = 0x1020f506;
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot37();
    uStack_10 = 0;
    piStack_14 = param_1;
    ((SCStr *)&uStack_18)->int_allocRep("SCIBrowseDataSource:onInvalidation");
    thunk_FUN_103d63d0();
    *(undefined1 *)((int)param_1 + 0x41) = 0;
  }
  uStack_10 = 0x1020f52e;
  cVar2 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot79();
  if (cVar2 != '\0') {
    uStack_10 = 0x1020f53c;
    uVar3 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot47();
    if (param_3 < uVar3) {
      param_1[0x85] = param_3;
      if (param_3 != 0) {
        piVar1 = (int *)param_1[0x2b];
        *param_2 = (int)piVar1;
        if (piVar1 == (int *)0x0) {
          return param_2;
        }
        uStack_10 = 0x1020f579;
        ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
        return param_2;
      }
      piVar1 = (int *)param_1[0x1a];
      *param_2 = (int)piVar1;
      if (piVar1 == (int *)0x0) {
        return param_2;
      }
      uStack_10 = 0x1020f560;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
      return param_2;
    }
    uStack_10 = 0x1020f58b;
    iVar4 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot47();
    param_3 = param_3 - iVar4;
  }
  param_1[0x85] = param_3;
  if (param_3 <= (uint)param_1[0x32]) {
    piStack_14 = param_2;
    uStack_18 = 0x1020f5c1;
    uStack_10 = param_3;
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot101();
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 10217c80; body size 52 bytes.
#line 1 "ENTRY_10217c80"



void __fastcall FUN_10217c80(int *param_1)

{
  SCStr aSStack_14 [4];
  int *piStack_10;
  undefined4 uStack_c;
  
  if (*(char *)((int)param_1 + 0xc5) != '\0') {
    uStack_c = 0x10217c95;
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot37();
    uStack_c = 0;
    piStack_10 = param_1;
    (aSStack_14)->int_allocRep("SCIBrowseDataSource:onInvalidation");
    thunk_FUN_103d63d0();
    *(undefined1 *)((int)param_1 + 0x41) = 0;
  }
  return;
}


// Reference entry 10219650; body size 75 bytes.
#line 1 "ENTRY_10219650"

void __fastcall FUN_10219650(int *param_1)

{
  SCStr aSStack_18 [4];
  int *piStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x32] = 0;
  uStack_10 = 0x1021967c;
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot69();
  uStack_10 = 0;
  piStack_14 = param_1;
  (aSStack_18)->int_allocRep("SCIBrowseDataSource:onInvalidation");
  thunk_FUN_103d63d0();
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  return;
}


// Reference entry 1021b200; body size 58 bytes.
#line 1 "ENTRY_1021b200"

undefined1 __fastcall FUN_1021b200(int *param_1)

{
  SCStr aSStack_14 [4];
  int *piStack_10;
  undefined4 uStack_c;
  
  if (*(char *)((int)param_1 + 0xc5) != '\0') {
    uStack_c = 0x1021b215;
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot37();
    uStack_c = 0;
    piStack_10 = param_1;
    (aSStack_14)->int_allocRep("SCIBrowseDataSource:onInvalidation");
    thunk_FUN_103d63d0();
    *(undefined1 *)((int)param_1 + 0x41) = 0;
  }
  return (char)param_1[0x31];
}


// Reference entry 1021ddb0; body size 89 bytes.
#line 1 "ENTRY_1021ddb0"

void __fastcall FUN_1021ddb0(int param_1)

{
  char cVar1;
  SCStr aSStack_14 [4];
  int *piStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0x1021ddbe;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x20))();
  if (cVar1 == '\0') {
    uStack_c = 0x1021ddd8;
    cVar1 = ((RecoveredVirtualSlots *)(param_1 + -600))->VirtualSlot36();
    if (cVar1 != '\0') {
      uStack_c = 0;
      piStack_10 = (int *)(param_1 + -600);
      (aSStack_14)->int_allocRep("SCIBrowseDataSource:onInvalidation");
      thunk_FUN_103d65f0();
      *(undefined1 *)(param_1 + -0x217) = 0;
      uStack_c = 0;
      piStack_10 = (int *)0x1021de04;
      ((RecoveredVirtualSlots *)(param_1 + -600))->VirtualSlot68();
    }
  }
  return;
}


// Reference entry 1021de40; body size 191 bytes.
#line 1 "ENTRY_1021de40"

void __fastcall FUN_1021de40(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uStack_18;
  int *piStack_14;
  
  thunk_FUN_110828b0();
  piStack_14 = (int *)0x1021de5c;
  bVar1 = ((SCStr *)(param_1 + 0x2e))->operator==("X-Sonos-Universal-Search-Service");
  if (!bVar1) {
    piStack_14 = (int *)0x1021de70;
    bVar1 = ((SCStr *)(param_1 + 0x2e))->operator==("X-Sonos-Universal-Search-Resource");
    if (!bVar1) {
      piStack_14 = (int *)&DAT_1186d2ee;
      if ((undefined1 *)param_1[0x2e] != (undefined1 *)0x0) {
        piStack_14 = (int *)param_1[0x2e];
      }
      uStack_18 = 0x1021de8e;
      iVar3 = thunk_FUN_11093530();
      if (iVar3 == 0) {
        thunk_FUN_10219650();
        return;
      }
    }
  }
  piStack_14 = (int *)0x1021deab;
  thunk_FUN_104d9d00();
  cVar2 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot23();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(param_1[0x20] + 0x14))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(param_1[0x20] + 0x18))();
      if (cVar2 != '\0') {
        piStack_14 = param_1;
        ((SCStr *)&uStack_18)->int_allocRep("SCIBrowseDataSource:onPowerscrollInfo");
        thunk_FUN_103d63d0();
      }
    }
  }
  return;
}


// Reference entry 1021e7e0; body size 50 bytes.
#line 1 "ENTRY_1021e7e0"

void __fastcall FUN_1021e7e0(undefined4 *param_1)

{
  undefined4 *puStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = param_1[4];
  param_1[9] = 0;
  uStack_10 = param_1[2];
  puStack_14 = param_1;
  new ((SCStr *)&puStack_14) SCStr(*((SCStr *)(param_1 + 1)));
  thunk_FUN_103d65f0();
  uStack_c = 1;
  uStack_10 = 0x1021e80d;
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot0();
  return;
}


// Reference entry 1021f010; body size 119 bytes.
#line 1 "ENTRY_1021f010"

undefined4 * Recovered_1021f010::FUN_1021f010(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionOnGroupDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 1021f0b0; body size 150 bytes.
#line 1 "ENTRY_1021f0b0"

undefined4 * Recovered_1021f0b0::FUN_1021f0b0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseMetadata");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0xe));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 1021f180; body size 157 bytes.
#line 1 "ENTRY_1021f180"

undefined4 * Recovered_1021f180::FUN_1021f180(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = param_1 + 0x21;
    }
    else {
      bVar1 = (param_3)->operator==("SCIPowerscrollDataSource");
      if (!bVar1) {
        bVar1 = (param_3)->operator==("SCIObj");
        if (!bVar1) {
          *param_2 = 0;
          return param_2;
        }
        *param_2 = (undefined4)param_1;
        if (param_1 == (int *)0x0) {
          return param_2;
        }
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
        return param_2;
      }
      piVar2 = param_1 + 0x20;
    }
    param_1 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)piVar2);
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 1021f270; body size 201 bytes.
#line 1 "ENTRY_1021f270"

int * Recovered_1021f270::FUN_1021f270(int *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCITooltip");
    if (bVar1) {
      piVar2 = param_1 + 0x10;
    }
    else {
      bVar1 = (param_3)->operator==("SCIBrowseMetadata");
      if (!bVar1) {
        bVar1 = (param_3)->operator==("SCISelectableItem");
        if ((bVar1) && ((char)param_1[0x42] != '\0')) {
          param_1 = param_1 + 0xf;
          *param_2 = (int)param_1;
          if (param_1 == (int *)0x0) {
            return param_2;
          }
          ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
          return param_2;
        }
        bVar1 = (param_3)->operator==("SCIObj");
        if (!bVar1) {
          *param_2 = 0;
          return param_2;
        }
        *param_2 = (int)param_1;
        if (param_1 == (int *)0x0) {
          return param_2;
        }
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
        return param_2;
      }
      piVar2 = param_1 + 0xe;
    }
    param_1 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)piVar2);
  }
  *param_2 = (int)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 1021f420; body size 150 bytes.
#line 1 "ENTRY_1021f420"

undefined4 * Recovered_1021f420::FUN_1021f420(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIActionDelegate");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 2));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 1021f570; body size 119 bytes.
#line 1 "ENTRY_1021f570"

undefined4 * Recovered_1021f570::FUN_1021f570(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAddToQueueAtNumberDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10258f00; body size 90 bytes.
#line 1 "ENTRY_10258f00"



SCStr * Recovered_10258f00::FUN_10258f00(SCStr *param_2)

{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;
  int iVar2;
  
  if (param_2 != param_1) {
    (param_1)->int_release();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    (param_1)->int_addref();
  }
  iVar2 = *(int *)((SCStr *)((char *)param_2 + (4)));
  if (iVar2 != *(int *)((SCStr *)((char *)param_1 + (4)))) {
    piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
      *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
      iVar2 = *(int *)((SCStr *)((char *)param_2 + (4)));
    }
    *(int *)((SCStr *)((char *)param_1 + (4))) = iVar2;
    piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
    *(int **)((SCStr *)((char *)param_1 + (8))) = piVar1;
    if (piVar1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
    }
  }
  return param_1;
}


// Reference entry 10261e70; body size 26 bytes.
#line 1 "ENTRY_10261e70"

bool Recovered_10261e70::FUN_10261e70(SCStr *param_2)

{
  int * param_1 = (int *)this;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot8();
  uVar2 = (param_2)->utf8_length();
  return uVar2 <= uVar1;
}


// Reference entry 102620d0; body size 53 bytes.
#line 1 "ENTRY_102620d0"

bool Recovered_102620d0::FUN_102620d0(SCStr *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  
  if (((char)param_1[6] == '\0') &&
     ((*(char **)param_2 == (char *)0x0 || (**(char **)param_2 == '\0')))) {
    return false;
  }
  iVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot8();
  uVar2 = (param_2)->utf8_length();
  return (int)uVar2 <= iVar1;
}


// Reference entry 10262390; body size 135 bytes.
#line 1 "ENTRY_10262390"

undefined4 * Recovered_10262390::FUN_10262390(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIStringInput");
  if (((bVar1) || (bVar1 = (param_3)->operator==("SCIStringInputBase"), bVar1)) ||
     (bVar1 = (param_3)->operator==("SCIInput"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10262440; body size 135 bytes.
#line 1 "ENTRY_10262440"

undefined4 * Recovered_10262440::FUN_10262440(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIStringInput");
  if (((bVar1) || (bVar1 = (param_3)->operator==("SCIStringInputBase"), bVar1)) ||
     (bVar1 = (param_3)->operator==("SCIInput"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 102678c0; body size 145 bytes.
#line 1 "ENTRY_102678c0"

void Recovered_102678c0::FUN_102678c0(undefined4 *param_2,int param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  undefined4 uStack_14;
  char *pcStack_10;
  undefined1 *puStack_c;
  
  iVar1 = *param_1;
  piVar2 = *(int **)(iVar1 + 0x70);
  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x70) = 0;
    puStack_c = (undefined1 *)0x102678e0;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
  }
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  if (param_3 == 0) {
    puStack_c = &DAT_1186d2ee;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puStack_c = (undefined1 *)*param_2;
    }
    pcStack_10 = "Successfully purchased product with SKU: %s";
    uStack_14 = 4;
    thunk_FUN_112af4e0("SCLandingPagePremiumSonosRadio");
    puStack_c = (undefined1 *)0x0;
    pcStack_10 = (char *)0x0;
    ((SCStr *)&uStack_14)->int_allocRep("SCILandingPage:onDismiss");
    thunk_FUN_103d65f0();
    return;
  }
  if (param_3 != 0xe) {
    puStack_c = (undefined1 *)param_3;
    pcStack_10 = (char *)param_2;
    uStack_14 = 0x1026794c;
    thunk_FUN_1026ca70();
  }
  return;
}


// Reference entry 10268730; body size 151 bytes.
#line 1 "ENTRY_10268730"

void Recovered_10268730::FUN_10268730(undefined4 *param_2,int *param_3)

{
  int param_1 = (int)this;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_18;
  char *pcStack_14;
  undefined1 *puStack_10;
  
  iVar1 = *param_3;
  iVar2 = *(int *)(param_1 + 4);
  piVar3 = *(int **)(iVar2 + 0x70);
  if (piVar3 != (int *)0x0) {
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0x70) = 0;
    puStack_10 = (undefined1 *)0x10268758;
    ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
  }
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  if (iVar1 == 0) {
    puStack_10 = &DAT_1186d2ee;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puStack_10 = (undefined1 *)*param_2;
    }
    pcStack_14 = "Successfully purchased product with SKU: %s";
    uStack_18 = 4;
    thunk_FUN_112af4e0("SCLandingPagePremiumSonosRadio");
    pcStack_14 = (char *)iVar1;
    puStack_10 = (undefined1 *)iVar1;
    ((SCStr *)&uStack_18)->int_allocRep("SCILandingPage:onDismiss");
    thunk_FUN_103d65f0();
    return;
  }
  if (iVar1 != 0xe) {
    pcStack_14 = (char *)param_2;
    uStack_18 = 0x102687c1;
    puStack_10 = (undefined1 *)iVar1;
    thunk_FUN_1026ca70();
  }
  return;
}


// Reference entry 102921f0; body size 185 bytes.
#line 1 "ENTRY_102921f0"

SCStr * Recovered_102921f0::FUN_102921f0(SCStr *param_2)

{
  int * param_1 = (int *)this;
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot5();
  switch(uVar1) {
  case 0:
    pcVar2 = (char *)thunk_FUN_1109aba0(0x26f9,&DAT_11882ff0);
    (param_2)->int_allocRep(pcVar2);
    return param_2;
  case 1:
    pcVar2 = (char *)thunk_FUN_1109aba0(0x26fa,&DAT_11882ff0);
    (param_2)->int_allocRep(pcVar2);
    return param_2;
  case 2:
    pcVar2 = (char *)thunk_FUN_1109aba0(0x26fb,&DAT_11882ff0);
    (param_2)->int_allocRep(pcVar2);
    return param_2;
  case 3:
    pcVar2 = (char *)thunk_FUN_1109aba0(0x26fc,&DAT_11882ff0);
    (param_2)->int_allocRep(pcVar2);
    return param_2;
  default:
    (param_2)->int_allocRep((char *)0x0);
    return param_2;
  }
}


// Reference entry 102922f0; body size 125 bytes.
#line 1 "ENTRY_102922f0"

SCStr * Recovered_102922f0::FUN_102922f0(SCStr *param_2)

{
  int * param_1 = (int *)this;
  undefined4 uVar1;
  
  uVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot5();
  switch(uVar1) {
  case 0:
    (param_2)->int_allocRep("Error");
    return param_2;
  case 1:
    (param_2)->int_allocRep("Warning");
    return param_2;
  case 2:
    (param_2)->int_allocRep("Info");
    return param_2;
  case 3:
    (param_2)->int_allocRep("Operational");
    return param_2;
  default:
    (param_2)->int_allocRep((char *)0x0);
    return param_2;
  }
}


// Reference entry 102aa8a0; body size 318 bytes.
#line 1 "ENTRY_102aa8a0"

int Recovered_102aa8a0::FUN_102aa8a0(int param_2)

{
  int param_1 = (int)this;
  SCStr *pSVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  iVar4 = *(int *)(param_2 + 0x2c);
  if (iVar4 != *(int *)(param_1 + 0x2c)) {
    piVar3 = *(int **)(param_1 + 0x30);
    if (piVar3 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot2();
      iVar4 = *(int *)(param_2 + 0x2c);
    }
    *(int *)(param_1 + 0x2c) = iVar4;
    piVar3 = *(int **)(param_2 + 0x30);
    *(int **)(param_1 + 0x30) = piVar3;
    if (piVar3 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot1();
    }
  }
  pSVar1 = (SCStr *)(param_1 + 0x34);
  if ((SCStr *)(param_2 + 0x34) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x34);
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x38);
  if ((SCStr *)(param_2 + 0x38) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x38);
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x3c);
  if ((SCStr *)(param_2 + 0x3c) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x3c);
    (pSVar1)->int_addref();
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  pSVar1 = (SCStr *)(param_1 + 0x44);
  if ((SCStr *)(param_2 + 0x44) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x44);
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x48);
  if ((SCStr *)(param_2 + 0x48) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x48);
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x4c);
  if ((SCStr *)(param_2 + 0x4c) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x4c);
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x50);
  if ((SCStr *)(param_2 + 0x50) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x50);
    (pSVar1)->int_addref();
  }
  return param_1;
}


// Reference entry 102b8a60; body size 150 bytes.
#line 1 "ENTRY_102b8a60"

undefined4 * Recovered_102b8a60::FUN_102b8a60(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCICompositeSearchable");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchable");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 1));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 102c9c70; body size 150 bytes.
#line 1 "ENTRY_102c9c70"

undefined4 * Recovered_102c9c70::FUN_102c9c70(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIActionContext");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIEventSink");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0xb));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 102c9d40; body size 135 bytes.
#line 1 "ENTRY_102c9d40"

undefined4 * Recovered_102c9d40::FUN_102c9d40(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionSelectableDescriptor");
  if (((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) ||
     (bVar1 = (param_3)->operator==("SCIActionNoArgDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 102f70f0; body size 77 bytes.
#line 1 "ENTRY_102f70f0"

SCStr * Recovered_102f70f0::FUN_102f70f0(SCStr *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  
  iVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot61();
  if (iVar1 == 0) {
    (param_2)->int_allocRep("Supported");
    return param_2;
  }
  if (iVar1 != 1) {
    (param_2)->int_allocRep("Invalid");
    return param_2;
  }
  (param_2)->int_allocRep("Unsupported");
  return param_2;
}


// Reference entry 102fe680; body size 150 bytes.
#line 1 "ENTRY_102fe680"

undefined4 * Recovered_102fe680::FUN_102fe680(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIActionDelegate");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 2));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10321920; body size 191 bytes.
#line 1 "ENTRY_10321920"

SCStr * Recovered_10321920::FUN_10321920(SCStr *param_2)

{
  int * param_1 = (int *)this;
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot44();
  switch(uVar1) {
  case 0:
    pcVar2 = (char *)thunk_FUN_1109aba0(0x2671,&DAT_11882ff0);
    (param_2)->int_allocRep(pcVar2);
    return param_2;
  case 1:
    pcVar2 = (char *)thunk_FUN_1109aba0(0x2670,&DAT_11882ff0);
    (param_2)->int_allocRep(pcVar2);
    return param_2;
  case 2:
    pcVar2 = (char *)thunk_FUN_1109aba0(0x266f,&DAT_11882ff0);
    (param_2)->int_allocRep(pcVar2);
    return param_2;
  case 3:
    pcVar2 = (char *)thunk_FUN_1109aba0(0x266e,&DAT_11882ff0);
    (param_2)->int_allocRep(pcVar2);
    return param_2;
  default:
    (param_2)->int_allocRep("");
    return param_2;
  }
}


// Reference entry 10323df0; body size 58 bytes.
#line 1 "ENTRY_10323df0"

SCStr * Recovered_10323df0::FUN_10323df0(SCStr *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  char *pcVar2;
  
  if ((*(int *)(param_1 + 8) != 0) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x1c), piVar1 != (int *)0x0)) {
    pcVar2 = (char *)((RecoveredVirtualSlots *)(piVar1))->VirtualSlot7();
    (param_2)->int_allocRep(pcVar2);
    return param_2;
  }
  (param_2)->int_allocRep("");
  return param_2;
}


// Reference entry 10391510; body size 117 bytes.
#line 1 "ENTRY_10391510"

void Recovered_10391510::FUN_10391510(int param_2)

{
  int param_1 = (int)this;
  char cVar1;
  undefined4 uVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *piStack_10;
  int iStack_c;
  char *pcStack_8;
  
  piStack_10 = *(int **)(param_1 + 0x2c);
  if ((int *)(-(uint)(param_2 != 0) & param_2 + 0xcU) == piStack_10) {
    if (*(int *)(param_1 + 0x78) == -1) {
      pcStack_8 = (char *)0x10391534;
      cVar1 = ((RecoveredVirtualSlots *)(piStack_10))->VirtualSlot26();
      piStack_10 = extraout_ECX;
      if (cVar1 != '\0') {
        pcStack_8 = (char *)0x7d0;
        iStack_c = 0x10391545;
        uVar2 = thunk_FUN_1059d5a0();
        *(undefined4 *)(param_1 + 0x78) = uVar2;
        piStack_10 = extraout_ECX_00;
      }
    }
    pcStack_8 = (char *)0x0;
    iStack_c = param_1 + -0x9c;
    ((SCStr *)&piStack_10)->int_allocRep("SCIHousehold:onUpdateManifestParsed");
    thunk_FUN_103d65f0();
    return;
  }
  pcStack_8 = "Received an event from an adapter that wasn\'t assigned to us.";
  iStack_c = 1;
  piStack_10 = (int *)0x118979c8;
  thunk_FUN_112af4e0();
  return;
}


// Reference entry 103936d0; body size 61 bytes.
#line 1 "ENTRY_103936d0"

void __fastcall FUN_103936d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  SCStr *pSVar2;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  pSVar2 = (SCStr *)param_1[1];
  puVar1 = param_1;
  if (pSVar2 != (SCStr *)param_1[2]) {
    do {
      uStack_10 = *(undefined4 *)((SCStr *)((char *)pSVar2 + (0xc)));
      uStack_14 = *(undefined4 *)((SCStr *)((char *)pSVar2 + (4)));
      puStack_18 = puVar1;
      new ((SCStr *)&puStack_18) SCStr(*(pSVar2));
      thunk_FUN_103d65f0();
      pSVar2 = pSVar2 + 0x18;
      puVar1 = extraout_ECX;
    } while (pSVar2 != (SCStr *)param_1[2]);
  }
  uStack_10 = 1;
  uStack_14 = 0x10393707;
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot0();
  return;
}


// Reference entry 10440860; body size 139 bytes.
#line 1 "ENTRY_10440860"

SCStr * FUN_10440860(SCStr *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  iVar2 = thunk_FUN_101f08d0();
  if (iVar2 != 0x40) {
    iVar2 = thunk_FUN_101f08d0();
    if (iVar2 != 0x200) {
      piVar3 = (int *)thunk_FUN_110828b0();
      if (piVar3 != (int *)0x0) {
        cVar1 = ((RecoveredVirtualSlots *)(piVar3))->VirtualSlot15();
        if (cVar1 != '\0') {
          pcVar4 = (char *)thunk_FUN_1109aba0(0x25cb,&DAT_11882ff0);
          (param_1)->int_allocRep(pcVar4);
          return param_1;
        }
      }
      pcVar4 = (char *)thunk_FUN_1109aba0(0x25cc,&DAT_11882ff0);
      (param_1)->int_allocRep(pcVar4);
      return param_1;
    }
  }
  (param_1)->int_allocRep("");
  return param_1;
}


// Reference entry 104d8330; body size 51 bytes.
#line 1 "ENTRY_104d8330"

void Recovered_104d8330::FUN_104d8330(undefined4 param_2)

{
  int * param_1 = (int *)this;
  char cVar1;
  SCStr aSStack_10 [4];
  int *piStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x104d833d;
  cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot63();
  if (cVar1 == '\0') {
    uStack_8 = param_2;
    piStack_c = param_1;
    (aSStack_10)->int_allocRep("SCIBrowseDataSource:onBrowseChanged");
    thunk_FUN_103d65f0();
  }
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  return;
}


// Reference entry 104d8370; body size 51 bytes.
#line 1 "ENTRY_104d8370"

void Recovered_104d8370::FUN_104d8370(undefined4 param_2)

{
  int * param_1 = (int *)this;
  char cVar1;
  SCStr aSStack_10 [4];
  int *piStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x104d837d;
  cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot63();
  if (cVar1 == '\0') {
    uStack_8 = param_2;
    piStack_c = param_1;
    (aSStack_10)->int_allocRep("SCIBrowseDataSource:onBrowseChanged");
    thunk_FUN_103d63d0();
  }
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  return;
}


// Reference entry 104d9880; body size 78 bytes.
#line 1 "ENTRY_104d9880"

void Recovered_104d9880::FUN_104d9880(undefined4 param_2)

{
  int param_1 = (int)this;
  char cVar1;
  SCStr aSStack_1c [4];
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = param_2;
  uStack_10 = 0x104d9898;
  cVar1 = ((RecoveredVirtualSlots *)(param_1 + -0x28))->VirtualSlot65();
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x18) == '\0')) {
    uStack_10 = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
    uStack_14 = 0x104d98b1;
    ((RecoveredVirtualSlots *)(param_1 + -0x28))->VirtualSlot69();
    uStack_14 = 0;
    piStack_18 = (int *)(param_1 + -0x28);
    (aSStack_1c)->int_allocRep("SCIBrowseDataSource:onInvalidation");
    thunk_FUN_103d63d0();
  }
  return;
}


// Reference entry 104ff770; body size 60 bytes.
#line 1 "ENTRY_104ff770"

undefined4 * Recovered_104ff770::FUN_104ff770(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 104ff840; body size 60 bytes.
#line 1 "ENTRY_104ff840"

undefined4 * Recovered_104ff840::FUN_104ff840(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 10507800; body size 68 bytes.
#line 1 "ENTRY_10507800"

SCStr * Recovered_10507800::FUN_10507800(SCStr *param_2,undefined4 param_3)

{
  int * param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  
  cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot8();
  if (cVar1 != '\0') {
    piVar2 = (int *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot14();
    (**(code **)(*piVar2 + 0x174))(param_2,param_3);
    return param_2;
  }
  (param_2)->int_allocRep("");
  return param_2;
}


// Reference entry 10507860; body size 64 bytes.
#line 1 "ENTRY_10507860"

SCStr * Recovered_10507860::FUN_10507860(SCStr *param_2)

{
  int * param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  
  cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot8();
  if (cVar1 != '\0') {
    piVar2 = (int *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot14();
    (**(code **)(*piVar2 + 0x178))(param_2);
    return param_2;
  }
  (param_2)->int_allocRep("");
  return param_2;
}


// Reference entry 10509680; body size 142 bytes.
#line 1 "ENTRY_10509680"

void Recovered_10509680::FUN_10509680(SCStr *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  SCStr *local_408;
  char acStack_404 [1024];
  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_408;
  local_408 = param_2;
  iVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot96();
  uVar6 = 0x400;
  uVar4 = (uint)*(ushort *)(iVar1 + 8);
  puVar2 = &DAT_1186d2ee;
  if ((undefined1 *)param_1[0x27] != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)param_1[0x27];
  }
  puVar3 = &DAT_1186d2ee;
  if ((undefined1 *)param_1[0x28] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)param_1[0x28];
  }
  pcVar5 = acStack_404;
  thunk_FUN_1109f7f0(uVar4,puVar3,puVar2,pcVar5,0x400);
  thunk_FUN_110a48f0(uVar4,puVar3,puVar2,pcVar5,uVar6);
  (param_2)->int_allocRep(acStack_404);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1050b420; body size 68 bytes.
#line 1 "ENTRY_1050b420"

undefined4 * Recovered_1050b420::FUN_1050b420(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    if (param_1 == (int *)&DAT_00000004) {
      param_1 = (int *)0x0;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 1051a400; body size 105 bytes.
#line 1 "ENTRY_1051a400"



void Recovered_1051a400::FUN_1051a400(int *param_2)

{
  int * param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  SCStr aSStack_14 [4];
  int *piStack_10;
  undefined4 uStack_c;
  
  if ((param_2 != (int *)0x0) && ((int *)param_1[0xc] != param_2)) {
    piVar2 = (int *)param_1[0xd];
    if (piVar2 != (int *)0x0) {
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      uStack_c = 0x1051a42b;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    param_1[0xc] = (int)param_2;
    uStack_c = 0x1051a435;
    piVar2 = (int *)((RecoveredVirtualSlots *)(param_2))->VirtualSlot3();
    param_1[0xd] = (int)piVar2;
    uStack_c = 0x1051a43f;
    ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
    uStack_c = 0x1051a448;
    cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot8();
    if (cVar1 != '\0') {
      uStack_c = 0;
      piStack_10 = param_1;
      (aSStack_14)->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
      thunk_FUN_103d65f0();
    }
  }
  return;
}


// Reference entry 10524730; body size 106 bytes.
#line 1 "ENTRY_10524730"

undefined4 * Recovered_10524730::FUN_10524730(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOperationProgress");
  if (bVar1) {
    param_1 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x12));
  }
  else {
    bVar1 = (param_3)->operator==("SCIOp");
    if ((!bVar1) && (bVar1 = (param_3)->operator==("SCIObj"), !bVar1)) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (undefined4)param_1;
  if (param_1 != (int *)0x0) {
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  }
  return param_2;
}


// Reference entry 10541b60; body size 48 bytes.
#line 1 "ENTRY_10541b60"

undefined4 Recovered_10541b60::FUN_10541b60(SCStr *param_2)

{
  int * param_1 = (int *)this;
  uint uVar1;
  uint uVar2;
  
  if ((*(char **)param_2 != (char *)0x0) && (**(char **)param_2 != '\0')) {
    uVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot8();
    uVar2 = (param_2)->length();
    if (uVar2 <= uVar1) {
      return 1;
    }
  }
  return 0;
}


// Reference entry 10545390; body size 119 bytes.
#line 1 "ENTRY_10545390"

undefined4 * Recovered_10545390::FUN_10545390(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIServiceAppInteropResponseDelegate");
  if (bVar1) {
    if (param_1 == (int *)&DAT_0000000c) {
      param_1 = (int *)0x0;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    if (param_1 == (int *)&DAT_0000000c) {
      param_1 = (int *)0x0;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10545430; body size 135 bytes.
#line 1 "ENTRY_10545430"

undefined4 * Recovered_10545430::FUN_10545430(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIStringInput");
  if (((bVar1) || (bVar1 = (param_3)->operator==("SCIStringInputBase"), bVar1)) ||
     (bVar1 = (param_3)->operator==("SCIInput"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 105454e0; body size 135 bytes.
#line 1 "ENTRY_105454e0"

undefined4 * Recovered_105454e0::FUN_105454e0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIStringInput");
  if (((bVar1) || (bVar1 = (param_3)->operator==("SCIStringInputBase"), bVar1)) ||
     (bVar1 = (param_3)->operator==("SCIInput"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10545590; body size 135 bytes.
#line 1 "ENTRY_10545590"

undefined4 * Recovered_10545590::FUN_10545590(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIStringInput");
  if (((bVar1) || (bVar1 = (param_3)->operator==("SCIStringInputBase"), bVar1)) ||
     (bVar1 = (param_3)->operator==("SCIInput"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 1054bd70; body size 85 bytes.
#line 1 "ENTRY_1054bd70"

void Recovered_1054bd70::FUN_1054bd70(SCStr *param_2)

{
  int * param_1 = (int *)this;
  char cVar1;
  char cVar2;
  SCStr *ghidra_this;
  
  cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot12();
  ghidra_this = (SCStr *)(param_1[2] + 0xf8);
  if (param_2 != ghidra_this) {
    (ghidra_this)->int_release();
    *(undefined4 *)ghidra_this = *(undefined4 *)param_2;
    (ghidra_this)->int_addref();
  }
  cVar2 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot12();
  if (cVar1 != cVar2) {
    (**(code **)(*(int *)param_1[2] + 0x88))();
  }
  return;
}


// Reference entry 1054bde0; body size 85 bytes.
#line 1 "ENTRY_1054bde0"

void Recovered_1054bde0::FUN_1054bde0(SCStr *param_2)

{
  int * param_1 = (int *)this;
  char cVar1;
  char cVar2;
  SCStr *ghidra_this;
  
  cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot12();
  ghidra_this = (SCStr *)(param_1[2] + 0x100);
  if (param_2 != ghidra_this) {
    (ghidra_this)->int_release();
    *(undefined4 *)ghidra_this = *(undefined4 *)param_2;
    (ghidra_this)->int_addref();
  }
  cVar2 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot12();
  if (cVar1 != cVar2) {
    (**(code **)(*(int *)param_1[2] + 0x88))();
  }
  return;
}


// Reference entry 1054be50; body size 85 bytes.
#line 1 "ENTRY_1054be50"

void Recovered_1054be50::FUN_1054be50(SCStr *param_2)

{
  int * param_1 = (int *)this;
  char cVar1;
  char cVar2;
  SCStr *ghidra_this;
  
  cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot12();
  ghidra_this = (SCStr *)(param_1[2] + 0xfc);
  if (param_2 != ghidra_this) {
    (ghidra_this)->int_release();
    *(undefined4 *)ghidra_this = *(undefined4 *)param_2;
    (ghidra_this)->int_addref();
  }
  cVar2 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot12();
  if (cVar1 != cVar2) {
    (**(code **)(*(int *)param_1[2] + 0x88))();
  }
  return;
}


// Reference entry 1054d4c0; body size 119 bytes.
#line 1 "ENTRY_1054d4c0"

undefined4 * Recovered_1054d4c0::FUN_1054d4c0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpLoadLogo");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIOp"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 105783d0; body size 119 bytes.
#line 1 "ENTRY_105783d0"

undefined4 * Recovered_105783d0::FUN_105783d0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAddToQueueAtNumberDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10578470; body size 119 bytes.
#line 1 "ENTRY_10578470"

undefined4 * Recovered_10578470::FUN_10578470(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionWithBoolDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 105a2ad0; body size 99 bytes.
#line 1 "ENTRY_105a2ad0"

SCStr * Recovered_105a2ad0::FUN_105a2ad0(SCStr *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  
  if (((char *)param_1[3] != (char *)0x0) && (*(char *)param_1[3] != '\0')) {
    new (param_2) SCStr(*((SCStr *)(param_1 + 3)));
    return param_2;
  }
  iVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot4();
  if (iVar1 != 0) {
    iVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot4();
    new (param_2) SCStr(*((SCStr *)(iVar1 + 0xc)));
    return param_2;
  }
  iVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot6();
  new (param_2) SCStr(*((SCStr *)(iVar1 + 0xc)));
  return param_2;
}


// Reference entry 105b24a0; body size 120 bytes.
#line 1 "ENTRY_105b24a0"

void Recovered_105b24a0::FUN_105b24a0(int param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  
  bVar3 = (param_3)->operator==("SCIController:onConnectivityStateChanged");
  if ((bVar3) && (param_2 != 0)) {
    cVar4 = thunk_FUN_10242870();
    if (cVar4 != '\0') {
      *(undefined1 *)(*param_1 + 0x4a) = 0;
      cVar4 = thunk_FUN_103d6d80();
      if (cVar4 != '\0') {
        thunk_FUN_103d6e70();
      }
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0x70) != 0) {
        piVar2 = *(int **)(iVar1 + 0x74);
        if (piVar2 != (int *)0x0) {
          *(undefined4 *)(iVar1 + 0x70) = 0;
          *(undefined4 *)(iVar1 + 0x74) = 0;
          ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
        }
        *(undefined4 *)(iVar1 + 0x70) = 0;
        *(undefined4 *)(iVar1 + 0x74) = 0;
      }
    }
  }
  return;
}


// Reference entry 105b2bb0; body size 130 bytes.
#line 1 "ENTRY_105b2bb0"

void Recovered_105b2bb0::FUN_105b2bb0(int *param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  int iVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  
  iVar1 = *param_2;
  bVar3 = (param_3)->operator==("SCIController:onConnectivityStateChanged");
  if ((bVar3) && (iVar1 != 0)) {
    cVar4 = thunk_FUN_10242870();
    if (cVar4 != '\0') {
      *(undefined1 *)(*(int *)(param_1 + 4) + 0x4a) = 0;
      cVar4 = thunk_FUN_103d6d80();
      if (cVar4 != '\0') {
        thunk_FUN_103d6e70();
      }
      iVar1 = *(int *)(param_1 + 4);
      if (*(int *)(iVar1 + 0x70) != 0) {
        piVar2 = *(int **)(iVar1 + 0x74);
        if (piVar2 != (int *)0x0) {
          *(undefined4 *)(iVar1 + 0x70) = 0;
          *(undefined4 *)(iVar1 + 0x74) = 0;
          ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
        }
        *(undefined4 *)(iVar1 + 0x70) = 0;
        *(undefined4 *)(iVar1 + 0x74) = 0;
      }
    }
  }
  return;
}


// Reference entry 105b2c70; body size 77 bytes.
#line 1 "ENTRY_105b2c70"

void FUN_105b2c70(undefined4 *param_1,SCStr *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)*param_1;
  bVar2 = (param_2)->operator==("SCIAppSessionManager:onAppStateChanged");
  if (bVar2) {
    iVar3 = ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot7();
    if (iVar3 == 2) {
      uVar4 = 0;
      thunk_FUN_1023a9f0(0);
      thunk_FUN_105b5360(uVar4);
    }
    else if (iVar3 == 3) {
      iVar3 = thunk_FUN_1023a9f0();
      ((RecoveredVirtualSlots *)(iVar3 + 0x1c))->VirtualSlot2();
      return;
    }
  }
  return;
}


// Reference entry 105e7600; body size 155 bytes.
#line 1 "ENTRY_105e7600"



void Recovered_105e7600::FUN_105e7600(SCStr *param_2,SCStr *param_3,int *param_4,undefined4 param_5)

{
  int param_1 = (int)this;
  SCStr *pSVar1;
  int *piVar2;
  
  pSVar1 = (SCStr *)(param_1 + 0x14);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x18);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  if (param_4 != *(int **)(param_1 + 0x20)) {
    piVar2 = *(int **)(param_1 + 0x24);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
    }
    *(int **)(param_1 + 0x20) = param_4;
    if (param_4 != (int *)0x0) {
      piVar2 = (int *)((RecoveredVirtualSlots *)(param_4))->VirtualSlot3();
      *(int **)(param_1 + 0x24) = piVar2;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
      *(undefined4 *)(param_1 + 0x40) = param_5;
      return;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = param_5;
  return;
}


// Reference entry 106877d0; body size 60 bytes.
#line 1 "ENTRY_106877d0"

undefined4 * Recovered_106877d0::FUN_106877d0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 10687820; body size 60 bytes.
#line 1 "ENTRY_10687820"

undefined4 * Recovered_10687820::FUN_10687820(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 106a1a50; body size 120 bytes.
#line 1 "ENTRY_106a1a50"

undefined4 Recovered_106a1a50::FUN_106a1a50(int *param_2)

{
  int * param_1 = (int *)this;
  bool bVar1;
  SCStr *pSVar2;
  SCStr *pSVar3;
  
  bVar1 = ((SCStr *)(param_1 + 5))->operator==((SCStr *)(param_2 + 5));
  if ((bVar1) && (param_1[6] == param_2[6])) {
    pSVar2 = (SCStr *)((RecoveredVirtualSlots *)(param_2))->VirtualSlot7();
    pSVar3 = (SCStr *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot7();
    bVar1 = (pSVar3)->operator==(pSVar2);
    if (bVar1) {
      pSVar2 = (SCStr *)((RecoveredVirtualSlots *)(param_2))->VirtualSlot8();
      pSVar3 = (SCStr *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot8();
      bVar1 = (pSVar3)->operator==(pSVar2);
      if (bVar1) {
        bVar1 = ((SCStr *)(param_1 + 7))->operator==((SCStr *)(param_2 + 7));
        if (bVar1) {
          return 1;
        }
      }
    }
  }
  return 0;
}


// Reference entry 106cc960; body size 125 bytes.
#line 1 "ENTRY_106cc960"

undefined4 * Recovered_106cc960::FUN_106cc960(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    if (param_1 == (int *)0xc8) {
      param_1 = (int *)0x0;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    if (param_1 == (int *)0xc8) {
      param_1 = (int *)0x0;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 106f6bf0; body size 135 bytes.
#line 1 "ENTRY_106f6bf0"

undefined4 * Recovered_106f6bf0::FUN_106f6bf0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIStringInput");
  if (((bVar1) || (bVar1 = (param_3)->operator==("SCIStringInputBase"), bVar1)) ||
     (bVar1 = (param_3)->operator==("SCIInput"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10827f70; body size 90 bytes.
#line 1 "ENTRY_10827f70"



SCStr * Recovered_10827f70::FUN_10827f70(SCStr *param_2)

{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;
  int iVar2;
  
  if (param_2 != param_1) {
    (param_1)->int_release();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    (param_1)->int_addref();
  }
  iVar2 = *(int *)((SCStr *)((char *)param_2 + (4)));
  if (iVar2 != *(int *)((SCStr *)((char *)param_1 + (4)))) {
    piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
      *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
      iVar2 = *(int *)((SCStr *)((char *)param_2 + (4)));
    }
    *(int *)((SCStr *)((char *)param_1 + (4))) = iVar2;
    piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
    *(int **)((SCStr *)((char *)param_1 + (8))) = piVar1;
    if (piVar1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
    }
  }
  return param_1;
}


// Reference entry 10828b00; body size 119 bytes.
#line 1 "ENTRY_10828b00"



SCStr * FUN_10828b00(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_1 != param_3) {
      (param_3)->int_release();
      *(undefined4 *)param_3 = *(undefined4 *)param_1;
      (param_3)->int_addref();
    }
    iVar2 = *(int *)((SCStr *)((char *)param_1 + (4)));
    if (iVar2 != *(int *)((SCStr *)((char *)param_3 + (4)))) {
      piVar1 = *(int **)((SCStr *)((char *)param_3 + (8)));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)((SCStr *)((char *)param_3 + (4))) = 0;
        *(undefined4 *)((SCStr *)((char *)param_3 + (8))) = 0;
        ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
        iVar2 = *(int *)((SCStr *)((char *)param_1 + (4)));
      }
      *(int *)((SCStr *)((char *)param_3 + (4))) = iVar2;
      piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
      *(int **)((SCStr *)((char *)param_3 + (8))) = piVar1;
      if (piVar1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
      }
    }
    param_1 = param_1 + 0xc;
    param_3 = param_3 + 0xc;
  } while (param_1 != param_2);
  return param_3;
}


// Reference entry 108f8070; body size 119 bytes.
#line 1 "ENTRY_108f8070"



void Recovered_108f8070::FUN_108f8070(SCStr *param_2)

{
  int param_1 = (int)this;
  SCStr *ghidra_this;
  int *piVar1;
  bool bVar2;
  
  ghidra_this = (SCStr *)(param_1 + 0x100);
  bVar2 = (ghidra_this)->operator==(param_2);
  if ((!bVar2) && (*(int *)(param_1 + 0xf0) != 0)) {
    piVar1 = *(int **)(param_1 + 0xf4);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      *(undefined4 *)(param_1 + 0xf4) = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  if (param_2 != ghidra_this) {
    (ghidra_this)->int_release();
    *(undefined4 *)ghidra_this = *(undefined4 *)param_2;
    (ghidra_this)->int_addref();
  }
  return;
}


// Reference entry 10b81cf0; body size 32 bytes.
#line 1 "ENTRY_10b81cf0"

SCStr * __stdcall FUN_10b81cf0(SCStr *param_1)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)thunk_FUN_110da8b0();
  pcVar2 = (char *)((RecoveredVirtualSlots *)(piVar1))->VirtualSlot15();
  (param_1)->int_allocRep(pcVar2);
  return param_1;
}


// Reference entry 10b81d20; body size 32 bytes.
#line 1 "ENTRY_10b81d20"

SCStr * __stdcall FUN_10b81d20(SCStr *param_1)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)thunk_FUN_110da8b0();
  pcVar2 = (char *)((RecoveredVirtualSlots *)(piVar1))->VirtualSlot12();
  (param_1)->int_allocRep(pcVar2);
  return param_1;
}


// Reference entry 10bc7930; body size 104 bytes.
#line 1 "ENTRY_10bc7930"

void __fastcall FUN_10bc7930(int param_1)

{
  int *piVar1;
  char *pcStack_14;
  int iStack_10;
  char *pcStack_c;
  
  pcStack_c = "Disconnected from Sonos Device.";
  iStack_10 = 2;
  pcStack_14 = "SCBTClassicConnectionManager";
  thunk_FUN_112af4e0();
  if (*(int *)(param_1 + 0x50) != 0) {
    piVar1 = *(int **)(param_1 + 0x54);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      pcStack_c = (char *)0x10bc7968;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  pcStack_c = "j";
  thunk_FUN_10bc8b30();
  pcStack_c = (char *)0x0;
  iStack_10 = param_1;
  ((SCStr *)&pcStack_14)->int_allocRep("SCIBTClassicConnectionManager:onSonosDeviceDisconnected");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10bedc30; body size 60 bytes.
#line 1 "ENTRY_10bedc30"

undefined4 * Recovered_10bedc30::FUN_10bedc30(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 10bf13a0; body size 150 bytes.
#line 1 "ENTRY_10bf13a0"

undefined4 * Recovered_10bf13a0::FUN_10bf13a0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIUrlConnection");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCICancellable");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 2));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10bf1470; body size 60 bytes.
#line 1 "ENTRY_10bf1470"

undefined4 * Recovered_10bf1470::FUN_10bf1470(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 10c00c70; body size 117 bytes.
#line 1 "ENTRY_10c00c70"

undefined4 * Recovered_10c00c70::FUN_10c00c70(undefined4 *param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIAudioData");
  if (bVar1) {
    piVar2 = (int *)(-(uint)(param_1 != 0) & param_1 + 0x24U);
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    piVar2 = (int *)(-(uint)(param_1 != 0) & param_1 + 0x24U);
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10c1bb40; body size 65 bytes.
#line 1 "ENTRY_10c1bb40"

int * __fastcall FUN_10c1bb40(int *param_1)

{
  SCStr *pSVar1;
  int *piStack_10;
  
  if (((char *)param_1[9] != (char *)0x0) && (*(char *)param_1[9] != '\0')) {
    return param_1 + 6;
  }
  piStack_10 = param_1;
  pSVar1 = (SCStr *)((RecoveredVirtualSlots *)(param_1))->VirtualSlot6();
  new ((SCStr *)&piStack_10) SCStr(*(pSVar1));
  thunk_FUN_10c1f630(param_1 + 6,param_1[1]);
  return param_1 + 6;
}


// Reference entry 10c20ab0; body size 77 bytes.
#line 1 "ENTRY_10c20ab0"

void Recovered_10c20ab0::FUN_10c20ab0(undefined4 param_2)

{
  int * param_1 = (int *)this;
  char cVar1;
  SCStr aSStack_10 [4];
  int *piStack_c;
  undefined4 uStack_8;
  
  uStack_8 = param_2;
  piStack_c = (int *)0x10c20abc;
  thunk_FUN_104d9d00();
  uStack_8 = 0x10c20ac8;
  cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot36();
  if (cVar1 == '\0') {
    uStack_8 = 0x10c20add;
    cVar1 = (**(code **)(param_1[0x20] + 0x18))();
    if (cVar1 != '\0') {
      uStack_8 = 0;
      piStack_c = param_1;
      (aSStack_10)->int_allocRep("SCIBrowseDataSource:onPowerscrollInfo");
      thunk_FUN_103d63d0();
    }
  }
  return;
}


// Reference entry 10c20b20; body size 181 bytes.
#line 1 "ENTRY_10c20b20"

undefined4 * Recovered_10c20b20::FUN_10c20b20(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = param_1 + 0x22;
    }
    else {
      bVar1 = (param_3)->operator==("SCIPowerscrollDataSource");
      if (bVar1) {
        piVar2 = param_1 + 0x20;
      }
      else {
        bVar1 = (param_3)->operator==("SCILocalMediaCollectionListener");
        if (!bVar1) {
          bVar1 = (param_3)->operator==("SCIObj");
          if (!bVar1) {
            *param_2 = 0;
            return param_2;
          }
          *param_2 = (undefined4)param_1;
          if (param_1 == (int *)0x0) {
            return param_2;
          }
          ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
          return param_2;
        }
        piVar2 = param_1 + 0x21;
      }
    }
    param_1 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)piVar2);
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10c20c30; body size 150 bytes.
#line 1 "ENTRY_10c20c30"

undefined4 * Recovered_10c20c30::FUN_10c20c30(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseMetadata");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0xe));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10c67b50; body size 119 bytes.
#line 1 "ENTRY_10c67b50"

undefined4 * Recovered_10c67b50::FUN_10c67b50(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    if (param_1 == (int *)0x24) {
      param_1 = (int *)0x0;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    if (param_1 == (int *)0x24) {
      param_1 = (int *)0x0;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10c6e370; body size 117 bytes.
#line 1 "ENTRY_10c6e370"

undefined4 * Recovered_10c6e370::FUN_10c6e370(undefined4 *param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIWifiListener");
  if (bVar1) {
    piVar2 = (int *)(param_1 + 0x2c);
    if (param_1 == 0x24) {
      piVar2 = (int *)0x0;
    }
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    piVar2 = (int *)(param_1 + 0x2c);
    if (param_1 == 0x24) {
      piVar2 = (int *)0x0;
    }
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10c6edd0; body size 123 bytes.
#line 1 "ENTRY_10c6edd0"

undefined4 * Recovered_10c6edd0::FUN_10c6edd0(undefined4 *param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIWifiListener");
  if (bVar1) {
    piVar2 = (int *)(-(uint)(param_1 != 0) & param_1 + 0xe0U);
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    piVar2 = (int *)(-(uint)(param_1 != 0) & param_1 + 0xe0U);
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10c7fb20; body size 123 bytes.
#line 1 "ENTRY_10c7fb20"

undefined4 * Recovered_10c7fb20::FUN_10c7fb20(undefined4 *param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIMdnsListener");
  if (bVar1) {
    piVar2 = (int *)(-(uint)(param_1 != 0) & param_1 + 0x170U);
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    piVar2 = (int *)(-(uint)(param_1 != 0) & param_1 + 0x170U);
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10c89d40; body size 110 bytes.
#line 1 "ENTRY_10c89d40"

undefined4 * Recovered_10c89d40::FUN_10c89d40(undefined4 *param_2)

{
  undefined4 * param_1 = (undefined4 *)this;
  SCStr *ghidra_this;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  iVar3 = param_2[2];
  if (iVar3 != param_1[2]) {
    piVar2 = (int *)param_1[3];
    if (piVar2 != (int *)0x0) {
      param_1[2] = 0;
      param_1[3] = 0;
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
      iVar3 = param_2[2];
    }
    param_1[2] = iVar3;
    piVar2 = (int *)param_2[3];
    param_1[3] = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
    }
  }
  ghidra_this = (SCStr *)(param_1 + 4);
  if ((SCStr *)(param_2 + 4) != ghidra_this) {
    (ghidra_this)->int_release();
    *(undefined4 *)ghidra_this = param_2[4];
    (ghidra_this)->int_addref();
  }
  return param_1;
}


// Reference entry 10c92dc0; body size 60 bytes.
#line 1 "ENTRY_10c92dc0"

undefined4 * Recovered_10c92dc0::FUN_10c92dc0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 10cbe0d0; body size 68 bytes.
#line 1 "ENTRY_10cbe0d0"

undefined4 * Recovered_10cbe0d0::FUN_10cbe0d0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    if (param_1 == (int *)&DAT_0000000c) {
      param_1 = (int *)0x0;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 10ce1ea0; body size 119 bytes.
#line 1 "ENTRY_10ce1ea0"

undefined4 * Recovered_10ce1ea0::FUN_10ce1ea0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpSystemPropertyGetString");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIOp"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10ce1f40; body size 119 bytes.
#line 1 "ENTRY_10ce1f40"

undefined4 * Recovered_10ce1f40::FUN_10ce1f40(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpGetUsageDataShareOption");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIOp"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10ce2a80; body size 119 bytes.
#line 1 "ENTRY_10ce2a80"

undefined4 * Recovered_10ce2a80::FUN_10ce2a80(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpSystemPropertyGetRDM");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIOp"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10cebbc0; body size 150 bytes.
#line 1 "ENTRY_10cebbc0"

undefined4 * Recovered_10cebbc0::FUN_10cebbc0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIAreaManager");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIOpCB");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 2));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10cfb040; body size 153 bytes.
#line 1 "ENTRY_10cfb040"

undefined4 * Recovered_10cfb040::FUN_10cfb040(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10cfdde0; body size 153 bytes.
#line 1 "ENTRY_10cfdde0"

undefined4 * Recovered_10cfdde0::FUN_10cfdde0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIDeviceSettingsDataSource");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10cfdeb0; body size 150 bytes.
#line 1 "ENTRY_10cfdeb0"

undefined4 * Recovered_10cfdeb0::FUN_10cfdeb0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIPropertyBag");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x1a));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d14dd0; body size 119 bytes.
#line 1 "ENTRY_10d14dd0"

undefined4 * Recovered_10d14dd0::FUN_10d14dd0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIBadgeIndicatorSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10d14e70; body size 153 bytes.
#line 1 "ENTRY_10d14e70"

undefined4 * Recovered_10d14e70::FUN_10d14e70(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x21));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d14f40; body size 150 bytes.
#line 1 "ENTRY_10d14f40"

undefined4 * Recovered_10d14f40::FUN_10d14f40(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISettingsBrowseItem");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x1a));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d16fb0; body size 76 bytes.
#line 1 "ENTRY_10d16fb0"

void Recovered_10d16fb0::FUN_10d16fb0(int param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  bool bVar1;
  char cVar2;
  
  if (param_2 != 0) {
    bVar1 = (param_3)->operator==("SCIController:onConnectivityStateChanged");
    if (bVar1) {
      cVar2 = ((RecoveredVirtualSlots *)(param_1 + -0x274))->VirtualSlot32();
      if (cVar2 == '\0') {
        (**(code **)(*(int *)(param_1 + -0x274) + 0x114))(0);
      }
    }
  }
  return;
}


// Reference entry 10d189f0; body size 25 bytes.
#line 1 "ENTRY_10d189f0"

undefined1 __fastcall FUN_10d189f0(int *param_1)

{
  SCStr aSStack_14 [4];
  int *piStack_10;
  undefined4 uStack_c;
  
  if ((*(char *)((int)param_1 + 0x299) != '\0') && ((char)param_1[0xa6] == '\0')) {
    if (*(char *)((int)param_1 + 0xc5) != '\0') {
      uStack_c = 0x1021b215;
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot37();
      uStack_c = 0;
      piStack_10 = param_1;
      (aSStack_14)->int_allocRep("SCIBrowseDataSource:onInvalidation");
      thunk_FUN_103d63d0();
      *(undefined1 *)((int)param_1 + 0x41) = 0;
    }
    return (char)param_1[0x31];
  }
  return 1;
}


// Reference entry 10d1e560; body size 150 bytes.
#line 1 "ENTRY_10d1e560"

undefined4 * Recovered_10d1e560::FUN_10d1e560(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIEventSink");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0xe));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d23590; body size 94 bytes.
#line 1 "ENTRY_10d23590"

void __fastcall FUN_10d23590(int param_1)

{
  int *piVar1;
  char cVar2;
  SCStr aSStack_18 [4];
  int *piStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0x10d2359f;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
  if (*(char *)(param_1 + 0x1d) != cVar2) {
    *(char *)(param_1 + 0x1d) = cVar2;
    piVar1 = (int *)(param_1 + -0x90);
    uStack_10 = 0x10d235b9;
    cVar2 = ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot36();
    uStack_10 = 0;
    if (cVar2 != '\0') {
      piStack_14 = piVar1;
      (aSStack_18)->int_allocRep("SCIBrowseDataSource:onInvalidation");
      thunk_FUN_103d65f0();
      return;
    }
    piStack_14 = (int *)0x10d235e8;
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot68();
  }
  return;
}


// Reference entry 10d2b170; body size 153 bytes.
#line 1 "ENTRY_10d2b170"

undefined4 * Recovered_10d2b170::FUN_10d2b170(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIEventSink");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d39ec0; body size 153 bytes.
#line 1 "ENTRY_10d39ec0"

undefined4 * Recovered_10d39ec0::FUN_10d39ec0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d41c80; body size 119 bytes.
#line 1 "ENTRY_10d41c80"

undefined4 * Recovered_10d41c80::FUN_10d41c80(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIBooleanSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10d41da0; body size 153 bytes.
#line 1 "ENTRY_10d41da0"

undefined4 * Recovered_10d41da0::FUN_10d41da0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x26));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d41e70; body size 119 bytes.
#line 1 "ENTRY_10d41e70"

undefined4 * Recovered_10d41e70::FUN_10d41e70(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCISpinnerSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10d44040; body size 120 bytes.
#line 1 "ENTRY_10d44040"

void Recovered_10d44040::FUN_10d44040(undefined4 param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = (param_3)->operator==("SCIDateTimeManager:onTimeStatusChanged");
  if (!bVar2) {
    bVar2 = (param_3)->operator==("SCIAlarmManager:onAlarmsChanged");
    if (bVar2) {
      ((RecoveredVirtualSlots *)(param_1 + -0x80))->VirtualSlot91();
      (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
    }
    return;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 0x1c))();
  if (iVar3 == 5) {
    (**(code **)(**(int **)(param_1 + 0x38) + 100))();
  }
  else if (iVar3 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x38);
  if (param_1 == 0x80) {
    param_1 = 0;
  }
  (**(code **)(*(int *)*puVar1 + 0x18))(param_1);
  return;
}


// Reference entry 10d440e0; body size 51 bytes.
#line 1 "ENTRY_10d440e0"

void Recovered_10d440e0::FUN_10d440e0(undefined4 param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAlarmManager:onAlarmsChanged");
  if (bVar1) {
    ((RecoveredVirtualSlots *)(param_1 + -0x80))->VirtualSlot91();
    (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  }
  return;
}


// Reference entry 10d44120; body size 175 bytes.
#line 1 "ENTRY_10d44120"

void Recovered_10d44120::FUN_10d44120(undefined4 param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  undefined1 uVar1;
  bool bVar2;
  undefined1 *puVar3;
  
  puVar3 = &DAT_1186d2ee;
  if (*(undefined1 **)param_3 != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)param_3;
  }
  uVar1 = ((RecoveredVirtualSlots *)(param_1 + -0x80))->VirtualSlot23();
  thunk_FUN_112af4e0("SCAlarmsSettingsDataSource",1,"Event:%s Sender:%p valid:%d",puVar3,param_2,
                     uVar1);
  bVar2 = (param_3)->operator==("SCIAlarmManager:onAlarmsChanged");
  if (bVar2) {
    ((RecoveredVirtualSlots *)(param_1 + -0x80))->VirtualSlot91();
    (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  }
  bVar2 = (param_3)->operator==("SCIAlarm:onItemChanged");
  if ((!bVar2) && (bVar2 = (param_3)->operator==("SCIAlarm:refreshParent"), !bVar2)) {
    return;
  }
  if (*(char *)(param_1 + 0x34) == '\0') {
    ((RecoveredVirtualSlots *)(param_1 + -0x80))->VirtualSlot91();
    (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  }
  return;
}


// Reference entry 10d44200; body size 142 bytes.
#line 1 "ENTRY_10d44200"

void Recovered_10d44200::FUN_10d44200(undefined4 param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  int *piVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 *puVar4;
  
  piVar1 = (int *)(param_1 + -0x80);
  puVar4 = &DAT_1186d2ee;
  if (*(undefined1 **)param_3 != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)param_3;
  }
  uVar2 = ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot23();
  thunk_FUN_112af4e0("SCAlarmsSettingsDurationDataSource",5,"Event:%s Sender:%p valid:%d",puVar4,
                     param_2,uVar2);
  bVar3 = (param_3)->operator==("SCIAlarmManager:onAlarmsChanged");
  if (bVar3) {
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot91();
    (**(code **)(*piVar1 + 0x110))(0);
  }
  bVar3 = (param_3)->operator==("SCIAlarm:onItemChanged");
  if (bVar3) {
    ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot91();
    (**(code **)(*piVar1 + 0x110))(0);
  }
  return;
}


// Reference entry 10d49470; body size 150 bytes.
#line 1 "ENTRY_10d49470"

undefined4 * Recovered_10d49470::FUN_10d49470(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCITooltip");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x1a));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d49540; body size 157 bytes.
#line 1 "ENTRY_10d49540"

undefined4 * Recovered_10d49540::FUN_10d49540(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIEventSink");
    if (bVar1) {
      piVar2 = param_1 + 0x20;
    }
    else {
      bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
      if (!bVar1) {
        bVar1 = (param_3)->operator==("SCIObj");
        if (!bVar1) {
          *param_2 = 0;
          return param_2;
        }
        *param_2 = (undefined4)param_1;
        if (param_1 == (int *)0x0) {
          return param_2;
        }
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
        return param_2;
      }
      piVar2 = param_1 + 0x2a;
    }
    param_1 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)piVar2);
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10d49620; body size 153 bytes.
#line 1 "ENTRY_10d49620"

undefined4 * Recovered_10d49620::FUN_10d49620(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIEventSink");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d496f0; body size 157 bytes.
#line 1 "ENTRY_10d496f0"

undefined4 * Recovered_10d496f0::FUN_10d496f0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIEventSink");
    if (bVar1) {
      piVar2 = param_1 + 0x20;
    }
    else {
      bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
      if (!bVar1) {
        bVar1 = (param_3)->operator==("SCIObj");
        if (!bVar1) {
          *param_2 = 0;
          return param_2;
        }
        *param_2 = (undefined4)param_1;
        if (param_1 == (int *)0x0) {
          return param_2;
        }
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
        return param_2;
      }
      piVar2 = param_1 + 0x2a;
    }
    param_1 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)piVar2);
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10d497d0; body size 153 bytes.
#line 1 "ENTRY_10d497d0"

undefined4 * Recovered_10d497d0::FUN_10d497d0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIEventSink");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d498a0; body size 153 bytes.
#line 1 "ENTRY_10d498a0"

undefined4 * Recovered_10d498a0::FUN_10d498a0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x2a));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d51180; body size 119 bytes.
#line 1 "ENTRY_10d51180"

undefined4 * Recovered_10d51180::FUN_10d51180(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAddToQueueAtNumberDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10d51220; body size 153 bytes.
#line 1 "ENTRY_10d51220"

undefined4 * Recovered_10d51220::FUN_10d51220(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCICommittable");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0xa0));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d58880; body size 157 bytes.
#line 1 "ENTRY_10d58880"

undefined4 * Recovered_10d58880::FUN_10d58880(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = param_1 + 0x20;
    }
    else {
      bVar1 = (param_3)->operator==("SCIAggregateBrowseDataSource");
      if (!bVar1) {
        bVar1 = (param_3)->operator==("SCIObj");
        if (!bVar1) {
          *param_2 = 0;
          return param_2;
        }
        *param_2 = (undefined4)param_1;
        if (param_1 == (int *)0x0) {
          return param_2;
        }
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
        return param_2;
      }
      piVar2 = param_1 + 0x21;
    }
    param_1 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)piVar2);
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10d5a990; body size 157 bytes.
#line 1 "ENTRY_10d5a990"

undefined4 * Recovered_10d5a990::FUN_10d5a990(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIReorderable");
    if (bVar1) {
      piVar2 = param_1 + 0x20;
    }
    else {
      bVar1 = (param_3)->operator==("SCIEventSink");
      if (!bVar1) {
        bVar1 = (param_3)->operator==("SCIObj");
        if (!bVar1) {
          *param_2 = 0;
          return param_2;
        }
        *param_2 = (undefined4)param_1;
        if (param_1 == (int *)0x0) {
          return param_2;
        }
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
        return param_2;
      }
      piVar2 = param_1 + 0x21;
    }
    param_1 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)piVar2);
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10d63500; body size 153 bytes.
#line 1 "ENTRY_10d63500"

undefined4 * Recovered_10d63500::FUN_10d63500(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d67340; body size 153 bytes.
#line 1 "ENTRY_10d67340"

undefined4 * Recovered_10d67340::FUN_10d67340(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchHistoryBrowseDataSource");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d67410; body size 150 bytes.
#line 1 "ENTRY_10d67410"

undefined4 * Recovered_10d67410::FUN_10d67410(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchHistoryBrowseItem");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 6));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d674e0; body size 153 bytes.
#line 1 "ENTRY_10d674e0"

undefined4 * Recovered_10d674e0::FUN_10d674e0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchHistoryPageDataSource");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d675b0; body size 150 bytes.
#line 1 "ENTRY_10d675b0"

undefined4 * Recovered_10d675b0::FUN_10d675b0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchHistoryViewBrowseItem");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 6));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d71360; body size 157 bytes.
#line 1 "ENTRY_10d71360"

undefined4 * Recovered_10d71360::FUN_10d71360(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 4));
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchQuery");
    if (bVar1) {
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 4));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10d71470; body size 153 bytes.
#line 1 "ENTRY_10d71470"

undefined4 * Recovered_10d71470::FUN_10d71470(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchResultBrowseItem");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x46));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10da6df0; body size 136 bytes.
#line 1 "ENTRY_10da6df0"

void Recovered_10da6df0::FUN_10da6df0(SCStr *param_2,undefined4 param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  SCStr *local_48;
  char acStack_44 [64];
  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_48;
  local_48 = param_2;
  iVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot13();
  if (iVar1 == -1) {
    pcVar3 = "";
  }
  else {
    local_48 = (SCStr *)((uint)local_48 & 0xff000000);
    thunk_FUN_1025e860(param_3,&local_48);
    uVar2 = (**(code **)(*param_1 + 0x34))(acStack_44,0x40);
    thunk_FUN_1115bf90(&local_48,uVar2);
    pcVar3 = acStack_44;
  }
  (param_2)->int_allocRep(pcVar3);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10db5d80; body size 138 bytes.
#line 1 "ENTRY_10db5d80"



SCStr * FUN_10db5d80(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  int *piVar1;
  int iVar2;
  SCStr *ghidra_this;
  SCStr *pSVar3;
  
  if (param_2 == param_1) {
    return param_3;
  }
  do {
    pSVar3 = param_2 + -0x14;
    ghidra_this = param_3 + -0x14;
    if (pSVar3 != ghidra_this) {
      (ghidra_this)->int_release();
      *(undefined4 *)ghidra_this = *(undefined4 *)pSVar3;
      (ghidra_this)->int_addref();
    }
    iVar2 = *(int *)((SCStr *)((char *)param_2 + (-0x10)));
    if (iVar2 != *(int *)((SCStr *)((char *)param_3 + (-0x10)))) {
      piVar1 = *(int **)((SCStr *)((char *)param_3 + (-0xc)));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)((SCStr *)((char *)param_3 + (-0x10))) = 0;
        *(undefined4 *)((SCStr *)((char *)param_3 + (-0xc))) = 0;
        ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
        iVar2 = *(int *)((SCStr *)((char *)param_2 + (-0x10)));
      }
      *(int *)((SCStr *)((char *)param_3 + (-0x10))) = iVar2;
      piVar1 = *(int **)((SCStr *)((char *)param_2 + (-0xc)));
      *(int **)((SCStr *)((char *)param_3 + (-0xc))) = piVar1;
      if (piVar1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
      }
    }
    *(undefined4 *)((SCStr *)((char *)param_3 + (-8))) = *(undefined4 *)((SCStr *)((char *)param_2 + (-8)));
    param_3[-4] = param_2[-4];
    param_3 = ghidra_this;
    param_2 = pSVar3;
  } while (pSVar3 != param_1);
  return ghidra_this;
}


// Reference entry 10db5e30; body size 139 bytes.
#line 1 "ENTRY_10db5e30"



SCStr * FUN_10db5e30(int *param_1,int *param_2,SCStr *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != param_2) {
    piVar3 = param_1 + 1;
    do {
      if ((SCStr *)(piVar3 + -1) != param_3) {
        (param_3)->int_release();
        *(int *)param_3 = piVar3[-1];
        (param_3)->int_addref();
      }
      iVar2 = *piVar3;
      if (iVar2 != *(int *)((SCStr *)((char *)param_3 + (4)))) {
        piVar1 = *(int **)((SCStr *)((char *)param_3 + (8)));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)((SCStr *)((char *)param_3 + (4))) = 0;
          *(undefined4 *)((SCStr *)((char *)param_3 + (8))) = 0;
          ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
          iVar2 = *piVar3;
        }
        *(int *)((SCStr *)((char *)param_3 + (4))) = iVar2;
        piVar1 = (int *)piVar3[1];
        *(int **)((SCStr *)((char *)param_3 + (8))) = piVar1;
        if (piVar1 != (int *)0x0) {
          ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
        }
      }
      *(int *)((SCStr *)((char *)param_3 + (0xc))) = piVar3[2];
      param_3[0x10] = *(SCStr *)(piVar3 + 3);
      param_3 = param_3 + 0x14;
      piVar1 = piVar3 + 4;
      piVar3 = piVar3 + 5;
    } while (piVar1 != param_2);
    return param_3;
  }
  return param_3;
}


// Reference entry 10db8e40; body size 102 bytes.
#line 1 "ENTRY_10db8e40"

SCStr * Recovered_10db8e40::FUN_10db8e40(SCStr *param_2)

{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;
  int iVar2;
  
  if (param_2 != param_1) {
    (param_1)->int_release();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    (param_1)->int_addref();
  }
  iVar2 = *(int *)((SCStr *)((char *)param_2 + (4)));
  if (iVar2 != *(int *)((SCStr *)((char *)param_1 + (4)))) {
    piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
      *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
      iVar2 = *(int *)((SCStr *)((char *)param_2 + (4)));
    }
    *(int *)((SCStr *)((char *)param_1 + (4))) = iVar2;
    piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
    *(int **)((SCStr *)((char *)param_1 + (8))) = piVar1;
    if (piVar1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
    }
  }
  *(undefined4 *)((SCStr *)((char *)param_1 + (0xc))) = *(undefined4 *)((SCStr *)((char *)param_2 + (0xc)));
  param_1[0x10] = param_2[0x10];
  return param_1;
}


// Reference entry 10dc76d0; body size 71 bytes.
#line 1 "ENTRY_10dc76d0"

undefined4 * Recovered_10dc76d0::FUN_10dc76d0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    if (param_1 == (int *)0xa8) {
      param_1 = (int *)0x0;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 10dd2710; body size 82 bytes.
#line 1 "ENTRY_10dd2710"

SCStr * Recovered_10dd2710::FUN_10dd2710(SCStr *param_2)

{
  int * param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot27();
  if (cVar1 == '\0') {
    cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot28();
    if (cVar1 == '\0') {
      uVar3 = 0x208e;
    }
    else {
      uVar3 = 0x2090;
    }
  }
  else {
    uVar3 = 0x208f;
  }
  pcVar2 = (char *)thunk_FUN_1109aba0(uVar3,&DAT_11882ff0);
  (param_2)->int_allocRep(pcVar2);
  return param_2;
}


// Reference entry 10dd2780; body size 55 bytes.
#line 1 "ENTRY_10dd2780"

SCStr * Recovered_10dd2780::FUN_10dd2780(SCStr *param_2)

{
  int * param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot25();
  if (cVar1 == '\0') {
    uVar3 = 0x2091;
  }
  else {
    uVar3 = 0x209e;
  }
  pcVar2 = (char *)thunk_FUN_1109aba0(uVar3,&DAT_11882ff0);
  (param_2)->int_allocRep(pcVar2);
  return param_2;
}


// Reference entry 10ded460; body size 134 bytes.
#line 1 "ENTRY_10ded460"



SCStr * FUN_10ded460(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  int *piVar2;
  int iVar3;
  SCStr *pSVar4;
  SCStr *pSVar5;
  
  if (param_2 != param_1) {
    pSVar5 = param_3 + 0xc;
    do {
      pSVar4 = param_2 + -0x18;
      param_3 = param_3 + -0x18;
      pSVar1 = pSVar5 + -0x18;
      if (param_3 != pSVar4) {
        (param_3)->int_release();
        *(undefined4 *)param_3 = *(undefined4 *)pSVar4;
        (param_3)->int_addref();
        *(int *)((SCStr *)((char *)pSVar5 + (-0x20))) = *(int *)((SCStr *)((char *)param_2 + (-0x14)));
        iVar3 = *(int *)((SCStr *)((char *)param_2 + (-0x10)));
        if (iVar3 != *(int *)((SCStr *)((char *)pSVar5 + (-0x1c)))) {
          piVar2 = *(int **)pSVar1;
          if (piVar2 != (int *)0x0) {
            *(int *)((SCStr *)((char *)pSVar5 + (-0x1c))) = 0;
            *(int *)pSVar1 = 0;
            ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot2();
            iVar3 = *(int *)((SCStr *)((char *)param_2 + (-0x10)));
          }
          *(int *)((SCStr *)((char *)pSVar5 + (-0x1c))) = iVar3;
          piVar2 = *(int **)((SCStr *)((char *)param_2 + (-0xc)));
          *(int **)pSVar1 = piVar2;
          if (piVar2 != (int *)0x0) {
            ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
          }
        }
      }
      pSVar5 = pSVar1;
      param_2 = pSVar4;
    } while (pSVar4 != param_1);
    return param_3;
  }
  return param_3;
}


// Reference entry 10ded600; body size 144 bytes.
#line 1 "ENTRY_10ded600"

SCStr * FUN_10ded600(int *param_1,int *param_2,SCStr *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  SCStr *pSVar4;
  
  if (param_1 != param_2) {
    pSVar4 = param_3 + 0xc;
    piVar3 = param_1 + 2;
    do {
      if (param_3 != (SCStr *)(piVar3 + -2)) {
        (param_3)->int_release();
        *(int *)param_3 = piVar3[-2];
        (param_3)->int_addref();
        *(int *)((SCStr *)((char *)pSVar4 + (-8))) = piVar3[-1];
        iVar2 = *piVar3;
        if (iVar2 != *(int *)((SCStr *)((char *)pSVar4 + (-4)))) {
          piVar1 = *(int **)pSVar4;
          if (piVar1 != (int *)0x0) {
            *(int *)((SCStr *)((char *)pSVar4 + (-4))) = 0;
            *(int *)pSVar4 = 0;
            ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
            iVar2 = *piVar3;
          }
          *(int *)((SCStr *)((char *)pSVar4 + (-4))) = iVar2;
          piVar1 = (int *)piVar3[1];
          *(int **)pSVar4 = piVar1;
          if (piVar1 != (int *)0x0) {
            ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
          }
        }
      }
      param_3 = param_3 + 0x18;
      pSVar4 = pSVar4 + 0x18;
      piVar1 = piVar3 + 4;
      piVar3 = piVar3 + 6;
    } while (piVar1 != param_2);
    return param_3;
  }
  return param_3;
}


// Reference entry 10def210; body size 96 bytes.
#line 1 "ENTRY_10def210"

SCStr * Recovered_10def210::FUN_10def210(SCStr *param_2)

{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    (param_1)->int_release();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    (param_1)->int_addref();
    *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = *(undefined4 *)((SCStr *)((char *)param_2 + (4)));
    iVar2 = *(int *)((SCStr *)((char *)param_2 + (8)));
    if (iVar2 != *(int *)((SCStr *)((char *)param_1 + (8)))) {
      piVar1 = *(int **)((SCStr *)((char *)param_1 + (0xc)));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
        *(undefined4 *)((SCStr *)((char *)param_1 + (0xc))) = 0;
        ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
        iVar2 = *(int *)((SCStr *)((char *)param_2 + (8)));
      }
      *(int *)((SCStr *)((char *)param_1 + (8))) = iVar2;
      piVar1 = *(int **)((SCStr *)((char *)param_2 + (0xc)));
      *(int **)((SCStr *)((char *)param_1 + (0xc))) = piVar1;
      if (piVar1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
      }
    }
  }
  return param_1;
}


// Reference entry 10e2b7d0; body size 193 bytes.
#line 1 "ENTRY_10e2b7d0"

void Recovered_10e2b7d0::FUN_10e2b7d0(int param_2,ushort param_3)

{
  int param_1 = (int)this;
  int *piVar1;
  int iVar2;
  uint uStack_8;
  
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    uStack_8 = 0x10e2b7df;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x74) + 0x20))();
    if (iVar2 == param_2) {
      piVar1 = *(int **)(param_1 + 0x78);
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x74) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        uStack_8 = 0x10e2b7ff;
        ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
      }
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      uStack_8 = 0x10e2b815;
      thunk_FUN_10e2f240();
      return;
    }
  }
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    uStack_8 = 0x10e2b825;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x20))();
  }
  if (param_2 == iVar2) {
    uStack_8 = 0x10e2b837;
    iVar2 = thunk_FUN_103eb610();
    if (iVar2 == -2) {
      uStack_8 = (uint)param_3;
      thunk_FUN_112af4e0("sec_reg",1,"Error in setting opt-in, email, location %d");
      ((SCStr *)&uStack_8)->int_allocRep("run_completed.error");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
    }
    else if (iVar2 == 0) {
      ((SCStr *)&uStack_8)->int_allocRep("run_completed.success");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    }
  }
  return;
}


// Reference entry 10e30d60; body size 276 bytes.
#line 1 "ENTRY_10e30d60"

SCStr * Recovered_10e30d60::FUN_10e30d60(SCStr *param_2)

{
  int param_1 = (int)this;
  int iVar1;
  char *pcVar2;
  
  iVar1 = ((RecoveredVirtualSlots *)(param_1 + 0x18))->VirtualSlot13();
  if (iVar1 == 2) {
    pcVar2 = (char *)thunk_FUN_1109aba0(0x241c,&DAT_11882ff0);
    (param_2)->int_allocRep(pcVar2);
    return param_2;
  }
  iVar1 = ((RecoveredVirtualSlots *)(param_1 + 0x18))->VirtualSlot13();
  if (iVar1 == 3) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 1) {
      pcVar2 = (char *)thunk_FUN_1109aba0(0x241d,&DAT_11882ff0);
      (param_2)->int_allocRep(pcVar2);
      return param_2;
    }
    if (iVar1 == 3) {
      pcVar2 = (char *)thunk_FUN_1109aba0(0x241e,&DAT_11882ff0);
      (param_2)->int_allocRep(pcVar2);
      return param_2;
    }
    if (iVar1 == 4) {
      pcVar2 = (char *)thunk_FUN_1109aba0(0x241f,&DAT_11882ff0);
      (param_2)->int_allocRep(pcVar2);
      return param_2;
    }
  }
  else {
    iVar1 = ((RecoveredVirtualSlots *)(param_1 + 0x18))->VirtualSlot13();
    if (iVar1 == 1) {
      pcVar2 = (char *)thunk_FUN_1109aba0(0x2420,&DAT_11882ff0);
      (param_2)->int_allocRep(pcVar2);
      return param_2;
    }
  }
  (param_2)->int_allocRep("");
  return param_2;
}


// Reference entry 10e5f7a0; body size 90 bytes.
#line 1 "ENTRY_10e5f7a0"

SCStr * Recovered_10e5f7a0::FUN_10e5f7a0(SCStr *param_2)

{
  SCStr * param_1 = (SCStr *)this;
  int *piVar1;
  int iVar2;
  
  if (param_2 != param_1) {
    (param_1)->int_release();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    (param_1)->int_addref();
  }
  iVar2 = *(int *)((SCStr *)((char *)param_2 + (4)));
  if (iVar2 != *(int *)((SCStr *)((char *)param_1 + (4)))) {
    piVar1 = *(int **)((SCStr *)((char *)param_1 + (8)));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)((SCStr *)((char *)param_1 + (4))) = 0;
      *(undefined4 *)((SCStr *)((char *)param_1 + (8))) = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
      iVar2 = *(int *)((SCStr *)((char *)param_2 + (4)));
    }
    *(int *)((SCStr *)((char *)param_1 + (4))) = iVar2;
    piVar1 = *(int **)((SCStr *)((char *)param_2 + (8)));
    *(int **)((SCStr *)((char *)param_1 + (8))) = piVar1;
    if (piVar1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
    }
  }
  return param_1;
}


// Reference entry 10ea2980; body size 119 bytes.
#line 1 "ENTRY_10ea2980"

undefined4 * Recovered_10ea2980::FUN_10ea2980(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIIntegerSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10ea2c70; body size 119 bytes.
#line 1 "ENTRY_10ea2c70"

undefined4 * Recovered_10ea2c70::FUN_10ea2c70(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIStringFromCustomSettingsProperty"), bVar1))
  {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10ea2d10; body size 119 bytes.
#line 1 "ENTRY_10ea2d10"

undefined4 * Recovered_10ea2d10::FUN_10ea2d10(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIStringFromListSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10ebdf50; body size 139 bytes.
#line 1 "ENTRY_10ebdf50"



int * FUN_10ebdf50(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  SCStr *pSVar3;
  SCStr *ghidra_this;
  int *piVar4;
  
  if (param_2 != param_1) {
    pSVar3 = (SCStr *)(param_3 + 2);
    do {
      piVar4 = param_2 + -3;
      iVar2 = *piVar4;
      param_3 = param_3 + -3;
      ghidra_this = pSVar3 + -0xc;
      if (iVar2 != *param_3) {
        piVar1 = *(int **)((SCStr *)((char *)pSVar3 + (-0x10)));
        if (piVar1 != (int *)0x0) {
          *param_3 = 0;
          *(int *)((SCStr *)((char *)pSVar3 + (-0x10))) = 0;
          ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
          iVar2 = *piVar4;
        }
        *param_3 = iVar2;
        piVar1 = (int *)param_2[-2];
        *(int **)((SCStr *)((char *)pSVar3 + (-0x10))) = piVar1;
        if (piVar1 != (int *)0x0) {
          ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
        }
      }
      if ((SCStr *)(param_2 + -1) != ghidra_this) {
        (ghidra_this)->int_release();
        *(int *)ghidra_this = param_2[-1];
        (ghidra_this)->int_addref();
      }
      pSVar3 = ghidra_this;
      param_2 = piVar4;
    } while (piVar4 != param_1);
    return param_3;
  }
  return param_3;
}


// Reference entry 10ebe180; body size 125 bytes.
#line 1 "ENTRY_10ebe180"

int * FUN_10ebe180(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  SCStr *ghidra_this;
  
  if (param_1 != param_2) {
    ghidra_this = (SCStr *)(param_3 + 2);
    do {
      iVar2 = *param_1;
      if (iVar2 != *param_3) {
        piVar1 = *(int **)((SCStr *)((char *)ghidra_this + (-4)));
        if (piVar1 != (int *)0x0) {
          *param_3 = 0;
          *(undefined4 *)((SCStr *)((char *)ghidra_this + (-4))) = 0;
          ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
          iVar2 = *param_1;
        }
        *param_3 = iVar2;
        piVar1 = (int *)param_1[1];
        *(int **)((SCStr *)((char *)ghidra_this + (-4))) = piVar1;
        if (piVar1 != (int *)0x0) {
          ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
        }
      }
      if ((SCStr *)(param_1 + 2) != ghidra_this) {
        (ghidra_this)->int_release();
        *(int *)ghidra_this = param_1[2];
        (ghidra_this)->int_addref();
      }
      param_1 = param_1 + 3;
      param_3 = param_3 + 3;
      ghidra_this = ghidra_this + 0xc;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


// Reference entry 10ec2bf0; body size 95 bytes.
#line 1 "ENTRY_10ec2bf0"

int * Recovered_10ec2bf0::FUN_10ec2bf0(int *param_2)

{
  int * param_1 = (int *)this;
  SCStr *ghidra_this;
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 != *param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
      iVar2 = *param_2;
    }
    *param_1 = iVar2;
    piVar1 = (int *)param_2[1];
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
    }
  }
  ghidra_this = (SCStr *)(param_1 + 2);
  if ((SCStr *)(param_2 + 2) != ghidra_this) {
    (ghidra_this)->int_release();
    *(undefined4 *)ghidra_this = *(undefined4 *)(param_2 + 2);
    (ghidra_this)->int_addref();
  }
  return param_1;
}


// Reference entry 10f47070; body size 193 bytes.
#line 1 "ENTRY_10f47070"

void Recovered_10f47070::FUN_10f47070(SCStr *param_2,SCStr *param_3,uint param_4)

{
  int param_1 = (int)this;
  int *piVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = (param_2)->operator==((SCStr *)(param_1 + 0x80));
  if ((bVar2) &&
     (((*(char **)param_3 == (char *)0x0 || (**(char **)param_3 == '\0')) ||
      (bVar2 = (param_3)->operator==("Q:0"), bVar2)))) {
    piVar1 = (int *)(param_1 + -0x254);
    *(undefined1 *)(param_1 + -400) = 0;
    cVar3 = ((RecoveredVirtualSlots *)(param_1 + -0x254))->VirtualSlot63();
    if ((cVar3 == '\0') || (param_4 < *(uint *)(param_1 + 0x88))) {
      thunk_FUN_112af4e0("PlayQueue",1,"UpdateID = %lu",param_4);
    }
    else {
      thunk_FUN_112af4e0("PlayQueue",1,"UpdateID = %lu --> re-enable events!",param_4);
      (**(code **)(*piVar1 + 0x100))(0);
    }
    cVar3 = ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot63();
    if (cVar3 == '\0') {
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot37();
    }
  }
  return;
}


// Reference entry 10f4bef0; body size 147 bytes.
#line 1 "ENTRY_10f4bef0"

SCStr * Recovered_10f4bef0::FUN_10f4bef0(SCStr *param_2,int param_3)

{
  int * param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if (param_3 == 0) {
    if (*(int *)(param_1[3] + 0x3c) != 0) {
      puVar4 = &DAT_1186d2ee;
      if ((undefined1 *)param_1[2] != (undefined1 *)0x0) {
        puVar4 = (undefined1 *)param_1[2];
      }
      iVar3 = (**(code **)(*(int *)(*(int *)(param_1[3] + 0x3c) + 0x1c) + 4))(puVar4,1);
      if (iVar3 != 0) {
        pcVar2 = (char *)thunk_FUN_110cead0();
        (param_2)->int_allocRep(pcVar2);
        return param_2;
      }
    }
  }
  else if (param_3 == 1) {
    cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot7();
    if (cVar1 == '\0') {
      pcVar2 = (char *)thunk_FUN_1109aba0(0x210b,&DAT_11882ff0);
      (param_2)->int_allocRep(pcVar2);
      return param_2;
    }
  }
  (param_2)->int_allocRep("");
  return param_2;
}


// Reference entry 10f51510; body size 117 bytes.
#line 1 "ENTRY_10f51510"

undefined4 * Recovered_10f51510::FUN_10f51510(undefined4 *param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    piVar2 = (int *)(-(uint)(param_1 != 0) & param_1 + 0x10U);
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIObj");
    if (!bVar1) {
      *param_2 = 0;
      return param_2;
    }
    piVar2 = (int *)(-(uint)(param_1 != 0) & param_1 + 0x10U);
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
    }
  }
  return param_2;
}


// Reference entry 10fb0da0; body size 153 bytes.
#line 1 "ENTRY_10fb0da0"

int * Recovered_10fb0da0::FUN_10fb0da0(int *param_2)

{
  int * param_1 = (int *)this;
  SCStr *ghidra_this;
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 != *param_1) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
      iVar2 = *param_2;
    }
    *param_1 = iVar2;
    piVar1 = (int *)param_2[1];
    param_1[1] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
    }
  }
  ghidra_this = (SCStr *)(param_1 + 2);
  if ((SCStr *)(param_2 + 2) != ghidra_this) {
    (ghidra_this)->int_release();
    *(undefined4 *)ghidra_this = *(undefined4 *)(param_2 + 2);
    (ghidra_this)->int_addref();
  }
  iVar2 = param_2[3];
  if (iVar2 != param_1[3]) {
    piVar1 = (int *)param_1[4];
    if (piVar1 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot2();
      iVar2 = param_2[3];
    }
    param_1[3] = iVar2;
    piVar1 = (int *)param_2[4];
    param_1[4] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot1();
    }
  }
  return param_1;
}


// Reference entry 10fcb7d0; body size 72 bytes.
#line 1 "ENTRY_10fcb7d0"

SCStr * Recovered_10fcb7d0::FUN_10fcb7d0(SCStr *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot51();
  if (iVar1 != 0) {
    uVar2 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot51();
    pcVar3 = (char *)thunk_FUN_11456530(uVar2);
    (param_2)->int_allocRep(pcVar3);
    return param_2;
  }
  (**(code **)(*param_1 + 0x9c))(param_2);
  return param_2;
}


// Reference entry 10fd25c0; body size 119 bytes.
#line 1 "ENTRY_10fd25c0"

undefined4 * Recovered_10fd25c0::FUN_10fd25c0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCITimeSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10fdd5a0; body size 168 bytes.
#line 1 "ENTRY_10fdd5a0"

undefined4 * Recovered_10fdd5a0::FUN_10fdd5a0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    if (param_1 == (int *)&DAT_00000018) {
      param_1 = (int *)0x0;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCITooltip");
    if (bVar1) {
      piVar2 = param_1 + 0x1e;
      if (param_1 == (int *)&DAT_00000018) {
        piVar2 = (int *)0x0;
      }
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      if (param_1 == (int *)&DAT_00000018) {
        param_1 = (int *)0x0;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 10fe6e20; body size 119 bytes.
#line 1 "ENTRY_10fe6e20"

undefined4 * Recovered_10fe6e20::FUN_10fe6e20(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionWithIntDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10fe86d0; body size 119 bytes.
#line 1 "ENTRY_10fe86d0"

undefined4 * Recovered_10fe86d0::FUN_10fe86d0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionWithIntDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 10ff85e0; body size 153 bytes.
#line 1 "ENTRY_10ff85e0"

undefined4 * Recovered_10ff85e0::FUN_10ff85e0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIReorderable");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return param_2;
      }
    }
    else {
      bVar1 = (param_3)->operator==("SCIObj");
      if (!bVar1) {
        *param_2 = 0;
        return param_2;
      }
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      }
    }
  }
  return param_2;
}


// Reference entry 1102b260; body size 50 bytes.
#line 1 "ENTRY_1102b260"

SCStr * Recovered_1102b260::FUN_1102b260(SCStr *param_2)

{
  int * param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot19();
  pcVar2 = (char *)thunk_FUN_1109aba0(0x220c - (uint)(cVar1 != '\0'),&DAT_11882ff0);
  (param_2)->int_allocRep(pcVar2);
  return param_2;
}


// Reference entry 11030e00; body size 59 bytes.
#line 1 "ENTRY_11030e00"

SCStr * Recovered_11030e00::FUN_11030e00(SCStr *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  
  iVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot35();
  if (iVar1 == 6) {
    (param_2)->int_allocRep("restrictedqueue");
    return param_2;
  }
  thunk_FUN_1020bd10(param_2);
  return param_2;
}


// Reference entry 11037990; body size 119 bytes.
#line 1 "ENTRY_11037990"

undefined4 * Recovered_11037990::FUN_11037990(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionWithIntDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 11037ab0; body size 119 bytes.
#line 1 "ENTRY_11037ab0"

undefined4 * Recovered_11037ab0::FUN_11037ab0(undefined4 *param_2,SCStr *param_3)

{
  int * param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionWithIntDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return param_2;
  }
  bVar1 = (param_3)->operator==("SCIObj");
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = (undefined4)param_1;
  if (param_1 == (int *)0x0) {
    return param_2;
  }
  ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
  return param_2;
}


// Reference entry 11054800; body size 130 bytes.
#line 1 "ENTRY_11054800"

void __fastcall FUN_11054800(int param_1)

{
  char cVar1;
  SCStr aSStack_20 [4];
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  puStack_10 = (undefined4 *)0x1105480d;
  thunk_FUN_1104f960();
  if (*(char *)(param_1 + 0x15) != '\0') {
    *(undefined1 *)(param_1 + 0x15) = 0;
    puStack_10 = (undefined4 *)0x11054825;
    cVar1 = ((RecoveredVirtualSlots *)(param_1 + -0x48))->VirtualSlot40();
    puStack_10 = &DAT_11882ff0;
    if (cVar1 != '\0') {
      uStack_14 = 0x2284;
      puStack_18 = &DAT_11882ff0;
      uStack_1c = 0x2283;
      (aSStack_20)->int_allocRep("SCLIB_STR_Soundbar_NightSoundOn");
      thunk_FUN_11052090();
      return;
    }
    uStack_14 = 0x2285;
    puStack_18 = &DAT_11882ff0;
    uStack_1c = 0x2285;
    (aSStack_20)->int_allocRep("SCLIB_STR_Soundbar_NightSoundOff");
    thunk_FUN_11052090();
  }
  return;
}


// Reference entry 110548b0; body size 130 bytes.
#line 1 "ENTRY_110548b0"

void __fastcall FUN_110548b0(int param_1)

{
  char cVar1;
  SCStr aSStack_20 [4];
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  puStack_10 = (undefined4 *)0x110548bd;
  thunk_FUN_1104f960();
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(undefined1 *)(param_1 + 0x14) = 0;
    puStack_10 = (undefined4 *)0x110548d5;
    cVar1 = ((RecoveredVirtualSlots *)(param_1 + -0x48))->VirtualSlot38();
    puStack_10 = &DAT_11882ff0;
    if (cVar1 != '\0') {
      uStack_14 = 0x2286;
      puStack_18 = &DAT_11882ff0;
      uStack_1c = 0x2286;
      (aSStack_20)->int_allocRep("SCLIB_STR_Soundbar_SpeechEnhancementOn");
      thunk_FUN_11052090();
      return;
    }
    uStack_14 = 0x2287;
    puStack_18 = &DAT_11882ff0;
    uStack_1c = 0x2287;
    (aSStack_20)->int_allocRep("SCLIB_STR_Soundbar_SpeechEnhancementOff");
    thunk_FUN_11052090();
  }
  return;
}


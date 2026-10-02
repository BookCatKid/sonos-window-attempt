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
extern undefined1 DAT_1186d2ee;
extern undefined4 DAT_121a083c;
extern undefined4 * PTR_s_SCACCTMGR__1211908c;
extern undefined4 _DAT_11891018;
extern undefined4 _DAT_1189101c;
struct RecoveredString_FUN_1008c50b_101daf60 { void *rep; __forceinline RecoveredString_FUN_1008c50b_101daf60(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_101daf60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern undefined4 * __cdecl abi_call_thunk_FUN_101a2e90(undefined4 *, undefined4 *, undefined4 *);
extern undefined4 __cdecl abi_call_thunk_FUN_101e6c60(undefined4);
struct RecoveredString_FUN_1008c50b_101f16a0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_101f16a0() { abi_call_thunk_FUN_101e6c60((undefined4)((undefined4)this)); } ~RecoveredString_FUN_1008c50b_101f16a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_102c7380 { void *rep; __forceinline RecoveredString_FUN_1008c50b_102c7380(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102c7380() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_102c8ee0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_102c8ee0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102c8ee0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern void __cdecl abi_call_thunk_FUN_102c6ff0(void);
struct RecoveredString_FUN_1008c50b_102d1250 { void *rep; __forceinline RecoveredString_FUN_1008c50b_102d1250(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102d1250() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern void __fastcall abi_call_thunk_FUN_102d0c20(int);
extern void __fastcall abi_call_thunk_FUN_102d0100(int *);
extern void __fastcall abi_call_thunk_FUN_102cfe50(int);
struct RecoveredString_FUN_1008c50b_102d1750 { void *rep; __forceinline RecoveredString_FUN_1008c50b_102d1750(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102d1750() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_102e4df0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_102e4df0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102e4df0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot10Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_102e4eb0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_102e4eb0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102e4eb0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_102e4f40 { void *rep; __forceinline RecoveredString_FUN_1008c50b_102e4f40(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102e4f40() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10379b70 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10379b70(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10379b70() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_1037c140 { void *rep; __forceinline RecoveredString_FUN_1008c50b_1037c140(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_1037c140() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_1037c2c0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_1037c2c0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_1037c2c0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10381060 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10381060(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10381060() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10381240 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10381240(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10381240() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10381620 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10381620(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10381620() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10381810 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10381810(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10381810() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10381bc0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10381bc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10381bc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10381c50 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10381c50(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10381c50() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_103b8cd0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_103b8cd0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_103b8cd0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot5Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Invoke(void *); };
struct RecoveredString_FUN_1008c50b_103bcd10 { void *rep; __forceinline RecoveredString_FUN_1008c50b_103bcd10(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_103bcd10() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct CallABI_thunk_FUN_103bca20 { undefined4 thunk_FUN_103bca20(undefined4); };
struct RecoveredString_FUN_1008c50b_10553b20 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10553b20(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10553b20() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10553d60 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10553d60(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10553d60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10554060 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10554060(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10554060() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_105542a0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_105542a0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_105542a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10799800 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10799800(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10799800() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_1089e310 { void *rep; __forceinline RecoveredString_FUN_1008c50b_1089e310(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_1089e310() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10bf1220 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10bf1220() { abi_call_thunk_FUN_101e6c60((undefined4)((undefined4)this)); } ~RecoveredString_FUN_1008c50b_10bf1220() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c26970 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c26970(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c26970() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot32Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Invoke(void *); };
struct RecoveredString_FUN_1008c50b_10c65e50 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c65e50(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c65e50() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern int __cdecl abi_call_thunk_FUN_11261330(int, uint, undefined1 *, undefined4);
struct RecoveredString_FUN_1008c50b_10c65f30 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c65f30(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c65f30() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c66010 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c66010(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c66010() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c91730 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c91730(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c91730() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot11Count3 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Invoke(void *, void *, void *); };
extern void __fastcall abi_call_thunk_FUN_1148ac28(int);
struct CallABI_thunk_FUN_1125ce60 { undefined4 thunk_FUN_1125ce60(undefined4, uint); };
struct CallABI_thunk_FUN_1125cf40 { void thunk_FUN_1125cf40(undefined4); };
struct RecoveredString_FUN_1008c50b_10c91c30 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c91c30(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c91c30() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c91cd0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c91cd0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c91cd0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c91d70 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c91d70(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c91d70() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c91e10 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c91e10(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c91e10() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern void __fastcall abi_call_thunk_FUN_10c90390(int);
struct RecoveredString_FUN_1008c50b_10c922b0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c922b0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c922b0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c92350 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c92350(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c92350() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c923f0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c923f0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c923f0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c924a0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c924a0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c924a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c92880 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c92880(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c92880() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c92930 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c92930(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c92930() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c92bf0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c92bf0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c92bf0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c92c90 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10c92c90(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c92c90() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern void __fastcall abi_call_thunk_FUN_10c90fd0(int);
extern void __fastcall abi_call_thunk_FUN_10c90ce0(int);
struct RecoveredString_FUN_1008c50b_10d58cc0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10d58cc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10d58cc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10d58df0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10d58df0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10d58df0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10d78260 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10d78260(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10d78260() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot86Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Reserved32(); virtual int Reserved33(); virtual int Reserved34(); virtual int Reserved35(); virtual int Reserved36(); virtual int Reserved37(); virtual int Reserved38(); virtual int Reserved39(); virtual int Reserved40(); virtual int Reserved41(); virtual int Reserved42(); virtual int Reserved43(); virtual int Reserved44(); virtual int Reserved45(); virtual int Reserved46(); virtual int Reserved47(); virtual int Reserved48(); virtual int Reserved49(); virtual int Reserved50(); virtual int Reserved51(); virtual int Reserved52(); virtual int Reserved53(); virtual int Reserved54(); virtual int Reserved55(); virtual int Reserved56(); virtual int Reserved57(); virtual int Reserved58(); virtual int Reserved59(); virtual int Reserved60(); virtual int Reserved61(); virtual int Reserved62(); virtual int Reserved63(); virtual int Reserved64(); virtual int Reserved65(); virtual int Reserved66(); virtual int Reserved67(); virtual int Reserved68(); virtual int Reserved69(); virtual int Reserved70(); virtual int Reserved71(); virtual int Reserved72(); virtual int Reserved73(); virtual int Reserved74(); virtual int Reserved75(); virtual int Reserved76(); virtual int Reserved77(); virtual int Reserved78(); virtual int Reserved79(); virtual int Reserved80(); virtual int Reserved81(); virtual int Reserved82(); virtual int Reserved83(); virtual int Reserved84(); virtual int Reserved85(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_10dea460 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10dea460(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dea460() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot29Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Invoke(void *); };
struct RecoveredString_FUN_1008c50b_10e30cc0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10e30cc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e30cc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e73e70 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10e73e70(const char * p0) { new (this) SCStr(p0); } ~RecoveredString_FUN_1008c50b_10e73e70() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecb890 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ecb890(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecb890() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecb940 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ecb940(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecb940() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecb9f0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ecb9f0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecb9f0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10eccec0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10eccec0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eccec0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ece7b0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ece7b0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ece7b0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ece860 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ece860(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ece860() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ece910 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ece910(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ece910() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecea60 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ecea60(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecea60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10eceb10 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10eceb10(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eceb10() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecebc0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ecebc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecebc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecec70 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ecec70(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecec70() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10eced20 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10eced20(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eced20() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecef50 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ecef50(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecef50() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10f0bdc0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10f0bdc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f0bdc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern undefined4 * __cdecl abi_call_thunk_FUN_106986a0(undefined4 *, SCStr *);
struct RecoveredString_FUN_1008c50b_10ff12a0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ff12a0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ff12a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ff1340 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ff1340(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ff1340() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ff13f0 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ff13f0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ff13f0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ff6c20 { void *rep; __forceinline RecoveredString_FUN_1008c50b_10ff6c20(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ff6c20() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern void __fastcall abi_call_thunk_FUN_10ff3290(int *);
extern int thunk_FUN_101e6b50(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_103869d0(...);
extern int thunk_FUN_103bca20(...);
extern int thunk_FUN_103d63d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_10557e50(...);
extern int thunk_FUN_10558310(...);
extern int thunk_FUN_107bce80(...);
extern int thunk_FUN_10c5fc80(...);
extern int thunk_FUN_10c62330(...);
extern int thunk_FUN_10d5aa90(...);
extern int thunk_FUN_10eac8c0(...);
extern int thunk_FUN_10eacd60(...);
extern int thunk_FUN_10ead690(...);
extern int thunk_FUN_1100bc60(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_110c2130(...);
extern int thunk_FUN_1125cbd0(...);
extern int thunk_FUN_1125ce60(...);
extern int thunk_FUN_1125cf40(...);
extern int thunk_FUN_1148ac28(...);
struct Recovered_10c91730 { void FUN_10c91730(undefined4 param_2,undefined4 *param_3); };
// Reference entry 101daf60; body size 109 bytes.
#line 1 "ENTRY_101daf60"

undefined4 FUN_101daf60(undefined4 param_1)

{

{
RecoveredString_FUN_1008c50b_101daf60 recovered_string((char *)(PTR_s_SCACCTMGR__1211908c));

  abi_call_thunk_FUN_101a2e90((undefined4 *)(param_1), (undefined4 *)(((SCStr *)&recovered_string)), (undefined4 *)(&DAT_121a083c));
  }

  return param_1;
}


// Reference entry 101f16a0; body size 101 bytes.
#line 1 "ENTRY_101f16a0"

SCStr * __stdcall FUN_101f16a0(SCStr *param_1)

{

{
RecoveredString_FUN_1008c50b_101f16a0 recovered_string;

  new (param_1) SCStr(*(((SCStr *)&recovered_string)));
  }

  return param_1;
}


// Reference entry 102c7380; body size 119 bytes.
#line 1 "ENTRY_102c7380"

void FUN_102c7380(void)

{
  SCStr aSStack_30 [4];
  undefined4 uStack_2c;

  uStack_2c = 0x102c73b6;
{
RecoveredString_FUN_1008c50b_102c7380 recovered_string((char *)("SCIServiceAccountManager:onServiceAccountsChanged"));

  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 102c8ee0; body size 141 bytes.
#line 1 "ENTRY_102c8ee0"

void __fastcall FUN_102c8ee0(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  iStack_2c = 0x102c8f17;
{
RecoveredString_FUN_1008c50b_102c8ee0 recovered_string((char *)("SCIServiceAccountManager:onServiceAccountsChanged"));

  iStack_2c = param_1 + -8;
  new (aSStack_30) SCStr(*((SCStr *)((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  abi_call_thunk_FUN_102c6ff0();

  return;
}


// Reference entry 102d1250; body size 199 bytes.
#line 1 "ENTRY_102d1250"

void __fastcall FUN_102d1250(int param_1)

{
  int iStack_34;
  int iStack_30;

  if (*(int *)(param_1 + -8) != 0) {
    iStack_30 = thunk_FUN_110c2130();
    iStack_34 = param_1 + 0x138;
    thunk_FUN_1106a8d0();
    abi_call_thunk_FUN_102cfe50((int)(param_1));
    iStack_30 = 0x102d12b3;
{
RecoveredString_FUN_1008c50b_102d1250 recovered_string((char *)("SCIServiceDescriptorManager:onServiceDescriptorsChanged"));

    iStack_30 = param_1 + -0x10;
    new ((SCStr *)&iStack_34) SCStr(*((SCStr *)((SCStr *)&recovered_string)));
    thunk_FUN_103d65f0();
    }

    abi_call_thunk_FUN_102d0100((int *)(param_1));
    if (*(char *)(param_1 + 0x58) == '\0') {
      abi_call_thunk_FUN_102d0c20((int)(param_1));
    }
  }

  return;
}


// Reference entry 102d1750; body size 122 bytes.
#line 1 "ENTRY_102d1750"

void __fastcall FUN_102d1750(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  iStack_2c = 0x102d1789;
{
RecoveredString_FUN_1008c50b_102d1750 recovered_string((char *)("SCIServiceDescriptorManager:onServiceDescriptorsChanged"));

  iStack_2c = param_1 + -0xc;
  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 102e4df0; body size 115 bytes.
#line 1 "ENTRY_102e4df0"



void FUN_102e4df0(int *param_1,float param_2)

{

{
RecoveredString_FUN_1008c50b_102e4df0 recovered_string((char *)("WizardComponentKeyDuration"));

  ((RecoveredVirtualArgumentsSlot10Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)((int)(param_2 * _DAT_1189101c)));
  }

  return;
}


// Reference entry 102e4eb0; body size 115 bytes.
#line 1 "ENTRY_102e4eb0"



void FUN_102e4eb0(int *param_1,float param_2)

{

{
RecoveredString_FUN_1008c50b_102e4eb0 recovered_string((char *)("WizardComponentKeyOpacity"));

  ((RecoveredVirtualArgumentsSlot10Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)((int)(param_2 * _DAT_11891018)));
  }

  return;
}


// Reference entry 102e4f40; body size 115 bytes.
#line 1 "ENTRY_102e4f40"



void FUN_102e4f40(int *param_1,float param_2)

{

{
RecoveredString_FUN_1008c50b_102e4f40 recovered_string((char *)("WizardComponentKeyRotationAngle"));

  ((RecoveredVirtualArgumentsSlot10Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)((int)(param_2 * _DAT_1189101c)));
  }

  return;
}


// Reference entry 10379b70; body size 116 bytes.
#line 1 "ENTRY_10379b70"

undefined4 __stdcall FUN_10379b70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{

{
RecoveredString_FUN_1008c50b_10379b70 recovered_string((char *)(""));

  thunk_FUN_103869d0(param_1,param_2,0,((SCStr *)&recovered_string),param_3);
  }

  return param_1;
}


// Reference entry 1037c140; body size 115 bytes.
#line 1 "ENTRY_1037c140"

undefined4 __stdcall FUN_1037c140(undefined4 param_1,undefined4 param_2)

{

{
RecoveredString_FUN_1008c50b_1037c140 recovered_string((char *)(""));

  thunk_FUN_103869d0(param_1,3,0,((SCStr *)&recovered_string),param_2);
  }

  return param_1;
}


// Reference entry 1037c2c0; body size 116 bytes.
#line 1 "ENTRY_1037c2c0"

undefined4 __stdcall FUN_1037c2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{

{
RecoveredString_FUN_1008c50b_1037c2c0 recovered_string((char *)(""));

  thunk_FUN_103869d0(param_1,3,param_2,((SCStr *)&recovered_string),param_3);
  }

  return param_1;
}


// Reference entry 10381060; body size 115 bytes.
#line 1 "ENTRY_10381060"

undefined4 __stdcall FUN_10381060(undefined4 param_1,undefined4 param_2)

{

{
RecoveredString_FUN_1008c50b_10381060 recovered_string((char *)(""));

  thunk_FUN_103869d0(param_1,2,0,((SCStr *)&recovered_string),param_2);
  }

  return param_1;
}


// Reference entry 10381240; body size 115 bytes.
#line 1 "ENTRY_10381240"

undefined4 __stdcall FUN_10381240(undefined4 param_1,undefined4 param_2)

{

{
RecoveredString_FUN_1008c50b_10381240 recovered_string((char *)(""));

  thunk_FUN_103869d0(param_1,5,0,((SCStr *)&recovered_string),param_2);
  }

  return param_1;
}


// Reference entry 10381620; body size 116 bytes.
#line 1 "ENTRY_10381620"

undefined4 __stdcall FUN_10381620(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{

{
RecoveredString_FUN_1008c50b_10381620 recovered_string((char *)(""));

  thunk_FUN_103869d0(param_1,5,param_2,((SCStr *)&recovered_string),param_3);
  }

  return param_1;
}


// Reference entry 10381810; body size 116 bytes.
#line 1 "ENTRY_10381810"

undefined4 __stdcall FUN_10381810(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{

{
RecoveredString_FUN_1008c50b_10381810 recovered_string((char *)(""));

  thunk_FUN_103869d0(param_1,6,param_2,((SCStr *)&recovered_string),param_3);
  }

  return param_1;
}


// Reference entry 10381bc0; body size 115 bytes.
#line 1 "ENTRY_10381bc0"

undefined4 __stdcall FUN_10381bc0(undefined4 param_1,undefined4 param_2)

{

{
RecoveredString_FUN_1008c50b_10381bc0 recovered_string((char *)(""));

  thunk_FUN_103869d0(param_1,0,0,((SCStr *)&recovered_string),param_2);
  }

  return param_1;
}


// Reference entry 10381c50; body size 116 bytes.
#line 1 "ENTRY_10381c50"

undefined4 __stdcall FUN_10381c50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{

{
RecoveredString_FUN_1008c50b_10381c50 recovered_string((char *)(""));

  thunk_FUN_103869d0(param_1,0,param_2,((SCStr *)&recovered_string),param_3);
  }

  return param_1;
}


// Reference entry 103b8cd0; body size 139 bytes.
#line 1 "ENTRY_103b8cd0"

undefined1 __stdcall FUN_103b8cd0(int *param_1,SCStr *param_2)

{
  undefined1 uVar1;

  uint uVar3;
  char *pcVar4;

{
RecoveredString_FUN_1008c50b_103b8cd0 recovered_string((char *)("Feature-Browse:"));

  pcVar4 = "";
  if (*(char **)param_2 != (char *)0x0) {
    pcVar4 = *(char **)param_2;
  }
  uVar3 = (param_2)->length();
  (((SCStr *)&recovered_string))->append(pcVar4,uVar3);
  uVar1 = ((RecoveredVirtualArgumentsSlot5Count1 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return uVar1;
}


// Reference entry 103bcd10; body size 109 bytes.
#line 1 "ENTRY_103bcd10"

undefined4 __stdcall FUN_103bcd10(undefined4 param_1)

{
  undefined4 uVar1;

{
RecoveredString_FUN_1008c50b_103bcd10 recovered_string((char *)(""));

  uVar1 = ((CallABI_thunk_FUN_103bca20 *)(param_1))->thunk_FUN_103bca20((undefined4)(((SCStr *)&recovered_string)));
  }

  return uVar1;
}


// Reference entry 10553b20; body size 108 bytes.
#line 1 "ENTRY_10553b20"

undefined4 __stdcall FUN_10553b20(undefined4 param_1)

{

{
RecoveredString_FUN_1008c50b_10553b20 recovered_string((char *)("presentationMap"));

  thunk_FUN_10557e50(param_1,((SCStr *)&recovered_string));
  }

  return param_1;
}


// Reference entry 10553d60; body size 104 bytes.
#line 1 "ENTRY_10553d60"

undefined4 FUN_10553d60(void)

{
  undefined4 uVar1;

{
RecoveredString_FUN_1008c50b_10553d60 recovered_string((char *)("presentationMap"));

  uVar1 = thunk_FUN_10558310(((SCStr *)&recovered_string));
  }

  return uVar1;
}


// Reference entry 10554060; body size 108 bytes.
#line 1 "ENTRY_10554060"

undefined4 __stdcall FUN_10554060(undefined4 param_1)

{

{
RecoveredString_FUN_1008c50b_10554060 recovered_string((char *)("strings"));

  thunk_FUN_10557e50(param_1,((SCStr *)&recovered_string));
  }

  return param_1;
}


// Reference entry 105542a0; body size 104 bytes.
#line 1 "ENTRY_105542a0"

undefined4 FUN_105542a0(void)

{
  undefined4 uVar1;

{
RecoveredString_FUN_1008c50b_105542a0 recovered_string((char *)("strings"));

  uVar1 = thunk_FUN_10558310(((SCStr *)&recovered_string));
  }

  return uVar1;
}


// Reference entry 10799800; body size 114 bytes.
#line 1 "ENTRY_10799800"

undefined4 __stdcall FUN_10799800(undefined4 param_1)

{

{
RecoveredString_FUN_1008c50b_10799800 recovered_string((char *)(""));

  thunk_FUN_107bce80(param_1,1,1,0,((SCStr *)&recovered_string));
  }

  return param_1;
}


// Reference entry 1089e310; body size 129 bytes.
#line 1 "ENTRY_1089e310"

void FUN_1089e310(void)

{
  char cVar1;
  int iVar2;

  cVar1 = thunk_FUN_10eacd60();
  if (cVar1 != '\0') {
    iVar2 = thunk_FUN_10eac8c0();
    if (iVar2 == 3) {
{
RecoveredString_FUN_1008c50b_1089e310 recovered_string((char *)("No use of WAC in SonosNet"));

      thunk_FUN_10ead690(1,((SCStr *)&recovered_string));
      }

    }
  }

  return;
}


// Reference entry 10bf1220; body size 101 bytes.
#line 1 "ENTRY_10bf1220"

SCStr * __stdcall FUN_10bf1220(SCStr *param_1)

{

{
RecoveredString_FUN_1008c50b_10bf1220 recovered_string;

  new (param_1) SCStr(*(((SCStr *)&recovered_string)));
  }

  return param_1;
}


// Reference entry 10c26970; body size 108 bytes.
#line 1 "ENTRY_10c26970"

bool FUN_10c26970(int *param_1,char *param_2,int param_3)

{

  int iVar2;

{
RecoveredString_FUN_1008c50b_10c26970 recovered_string((char *)(param_2));

  iVar2 = ((RecoveredVirtualArgumentsSlot32Count1 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return iVar2 == param_3;
}


// Reference entry 10c65e50; body size 174 bytes.
#line 1 "ENTRY_10c65e50"

void __stdcall FUN_10c65e50(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;

  char local_418 [1028];

  puVar1 = &DAT_1186d2ee;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_1;
  }
  abi_call_thunk_FUN_11261330((int)(local_418), (uint)(0x401), (undefined1 *)(puVar1), (undefined4)(param_2));
{
RecoveredString_FUN_1008c50b_10c65e50 recovered_string((char *)(local_418));

  thunk_FUN_101e6b50(((SCStr *)&recovered_string));
  }

  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10c65f30; body size 174 bytes.
#line 1 "ENTRY_10c65f30"

void __stdcall FUN_10c65f30(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;

  char local_418 [1028];

  puVar1 = &DAT_1186d2ee;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_1;
  }
  abi_call_thunk_FUN_11261330((int)(local_418), (uint)(0x401), (undefined1 *)(puVar1), (undefined4)(param_2));
{
RecoveredString_FUN_1008c50b_10c65f30 recovered_string((char *)(local_418));

  thunk_FUN_101e6b50(((SCStr *)&recovered_string));
  }

  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10c66010; body size 174 bytes.
#line 1 "ENTRY_10c66010"

void __stdcall FUN_10c66010(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;

  char local_418 [1028];

  puVar1 = &DAT_1186d2ee;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_1;
  }
  abi_call_thunk_FUN_11261330((int)(local_418), (uint)(0x401), (undefined1 *)(puVar1), (undefined4)(param_2));
{
RecoveredString_FUN_1008c50b_10c66010 recovered_string((char *)(local_418));

  thunk_FUN_101e6b50(((SCStr *)&recovered_string));
  }

  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10c91730; body size 177 bytes.
#line 1 "ENTRY_10c91730"

void Recovered_10c91730::FUN_10c91730(undefined4 param_2,undefined4 *param_3)

{
  int * param_1 = (int *)this;
  undefined1 *puVar1;

  undefined4 local_30;
  char local_28 [20];

  local_30 = param_2;
  thunk_FUN_1125cbd0();
  puVar1 = &DAT_1186d2ee;
  if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_3;
  }
  ((CallABI_thunk_FUN_1125cf40 *)(param_1))->thunk_FUN_1125cf40((undefined4)(puVar1));
  ((CallABI_thunk_FUN_1125ce60 *)(param_1))->thunk_FUN_1125ce60((undefined4)(local_28), (uint)(0x12));
{
RecoveredString_FUN_1008c50b_10c91730 recovered_string((char *)(local_28));

  ((RecoveredVirtualArgumentsSlot11Count3 *)param_1)->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)), (void *)(0));
  }

  abi_call_thunk_FUN_1148ac28((int)(param_1));
  return;
}


// Reference entry 10c91c30; body size 122 bytes.
#line 1 "ENTRY_10c91c30"

void __fastcall FUN_10c91c30(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  iStack_2c = 0x10c91c69;
{
RecoveredString_FUN_1008c50b_10c91c30 recovered_string((char *)("SCHouseholdAdapter:onAreasChanged"));

  iStack_2c = param_1 + -0x18;
  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 10c91cd0; body size 122 bytes.
#line 1 "ENTRY_10c91cd0"

void __fastcall FUN_10c91cd0(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  iStack_2c = 0x10c91d09;
{
RecoveredString_FUN_1008c50b_10c91cd0 recovered_string((char *)("SCHouseholdAdapter:onAssociatedDeviceChanged"));

  iStack_2c = param_1 + -0x18;
  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 10c91d70; body size 122 bytes.
#line 1 "ENTRY_10c91d70"

void __fastcall FUN_10c91d70(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  iStack_2c = 0x10c91da9;
{
RecoveredString_FUN_1008c50b_10c91d70 recovered_string((char *)("SCHouseholdAdapter:onCurrentZoneGroupChanged"));

  iStack_2c = param_1 + -0x18;
  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 10c91e10; body size 139 bytes.
#line 1 "ENTRY_10c91e10"

void __fastcall FUN_10c91e10(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  if (*(char *)(param_1 + 0x30) == '\0') {
    *(undefined1 *)(param_1 + 0x30) = 1;
    abi_call_thunk_FUN_10c90390((int)(param_1));
  }
  iStack_2c = 0x10c91e5a;
{
RecoveredString_FUN_1008c50b_10c91e10 recovered_string((char *)("SCHouseholdAdapter:onFinishedConnectingToZPs"));

  iStack_2c = param_1 + -0x18;
  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 10c922b0; body size 122 bytes.
#line 1 "ENTRY_10c922b0"

void __fastcall FUN_10c922b0(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  iStack_2c = 0x10c922e9;
{
RecoveredString_FUN_1008c50b_10c922b0 recovered_string((char *)("SCHouseholdAdapter:onSecureSettingsChanged"));

  iStack_2c = param_1 + -0x18;
  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 10c92350; body size 122 bytes.
#line 1 "ENTRY_10c92350"

void __fastcall FUN_10c92350(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  iStack_2c = 0x10c92389;
{
RecoveredString_FUN_1008c50b_10c92350 recovered_string((char *)("SCHouseholdAdapter:onSettingsChanged"));

  iStack_2c = param_1 + -0x18;
  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 10c923f0; body size 122 bytes.
#line 1 "ENTRY_10c923f0"

void __fastcall FUN_10c923f0(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  iStack_2c = 0x10c92429;
{
RecoveredString_FUN_1008c50b_10c923f0 recovered_string((char *)("SCHouseholdAdapter:onSoftwareUpdateAvailableChanged"));

  iStack_2c = param_1 + -0x18;
  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 10c924a0; body size 122 bytes.
#line 1 "ENTRY_10c924a0"

void __fastcall FUN_10c924a0(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  iStack_2c = 0x10c924d9;
{
RecoveredString_FUN_1008c50b_10c924a0 recovered_string((char *)("SCHouseholdAdapter:onTestEnvChanged"));

  iStack_2c = param_1 + -0x18;
  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 10c92880; body size 134 bytes.
#line 1 "ENTRY_10c92880"

void __fastcall FUN_10c92880(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(*(int *)(param_1 + -0x10) + 0x13dc);
  iStack_2c = 0x10c928c5;
{
RecoveredString_FUN_1008c50b_10c92880 recovered_string((char *)("SCHouseholdAdapter:onUpdateManifestParse"));

  iStack_2c = param_1 + -0x18;
  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 10c92930; body size 122 bytes.
#line 1 "ENTRY_10c92930"

void __fastcall FUN_10c92930(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  iStack_2c = 0x10c92969;
{
RecoveredString_FUN_1008c50b_10c92930 recovered_string((char *)("SCHouseholdAdapter:onUpdatingZPs"));

  iStack_2c = param_1 + -0x18;
  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 10c92bf0; body size 122 bytes.
#line 1 "ENTRY_10c92bf0"

void __fastcall FUN_10c92bf0(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  iStack_2c = 0x10c92c29;
{
RecoveredString_FUN_1008c50b_10c92bf0 recovered_string((char *)("SCHouseholdAdapter:onZPUpdateComplete"));

  iStack_2c = param_1 + -0x18;
  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 10c92c90; body size 143 bytes.
#line 1 "ENTRY_10c92c90"

void __fastcall FUN_10c92c90(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  abi_call_thunk_FUN_10c90ce0((int)(param_1));
  abi_call_thunk_FUN_10c90fd0((int)(param_1));
  abi_call_thunk_FUN_10c90390((int)(param_1));
  iStack_2c = 0x10c92cde;
{
RecoveredString_FUN_1008c50b_10c92c90 recovered_string((char *)("SCHouseholdAdapter:onZoneGroupsChanged"));

  iStack_2c = param_1 + -0x18;
  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 10d58cc0; body size 149 bytes.
#line 1 "ENTRY_10d58cc0"

void FUN_10d58cc0(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  SCStr aSStack_30 [4];
  undefined4 uStack_2c;

  uStack_2c = 0x10d58cef;
  cVar2 = thunk_FUN_102d65b0();
  if (cVar2 != '\0') {
    thunk_FUN_10d5aa90();
    uVar1 = *param_1;
    uStack_2c = 0x10d58d0f;
{
RecoveredString_FUN_1008c50b_10d58cc0 recovered_string((char *)("SCIBrowseDataSource:onBrowseChanged"));

    uStack_2c = uVar1;
    new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
    thunk_FUN_103d63d0();
    }

  }

  return;
}


// Reference entry 10d58df0; body size 149 bytes.
#line 1 "ENTRY_10d58df0"

void FUN_10d58df0(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  SCStr aSStack_30 [4];
  undefined4 uStack_2c;

  uStack_2c = 0x10d58e1f;
  cVar2 = thunk_FUN_102d65b0();
  if (cVar2 != '\0') {
    thunk_FUN_10d5aa90();
    uVar1 = *param_1;
    uStack_2c = 0x10d58e3f;
{
RecoveredString_FUN_1008c50b_10d58df0 recovered_string((char *)("SCIBrowseDataSource:onBrowseChanged"));

    uStack_2c = uVar1;
    new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
    thunk_FUN_103d63d0();
    }

  }

  return;
}


// Reference entry 10d78260; body size 123 bytes.
#line 1 "ENTRY_10d78260"

undefined4 __fastcall FUN_10d78260(int *param_1)

{
  char cVar1;

  undefined4 uVar3;
  undefined4 local_18;

{
RecoveredString_FUN_1008c50b_10d78260 recovered_string((char *)("TokenPurpose"));

  cVar1 = ((RecoveredVirtualArgumentsSlot86Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(&local_18));
  }

  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar3 = local_18;
  }

  return uVar3;
}


// Reference entry 10dea460; body size 106 bytes.
#line 1 "ENTRY_10dea460"

bool FUN_10dea460(int *param_1,char *param_2)

{
  char cVar1;

{
RecoveredString_FUN_1008c50b_10dea460 recovered_string((char *)(param_2));

  cVar1 = ((RecoveredVirtualArgumentsSlot29Count1 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return cVar1 == '\0';
}


// Reference entry 10e30cc0; body size 123 bytes.
#line 1 "ENTRY_10e30cc0"

undefined4 __fastcall FUN_10e30cc0(int *param_1)

{
  char cVar1;

  undefined4 uVar3;
  undefined4 local_18;

{
RecoveredString_FUN_1008c50b_10e30cc0 recovered_string((char *)("TokenPurpose"));

  cVar1 = ((RecoveredVirtualArgumentsSlot86Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(&local_18));
  }

  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar3 = local_18;
  }

  return uVar3;
}


// Reference entry 10e73e70; body size 136 bytes.
#line 1 "ENTRY_10e73e70"

void __fastcall FUN_10e73e70(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uStack_28;

  if ((*(int *)(*(int *)(param_1 + 8) + 0x14c) != 0) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x148), piVar2 = (int *)*piVar1, piVar1 != piVar2))
  {
    uStack_28 = 0x10e73ebc;
{
RecoveredString_FUN_1008c50b_10e73e70 recovered_string((const char *)((SCStr *)(piVar2 + 4)));

    new ((SCStr *)&uStack_28) SCStr(*(((SCStr *)&recovered_string)));
    thunk_FUN_1100bc60();
    }

  }

  return;
}


// Reference entry 10ecb890; body size 132 bytes.
#line 1 "ENTRY_10ecb890"

int __fastcall FUN_10ecb890(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;

  thunk_FUN_10c62330();
{
RecoveredString_FUN_1008c50b_10ecb890 recovered_string((char *)("animationCaptionText"));

  iVar1 = **(int **)(param_1 + 4);
  uVar2 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar2);
  }

  return param_1;
}


// Reference entry 10ecb940; body size 132 bytes.
#line 1 "ENTRY_10ecb940"

int __fastcall FUN_10ecb940(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;

  thunk_FUN_10c62330();
{
RecoveredString_FUN_1008c50b_10ecb940 recovered_string((char *)("captionText"));

  iVar1 = **(int **)(param_1 + 4);
  uVar2 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar2);
  }

  return param_1;
}


// Reference entry 10ecb9f0; body size 132 bytes.
#line 1 "ENTRY_10ecb9f0"

int __fastcall FUN_10ecb9f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;

  thunk_FUN_10c62330();
{
RecoveredString_FUN_1008c50b_10ecb9f0 recovered_string((char *)("imageCaptionText"));

  iVar1 = **(int **)(param_1 + 4);
  uVar2 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar2);
  }

  return param_1;
}


// Reference entry 10eccec0; body size 132 bytes.
#line 1 "ENTRY_10eccec0"

int __fastcall FUN_10eccec0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;

  thunk_FUN_10c62330();
{
RecoveredString_FUN_1008c50b_10eccec0 recovered_string((char *)("labelText"));

  iVar1 = **(int **)(param_1 + 4);
  uVar2 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar2);
  }

  return param_1;
}


// Reference entry 10ece7b0; body size 132 bytes.
#line 1 "ENTRY_10ece7b0"

int __fastcall FUN_10ece7b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;

  thunk_FUN_10c62330();
{
RecoveredString_FUN_1008c50b_10ece7b0 recovered_string((char *)("subtext"));

  iVar1 = **(int **)(param_1 + 4);
  uVar2 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar2);
  }

  return param_1;
}


// Reference entry 10ece860; body size 131 bytes.
#line 1 "ENTRY_10ece860"

undefined4 * __fastcall FUN_10ece860(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;

  thunk_FUN_10c62330();
{
RecoveredString_FUN_1008c50b_10ece860 recovered_string((char *)("subText"));

  iVar1 = *(int *)*param_1;
  uVar2 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar2);
  }

  return param_1;
}


// Reference entry 10ece910; body size 132 bytes.
#line 1 "ENTRY_10ece910"

int __fastcall FUN_10ece910(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;

  thunk_FUN_10c62330();
{
RecoveredString_FUN_1008c50b_10ece910 recovered_string((char *)("terminationText"));

  iVar1 = **(int **)(param_1 + 4);
  uVar2 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar2);
  }

  return param_1;
}


// Reference entry 10ecea60; body size 132 bytes.
#line 1 "ENTRY_10ecea60"

int __fastcall FUN_10ecea60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;

  thunk_FUN_10c62330();
{
RecoveredString_FUN_1008c50b_10ecea60 recovered_string((char *)("text"));

  iVar1 = **(int **)(param_1 + 4);
  uVar2 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar2);
  }

  return param_1;
}


// Reference entry 10eceb10; body size 132 bytes.
#line 1 "ENTRY_10eceb10"

int __fastcall FUN_10eceb10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;

  thunk_FUN_10c62330();
{
RecoveredString_FUN_1008c50b_10eceb10 recovered_string((char *)("text"));

  iVar1 = **(int **)(param_1 + 4);
  uVar2 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar2);
  }

  return param_1;
}


// Reference entry 10ecebc0; body size 131 bytes.
#line 1 "ENTRY_10ecebc0"

undefined4 * __fastcall FUN_10ecebc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;

  thunk_FUN_10c62330();
{
RecoveredString_FUN_1008c50b_10ecebc0 recovered_string((char *)("validationText"));

  iVar1 = *(int *)*param_1;
  uVar2 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar2);
  }

  return param_1;
}


// Reference entry 10ecec70; body size 132 bytes.
#line 1 "ENTRY_10ecec70"

int __fastcall FUN_10ecec70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;

  thunk_FUN_10c62330();
{
RecoveredString_FUN_1008c50b_10ecec70 recovered_string((char *)("text"));

  iVar1 = **(int **)(param_1 + 4);
  uVar2 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar2);
  }

  return param_1;
}


// Reference entry 10eced20; body size 132 bytes.
#line 1 "ENTRY_10eced20"

int __fastcall FUN_10eced20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;

  thunk_FUN_10c62330();
{
RecoveredString_FUN_1008c50b_10eced20 recovered_string((char *)("text"));

  iVar1 = **(int **)(param_1 + 4);
  uVar2 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar2);
  }

  return param_1;
}


// Reference entry 10ecef50; body size 131 bytes.
#line 1 "ENTRY_10ecef50"

undefined4 * __fastcall FUN_10ecef50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;

  thunk_FUN_10c62330();
{
RecoveredString_FUN_1008c50b_10ecef50 recovered_string((char *)("text"));

  iVar1 = *(int *)*param_1;
  uVar2 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar2);
  }

  return param_1;
}


// Reference entry 10f0bdc0; body size 105 bytes.
#line 1 "ENTRY_10f0bdc0"

undefined4 __stdcall FUN_10f0bdc0(undefined4 param_1)

{

{
RecoveredString_FUN_1008c50b_10f0bdc0 recovered_string((char *)(""));

  abi_call_thunk_FUN_106986a0((undefined4 *)(param_1), (SCStr *)(((SCStr *)&recovered_string)));
  }

  return param_1;
}


// Reference entry 10ff12a0; body size 119 bytes.
#line 1 "ENTRY_10ff12a0"

void FUN_10ff12a0(void)

{
  SCStr aSStack_30 [4];
  undefined4 uStack_2c;

  uStack_2c = 0x10ff12d6;
{
RecoveredString_FUN_1008c50b_10ff12a0 recovered_string((char *)("SCIBrowseItem:onItemChanged"));

  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d63d0();
  }

  return;
}


// Reference entry 10ff1340; body size 119 bytes.
#line 1 "ENTRY_10ff1340"

void FUN_10ff1340(void)

{
  SCStr aSStack_30 [4];
  undefined4 uStack_2c;

  uStack_2c = 0x10ff1376;
{
RecoveredString_FUN_1008c50b_10ff1340 recovered_string((char *)("SCIBrowseItem:onItemChanged"));

  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d63d0();
  }

  return;
}


// Reference entry 10ff13f0; body size 119 bytes.
#line 1 "ENTRY_10ff13f0"

void FUN_10ff13f0(void)

{
  SCStr aSStack_30 [4];
  undefined4 uStack_2c;

  uStack_2c = 0x10ff1426;
{
RecoveredString_FUN_1008c50b_10ff13f0 recovered_string((char *)("SCIBrowseItem:onItemChanged"));

  new (aSStack_30) SCStr(*(((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  return;
}


// Reference entry 10ff6c20; body size 145 bytes.
#line 1 "ENTRY_10ff6c20"

void __fastcall FUN_10ff6c20(int param_1)

{
  SCStr aSStack_30 [4];
  int iStack_2c;

  iStack_2c = 0x10ff6c56;
{
RecoveredString_FUN_1008c50b_10ff6c20 recovered_string((char *)("SCIBrowseItem:onItemChanged"));

  iStack_2c = param_1;
  new (aSStack_30) SCStr(*((SCStr *)((SCStr *)&recovered_string)));
  thunk_FUN_103d65f0();
  }

  if (*(int *)(param_1 + 0x1c) != 0) {
    abi_call_thunk_FUN_10ff3290((int *)(param_1));
  }

  return;
}


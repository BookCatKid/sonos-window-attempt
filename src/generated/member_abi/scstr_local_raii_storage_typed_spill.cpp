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
  virtual int VirtualSlot102();
  virtual int VirtualSlot103();
  virtual int VirtualSlot104();
  virtual int VirtualSlot105();
  virtual int VirtualSlot106();
  virtual int VirtualSlot107();
  virtual int VirtualSlot108();
  virtual int VirtualSlot109();
  virtual int VirtualSlot110();
  virtual int VirtualSlot111();
  virtual int VirtualSlot112();
  virtual int VirtualSlot113();
  virtual int VirtualSlot114();
  virtual int VirtualSlot115();
  virtual int VirtualSlot116();
  virtual int VirtualSlot117();
};
extern undefined1 DAT_1186d2ee;
extern undefined4 DAT_1192ec68;
extern undefined4 DAT_121a083c;
extern undefined4 * PTR_s_SCACCTMGR__1211908c;
extern undefined4 _DAT_11891018;
extern undefined4 _DAT_1189101c;
struct RecoveredString_FUN_1008c50b_101bea30 { int * rep; __forceinline RecoveredString_FUN_1008c50b_101bea30(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_101bea30() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot18Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_101daf60 { void * rep; __forceinline RecoveredString_FUN_1008c50b_101daf60(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_101daf60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern undefined4 * __cdecl abi_call_thunk_FUN_101a2e90(undefined4 *, undefined4 *, undefined4 *);
extern undefined4 __cdecl abi_call_thunk_FUN_101e6c60(undefined4);
struct RecoveredString_FUN_1008c50b_101f16a0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_101f16a0() { abi_call_thunk_FUN_101e6c60((undefined4)((undefined4)this)); } ~RecoveredString_FUN_1008c50b_101f16a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_101f9400 { int * rep; __forceinline RecoveredString_FUN_1008c50b_101f9400(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_101f9400() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot13Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_102c7380 { void * rep; __forceinline RecoveredString_FUN_1008c50b_102c7380(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102c7380() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_102c8ee0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_102c8ee0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102c8ee0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern void __cdecl abi_call_thunk_FUN_102c6ff0(void);
struct RecoveredString_FUN_1008c50b_102d1250 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_102d1250(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102d1250() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern void __fastcall abi_call_thunk_FUN_102d0c20(int);
extern void __fastcall abi_call_thunk_FUN_102d0100(int *);
extern void __fastcall abi_call_thunk_FUN_102cfe50(int);
struct RecoveredString_FUN_1008c50b_102d1750 { void * rep; __forceinline RecoveredString_FUN_1008c50b_102d1750(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102d1750() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_102e4df0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_102e4df0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102e4df0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot10Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_102e4eb0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_102e4eb0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102e4eb0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_102e4f40 { void * rep; __forceinline RecoveredString_FUN_1008c50b_102e4f40(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_102e4f40() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10372c10 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10372c10(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10372c10() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot53Count3 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Reserved32(); virtual int Reserved33(); virtual int Reserved34(); virtual int Reserved35(); virtual int Reserved36(); virtual int Reserved37(); virtual int Reserved38(); virtual int Reserved39(); virtual int Reserved40(); virtual int Reserved41(); virtual int Reserved42(); virtual int Reserved43(); virtual int Reserved44(); virtual int Reserved45(); virtual int Reserved46(); virtual int Reserved47(); virtual int Reserved48(); virtual int Reserved49(); virtual int Reserved50(); virtual int Reserved51(); virtual int Reserved52(); virtual int Invoke(void *, void *, void *); };
struct RecoveredString_FUN_1008c50b_10379b70 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10379b70(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10379b70() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_1037c140 { void * rep; __forceinline RecoveredString_FUN_1008c50b_1037c140(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_1037c140() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_1037c2c0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_1037c2c0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_1037c2c0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_1037cf40 { char * rep; __forceinline RecoveredString_FUN_1008c50b_1037cf40(const char * p0) { new (this) SCStr(p0); } ~RecoveredString_FUN_1008c50b_1037cf40() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct CallABI_thunk_FUN_1012d130 { int * thunk_FUN_1012d130(void *, uint); };
struct RecoveredString_FUN_1008c50b_10381060 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10381060(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10381060() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10381240 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10381240(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10381240() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10381620 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10381620(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10381620() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10381810 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10381810(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10381810() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10381bc0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10381bc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10381bc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10381c50 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10381c50(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10381c50() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_103b8cd0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_103b8cd0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_103b8cd0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot5Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Invoke(void *); };
struct RecoveredString_FUN_1008c50b_103bcd10 { void * rep; __forceinline RecoveredString_FUN_1008c50b_103bcd10(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_103bcd10() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct CallABI_thunk_FUN_103bca20 { undefined4 thunk_FUN_103bca20(undefined4); };
struct RecoveredString_FUN_1008c50b_10401840 { char * rep; __forceinline RecoveredString_FUN_1008c50b_10401840(const char * p0) { new (this) SCStr(p0); } ~RecoveredString_FUN_1008c50b_10401840() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10534750 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10534750(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10534750() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot56Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Reserved32(); virtual int Reserved33(); virtual int Reserved34(); virtual int Reserved35(); virtual int Reserved36(); virtual int Reserved37(); virtual int Reserved38(); virtual int Reserved39(); virtual int Reserved40(); virtual int Reserved41(); virtual int Reserved42(); virtual int Reserved43(); virtual int Reserved44(); virtual int Reserved45(); virtual int Reserved46(); virtual int Reserved47(); virtual int Reserved48(); virtual int Reserved49(); virtual int Reserved50(); virtual int Reserved51(); virtual int Reserved52(); virtual int Reserved53(); virtual int Reserved54(); virtual int Reserved55(); virtual int Invoke(void *); };
struct RecoveredString_FUN_1008c50b_105359c0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_105359c0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_105359c0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_1054b640 { int * rep; __forceinline RecoveredString_FUN_1008c50b_1054b640(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_1054b640() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot57Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Reserved32(); virtual int Reserved33(); virtual int Reserved34(); virtual int Reserved35(); virtual int Reserved36(); virtual int Reserved37(); virtual int Reserved38(); virtual int Reserved39(); virtual int Reserved40(); virtual int Reserved41(); virtual int Reserved42(); virtual int Reserved43(); virtual int Reserved44(); virtual int Reserved45(); virtual int Reserved46(); virtual int Reserved47(); virtual int Reserved48(); virtual int Reserved49(); virtual int Reserved50(); virtual int Reserved51(); virtual int Reserved52(); virtual int Reserved53(); virtual int Reserved54(); virtual int Reserved55(); virtual int Reserved56(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_1054b7c0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_1054b7c0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_1054b7c0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10553390 { int rep; __forceinline RecoveredString_FUN_1008c50b_10553390(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10553390() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot6Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_10553b20 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10553b20(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10553b20() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10553d60 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10553d60(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10553d60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10554060 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10554060(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10554060() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_105542a0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_105542a0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_105542a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_106c1c80 { int rep; __forceinline RecoveredString_FUN_1008c50b_106c1c80(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_106c1c80() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_106d5d40 { int rep; __forceinline RecoveredString_FUN_1008c50b_106d5d40(const char * p0) { new (this) SCStr(p0); } ~RecoveredString_FUN_1008c50b_106d5d40() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct CallABI_thunk_FUN_101a2b90 { int * thunk_FUN_101a2b90(int *); };
struct RecoveredString_FUN_1008c50b_10799800 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10799800(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10799800() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_107bcac0 { int rep; __forceinline RecoveredString_FUN_1008c50b_107bcac0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_107bcac0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_1089e310 { void * rep; __forceinline RecoveredString_FUN_1008c50b_1089e310(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_1089e310() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_109ec600 { int rep; __forceinline RecoveredString_FUN_1008c50b_109ec600(const char * p0) { new (this) SCStr(p0); } ~RecoveredString_FUN_1008c50b_109ec600() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct CallABI_thunk_FUN_10eb0d10 { void thunk_FUN_10eb0d10(char *, undefined4); };
struct CallABI_thunk_FUN_106cf050 { void thunk_FUN_106cf050(undefined4); };
extern void __cdecl abi_call_thunk_FUN_10302280(undefined4, char *);
struct RecoveredString_FUN_1008c50b_10bf1220 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10bf1220() { abi_call_thunk_FUN_101e6c60((undefined4)((undefined4)this)); } ~RecoveredString_FUN_1008c50b_10bf1220() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c26970 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c26970(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c26970() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot32Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Invoke(void *); };
struct RecoveredString_FUN_1008c50b_10c65e50 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c65e50(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c65e50() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern int __cdecl abi_call_thunk_FUN_11261330(int, uint, undefined1 *, undefined4);
struct RecoveredString_FUN_1008c50b_10c65f30 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c65f30(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c65f30() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c66010 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c66010(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c66010() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c91730 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c91730(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c91730() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot11Count3 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Invoke(void *, void *, void *); };
extern void __fastcall abi_call_thunk_FUN_1148ac28(int);
struct CallABI_thunk_FUN_1125ce60 { undefined4 thunk_FUN_1125ce60(undefined4, uint); };
struct CallABI_thunk_FUN_1125cf40 { void thunk_FUN_1125cf40(undefined4); };
struct RecoveredString_FUN_1008c50b_10c91c30 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c91c30(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c91c30() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c91cd0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c91cd0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c91cd0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c91d70 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c91d70(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c91d70() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c91e10 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c91e10(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c91e10() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern void __fastcall abi_call_thunk_FUN_10c90390(int);
struct RecoveredString_FUN_1008c50b_10c922b0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c922b0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c922b0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c92350 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c92350(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c92350() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c923f0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c923f0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c923f0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c924a0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c924a0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c924a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c92880 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c92880(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c92880() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c92930 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c92930(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c92930() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c92bf0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c92bf0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c92bf0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10c92c90 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10c92c90(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10c92c90() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern void __fastcall abi_call_thunk_FUN_10c90fd0(int);
extern void __fastcall abi_call_thunk_FUN_10c90ce0(int);
struct RecoveredString_FUN_1008c50b_10c97560 { int rep; __forceinline RecoveredString_FUN_1008c50b_10c97560(const char * p0) { new (this) SCStr(p0); } ~RecoveredString_FUN_1008c50b_10c97560() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern undefined4 * __cdecl abi_call_thunk_FUN_10c9bf20(undefined4 *, undefined4);
struct RecoveredString_FUN_1008c50b_10ca79a0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10ca79a0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ca79a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ca7f20 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10ca7f20(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ca7f20() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot52Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Reserved32(); virtual int Reserved33(); virtual int Reserved34(); virtual int Reserved35(); virtual int Reserved36(); virtual int Reserved37(); virtual int Reserved38(); virtual int Reserved39(); virtual int Reserved40(); virtual int Reserved41(); virtual int Reserved42(); virtual int Reserved43(); virtual int Reserved44(); virtual int Reserved45(); virtual int Reserved46(); virtual int Reserved47(); virtual int Reserved48(); virtual int Reserved49(); virtual int Reserved50(); virtual int Reserved51(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_10ca7fb0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10ca7fb0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ca7fb0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ca8040 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10ca8040(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ca8040() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ca80d0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10ca80d0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ca80d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ca9010 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10ca9010(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ca9010() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ca90a0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10ca90a0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ca90a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ca9230 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ca9230(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ca9230() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot15Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Invoke(void *); };
struct RecoveredString_FUN_1008c50b_10ca9320 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10ca9320(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ca9320() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ca93b0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10ca93b0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ca93b0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ca9ab0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ca9ab0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ca9ab0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10cb1cc0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10cb1cc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10cb1cc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10cb1d60 { int rep; __forceinline RecoveredString_FUN_1008c50b_10cb1d60(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10cb1d60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10cb1f90 { int rep; __forceinline RecoveredString_FUN_1008c50b_10cb1f90(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10cb1f90() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern undefined1 __cdecl abi_call_thunk_FUN_10ca8380(void);
extern undefined1 __fastcall abi_call_thunk_FUN_10ca8880(int *);
struct RecoveredString_FUN_1008c50b_10cb2070 { int rep; __forceinline RecoveredString_FUN_1008c50b_10cb2070(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10cb2070() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10cb6f30 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10cb6f30(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10cb6f30() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot55Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Reserved32(); virtual int Reserved33(); virtual int Reserved34(); virtual int Reserved35(); virtual int Reserved36(); virtual int Reserved37(); virtual int Reserved38(); virtual int Reserved39(); virtual int Reserved40(); virtual int Reserved41(); virtual int Reserved42(); virtual int Reserved43(); virtual int Reserved44(); virtual int Reserved45(); virtual int Reserved46(); virtual int Reserved47(); virtual int Reserved48(); virtual int Reserved49(); virtual int Reserved50(); virtual int Reserved51(); virtual int Reserved52(); virtual int Reserved53(); virtual int Reserved54(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_10cb6fc0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10cb6fc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10cb6fc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10cb7190 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10cb7190(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10cb7190() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10cb72e0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10cb72e0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10cb72e0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot53Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Reserved32(); virtual int Reserved33(); virtual int Reserved34(); virtual int Reserved35(); virtual int Reserved36(); virtual int Reserved37(); virtual int Reserved38(); virtual int Reserved39(); virtual int Reserved40(); virtual int Reserved41(); virtual int Reserved42(); virtual int Reserved43(); virtual int Reserved44(); virtual int Reserved45(); virtual int Reserved46(); virtual int Reserved47(); virtual int Reserved48(); virtual int Reserved49(); virtual int Reserved50(); virtual int Reserved51(); virtual int Reserved52(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_10cb7370 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10cb7370(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10cb7370() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10cb7420 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10cb7420(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10cb7420() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10cb75b0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10cb75b0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10cb75b0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10cd23b0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10cd23b0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10cd23b0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ce1ab0 { char * rep; __forceinline RecoveredString_FUN_1008c50b_10ce1ab0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ce1ab0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10d58cc0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10d58cc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10d58cc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10d58df0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10d58df0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10d58df0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10d6f2b0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10d6f2b0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10d6f2b0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10d78260 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10d78260(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10d78260() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot86Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Reserved32(); virtual int Reserved33(); virtual int Reserved34(); virtual int Reserved35(); virtual int Reserved36(); virtual int Reserved37(); virtual int Reserved38(); virtual int Reserved39(); virtual int Reserved40(); virtual int Reserved41(); virtual int Reserved42(); virtual int Reserved43(); virtual int Reserved44(); virtual int Reserved45(); virtual int Reserved46(); virtual int Reserved47(); virtual int Reserved48(); virtual int Reserved49(); virtual int Reserved50(); virtual int Reserved51(); virtual int Reserved52(); virtual int Reserved53(); virtual int Reserved54(); virtual int Reserved55(); virtual int Reserved56(); virtual int Reserved57(); virtual int Reserved58(); virtual int Reserved59(); virtual int Reserved60(); virtual int Reserved61(); virtual int Reserved62(); virtual int Reserved63(); virtual int Reserved64(); virtual int Reserved65(); virtual int Reserved66(); virtual int Reserved67(); virtual int Reserved68(); virtual int Reserved69(); virtual int Reserved70(); virtual int Reserved71(); virtual int Reserved72(); virtual int Reserved73(); virtual int Reserved74(); virtual int Reserved75(); virtual int Reserved76(); virtual int Reserved77(); virtual int Reserved78(); virtual int Reserved79(); virtual int Reserved80(); virtual int Reserved81(); virtual int Reserved82(); virtual int Reserved83(); virtual int Reserved84(); virtual int Reserved85(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_10d7a4d0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10d7a4d0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10d7a4d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dea460 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10dea460(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dea460() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot29Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Invoke(void *); };
struct RecoveredString_FUN_1008c50b_10df2eb0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10df2eb0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df2eb0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot30Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Invoke(void *); };
struct RecoveredString_FUN_1008c50b_10df3f20 { int rep; __forceinline RecoveredString_FUN_1008c50b_10df3f20(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10df3f20() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10dfc5e0 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10dfc5e0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10dfc5e0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct CallABI_thunk_FUN_10df7a00 { undefined4 thunk_FUN_10df7a00(undefined4); };
struct RecoveredString_FUN_1008c50b_10e07d00 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e07d00(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e07d00() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot16Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_10e07d90 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e07d90(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e07d90() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot7Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_10e07e20 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e07e20(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e07e20() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e07eb0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e07eb0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e07eb0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e07f40 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e07f40(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e07f40() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08200 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08200(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08200() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08290 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08290(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08290() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08320 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08320(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08320() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e083b0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e083b0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e083b0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08440 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08440(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08440() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e084d0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e084d0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e084d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08560 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08560(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08560() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e085f0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e085f0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e085f0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08870 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08870(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08870() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08900 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08900(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08900() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08990 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08990(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08990() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08a20 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08a20(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08a20() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08ab0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08ab0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08ab0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08b40 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08b40(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08b40() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08bd0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08bd0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08bd0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08c60 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08c60(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08c60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08cf0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08cf0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08cf0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08d80 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08d80(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08d80() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08e10 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08e10(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08e10() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08ea0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08ea0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08ea0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08f30 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08f30(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08f30() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e08fc0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e08fc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e08fc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e09050 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e09050(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e09050() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e09590 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e09590(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e09590() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e09620 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e09620(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e09620() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e09780 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e09780(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e09780() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e099d0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e099d0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e099d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e09a60 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e09a60(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e09a60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e09af0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e09af0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e09af0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e09b80 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e09b80(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e09b80() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e09c10 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e09c10(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e09c10() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e09ca0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e09ca0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e09ca0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e09d30 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e09d30(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e09d30() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e09dc0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e09dc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e09dc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e09e50 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e09e50(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e09e50() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e152c0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e152c0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e152c0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e15370 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e15370(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e15370() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e15420 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e15420(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e15420() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e154b0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e154b0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e154b0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e15560 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e15560(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e15560() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e2cd60 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e2cd60(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e2cd60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e30cc0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10e30cc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e30cc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e3e3f0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e3e3f0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e3e3f0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e3e570 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e3e570(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e3e570() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e3e610 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e3e610(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e3e610() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e3f680 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10e3f680(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e3f680() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e45750 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e45750(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e45750() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e52500 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e52500(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e52500() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e525b0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e525b0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e525b0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e52790 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e52790(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e52790() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot117Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Reserved32(); virtual int Reserved33(); virtual int Reserved34(); virtual int Reserved35(); virtual int Reserved36(); virtual int Reserved37(); virtual int Reserved38(); virtual int Reserved39(); virtual int Reserved40(); virtual int Reserved41(); virtual int Reserved42(); virtual int Reserved43(); virtual int Reserved44(); virtual int Reserved45(); virtual int Reserved46(); virtual int Reserved47(); virtual int Reserved48(); virtual int Reserved49(); virtual int Reserved50(); virtual int Reserved51(); virtual int Reserved52(); virtual int Reserved53(); virtual int Reserved54(); virtual int Reserved55(); virtual int Reserved56(); virtual int Reserved57(); virtual int Reserved58(); virtual int Reserved59(); virtual int Reserved60(); virtual int Reserved61(); virtual int Reserved62(); virtual int Reserved63(); virtual int Reserved64(); virtual int Reserved65(); virtual int Reserved66(); virtual int Reserved67(); virtual int Reserved68(); virtual int Reserved69(); virtual int Reserved70(); virtual int Reserved71(); virtual int Reserved72(); virtual int Reserved73(); virtual int Reserved74(); virtual int Reserved75(); virtual int Reserved76(); virtual int Reserved77(); virtual int Reserved78(); virtual int Reserved79(); virtual int Reserved80(); virtual int Reserved81(); virtual int Reserved82(); virtual int Reserved83(); virtual int Reserved84(); virtual int Reserved85(); virtual int Reserved86(); virtual int Reserved87(); virtual int Reserved88(); virtual int Reserved89(); virtual int Reserved90(); virtual int Reserved91(); virtual int Reserved92(); virtual int Reserved93(); virtual int Reserved94(); virtual int Reserved95(); virtual int Reserved96(); virtual int Reserved97(); virtual int Reserved98(); virtual int Reserved99(); virtual int Reserved100(); virtual int Reserved101(); virtual int Reserved102(); virtual int Reserved103(); virtual int Reserved104(); virtual int Reserved105(); virtual int Reserved106(); virtual int Reserved107(); virtual int Reserved108(); virtual int Reserved109(); virtual int Reserved110(); virtual int Reserved111(); virtual int Reserved112(); virtual int Reserved113(); virtual int Reserved114(); virtual int Reserved115(); virtual int Reserved116(); virtual int Invoke(void *); };
extern void __cdecl abi_call_thunk_FUN_112af4e0(undefined4, undefined4, undefined4);
struct RecoveredString_FUN_1008c50b_10e73e70 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10e73e70(const char * p0) { new (this) SCStr(p0); } ~RecoveredString_FUN_1008c50b_10e73e70() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e829d0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e829d0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e829d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e86900 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10e86900(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e86900() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e86c00 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e86c00(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e86c00() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot105Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Reserved32(); virtual int Reserved33(); virtual int Reserved34(); virtual int Reserved35(); virtual int Reserved36(); virtual int Reserved37(); virtual int Reserved38(); virtual int Reserved39(); virtual int Reserved40(); virtual int Reserved41(); virtual int Reserved42(); virtual int Reserved43(); virtual int Reserved44(); virtual int Reserved45(); virtual int Reserved46(); virtual int Reserved47(); virtual int Reserved48(); virtual int Reserved49(); virtual int Reserved50(); virtual int Reserved51(); virtual int Reserved52(); virtual int Reserved53(); virtual int Reserved54(); virtual int Reserved55(); virtual int Reserved56(); virtual int Reserved57(); virtual int Reserved58(); virtual int Reserved59(); virtual int Reserved60(); virtual int Reserved61(); virtual int Reserved62(); virtual int Reserved63(); virtual int Reserved64(); virtual int Reserved65(); virtual int Reserved66(); virtual int Reserved67(); virtual int Reserved68(); virtual int Reserved69(); virtual int Reserved70(); virtual int Reserved71(); virtual int Reserved72(); virtual int Reserved73(); virtual int Reserved74(); virtual int Reserved75(); virtual int Reserved76(); virtual int Reserved77(); virtual int Reserved78(); virtual int Reserved79(); virtual int Reserved80(); virtual int Reserved81(); virtual int Reserved82(); virtual int Reserved83(); virtual int Reserved84(); virtual int Reserved85(); virtual int Reserved86(); virtual int Reserved87(); virtual int Reserved88(); virtual int Reserved89(); virtual int Reserved90(); virtual int Reserved91(); virtual int Reserved92(); virtual int Reserved93(); virtual int Reserved94(); virtual int Reserved95(); virtual int Reserved96(); virtual int Reserved97(); virtual int Reserved98(); virtual int Reserved99(); virtual int Reserved100(); virtual int Reserved101(); virtual int Reserved102(); virtual int Reserved103(); virtual int Reserved104(); virtual int Invoke(void *); };
struct RecoveredString_FUN_1008c50b_10e86ca0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e86ca0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e86ca0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10e89890 { int rep; __forceinline RecoveredString_FUN_1008c50b_10e89890(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10e89890() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10eb2de0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10eb2de0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eb2de0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot28Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_10eb2f30 { int rep; __forceinline RecoveredString_FUN_1008c50b_10eb2f30(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eb2f30() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10eb2fc0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10eb2fc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eb2fc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ec6870 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ec6870(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ec6870() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ec6900 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ec6900(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ec6900() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ec6990 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ec6990(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ec6990() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ec6ab0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ec6ab0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ec6ab0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ec7220 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ec7220(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ec7220() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ec77a0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ec77a0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ec77a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ec7940 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ec7940(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ec7940() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ec79d0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ec79d0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ec79d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ec7a60 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ec7a60(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ec7a60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ec7af0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ec7af0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ec7af0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ec7b90 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ec7b90(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ec7b90() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ec7d80 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ec7d80(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ec7d80() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10eca170 { int rep; __forceinline RecoveredString_FUN_1008c50b_10eca170(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eca170() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10eca2b0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10eca2b0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eca2b0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10eca340 { int rep; __forceinline RecoveredString_FUN_1008c50b_10eca340(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eca340() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10eca3d0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10eca3d0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eca3d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecb4e0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecb4e0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecb4e0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecb640 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecb640(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecb640() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecb6d0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecb6d0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecb6d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecb800 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecb800(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecb800() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecb890 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10ecb890(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecb890() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecb940 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10ecb940(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecb940() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecb9f0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10ecb9f0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecb9f0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecbda0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecbda0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecbda0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecbe40 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecbe40(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecbe40() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecc360 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecc360(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecc360() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10eccc30 { int rep; __forceinline RecoveredString_FUN_1008c50b_10eccc30(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eccc30() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecccc0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecccc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecccc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10eccec0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10eccec0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eccec0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecd540 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecd540(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecd540() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecd5d0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecd5d0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecd5d0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecd660 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecd660(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecd660() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecdcc0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecdcc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecdcc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ece320 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ece320(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ece320() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ece7b0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10ece7b0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ece7b0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ece860 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10ece860(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ece860() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ece910 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10ece910(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ece910() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ece9c0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ece9c0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ece9c0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecea60 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10ecea60(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecea60() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10eceb10 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10eceb10(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eceb10() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecebc0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10ecebc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecebc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecec70 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10ecec70(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecec70() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10eced20 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10eced20(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10eced20() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecef50 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10ecef50(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecef50() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecf000 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecf000(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecf000() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecf0a0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecf0a0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecf0a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecf140 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecf140(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecf140() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecf1e0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecf1e0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecf1e0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecf280 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecf280(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecf280() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecf320 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecf320(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecf320() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecf3c0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecf3c0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecf3c0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecf460 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecf460(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecf460() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecf500 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecf500(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecf500() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecf640 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecf640(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecf640() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecf6e0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecf6e0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecf6e0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ecf780 { int rep; __forceinline RecoveredString_FUN_1008c50b_10ecf780(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ecf780() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10f0bdc0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10f0bdc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f0bdc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern undefined4 * __cdecl abi_call_thunk_FUN_106986a0(undefined4 *, SCStr *);
struct RecoveredString_FUN_1008c50b_10f48610 { int rep; __forceinline RecoveredString_FUN_1008c50b_10f48610(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f48610() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot21Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Invoke(void *, void *); };
struct RecoveredString_FUN_1008c50b_10f486a0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10f486a0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f486a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10f48bc0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10f48bc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f48bc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10f48c50 { int rep; __forceinline RecoveredString_FUN_1008c50b_10f48c50(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f48c50() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10f48e00 { int rep; __forceinline RecoveredString_FUN_1008c50b_10f48e00(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f48e00() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot22Count2 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Invoke(void *, void *); };
extern void __cdecl abi_call_thunk_FUN_10f49170(void);
struct RecoveredString_FUN_1008c50b_10f68dc0 { int rep; __forceinline RecoveredString_FUN_1008c50b_10f68dc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f68dc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct CallABI_thunk_FUN_110a3e90 { void thunk_FUN_110a3e90(char); };
struct RecoveredString_FUN_1008c50b_10f90090 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10f90090(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f90090() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10f908a0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10f908a0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f908a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10f91310 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10f91310(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f91310() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10f929c0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10f929c0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f929c0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredVirtualArgumentsSlot54Count1 { virtual int Reserved0(); virtual int Reserved1(); virtual int Reserved2(); virtual int Reserved3(); virtual int Reserved4(); virtual int Reserved5(); virtual int Reserved6(); virtual int Reserved7(); virtual int Reserved8(); virtual int Reserved9(); virtual int Reserved10(); virtual int Reserved11(); virtual int Reserved12(); virtual int Reserved13(); virtual int Reserved14(); virtual int Reserved15(); virtual int Reserved16(); virtual int Reserved17(); virtual int Reserved18(); virtual int Reserved19(); virtual int Reserved20(); virtual int Reserved21(); virtual int Reserved22(); virtual int Reserved23(); virtual int Reserved24(); virtual int Reserved25(); virtual int Reserved26(); virtual int Reserved27(); virtual int Reserved28(); virtual int Reserved29(); virtual int Reserved30(); virtual int Reserved31(); virtual int Reserved32(); virtual int Reserved33(); virtual int Reserved34(); virtual int Reserved35(); virtual int Reserved36(); virtual int Reserved37(); virtual int Reserved38(); virtual int Reserved39(); virtual int Reserved40(); virtual int Reserved41(); virtual int Reserved42(); virtual int Reserved43(); virtual int Reserved44(); virtual int Reserved45(); virtual int Reserved46(); virtual int Reserved47(); virtual int Reserved48(); virtual int Reserved49(); virtual int Reserved50(); virtual int Reserved51(); virtual int Reserved52(); virtual int Reserved53(); virtual int Invoke(void *); };
struct RecoveredString_FUN_1008c50b_10f96cc0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10f96cc0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f96cc0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10f98f30 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10f98f30(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10f98f30() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10faa300 { int rep; __forceinline RecoveredString_FUN_1008c50b_10faa300(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10faa300() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10fb9350 { int rep; __forceinline RecoveredString_FUN_1008c50b_10fb9350(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10fb9350() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10fb93e0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10fb93e0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10fb93e0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10fbd920 { int rep; __forceinline RecoveredString_FUN_1008c50b_10fbd920(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10fbd920() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10fc0550 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10fc0550(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10fc0550() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10fc05e0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_10fc05e0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10fc05e0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ff12a0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10ff12a0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ff12a0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ff1340 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10ff1340(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ff1340() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ff13f0 { void * rep; __forceinline RecoveredString_FUN_1008c50b_10ff13f0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ff13f0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
struct RecoveredString_FUN_1008c50b_10ff6c20 { undefined4 rep; __forceinline RecoveredString_FUN_1008c50b_10ff6c20(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_10ff6c20() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern void __fastcall abi_call_thunk_FUN_10ff3290(int *);
struct RecoveredString_FUN_1008c50b_1100baf0 { int * rep; __forceinline RecoveredString_FUN_1008c50b_1100baf0(char * p0) { ((SCStr *)this)->int_allocRep(p0); } ~RecoveredString_FUN_1008c50b_1100baf0() noexcept { ((SCStr *)this)->int_release(); rep = 0; } };
extern void __fastcall abi_call_thunk_FUN_1100bf40(int *);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a2b90(...);
extern int thunk_FUN_101e6b50(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_10309e90(...);
extern int thunk_FUN_103869d0(...);
extern int thunk_FUN_103bca20(...);
extern int thunk_FUN_103c87b0(...);
extern int thunk_FUN_103d63d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_10557e50(...);
extern int thunk_FUN_10558310(...);
extern int thunk_FUN_106cf050(...);
extern int thunk_FUN_107bce80(...);
extern int thunk_FUN_10c5fc80(...);
extern int thunk_FUN_10c62330(...);
extern int thunk_FUN_10d5aa90(...);
extern int thunk_FUN_10df7a00(...);
extern int thunk_FUN_10eac8c0(...);
extern int thunk_FUN_10eacd60(...);
extern int thunk_FUN_10ead690(...);
extern int thunk_FUN_10eb0d10(...);
extern int thunk_FUN_1100bc60(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a3e90(...);
extern int thunk_FUN_110c2130(...);
extern int thunk_FUN_110f9e90(...);
extern int thunk_FUN_110fc920(...);
extern int thunk_FUN_111005f0(...);
extern int thunk_FUN_1125cbd0(...);
extern int thunk_FUN_1125ce60(...);
extern int thunk_FUN_1125cf40(...);
extern int thunk_FUN_1148ac28(...);
struct Recovered_101bea30 { undefined4 FUN_101bea30(undefined4 param_2); };
struct Recovered_101f9400 { void FUN_101f9400(undefined4 param_2); };
struct Recovered_10372c10 { undefined4 FUN_10372c10(undefined4 param_2,undefined4 param_3); };
struct Recovered_1037cf40 { undefined1 * FUN_1037cf40(undefined1 *param_2); };
struct Recovered_1054b640 { void FUN_1054b640(undefined4 param_2); };
struct Recovered_1054b7c0 { void FUN_1054b7c0(undefined4 param_2); };
struct Recovered_10553390 { undefined4 FUN_10553390(undefined4 param_2); };
struct Recovered_106c1c80 { undefined4 FUN_106c1c80(undefined4 param_2); };
struct Recovered_106d5d40 { undefined4 FUN_106d5d40(undefined4 param_2); };
struct Recovered_107bcac0 { undefined4 FUN_107bcac0(undefined4 param_2); };
struct Recovered_10c91730 { void FUN_10c91730(undefined4 param_2,undefined4 *param_3); };
struct Recovered_10c97560 { undefined4 * FUN_10c97560(undefined4 *param_2); };
struct Recovered_10ca7f20 { undefined4 FUN_10ca7f20(undefined4 param_2); };
struct Recovered_10ca7fb0 { undefined4 FUN_10ca7fb0(undefined4 param_2); };
struct Recovered_10ca8040 { undefined4 FUN_10ca8040(undefined4 param_2); };
struct Recovered_10ca80d0 { undefined4 FUN_10ca80d0(undefined4 param_2); };
struct Recovered_10ca9010 { undefined4 FUN_10ca9010(undefined4 param_2); };
struct Recovered_10ca90a0 { undefined4 FUN_10ca90a0(undefined4 param_2); };
struct Recovered_10ca9320 { undefined4 FUN_10ca9320(undefined4 param_2); };
struct Recovered_10ca9ab0 { undefined4 FUN_10ca9ab0(undefined4 param_2); };
struct Recovered_10cb6f30 { void FUN_10cb6f30(undefined4 param_2); };
struct Recovered_10cb6fc0 { void FUN_10cb6fc0(undefined4 param_2); };
struct Recovered_10cb7190 { void FUN_10cb7190(undefined4 param_2); };
struct Recovered_10cb72e0 { void FUN_10cb72e0(undefined4 param_2); };
struct Recovered_10cb7370 { void FUN_10cb7370(undefined4 param_2); };
struct Recovered_10cb7420 { void FUN_10cb7420(undefined4 param_2); };
struct Recovered_10e07d00 { int FUN_10e07d00(undefined4 param_2); };
struct Recovered_10e07d90 { int FUN_10e07d90(undefined4 param_2); };
struct Recovered_10e07e20 { int FUN_10e07e20(undefined4 param_2); };
struct Recovered_10e07eb0 { int FUN_10e07eb0(undefined4 param_2); };
struct Recovered_10e07f40 { int FUN_10e07f40(undefined4 param_2); };
struct Recovered_10e08200 { int FUN_10e08200(undefined4 param_2); };
struct Recovered_10e08290 { int FUN_10e08290(undefined4 param_2); };
struct Recovered_10e08320 { int FUN_10e08320(undefined4 param_2); };
struct Recovered_10e083b0 { int FUN_10e083b0(undefined4 param_2); };
struct Recovered_10e08440 { int FUN_10e08440(undefined4 param_2); };
struct Recovered_10e084d0 { int FUN_10e084d0(undefined4 param_2); };
struct Recovered_10e08560 { int FUN_10e08560(undefined4 param_2); };
struct Recovered_10e085f0 { int FUN_10e085f0(undefined4 param_2); };
struct Recovered_10e08870 { int FUN_10e08870(undefined4 param_2); };
struct Recovered_10e08900 { int FUN_10e08900(undefined4 param_2); };
struct Recovered_10e08990 { int FUN_10e08990(undefined4 param_2); };
struct Recovered_10e08a20 { int FUN_10e08a20(undefined4 param_2); };
struct Recovered_10e08ab0 { int FUN_10e08ab0(undefined4 param_2); };
struct Recovered_10e08b40 { int FUN_10e08b40(undefined4 param_2); };
struct Recovered_10e08bd0 { int FUN_10e08bd0(undefined4 param_2); };
struct Recovered_10e08c60 { int FUN_10e08c60(undefined4 param_2); };
struct Recovered_10e08cf0 { int FUN_10e08cf0(undefined4 param_2); };
struct Recovered_10e08d80 { int FUN_10e08d80(undefined4 param_2); };
struct Recovered_10e08e10 { int FUN_10e08e10(undefined4 param_2); };
struct Recovered_10e08ea0 { int FUN_10e08ea0(undefined4 param_2); };
struct Recovered_10e08f30 { int FUN_10e08f30(undefined4 param_2); };
struct Recovered_10e08fc0 { int FUN_10e08fc0(undefined4 param_2); };
struct Recovered_10e09050 { int FUN_10e09050(undefined4 param_2); };
struct Recovered_10e09590 { int FUN_10e09590(undefined4 param_2); };
struct Recovered_10e09620 { int FUN_10e09620(undefined4 param_2); };
struct Recovered_10e09780 { int FUN_10e09780(undefined4 param_2); };
struct Recovered_10e099d0 { int FUN_10e099d0(undefined4 param_2); };
struct Recovered_10e09a60 { int FUN_10e09a60(undefined4 param_2); };
struct Recovered_10e09af0 { int FUN_10e09af0(undefined4 param_2); };
struct Recovered_10e09b80 { int FUN_10e09b80(undefined4 param_2); };
struct Recovered_10e09c10 { int FUN_10e09c10(undefined4 param_2); };
struct Recovered_10e09ca0 { int FUN_10e09ca0(undefined4 param_2); };
struct Recovered_10e09d30 { int FUN_10e09d30(undefined4 param_2); };
struct Recovered_10e09dc0 { int FUN_10e09dc0(undefined4 param_2); };
struct Recovered_10e09e50 { int FUN_10e09e50(undefined4 param_2); };
struct Recovered_10eb2de0 { int FUN_10eb2de0(int param_2); };
struct Recovered_10ec6870 { int FUN_10ec6870(undefined4 param_2); };
struct Recovered_10ec6900 { int FUN_10ec6900(byte param_2); };
struct Recovered_10ec6990 { int FUN_10ec6990(byte param_2); };
struct Recovered_10ec6ab0 { int FUN_10ec6ab0(undefined4 param_2); };
struct Recovered_10ec7220 { int FUN_10ec7220(undefined4 param_2); };
struct Recovered_10ec77a0 { int FUN_10ec77a0(undefined4 param_2); };
struct Recovered_10ec7940 { int FUN_10ec7940(undefined4 param_2); };
struct Recovered_10ec79d0 { int FUN_10ec79d0(undefined4 param_2); };
struct Recovered_10ec7a60 { int FUN_10ec7a60(undefined4 param_2); };
struct Recovered_10ec7af0 { int FUN_10ec7af0(undefined8 param_2); };
struct Recovered_10ec7b90 { int FUN_10ec7b90(undefined8 param_2); };
struct Recovered_10ec7d80 { int FUN_10ec7d80(undefined4 param_2); };
struct Recovered_10eca170 { int FUN_10eca170(undefined4 param_2); };
struct Recovered_10eca2b0 { int FUN_10eca2b0(undefined4 param_2); };
struct Recovered_10eca340 { int FUN_10eca340(undefined4 param_2); };
struct Recovered_10eca3d0 { int FUN_10eca3d0(undefined4 param_2); };
struct Recovered_10ecb4e0 { int FUN_10ecb4e0(undefined4 param_2); };
struct Recovered_10ecb640 { int FUN_10ecb640(undefined4 param_2); };
struct Recovered_10ecb6d0 { int FUN_10ecb6d0(undefined4 param_2); };
struct Recovered_10ecb800 { int FUN_10ecb800(undefined4 param_2); };
struct Recovered_10ecbe40 { int FUN_10ecbe40(undefined4 param_2); };
struct Recovered_10eccc30 { int FUN_10eccc30(undefined4 param_2); };
struct Recovered_10ecccc0 { int FUN_10ecccc0(undefined4 param_2); };
struct Recovered_10ecd540 { int FUN_10ecd540(undefined4 param_2); };
struct Recovered_10ecd5d0 { int FUN_10ecd5d0(int param_2); };
struct Recovered_10ecd660 { int FUN_10ecd660(undefined4 param_2); };
struct Recovered_10ecdcc0 { int FUN_10ecdcc0(undefined4 param_2); };
struct Recovered_10f48610 { undefined4 FUN_10f48610(undefined4 param_2); };
struct Recovered_10f486a0 { undefined4 FUN_10f486a0(undefined4 param_2); };
struct Recovered_10f48bc0 { undefined4 FUN_10f48bc0(undefined4 param_2); };
struct Recovered_10f48e00 { void FUN_10f48e00(undefined4 param_2); };
struct Recovered_10f91310 { void FUN_10f91310(undefined4 param_2); };
struct Recovered_10fb9350 { undefined4 FUN_10fb9350(undefined4 param_2); };
struct Recovered_10fb93e0 { undefined4 FUN_10fb93e0(undefined4 param_2); };
struct Recovered_10fc0550 { void FUN_10fc0550(undefined4 param_2); };
struct Recovered_10fc05e0 { void FUN_10fc05e0(undefined4 param_2); };
// Reference entry 101bea30; body size 108 bytes.
#line 1 "ENTRY_101bea30"

undefined4 Recovered_101bea30::FUN_101bea30(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_101bea30 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)(", "))};

  ((RecoveredVirtualArgumentsSlot18Count2 *)param_1)->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


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


// Reference entry 101f9400; body size 105 bytes.
#line 1 "ENTRY_101f9400"

void Recovered_101f9400::FUN_101f9400(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_101f9400 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)(""))};

  ((RecoveredVirtualArgumentsSlot13Count2 *)param_1)->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return;
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


// Reference entry 10372c10; body size 114 bytes.
#line 1 "ENTRY_10372c10"

undefined4 Recovered_10372c10::FUN_10372c10(undefined4 param_2,undefined4 param_3)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10372c10 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)(""))};

  ((RecoveredVirtualArgumentsSlot53Count3 *)param_1)->Invoke((void *)(param_2), (void *)(param_3), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
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


// Reference entry 1037cf40; body size 151 bytes.
#line 1 "ENTRY_1037cf40"

undefined1 * Recovered_1037cf40::FUN_1037cf40(undefined1 *param_2)

{
  char * param_1 = (char *)this;
  char cVar1;
  char *pcVar2;
  char *pcVar3;

{
RecoveredString_FUN_1008c50b_1037cf40 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (const char *)((SCStr *)(param_1 + 0xc4)))};

  pcVar3 = "";
  if (recovered_string.rep != (char *)0x0) {
    pcVar3 = recovered_string.rep;
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = 0;
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ((CallABI_thunk_FUN_1012d130 *)(param_1))->thunk_FUN_1012d130((void *)(pcVar3), (uint)((int)pcVar2 - (int)(pcVar3 + 1)));
  }

  return param_2;
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


// Reference entry 10401840; body size 165 bytes.
#line 1 "ENTRY_10401840"

void __fastcall FUN_10401840(int param_1)

{
  SCStr *pSVar1;
  char *pcVar2;
  undefined4 uStack_2c;
  int iStack_28;

  if (*(int *)(param_1 + 0x34) != 0) {
    iStack_28 = 0;
    uStack_2c = *(undefined4 *)(param_1 + 0x7c);
    pSVar1 = (SCStr *)thunk_FUN_103c87b0();
    iStack_28 = 0x10401886;
{
RecoveredString_FUN_1008c50b_10401840 recovered_string((const char *)(pSVar1));

    if ((recovered_string.rep == (char *)0x0) || (*recovered_string.rep == '\0')) {
      pcVar2 = "SCIUserAccount:onAccountTokenFetchFailed";
    }
    else {
      pcVar2 = "SCIUserAccount:onAccountTokenReady";
    }
    iStack_28 = param_1 + -8;
    ((SCStr *)&uStack_2c)->int_allocRep(pcVar2);
    thunk_FUN_103d65f0();
    }

  }

  return;
}


// Reference entry 10534750; body size 111 bytes.
#line 1 "ENTRY_10534750"

undefined1 __fastcall FUN_10534750(int *param_1)

{
  undefined1 uVar1;

{
RecoveredString_FUN_1008c50b_10534750 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("HasAccount"))};

  uVar1 = ((RecoveredVirtualArgumentsSlot56Count1 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return uVar1;
}


// Reference entry 105359c0; body size 111 bytes.
#line 1 "ENTRY_105359c0"

undefined1 __fastcall FUN_105359c0(int *param_1)

{
  undefined1 uVar1;

{
RecoveredString_FUN_1008c50b_105359c0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("RemovePromoted"))};

  uVar1 = ((RecoveredVirtualArgumentsSlot56Count1 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return uVar1;
}


// Reference entry 1054b640; body size 108 bytes.
#line 1 "ENTRY_1054b640"

void Recovered_1054b640::FUN_1054b640(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_1054b640 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("HasAccount"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return;
}


// Reference entry 1054b7c0; body size 108 bytes.
#line 1 "ENTRY_1054b7c0"

void Recovered_1054b7c0::FUN_1054b7c0(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_1054b7c0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("RemovePromoted"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return;
}


// Reference entry 10553390; body size 109 bytes.
#line 1 "ENTRY_10553390"

undefined4 Recovered_10553390::FUN_10553390(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10553390 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("apiKey"))};

  ((RecoveredVirtualArgumentsSlot6Count2 *)*(int **)(param_1 + 0x10))->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
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


// Reference entry 106c1c80; body size 109 bytes.
#line 1 "ENTRY_106c1c80"

undefined4 Recovered_106c1c80::FUN_106c1c80(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_106c1c80 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("-"))};

  ((RecoveredVirtualArgumentsSlot18Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 106d5d40; body size 104 bytes.
#line 1 "ENTRY_106d5d40"

undefined4 Recovered_106d5d40::FUN_106d5d40(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_106d5d40 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (const char *)((SCStr *)(param_1 + 0x8598)))};

  ((CallABI_thunk_FUN_101a2b90 *)(param_1))->thunk_FUN_101a2b90((int *)(((SCStr *)&recovered_string)));
  }

  return param_2;
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


// Reference entry 107bcac0; body size 112 bytes.
#line 1 "ENTRY_107bcac0"

undefined4 Recovered_107bcac0::FUN_107bcac0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_107bcac0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("-"))};

  ((RecoveredVirtualArgumentsSlot18Count2 *)*(int **)(param_1 + 0x110))->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
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


// Reference entry 109ec600; body size 144 bytes.
#line 1 "ENTRY_109ec600"

void __fastcall FUN_109ec600(int param_1)

{


  abi_call_thunk_FUN_10302280((undefined4)(param_1 + 0xa8), (char *)("Starting Setup Announcements"));
  ((CallABI_thunk_FUN_106cf050 *)(param_1))->thunk_FUN_106cf050((undefined4)(0));
{
RecoveredString_FUN_1008c50b_109ec600 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (const char *)((SCStr *)(param_1 + 0x104)))};

  ((CallABI_thunk_FUN_10eb0d10 *)(param_1))->thunk_FUN_10eb0d10((char *)("mpsSessionID"), (undefined4)(((SCStr *)&recovered_string)));
  }

  return;
}


// Reference entry 10bf1220; body size 101 bytes.
#line 1 "ENTRY_10bf1220"

SCStr * FUN_10bf1220(SCStr *param_1)

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


// Reference entry 10c97560; body size 136 bytes.
#line 1 "ENTRY_10c97560"

undefined4 * Recovered_10c97560::FUN_10c97560(undefined4 *param_2)

{
  int param_1 = (int)this;



  if (*(int *)(param_1 + 0x6c) == 0) {
    *param_2 = 0;
    return param_2;
  }

{
RecoveredString_FUN_1008c50b_10c97560 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (const char *)((SCStr *)(param_1 + 0xc)))};

  abi_call_thunk_FUN_10c9bf20((undefined4 *)(param_2), (undefined4)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10ca79a0; body size 165 bytes.
#line 1 "ENTRY_10ca79a0"

void __fastcall FUN_10ca79a0(int *param_1)

{
  char cVar1;

{
RecoveredString_FUN_1008c50b_10ca79a0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("ManualUpdate"))};

  cVar1 = ((RecoveredVirtualArgumentsSlot56Count1 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  if (cVar1 != '\0') {
    thunk_FUN_110fc920();

    return;
  }
  thunk_FUN_110f9e90();

  return;
}


// Reference entry 10ca7f20; body size 111 bytes.
#line 1 "ENTRY_10ca7f20"

undefined4 Recovered_10ca7f20::FUN_10ca7f20(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10ca7f20 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("ChoiceBody"))};

  ((RecoveredVirtualArgumentsSlot52Count2 *)param_1)->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10ca7fb0; body size 111 bytes.
#line 1 "ENTRY_10ca7fb0"

undefined4 Recovered_10ca7fb0::FUN_10ca7fb0(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10ca7fb0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("ChoiceCancelLabel"))};

  ((RecoveredVirtualArgumentsSlot52Count2 *)param_1)->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10ca8040; body size 111 bytes.
#line 1 "ENTRY_10ca8040"

undefined4 Recovered_10ca8040::FUN_10ca8040(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10ca8040 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("ChoiceContinueLabel"))};

  ((RecoveredVirtualArgumentsSlot52Count2 *)param_1)->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10ca80d0; body size 111 bytes.
#line 1 "ENTRY_10ca80d0"

undefined4 Recovered_10ca80d0::FUN_10ca80d0(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10ca80d0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("ChoiceTitle"))};

  ((RecoveredVirtualArgumentsSlot52Count2 *)param_1)->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10ca9010; body size 111 bytes.
#line 1 "ENTRY_10ca9010"

undefined4 Recovered_10ca9010::FUN_10ca9010(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10ca9010 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("IntroBody"))};

  ((RecoveredVirtualArgumentsSlot52Count2 *)param_1)->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10ca90a0; body size 111 bytes.
#line 1 "ENTRY_10ca90a0"

undefined4 Recovered_10ca90a0::FUN_10ca90a0(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10ca90a0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("IntroTitle"))};

  ((RecoveredVirtualArgumentsSlot52Count2 *)param_1)->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10ca9230; body size 112 bytes.
#line 1 "ENTRY_10ca9230"

undefined1 __fastcall FUN_10ca9230(int param_1)

{
  undefined1 uVar1;

{
RecoveredString_FUN_1008c50b_10ca9230 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("IsSubWizard"))};

  uVar1 = ((RecoveredVirtualArgumentsSlot15Count1 *)*(int **)(param_1 + 0xb4))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return uVar1;
}


// Reference entry 10ca9320; body size 111 bytes.
#line 1 "ENTRY_10ca9320"

undefined4 Recovered_10ca9320::FUN_10ca9320(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10ca9320 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("OnlineUpdateURL"))};

  ((RecoveredVirtualArgumentsSlot52Count2 *)param_1)->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10ca93b0; body size 111 bytes.
#line 1 "ENTRY_10ca93b0"

undefined1 __fastcall FUN_10ca93b0(int *param_1)

{
  undefined1 uVar1;

{
RecoveredString_FUN_1008c50b_10ca93b0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("OnlineUpdateURLIsStoreURL"))};

  uVar1 = ((RecoveredVirtualArgumentsSlot56Count1 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return uVar1;
}


// Reference entry 10ca9ab0; body size 112 bytes.
#line 1 "ENTRY_10ca9ab0"

undefined4 Recovered_10ca9ab0::FUN_10ca9ab0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ca9ab0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("WizardTitle"))};

  ((RecoveredVirtualArgumentsSlot6Count2 *)*(int **)(param_1 + 0xb4))->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10cb1cc0; body size 116 bytes.
#line 1 "ENTRY_10cb1cc0"

bool __fastcall FUN_10cb1cc0(int param_1)

{
  int iVar1;
  char cVar2;

  iVar1 = *(int *)(param_1 + 8);
{
RecoveredString_FUN_1008c50b_10cb1cc0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("IsSubWizard"))};

  cVar2 = ((RecoveredVirtualArgumentsSlot15Count1 *)*(int **)(iVar1 + 0xb4))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return cVar2 == '\0';
}


// Reference entry 10cb1d60; body size 116 bytes.
#line 1 "ENTRY_10cb1d60"

bool __fastcall FUN_10cb1d60(int param_1)

{
  int iVar1;
  char cVar2;

  iVar1 = *(int *)(param_1 + 8);
{
RecoveredString_FUN_1008c50b_10cb1d60 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("IsSubWizard"))};

  cVar2 = ((RecoveredVirtualArgumentsSlot15Count1 *)*(int **)(iVar1 + 0xb4))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return cVar2 == '\0';
}


// Reference entry 10cb1f90; body size 179 bytes.
#line 1 "ENTRY_10cb1f90"

undefined4 __fastcall FUN_10cb1f90(int param_1)

{
  int iVar1;
  char cVar2;

  iVar1 = *(int *)(param_1 + 8);
{
RecoveredString_FUN_1008c50b_10cb1f90 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("IsSubWizard"))};

  cVar2 = ((RecoveredVirtualArgumentsSlot15Count1 *)*(int **)(iVar1 + 0xb4))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  if (cVar2 == '\0') {
    cVar2 = abi_call_thunk_FUN_10ca8880((int *)(param_1));
    if (cVar2 == '\0') {
      cVar2 = abi_call_thunk_FUN_10ca8380();
      if (cVar2 == '\0') {

        return 1;
      }
    }
  }

  return 0;
}


// Reference entry 10cb2070; body size 154 bytes.
#line 1 "ENTRY_10cb2070"

undefined4 __fastcall FUN_10cb2070(int param_1)

{
  char cVar1;
  int iVar2;


  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x250))();
  if (iVar2 == 3) {
    iVar2 = *(int *)(param_1 + 8);
{
RecoveredString_FUN_1008c50b_10cb2070 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("IsSubWizard"))};

    cVar1 = ((RecoveredVirtualArgumentsSlot15Count1 *)*(int **)(iVar2 + 0xb4))->Invoke((void *)(((SCStr *)&recovered_string)));
    }

    if (cVar1 == '\0') {

      return 1;
    }
  }

  return 0;
}


// Reference entry 10cb6f30; body size 108 bytes.
#line 1 "ENTRY_10cb6f30"

void Recovered_10cb6f30::FUN_10cb6f30(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10cb6f30 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("TimeoutInSecs"))};

  ((RecoveredVirtualArgumentsSlot55Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return;
}


// Reference entry 10cb6fc0; body size 108 bytes.
#line 1 "ENTRY_10cb6fc0"

void Recovered_10cb6fc0::FUN_10cb6fc0(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10cb6fc0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CurrentDeviceStatus"))};

  ((RecoveredVirtualArgumentsSlot55Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return;
}


// Reference entry 10cb7190; body size 108 bytes.
#line 1 "ENTRY_10cb7190"

void Recovered_10cb7190::FUN_10cb7190(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10cb7190 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("IsReindexNeeded"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return;
}


// Reference entry 10cb72e0; body size 108 bytes.
#line 1 "ENTRY_10cb72e0"

void Recovered_10cb72e0::FUN_10cb72e0(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10cb72e0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("ResultCodeBodyText"))};

  ((RecoveredVirtualArgumentsSlot53Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return;
}


// Reference entry 10cb7370; body size 108 bytes.
#line 1 "ENTRY_10cb7370"

void Recovered_10cb7370::FUN_10cb7370(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10cb7370 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("ResultCodeHeaderText"))};

  ((RecoveredVirtualArgumentsSlot53Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return;
}


// Reference entry 10cb7420; body size 108 bytes.
#line 1 "ENTRY_10cb7420"

void Recovered_10cb7420::FUN_10cb7420(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10cb7420 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CurrentDevicesPercent"))};

  ((RecoveredVirtualArgumentsSlot55Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return;
}


// Reference entry 10cb75b0; body size 150 bytes.
#line 1 "ENTRY_10cb75b0"

undefined4 __fastcall FUN_10cb75b0(int param_1)

{
  char cVar1;
  int iVar2;


  iVar2 = thunk_FUN_111005f0();
  if (iVar2 != 0) {
{
RecoveredString_FUN_1008c50b_10cb75b0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("IsSubWizard"))};

    cVar1 = ((RecoveredVirtualArgumentsSlot15Count1 *)*(int **)(param_1 + 0xb4))->Invoke((void *)(((SCStr *)&recovered_string)));
    }

    if (cVar1 == '\0') {

      return 1;
    }
  }

  return 0;
}


// Reference entry 10cd23b0; body size 138 bytes.
#line 1 "ENTRY_10cd23b0"

void __fastcall FUN_10cd23b0(int param_1)

{
  uint uVar1;
  SCStr *ghidra_this;

{
RecoveredString_FUN_1008c50b_10cd23b0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("https://www.sonos.com"))};

  (ghidra_this)->format((char *)(param_1 + 0x6218));
  uVar1 = ((SCStr *)(param_1 + 0x6218))->length();
  *(uint *)(param_1 + 0x6210) = uVar1;
  }

  return;
}


// Reference entry 10ce1ab0; body size 132 bytes.
#line 1 "ENTRY_10ce1ab0"

bool __fastcall FUN_10ce1ab0(char *param_1)

{
  bool bVar1;
  char *pcVar2;

  pcVar2 = "";
  if (*(char **)(*(int *)(param_1 + 0x18) + 0x44) != (char *)0x0) {
    pcVar2 = *(char **)(*(int *)(param_1 + 0x18) + 0x44);
  }
{
RecoveredString_FUN_1008c50b_10ce1ab0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)(pcVar2))};

  if ((recovered_string.rep == (char *)0x0) || (*recovered_string.rep == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = ((SCStr *)((SCStr *)&recovered_string))->operator==("Report");
  }
  }

  return bVar1;
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


// Reference entry 10d6f2b0; body size 140 bytes.
#line 1 "ENTRY_10d6f2b0"

undefined1 __fastcall FUN_10d6f2b0(int param_1)

{
  undefined1 uVar1;


  if (*(int *)(param_1 + 0x124) != 0) {

{
RecoveredString_FUN_1008c50b_10d6f2b0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("isSearchHistory"))};

    uVar1 = (**(code **)(**(int **)(param_1 + 0x124) + 0x3c))();
    }

    return uVar1;
  }
  return 0;
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


// Reference entry 10d7a4d0; body size 194 bytes.
#line 1 "ENTRY_10d7a4d0"

void __fastcall FUN_10d7a4d0(int param_1)

{
  char cVar1;
  int iVar2;


  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x34))();
  if (iVar2 == 4) {
    (**(code **)(**(int **)(param_1 + 4) + 0x40))();
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x34))();
  if (iVar2 == 4) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x40))();
  }
{
RecoveredString_FUN_1008c50b_10d7a4d0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("WizardComponentKeyDisabled"))};

  iVar2 = **(int **)(param_1 + 0x24);
  cVar1 = ((RecoveredVirtualSlots *)(param_1 + -0x24))->VirtualSlot31();
  (**(code **)(iVar2 + 0x40))(((SCStr *)&recovered_string),cVar1 == '\0');
  }

  (**(code **)(**(int **)(param_1 + -0x1c) + 0x88))();

  return;
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


// Reference entry 10df2eb0; body size 101 bytes.
#line 1 "ENTRY_10df2eb0"

void __fastcall FUN_10df2eb0(int param_1)

{

{
RecoveredString_FUN_1008c50b_10df2eb0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("shouldOmitFromPath"))};

  ((RecoveredVirtualArgumentsSlot30Count1 *)*(int **)(param_1 + 0x2c))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return;
}


// Reference entry 10df3f20; body size 109 bytes.
#line 1 "ENTRY_10df3f20"

undefined1 __fastcall FUN_10df3f20(int param_1)

{
  undefined1 uVar1;

{
RecoveredString_FUN_1008c50b_10df3f20 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("shouldOmitFromPath"))};

  uVar1 = ((RecoveredVirtualArgumentsSlot15Count1 *)*(int **)(param_1 + 0x2c))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return uVar1;
}


// Reference entry 10dfc5e0; body size 105 bytes.
#line 1 "ENTRY_10dfc5e0"

undefined4 __fastcall FUN_10dfc5e0(undefined4 param_1)

{

{
RecoveredString_FUN_1008c50b_10dfc5e0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("REGISTER_DEVICE"))};

  ((CallABI_thunk_FUN_10df7a00 *)(param_1))->thunk_FUN_10df7a00((undefined4)(((SCStr *)&recovered_string)));
  }

  return param_1;
}


// Reference entry 10e07d00; body size 108 bytes.
#line 1 "ENTRY_10e07d00"

int Recovered_10e07d00::FUN_10e07d00(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e07d00 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("dataUpdated"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e07d90; body size 108 bytes.
#line 1 "ENTRY_10e07d90"

int Recovered_10e07d90::FUN_10e07d90(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e07d90 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("value"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e07e20; body size 108 bytes.
#line 1 "ENTRY_10e07e20"

int Recovered_10e07e20::FUN_10e07e20(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e07e20 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("value"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e07eb0; body size 108 bytes.
#line 1 "ENTRY_10e07eb0"

int Recovered_10e07eb0::FUN_10e07eb0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e07eb0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("msgLen"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e07f40; body size 108 bytes.
#line 1 "ENTRY_10e07f40"

int Recovered_10e07f40::FUN_10e07f40(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e07f40 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("configPacketInterval"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08200; body size 108 bytes.
#line 1 "ENTRY_10e08200"

int Recovered_10e08200::FUN_10e08200(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08200 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("nfcScanData"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08290; body size 108 bytes.
#line 1 "ENTRY_10e08290"

int Recovered_10e08290::FUN_10e08290(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08290 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("configPacketCount"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08320; body size 108 bytes.
#line 1 "ENTRY_10e08320"

int Recovered_10e08320::FUN_10e08320(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08320 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("updatePercent"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e083b0; body size 108 bytes.
#line 1 "ENTRY_10e083b0"

int Recovered_10e083b0::FUN_10e083b0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e083b0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("updatePhase"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08440; body size 108 bytes.
#line 1 "ENTRY_10e08440"

int Recovered_10e08440::FUN_10e08440(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08440 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("protocol"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e084d0; body size 108 bytes.
#line 1 "ENTRY_10e084d0"

int Recovered_10e084d0::FUN_10e084d0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e084d0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("protocol"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08560; body size 108 bytes.
#line 1 "ENTRY_10e08560"

int Recovered_10e08560::FUN_10e08560(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08560 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("protocol"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e085f0; body size 108 bytes.
#line 1 "ENTRY_10e085f0"

int Recovered_10e085f0::FUN_10e085f0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e085f0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("response"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08870; body size 108 bytes.
#line 1 "ENTRY_10e08870"

int Recovered_10e08870::FUN_10e08870(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08870 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08900; body size 108 bytes.
#line 1 "ENTRY_10e08900"

int Recovered_10e08900::FUN_10e08900(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08900 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08990; body size 108 bytes.
#line 1 "ENTRY_10e08990"

int Recovered_10e08990::FUN_10e08990(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08990 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08a20; body size 108 bytes.
#line 1 "ENTRY_10e08a20"

int Recovered_10e08a20::FUN_10e08a20(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08a20 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08ab0; body size 108 bytes.
#line 1 "ENTRY_10e08ab0"

int Recovered_10e08ab0::FUN_10e08ab0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08ab0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08b40; body size 108 bytes.
#line 1 "ENTRY_10e08b40"

int Recovered_10e08b40::FUN_10e08b40(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08b40 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08bd0; body size 108 bytes.
#line 1 "ENTRY_10e08bd0"

int Recovered_10e08bd0::FUN_10e08bd0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08bd0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08c60; body size 108 bytes.
#line 1 "ENTRY_10e08c60"

int Recovered_10e08c60::FUN_10e08c60(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08c60 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08cf0; body size 108 bytes.
#line 1 "ENTRY_10e08cf0"

int Recovered_10e08cf0::FUN_10e08cf0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08cf0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08d80; body size 108 bytes.
#line 1 "ENTRY_10e08d80"

int Recovered_10e08d80::FUN_10e08d80(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08d80 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08e10; body size 108 bytes.
#line 1 "ENTRY_10e08e10"

int Recovered_10e08e10::FUN_10e08e10(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08e10 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08ea0; body size 108 bytes.
#line 1 "ENTRY_10e08ea0"

int Recovered_10e08ea0::FUN_10e08ea0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08ea0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08f30; body size 108 bytes.
#line 1 "ENTRY_10e08f30"

int Recovered_10e08f30::FUN_10e08f30(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08f30 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e08fc0; body size 108 bytes.
#line 1 "ENTRY_10e08fc0"

int Recovered_10e08fc0::FUN_10e08fc0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e08fc0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e09050; body size 108 bytes.
#line 1 "ENTRY_10e09050"

int Recovered_10e09050::FUN_10e09050(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e09050 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("opResult"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e09590; body size 108 bytes.
#line 1 "ENTRY_10e09590"

int Recovered_10e09590::FUN_10e09590(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e09590 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("setupStatus"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e09620; body size 108 bytes.
#line 1 "ENTRY_10e09620"

int Recovered_10e09620::FUN_10e09620(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e09620 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("setupStatus"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e09780; body size 108 bytes.
#line 1 "ENTRY_10e09780"

int Recovered_10e09780::FUN_10e09780(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e09780 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("endUpdateStatus"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e099d0; body size 108 bytes.
#line 1 "ENTRY_10e099d0"

int Recovered_10e099d0::FUN_10e099d0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e099d0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("value"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e09a60; body size 108 bytes.
#line 1 "ENTRY_10e09a60"

int Recovered_10e09a60::FUN_10e09a60(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e09a60 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("productUdn"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e09af0; body size 108 bytes.
#line 1 "ENTRY_10e09af0"

int Recovered_10e09af0::FUN_10e09af0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e09af0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("productUdn"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e09b80; body size 108 bytes.
#line 1 "ENTRY_10e09b80"

int Recovered_10e09b80::FUN_10e09b80(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e09b80 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("productUdn"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e09c10; body size 108 bytes.
#line 1 "ENTRY_10e09c10"

int Recovered_10e09c10::FUN_10e09c10(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e09c10 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("productUdn"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e09ca0; body size 108 bytes.
#line 1 "ENTRY_10e09ca0"

int Recovered_10e09ca0::FUN_10e09ca0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e09ca0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("productUdn"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e09d30; body size 108 bytes.
#line 1 "ENTRY_10e09d30"

int Recovered_10e09d30::FUN_10e09d30(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e09d30 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("productUdn"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e09dc0; body size 108 bytes.
#line 1 "ENTRY_10e09dc0"

int Recovered_10e09dc0::FUN_10e09dc0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e09dc0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("productUdn"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e09e50; body size 108 bytes.
#line 1 "ENTRY_10e09e50"

int Recovered_10e09e50::FUN_10e09e50(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10e09e50 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("productUdn"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10e152c0; body size 131 bytes.
#line 1 "ENTRY_10e152c0"

void __fastcall FUN_10e152c0(int param_1)

{

{
RecoveredString_FUN_1008c50b_10e152c0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CancelFlow"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(1));
  }

  (**(code **)(**(int **)(param_1 + 0xc) + 0xb4))();

  return;
}


// Reference entry 10e15370; body size 131 bytes.
#line 1 "ENTRY_10e15370"

void __fastcall FUN_10e15370(int param_1)

{

{
RecoveredString_FUN_1008c50b_10e15370 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CancelFlow"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(1));
  }

  (**(code **)(**(int **)(param_1 + 0xc) + 0xb4))();

  return;
}


// Reference entry 10e15420; body size 106 bytes.
#line 1 "ENTRY_10e15420"

void __fastcall FUN_10e15420(int param_1)

{

{
RecoveredString_FUN_1008c50b_10e15420 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CancelFlow"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(1));
  }

  return;
}


// Reference entry 10e154b0; body size 131 bytes.
#line 1 "ENTRY_10e154b0"

void __fastcall FUN_10e154b0(int param_1)

{

{
RecoveredString_FUN_1008c50b_10e154b0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CancelFlow"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(1));
  }

  (**(code **)(**(int **)(param_1 + 0xc) + 0xb4))();

  return;
}


// Reference entry 10e15560; body size 106 bytes.
#line 1 "ENTRY_10e15560"

void __fastcall FUN_10e15560(int param_1)

{

{
RecoveredString_FUN_1008c50b_10e15560 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CancelFlow"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(1));
  }

  return;
}


// Reference entry 10e2cd60; body size 115 bytes.
#line 1 "ENTRY_10e2cd60"

bool __fastcall FUN_10e2cd60(int param_1)

{
  char cVar1;

{
RecoveredString_FUN_1008c50b_10e2cd60 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("NewAccount"))};

  cVar1 = ((RecoveredVirtualArgumentsSlot56Count1 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)));
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


// Reference entry 10e3e3f0; body size 112 bytes.
#line 1 "ENTRY_10e3e3f0"

undefined1 __fastcall FUN_10e3e3f0(int param_1)

{
  undefined1 uVar1;

{
RecoveredString_FUN_1008c50b_10e3e3f0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("ResetPasswordOnly"))};

  uVar1 = ((RecoveredVirtualArgumentsSlot56Count1 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return uVar1;
}


// Reference entry 10e3e570; body size 112 bytes.
#line 1 "ENTRY_10e3e570"

undefined1 __fastcall FUN_10e3e570(int param_1)

{
  undefined1 uVar1;

{
RecoveredString_FUN_1008c50b_10e3e570 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("SetPasswordOnly"))};

  uVar1 = ((RecoveredVirtualArgumentsSlot56Count1 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return uVar1;
}


// Reference entry 10e3e610; body size 112 bytes.
#line 1 "ENTRY_10e3e610"

undefined1 __fastcall FUN_10e3e610(int param_1)

{
  undefined1 uVar1;

{
RecoveredString_FUN_1008c50b_10e3e610 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("VerifyEmailOnly"))};

  uVar1 = ((RecoveredVirtualArgumentsSlot56Count1 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return uVar1;
}


// Reference entry 10e3f680; body size 105 bytes.
#line 1 "ENTRY_10e3f680"

void __fastcall FUN_10e3f680(int *param_1)

{

{
RecoveredString_FUN_1008c50b_10e3f680 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("NeedCountryCode"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(1));
  }

  return;
}


// Reference entry 10e45750; body size 115 bytes.
#line 1 "ENTRY_10e45750"

bool __fastcall FUN_10e45750(int param_1)

{
  char cVar1;

{
RecoveredString_FUN_1008c50b_10e45750 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("NewAccount"))};

  cVar1 = ((RecoveredVirtualArgumentsSlot56Count1 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return cVar1 == '\0';
}


// Reference entry 10e52500; body size 131 bytes.
#line 1 "ENTRY_10e52500"

void __fastcall FUN_10e52500(int param_1)

{

{
RecoveredString_FUN_1008c50b_10e52500 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CancelFlow"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(1));
  }

  (**(code **)(**(int **)(param_1 + 0xc) + 0xb4))();

  return;
}


// Reference entry 10e525b0; body size 131 bytes.
#line 1 "ENTRY_10e525b0"

void __fastcall FUN_10e525b0(int param_1)

{

{
RecoveredString_FUN_1008c50b_10e525b0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CancelFlow"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(1));
  }

  (**(code **)(**(int **)(param_1 + 0xc) + 0xb4))();

  return;
}


// Reference entry 10e52790; body size 260 bytes.
#line 1 "ENTRY_10e52790"

void __fastcall FUN_10e52790(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;

  char *pcVar6;

  piVar1 = *(int **)(param_1 + 0xc);
{
RecoveredString_FUN_1008c50b_10e52790 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("PlayerRegistrationError"))};

  iVar2 = **(int **)(param_1 + 8);
  uVar3 = ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot117();
  (**(code **)(iVar2 + 0xe4))(((SCStr *)&recovered_string),uVar3);
  }

  cVar4 = ((RecoveredVirtualArgumentsSlot117Count1 *)piVar1)->Invoke((void *)(0));
  pcVar6 = "player failure";
  if (cVar4 == '\0') {
    pcVar6 = "success";
  }
  thunk_FUN_10309e90("wizard","wizardPathInfo",&DAT_1192ec68,"SecureTransferFinished","reason",
                     "TransferMode","outcome",pcVar6);
  cVar4 = ((RecoveredVirtualSlots *)(piVar1))->VirtualSlot117();
  pcVar6 = "change account failed";
  if (cVar4 == '\0') {
    pcVar6 = "change account success";
  }
  abi_call_thunk_FUN_112af4e0((undefined4)("secure_transfer"), (undefined4)(1), (undefined4)(pcVar6));

  return;
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


// Reference entry 10e829d0; body size 173 bytes.
#line 1 "ENTRY_10e829d0"

void __fastcall FUN_10e829d0(int param_1)

{
  char cVar1;
  int iVar2;


  iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x34))();
  if (iVar2 == 4) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x40))();
  }
{
RecoveredString_FUN_1008c50b_10e829d0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("WizardComponentKeyDisabled"))};

  iVar2 = **(int **)(param_1 + 0x20);
  cVar1 = ((RecoveredVirtualSlots *)(param_1 + -0x18))->VirtualSlot31();
  (**(code **)(iVar2 + 0x40))(((SCStr *)&recovered_string),cVar1 == '\0');
  }

  (**(code **)(**(int **)(param_1 + -0x10) + 0x88))();

  return;
}


// Reference entry 10e86900; body size 105 bytes.
#line 1 "ENTRY_10e86900"

void __fastcall FUN_10e86900(int *param_1)

{

{
RecoveredString_FUN_1008c50b_10e86900 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("IsBridgeFlow"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(0));
  }

  return;
}


// Reference entry 10e86c00; body size 104 bytes.
#line 1 "ENTRY_10e86c00"

void __fastcall FUN_10e86c00(int param_1)

{

{
RecoveredString_FUN_1008c50b_10e86c00 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CurrentEvent"))};

  ((RecoveredVirtualArgumentsSlot105Count1 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return;
}


// Reference entry 10e86ca0; body size 104 bytes.
#line 1 "ENTRY_10e86ca0"

void __fastcall FUN_10e86ca0(int param_1)

{

{
RecoveredString_FUN_1008c50b_10e86ca0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CurrentEvent"))};

  ((RecoveredVirtualArgumentsSlot105Count1 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return;
}


// Reference entry 10e89890; body size 104 bytes.
#line 1 "ENTRY_10e89890"

void __fastcall FUN_10e89890(int param_1)

{

{
RecoveredString_FUN_1008c50b_10e89890 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CurrentEvent"))};

  ((RecoveredVirtualArgumentsSlot105Count1 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return;
}


// Reference entry 10eb2de0; body size 114 bytes.
#line 1 "ENTRY_10eb2de0"

int Recovered_10eb2de0::FUN_10eb2de0(int param_2)

{
  int param_1 = (int)this;

  if (param_2 != 0) {
{
RecoveredString_FUN_1008c50b_10eb2de0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("postTerminationAction"))};

    ((RecoveredVirtualArgumentsSlot28Count2 *)*(int **)(param_1 + 0x14))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
    }

  }

  return param_1;
}


// Reference entry 10eb2f30; body size 105 bytes.
#line 1 "ENTRY_10eb2f30"

int __fastcall FUN_10eb2f30(int param_1)

{

{
RecoveredString_FUN_1008c50b_10eb2f30 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("shouldOmitFromPath"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 0x14))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(1));
  }

  return param_1;
}


// Reference entry 10eb2fc0; body size 105 bytes.
#line 1 "ENTRY_10eb2fc0"

int __fastcall FUN_10eb2fc0(int param_1)

{

{
RecoveredString_FUN_1008c50b_10eb2fc0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("shouldOmitFromPath"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 0x14))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(1));
  }

  return param_1;
}


// Reference entry 10ec6870; body size 108 bytes.
#line 1 "ENTRY_10ec6870"

int Recovered_10ec6870::FUN_10ec6870(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ec6870 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("sleepDisabled"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ec6900; body size 114 bytes.
#line 1 "ENTRY_10ec6900"

int Recovered_10ec6900::FUN_10ec6900(byte param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ec6900 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("enabled"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2 ^ 1));
  }

  return param_1;
}


// Reference entry 10ec6990; body size 114 bytes.
#line 1 "ENTRY_10ec6990"

int Recovered_10ec6990::FUN_10ec6990(byte param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ec6990 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("enabled"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2 ^ 1));
  }

  return param_1;
}


// Reference entry 10ec6ab0; body size 108 bytes.
#line 1 "ENTRY_10ec6ab0"

int Recovered_10ec6ab0::FUN_10ec6ab0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ec6ab0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("dismissible"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ec7220; body size 108 bytes.
#line 1 "ENTRY_10ec7220"

int Recovered_10ec7220::FUN_10ec7220(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ec7220 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("hideDismissalAlerts"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ec77a0; body size 108 bytes.
#line 1 "ENTRY_10ec77a0"

int Recovered_10ec77a0::FUN_10ec77a0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ec77a0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("isLooping"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ec7940; body size 108 bytes.
#line 1 "ENTRY_10ec7940"

int Recovered_10ec7940::FUN_10ec7940(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ec7940 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("buttonStyle"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ec79d0; body size 108 bytes.
#line 1 "ENTRY_10ec79d0"

int Recovered_10ec79d0::FUN_10ec79d0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ec79d0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("fieldType"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ec7a60; body size 108 bytes.
#line 1 "ENTRY_10ec7a60"

int Recovered_10ec7a60::FUN_10ec7a60(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ec7a60 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("pickerType"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ec7af0; body size 118 bytes.
#line 1 "ENTRY_10ec7af0"

int Recovered_10ec7af0::FUN_10ec7af0(undefined8 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ec7af0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("textCharacterSpacing"))};

  ((RecoveredVirtualArgumentsSlot13Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ec7b90; body size 118 bytes.
#line 1 "ENTRY_10ec7b90"

int Recovered_10ec7b90::FUN_10ec7b90(undefined8 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ec7b90 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("textFontSize"))};

  ((RecoveredVirtualArgumentsSlot13Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ec7d80; body size 108 bytes.
#line 1 "ENTRY_10ec7d80"

int Recovered_10ec7d80::FUN_10ec7d80(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ec7d80 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("isPlaying"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10eca170; body size 108 bytes.
#line 1 "ENTRY_10eca170"

int Recovered_10eca170::FUN_10eca170(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10eca170 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("forcePageIndicatorOverlay"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10eca2b0; body size 108 bytes.
#line 1 "ENTRY_10eca2b0"

int Recovered_10eca2b0::FUN_10eca2b0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10eca2b0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("isSelectable"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10eca340; body size 108 bytes.
#line 1 "ENTRY_10eca340"

int Recovered_10eca340::FUN_10eca340(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10eca340 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("disableVO"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10eca3d0; body size 108 bytes.
#line 1 "ENTRY_10eca3d0"

int Recovered_10eca3d0::FUN_10eca3d0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10eca3d0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("disableVO"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ecb4e0; body size 108 bytes.
#line 1 "ENTRY_10ecb4e0"

int Recovered_10ecb4e0::FUN_10ecb4e0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ecb4e0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("annotatedChildVO"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ecb640; body size 108 bytes.
#line 1 "ENTRY_10ecb640"

int Recovered_10ecb640::FUN_10ecb640(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ecb640 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("autoFillHint"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ecb6d0; body size 108 bytes.
#line 1 "ENTRY_10ecb6d0"

int Recovered_10ecb6d0::FUN_10ecb6d0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ecb6d0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("autoScrollDelay"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ecb800; body size 108 bytes.
#line 1 "ENTRY_10ecb800"

int Recovered_10ecb800::FUN_10ecb800(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ecb800 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("capitalization"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ecb890; body size 132 bytes.
#line 1 "ENTRY_10ecb890"

int __fastcall FUN_10ecb890(int param_1)

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

int __fastcall FUN_10ecb940(int param_1)

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

int __fastcall FUN_10ecb9f0(int param_1)

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


// Reference entry 10ecbda0; body size 120 bytes.
#line 1 "ENTRY_10ecbda0"

int __fastcall FUN_10ecbda0(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ecbda0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("dismissalVOText"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
  }

  return param_1;
}


// Reference entry 10ecbe40; body size 108 bytes.
#line 1 "ENTRY_10ecbe40"

int Recovered_10ecbe40::FUN_10ecbe40(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ecbe40 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("animationDuration"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ecc360; body size 105 bytes.
#line 1 "ENTRY_10ecc360"

int __fastcall FUN_10ecc360(int param_1)

{

{
RecoveredString_FUN_1008c50b_10ecc360 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("useHelpIcon"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(1));
  }

  return param_1;
}


// Reference entry 10eccc30; body size 108 bytes.
#line 1 "ENTRY_10eccc30"

int Recovered_10eccc30::FUN_10eccc30(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10eccc30 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("overrideValue"))};

  ((RecoveredVirtualArgumentsSlot7Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ecccc0; body size 108 bytes.
#line 1 "ENTRY_10ecccc0"

int Recovered_10ecccc0::FUN_10ecccc0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ecccc0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("inputAction"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10eccec0; body size 132 bytes.
#line 1 "ENTRY_10eccec0"

int __fastcall FUN_10eccec0(int param_1)

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


// Reference entry 10ecd540; body size 108 bytes.
#line 1 "ENTRY_10ecd540"

int Recovered_10ecd540::FUN_10ecd540(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ecd540 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("hasMarkdown"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ecd5d0; body size 114 bytes.
#line 1 "ENTRY_10ecd5d0"

int Recovered_10ecd5d0::FUN_10ecd5d0(int param_2)

{
  int param_1 = (int)this;

  if (0 < param_2) {
{
RecoveredString_FUN_1008c50b_10ecd5d0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("numberOfVisibleItems"))};

    ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
    }

  }

  return param_1;
}


// Reference entry 10ecd660; body size 108 bytes.
#line 1 "ENTRY_10ecd660"

int Recovered_10ecd660::FUN_10ecd660(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ecd660 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("showPageIndicators"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ecdcc0; body size 108 bytes.
#line 1 "ENTRY_10ecdcc0"

int Recovered_10ecdcc0::FUN_10ecdcc0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10ecdcc0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("postProcessingBitmask"))};

  ((RecoveredVirtualArgumentsSlot10Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return param_1;
}


// Reference entry 10ece320; body size 105 bytes.
#line 1 "ENTRY_10ece320"

int __fastcall FUN_10ece320(int param_1)

{

{
RecoveredString_FUN_1008c50b_10ece320 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("rightPressable"))};

  ((RecoveredVirtualArgumentsSlot16Count2 *)*(int **)(param_1 + 4))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(1));
  }

  return param_1;
}


// Reference entry 10ece7b0; body size 132 bytes.
#line 1 "ENTRY_10ece7b0"

int __fastcall FUN_10ece7b0(int param_1)

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

undefined4 * __fastcall FUN_10ece860(undefined4 *param_1)

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

int __fastcall FUN_10ece910(int param_1)

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


// Reference entry 10ece9c0; body size 120 bytes.
#line 1 "ENTRY_10ece9c0"

int __fastcall FUN_10ece9c0(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ece9c0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("terminationVOText"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
  }

  return param_1;
}


// Reference entry 10ecea60; body size 132 bytes.
#line 1 "ENTRY_10ecea60"

int __fastcall FUN_10ecea60(int param_1)

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

int __fastcall FUN_10eceb10(int param_1)

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

undefined4 * __fastcall FUN_10ecebc0(undefined4 *param_1)

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

int __fastcall FUN_10ecec70(int param_1)

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

int __fastcall FUN_10eced20(int param_1)

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

undefined4 * __fastcall FUN_10ecef50(undefined4 *param_1)

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


// Reference entry 10ecf000; body size 120 bytes.
#line 1 "ENTRY_10ecf000"

int __fastcall FUN_10ecf000(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ecf000 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("animationCaptionVOText"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
  }

  return param_1;
}


// Reference entry 10ecf0a0; body size 120 bytes.
#line 1 "ENTRY_10ecf0a0"

int __fastcall FUN_10ecf0a0(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ecf0a0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("captionVOText"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
  }

  return param_1;
}


// Reference entry 10ecf140; body size 120 bytes.
#line 1 "ENTRY_10ecf140"

int __fastcall FUN_10ecf140(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ecf140 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("imageCaptionVOText"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
  }

  return param_1;
}


// Reference entry 10ecf1e0; body size 120 bytes.
#line 1 "ENTRY_10ecf1e0"

int __fastcall FUN_10ecf1e0(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ecf1e0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("labelVOText"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
  }

  return param_1;
}


// Reference entry 10ecf280; body size 120 bytes.
#line 1 "ENTRY_10ecf280"

int __fastcall FUN_10ecf280(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ecf280 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("voOverride"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
  }

  return param_1;
}


// Reference entry 10ecf320; body size 120 bytes.
#line 1 "ENTRY_10ecf320"

int __fastcall FUN_10ecf320(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ecf320 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("voSubtext"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
  }

  return param_1;
}


// Reference entry 10ecf3c0; body size 120 bytes.
#line 1 "ENTRY_10ecf3c0"

int __fastcall FUN_10ecf3c0(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ecf3c0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("voText"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
  }

  return param_1;
}


// Reference entry 10ecf460; body size 120 bytes.
#line 1 "ENTRY_10ecf460"

int __fastcall FUN_10ecf460(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ecf460 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("voText"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
  }

  return param_1;
}


// Reference entry 10ecf500; body size 120 bytes.
#line 1 "ENTRY_10ecf500"

int __fastcall FUN_10ecf500(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ecf500 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("voText"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
  }

  return param_1;
}


// Reference entry 10ecf640; body size 120 bytes.
#line 1 "ENTRY_10ecf640"

int __fastcall FUN_10ecf640(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ecf640 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("voText"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
  }

  return param_1;
}


// Reference entry 10ecf6e0; body size 120 bytes.
#line 1 "ENTRY_10ecf6e0"

int __fastcall FUN_10ecf6e0(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ecf6e0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("voText"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
  }

  return param_1;
}


// Reference entry 10ecf780; body size 120 bytes.
#line 1 "ENTRY_10ecf780"

int __fastcall FUN_10ecf780(int param_1)

{
  int iVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10ecf780 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("voText"))};

  iVar1 = **(int **)(param_1 + 4);
  uVar3 = thunk_FUN_10c5fc80();
  (**(code **)(iVar1 + 0x1c))(((SCStr *)&recovered_string),uVar3);
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


// Reference entry 10f48610; body size 109 bytes.
#line 1 "ENTRY_10f48610"

undefined4 Recovered_10f48610::FUN_10f48610(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10f48610 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("deviceIds"))};

  ((RecoveredVirtualArgumentsSlot21Count2 *)*(int **)(param_1 + 0xc))->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10f486a0; body size 109 bytes.
#line 1 "ENTRY_10f486a0"

undefined4 Recovered_10f486a0::FUN_10f486a0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10f486a0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("id"))};

  ((RecoveredVirtualArgumentsSlot6Count2 *)*(int **)(param_1 + 0xc))->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10f48bc0; body size 109 bytes.
#line 1 "ENTRY_10f48bc0"

undefined4 Recovered_10f48bc0::FUN_10f48bc0(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10f48bc0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("title"))};

  ((RecoveredVirtualArgumentsSlot6Count2 *)*(int **)(param_1 + 0xc))->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10f48c50; body size 109 bytes.
#line 1 "ENTRY_10f48c50"

undefined1 __fastcall FUN_10f48c50(int param_1)

{
  undefined1 uVar1;

{
RecoveredString_FUN_1008c50b_10f48c50 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("isEditable"))};

  uVar1 = ((RecoveredVirtualArgumentsSlot15Count1 *)*(int **)(param_1 + 0xc))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return uVar1;
}


// Reference entry 10f48e00; body size 127 bytes.
#line 1 "ENTRY_10f48e00"

void Recovered_10f48e00::FUN_10f48e00(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10f48e00 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("deviceIds"))};

  ((RecoveredVirtualArgumentsSlot22Count2 *)*(int **)(param_1 + 0xc))->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  abi_call_thunk_FUN_10f49170();

  return;
}


// Reference entry 10f68dc0; body size 127 bytes.
#line 1 "ENTRY_10f68dc0"

void __fastcall FUN_10f68dc0(int param_1)

{
  undefined1 uVar1;
  int iVar2;


  iVar2 = thunk_FUN_1109f7f0();
  if (iVar2 != 0) {
{
RecoveredString_FUN_1008c50b_10f68dc0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("mlShowContributors"))};

    uVar1 = ((RecoveredVirtualArgumentsSlot15Count1 *)*(int **)(param_1 + 0x18))->Invoke((void *)(((SCStr *)&recovered_string)));
    ((CallABI_thunk_FUN_110a3e90 *)(param_1))->thunk_FUN_110a3e90((char)(uVar1));
    }

  }

  return;
}


// Reference entry 10f90090; body size 111 bytes.
#line 1 "ENTRY_10f90090"

undefined1 __fastcall FUN_10f90090(int *param_1)

{
  undefined1 uVar1;

{
RecoveredString_FUN_1008c50b_10f90090 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("ShareUsageData"))};

  uVar1 = ((RecoveredVirtualArgumentsSlot56Count1 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return uVar1;
}


// Reference entry 10f908a0; body size 105 bytes.
#line 1 "ENTRY_10f908a0"

void __fastcall FUN_10f908a0(int *param_1)

{

{
RecoveredString_FUN_1008c50b_10f908a0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("ShareUsageData"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(1));
  }

  return;
}


// Reference entry 10f91310; body size 108 bytes.
#line 1 "ENTRY_10f91310"

void Recovered_10f91310::FUN_10f91310(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10f91310 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("ShareUsageData"))};

  ((RecoveredVirtualArgumentsSlot57Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return;
}


// Reference entry 10f929c0; body size 157 bytes.
#line 1 "ENTRY_10f929c0"

bool __fastcall FUN_10f929c0(int *param_1)

{
  char cVar1;

  undefined4 uVar3;

{
RecoveredString_FUN_1008c50b_10f929c0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("Mode"))};

  uVar3 = ((RecoveredVirtualArgumentsSlot54Count1 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  switch(uVar3) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:

    return true;
  default:
    cVar1 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot62();

    return cVar1 == '\0';
  }
}


// Reference entry 10f96cc0; body size 111 bytes.
#line 1 "ENTRY_10f96cc0"

undefined1 __fastcall FUN_10f96cc0(int *param_1)

{
  undefined1 uVar1;

{
RecoveredString_FUN_1008c50b_10f96cc0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("ShouldInvert"))};

  uVar1 = ((RecoveredVirtualArgumentsSlot56Count1 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return uVar1;
}


// Reference entry 10f98f30; body size 105 bytes.
#line 1 "ENTRY_10f98f30"

void __fastcall FUN_10f98f30(int *param_1)

{

{
RecoveredString_FUN_1008c50b_10f98f30 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("ConfirmNumber"))};

  ((RecoveredVirtualArgumentsSlot55Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(0));
  }

  return;
}


// Reference entry 10faa300; body size 104 bytes.
#line 1 "ENTRY_10faa300"

void __fastcall FUN_10faa300(int param_1)

{

{
RecoveredString_FUN_1008c50b_10faa300 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CurrentEvent"))};

  ((RecoveredVirtualArgumentsSlot105Count1 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return;
}


// Reference entry 10fb9350; body size 112 bytes.
#line 1 "ENTRY_10fb9350"

undefined4 Recovered_10fb9350::FUN_10fb9350(undefined4 param_2)

{
  int param_1 = (int)this;

{
RecoveredString_FUN_1008c50b_10fb9350 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("NfwSSID"))};

  ((RecoveredVirtualArgumentsSlot52Count2 *)*(int **)(param_1 + 8))->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10fb93e0; body size 111 bytes.
#line 1 "ENTRY_10fb93e0"

undefined4 Recovered_10fb93e0::FUN_10fb93e0(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10fb93e0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("NfwSSID"))};

  ((RecoveredVirtualArgumentsSlot52Count2 *)param_1)->Invoke((void *)(param_2), (void *)(((SCStr *)&recovered_string)));
  }

  return param_2;
}


// Reference entry 10fbd920; body size 104 bytes.
#line 1 "ENTRY_10fbd920"

void __fastcall FUN_10fbd920(int param_1)

{

{
RecoveredString_FUN_1008c50b_10fbd920 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("CurrentEvent"))};

  ((RecoveredVirtualArgumentsSlot105Count1 *)*(int **)(param_1 + 8))->Invoke((void *)(((SCStr *)&recovered_string)));
  }

  return;
}


// Reference entry 10fc0550; body size 108 bytes.
#line 1 "ENTRY_10fc0550"

void Recovered_10fc0550::FUN_10fc0550(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10fc0550 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("NfwPassword"))};

  ((RecoveredVirtualArgumentsSlot53Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return;
}


// Reference entry 10fc05e0; body size 108 bytes.
#line 1 "ENTRY_10fc05e0"

void Recovered_10fc05e0::FUN_10fc05e0(undefined4 param_2)

{
  int * param_1 = (int *)this;

{
RecoveredString_FUN_1008c50b_10fc05e0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("NfwSSID"))};

  ((RecoveredVirtualArgumentsSlot53Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(param_2));
  }

  return;
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


// Reference entry 1100baf0; body size 126 bytes.
#line 1 "ENTRY_1100baf0"

void __fastcall FUN_1100baf0(int *param_1)

{

{
RecoveredString_FUN_1008c50b_1100baf0 recovered_string{(*(volatile undefined4 *)&recovered_string = (undefined4)(param_1), (char *)("RoomActivePlayerIndex"))};

  ((RecoveredVirtualArgumentsSlot55Count2 *)param_1)->Invoke((void *)(((SCStr *)&recovered_string)), (void *)(0xffffffff));
  }

  abi_call_thunk_FUN_1100bf40((int *)(param_1));

  return;
}


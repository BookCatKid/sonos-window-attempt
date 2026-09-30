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
extern undefined4 DAT_121a0e70;
extern undefined4 DAT_121a10c8;
extern undefined4 * PTR_DAT_12119128;
extern char ghidra_vftable_AnacapaLauncher[];
extern char ghidra_vftable_ApplicationControllerAIOHelper[];
extern char ghidra_vftable_ModernCRLegacyZPsAndHHSWGenData[];
extern char ghidra_vftable_RITQHandler[];
extern char ghidra_vftable_SCFoundProductManager[];
extern char ghidra_vftable_SCJsonHelper[];
extern char ghidra_vftable_SCLoggingHelper[];
extern char ghidra_vftable_SCOpRefreshToken[];
extern char ghidra_vftable_SCRadioPickCityBrowseDataSource[];
extern char ghidra_vftable_SCTimerUser[];
extern char ghidra_vftable_SWGenMismatchModernControllerMixedLegacyHHData[];
extern char ghidra_vftable_ScopedRWLock[];
extern void __fastcall abi_call_thunk_FUN_11243520(undefined4 *);
extern void __cdecl abi_call_thunk_FUN_1148a50e(void *, uint);
extern void thunk_FUN_1148a50e(void *allocation, unsigned int bytes) noexcept;
extern void __fastcall abi_call_thunk_FUN_11242f30(int);
extern void __fastcall abi_call_thunk_FUN_11242ca0(int);
extern void __fastcall abi_call_thunk_FUN_1022df10(int *);
extern void __fastcall abi_call_thunk_FUN_1059c050(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_1059d800(int);
extern void __cdecl abi_call_thunk_FUN_110fc270(void);
extern void __cdecl abi_call_thunk_FUN_112a7f20(undefined4 *);
extern undefined4 __cdecl abi_call_thunk_FUN_112a7c30(int);
struct CallABI_thunk_FUN_110f62c0 { void thunk_FUN_110f62c0(int); };
extern void __fastcall abi_call_thunk_FUN_103d0880(undefined4 *);
struct CallABI_thunk_FUN_1032f400 { void thunk_FUN_1032f400(undefined4, int *); };
struct CallABI_thunk_FUN_1032f330 { void thunk_FUN_1032f330(undefined4, int *); };
struct CallABI_thunk_FUN_1032f250 { void thunk_FUN_1032f250(undefined4, int *); };
extern void __fastcall abi_call_thunk_FUN_103367d0(int *);
extern void __fastcall abi_call_thunk_FUN_102037c0(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103c1f90(undefined4 *);
extern void __fastcall abi_call_thunk_FUN_103c2ab0(undefined4 *);
extern int thunk_FUN_1032f250(...);
extern int thunk_FUN_1032f330(...);
extern int thunk_FUN_1032f400(...);
extern int thunk_FUN_110f62c0(...);
struct Recovered_101d5c90 { undefined4 * FUN_101d5c90(byte param_2) noexcept; };
struct Recovered_101d5ee0 { undefined4 * FUN_101d5ee0(byte param_2) noexcept; };
struct Recovered_10230a60 { undefined4 * FUN_10230a60(byte param_2) noexcept; };
struct Recovered_10231490 { undefined4 * FUN_10231490(byte param_2) noexcept; };
struct Recovered_102315a0 { undefined4 * FUN_102315a0(byte param_2) noexcept; };
struct Recovered_10280140 { undefined4 * FUN_10280140(byte param_2) noexcept; };
struct Recovered_102ee930 { undefined4 * FUN_102ee930(byte param_2) noexcept; };
struct Recovered_10338450 { undefined4 * FUN_10338450(byte param_2) noexcept; };
struct Recovered_103a9e10 { undefined4 * FUN_103a9e10(byte param_2) noexcept; };
struct Recovered_103c4110 { undefined4 * FUN_103c4110(byte param_2) noexcept; };
// Reference entry 101d3590; body size 90 bytes.
#line 1 "ENTRY_101d3590"

void __fastcall FUN_101d3590(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCJsonHelper;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 10))->int_release();
  param_1[10] = 0;
  abi_call_thunk_FUN_11243520((undefined4 *)(param_1));

  
})();
return;
}


// Reference entry 101d5c90; body size 111 bytes.
#line 1 "ENTRY_101d5c90"

undefined4 * Recovered_101d5c90::FUN_101d5c90(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCJsonHelper;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 10))->int_release();
  param_1[10] = 0;
  abi_call_thunk_FUN_11243520((undefined4 *)(param_1));
  if ((param_2 & 1) != 0) {
    abi_call_thunk_FUN_1148a50e((void *)((void *)(param_1)), (uint)(0x34));
  }

  
})();
return param_1;
}


// Reference entry 101d5ee0; body size 114 bytes.
#line 1 "ENTRY_101d5ee0"

undefined4 * Recovered_101d5ee0::FUN_101d5ee0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  ([&]() noexcept {

  *param_1 = (undefined4)&ghidra_vftable_ScopedRWLock;
  if (*(char *)(param_1 + 3) != '\0') {
    if (param_1[2] == 0) {
      abi_call_thunk_FUN_11242ca0((int)(param_1[1]));
    }
    else {
      abi_call_thunk_FUN_11242f30((int)(param_1[1]));
    }
  }
  if ((param_2 & 1) != 0) {
    abi_call_thunk_FUN_1148a50e((void *)((void *)(param_1)), (uint)(0x10));
  }

  
})();
return param_1;
}


// Reference entry 1022e040; body size 90 bytes.
#line 1 "ENTRY_1022e040"

void __fastcall FUN_1022e040(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_ModernCRLegacyZPsAndHHSWGenData;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 9))->int_release();
  param_1[9] = 0;
  abi_call_thunk_FUN_1022df10((int *)(param_1));

  
})();
return;
}


// Reference entry 1022eed0; body size 90 bytes.
#line 1 "ENTRY_1022eed0"

void __fastcall FUN_1022eed0(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SWGenMismatchModernControllerMixedLegacyHHData;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 9))->int_release();
  param_1[9] = 0;
  abi_call_thunk_FUN_1022df10((int *)(param_1));

  
})();
return;
}


// Reference entry 10230a60; body size 111 bytes.
#line 1 "ENTRY_10230a60"

undefined4 * Recovered_10230a60::FUN_10230a60(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_ModernCRLegacyZPsAndHHSWGenData;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 9))->int_release();
  param_1[9] = 0;
  abi_call_thunk_FUN_1022df10((int *)(param_1));
  if ((param_2 & 1) != 0) {
    abi_call_thunk_FUN_1148a50e((void *)((void *)(param_1)), (uint)(0x28));
  }

  
})();
return param_1;
}


// Reference entry 10231490; body size 105 bytes.
#line 1 "ENTRY_10231490"

undefined4 * Recovered_10231490::FUN_10231490(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  ([&]() noexcept {

  *param_1 = (undefined4)&ghidra_vftable_SCTimerUser;
  abi_call_thunk_FUN_1059d800((int)(param_1 + 1));
  abi_call_thunk_FUN_1059c050((undefined4 *)(param_1 + 1));
  if ((param_2 & 1) != 0) {
    abi_call_thunk_FUN_1148a50e((void *)((void *)(param_1)), (uint)(0x1c));
  }

  
})();
return param_1;
}


// Reference entry 102315a0; body size 111 bytes.
#line 1 "ENTRY_102315a0"

undefined4 * Recovered_102315a0::FUN_102315a0(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SWGenMismatchModernControllerMixedLegacyHHData;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 9))->int_release();
  param_1[9] = 0;
  abi_call_thunk_FUN_1022df10((int *)(param_1));
  if ((param_2 & 1) != 0) {
    abi_call_thunk_FUN_1148a50e((void *)((void *)(param_1)), (uint)(0x28));
  }

  
})();
return param_1;
}


// Reference entry 10280140; body size 132 bytes.
#line 1 "ENTRY_10280140"

undefined4 * Recovered_10280140::FUN_10280140(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  ([&]() noexcept {

  *param_1 = (undefined4)&ghidra_vftable_AnacapaLauncher;
  abi_call_thunk_FUN_112a7c30((int)(param_1 + 9));
  abi_call_thunk_FUN_112a7f20((undefined4 *)(param_1 + 7));
  PTR_DAT_12119128 = (undefined *)0x0;
  abi_call_thunk_FUN_110fc270();
  *param_1 = (undefined4)&ghidra_vftable_RITQHandler;
  if ((param_2 & 1) != 0) {
    abi_call_thunk_FUN_1148a50e((void *)((void *)(param_1)), (uint)(0x468));
  }

  
})();
return param_1;
}


// Reference entry 102ee930; body size 112 bytes.
#line 1 "ENTRY_102ee930"

undefined4 * Recovered_102ee930::FUN_102ee930(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  ([&]() noexcept {

  *param_1 = (undefined4)&ghidra_vftable_ApplicationControllerAIOHelper;
  ((CallABI_thunk_FUN_110f62c0 *)((void *)param_1[1]))->thunk_FUN_110f62c0((int)(param_1));
  DAT_121a0e70 = 0;
  *param_1 = (undefined4)&ghidra_vftable_RITQHandler;
  if ((param_2 & 1) != 0) {
    abi_call_thunk_FUN_1148a50e((void *)((void *)(param_1)), (uint)(8));
  }

  
})();
return param_1;
}


// Reference entry 10336930; body size 297 bytes.
#line 1 "ENTRY_10336930"

void __fastcall FUN_10336930(undefined4 *param_1) noexcept
{
  undefined4 *puVar1;


  *param_1 = (undefined4)&ghidra_vftable_SCFoundProductManager;
  param_1[0x1c] = (undefined4)&ghidra_vftable_SCFoundProductManager;
  param_1[0x1d] = (undefined4)&ghidra_vftable_SCFoundProductManager;
  param_1[0x1e] = (undefined4)&ghidra_vftable_SCFoundProductManager;
  abi_call_thunk_FUN_112a7f20((undefined4 *)(param_1 + 0x2b));
  abi_call_thunk_FUN_112a7f20((undefined4 *)(param_1 + 0x30));
  DAT_121a10c8 = 0;
  abi_call_thunk_FUN_103367d0((int *)(param_1 + 0x32));
  abi_call_thunk_FUN_103367d0((int *)(param_1 + 0x2d));
  puVar1 = param_1 + 0x29;
  ((CallABI_thunk_FUN_1032f250 *)(puVar1))->thunk_FUN_1032f250((undefined4)(puVar1), (int *)(*(undefined4 *)(param_1[0x29] + 4)));
  abi_call_thunk_FUN_1148a50e((void *)((void *)((void *)*puVar1)), (uint)(0x1c));
  puVar1 = param_1 + 0x27;
  ((CallABI_thunk_FUN_1032f330 *)(puVar1))->thunk_FUN_1032f330((undefined4)(puVar1), (int *)(*(undefined4 *)(param_1[0x27] + 4)));
  abi_call_thunk_FUN_1148a50e((void *)((void *)((void *)*puVar1)), (uint)(0x1c));
  puVar1 = param_1 + 0x25;
  ((CallABI_thunk_FUN_1032f400 *)(puVar1))->thunk_FUN_1032f400((undefined4)(puVar1), (int *)(*(undefined4 *)(param_1[0x25] + 4)));
  abi_call_thunk_FUN_1148a50e((void *)((void *)((void *)*puVar1)), (uint)(0x1c));
  ([&]() noexcept {

  param_1[0x1e] = (undefined4)&ghidra_vftable_SCTimerUser;
  abi_call_thunk_FUN_1059d800((int)(param_1 + 0x1f));
  abi_call_thunk_FUN_1059c050((undefined4 *)(param_1 + 0x1f));
  param_1[0x1d] = (undefined4)&ghidra_vftable_SCLoggingHelper;
  param_1[0x1c] = (undefined4)&ghidra_vftable_RITQHandler;
  abi_call_thunk_FUN_103d0880((undefined4 *)(param_1));

  
})();
return;
}


// Reference entry 10338450; body size 321 bytes.
#line 1 "ENTRY_10338450"

undefined4 * Recovered_10338450::FUN_10338450(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;


  *param_1 = (undefined4)&ghidra_vftable_SCFoundProductManager;
  param_1[0x1c] = (undefined4)&ghidra_vftable_SCFoundProductManager;
  param_1[0x1d] = (undefined4)&ghidra_vftable_SCFoundProductManager;
  param_1[0x1e] = (undefined4)&ghidra_vftable_SCFoundProductManager;
  abi_call_thunk_FUN_112a7f20((undefined4 *)(param_1 + 0x2b));
  abi_call_thunk_FUN_112a7f20((undefined4 *)(param_1 + 0x30));
  DAT_121a10c8 = 0;
  abi_call_thunk_FUN_103367d0((int *)(param_1 + 0x32));
  abi_call_thunk_FUN_103367d0((int *)(param_1 + 0x2d));
  puVar1 = param_1 + 0x29;
  ((CallABI_thunk_FUN_1032f250 *)(puVar1))->thunk_FUN_1032f250((undefined4)(puVar1), (int *)(*(undefined4 *)(param_1[0x29] + 4)));
  abi_call_thunk_FUN_1148a50e((void *)((void *)((void *)*puVar1)), (uint)(0x1c));
  puVar1 = param_1 + 0x27;
  ((CallABI_thunk_FUN_1032f330 *)(puVar1))->thunk_FUN_1032f330((undefined4)(puVar1), (int *)(*(undefined4 *)(param_1[0x27] + 4)));
  abi_call_thunk_FUN_1148a50e((void *)((void *)((void *)*puVar1)), (uint)(0x1c));
  puVar1 = param_1 + 0x25;
  ((CallABI_thunk_FUN_1032f400 *)(puVar1))->thunk_FUN_1032f400((undefined4)(puVar1), (int *)(*(undefined4 *)(param_1[0x25] + 4)));
  abi_call_thunk_FUN_1148a50e((void *)((void *)((void *)*puVar1)), (uint)(0x1c));
  ([&]() noexcept {

  param_1[0x1e] = (undefined4)&ghidra_vftable_SCTimerUser;
  abi_call_thunk_FUN_1059d800((int)(param_1 + 0x1f));
  abi_call_thunk_FUN_1059c050((undefined4 *)(param_1 + 0x1f));
  param_1[0x1d] = (undefined4)&ghidra_vftable_SCLoggingHelper;
  param_1[0x1c] = (undefined4)&ghidra_vftable_RITQHandler;
  abi_call_thunk_FUN_103d0880((undefined4 *)(param_1));
  if ((param_2 & 1) != 0) {
    abi_call_thunk_FUN_1148a50e((void *)((void *)(param_1)), (uint)(0xd8));
  }

  
})();
return param_1;
}


// Reference entry 103a8880; body size 200 bytes.
#line 1 "ENTRY_103a8880"

void __fastcall FUN_103a8880(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x22] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x94] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x95] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x96] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xa0))->int_release();
  param_1[0xa0] = 0;
  abi_call_thunk_FUN_102037c0((undefined4 *)(param_1));

  
})();
return;
}


// Reference entry 103a9e10; body size 224 bytes.
#line 1 "ENTRY_103a9e10"

undefined4 * Recovered_103a9e10::FUN_103a9e10(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[2] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[10] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x20] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x21] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x22] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x23] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x24] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x25] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x94] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x95] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  param_1[0x96] = (undefined4)&ghidra_vftable_SCRadioPickCityBrowseDataSource;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0xa0))->int_release();
  param_1[0xa0] = 0;
  abi_call_thunk_FUN_102037c0((undefined4 *)(param_1));
  if ((param_2 & 1) != 0) {
    abi_call_thunk_FUN_1148a50e((void *)((void *)(param_1)), (uint)(0x288));
  }

  
})();
return param_1;
}


// Reference entry 103c2e10; body size 111 bytes.
#line 1 "ENTRY_103c2e10"

void __fastcall FUN_103c2e10(undefined4 *param_1) noexcept
{

  *param_1 = (undefined4)&ghidra_vftable_SCOpRefreshToken;
  param_1[2] = (undefined4)&ghidra_vftable_SCOpRefreshToken;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x19a1))->int_release();
  param_1[0x19a1] = 0;
  abi_call_thunk_FUN_103c2ab0((undefined4 *)(param_1 + 0x12));
  abi_call_thunk_FUN_103c1f90((undefined4 *)(param_1));

  
})();
return;
}


// Reference entry 103c4110; body size 135 bytes.
#line 1 "ENTRY_103c4110"

undefined4 * Recovered_103c4110::FUN_103c4110(byte param_2) noexcept
{
  undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)&ghidra_vftable_SCOpRefreshToken;
  param_1[2] = (undefined4)&ghidra_vftable_SCOpRefreshToken;
  ([&]() noexcept {

  ((SCStr *)(param_1 + 0x19a1))->int_release();
  param_1[0x19a1] = 0;
  abi_call_thunk_FUN_103c2ab0((undefined4 *)(param_1 + 0x12));
  abi_call_thunk_FUN_103c1f90((undefined4 *)(param_1));
  if ((param_2 & 1) != 0) {
    abi_call_thunk_FUN_1148a50e((void *)((void *)(param_1)), (uint)(0x6688));
  }

  
})();
return param_1;
}


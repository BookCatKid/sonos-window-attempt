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
};
extern undefined4 DAT_122f6ca0;
extern "C" {
long _InterlockedIncrement(volatile long *);
long _InterlockedDecrement(volatile long *);
long _InterlockedExchange(volatile long *, long);
long _InterlockedExchangeAdd(volatile long *, long);
char _InterlockedExchange8(volatile char *, char);
short _InterlockedExchange16(volatile short *, short);
char _InterlockedExchangeAdd8(volatile char *, char);
short _InterlockedExchangeAdd16(volatile short *, short);
}
#pragma intrinsic(_InterlockedIncrement, _InterlockedDecrement, _InterlockedExchange, _InterlockedExchangeAdd)
#pragma intrinsic(_InterlockedExchange8, _InterlockedExchange16, _InterlockedExchangeAdd8, _InterlockedExchangeAdd16)

extern int __fastcall abi_call_thunk_FUN_10c7d430(int *);
extern int thunk_FUN_112f2220(...);
struct Recovered_101cca50 { undefined4 * FUN_101cca50(undefined4 *param_2); };
struct Recovered_101cdb40 { void FUN_101cdb40(undefined4 *param_2); };
struct Recovered_101ce840 { void FUN_101ce840(undefined4 *param_2); };
struct Recovered_101d0590 { undefined4 * FUN_101d0590(undefined4 *param_2); };
struct Recovered_102dc4d0 { void FUN_102dc4d0(undefined4 *param_2); };
struct Recovered_102dc820 { undefined4 * FUN_102dc820(undefined4 *param_2); };
struct Recovered_10c7cfb0 { void FUN_10c7cfb0(int param_2); };
struct Recovered_11272500 { void FUN_11272500(undefined4 *param_2); };
struct Recovered_11272bd0 { undefined4 * FUN_11272bd0(undefined4 *param_2); };
struct Recovered_112ef590 { int FUN_112ef590(int param_2); };
struct Recovered_113cf770 { void FUN_113cf770(undefined1 param_2); };
struct Recovered_113cf800 { undefined4 FUN_113cf800(undefined4 param_2); };
struct Recovered_113cf860 { undefined4 FUN_113cf860(undefined4 param_2); };
struct Recovered_113cf880 { undefined4 FUN_113cf880(undefined4 param_2); };
struct Recovered_113cf890 { undefined4 FUN_113cf890(undefined4 param_2,undefined4 param_3); };
struct Recovered_113cf8f0 { undefined1 FUN_113cf8f0(undefined1 param_2); };
// Reference entry 1000322e; body size 5 bytes.
#line 1 "ENTRY_1000322e"



int __cdecl FUN_1000322e(long *param_1)

{
  int iVar1;
  
                    
  iVar1 = _InterlockedExchange((volatile long *)(param_1), (long)(0));

  return iVar1;
}


// Reference entry 101cca50; body size 42 bytes.
#line 1 "ENTRY_101cca50"



undefined4 * Recovered_101cca50::FUN_101cca50(undefined4 *param_2)

{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    *param_1 = *param_2;
    iVar2 = param_2[1];
    param_1[1] = iVar2;
    piVar1 = (int *)(iVar2 + 8);
_InterlockedIncrement((volatile long *)(piVar1));
  }
  return param_1;
}


// Reference entry 101cdb40; body size 28 bytes.
#line 1 "ENTRY_101cdb40"



void Recovered_101cdb40::FUN_101cdb40(undefined4 *param_2)

{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  
  if (param_2[1] != 0) {
    piVar1 = (int *)(param_2[1] + 4);
_InterlockedIncrement((volatile long *)(piVar1));
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}


// Reference entry 101ce840; body size 27 bytes.
#line 1 "ENTRY_101ce840"



void Recovered_101ce840::FUN_101ce840(undefined4 *param_2)

{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  
  if (param_2[1] != 0) {
    *param_1 = *param_2;
    iVar2 = param_2[1];
    param_1[1] = iVar2;
    piVar1 = (int *)(iVar2 + 8);
_InterlockedIncrement((volatile long *)(piVar1));
  }
  return;
}


// Reference entry 101d0590; body size 43 bytes.
#line 1 "ENTRY_101d0590"



undefined4 * Recovered_101d0590::FUN_101d0590(undefined4 *param_2)

{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    piVar1 = (int *)(param_2[1] + 4);
_InterlockedIncrement((volatile long *)(piVar1));
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return param_1;
}


// Reference entry 101d6180; body size 40 bytes.
#line 1 "ENTRY_101d6180"



int __fastcall FUN_101d6180(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1 + 1;
iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));
iVar2 = iVar3;
  if (iVar3 + -1 == 0) {
    iVar2 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot0();
    piVar1 = param_1 + 2;
iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));

    if (iVar3 == 1) {
                    
                    
      iVar3 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
      return iVar3;
    }
  }
  return iVar2;
}


// Reference entry 101d61e0; body size 16 bytes.
#line 1 "ENTRY_101d61e0"



int __fastcall FUN_101d61e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1 + 2;
iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));
iVar2 = iVar3;
  if (iVar3 + -1 == 0) {
                    
                    
    iVar3 = ((RecoveredVirtualSlots *)(param_1))->VirtualSlot1();
    return iVar3;
  }
  return iVar2;
}


// Reference entry 101d6b10; body size 12 bytes.
#line 1 "ENTRY_101d6b10"



void __fastcall FUN_101d6b10(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 4);
_InterlockedIncrement((volatile long *)(piVar1));
  }
  return;
}


// Reference entry 101d6b20; body size 5 bytes.
#line 1 "ENTRY_101d6b20"



void __fastcall FUN_101d6b20(int param_1)

{
  _InterlockedIncrement((volatile long *)((int *)(param_1 + 4)));
  return;
}


// Reference entry 101d6b70; body size 5 bytes.
#line 1 "ENTRY_101d6b70"



void __fastcall FUN_101d6b70(int param_1)

{
  _InterlockedIncrement((volatile long *)((int *)(param_1 + 8)));
  return;
}


// Reference entry 102274d0; body size 51 bytes.
#line 1 "ENTRY_102274d0"



int FUN_102274d0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_2 + 8);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 1;
iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));
param_2 = iVar3;
    if (iVar3 + -1 == 0) {
      param_2 = ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot0();
      piVar1 = piVar2 + 2;
iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));

      if (iVar3 == 1) {
                    
                    
        iVar3 = ((RecoveredVirtualSlots *)(piVar2))->VirtualSlot1();
        return iVar3;
      }
    }
  }
  return param_2;
}


// Reference entry 102dc4d0; body size 28 bytes.
#line 1 "ENTRY_102dc4d0"



void Recovered_102dc4d0::FUN_102dc4d0(undefined4 *param_2)

{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  
  if (param_2[1] != 0) {
    piVar1 = (int *)(param_2[1] + 4);
_InterlockedIncrement((volatile long *)(piVar1));
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}


// Reference entry 102dc820; body size 43 bytes.
#line 1 "ENTRY_102dc820"



undefined4 * Recovered_102dc820::FUN_102dc820(undefined4 *param_2)

{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    piVar1 = (int *)(param_2[1] + 4);
_InterlockedIncrement((volatile long *)(piVar1));
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return param_1;
}


// Reference entry 102dd670; body size 12 bytes.
#line 1 "ENTRY_102dd670"



void __fastcall FUN_102dd670(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 4);
_InterlockedIncrement((volatile long *)(piVar1));
  }
  return;
}


// Reference entry 10c7cfb0; body size 28 bytes.
#line 1 "ENTRY_10c7cfb0"



void Recovered_10c7cfb0::FUN_10c7cfb0(int param_2)

{
  int * param_1 = (int *)this;
  if (param_2 != 0) {
    _InterlockedIncrement((volatile long *)((int *)(param_2 + 0x20)));
  }
  abi_call_thunk_FUN_10c7d430((int *)(param_1));
  *param_1 = param_2;
  return;
}


// Reference entry 10c7d430; body size 72 bytes.
#line 1 "ENTRY_10c7d430"

int __fastcall FUN_10c7d430(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_EAX;
  
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x20);
iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));
in_EAX = iVar2;
    if (iVar2 + -1 == 0) {
      puVar4 = (undefined4 *)*param_1;
      while (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)puVar4[3];
        puVar4[3] = 0;
        in_EAX = (**(code **)*puVar4)(1);
        puVar4 = puVar3;
      }
      *param_1 = 0;
      return in_EAX;
    }
  }
  *param_1 = 0;
  return in_EAX;
}


// Reference entry 11272500; body size 28 bytes.
#line 1 "ENTRY_11272500"



void Recovered_11272500::FUN_11272500(undefined4 *param_2)

{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  
  if (param_2[1] != 0) {
    piVar1 = (int *)(param_2[1] + 4);
_InterlockedIncrement((volatile long *)(piVar1));
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}


// Reference entry 11272bd0; body size 43 bytes.
#line 1 "ENTRY_11272bd0"



undefined4 * Recovered_11272bd0::FUN_11272bd0(undefined4 *param_2)

{
  undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    piVar1 = (int *)(param_2[1] + 4);
_InterlockedIncrement((volatile long *)(piVar1));
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return param_1;
}


// Reference entry 11273be0; body size 12 bytes.
#line 1 "ENTRY_11273be0"



void __fastcall FUN_11273be0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 4);
_InterlockedIncrement((volatile long *)(piVar1));
  }
  return;
}


// Reference entry 112eeea0; body size 36 bytes.
#line 1 "ENTRY_112eeea0"

void FUN_112eeea0(int param_1)

{
  _InterlockedIncrement((volatile long *)((int *)(param_1 + 0x118)));
  if (DAT_122f6ca0 != 0) {
    thunk_FUN_112f2220(param_1);
  }
  return;
}


// Reference entry 112ef590; body size 11 bytes.
#line 1 "ENTRY_112ef590"



int Recovered_112ef590::FUN_112ef590(int param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  
  iVar1 = _InterlockedExchangeAdd((volatile long *)(param_1), (long)(param_2));

  return iVar1;
}


// Reference entry 112efba0; body size 56 bytes.
#line 1 "ENTRY_112efba0"

void FUN_112efba0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 0x46;
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));

  if (DAT_122f6ca0 != 0) {
    thunk_FUN_112f2220(param_1);
  }
  if ((iVar2 < 2) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x10))(1);
  }
  return;
}


// Reference entry 113cf770; body size 11 bytes.
#line 1 "ENTRY_113cf770"



void Recovered_113cf770::FUN_113cf770(undefined1 param_2)

{
  undefined1 * param_1 = (undefined1 *)this;
  _InterlockedExchange8((volatile char *)(param_1), (char)(param_2));
  return;
}


// Reference entry 113cf790; body size 9 bytes.
#line 1 "ENTRY_113cf790"



void FUN_113cf790(undefined4 *param_1)

{
  _InterlockedExchange((volatile long *)(param_1), (long)(0));
  return;
}


// Reference entry 113cf7a0; body size 17 bytes.
#line 1 "ENTRY_113cf7a0"



bool FUN_113cf7a0(int *param_1)

{
  int iVar1;
  
  iVar1 = _InterlockedExchange((volatile long *)(param_1), (long)(1));

  return iVar1 != 0;
}


// Reference entry 113cf800; body size 23 bytes.
#line 1 "ENTRY_113cf800"



undefined4 Recovered_113cf800::FUN_113cf800(undefined4 param_2)

{
  undefined4 * param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    *param_1 = 0;
    return param_2;
  default:
    uVar1 = _InterlockedExchange((volatile long *)(param_1), (long)(0));

    return uVar1;
  case 3:
    *param_1 = 0;
    return param_2;
  }
}


// Reference entry 113cf860; body size 9 bytes.
#line 1 "ENTRY_113cf860"



undefined4 Recovered_113cf860::FUN_113cf860(undefined4 param_2)

{
  undefined4 * param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = _InterlockedExchange((volatile long *)(param_1), (long)(param_2));

  return uVar1;
}


// Reference entry 113cf880; body size 9 bytes.
#line 1 "ENTRY_113cf880"



undefined4 Recovered_113cf880::FUN_113cf880(undefined4 param_2)

{
  undefined4 * param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = _InterlockedExchange((volatile long *)(param_1), (long)(param_2));

  return uVar1;
}


// Reference entry 113cf890; body size 25 bytes.
#line 1 "ENTRY_113cf890"



undefined4 Recovered_113cf890::FUN_113cf890(undefined4 param_2,undefined4 param_3)

{
  undefined4 * param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  switch(param_3) {
  case 0:
    *param_1 = param_2;
    return param_2;
  default:
    uVar1 = _InterlockedExchange((volatile long *)(param_1), (long)(param_2));

    return uVar1;
  case 3:
    *param_1 = param_2;
    return param_2;
  }
}


// Reference entry 113cf8f0; body size 9 bytes.
#line 1 "ENTRY_113cf8f0"



undefined1 Recovered_113cf8f0::FUN_113cf8f0(undefined1 param_2)

{
  undefined1 * param_1 = (undefined1 *)this;
  undefined1 uVar1;
  
  uVar1 = _InterlockedExchange8((volatile char *)(param_1), (char)(param_2));

  return uVar1;
}


// Reference entry 11460640; body size 13 bytes.
#line 1 "ENTRY_11460640"



int FUN_11460640(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _InterlockedExchangeAdd((volatile long *)(param_1), (long)(param_2));

  return iVar1;
}


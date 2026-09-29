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
    ~SCStr() noexcept { int_release(); rep = 0; }
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
extern void thunk_FUN_1148a50e(void *allocation, unsigned int bytes) noexcept;
struct Recovered_10126540 { SCStr * FUN_10126540(byte param_2) noexcept; };
struct Recovered_10126680 { SCStr * FUN_10126680(byte param_2) noexcept; };
struct Recovered_10126940 { SCStr * FUN_10126940(byte param_2) noexcept; };
struct Recovered_10230850 { int FUN_10230850(byte param_2) noexcept; };
struct Recovered_102479b0 { SCStr * FUN_102479b0(byte param_2) noexcept; };
struct Recovered_10268160 { SCStr * FUN_10268160(byte param_2) noexcept; };
struct Recovered_10276ad0 { int FUN_10276ad0(byte param_2) noexcept; };
struct Recovered_10277590 { void FUN_10277590(char param_2) noexcept; };
struct Recovered_102781c0 { int * FUN_102781c0(int *param_2,int *param_3) noexcept; };
struct Recovered_1028e4e0 { SCStr * FUN_1028e4e0(byte param_2) noexcept; };
struct Recovered_102ee750 { SCStr * FUN_102ee750(byte param_2) noexcept; };
struct Recovered_102ee7d0 { SCStr * FUN_102ee7d0(byte param_2) noexcept; };
struct Recovered_10338090 { int FUN_10338090(byte param_2) noexcept; };
struct Recovered_103394a0 { void FUN_103394a0(char param_2) noexcept; };
struct Recovered_10347520 { int FUN_10347520(byte param_2) noexcept; };
struct Recovered_103fc250 { SCStr * FUN_103fc250(byte param_2) noexcept; };
struct Recovered_103fc2d0 { int FUN_103fc2d0(byte param_2) noexcept; };
struct Recovered_104868c0 { int FUN_104868c0(byte param_2) noexcept; };
struct Recovered_10487760 { void FUN_10487760(char param_2) noexcept; };
struct Recovered_104fbcc0 { SCStr * FUN_104fbcc0(byte param_2) noexcept; };
struct Recovered_10504990 { int FUN_10504990(byte param_2) noexcept; };
struct Recovered_105a9af0 { SCStr * FUN_105a9af0(byte param_2) noexcept; };
struct Recovered_105a9b70 { int FUN_105a9b70(byte param_2) noexcept; };
struct Recovered_105ba930 { SCStr * FUN_105ba930(byte param_2) noexcept; };
struct Recovered_105f0370 { int FUN_105f0370(byte param_2) noexcept; };
struct Recovered_105f0550 { int FUN_105f0550(byte param_2) noexcept; };
struct Recovered_105f05d0 { int FUN_105f05d0(byte param_2) noexcept; };
struct Recovered_105f0ee0 { void FUN_105f0ee0(char param_2) noexcept; };
struct Recovered_105f10e0 { void FUN_105f10e0(char param_2) noexcept; };
struct Recovered_105f11c0 { void FUN_105f11c0(char param_2) noexcept; };
struct Recovered_106585c0 { SCStr * FUN_106585c0(byte param_2) noexcept; };
struct Recovered_10658640 { SCStr * FUN_10658640(byte param_2) noexcept; };
struct Recovered_10684e10 { SCStr * FUN_10684e10(byte param_2) noexcept; };
struct Recovered_106b6c30 { SCStr * FUN_106b6c30(byte param_2) noexcept; };
struct Recovered_106b6cb0 { int FUN_106b6cb0(byte param_2) noexcept; };
struct Recovered_106b6f30 { SCStr * FUN_106b6f30(byte param_2) noexcept; };
struct Recovered_106dec70 { SCStr * FUN_106dec70(byte param_2) noexcept; };
struct Recovered_106decf0 { SCStr * FUN_106decf0(byte param_2) noexcept; };
struct Recovered_1072cc40 { int FUN_1072cc40(byte param_2) noexcept; };
struct Recovered_1072cd70 { SCStr * FUN_1072cd70(byte param_2) noexcept; };
struct Recovered_1072e010 { void FUN_1072e010(char param_2) noexcept; };
struct Recovered_1082c2f0 { SCStr * FUN_1082c2f0(byte param_2) noexcept; };
struct Recovered_10862770 { SCStr * FUN_10862770(byte param_2) noexcept; };
struct Recovered_10af7570 { int FUN_10af7570(byte param_2) noexcept; };
struct Recovered_10af75f0 { int FUN_10af75f0(byte param_2) noexcept; };
struct Recovered_10b5ea20 { SCStr * FUN_10b5ea20(byte param_2) noexcept; };
struct Recovered_10ba8240 { int FUN_10ba8240(byte param_2) noexcept; };
struct Recovered_10bc4290 { int FUN_10bc4290(byte param_2) noexcept; };
struct Recovered_10bd8ef0 { SCStr * FUN_10bd8ef0(byte param_2) noexcept; };
struct Recovered_10bd8f70 { int FUN_10bd8f70(byte param_2) noexcept; };
struct Recovered_10c02660 { SCStr * FUN_10c02660(byte param_2) noexcept; };
struct Recovered_10c93d70 { int FUN_10c93d70(byte param_2) noexcept; };
struct Recovered_10d6a170 { int FUN_10d6a170(byte param_2) noexcept; };
struct Recovered_10d9ff50 { int FUN_10d9ff50(byte param_2) noexcept; };
struct Recovered_10defb60 { SCStr * FUN_10defb60(byte param_2) noexcept; };
struct Recovered_10eb7440 { SCStr * FUN_10eb7440(byte param_2) noexcept; };
struct Recovered_10f26840 { int FUN_10f26840(byte param_2) noexcept; };
// Reference entry 101170a0; body size 130 bytes.
#line 1 "ENTRY_101170a0"

void FUN_101170a0(undefined4 param_1,undefined4 *param_2) noexcept
{
  undefined4 *puVar1;
  undefined4 *puVar2;

  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)*param_2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;

    ((SCStr *)(puVar2 + 2))->~SCStr();

    thunk_FUN_1148a50e((void *)(puVar2), 0xc);
    puVar2 = puVar1;
  }

  return;
}


// Reference entry 10117170; body size 89 bytes.
#line 1 "ENTRY_10117170"

void FUN_10117170(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 8))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0xc);

  return;
}


// Reference entry 1011f6d0; body size 103 bytes.
#line 1 "ENTRY_1011f6d0"

void __fastcall FUN_1011f6d0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 8);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0xc);
    }
  }

  return;
}


// Reference entry 10126540; body size 92 bytes.
#line 1 "ENTRY_10126540"

SCStr * Recovered_10126540::FUN_10126540(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 4);
  }

  return param_1;
}


// Reference entry 10126680; body size 92 bytes.
#line 1 "ENTRY_10126680"

SCStr * Recovered_10126680::FUN_10126680(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10126940; body size 92 bytes.
#line 1 "ENTRY_10126940"

SCStr * Recovered_10126940::FUN_10126940(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 4);
  }

  return param_1;
}


// Reference entry 1019eb70; body size 91 bytes.
#line 1 "ENTRY_1019eb70"

void FUN_1019eb70(SCStr *param_1)

{

  if (param_1 != (SCStr *)0x0) {

    (param_1)->~SCStr();
    thunk_FUN_1148a50e((void *)(param_1), 4);
  }

  return;
}


// Reference entry 1019ed10; body size 91 bytes.
#line 1 "ENTRY_1019ed10"

void FUN_1019ed10(SCStr *param_1)

{

  if (param_1 != (SCStr *)0x0) {

    (param_1)->~SCStr();
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return;
}


// Reference entry 10226130; body size 130 bytes.
#line 1 "ENTRY_10226130"

void FUN_10226130(undefined4 param_1,undefined4 *param_2) noexcept
{
  undefined4 *puVar1;
  undefined4 *puVar2;

  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)*param_2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;

    ((SCStr *)(puVar2 + 3))->~SCStr();

    thunk_FUN_1148a50e((void *)(puVar2), 0x10);
    puVar2 = puVar1;
  }

  return;
}


// Reference entry 102262d0; body size 89 bytes.
#line 1 "ENTRY_102262d0"

void FUN_102262d0(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0xc))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x10);

  return;
}


// Reference entry 1022da20; body size 103 bytes.
#line 1 "ENTRY_1022da20"

void __fastcall FUN_1022da20(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0xc);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x10);
    }
  }

  return;
}


// Reference entry 10230850; body size 98 bytes.
#line 1 "ENTRY_10230850"

int Recovered_10230850::FUN_10230850(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10231cd0; body size 103 bytes.
#line 1 "ENTRY_10231cd0"

void __fastcall FUN_10231cd0(int *param_1) noexcept
{
  int *piVar1;

  piVar1 = (int *)param_1[2];
  param_1[2] = *piVar1;

  ((SCStr *)(piVar1 + 3))->~SCStr();
  thunk_FUN_1148a50e((void *)(piVar1), 0x10);
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;

  return;
}


// Reference entry 102463d0; body size 89 bytes.
#line 1 "ENTRY_102463d0"

void FUN_102463d0(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 102479b0; body size 92 bytes.
#line 1 "ENTRY_102479b0"

SCStr * Recovered_102479b0::FUN_102479b0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 1025f8e0; body size 103 bytes.
#line 1 "ENTRY_1025f8e0"

void __fastcall FUN_1025f8e0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x14);
    }
  }

  return;
}


// Reference entry 10264810; body size 89 bytes.
#line 1 "ENTRY_10264810"

void FUN_10264810(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 10266e70; body size 103 bytes.
#line 1 "ENTRY_10266e70"

void __fastcall FUN_10266e70(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10268160; body size 92 bytes.
#line 1 "ENTRY_10268160"

SCStr * Recovered_10268160::FUN_10268160(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10275790; body size 135 bytes.
#line 1 "ENTRY_10275790"

void __fastcall FUN_10275790(int param_1) noexcept
{
  undefined4 *puVar1;
  undefined4 *puVar2;

  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0;
    **(undefined4 **)(param_1 + 8) = 0;
    puVar2 = *(undefined4 **)(param_1 + 0xc);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;

      ((SCStr *)(puVar2 + 2))->~SCStr();

      thunk_FUN_1148a50e((void *)(puVar2), 0xc);
      puVar2 = puVar1;
    }
  }

  return;
}


// Reference entry 10276ad0; body size 98 bytes.
#line 1 "ENTRY_10276ad0"

int Recovered_10276ad0::FUN_10276ad0(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10277590; body size 96 bytes.
#line 1 "ENTRY_10277590"

void Recovered_10277590::FUN_10277590(char param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if (param_2 != '\0') {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return;
}


// Reference entry 102781c0; body size 180 bytes.
#line 1 "ENTRY_102781c0"

int * Recovered_102781c0::FUN_102781c0(int *param_2,int *param_3) noexcept
{
  int param_1 = (int)this;
  undefined4 *puVar1;
  int *piVar2;

  int *piVar4;

  
  piVar4 = param_2;



  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = (undefined4 *)param_2[1];
  param_2 = (int *)0x0;

  *puVar1 = (undefined4)param_3;
  param_3[1] = (int)puVar1;
  do {
    piVar2 = (int *)*piVar4;

    ((SCStr *)(piVar4 + 2))->~SCStr();

    thunk_FUN_1148a50e((void *)(piVar4), 0xc);
    param_2 = (int *)((int)param_2 + 1);
    piVar4 = piVar2;
  } while (piVar2 != param_3);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - (int)param_2;

  return param_3;
}


// Reference entry 1028c450; body size 89 bytes.
#line 1 "ENTRY_1028c450"

void FUN_1028c450(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 1028da60; body size 103 bytes.
#line 1 "ENTRY_1028da60"

void __fastcall FUN_1028da60(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 1028e4e0; body size 92 bytes.
#line 1 "ENTRY_1028e4e0"

SCStr * Recovered_1028e4e0::FUN_1028e4e0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 102a4670; body size 89 bytes.
#line 1 "ENTRY_102a4670"

void FUN_102a4670(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x14);

  return;
}


// Reference entry 102e6fb0; body size 89 bytes.
#line 1 "ENTRY_102e6fb0"

void FUN_102e6fb0(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 102e7030; body size 89 bytes.
#line 1 "ENTRY_102e7030"

void FUN_102e7030(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 102ec510; body size 103 bytes.
#line 1 "ENTRY_102ec510"

void __fastcall FUN_102ec510(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 102ee750; body size 92 bytes.
#line 1 "ENTRY_102ee750"

SCStr * Recovered_102ee750::FUN_102ee750(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 102ee7d0; body size 92 bytes.
#line 1 "ENTRY_102ee7d0"

SCStr * Recovered_102ee7d0::FUN_102ee7d0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10338090; body size 98 bytes.
#line 1 "ENTRY_10338090"

int Recovered_10338090::FUN_10338090(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }

  return param_1;
}


// Reference entry 103394a0; body size 96 bytes.
#line 1 "ENTRY_103394a0"

void Recovered_103394a0::FUN_103394a0(char param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if (param_2 != '\0') {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }

  return;
}


// Reference entry 10344a10; body size 130 bytes.
#line 1 "ENTRY_10344a10"

void FUN_10344a10(undefined4 param_1,undefined4 *param_2) noexcept
{
  undefined4 *puVar1;
  undefined4 *puVar2;

  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)*param_2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;

    ((SCStr *)(puVar2 + 3))->~SCStr();

    thunk_FUN_1148a50e((void *)(puVar2), 0x10);
    puVar2 = puVar1;
  }

  return;
}


// Reference entry 10344ae0; body size 89 bytes.
#line 1 "ENTRY_10344ae0"

void FUN_10344ae0(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0xc))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x10);

  return;
}


// Reference entry 10346b40; body size 103 bytes.
#line 1 "ENTRY_10346b40"

void __fastcall FUN_10346b40(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0xc);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x10);
    }
  }

  return;
}


// Reference entry 10347520; body size 98 bytes.
#line 1 "ENTRY_10347520"

int Recovered_10347520::FUN_10347520(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10347780; body size 103 bytes.
#line 1 "ENTRY_10347780"

void __fastcall FUN_10347780(int *param_1) noexcept
{
  int *piVar1;

  piVar1 = (int *)param_1[2];
  param_1[2] = *piVar1;

  ((SCStr *)(piVar1 + 3))->~SCStr();
  thunk_FUN_1148a50e((void *)(piVar1), 0x10);
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;

  return;
}


// Reference entry 103d05e0; body size 103 bytes.
#line 1 "ENTRY_103d05e0"

void __fastcall FUN_103d05e0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 103f6eb0; body size 89 bytes.
#line 1 "ENTRY_103f6eb0"

void FUN_103f6eb0(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 103f6f30; body size 89 bytes.
#line 1 "ENTRY_103f6f30"

void FUN_103f6f30(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x14))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 103fac30; body size 103 bytes.
#line 1 "ENTRY_103fac30"

void __fastcall FUN_103fac30(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 103facc0; body size 103 bytes.
#line 1 "ENTRY_103facc0"

void __fastcall FUN_103facc0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x14);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 103fc250; body size 92 bytes.
#line 1 "ENTRY_103fc250"

SCStr * Recovered_103fc250::FUN_103fc250(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 103fc2d0; body size 98 bytes.
#line 1 "ENTRY_103fc2d0"

int Recovered_103fc2d0::FUN_103fc2d0(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 104868c0; body size 98 bytes.
#line 1 "ENTRY_104868c0"

int Recovered_104868c0::FUN_104868c0(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10487760; body size 96 bytes.
#line 1 "ENTRY_10487760"

void Recovered_10487760::FUN_10487760(char param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if (param_2 != '\0') {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return;
}


// Reference entry 104f8cb0; body size 130 bytes.
#line 1 "ENTRY_104f8cb0"

void FUN_104f8cb0(undefined4 param_1,undefined4 *param_2) noexcept
{
  undefined4 *puVar1;
  undefined4 *puVar2;

  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)*param_2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;

    ((SCStr *)(puVar2 + 2))->~SCStr();

    thunk_FUN_1148a50e((void *)(puVar2), 0x10);
    puVar2 = puVar1;
  }

  return;
}


// Reference entry 104f8da0; body size 89 bytes.
#line 1 "ENTRY_104f8da0"

void FUN_104f8da0(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 8))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x10);

  return;
}


// Reference entry 104fad50; body size 103 bytes.
#line 1 "ENTRY_104fad50"

void __fastcall FUN_104fad50(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 8);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x10);
    }
  }

  return;
}


// Reference entry 104fbcc0; body size 92 bytes.
#line 1 "ENTRY_104fbcc0"

SCStr * Recovered_104fbcc0::FUN_104fbcc0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10500280; body size 89 bytes.
#line 1 "ENTRY_10500280"

void FUN_10500280(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x14))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 10504990; body size 98 bytes.
#line 1 "ENTRY_10504990"

int Recovered_10504990::FUN_10504990(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 105a5910; body size 89 bytes.
#line 1 "ENTRY_105a5910"

void FUN_105a5910(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x38);

  return;
}


// Reference entry 105a5990; body size 89 bytes.
#line 1 "ENTRY_105a5990"

void FUN_105a5990(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x14))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);

  return;
}


// Reference entry 105a8030; body size 103 bytes.
#line 1 "ENTRY_105a8030"

void __fastcall FUN_105a8030(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x38);
    }
  }

  return;
}


// Reference entry 105a80c0; body size 103 bytes.
#line 1 "ENTRY_105a80c0"

void __fastcall FUN_105a80c0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x14);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x1c);
    }
  }

  return;
}


// Reference entry 105a9af0; body size 92 bytes.
#line 1 "ENTRY_105a9af0"

SCStr * Recovered_105a9af0::FUN_105a9af0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x28);
  }

  return param_1;
}


// Reference entry 105a9b70; body size 98 bytes.
#line 1 "ENTRY_105a9b70"

int Recovered_105a9b70::FUN_105a9b70(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }

  return param_1;
}


// Reference entry 105b6fd0; body size 89 bytes.
#line 1 "ENTRY_105b6fd0"

void FUN_105b6fd0(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 105ba930; body size 92 bytes.
#line 1 "ENTRY_105ba930"

SCStr * Recovered_105ba930::FUN_105ba930(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 105f0370; body size 98 bytes.
#line 1 "ENTRY_105f0370"

int Recovered_105f0370::FUN_105f0370(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 105f0550; body size 98 bytes.
#line 1 "ENTRY_105f0550"

int Recovered_105f0550::FUN_105f0550(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 105f05d0; body size 98 bytes.
#line 1 "ENTRY_105f05d0"

int Recovered_105f05d0::FUN_105f05d0(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 105f0ee0; body size 96 bytes.
#line 1 "ENTRY_105f0ee0"

void Recovered_105f0ee0::FUN_105f0ee0(char param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if (param_2 != '\0') {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return;
}


// Reference entry 105f10e0; body size 96 bytes.
#line 1 "ENTRY_105f10e0"

void Recovered_105f10e0::FUN_105f10e0(char param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if (param_2 != '\0') {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return;
}


// Reference entry 105f11c0; body size 96 bytes.
#line 1 "ENTRY_105f11c0"

void Recovered_105f11c0::FUN_105f11c0(char param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if (param_2 != '\0') {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return;
}


// Reference entry 10648910; body size 89 bytes.
#line 1 "ENTRY_10648910"

void FUN_10648910(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 10648990; body size 89 bytes.
#line 1 "ENTRY_10648990"

void FUN_10648990(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 106585c0; body size 92 bytes.
#line 1 "ENTRY_106585c0"

SCStr * Recovered_106585c0::FUN_106585c0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10658640; body size 92 bytes.
#line 1 "ENTRY_10658640"

SCStr * Recovered_10658640::FUN_10658640(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10682540; body size 89 bytes.
#line 1 "ENTRY_10682540"

void FUN_10682540(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 106840b0; body size 103 bytes.
#line 1 "ENTRY_106840b0"

void __fastcall FUN_106840b0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10684e10; body size 92 bytes.
#line 1 "ENTRY_10684e10"

SCStr * Recovered_10684e10::FUN_10684e10(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 106aba40; body size 89 bytes.
#line 1 "ENTRY_106aba40"

void FUN_106aba40(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x20);

  return;
}


// Reference entry 106abac0; body size 89 bytes.
#line 1 "ENTRY_106abac0"

void FUN_106abac0(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x1c))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x28);

  return;
}


// Reference entry 106b3800; body size 103 bytes.
#line 1 "ENTRY_106b3800"

void __fastcall FUN_106b3800(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x20);
    }
  }

  return;
}


// Reference entry 106b3890; body size 103 bytes.
#line 1 "ENTRY_106b3890"

void __fastcall FUN_106b3890(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x1c);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x28);
    }
  }

  return;
}


// Reference entry 106b6c30; body size 92 bytes.
#line 1 "ENTRY_106b6c30"

SCStr * Recovered_106b6c30::FUN_106b6c30(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x10);
  }

  return param_1;
}


// Reference entry 106b6cb0; body size 98 bytes.
#line 1 "ENTRY_106b6cb0"

int Recovered_106b6cb0::FUN_106b6cb0(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 0xc))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x18);
  }

  return param_1;
}


// Reference entry 106b6f30; body size 92 bytes.
#line 1 "ENTRY_106b6f30"

SCStr * Recovered_106b6f30::FUN_106b6f30(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 106dd5a0; body size 89 bytes.
#line 1 "ENTRY_106dd5a0"

void FUN_106dd5a0(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 106dd620; body size 89 bytes.
#line 1 "ENTRY_106dd620"

void FUN_106dd620(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 106de5b0; body size 103 bytes.
#line 1 "ENTRY_106de5b0"

void __fastcall FUN_106de5b0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 106de640; body size 103 bytes.
#line 1 "ENTRY_106de640"

void __fastcall FUN_106de640(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 106dec70; body size 92 bytes.
#line 1 "ENTRY_106dec70"

SCStr * Recovered_106dec70::FUN_106dec70(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 106decf0; body size 92 bytes.
#line 1 "ENTRY_106decf0"

SCStr * Recovered_106decf0::FUN_106decf0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10723f40; body size 89 bytes.
#line 1 "ENTRY_10723f40"

void FUN_10723f40(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 1072cc40; body size 98 bytes.
#line 1 "ENTRY_1072cc40"

int Recovered_1072cc40::FUN_1072cc40(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 8))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }

  return param_1;
}


// Reference entry 1072cd70; body size 92 bytes.
#line 1 "ENTRY_1072cd70"

SCStr * Recovered_1072cd70::FUN_1072cd70(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 1072e010; body size 96 bytes.
#line 1 "ENTRY_1072e010"

void Recovered_1072e010::FUN_1072e010(char param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 8))->~SCStr();
  if (param_2 != '\0') {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }

  return;
}


// Reference entry 10828a20; body size 89 bytes.
#line 1 "ENTRY_10828a20"

void FUN_10828a20(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);

  return;
}


// Reference entry 1082b4f0; body size 103 bytes.
#line 1 "ENTRY_1082b4f0"

void __fastcall FUN_1082b4f0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x1c);
    }
  }

  return;
}


// Reference entry 1082c2f0; body size 92 bytes.
#line 1 "ENTRY_1082c2f0"

SCStr * Recovered_1082c2f0::FUN_1082c2f0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }

  return param_1;
}


// Reference entry 1085f2e0; body size 89 bytes.
#line 1 "ENTRY_1085f2e0"

void FUN_1085f2e0(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 10862770; body size 92 bytes.
#line 1 "ENTRY_10862770"

SCStr * Recovered_10862770::FUN_10862770(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10af4870; body size 89 bytes.
#line 1 "ENTRY_10af4870"

void FUN_10af4870(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x14))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 10af48f0; body size 89 bytes.
#line 1 "ENTRY_10af48f0"

void FUN_10af48f0(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x14))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 10af69e0; body size 103 bytes.
#line 1 "ENTRY_10af69e0"

void __fastcall FUN_10af69e0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x14);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10af6a70; body size 103 bytes.
#line 1 "ENTRY_10af6a70"

void __fastcall FUN_10af6a70(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x14);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10af7570; body size 98 bytes.
#line 1 "ENTRY_10af7570"

int Recovered_10af7570::FUN_10af7570(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10af75f0; body size 98 bytes.
#line 1 "ENTRY_10af75f0"

int Recovered_10af75f0::FUN_10af75f0(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10b59f70; body size 89 bytes.
#line 1 "ENTRY_10b59f70"

void FUN_10b59f70(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);

  return;
}


// Reference entry 10b5da80; body size 103 bytes.
#line 1 "ENTRY_10b5da80"

void __fastcall FUN_10b5da80(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x1c);
    }
  }

  return;
}


// Reference entry 10b5ea20; body size 92 bytes.
#line 1 "ENTRY_10b5ea20"

SCStr * Recovered_10b5ea20::FUN_10b5ea20(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }

  return param_1;
}


// Reference entry 10ba3460; body size 89 bytes.
#line 1 "ENTRY_10ba3460"

void FUN_10ba3460(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x14))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);

  return;
}


// Reference entry 10ba6d80; body size 103 bytes.
#line 1 "ENTRY_10ba6d80"

void __fastcall FUN_10ba6d80(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x14);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x1c);
    }
  }

  return;
}


// Reference entry 10ba8240; body size 98 bytes.
#line 1 "ENTRY_10ba8240"

int Recovered_10ba8240::FUN_10ba8240(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }

  return param_1;
}


// Reference entry 10bc0420; body size 103 bytes.
#line 1 "ENTRY_10bc0420"

void __fastcall FUN_10bc0420(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10bc4290; body size 98 bytes.
#line 1 "ENTRY_10bc4290"

int Recovered_10bc4290::FUN_10bc4290(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10bcfd90; body size 89 bytes.
#line 1 "ENTRY_10bcfd90"

void FUN_10bcfd90(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 10bcfe10; body size 89 bytes.
#line 1 "ENTRY_10bcfe10"

void FUN_10bcfe10(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 10bcfe90; body size 89 bytes.
#line 1 "ENTRY_10bcfe90"

void FUN_10bcfe90(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x14))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 10bd65a0; body size 103 bytes.
#line 1 "ENTRY_10bd65a0"

void __fastcall FUN_10bd65a0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10bd6630; body size 103 bytes.
#line 1 "ENTRY_10bd6630"

void __fastcall FUN_10bd6630(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10bd66c0; body size 103 bytes.
#line 1 "ENTRY_10bd66c0"

void __fastcall FUN_10bd66c0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x14);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10bd8ef0; body size 92 bytes.
#line 1 "ENTRY_10bd8ef0"

SCStr * Recovered_10bd8ef0::FUN_10bd8ef0(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10bd8f70; body size 98 bytes.
#line 1 "ENTRY_10bd8f70"

int Recovered_10bd8f70::FUN_10bd8f70(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10c02660; body size 92 bytes.
#line 1 "ENTRY_10c02660"

SCStr * Recovered_10c02660::FUN_10c02660(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10c5e620; body size 89 bytes.
#line 1 "ENTRY_10c5e620"

void FUN_10c5e620(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x14))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 10c5f980; body size 103 bytes.
#line 1 "ENTRY_10c5f980"

void __fastcall FUN_10c5f980(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x14);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10c93d70; body size 98 bytes.
#line 1 "ENTRY_10c93d70"

int Recovered_10c93d70::FUN_10c93d70(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 0x10))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0x24);
  }

  return param_1;
}


// Reference entry 10c9ced0; body size 93 bytes.
#line 1 "ENTRY_10c9ced0"

void __fastcall FUN_10c9ced0(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 != 0) {

    ((SCStr *)(iVar1 + 0x10))->~SCStr();
    thunk_FUN_1148a50e((void *)(iVar1), 0x24);
  }

  return;
}


// Reference entry 10d68670; body size 89 bytes.
#line 1 "ENTRY_10d68670"

void FUN_10d68670(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x14))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 10d697b0; body size 103 bytes.
#line 1 "ENTRY_10d697b0"

void __fastcall FUN_10d697b0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x14);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10d6a170; body size 98 bytes.
#line 1 "ENTRY_10d6a170"

int Recovered_10d6a170::FUN_10d6a170(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10d9f050; body size 89 bytes.
#line 1 "ENTRY_10d9f050"

void FUN_10d9f050(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x14))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 10d9f9a0; body size 103 bytes.
#line 1 "ENTRY_10d9f9a0"

void __fastcall FUN_10d9f9a0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x14);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10d9ff50; body size 98 bytes.
#line 1 "ENTRY_10d9ff50"

int Recovered_10d9ff50::FUN_10d9ff50(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 4))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10db32b0; body size 103 bytes.
#line 1 "ENTRY_10db32b0"

void __fastcall FUN_10db32b0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x14);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10dec970; body size 89 bytes.
#line 1 "ENTRY_10dec970"

void FUN_10dec970(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);

  return;
}


// Reference entry 10defb60; body size 92 bytes.
#line 1 "ENTRY_10defb60"

SCStr * Recovered_10defb60::FUN_10defb60(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }

  return param_1;
}


// Reference entry 10dfe680; body size 103 bytes.
#line 1 "ENTRY_10dfe680"

void __fastcall FUN_10dfe680(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x1c);
    }
  }

  return;
}


// Reference entry 10e0c560; body size 103 bytes.
#line 1 "ENTRY_10e0c560"

void __fastcall FUN_10e0c560(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10eb5200; body size 89 bytes.
#line 1 "ENTRY_10eb5200"

void FUN_10eb5200(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x10))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x18);

  return;
}


// Reference entry 10eb67c0; body size 103 bytes.
#line 1 "ENTRY_10eb67c0"

void __fastcall FUN_10eb67c0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10eb7440; body size 92 bytes.
#line 1 "ENTRY_10eb7440"

SCStr * Recovered_10eb7440::FUN_10eb7440(byte param_2) noexcept
{
  SCStr * param_1 = (SCStr *)this;

  (param_1)->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 8);
  }

  return param_1;
}


// Reference entry 10eedbd0; body size 103 bytes.
#line 1 "ENTRY_10eedbd0"

void __fastcall FUN_10eedbd0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10eef260; body size 103 bytes.
#line 1 "ENTRY_10eef260"

void __fastcall FUN_10eef260(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10f1c6a0; body size 103 bytes.
#line 1 "ENTRY_10f1c6a0"

void __fastcall FUN_10f1c6a0(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


// Reference entry 10f23cf0; body size 89 bytes.
#line 1 "ENTRY_10f23cf0"

void FUN_10f23cf0(undefined4 param_1,int param_2) noexcept
{

  ((SCStr *)(param_2 + 0x18))->~SCStr();
  thunk_FUN_1148a50e((void *)(param_2), 0x1c);

  return;
}


// Reference entry 10f25c20; body size 103 bytes.
#line 1 "ENTRY_10f25c20"

void __fastcall FUN_10f25c20(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x18);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x1c);
    }
  }

  return;
}


// Reference entry 10f26840; body size 98 bytes.
#line 1 "ENTRY_10f26840"

int Recovered_10f26840::FUN_10f26840(byte param_2) noexcept
{
  int param_1 = (int)this;

  ((SCStr *)(param_1 + 8))->~SCStr();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e((void *)(param_1), 0xc);
  }

  return param_1;
}


// Reference entry 10f38290; body size 103 bytes.
#line 1 "ENTRY_10f38290"

void __fastcall FUN_10f38290(int param_1) noexcept
{
  SCStr *ghidra_this;

  if (*(int *)(param_1 + 4) != 0) {
    ghidra_this = (SCStr *)(*(int *)(param_1 + 4) + 0x10);

    (ghidra_this)->~SCStr();
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e((void *)(*(int *)(param_1 + 4)), 0x18);
    }
  }

  return;
}


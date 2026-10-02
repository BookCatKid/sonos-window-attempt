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
extern undefined4 DAT_11882ff0;
extern undefined4 DAT_12126b84;
extern undefined4 DAT_121a56e4;
extern uint __cdecl abi_call_thunk_FUN_101f08d0(void);
extern void __cdecl abi_call_thunk_FUN_112af4e0(undefined4, undefined4, undefined4);
extern void __cdecl abi_call_thunk_FUN_1106b0f0(int *, int *, int, uint, uint);
extern int __cdecl abi_call_thunk_FUN_11069bc0(byte *);
extern void __cdecl abi_call_thunk_FUN_101bd590(int, int, uint, SCStr *, void *);
extern void __cdecl abi_call_thunk_FUN_110a48f0(uint, undefined4, undefined4, char *, undefined4);
extern undefined4 __cdecl abi_call_thunk_FUN_110a12f0(undefined4, char *);
extern uint __cdecl abi_call_thunk_FUN_1125a820(undefined4);
extern void __cdecl abi_call_thunk_FUN_1029e960(int *, char *);
extern undefined4 __cdecl abi_call_thunk_FUN_11265090(int, undefined4);
extern void __cdecl abi_call_thunk_FUN_1109ed90(undefined4, undefined4);
extern void __cdecl abi_call_thunk_FUN_112654e0(byte *);
extern void __cdecl abi_call_thunk_FUN_1109efd0(undefined4, undefined4);
extern SCStr * __cdecl abi_call_thunk_FUN_10c61e30(SCStr *, int);
extern SCStr * __cdecl abi_call_thunk_FUN_10c62100(SCStr *, int);
extern int __cdecl abi_call_thunk_FUN_11247ed0(byte *, undefined1 *, uint, char *);
extern int __cdecl abi_call_thunk_FUN_11261330(int, uint, undefined1 *, undefined4);
extern void __cdecl abi_call_thunk_FUN_1040bfe0(undefined4 *, undefined4, undefined4, undefined1);
extern void __cdecl abi_call_thunk_FUN_1113d180(undefined4 *, undefined4 *);
extern void __cdecl abi_call_thunk_FUN_1046c9a0(void);
extern void __cdecl abi_call_thunk_FUN_1046d3a0(void);
extern undefined1 __cdecl abi_call_thunk_FUN_1046f140(void);
extern undefined4 __cdecl abi_call_thunk_FUN_1046f220(void);
extern void __cdecl abi_call_thunk_FUN_1047d200(void);
extern void __cdecl abi_call_thunk_FUN_10499dd0(void);
extern void __cdecl abi_call_thunk_FUN_1049ae90(void);
extern void __cdecl abi_call_thunk_FUN_101f2770(void);
extern void __cdecl abi_call_thunk_FUN_104b1190(void);
extern SCStr * __cdecl abi_call_FUN_105071a0(SCStr *, undefined4 *);
extern int __cdecl abi_call_thunk_FUN_110a5ba0(int *, char *);
extern undefined1 __cdecl abi_call_thunk_FUN_110b9480(undefined4);
extern undefined4 __cdecl abi_call_thunk_FUN_10219a00(int);
extern undefined4 __fastcall abi_call_thunk_FUN_1106eda0(int);
extern int * __fastcall abi_call_thunk_FUN_1023a9f0(undefined4);
extern void __cdecl abi_call_thunk_FUN_105cc420(int, int, uint, SCStr *, void *);
extern undefined4 __cdecl abi_call_thunk_FUN_101a2c70(byte *, undefined4 *);
struct CallABI_thunk_FUN_103a3e50 { char * thunk_FUN_103a3e50(char *); };
extern SCStr * __cdecl abi_call_thunk_FUN_10534670(SCStr *, int);
extern void __cdecl abi_call_thunk_FUN_10c31e60(int *);
extern void __cdecl abi_call_FUN_10c64480(void);
extern char * __cdecl abi_call_thunk_FUN_11456530(int);
extern undefined4 __cdecl abi_call_thunk_FUN_10beccd0(SCStr *);
extern undefined1 __cdecl abi_call_thunk_FUN_10bb46d0(void);
struct CallABI_thunk_FUN_104d8ba0 { SCStr * thunk_FUN_104d8ba0(SCStr *, int); };
extern void __cdecl abi_call_thunk_FUN_101bdde0(SCStr *, SCStr *);
extern void __cdecl abi_call_thunk_FUN_10da3dc0(void);
extern void __cdecl abi_call_thunk_FUN_10bed100(int *, undefined4);
extern undefined * __cdecl abi_call_thunk_FUN_10cefc20(void);
extern void __cdecl abi_call_thunk_FUN_1025e860(int *, undefined1 *);
extern void __cdecl abi_call_thunk_FUN_1086f2f0(undefined4, int *);
extern SCStr * __cdecl abi_call_thunk_FUN_101d9790(SCStr *, undefined4, undefined1 *);
extern undefined1 __cdecl abi_call_thunk_FUN_10ff8d30(void);
extern int FUN_1006aac8(...);
extern int thunk_FUN_101ed0d0(...);
extern int thunk_FUN_101ed5f0(...);
extern int thunk_FUN_101f1cd0(...);
extern int thunk_FUN_10208940(...);
extern int thunk_FUN_1023a9f0(...);
extern int thunk_FUN_1025ed70(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_103a3e50(...);
extern int thunk_FUN_103eb560(...);
extern int thunk_FUN_103eb590(...);
extern int thunk_FUN_103eb5d0(...);
extern int thunk_FUN_103eb600(...);
extern int thunk_FUN_103eb610(...);
extern int thunk_FUN_103eb620(...);
extern int thunk_FUN_103eb650(...);
extern int thunk_FUN_10498d70(...);
extern int thunk_FUN_104d8ba0(...);
extern int thunk_FUN_105b5360(...);
extern int thunk_FUN_1068bac0(...);
extern int thunk_FUN_10c322c0(...);
extern int thunk_FUN_10c5e5a0(...);
extern int thunk_FUN_10cefa80(...);
extern int thunk_FUN_10e2f240(...);
extern int thunk_FUN_10e443d0(...);
extern int thunk_FUN_10e44d70(...);
extern int thunk_FUN_10f7b5d0(...);
extern int thunk_FUN_1106b0f0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f280(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110da760(...);
extern int thunk_FUN_1115bf90(...);
extern int thunk_FUN_111cfd00(...);
extern int thunk_FUN_11264030(...);
extern int thunk_FUN_112652a0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
struct Recovered_10003666 { void FUN_10003666(int param_2,ushort param_3); };
struct Recovered_101a4790 { SCStr * FUN_101a4790(SCStr *param_2,uint param_3); };
struct Recovered_101a6bf0 { SCStr * FUN_101a6bf0(SCStr *param_2,char *param_3,int param_4); };
struct Recovered_1020f890 { void FUN_1020f890(SCStr *param_2); };
struct Recovered_10261d80 { undefined4 FUN_10261d80(SCStr *param_2); };
struct Recovered_10261df0 { uint FUN_10261df0(SCStr *param_2); };
struct Recovered_1029e5a0 { void FUN_1029e5a0(SCStr *param_2); };
struct Recovered_102dee50 { void FUN_102dee50(SCStr *param_2); };
struct Recovered_1034d190 { SCStr * FUN_1034d190(SCStr *param_2); };
struct Recovered_1034d910 { SCStr * FUN_1034d910(SCStr *param_2); };
struct Recovered_103e9bc0 { void FUN_103e9bc0(undefined4 *param_2,undefined4 *param_3); };
struct Recovered_1045ff20 { SCStr * FUN_1045ff20(SCStr *param_2); };
struct Recovered_10494950 { SCStr * FUN_10494950(SCStr *param_2); };
struct Recovered_10508a20 { SCStr * FUN_10508a20(SCStr *param_2,int param_3); };
struct Recovered_10508da0 { SCStr * FUN_10508da0(SCStr *param_2,undefined4 param_3); };
struct Recovered_10509680 { void FUN_10509680(SCStr *param_2); };
struct Recovered_105150a0 { void FUN_105150a0(SCStr *param_2); };
struct Recovered_1068ae60 { void FUN_1068ae60(undefined4 *param_2,SCStr *param_3); };
struct Recovered_10b81cb0 { SCStr * FUN_10b81cb0(SCStr *param_2); };
struct Recovered_10bbac00 { void FUN_10bbac00(SCStr *param_2,SCStr *param_3); };
struct Recovered_10cf08b0 { undefined4 FUN_10cf08b0(SCStr *param_2); };
struct Recovered_10d3c3c0 { void FUN_10d3c3c0(SCStr *param_2); };
struct Recovered_10da2790 { void FUN_10da2790(undefined4 param_2,SCStr *param_3); };
struct Recovered_10da6df0 { void FUN_10da6df0(SCStr *param_2,undefined4 param_3); };
struct Recovered_10e2b550 { void FUN_10e2b550(int param_2); };
struct Recovered_10e2b640 { void FUN_10e2b640(int param_2,ushort param_3); };
struct Recovered_10e2b7d0 { void FUN_10e2b7d0(int param_2,ushort param_3); };
struct Recovered_10e2bfe0 { void FUN_10e2bfe0(int param_2,ushort param_3); };
struct Recovered_10e2c4f0 { void FUN_10e2c4f0(int param_2,ushort param_3); };
struct Recovered_10e2cb50 { void FUN_10e2cb50(int param_2,ushort param_3); };
struct Recovered_10eab7c0 { SCStr * FUN_10eab7c0(SCStr *param_2); };
struct Recovered_10f53120 { SCStr * FUN_10f53120(SCStr *param_2); };
struct Recovered_10f531e0 { SCStr * FUN_10f531e0(SCStr *param_2); };
struct Recovered_10fcb7d0 { SCStr * FUN_10fcb7d0(SCStr *param_2); };
// Reference entry 100034e0; body size 5 bytes.
#line 1 "ENTRY_100034e0"

SCStr * FUN_100034e0(SCStr *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  iVar2 = abi_call_thunk_FUN_101f08d0();
  if (iVar2 != 0x40) {
    iVar2 = abi_call_thunk_FUN_101f08d0();
    if (iVar2 != 0x200) {
      piVar3 = (int *)thunk_FUN_110828b0();
      if (piVar3 != (int *)0x0) {
        cVar1 = (**(code **)(*piVar3 + 0x3c))();
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


// Reference entry 10003666; body size 5 bytes.
#line 1 "ENTRY_10003666"

void Recovered_10003666::FUN_10003666(int param_2,ushort param_3)

{
  int param_1 = (int)this;
  int iVar1;
  uint uStack_8;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    uStack_8 = 0x10e2c4ff;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x20))();
  }
  if (param_2 == iVar1) {
    uStack_8 = 0x10e2c511;
    iVar1 = thunk_FUN_103eb600();
    if (iVar1 == -2) {
      uStack_8 = (uint)param_3;
      abi_call_thunk_FUN_112af4e0((undefined4)("sec_reg"), (undefined4)(1), (undefined4)("Error in resetting password %d"));
      ((SCStr *)&uStack_8)->int_allocRep("network_error");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
    }
  }
  return;
}


// Reference entry 101a4790; body size 99 bytes.
#line 1 "ENTRY_101a4790"

SCStr * Recovered_101a4790::FUN_101a4790(SCStr *param_2,uint param_3)

{
  int * param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int *local_4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    local_4 = param_1;
    uVar2 = abi_call_thunk_FUN_11069bc0((byte *)(iVar1));
    if ((param_3 + 1 <= uVar2) && (param_3 <= uVar2)) {
      abi_call_thunk_FUN_1106b0f0((int *)(&local_4), (int *)(&param_3), (int)(iVar1), (uint)(param_3), (uint)(1));
      new (param_2) SCStr((char *)local_4,param_3 - (int)local_4);
      return param_2;
    }
  }
  *(undefined4 *)param_2 = 0;
  return param_2;
}


// Reference entry 101a5370; body size 177 bytes.
#line 1 "ENTRY_101a5370"



SCStr * FUN_101a5370(SCStr *param_1,char *param_2,uint param_3,uint param_4,char param_5)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char *pcStack_4;
  
  cVar3 = param_5;
  pcVar2 = param_2;
  if (param_2 != (char *)0x0) {
    if (param_5 == '\0') {
      pcVar5 = param_2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar4 = (int)pcVar5 - (int)(param_2 + 1);
    }
    else {
      uVar4 = abi_call_thunk_FUN_11069bc0((byte *)(param_2));
    }
    uVar6 = param_4;
    if (param_4 == 0xffffffff) {
      uVar6 = uVar4 - param_3;
    }
    if ((param_3 + uVar6 <= uVar4) && (param_3 <= uVar4)) {
      if (cVar3 != '\0') {
        thunk_FUN_1106b0f0(&pcStack_4,&param_2,pcVar2,param_3);
        new (param_1) SCStr(pcStack_4,(int)param_2 - (int)pcStack_4);
        return param_1;
      }
      new (param_1) SCStr(pcVar2 + param_3,uVar6);
      return param_1;
    }
  }
  *(undefined4 *)param_1 = 0;
  return param_1;
}


// Reference entry 101a6bf0; body size 113 bytes.
#line 1 "ENTRY_101a6bf0"

SCStr * Recovered_101a6bf0::FUN_101a6bf0(SCStr *param_2,char *param_3,int param_4)

{
  int * param_1 = (int *)this;
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = param_4;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    pcVar2 = (char *)abi_call_thunk_FUN_11069bc0((byte *)(iVar1));
    if (iVar3 == -1) {
      iVar3 = (int)pcVar2 - (int)param_3;
    }
    if ((param_3 + iVar3 <= pcVar2) && (param_3 <= pcVar2)) {
      abi_call_thunk_FUN_1106b0f0((int *)(&param_3), (int *)(&param_4), (int)(iVar1), (uint)(param_3), (uint)(iVar3));
      new (param_2) SCStr(param_3,param_4 - (int)param_3);
      return param_2;
    }
  }
  *(undefined4 *)param_2 = 0;
  return param_2;
}


// Reference entry 101bd770; body size 64 bytes.
#line 1 "ENTRY_101bd770"



void FUN_101bd770(SCStr *param_1,int param_2,SCStr *param_3,undefined4 param_4,undefined4 param_5)

{
  if (param_1 != param_3) {
    (param_3)->int_release();
    *(undefined4 *)param_3 = *(undefined4 *)param_1;
    (param_3)->int_addref();
  }
  abi_call_thunk_FUN_101bd590((int)(param_1), (int)(0), (uint)(param_2 - (int)param_1 >> 2), (SCStr *)(param_4), (void *)(param_5));
  return;
}


// Reference entry 1020f890; body size 135 bytes.
#line 1 "ENTRY_1020f890"

void Recovered_1020f890::FUN_1020f890(SCStr *param_2)

{
  int param_1 = (int)this;
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  SCStr *local_3f0;
  char local_3ec [1000];
  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_3f0;
  local_3f0 = param_2;
  puVar1 = &DAT_1186d2ee;
  if (*(undefined1 **)(param_1 + 0xb4) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 0xb4);
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0xcc);
  uVar5 = 1000;
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)(param_1 + 0xb8) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0xb8);
  }
  pcVar4 = local_3ec;
  thunk_FUN_1109f7f0(uVar3,puVar2,puVar1,pcVar4,1000);
  abi_call_thunk_FUN_110a48f0((uint)(uVar3), (undefined4)(puVar2), (undefined4)(puVar1), (char *)(pcVar4), (undefined4)(uVar5));
  (param_2)->int_allocRep(local_3ec);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10261d80; body size 79 bytes.
#line 1 "ENTRY_10261d80"

undefined4 Recovered_10261d80::FUN_10261d80(SCStr *param_2)

{
  int param_1 = (int)this;
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  thunk_FUN_1109f7f0();
  pcVar1 = *(char **)param_2;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    puVar4 = &DAT_1186d2ee;
    if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(param_1 + 0x18);
    }
    cVar2 = abi_call_thunk_FUN_110a12f0((undefined4)(puVar4), (char *)(pcVar1));
    if (cVar2 != '\0') {
      uVar3 = (param_2)->utf8_length();
      if (uVar3 < 0x11) {
        return 1;
      }
    }
  }
  return 0;
}


// Reference entry 10261df0; body size 91 bytes.
#line 1 "ENTRY_10261df0"

uint Recovered_10261df0::FUN_10261df0(SCStr *param_2)

{
  int param_1 = (int)this;
  uint uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  
  if ((*(char *)(param_1 + 0x1c) != '\0') ||
     ((pcVar2 = *(char **)param_2, pcVar2 != (char *)0x0 && (*pcVar2 != '\0')))) {
    if (*(char *)(param_1 + 0x25) == '\0') {
      uVar1 = (param_2)->length();
    }
    else {
      uVar1 = (param_2)->utf8_length();
    }
    pcVar2 = *(char **)(param_1 + 0x18);
    if (((int)pcVar2 < 1) || ((int)uVar1 <= (int)pcVar2)) {
      puVar3 = &DAT_1186d2ee;
      if (*(undefined1 **)param_2 != (undefined1 *)0x0) {
        puVar3 = *(undefined1 **)param_2;
      }
      uVar1 = abi_call_thunk_FUN_1125a820((undefined4)(puVar3));
      return uVar1;
    }
  }
  return (uint)pcVar2 & 0xffffff00;
}


// Reference entry 1029e5a0; body size 92 bytes.
#line 1 "ENTRY_1029e5a0"

void Recovered_1029e5a0::FUN_1029e5a0(SCStr *param_2)

{
  undefined4 param_1 = (undefined4)this;
  uint local_14;
  char local_10 [12];
  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_14;
  local_14 = (uint)param_2 & 0xffff0000;
  abi_call_thunk_FUN_1029e960((int *)(param_1), (char *)(&local_14));
  thunk_FUN_11264030(local_10,0xb);
  (param_2)->int_allocRep(local_10);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 102ddf00; body size 32 bytes.
#line 1 "ENTRY_102ddf00"

SCStr * __stdcall FUN_102ddf00(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)abi_call_thunk_FUN_11265090((int)(0x25), (undefined4)(&DAT_1186d2ee));
  (param_1)->int_allocRep(pcVar1);
  return param_1;
}


// Reference entry 102ddf90; body size 88 bytes.
#line 1 "ENTRY_102ddf90"

void __stdcall FUN_102ddf90(SCStr *param_1)

{
  SCStr *local_80c;
  char local_808 [2052];
  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_80c;
  local_80c = param_1;
  abi_call_thunk_FUN_1109ed90((undefined4)(local_808), (undefined4)(0x800));
  (param_1)->int_allocRep(local_808);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 102dee50; body size 108 bytes.
#line 1 "ENTRY_102dee50"

void Recovered_102dee50::FUN_102dee50(SCStr *param_2)

{
  int param_1 = (int)this;
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 local_8;
  undefined1 *local_4;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x38) + 0x20);
  if (piVar1 != (int *)0x0) {
    local_8 = thunk_FUN_112652a0(0x25);
    bVar2 = (param_2)->operator==("prod");
    if (bVar2) {
      local_4 = (undefined1 *)0x0;
    }
    else {
      local_4 = &DAT_1186d2ee;
      if (*(undefined1 **)param_2 != (undefined1 *)0x0) {
        local_4 = *(undefined1 **)param_2;
      }
    }
    uVar3 = 1;
    (**(code **)(*piVar1 + 8))(&local_8,&local_4,1);
    abi_call_thunk_FUN_112654e0((byte *)(uVar3));
  }
  return;
}


// Reference entry 102f7880; body size 85 bytes.
#line 1 "ENTRY_102f7880"

void __stdcall FUN_102f7880(SCStr *param_1)

{
  int iVar1;
  char *pcVar2;
  SCStr *local_48;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_48;
  local_48 = param_1;
  iVar1 = thunk_FUN_1109f7f0();
  if (iVar1 == 0) {
    pcVar2 = "";
  }
  else {
    abi_call_thunk_FUN_1109efd0((undefined4)(local_44), (undefined4)(0x40));
    pcVar2 = local_44;
  }
  (param_1)->int_allocRep(pcVar2);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1034d190; body size 57 bytes.
#line 1 "ENTRY_1034d190"



SCStr * Recovered_1034d190::FUN_1034d190(SCStr *param_2)

{
  int param_1 = (int)this;
  if (*(char *)(param_1 + 0x90) == '\0') {
    (param_2)->int_allocRep("No color provided");
    return param_2;
  }
  abi_call_thunk_FUN_10c61e30((SCStr *)(param_2), (int)(*(undefined4 *)(param_1 + 0x94)));
  return param_2;
}


// Reference entry 1034d910; body size 57 bytes.
#line 1 "ENTRY_1034d910"



SCStr * Recovered_1034d910::FUN_1034d910(SCStr *param_2)

{
  int param_1 = (int)this;
  if (*(char *)(param_1 + 0x80) == '\0') {
    (param_2)->int_allocRep("No MDP model provided");
    return param_2;
  }
  abi_call_thunk_FUN_10c62100((SCStr *)(param_2), (int)(*(undefined4 *)(param_1 + 0x84)));
  return param_2;
}


// Reference entry 103e9bc0; body size 183 bytes.
#line 1 "ENTRY_103e9bc0"



void Recovered_103e9bc0::FUN_103e9bc0(undefined4 *param_2,undefined4 *param_3)

{
  int param_1 = (int)this;
  uint uVar1;
  undefined1 *puVar2;
  SCStr *ghidra_this;
  undefined4 auStack_80c [257];
  undefined1 auStack_408 [1028];
  uint uStack_4;
  
  uStack_4 = DAT_12126b84 ^ (uint)auStack_80c;
  puVar2 = &DAT_1186d2ee;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*param_2;
  }
  abi_call_thunk_FUN_11247ed0((byte *)(puVar2), (undefined1 *)(auStack_408), (uint)(0x401), (char *)(&DAT_1186d2ee));
  puVar2 = &DAT_1186d2ee;
  if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*param_3;
  }
  abi_call_thunk_FUN_11247ed0((byte *)(puVar2), (undefined1 *)(auStack_80c), (uint)(0x401), (char *)(&DAT_1186d2ee));
  (ghidra_this)->format((char *)(param_1 + 0x6218));
  uVar1 = ((SCStr *)(param_1 + 0x6218))->length();
  *(uint *)(param_1 + 0x6210) = uVar1;
  auStack_80c[0] = 0x103e9c6e;
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 103f3aa0; body size 99 bytes.
#line 1 "ENTRY_103f3aa0"



void __fastcall FUN_103f3aa0(int param_1)

{
  SCStr *ghidra_this;
  undefined4 auStack_408 [257];
  uint uStack_4;
  
  uStack_4 = DAT_12126b84 ^ (uint)auStack_408;
  abi_call_thunk_FUN_11261330((int)(auStack_408), (uint)(0x401), (undefined1 *)("/account/v1/users/%s/beta-settings"), (undefined4)(0));
  (ghidra_this)->format((char *)(param_1 + 0x612c));
  auStack_408[0] = 0x103f3afa;
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 103f3b20; body size 99 bytes.
#line 1 "ENTRY_103f3b20"



void __fastcall FUN_103f3b20(int param_1)

{
  SCStr *ghidra_this;
  undefined4 auStack_408 [257];
  uint uStack_4;
  
  uStack_4 = DAT_12126b84 ^ (uint)auStack_408;
  abi_call_thunk_FUN_11261330((int)(auStack_408), (uint)(0x401), (undefined1 *)("/account/v1/users/%s"), (undefined4)(0));
  (ghidra_this)->format((char *)(param_1 + 0x612c));
  auStack_408[0] = 0x103f3b7a;
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10408c60; body size 43 bytes.
#line 1 "ENTRY_10408c60"

undefined4 FUN_10408c60(undefined4 param_1,SCStr *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)param_2 != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)param_2;
  }
  uVar1 = (param_2)->length();
  abi_call_thunk_FUN_1040bfe0((undefined4 *)(param_1), (undefined4)(puVar2), (undefined4)(uVar1), (undefined1)(uVar3));
  return param_1;
}


// Reference entry 10408ca0; body size 45 bytes.
#line 1 "ENTRY_10408ca0"

undefined4 FUN_10408ca0(undefined4 param_1,SCStr *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)param_2 != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)param_2;
  }
  uVar1 = (param_2)->length();
  abi_call_thunk_FUN_1040bfe0((undefined4 *)(param_1), (undefined4)(puVar2), (undefined4)(uVar1), (undefined1)(param_3));
  return param_1;
}


// Reference entry 1040bfa0; body size 43 bytes.
#line 1 "ENTRY_1040bfa0"

undefined4 FUN_1040bfa0(undefined4 param_1,SCStr *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)param_2 != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)param_2;
  }
  uVar1 = (param_2)->length();
  abi_call_thunk_FUN_1040bfe0((undefined4 *)(param_1), (undefined4)(puVar2), (undefined4)(uVar1), (undefined1)(uVar3));
  return param_1;
}


// Reference entry 10440860; body size 139 bytes.
#line 1 "ENTRY_10440860"

SCStr * FUN_10440860(SCStr *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  iVar2 = abi_call_thunk_FUN_101f08d0();
  if (iVar2 != 0x40) {
    iVar2 = abi_call_thunk_FUN_101f08d0();
    if (iVar2 != 0x200) {
      piVar3 = (int *)thunk_FUN_110828b0();
      if (piVar3 != (int *)0x0) {
        cVar1 = (**(code **)(*piVar3 + 0x3c))();
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


// Reference entry 1045ff20; body size 115 bytes.
#line 1 "ENTRY_1045ff20"

SCStr * Recovered_1045ff20::FUN_1045ff20(SCStr *param_2)

{
  int param_1 = (int)this;
  uint uVar1;
  char *pcVar2;
  uint uStack_8;
  int iStack_4;
  
  if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0xb4) + 0x2c))();
    abi_call_thunk_FUN_1113d180((undefined4 *)(&iStack_4), (undefined4 *)(&uStack_8));
    if (uVar1 < uStack_8) {
      pcVar2 = (char *)thunk_FUN_1109aba0(*(undefined4 *)(iStack_4 + 8 + uVar1 * 0x14),&DAT_1186d2ee
                                         );
      (param_2)->int_allocRep(pcVar2);
      return param_2;
    }
  }
  (param_2)->int_allocRep("");
  return param_2;
}


// Reference entry 1046c660; body size 55 bytes.
#line 1 "ENTRY_1046c660"

void __stdcall FUN_1046c660(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (param_2)->operator==("SCIHousehold:onZoneGroupsChanged");
  if (bVar1) {
    thunk_FUN_101ed0d0();
    abi_call_thunk_FUN_1046d3a0();
    abi_call_thunk_FUN_1046c9a0();
    thunk_FUN_101ed5f0();
  }
  return;
}


// Reference entry 1046c890; body size 56 bytes.
#line 1 "ENTRY_1046c890"

void __stdcall FUN_1046c890(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (param_2)->operator==("SCIHousehold:onZoneGroupsChanged");
  if (bVar1) {
    thunk_FUN_101ed0d0();
    abi_call_thunk_FUN_1046d3a0();
    abi_call_thunk_FUN_1046c9a0();
    thunk_FUN_101ed5f0();
  }
  return;
}


// Reference entry 1046f0a0; body size 78 bytes.
#line 1 "ENTRY_1046f0a0"

SCStr * __stdcall FUN_1046f0a0(SCStr *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  cVar1 = abi_call_thunk_FUN_1046f220();
  if (cVar1 == '\0') {
    uVar3 = 0x263d;
  }
  else {
    cVar1 = abi_call_thunk_FUN_1046f140();
    if (cVar1 == '\0') {
      uVar3 = 0x263c;
    }
    else {
      uVar3 = 0x263b;
    }
  }
  pcVar2 = (char *)thunk_FUN_1109aba0(uVar3,&DAT_11882ff0);
  (param_1)->int_allocRep(pcVar2);
  return param_1;
}


// Reference entry 1047c210; body size 36 bytes.
#line 1 "ENTRY_1047c210"

void __stdcall FUN_1047c210(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (param_2)->operator==("SCSetupEngine:onShouldRefreshUI");
  if (bVar1) {
    abi_call_thunk_FUN_1047d200();
  }
  return;
}


// Reference entry 10494950; body size 115 bytes.
#line 1 "ENTRY_10494950"

SCStr * Recovered_10494950::FUN_10494950(SCStr *param_2)

{
  int param_1 = (int)this;
  uint uVar1;
  char *pcVar2;
  uint uStack_8;
  int iStack_4;
  
  if (*(int **)(param_1 + 0xfc) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0xfc) + 0x2c))();
    abi_call_thunk_FUN_1113d180((undefined4 *)(&iStack_4), (undefined4 *)(&uStack_8));
    if (uVar1 < uStack_8) {
      pcVar2 = (char *)thunk_FUN_1109aba0(*(undefined4 *)(iStack_4 + 8 + uVar1 * 0x14),&DAT_1186d2ee
                                         );
      (param_2)->int_allocRep(pcVar2);
      return param_2;
    }
  }
  (param_2)->int_allocRep("");
  return param_2;
}


// Reference entry 1049b790; body size 136 bytes.
#line 1 "ENTRY_1049b790"

void __stdcall FUN_1049b790(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = (param_2)->operator==("SCIHousehold:onZoneGroupsChanged");
  if ((((!bVar1) &&
       (bVar1 = (param_2)->operator==("SCIHousehold:onVoiceAccountInfoChanged"), !bVar1)) &&
      (bVar1 = (param_2)->operator==("SCIConnectedPartnersManager:onItemsChanged"), !bVar1)) &&
     (bVar1 = (param_2)->beginsWith("SCIServiceDescriptorManager"), !bVar1)) {
    return;
  }
  cVar2 = thunk_FUN_101f1cd0();
  if (cVar2 == '\0') {
    thunk_FUN_101ed0d0();
    abi_call_thunk_FUN_101f2770();
    abi_call_thunk_FUN_1049ae90();
    abi_call_thunk_FUN_10499dd0();
    thunk_FUN_10498d70();
    thunk_FUN_101ed5f0();
  }
  return;
}


// Reference entry 104b0c10; body size 104 bytes.
#line 1 "ENTRY_104b0c10"

void __stdcall FUN_104b0c10(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (param_2)->operator==("SCISystemStatusManager:onSystemStatusListChanged");
  if ((((!bVar1) &&
       (bVar1 = (param_2)->operator==("SCIController:onConnectivityStateChanged"), !bVar1)) &&
      (bVar1 = (param_2)->operator==("SCIHousehold:onFinishedConnectingToZPs"), !bVar1)) &&
     ((bVar1 = (param_2)->operator==("SCIHousehold:onZoneGroupsChanged"), !bVar1 &&
      (bVar1 = (param_2)->operator==("SCIHousehold:onLifecycleStateChanged"), !bVar1)))) {
    return;
  }
  abi_call_thunk_FUN_104b1190();
  return;
}


// Reference entry 10508a20; body size 140 bytes.
#line 1 "ENTRY_10508a20"

SCStr * Recovered_10508a20::FUN_10508a20(SCStr *param_2,int param_3)

{
  int param_1 = (int)this;
  if ((*(char *)(param_1 + 0x144) == '\0') ||
     ((*(char **)(param_1 + 0x13c) != (char *)0x0 && (**(char **)(param_1 + 0x13c) != '\0')))) {
    if (param_3 == 0) {
      new (param_2) SCStr(*((SCStr *)(param_1 + 0x13c)));
      return param_2;
    }
    if (param_3 != 1) {
      if (param_3 != 2) {
        (param_2)->int_allocRep("");
        return param_2;
      }
      abi_call_FUN_105071a0((SCStr *)(param_2), (undefined4 *)(param_1 + 0x140));
      return param_2;
    }
  }
  new (param_2) SCStr(*((SCStr *)(param_1 + 0x138)));
  return param_2;
}


// Reference entry 10508da0; body size 134 bytes.
#line 1 "ENTRY_10508da0"

SCStr * Recovered_10508da0::FUN_10508da0(SCStr *param_2,undefined4 param_3)

{
  int param_1 = (int)this;
  switch(param_3) {
  case 0:
    new (param_2) SCStr(*((SCStr *)(param_1 + 0x138)));
    return param_2;
  case 1:
    new (param_2) SCStr(*((SCStr *)(param_1 + 0x13c)));
    return param_2;
  case 2:
    new (param_2) SCStr(*((SCStr *)(param_1 + 0x140)));
    return param_2;
  case 3:
    abi_call_FUN_105071a0((SCStr *)(param_2), (undefined4 *)(param_1 + 0x144));
    return param_2;
  default:
    (param_2)->int_allocRep((char *)0x0);
    return param_2;
  }
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
  iVar1 = (**(code **)(*param_1 + 0x180))();
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
  abi_call_thunk_FUN_110a48f0((uint)(uVar4), (undefined4)(puVar3), (undefined4)(puVar2), (char *)(pcVar5), (undefined4)(uVar6));
  (param_2)->int_allocRep(acStack_404);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 105150a0; body size 133 bytes.
#line 1 "ENTRY_105150a0"

void Recovered_105150a0::FUN_105150a0(SCStr *param_2)

{
  int param_1 = (int)this;
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  SCStr *local_408;
  char local_404 [1024];
  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_408;
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)(param_1 + 0x9c) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x9c);
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x24c);
  puVar3 = &DAT_1186d2ee;
  if (*(undefined1 **)(param_1 + 0xa0) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_1 + 0xa0);
  }
  uVar5 = 0x400;
  pcVar4 = local_404;
  local_408 = param_2;
  thunk_FUN_1109f7f0(uVar1,puVar3,puVar2,pcVar4,0x400);
  abi_call_thunk_FUN_110a48f0((uint)(uVar1), (undefined4)(puVar3), (undefined4)(puVar2), (char *)(pcVar4), (undefined4)(uVar5));
  (param_2)->int_allocRep(local_404);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 105607a0; body size 330 bytes.
#line 1 "ENTRY_105607a0"

SCStr * FUN_105607a0(SCStr *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  param_2 = param_2 + 8;
  cVar1 = abi_call_thunk_FUN_110a5ba0((int *)(param_2), (char *)("object.container.playlistContainer"));
  if (cVar1 != '\0') {
    (param_1)->int_allocRep("playlist");
    return param_1;
  }
  cVar1 = abi_call_thunk_FUN_110a5ba0((int *)(param_2), (char *)("object.container.person.musicArtist"));
  if (cVar1 != '\0') {
    (param_1)->int_allocRep("artist");
    return param_1;
  }
  cVar1 = abi_call_thunk_FUN_110a5ba0((int *)(param_2), (char *)("object.container.album.musicAlbum"));
  if (cVar1 != '\0') {
    (param_1)->int_allocRep("album");
    return param_1;
  }
  cVar1 = abi_call_thunk_FUN_110a5ba0((int *)(param_2), (char *)("object.item.audioItem.musicTrack"));
  if (cVar1 != '\0') {
    (param_1)->int_allocRep("track");
    return param_1;
  }
  cVar1 = abi_call_thunk_FUN_110b9480((undefined4)(param_3));
  if (cVar1 != '\0') {
    (param_1)->int_allocRep("radio");
    return param_1;
  }
  cVar1 = abi_call_thunk_FUN_110a5ba0((int *)(param_2), (char *)("object.item.audioItem.audioBook"));
  if (cVar1 != '\0') {
    (param_1)->int_allocRep("audiobook");
    return param_1;
  }
  cVar1 = abi_call_thunk_FUN_110a5ba0((int *)(param_2), (char *)("object.container.podcast"));
  if (cVar1 != '\0') {
    (param_1)->int_allocRep("podcast");
    return param_1;
  }
  cVar1 = abi_call_thunk_FUN_110a5ba0((int *)(param_2), (char *)("object.item.audioItem.podcast"));
  if (cVar1 != '\0') {
    (param_1)->int_allocRep("episode.podcast");
    return param_1;
  }
  (param_1)->int_allocRep("other");
  return param_1;
}


// Reference entry 1058a6e0; body size 232 bytes.
#line 1 "ENTRY_1058a6e0"

void __fastcall FUN_1058a6e0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  uint local_29c [166];
  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)local_29c;
  if (*(char *)(param_1 + 0x1c4) == '\0') {
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_111cfd00();
  bVar4 = 1;
  iVar3 = thunk_FUN_110828b0();
  bVar1 = ((SCStr *)(param_1 + 0x48))->operator==((char *)(iVar3 + 0x130));
  if (!bVar1) {
    cVar2 = abi_call_thunk_FUN_1106eda0((int)(local_29c));
    if (cVar2 != '\0') {
      bVar4 = (byte)(local_29c[0] >> 2) & 1;
    }
  }
  cVar2 = abi_call_thunk_FUN_110a5ba0((int *)(param_1 + 0x130), (char *)("object.container"));
  if ((cVar2 != '\0') && (bVar4 != 0)) {
    cVar2 = abi_call_thunk_FUN_10219a00((int)(param_1 + 0x128));
    if (cVar2 == '\0') {
      cVar2 = thunk_FUN_10208940();
      if (cVar2 != '\0') {
        thunk_FUN_1148ac28();
        return;
      }
    }
  }
  thunk_FUN_1148ac28();
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
    iVar3 = (**(code **)(*piVar1 + 0x1c))();
    if (iVar3 == 2) {
      uVar4 = 0;
      abi_call_thunk_FUN_1023a9f0((undefined4)(0));
      thunk_FUN_105b5360(uVar4);
    }
    else if (iVar3 == 3) {
      iVar3 = thunk_FUN_1023a9f0();
      (**(code **)(*(int *)(iVar3 + 0x1c) + 8))();
      return;
    }
  }
  return;
}


// Reference entry 105cc740; body size 94 bytes.
#line 1 "ENTRY_105cc740"



void FUN_105cc740(SCStr *param_1,int param_2,SCStr *param_3,undefined4 param_4,undefined4 param_5)

{
  if (param_1 != param_3) {
    (param_3)->int_release();
    *(undefined4 *)param_3 = *(undefined4 *)param_1;
    (param_3)->int_addref();
  }
  param_3 = param_3 + 4;
  if (param_1 + 4 != param_3) {
    (param_3)->int_release();
    *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 4);
    (param_3)->int_addref();
  }
  abi_call_thunk_FUN_105cc420((int)(param_1), (int)(0), (uint)(param_2 - (int)param_1 >> 3), (SCStr *)(param_4), (void *)(param_5));
  return;
}


// Reference entry 1068ae60; body size 122 bytes.
#line 1 "ENTRY_1068ae60"

void Recovered_1068ae60::FUN_1068ae60(undefined4 *param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  cVar1 = abi_call_thunk_FUN_101a2c70((byte *)("RINCON_AssociatedZPUDN"), (undefined4 *)(param_2));
  if ((cVar1 != '\0') &&
     (((bVar2 = (param_3)->operator==("S:"), bVar2 || (*(char **)param_3 == (char *)0x0)) ||
      (**(char **)param_3 == '\0')))) {
    puVar3 = &DAT_1186d2ee;
    if (*(undefined1 **)param_3 != (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)param_3;
    }
    puVar4 = &DAT_1186d2ee;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)*param_2;
    }
    thunk_FUN_112af4e0("ShareManager",2,"Browse Cache Event: udn: %s containerId: %s",puVar4,puVar3)
    ;
    *(undefined4 *)(param_1 + 0x50) = 0;
    thunk_FUN_1068bac0();
  }
  return;
}


// Reference entry 10b81cb0; body size 51 bytes.
#line 1 "ENTRY_10b81cb0"

SCStr * Recovered_10b81cb0::FUN_10b81cb0(SCStr *param_2)

{
  int param_1 = (int)this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    (param_2)->int_allocRep((char *)0x0);
    return param_2;
  }
  uVar1 = thunk_FUN_110da760();
  ((CallABI_thunk_FUN_103a3e50 *)(param_2))->thunk_FUN_103a3e50((char *)(uVar1));
  return param_2;
}


// Reference entry 10bb7a80; body size 215 bytes.
#line 1 "ENTRY_10bb7a80"

SCStr * FUN_10bb7a80(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    abi_call_thunk_FUN_10534670((SCStr *)(param_1), (int)(0));
    return param_1;
  case 1:
    (param_1)->int_allocRep("resetController");
    return param_1;
  case 2:
    (param_1)->int_allocRep("lcAddNewSystem");
    return param_1;
  case 3:
    (param_1)->int_allocRep("lcAddAnotherSystem");
    return param_1;
  case 4:
    (param_1)->int_allocRep("laJoinExisting");
    return param_1;
  case 5:
    (param_1)->int_allocRep("laUnattachedDevice");
    return param_1;
  case 6:
    (param_1)->int_allocRep("laNoZonesFound");
    return param_1;
  case 7:
    (param_1)->int_allocRep("laNoZonesExistingHH");
    return param_1;
  default:
    (param_1)->int_allocRep("unknown");
    return param_1;
  }
}


// Reference entry 10bbac00; body size 100 bytes.
#line 1 "ENTRY_10bbac00"

void Recovered_10bbac00::FUN_10bbac00(SCStr *param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  SCStr *ghidra_this;
  bool bVar1;
  
  bVar1 = (param_2)->operator==("REGISTER_DEVICE");
  if (bVar1) {
    abi_call_thunk_FUN_112af4e0((undefined4)("legacy_join_household_wizard"), (undefined4)(1), (undefined4)("Button press detected- attempting to connect to household"));
    thunk_FUN_10f7b5d0();
    ghidra_this = (SCStr *)(*(int *)(param_1 + -0x10) + 0xd0);
    if (param_3 != ghidra_this) {
      (ghidra_this)->int_release();
      *(undefined4 *)ghidra_this = *(undefined4 *)param_3;
      (ghidra_this)->int_addref();
    }
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10c2c0e0; body size 45 bytes.
#line 1 "ENTRY_10c2c0e0"

void __stdcall FUN_10c2c0e0(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = (param_2)->operator==("SCIAccountManager:onCurrentAccountChanged");
  if (bVar1) {
    cVar2 = thunk_FUN_10c322c0();
    if (cVar2 != '\0') {
      abi_call_thunk_FUN_10c31e60((int *)(0));
    }
  }
  return;
}


// Reference entry 10c2c400; body size 47 bytes.
#line 1 "ENTRY_10c2c400"

void __stdcall FUN_10c2c400(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = (param_2)->operator==("SCIAccountManager:onCurrentAccountChanged");
  if (bVar1) {
    cVar2 = thunk_FUN_10c322c0();
    if (cVar2 != '\0') {
      abi_call_thunk_FUN_10c31e60((int *)(0));
    }
  }
  return;
}


// Reference entry 10c611f0; body size 100 bytes.
#line 1 "ENTRY_10c611f0"

SCStr * FUN_10c611f0(SCStr *param_1,int param_2)

{
  int iVar1;
  undefined1 local_c [8];
  int local_4;
  
  abi_call_FUN_10c64480();
  iVar1 = *(int *)(param_2 + 4);
  param_2 = iVar1;
  thunk_FUN_10c5e5a0(local_c,&param_2);
  if (((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= iVar1)) &&
     (local_4 != DAT_121a56e4)) {
    new (param_1) SCStr(*((SCStr *)(local_4 + 0x14)));
    return param_1;
  }
  *(undefined4 *)param_1 = 0;
  return param_1;
}


// Reference entry 10c62180; body size 29 bytes.
#line 1 "ENTRY_10c62180"

SCStr * FUN_10c62180(SCStr *param_1,undefined4 *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)abi_call_thunk_FUN_11456530((int)(*param_2));
  (param_1)->int_allocRep(pcVar1);
  return param_1;
}


// Reference entry 10cd4380; body size 116 bytes.
#line 1 "ENTRY_10cd4380"



void __fastcall FUN_10cd4380(int param_1)

{
  SCStr *ghidra_this;
  uint auStack_440 [14];
  undefined1 auStack_408 [1028];
  uint uStack_4;
  
  uStack_4 = DAT_12126b84 ^ (uint)auStack_440;
  thunk_FUN_1109f7f0();
  auStack_440[0] = auStack_440[0] & 0xffffff00;
  thunk_FUN_1109f280(auStack_440,0x36);
  abi_call_thunk_FUN_11261330((int)(auStack_408), (uint)(0x401), (undefined1 *)("/sonos/authCode/householdId/%s"), (undefined4)(2));
  (ghidra_this)->format((char *)(param_1 + 0x6224));
  auStack_440[0] = 0x10cd43ed;
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10cf08b0; body size 90 bytes.
#line 1 "ENTRY_10cf08b0"

undefined4 Recovered_10cf08b0::FUN_10cf08b0(SCStr *param_2)

{
  int param_1 = (int)this;
  bool bVar1;
  char cVar2;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1025ed70(local_c,param_2);
  if (((*(char *)(local_4 + 0xd) == '\0') &&
      (bVar1 = (param_2)->operator<(*((SCStr *)(local_4 + 0x10))), !bVar1)) &&
     (local_4 != *(int *)(param_1 + 0x34))) {
    return 0;
  }
  cVar2 = abi_call_thunk_FUN_10beccd0((SCStr *)(param_2));
  if (cVar2 != '\0') {
    return 0;
  }
  return 1;
}


// Reference entry 10d04bc0; body size 53 bytes.
#line 1 "ENTRY_10d04bc0"

SCStr * __stdcall FUN_10d04bc0(SCStr *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  cVar1 = abi_call_thunk_FUN_10bb46d0();
  if (cVar1 == '\0') {
    uVar3 = 0x20bd;
  }
  else {
    uVar3 = 0x20be;
  }
  pcVar2 = (char *)thunk_FUN_1109aba0(uVar3,&DAT_11882ff0);
  (param_1)->int_allocRep(pcVar2);
  return param_1;
}


// Reference entry 10d20600; body size 55 bytes.
#line 1 "ENTRY_10d20600"

SCStr * FUN_10d20600(SCStr *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 2) {
    ((CallABI_thunk_FUN_104d8ba0 *)(param_1))->thunk_FUN_104d8ba0((SCStr *)(param_2), (int)(param_3));
    return param_1;
  }
  (param_1)->int_allocRep("emptylinein");
  return param_1;
}


// Reference entry 10d24550; body size 455 bytes.
#line 1 "ENTRY_10d24550"

void FUN_10d24550(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *ghidra_this;
  bool bVar1;
  int iVar2;
  int iVar3;
  SCStr *pSVar4;
  SCStr *this_00;
  
  iVar2 = (int)param_3 - (int)param_1 >> 2;
  if (iVar2 < 0x29) {
    bVar1 = (param_2)->operator<(*(param_1));
    if (bVar1) {
      abi_call_thunk_FUN_101bdde0((SCStr *)(param_2), (SCStr *)(param_1));
    }
    bVar1 = (param_3)->operator<(*(param_2));
    if (bVar1) {
      abi_call_thunk_FUN_101bdde0((SCStr *)(param_3), (SCStr *)(param_2));
      bVar1 = (param_2)->operator<(*(param_1));
      if (bVar1) {
        abi_call_thunk_FUN_101bdde0((SCStr *)(param_2), (SCStr *)(param_1));
        return;
      }
    }
  }
  else {
    iVar3 = iVar2 + 1 >> 3;
    iVar2 = iVar3 * 4;
    ghidra_this = param_1 + iVar2;
    bVar1 = (ghidra_this)->operator<(*(param_1));
    if (bVar1) {
      abi_call_thunk_FUN_101bdde0((SCStr *)(ghidra_this), (SCStr *)(param_1));
    }
    bVar1 = (param_1 + iVar3 * 8)->operator<(*(ghidra_this));
    if (bVar1) {
      abi_call_thunk_FUN_101bdde0((SCStr *)(param_1 + iVar3 * 8), (SCStr *)(ghidra_this));
      bVar1 = (ghidra_this)->operator<(*(param_1));
      if (bVar1) {
        abi_call_thunk_FUN_101bdde0((SCStr *)(ghidra_this), (SCStr *)(param_1));
      }
    }
    pSVar4 = param_2 + iVar3 * -4;
    bVar1 = (param_2)->operator<(*(pSVar4));
    if (bVar1) {
      abi_call_thunk_FUN_101bdde0((SCStr *)(param_2), (SCStr *)(pSVar4));
    }
    bVar1 = (param_2 + iVar2)->operator<(*(param_2));
    if (bVar1) {
      abi_call_thunk_FUN_101bdde0((SCStr *)(param_2 + iVar2), (SCStr *)(param_2));
      bVar1 = (param_2)->operator<(*(pSVar4));
      if (bVar1) {
        abi_call_thunk_FUN_101bdde0((SCStr *)(param_2), (SCStr *)(pSVar4));
      }
    }
    pSVar4 = param_3 + iVar3 * -8;
    this_00 = param_3 + iVar3 * -4;
    bVar1 = (this_00)->operator<(*(pSVar4));
    if (bVar1) {
      abi_call_thunk_FUN_101bdde0((SCStr *)(this_00), (SCStr *)(pSVar4));
    }
    bVar1 = (param_3)->operator<(*(this_00));
    if (bVar1) {
      abi_call_thunk_FUN_101bdde0((SCStr *)(param_3), (SCStr *)(this_00));
      bVar1 = (this_00)->operator<(*(pSVar4));
      if (bVar1) {
        abi_call_thunk_FUN_101bdde0((SCStr *)(this_00), (SCStr *)(pSVar4));
      }
    }
    bVar1 = (param_2)->operator<(*(ghidra_this));
    if (bVar1) {
      abi_call_thunk_FUN_101bdde0((SCStr *)(param_2), (SCStr *)(ghidra_this));
    }
    bVar1 = (this_00)->operator<(*(param_2));
    if (bVar1) {
      abi_call_thunk_FUN_101bdde0((SCStr *)(this_00), (SCStr *)(param_2));
      bVar1 = (param_2)->operator<(*(ghidra_this));
      if (bVar1) {
        abi_call_thunk_FUN_101bdde0((SCStr *)(param_2), (SCStr *)(ghidra_this));
      }
    }
  }
  return;
}


// Reference entry 10d24b50; body size 84 bytes.
#line 1 "ENTRY_10d24b50"



void FUN_10d24b50(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_2)->operator<(*(param_1));
  if (bVar1) {
    abi_call_thunk_FUN_101bdde0((SCStr *)(param_2), (SCStr *)(param_1));
  }
  bVar1 = (param_3)->operator<(*(param_2));
  if (bVar1) {
    abi_call_thunk_FUN_101bdde0((SCStr *)(param_3), (SCStr *)(param_2));
    bVar1 = (param_2)->operator<(*(param_1));
    if (bVar1) {
      abi_call_thunk_FUN_101bdde0((SCStr *)(param_2), (SCStr *)(param_1));
    }
  }
  return;
}


// Reference entry 10d3c3c0; body size 133 bytes.
#line 1 "ENTRY_10d3c3c0"

void Recovered_10d3c3c0::FUN_10d3c3c0(SCStr *param_2)

{
  int param_1 = (int)this;
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  SCStr *local_3f0;
  char local_3ec [1000];
  uint local_4;
  
  local_4 = DAT_12126b84 ^ (uint)&local_3f0;
  puVar2 = &DAT_1186d2ee;
  if (*(undefined1 **)(param_1 + 0x8c) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x8c);
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0xa0);
  puVar3 = &DAT_1186d2ee;
  if (*(undefined1 **)(param_1 + 0x90) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_1 + 0x90);
  }
  uVar5 = 1000;
  pcVar4 = local_3ec;
  local_3f0 = param_2;
  thunk_FUN_1109f7f0(uVar1,puVar3,puVar2,pcVar4,1000);
  abi_call_thunk_FUN_110a48f0((uint)(uVar1), (undefined4)(puVar3), (undefined4)(puVar2), (char *)(pcVar4), (undefined4)(uVar5));
  (param_2)->int_allocRep(local_3ec);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10d554f0; body size 55 bytes.
#line 1 "ENTRY_10d554f0"

SCStr * FUN_10d554f0(SCStr *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 2) {
    ((CallABI_thunk_FUN_104d8ba0 *)(param_1))->thunk_FUN_104d8ba0((SCStr *)(param_2), (int)(param_3));
    return param_1;
  }
  (param_1)->int_allocRep("emptysearch");
  return param_1;
}


// Reference entry 10da2790; body size 121 bytes.
#line 1 "ENTRY_10da2790"

void Recovered_10da2790::FUN_10da2790(undefined4 param_2,SCStr *param_3)

{
  int param_1 = (int)this;
  int iVar1;
  bool bVar2;
  
  bVar2 = (param_3)->operator==("SCIHousehold:onZoneGroupsChanged");
  if (bVar2) {
    abi_call_thunk_FUN_10cefc20();
    thunk_FUN_10cefa80();
    iVar1 = *(int *)(param_1 + 8);
    abi_call_thunk_FUN_10bed100((int *)(iVar1 + 0x2c), (undefined4)(-(uint)(iVar1 != 0) & iVar1 + 0x28U));
    abi_call_thunk_FUN_10da3dc0();
    return;
  }
  bVar2 = (param_3)->operator==("SCIHousehold:onVoiceAccountInfoChanged");
  if ((!bVar2) && (bVar2 = (param_3)->operator==("SCConnectedPartnersCache:onSuccess"), !bVar2))
  {
    return;
  }
  abi_call_thunk_FUN_10da3dc0();
  return;
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
  iVar1 = (**(code **)(*param_1 + 0x34))();
  if (iVar1 == -1) {
    pcVar3 = "";
  }
  else {
    local_48 = (SCStr *)((uint)local_48 & 0xff000000);
    abi_call_thunk_FUN_1025e860((int *)(param_3), (undefined1 *)(&local_48));
    uVar2 = (**(code **)(*param_1 + 0x34))(acStack_44,0x40);
    thunk_FUN_1115bf90(&local_48,uVar2);
    pcVar3 = acStack_44;
  }
  (param_2)->int_allocRep(pcVar3);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10e2b550; body size 56 bytes.
#line 1 "ENTRY_10e2b550"

void Recovered_10e2b550::FUN_10e2b550(int param_2)

{
  int param_1 = (int)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    uStack_8 = 0x10e2b55f;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x20))();
  }
  if (param_2 == iVar1) {
    uStack_8 = 0x10e2b575;
    uVar2 = thunk_FUN_103eb620();
    switch(uVar2) {
    case 0:
    case 2:
      ((SCStr *)&uStack_8)->int_allocRep("password_set");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 1:
      ((SCStr *)&uStack_8)->int_allocRep("password_unset");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 0xfffffffe:
    case 3:
    case 4:
      uStack_8 = 0x10e2b5c4;
      uStack_8 = thunk_FUN_103eb620();
      abi_call_thunk_FUN_112af4e0((undefined4)("sec_reg"), (undefined4)(1), (undefined4)("Password Check failed: %d"));
      ((SCStr *)&uStack_8)->int_allocRep("network_error");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
    }
  }
  return;
}


// Reference entry 10e2b640; body size 312 bytes.
#line 1 "ENTRY_10e2b640"

void Recovered_10e2b640::FUN_10e2b640(int param_2,ushort param_3)

{
  int param_1 = (int)this;
  int iVar1;
  char *pcVar2;
  char *pcStack_8;
  
  if (*(int **)(param_1 + 0x30) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    pcStack_8 = (char *)0x10e2b64f;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x20))();
  }
  if (param_2 == iVar1) {
    pcStack_8 = (char *)0x10e2b661;
    iVar1 = thunk_FUN_103eb590();
    if (iVar1 != -2) {
      if (iVar1 == 0) {
        pcStack_8 = (char *)0x10e2b697;
        thunk_FUN_10e443d0();
        ((SCStr *)&pcStack_8)->int_allocRep("create_identity.success");
        (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
        return;
      }
      if (iVar1 != 1) {
        return;
      }
      ((SCStr *)&pcStack_8)->int_allocRep("create_identity.error_exists");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    }
    pcVar2 = "Error in creating account %d";
  }
  else {
    if (*(int **)(param_1 + 0x98) == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      pcStack_8 = (char *)0x10e2b6d2;
      iVar1 = (**(code **)(**(int **)(param_1 + 0x98) + 0x20))();
    }
    if (param_2 != iVar1) {
      return;
    }
    pcStack_8 = (char *)0x10e2b6eb;
    iVar1 = thunk_FUN_103eb5d0();
    if (iVar1 != -2) {
      if (iVar1 == 0) {
        ((SCStr *)&pcStack_8)->int_allocRep("set_password.success");
        (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
        return;
      }
      if (iVar1 != 1) {
        return;
      }
      pcStack_8 = "Error in password set: Invalid Token";
      thunk_FUN_112af4e0("sec_reg",1);
      ((SCStr *)&pcStack_8)->int_allocRep("set_password.error");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    }
    pcVar2 = "Error in password set %d";
  }
  pcStack_8 = (char *)(uint)param_3;
  abi_call_thunk_FUN_112af4e0((undefined4)("sec_reg"), (undefined4)(1), (undefined4)(pcVar2));
  ((SCStr *)&pcStack_8)->int_allocRep("network_error");
  (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
  return;
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
        (**(code **)(*piVar1 + 8))();
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
      abi_call_thunk_FUN_112af4e0((undefined4)("sec_reg"), (undefined4)(1), (undefined4)("Error in setting opt-in, email, location %d"));
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


// Reference entry 10e2bfe0; body size 60 bytes.
#line 1 "ENTRY_10e2bfe0"

void Recovered_10e2bfe0::FUN_10e2bfe0(int param_2,ushort param_3)

{
  int param_1 = (int)this;
  int iVar1;
  undefined4 uVar2;
  uint uStack_8;
  
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    uStack_8 = 0x10e2bfef;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x20))();
  }
  if (param_2 == iVar1) {
    uStack_8 = 0x10e2c005;
    uVar2 = thunk_FUN_103eb560();
    switch(uVar2) {
    case 0:
      uStack_8 = 1;
      thunk_FUN_10e44d70();
      ((SCStr *)&uStack_8)->int_allocRep("login.success");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 1:
      uStack_8 = 0;
      thunk_FUN_10e44d70();
      ((SCStr *)&uStack_8)->int_allocRep("login.verify");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 0xfffffffe:
    case 2:
    case 3:
      uStack_8 = (uint)param_3;
      abi_call_thunk_FUN_112af4e0((undefined4)("sec_reg"), (undefined4)(1), (undefined4)("Error in login %d"));
      ((SCStr *)&uStack_8)->int_allocRep("network_error");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
    }
  }
  return;
}


// Reference entry 10e2c4f0; body size 91 bytes.
#line 1 "ENTRY_10e2c4f0"

void Recovered_10e2c4f0::FUN_10e2c4f0(int param_2,ushort param_3)

{
  int param_1 = (int)this;
  int iVar1;
  uint uStack_8;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    uStack_8 = 0x10e2c4ff;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x20))();
  }
  if (param_2 == iVar1) {
    uStack_8 = 0x10e2c511;
    iVar1 = thunk_FUN_103eb600();
    if (iVar1 == -2) {
      uStack_8 = (uint)param_3;
      abi_call_thunk_FUN_112af4e0((undefined4)("sec_reg"), (undefined4)(1), (undefined4)("Error in resetting password %d"));
      ((SCStr *)&uStack_8)->int_allocRep("network_error");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
    }
  }
  return;
}


// Reference entry 10e2cb50; body size 123 bytes.
#line 1 "ENTRY_10e2cb50"

void Recovered_10e2cb50::FUN_10e2cb50(int param_2,ushort param_3)

{
  int param_1 = (int)this;
  int iVar1;
  uint uStack_8;
  
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    uStack_8 = 0x10e2cb5f;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x20))();
  }
  if (param_2 == iVar1) {
    uStack_8 = 0x10e2cb71;
    iVar1 = thunk_FUN_103eb650();
    if (iVar1 == -2) {
      uStack_8 = (uint)param_3;
      abi_call_thunk_FUN_112af4e0((undefined4)("sec_reg"), (undefined4)(1), (undefined4)("Error in verifying email %d"));
      ((SCStr *)&uStack_8)->int_allocRep("verify.error");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
    }
    else if (iVar1 == 0) {
      ((SCStr *)&uStack_8)->int_allocRep("verify.success");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    }
  }
  return;
}


// Reference entry 10ea8cf0; body size 442 bytes.
#line 1 "ENTRY_10ea8cf0"

SCStr * FUN_10ea8cf0(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  SCStr *pSVar7;
  SCStr *pSVar8;
  SCStr *pSVar9;
  SCStr *pSVar10;
  
  if (param_1 != param_2) {
    pSVar7 = param_3 + 0x2c;
    pSVar10 = param_2 + 0x2c;
    do {
      pSVar9 = pSVar10 + -0x4c;
      param_3 = param_3 + -0x4c;
      pSVar8 = pSVar7 + -0x4c;
      if (pSVar10 + -0x78 != param_3) {
        (param_3)->int_release();
        *(undefined4 *)param_3 = *(undefined4 *)(pSVar10 + -0x78);
        (param_3)->int_addref();
      }
      if (pSVar9 != pSVar8) {
        (pSVar7 + -0x74)->int_release();
        *(undefined4 *)(pSVar7 + -0x74) = *(undefined4 *)(pSVar10 + -0x74);
        (pSVar7 + -0x74)->int_addref();
        if (pSVar9 != pSVar8) {
          (pSVar7 + -0x70)->int_release();
          *(undefined4 *)(pSVar7 + -0x70) = *(undefined4 *)(pSVar10 + -0x70);
          (pSVar7 + -0x70)->int_addref();
        }
      }
      pSVar7[-0x6c] = pSVar10[-0x6c];
      pSVar7[-0x6b] = pSVar10[-0x6b];
      pSVar7[-0x6a] = pSVar10[-0x6a];
      uVar3 = *(undefined4 *)(pSVar10 + -100);
      *(undefined4 *)(pSVar7 + -0x68) = *(undefined4 *)(pSVar10 + -0x68);
      *(undefined4 *)(pSVar7 + -100) = uVar3;
      uVar3 = *(undefined4 *)(pSVar10 + -0x5c);
      *(undefined4 *)(pSVar7 + -0x60) = *(undefined4 *)(pSVar10 + -0x60);
      *(undefined4 *)(pSVar7 + -0x5c) = uVar3;
      if (pSVar8 != pSVar9) {
        iVar4 = *(int *)(pSVar7 + -0x58);
        pSVar1 = pSVar7 + -0x58;
        cVar2 = *(char *)((int)*(int **)(iVar4 + 4) + 0xd);
        piVar6 = *(int **)(iVar4 + 4);
        while (cVar2 == '\0') {
          abi_call_thunk_FUN_1086f2f0((undefined4)(pSVar1), (int *)(piVar6[2]));
          piVar5 = (int *)*piVar6;
          thunk_FUN_1148a50e(piVar6,0x14);
          piVar6 = piVar5;
          cVar2 = *(char *)((int)piVar5 + 0xd);
        }
        *(int *)(iVar4 + 4) = iVar4;
        *(int *)iVar4 = iVar4;
        *(int *)(iVar4 + 8) = iVar4;
        *(undefined4 *)(pSVar7 + -0x54) = 0;
        uVar3 = *(undefined4 *)pSVar1;
        *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar10 + -0x58);
        *(undefined4 *)(pSVar10 + -0x58) = uVar3;
        uVar3 = *(undefined4 *)(pSVar7 + -0x54);
        *(undefined4 *)(pSVar7 + -0x54) = *(undefined4 *)(pSVar10 + -0x54);
        *(undefined4 *)(pSVar10 + -0x54) = uVar3;
        if (pSVar8 != pSVar9) {
          iVar4 = *(int *)(pSVar7 + -0x50);
          pSVar1 = pSVar7 + -0x50;
          thunk_FUN_102a3ea0(pSVar1,*(undefined4 *)(iVar4 + 4));
          *(int *)(iVar4 + 4) = iVar4;
          *(int *)iVar4 = iVar4;
          *(int *)(iVar4 + 8) = iVar4;
          *(undefined4 *)pSVar8 = 0;
          uVar3 = *(undefined4 *)pSVar1;
          *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar10 + -0x50);
          *(undefined4 *)(pSVar10 + -0x50) = uVar3;
          uVar3 = *(undefined4 *)pSVar8;
          *(undefined4 *)pSVar8 = *(undefined4 *)pSVar9;
          *(undefined4 *)pSVar9 = uVar3;
        }
      }
      pSVar1 = pSVar7 + -0x44;
      pSVar7[-0x48] = pSVar10[-0x48];
      if (pSVar10 + -0x44 != pSVar1) {
        (pSVar1)->int_release();
        *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar10 + -0x44);
        (pSVar1)->int_addref();
      }
      pSVar1 = pSVar7 + -0x40;
      if (pSVar10 + -0x40 != pSVar1) {
        (pSVar1)->int_release();
        *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar10 + -0x40);
        (pSVar1)->int_addref();
      }
      *(undefined4 *)(pSVar7 + -0x3c) = *(undefined4 *)(pSVar10 + -0x3c);
      pSVar1 = pSVar10 + -0x78;
      *(undefined4 *)(pSVar7 + -0x38) = *(undefined4 *)(pSVar10 + -0x38);
      *(undefined4 *)(pSVar7 + -0x34) = *(undefined4 *)(pSVar10 + -0x34);
      *(undefined4 *)(pSVar7 + -0x30) = *(undefined4 *)(pSVar10 + -0x30);
      pSVar7 = pSVar8;
      pSVar10 = pSVar9;
    } while (pSVar1 != param_1);
    return param_3;
  }
  return param_3;
}


// Reference entry 10ea8f20; body size 443 bytes.
#line 1 "ENTRY_10ea8f20"

SCStr * FUN_10ea8f20(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  SCStr *pSVar7;
  SCStr *pSVar8;
  
  if (param_1 != param_2) {
    pSVar7 = param_3 + 0x2c;
    pSVar8 = param_1 + 0x2c;
    do {
      if (pSVar8 + -0x2c != param_3) {
        (param_3)->int_release();
        *(undefined4 *)param_3 = *(undefined4 *)(pSVar8 + -0x2c);
        (param_3)->int_addref();
      }
      if (pSVar8 != pSVar7) {
        (pSVar7 + -0x28)->int_release();
        *(undefined4 *)(pSVar7 + -0x28) = *(undefined4 *)(pSVar8 + -0x28);
        (pSVar7 + -0x28)->int_addref();
        if (pSVar8 != pSVar7) {
          (pSVar7 + -0x24)->int_release();
          *(undefined4 *)(pSVar7 + -0x24) = *(undefined4 *)(pSVar8 + -0x24);
          (pSVar7 + -0x24)->int_addref();
        }
      }
      pSVar7[-0x20] = pSVar8[-0x20];
      pSVar7[-0x1f] = pSVar8[-0x1f];
      pSVar7[-0x1e] = pSVar8[-0x1e];
      uVar3 = *(undefined4 *)(pSVar8 + -0x18);
      *(undefined4 *)(pSVar7 + -0x1c) = *(undefined4 *)(pSVar8 + -0x1c);
      *(undefined4 *)(pSVar7 + -0x18) = uVar3;
      uVar3 = *(undefined4 *)(pSVar8 + -0x10);
      *(undefined4 *)(pSVar7 + -0x14) = *(undefined4 *)(pSVar8 + -0x14);
      *(undefined4 *)(pSVar7 + -0x10) = uVar3;
      if (pSVar7 != pSVar8) {
        iVar4 = *(int *)(pSVar7 + -0xc);
        pSVar1 = pSVar7 + -0xc;
        cVar2 = *(char *)((int)*(int **)(iVar4 + 4) + 0xd);
        piVar6 = *(int **)(iVar4 + 4);
        while (cVar2 == '\0') {
          abi_call_thunk_FUN_1086f2f0((undefined4)(pSVar1), (int *)(piVar6[2]));
          piVar5 = (int *)*piVar6;
          thunk_FUN_1148a50e(piVar6,0x14);
          piVar6 = piVar5;
          cVar2 = *(char *)((int)piVar5 + 0xd);
        }
        *(int *)(iVar4 + 4) = iVar4;
        *(int *)iVar4 = iVar4;
        *(int *)(iVar4 + 8) = iVar4;
        *(undefined4 *)(pSVar7 + -8) = 0;
        uVar3 = *(undefined4 *)pSVar1;
        *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar8 + -0xc);
        *(undefined4 *)(pSVar8 + -0xc) = uVar3;
        uVar3 = *(undefined4 *)(pSVar7 + -8);
        *(undefined4 *)(pSVar7 + -8) = *(undefined4 *)(pSVar8 + -8);
        *(undefined4 *)(pSVar8 + -8) = uVar3;
        if (pSVar7 != pSVar8) {
          iVar4 = *(int *)(pSVar7 + -4);
          pSVar1 = pSVar7 + -4;
          thunk_FUN_102a3ea0(pSVar1,*(undefined4 *)(iVar4 + 4));
          *(int *)(iVar4 + 4) = iVar4;
          *(int *)iVar4 = iVar4;
          *(int *)(iVar4 + 8) = iVar4;
          *(undefined4 *)pSVar7 = 0;
          uVar3 = *(undefined4 *)pSVar1;
          *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar8 + -4);
          *(undefined4 *)(pSVar8 + -4) = uVar3;
          uVar3 = *(undefined4 *)pSVar7;
          *(undefined4 *)pSVar7 = *(undefined4 *)pSVar8;
          *(undefined4 *)pSVar8 = uVar3;
        }
      }
      pSVar1 = pSVar7 + 8;
      pSVar7[4] = pSVar8[4];
      if (pSVar8 + 8 != pSVar1) {
        (pSVar1)->int_release();
        *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar8 + 8);
        (pSVar1)->int_addref();
      }
      pSVar1 = pSVar7 + 0xc;
      if (pSVar8 + 0xc != pSVar1) {
        (pSVar1)->int_release();
        *(undefined4 *)pSVar1 = *(undefined4 *)(pSVar8 + 0xc);
        (pSVar1)->int_addref();
      }
      *(undefined4 *)(pSVar7 + 0x10) = *(undefined4 *)(pSVar8 + 0x10);
      param_3 = param_3 + 0x4c;
      *(undefined4 *)(pSVar7 + 0x14) = *(undefined4 *)(pSVar8 + 0x14);
      *(undefined4 *)(pSVar7 + 0x18) = *(undefined4 *)(pSVar8 + 0x18);
      *(undefined4 *)(pSVar7 + 0x1c) = *(undefined4 *)(pSVar8 + 0x1c);
      pSVar7 = pSVar7 + 0x4c;
      pSVar1 = pSVar8 + 0x20;
      pSVar8 = pSVar8 + 0x4c;
    } while (pSVar1 != param_2);
    return param_3;
  }
  return param_3;
}


// Reference entry 10eab7c0; body size 396 bytes.
#line 1 "ENTRY_10eab7c0"

SCStr * Recovered_10eab7c0::FUN_10eab7c0(SCStr *param_2)

{
  SCStr * param_1 = (SCStr *)this;
  SCStr *pSVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_2 != param_1) {
    (param_1)->int_release();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    (param_1)->int_addref();
  }
  pSVar1 = param_1 + 4;
  if (param_2 + 4 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 4);
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 8;
  if (param_2 + 8 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 8);
    (pSVar1)->int_addref();
  }
  param_1[0xc] = param_2[0xc];
  pSVar1 = param_1 + 0x20;
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  if (pSVar1 != param_2 + 0x20) {
    iVar4 = *(int *)pSVar1;
    cVar2 = *(char *)((int)*(int **)(iVar4 + 4) + 0xd);
    piVar6 = *(int **)(iVar4 + 4);
    while (cVar2 == '\0') {
      abi_call_thunk_FUN_1086f2f0((undefined4)(pSVar1), (int *)(piVar6[2]));
      piVar5 = (int *)*piVar6;
      thunk_FUN_1148a50e(piVar6,0x14);
      piVar6 = piVar5;
      cVar2 = *(char *)((int)piVar5 + 0xd);
    }
    *(int *)(iVar4 + 4) = iVar4;
    *(int *)iVar4 = iVar4;
    *(int *)(iVar4 + 8) = iVar4;
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar4 = *(int *)pSVar1;
    *(int *)pSVar1 = *(int *)(param_2 + 0x20);
    *(int *)(param_2 + 0x20) = iVar4;
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_2 + 0x24) = uVar3;
  }
  pSVar1 = param_1 + 0x28;
  if (pSVar1 != param_2 + 0x28) {
    iVar4 = *(int *)pSVar1;
    thunk_FUN_102a3ea0(pSVar1,*(undefined4 *)(iVar4 + 4));
    *(int *)(iVar4 + 4) = iVar4;
    *(int *)iVar4 = iVar4;
    *(int *)(iVar4 + 8) = iVar4;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    iVar4 = *(int *)pSVar1;
    *(int *)pSVar1 = *(int *)(param_2 + 0x28);
    *(int *)(param_2 + 0x28) = iVar4;
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
  }
  pSVar1 = param_1 + 0x34;
  param_1[0x30] = param_2[0x30];
  if (param_2 + 0x34 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x34);
    (pSVar1)->int_addref();
  }
  pSVar1 = param_1 + 0x38;
  if (param_2 + 0x38 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x38);
    (pSVar1)->int_addref();
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  return param_1;
}


// Reference entry 10f53120; body size 38 bytes.
#line 1 "ENTRY_10f53120"



SCStr * Recovered_10f53120::FUN_10f53120(SCStr *param_2)

{
  int param_1 = (int)this;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  default:
    (param_2)->int_allocRep("");
    return param_2;
  case 3:
    abi_call_thunk_FUN_101d9790((SCStr *)(param_2), (undefined4)(4), (undefined1 *)(0));
    return param_2;
  case 4:
    abi_call_thunk_FUN_101d9790((SCStr *)(param_2), (undefined4)(5), (undefined1 *)(0));
    return param_2;
  }
}


// Reference entry 10f531e0; body size 38 bytes.
#line 1 "ENTRY_10f531e0"



SCStr * Recovered_10f531e0::FUN_10f531e0(SCStr *param_2)

{
  int param_1 = (int)this;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  default:
    (param_2)->int_allocRep("");
    return param_2;
  case 1:
  case 3:
  case 5:
    abi_call_thunk_FUN_101d9790((SCStr *)(param_2), (undefined4)(4), (undefined1 *)(0));
    return param_2;
  case 2:
  case 4:
    abi_call_thunk_FUN_101d9790((SCStr *)(param_2), (undefined4)(5), (undefined1 *)(0));
    return param_2;
  }
}


// Reference entry 10fcb7d0; body size 72 bytes.
#line 1 "ENTRY_10fcb7d0"

SCStr * Recovered_10fcb7d0::FUN_10fcb7d0(SCStr *param_2)

{
  int * param_1 = (int *)this;
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = (**(code **)(*param_1 + 0xcc))();
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0xcc))();
    pcVar3 = (char *)abi_call_thunk_FUN_11456530((int)(uVar2));
    (param_2)->int_allocRep(pcVar3);
    return param_2;
  }
  (**(code **)(*param_1 + 0x9c))(param_2);
  return param_2;
}


// Reference entry 10ff1b10; body size 71 bytes.
#line 1 "ENTRY_10ff1b10"

SCStr * FUN_10ff1b10(SCStr *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = abi_call_thunk_FUN_10ff8d30();
  if ((cVar1 == '\0') && (param_2 == 2)) {
    (param_1)->int_allocRep("emptyfavorites");
    return param_1;
  }
  ((CallABI_thunk_FUN_104d8ba0 *)(param_1))->thunk_FUN_104d8ba0((SCStr *)(param_2), (int)(param_3));
  return param_1;
}


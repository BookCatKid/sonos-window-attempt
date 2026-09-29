// Mechanically recovered Ghidra C-like functions, compiled as x86 C++.
// Types below are width-preserving placeholders, pending semantic recovery.
using undefined1 = unsigned char;
using undefined2 = unsigned short;
using undefined4 = unsigned int;
using undefined8 = unsigned long long;
using undefined = unsigned int;
using uint = unsigned int;
using ulong = unsigned long;
using code = int(...);

struct SCStr {
    void *rep;
    bool operator==(const char *other);
    bool operator==(SCStr *other);
    bool operator!=(const char *other);
    bool operator!=(SCStr *other);
    bool beginsWith(const char *prefix);
    bool beginsWith(SCStr *prefix);
    bool contains(const char *needle, bool ignoreCase);
    bool contains(SCStr *needle, bool ignoreCase);
    unsigned int length();
    unsigned int hash();
    void int_addref();
    void int_release();
    void int_allocRep(char *text);
    void int_allocRep(char *text, unsigned int length);
};
extern int thunk_FUN_101f1c60(...);
extern int thunk_FUN_1020b9d0(...);
extern int thunk_FUN_1020ba30(...);
extern int thunk_FUN_10210700(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102c7300(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d63d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103eb580(...);
extern int thunk_FUN_104d8ba0(...);
extern int thunk_FUN_104d9d00(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_10534670(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_10604790(...);
extern int thunk_FUN_10604820(...);
extern int thunk_FUN_1086f2f0(...);
extern int thunk_FUN_10a56100(...);
extern int thunk_FUN_10ba14e0(...);
extern int thunk_FUN_10bc8b30(...);
extern int thunk_FUN_10bcd530(...);
extern int thunk_FUN_10bcd670(...);
extern int thunk_FUN_10bceec0(...);
extern int thunk_FUN_10bcf040(...);
extern int thunk_FUN_10bed100(...);
extern int thunk_FUN_10c3b810(...);
extern int thunk_FUN_10c3ba90(...);
extern int thunk_FUN_10c3bd40(...);
extern int thunk_FUN_10c61eb0(...);
extern int thunk_FUN_10c98c80(...);
extern int thunk_FUN_10ca7a80(...);
extern int thunk_FUN_10cefa80(...);
extern int thunk_FUN_10cefc20(...);
extern int thunk_FUN_10d38af0(...);
extern int thunk_FUN_10d5f7c0(...);
extern int thunk_FUN_10d89400(...);
extern int thunk_FUN_10da3dc0(...);
extern int thunk_FUN_10e19870(...);
extern int thunk_FUN_10e1eb40(...);
extern int thunk_FUN_10e23ff0(...);
extern int thunk_FUN_10e4a9e0(...);
extern int thunk_FUN_10e55410(...);
extern int thunk_FUN_10e697b0(...);
extern int thunk_FUN_10e79390(...);
extern int thunk_FUN_10e84bd0(...);
extern int thunk_FUN_10ef9890(...);
extern int thunk_FUN_10f68710(...);
extern int thunk_FUN_10f68af0(...);
extern int thunk_FUN_10f68e70(...);
extern int thunk_FUN_10fa0090(...);
extern int thunk_FUN_10fa7300(...);
extern int thunk_FUN_10fc5a10(...);
extern int thunk_FUN_10ff3290(...);
extern int thunk_FUN_10ff6240(...);
extern int thunk_FUN_10ff8d30(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1106f2b0(...);
extern int thunk_FUN_11206ea0(...);
extern int thunk_FUN_11207070(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_11456530(...);
extern int thunk_FUN_1148a50e(...);
// Reference entry 1061dcf0; body size 103 bytes.
#line 1 "ENTRY_1061dcf0"

undefined4 * __thiscall FUN_1061dcf0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlSessionCallback");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1067efd0; body size 103 bytes.
#line 1 "ENTRY_1067efd0"

undefined4 * __thiscall FUN_1067efd0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10680550; body size 103 bytes.
#line 1 "ENTRY_10680550"

undefined4 * __thiscall FUN_10680550(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlSessionCallback");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10687870; body size 103 bytes.
#line 1 "ENTRY_10687870"

undefined4 * __thiscall FUN_10687870(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlSessionCallback");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 106878f0; body size 103 bytes.
#line 1 "ENTRY_106878f0"

undefined4 * __thiscall FUN_106878f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlRequest");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1068b530; body size 103 bytes.
#line 1 "ENTRY_1068b530"

undefined4 * __thiscall FUN_1068b530(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1068b720; body size 103 bytes.
#line 1 "ENTRY_1068b720"

undefined4 * __thiscall FUN_1068b720(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIShare");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1068b7a0; body size 103 bytes.
#line 1 "ENTRY_1068b7a0"

undefined4 * __thiscall FUN_1068b7a0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIShareManager");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1068b990; body size 69 bytes.
#line 1 "ENTRY_1068b990"

void __thiscall FUN_1068b990(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10696b60; body size 103 bytes.
#line 1 "ENTRY_10696b60"

undefined4 * __thiscall FUN_10696b60(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 106a00d0; body size 103 bytes.
#line 1 "ENTRY_106a00d0"

undefined4 * __thiscall FUN_106a00d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 106a0150; body size 103 bytes.
#line 1 "ENTRY_106a0150"

undefined4 * __thiscall FUN_106a0150(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 106a01d0; body size 103 bytes.
#line 1 "ENTRY_106a01d0"

undefined4 * __thiscall FUN_106a01d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 106a0250; body size 103 bytes.
#line 1 "ENTRY_106a0250"

undefined4 * __thiscall FUN_106a0250(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 106a02d0; body size 103 bytes.
#line 1 "ENTRY_106a02d0"

undefined4 * __thiscall FUN_106a02d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 106a0350; body size 103 bytes.
#line 1 "ENTRY_106a0350"

undefined4 * __thiscall FUN_106a0350(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 106a1a50; body size 120 bytes.
#line 1 "ENTRY_106a1a50"

undefined4 __thiscall FUN_106a1a50(int *param_1,int *param_2)

{
  bool bVar1;
  SCStr *pSVar2;
  SCStr *pSVar3;
  
  bVar1 = ((SCStr *)(param_1 + 5))->operator==((SCStr *)(param_2 + 5));
  if ((bVar1) && (param_1[6] == param_2[6])) {
    pSVar2 = (SCStr *)(**(code **)(*param_2 + 0x1c))();
    pSVar3 = (SCStr *)(**(code **)(*param_1 + 0x1c))();
    bVar1 = (pSVar3)->operator==(pSVar2);
    if (bVar1) {
      pSVar2 = (SCStr *)(**(code **)(*param_2 + 0x20))();
      pSVar3 = (SCStr *)(**(code **)(*param_1 + 0x20))();
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


// Reference entry 106a1df0; body size 103 bytes.
#line 1 "ENTRY_106a1df0"

undefined4 * __thiscall FUN_106a1df0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIMusicServiceMenuItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 106ab7b0; body size 124 bytes.
#line 1 "ENTRY_106ab7b0"

void __thiscall FUN_106ab7b0(int param_1,int *param_2,SCStr *param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  param_4 = *(uint *)(param_1 + 0x18) & param_4;
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 4 + param_4 * 8);
  if (piVar1 == *(int **)(param_1 + 4)) {
    *param_2 = (int)*(int **)(param_1 + 4);
    param_2[1] = 0;
    return;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + param_4 * 8);
  bVar4 = (param_3)->operator==((SCStr *)(piVar1 + 2));
  while( true ) {
    if (bVar4) {
      iVar3 = *piVar1;
      param_2[1] = (int)piVar1;
      *param_2 = iVar3;
      return;
    }
    if (piVar1 == piVar2) break;
    piVar1 = (int *)piVar1[1];
    bVar4 = (param_3)->operator==((SCStr *)(piVar1 + 2));
  }
  *param_2 = (int)piVar1;
  param_2[1] = 0;
  return;
}


// Reference entry 106cc8e0; body size 103 bytes.
#line 1 "ENTRY_106cc8e0"

undefined4 * __thiscall FUN_106cc8e0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 106cc960; body size 125 bytes.
#line 1 "ENTRY_106cc960"

undefined4 * __thiscall FUN_106cc960(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    if (param_1 == (int *)0xc8) {
      param_1 = (int *)0x0;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 106d0d60; body size 103 bytes.
#line 1 "ENTRY_106d0d60"

undefined4 * __thiscall FUN_106d0d60(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 106d6d60; body size 103 bytes.
#line 1 "ENTRY_106d6d60"

undefined4 * __thiscall FUN_106d6d60(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 106d8430; body size 181 bytes.
#line 1 "ENTRY_106d8430"

SCStr * FUN_106d8430(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  default:
    (param_1)->int_allocRep("unknown");
    return param_1;
  case 1:
    (param_1)->int_allocRep("itself");
    return param_1;
  case 2:
    (param_1)->int_allocRep("platform");
    return param_1;
  case 3:
    (param_1)->int_allocRep("user tap");
    return param_1;
  case 4:
    (param_1)->int_allocRep("user swipe");
    return param_1;
  case 5:
    (param_1)->int_allocRep("alert dismiss pressed");
    return param_1;
  case 6:
    (param_1)->int_allocRep("alert dismiss with action pressed");
    return param_1;
  case 7:
    (param_1)->int_allocRep("test point");
    return param_1;
  }
}


// Reference entry 106d8580; body size 501 bytes.
#line 1 "ENTRY_106d8580"

SCStr * FUN_106d8580(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  default:
    (param_1)->int_allocRep("unknown");
    return param_1;
  case 1:
    (param_1)->int_allocRep("itself");
    return param_1;
  case 2:
    (param_1)->int_allocRep("debug menu");
    return param_1;
  case 3:
    (param_1)->int_allocRep("test point");
    return param_1;
  case 4:
    (param_1)->int_allocRep("deep link");
    return param_1;
  case 5:
    (param_1)->int_allocRep("Welcome view");
    return param_1;
  case 6:
    (param_1)->int_allocRep("Setup Engine");
    return param_1;
  case 7:
    (param_1)->int_allocRep("Setup Engine Bluetooth Only");
    return param_1;
  case 8:
    (param_1)->int_allocRep("AccountManager");
    return param_1;
  case 9:
    (param_1)->int_allocRep("Limited Access");
    return param_1;
  case 10:
    (param_1)->int_allocRep("Setup Home");
    return param_1;
  case 0xb:
    (param_1)->int_allocRep("Settings");
    return param_1;
  case 0xc:
    (param_1)->int_allocRep("System");
    return param_1;
  case 0xd:
    (param_1)->int_allocRep("Browse");
    return param_1;
  case 0xe:
    (param_1)->int_allocRep("Support");
    return param_1;
  case 0xf:
    (param_1)->int_allocRep("Wifi Config");
    return param_1;
  case 0x10:
    (param_1)->int_allocRep("voice settings");
    return param_1;
  case 0x11:
    (param_1)->int_allocRep("Product settings");
    return param_1;
  case 0x12:
    (param_1)->int_allocRep("AddProductWizard");
    return param_1;
  case 0x13:
    (param_1)->int_allocRep("AddVoiceServiceWizard");
    return param_1;
  case 0x14:
    (param_1)->int_allocRep("SonosVoiceOnboardingWizard");
    return param_1;
  case 0x15:
    (param_1)->int_allocRep("FixUnconfiguredWizard");
    return param_1;
  case 0x16:
    (param_1)->int_allocRep("System for Persistent Devices");
    return param_1;
  case 0x17:
    (param_1)->int_allocRep("Settings for Persistent Devices");
    return param_1;
  }
}


// Reference entry 106d8870; body size 96 bytes.
#line 1 "ENTRY_106d8870"

SCStr * FUN_106d8870(SCStr *param_1,int param_2)

{
  if (param_2 == 0) {
    (param_1)->int_allocRep("legacy");
    return param_1;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      (param_1)->int_allocRep("unknown");
      return param_1;
    }
    (param_1)->int_allocRep("modernFullScreen");
    return param_1;
  }
  (param_1)->int_allocRep("modern");
  return param_1;
}


// Reference entry 106f6bf0; body size 135 bytes.
#line 1 "ENTRY_106f6bf0"

undefined4 * __thiscall FUN_106f6bf0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIStringInput");
  if (((bVar1) || (bVar1 = (param_3)->operator==("SCIStringInputBase"), bVar1)) ||
     (bVar1 = (param_3)->operator==("SCIInput"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10708510; body size 103 bytes.
#line 1 "ENTRY_10708510"

undefined4 * __thiscall FUN_10708510(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 107cb7f0; body size 103 bytes.
#line 1 "ENTRY_107cb7f0"

undefined4 * __thiscall FUN_107cb7f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10965280; body size 256 bytes.
#line 1 "ENTRY_10965280"

SCStr * FUN_10965280(SCStr *param_1)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_10c61eb0();
  switch(uVar1) {
  case 0xf:
  case 0x14:
    (param_1)->int_allocRep("ZPS13");
    return param_1;
  default:
    (param_1)->int_allocRep("");
    return param_1;
  case 0x13:
    (param_1)->int_allocRep("ZPS17");
    return param_1;
  case 0x18:
  case 0x28:
  case 0x2d:
    (param_1)->int_allocRep("ZPS22");
    return param_1;
  case 0x1a:
    (param_1)->int_allocRep("ZPS24");
    return param_1;
  case 0x1d:
    (param_1)->int_allocRep("ZPS27");
    return param_1;
  case 0x23:
    (param_1)->int_allocRep("ZPS35");
    return param_1;
  case 0x29:
    (param_1)->int_allocRep("ZPS39");
    return param_1;
  case 0x2a:
    (param_1)->int_allocRep("ZPS40");
    return param_1;
  case 0x2b:
    (param_1)->int_allocRep("ZPS41");
    return param_1;
  case 0x2e:
    (param_1)->int_allocRep("ZPS44");
    return param_1;
  }
}


// Reference entry 10a08110; body size 103 bytes.
#line 1 "ENTRY_10a08110"

undefined4 * __thiscall FUN_10a08110(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlCommitLearnedIRCodes");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10a08190; body size 103 bytes.
#line 1 "ENTRY_10a08190"

undefined4 * __thiscall FUN_10a08190(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlIdentifyIRRemote");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10a08210; body size 103 bytes.
#line 1 "ENTRY_10a08210"

undefined4 * __thiscall FUN_10a08210(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlIsRemoteConfigured");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10a08290; body size 103 bytes.
#line 1 "ENTRY_10a08290"

undefined4 * __thiscall FUN_10a08290(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlLearnIRCode");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10a08310; body size 103 bytes.
#line 1 "ENTRY_10a08310"

undefined4 * __thiscall FUN_10a08310(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlCommitLearnedIRCodes");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10a08390; body size 103 bytes.
#line 1 "ENTRY_10a08390"

undefined4 * __thiscall FUN_10a08390(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlIdentifyIRRemote");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10a08410; body size 103 bytes.
#line 1 "ENTRY_10a08410"

undefined4 * __thiscall FUN_10a08410(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlIsRemoteConfigured");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10a08490; body size 103 bytes.
#line 1 "ENTRY_10a08490"

undefined4 * __thiscall FUN_10a08490(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlLearnIRCode");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10a08910; body size 69 bytes.
#line 1 "ENTRY_10a08910"

void __thiscall FUN_10a08910(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10a08970; body size 69 bytes.
#line 1 "ENTRY_10a08970"

void __thiscall FUN_10a08970(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10a089d0; body size 69 bytes.
#line 1 "ENTRY_10a089d0"

void __thiscall FUN_10a089d0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10a08a30; body size 69 bytes.
#line 1 "ENTRY_10a08a30"

void __thiscall FUN_10a08a30(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10a7cb70; body size 103 bytes.
#line 1 "ENTRY_10a7cb70"

undefined4 * __thiscall FUN_10a7cb70(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b721d0; body size 103 bytes.
#line 1 "ENTRY_10b721d0"

undefined4 * __thiscall FUN_10b721d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAVTransportEndDirectControlSession");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b72250; body size 103 bytes.
#line 1 "ENTRY_10b72250"

undefined4 * __thiscall FUN_10b72250(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAVTransportEndDirectControlSession");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b72810; body size 69 bytes.
#line 1 "ENTRY_10b72810"

void __thiscall FUN_10b72810(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10b7aaa0; body size 103 bytes.
#line 1 "ENTRY_10b7aaa0"

undefined4 * __thiscall FUN_10b7aaa0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlSessionCallback");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b7ab20; body size 103 bytes.
#line 1 "ENTRY_10b7ab20"

undefined4 * __thiscall FUN_10b7ab20(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b82e70; body size 103 bytes.
#line 1 "ENTRY_10b82e70"

undefined4 * __thiscall FUN_10b82e70(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseService");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b82ef0; body size 103 bytes.
#line 1 "ENTRY_10b82ef0"

undefined4 * __thiscall FUN_10b82ef0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIScrobblingService");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b82f70; body size 103 bytes.
#line 1 "ENTRY_10b82f70"

undefined4 * __thiscall FUN_10b82f70(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISimpleMessagingService");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b83350; body size 103 bytes.
#line 1 "ENTRY_10b83350"

undefined4 * __thiscall FUN_10b83350(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpReplaceAccount");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b83500; body size 103 bytes.
#line 1 "ENTRY_10b83500"

undefined4 * __thiscall FUN_10b83500(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpReplaceAccount");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b843b0; body size 69 bytes.
#line 1 "ENTRY_10b843b0"

void __thiscall FUN_10b843b0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10b8d5b0; body size 103 bytes.
#line 1 "ENTRY_10b8d5b0"

undefined4 * __thiscall FUN_10b8d5b0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDeviceDelete");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b8d630; body size 103 bytes.
#line 1 "ENTRY_10b8d630"

undefined4 * __thiscall FUN_10b8d630(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDeviceGet");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b8d6b0; body size 103 bytes.
#line 1 "ENTRY_10b8d6b0"

undefined4 * __thiscall FUN_10b8d6b0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDevicePost");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b8d730; body size 103 bytes.
#line 1 "ENTRY_10b8d730"

undefined4 * __thiscall FUN_10b8d730(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDevicePut");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b8d7b0; body size 103 bytes.
#line 1 "ENTRY_10b8d7b0"

undefined4 * __thiscall FUN_10b8d7b0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDeviceGet");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b8db70; body size 69 bytes.
#line 1 "ENTRY_10b8db70"

void __thiscall FUN_10b8db70(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10b8dbd0; body size 69 bytes.
#line 1 "ENTRY_10b8dbd0"

void __thiscall FUN_10b8dbd0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10b8dc30; body size 69 bytes.
#line 1 "ENTRY_10b8dc30"

void __thiscall FUN_10b8dc30(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10b8dc90; body size 69 bytes.
#line 1 "ENTRY_10b8dc90"

void __thiscall FUN_10b8dc90(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10b94ef0; body size 103 bytes.
#line 1 "ENTRY_10b94ef0"

undefined4 * __thiscall FUN_10b94ef0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b94f70; body size 103 bytes.
#line 1 "ENTRY_10b94f70"

undefined4 * __thiscall FUN_10b94f70(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b9f670; body size 103 bytes.
#line 1 "ENTRY_10b9f670"

undefined4 * __thiscall FUN_10b9f670(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIArtworkCache");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b9f6f0; body size 103 bytes.
#line 1 "ENTRY_10b9f6f0"

undefined4 * __thiscall FUN_10b9f6f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIArtworkCacheManager");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b9f770; body size 103 bytes.
#line 1 "ENTRY_10b9f770"

undefined4 * __thiscall FUN_10b9f770(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIArtworkData");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b9f7f0; body size 103 bytes.
#line 1 "ENTRY_10b9f7f0"

undefined4 * __thiscall FUN_10b9f7f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlSessionCallback");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b9f870; body size 103 bytes.
#line 1 "ENTRY_10b9f870"

undefined4 * __thiscall FUN_10b9f870(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCILogoArtworkCache");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10b9f8f0; body size 103 bytes.
#line 1 "ENTRY_10b9f8f0"

undefined4 * __thiscall FUN_10b9f8f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIArtworkData");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ba1160; body size 168 bytes.
#line 1 "ENTRY_10ba1160"

void __thiscall FUN_10ba1160(int param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char *pcStack_14;
  
  pcVar1 = (char *)(param_1 + 0x3c);
  pcStack_14 = (char *)0x0;
  if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
    pcStack_14 = pcVar1;
    (**(code **)**(undefined4 **)(param_1 + 0x38))();
    iVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 0xc))();
    pcStack_14 = (char *)extraout_ECX;
    if (iVar3 != 0) {
      pcStack_14 = (char *)param_2;
      thunk_FUN_102207b0(iVar3,param_1 + 8);
      return;
    }
  }
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    pcStack_14 = (char *)0x10ba11a7;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x38) + 8))();
    pcStack_14 = (char *)0x10ba11b0;
    cVar2 = thunk_FUN_11206ea0();
    if (cVar2 != '\0') {
      pcStack_14 = (char *)uVar4;
      uVar4 = thunk_FUN_11207070();
    }
    pcStack_14 = (char *)0x4002;
    thunk_FUN_1106a8d0(pcVar1,uVar4);
    pcStack_14 = (char *)extraout_ECX_00;
  }
  if (*(char *)(param_1 + 0xc058) != '\0') {
    pcStack_14 = "An SCUrlGetRequest is already running.";
    thunk_FUN_112af4e0("RAsyncAAGetIOOp",2);
    return;
  }
  ((SCStr *)&pcStack_14)->int_allocRep(pcVar1);
  thunk_FUN_10ba14e0();
  return;
}


// Reference entry 10bb31d0; body size 103 bytes.
#line 1 "ENTRY_10bb31d0"

undefined4 * __thiscall FUN_10bb31d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bb3250; body size 103 bytes.
#line 1 "ENTRY_10bb3250"

undefined4 * __thiscall FUN_10bb3250(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAlarmManager");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bb4610; body size 93 bytes.
#line 1 "ENTRY_10bb4610"

void FUN_10bb4610(int param_1)

{
  char cVar1;
  undefined4 uStack_14;
  char *pcStack_10;
  int iStack_c;
  
  if (param_1 != 0) {
    iStack_c = 0;
    pcStack_10 = (char *)param_1;
    uStack_14 = 0x10bb4627;
    cVar1 = thunk_FUN_103d61d0();
    if (cVar1 == '\0') {
      uStack_14 = 2;
      pcStack_10 = "Re-add Event Sink %p";
    }
    else {
      uStack_14 = 3;
      pcStack_10 = "Add Event Sink %p.";
    }
    iStack_c = param_1;
    thunk_FUN_112af4e0("SCAlarmManager");
    iStack_c = param_1;
    ((SCStr *)&uStack_14)->int_allocRep("SCIAlarmManager:onAlarmsChanged");
    thunk_FUN_103d63d0();
  }
  return;
}


// Reference entry 10bb7a80; body size 215 bytes.
#line 1 "ENTRY_10bb7a80"

SCStr * FUN_10bb7a80(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    thunk_FUN_10534670(param_1,0);
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


// Reference entry 10bb7bc0; body size 150 bytes.
#line 1 "ENTRY_10bb7bc0"

SCStr * FUN_10bb7bc0(SCStr *param_1,int param_2)

{
  switch(param_2) {
  case 1:
    (param_1)->int_allocRep("timeout");
    return param_1;
  case 2:
    (param_1)->int_allocRep("setupNotAllowed");
    return param_1;
  case 3:
    (param_1)->int_allocRep("success");
    return param_1;
  case -1:
  case 0:
    break;
  default:
    (param_1)->int_allocRep("unknown");
    return param_1;
  }
  if (param_2 == 0) {
    (param_1)->int_allocRep("default");
    return param_1;
  }
  (param_1)->int_allocRep("unknown");
  return param_1;
}


// Reference entry 10bbb9f0; body size 157 bytes.
#line 1 "ENTRY_10bbb9f0"

SCStr * FUN_10bbb9f0(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    (param_1)->int_allocRep("Init");
    return param_1;
  case 1:
    (param_1)->int_allocRep("Error");
    return param_1;
  case 2:
    (param_1)->int_allocRep("Running");
    return param_1;
  case 3:
    (param_1)->int_allocRep("Suspended");
    return param_1;
  case 4:
    (param_1)->int_allocRep("RebindingSuspended");
    return param_1;
  case 5:
    (param_1)->int_allocRep("RebindingRunning");
    return param_1;
  default:
    (param_1)->int_allocRep("");
    return param_1;
  }
}


// Reference entry 10bbbae0; body size 157 bytes.
#line 1 "ENTRY_10bbbae0"

SCStr * FUN_10bbbae0(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    (param_1)->int_allocRep("Unknown");
    return param_1;
  case 1:
    (param_1)->int_allocRep("None");
    return param_1;
  case 2:
    (param_1)->int_allocRep("ConnectedUnknown");
    return param_1;
  case 3:
    (param_1)->int_allocRep("Cellular");
    return param_1;
  case 4:
    (param_1)->int_allocRep("WiFi");
    return param_1;
  case 5:
    (param_1)->int_allocRep("Wired");
    return param_1;
  default:
    (param_1)->int_allocRep("");
    return param_1;
  }
}


// Reference entry 10bbc630; body size 103 bytes.
#line 1 "ENTRY_10bbc630"

undefined4 * __thiscall FUN_10bbc630(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCINetworkManagement");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bbed40; body size 103 bytes.
#line 1 "ENTRY_10bbed40"

undefined4 * __thiscall FUN_10bbed40(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIChirpListener");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bbf370; body size 103 bytes.
#line 1 "ENTRY_10bbf370"

undefined4 * __thiscall FUN_10bbf370(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bc4d60; body size 103 bytes.
#line 1 "ENTRY_10bc4d60"

undefined4 * __thiscall FUN_10bc4d60(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCINfcListener");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
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
      (**(code **)(*piVar1 + 8))();
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


// Reference entry 10bc90f0; body size 103 bytes.
#line 1 "ENTRY_10bc90f0"

undefined4 * __thiscall FUN_10bc90f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bc9170; body size 103 bytes.
#line 1 "ENTRY_10bc9170"

undefined4 * __thiscall FUN_10bc9170(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBTClassicConnectionCallback");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bc91f0; body size 103 bytes.
#line 1 "ENTRY_10bc91f0"

undefined4 * __thiscall FUN_10bc91f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBTClassicConnectionManager");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bcb450; body size 103 bytes.
#line 1 "ENTRY_10bcb450"

undefined4 * __thiscall FUN_10bcb450(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bd77f0; body size 375 bytes.
#line 1 "ENTRY_10bd77f0"

undefined1 * __thiscall FUN_10bd77f0(undefined1 *param_1,undefined1 *param_2)

{
  SCStr *pSVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  
  pSVar1 = (SCStr *)(param_1 + 4);
  *param_1 = *param_2;
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
  piVar2 = (int *)(param_1 + 0xc);
  if (piVar2 != (int *)(param_2 + 0xc)) {
    iVar4 = *piVar2;
    thunk_FUN_10bcf040(piVar2,*(undefined4 *)(iVar4 + 4));
    *(int *)(iVar4 + 4) = iVar4;
    *(int *)iVar4 = iVar4;
    *(int *)(iVar4 + 8) = iVar4;
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar9 = thunk_FUN_10bcd670(*(undefined4 *)(*(int *)(param_2 + 0xc) + 4),*piVar2,param_2);
    *(undefined4 *)(*piVar2 + 4) = uVar9;
    piVar5 = (int *)*piVar2;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    piVar6 = (int *)piVar5[1];
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      cVar3 = *(char *)(*piVar6 + 0xd);
      piVar8 = (int *)*piVar6;
      while (cVar3 == '\0') {
        cVar3 = *(char *)(*piVar8 + 0xd);
        piVar6 = piVar8;
        piVar8 = (int *)*piVar8;
      }
      *piVar5 = (int)piVar6;
      iVar4 = *(int *)(*piVar2 + 4);
      iVar7 = *(int *)(iVar4 + 8);
      cVar3 = *(char *)(iVar7 + 0xd);
      while (cVar3 == '\0') {
        cVar3 = *(char *)(*(int *)(iVar7 + 8) + 0xd);
        iVar4 = iVar7;
        iVar7 = *(int *)(iVar7 + 8);
      }
      *(int *)(*piVar2 + 8) = iVar4;
    }
    else {
      *piVar5 = (int)piVar5;
      *(int *)(*piVar2 + 8) = *piVar2;
    }
  }
  piVar2 = (int *)(param_1 + 0x14);
  if (piVar2 != (int *)(param_2 + 0x14)) {
    iVar4 = *piVar2;
    thunk_FUN_10bceec0(piVar2,*(undefined4 *)(iVar4 + 4));
    *(int *)(iVar4 + 4) = iVar4;
    *(int *)iVar4 = iVar4;
    *(int *)(iVar4 + 8) = iVar4;
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar9 = thunk_FUN_10bcd530(*(undefined4 *)(*(int *)(param_2 + 0x14) + 4),*piVar2,param_2);
    *(undefined4 *)(*piVar2 + 4) = uVar9;
    piVar5 = (int *)*piVar2;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    piVar6 = (int *)piVar5[1];
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      cVar3 = *(char *)(*piVar6 + 0xd);
      piVar8 = (int *)*piVar6;
      while (cVar3 == '\0') {
        cVar3 = *(char *)(*piVar8 + 0xd);
        piVar6 = piVar8;
        piVar8 = (int *)*piVar8;
      }
      *piVar5 = (int)piVar6;
      iVar4 = *(int *)(*piVar2 + 4);
      iVar7 = *(int *)(iVar4 + 8);
      cVar3 = *(char *)(iVar7 + 0xd);
      while (cVar3 == '\0') {
        cVar3 = *(char *)(*(int *)(iVar7 + 8) + 0xd);
        iVar4 = iVar7;
        iVar7 = *(int *)(iVar7 + 8);
      }
      *(int *)(*piVar2 + 8) = iVar4;
      return param_1;
    }
    *piVar5 = (int)piVar5;
    *(int *)(*piVar2 + 8) = *piVar2;
  }
  return param_1;
}


// Reference entry 10beca90; body size 96 bytes.
#line 1 "ENTRY_10beca90"

SCStr * FUN_10beca90(SCStr *param_1,int param_2)

{
  if (param_2 == 1) {
    (param_1)->int_allocRep("Alexa");
    return param_1;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      (param_1)->int_allocRep("");
      return param_1;
    }
    (param_1)->int_allocRep("Hey Sonos");
    return param_1;
  }
  (param_1)->int_allocRep("Hey Google");
  return param_1;
}


// Reference entry 10bf1320; body size 103 bytes.
#line 1 "ENTRY_10bf1320"

undefined4 * __thiscall FUN_10bf1320(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlSessionCallback");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bf13a0; body size 150 bytes.
#line 1 "ENTRY_10bf13a0"

undefined4 * __thiscall FUN_10bf13a0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIUrlConnection");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCICancellable");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 2));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10bf2780; body size 103 bytes.
#line 1 "ENTRY_10bf2780"

undefined4 * __thiscall FUN_10bf2780(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpFactory");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bf3040; body size 103 bytes.
#line 1 "ENTRY_10bf3040"

undefined4 * __thiscall FUN_10bf3040(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIRoomResource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bf3530; body size 103 bytes.
#line 1 "ENTRY_10bf3530"

undefined4 * __thiscall FUN_10bf3530(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAudioInputResource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bf92f0; body size 103 bytes.
#line 1 "ENTRY_10bf92f0"

undefined4 * __thiscall FUN_10bf92f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAppRatingManager");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10bfdb00; body size 103 bytes.
#line 1 "ENTRY_10bfdb00"

undefined4 * __thiscall FUN_10bfdb00(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c00c70; body size 117 bytes.
#line 1 "ENTRY_10c00c70"

undefined4 * __thiscall FUN_10c00c70(int param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIAudioData");
  if (bVar1) {
    piVar2 = (int *)(-(uint)(param_1 != 0) & param_1 + 0x24U);
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
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
      (**(code **)(*piVar2 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c00d10; body size 103 bytes.
#line 1 "ENTRY_10c00d10"

undefined4 * __thiscall FUN_10c00d10(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEnumerator");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c00d90; body size 103 bytes.
#line 1 "ENTRY_10c00d90"

undefined4 * __thiscall FUN_10c00d90(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIMusicServer");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c00e10; body size 103 bytes.
#line 1 "ENTRY_10c00e10"

undefined4 * __thiscall FUN_10c00e10(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIData");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c03950; body size 103 bytes.
#line 1 "ENTRY_10c03950"

undefined4 * __thiscall FUN_10c03950(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c039d0; body size 103 bytes.
#line 1 "ENTRY_10c039d0"

undefined4 * __thiscall FUN_10c039d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIServiceAppInteropManager");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c15630; body size 103 bytes.
#line 1 "ENTRY_10c15630"

undefined4 * __thiscall FUN_10c15630(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIZoneGroupMgr");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c20ab0; body size 77 bytes.
#line 1 "ENTRY_10c20ab0"

void __thiscall FUN_10c20ab0(int *param_1,undefined4 param_2)

{
  char cVar1;
  SCStr aSStack_10 [4];
  int *piStack_c;
  undefined4 uStack_8;
  
  uStack_8 = param_2;
  piStack_c = (int *)0x10c20abc;
  thunk_FUN_104d9d00();
  uStack_8 = 0x10c20ac8;
  cVar1 = (**(code **)(*param_1 + 0x90))();
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

undefined4 * __thiscall FUN_10c20b20(int *param_1,undefined4 *param_2,SCStr *param_3)

{
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
          (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10c20c30; body size 150 bytes.
#line 1 "ENTRY_10c20c30"

undefined4 * __thiscall FUN_10c20c30(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseMetadata");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0xe));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10c27280; body size 103 bytes.
#line 1 "ENTRY_10c27280"

undefined4 * __thiscall FUN_10c27280(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCICachedHousehold");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c2a670; body size 103 bytes.
#line 1 "ENTRY_10c2a670"

undefined4 * __thiscall FUN_10c2a670(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIConnectedPartnersManager");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c32770; body size 103 bytes.
#line 1 "ENTRY_10c32770"

undefined4 * __thiscall FUN_10c32770(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c38230; body size 103 bytes.
#line 1 "ENTRY_10c38230"

undefined4 * __thiscall FUN_10c38230(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c3b270; body size 103 bytes.
#line 1 "ENTRY_10c3b270"

undefined4 * __thiscall FUN_10c3b270(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c3b7b0; body size 72 bytes.
#line 1 "ENTRY_10c3b7b0"

void __thiscall FUN_10c3b7b0(int param_1,SCStr *param_2,undefined4 param_3)

{
  bool bVar1;
  
  (**(code **)(**(int **)(param_1 + 0x34) + 0x40))(param_2,param_3);
  bVar1 = (param_2)->operator==("adjustForDST");
  if (bVar1) {
    thunk_FUN_10c3ba90();
  }
  bVar1 = (param_2)->operator==("useInternetTime");
  if (bVar1) {
    thunk_FUN_10c3bd40();
  }
  return;
}


// Reference entry 10c3ba30; body size 77 bytes.
#line 1 "ENTRY_10c3ba30"

void __thiscall FUN_10c3ba30(int param_1,SCStr *param_2,undefined4 param_3)

{
  bool bVar1;
  
  (**(code **)(**(int **)(param_1 + 0x34) + 0x1c))(param_2,param_3);
  bVar1 = (param_2)->operator==("timeZone");
  if (bVar1) {
    thunk_FUN_10c3ba90();
    return;
  }
  bVar1 = (param_2)->operator==("dateTime");
  if (bVar1) {
    thunk_FUN_10c3b810();
  }
  return;
}


// Reference entry 10c478e0; body size 103 bytes.
#line 1 "ENTRY_10c478e0"

undefined4 * __thiscall FUN_10c478e0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c4cf90; body size 103 bytes.
#line 1 "ENTRY_10c4cf90"

undefined4 * __thiscall FUN_10c4cf90(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c4d010; body size 103 bytes.
#line 1 "ENTRY_10c4d010"

undefined4 * __thiscall FUN_10c4d010(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c4d0f0; body size 69 bytes.
#line 1 "ENTRY_10c4d0f0"

void __thiscall FUN_10c4d0f0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10c53000; body size 103 bytes.
#line 1 "ENTRY_10c53000"

undefined4 * __thiscall FUN_10c53000(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIDeviceAutoplay");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c531a0; body size 103 bytes.
#line 1 "ENTRY_10c531a0"

undefined4 * __thiscall FUN_10c531a0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDevicePropertiesGetAutoplayLinkedZones");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c53220; body size 103 bytes.
#line 1 "ENTRY_10c53220"

undefined4 * __thiscall FUN_10c53220(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDevicePropertiesGetAutoplayRoomUUID");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c532a0; body size 103 bytes.
#line 1 "ENTRY_10c532a0"

undefined4 * __thiscall FUN_10c532a0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDevicePropertiesGetAutoplayVolume");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c53320; body size 103 bytes.
#line 1 "ENTRY_10c53320"

undefined4 * __thiscall FUN_10c53320(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDevicePropertiesGetUseAutoplayVolume");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c533a0; body size 103 bytes.
#line 1 "ENTRY_10c533a0"

undefined4 * __thiscall FUN_10c533a0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDevicePropertiesSetUseAutoplayVolume");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c53550; body size 103 bytes.
#line 1 "ENTRY_10c53550"

undefined4 * __thiscall FUN_10c53550(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDevicePropertiesGetAutoplayLinkedZones");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c535d0; body size 103 bytes.
#line 1 "ENTRY_10c535d0"

undefined4 * __thiscall FUN_10c535d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDevicePropertiesGetAutoplayRoomUUID");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c53650; body size 103 bytes.
#line 1 "ENTRY_10c53650"

undefined4 * __thiscall FUN_10c53650(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDevicePropertiesGetAutoplayVolume");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c536d0; body size 103 bytes.
#line 1 "ENTRY_10c536d0"

undefined4 * __thiscall FUN_10c536d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDevicePropertiesGetUseAutoplayVolume");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c53750; body size 103 bytes.
#line 1 "ENTRY_10c53750"

undefined4 * __thiscall FUN_10c53750(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpDevicePropertiesSetUseAutoplayVolume");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c53d50; body size 69 bytes.
#line 1 "ENTRY_10c53d50"

void __thiscall FUN_10c53d50(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10c53db0; body size 69 bytes.
#line 1 "ENTRY_10c53db0"

void __thiscall FUN_10c53db0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10c53e10; body size 69 bytes.
#line 1 "ENTRY_10c53e10"

void __thiscall FUN_10c53e10(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10c53e70; body size 69 bytes.
#line 1 "ENTRY_10c53e70"

void __thiscall FUN_10c53e70(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10c53ed0; body size 69 bytes.
#line 1 "ENTRY_10c53ed0"

void __thiscall FUN_10c53ed0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10c58260; body size 103 bytes.
#line 1 "ENTRY_10c58260"

undefined4 * __thiscall FUN_10c58260(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIDeviceLineIn");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c58400; body size 103 bytes.
#line 1 "ENTRY_10c58400"

undefined4 * __thiscall FUN_10c58400(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAudioInGetAudioInputAttributes");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c58480; body size 103 bytes.
#line 1 "ENTRY_10c58480"

undefined4 * __thiscall FUN_10c58480(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAudioInGetLineInLevel");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c58500; body size 103 bytes.
#line 1 "ENTRY_10c58500"

undefined4 * __thiscall FUN_10c58500(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAudioInSetAudioInputAttributes");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c58580; body size 103 bytes.
#line 1 "ENTRY_10c58580"

undefined4 * __thiscall FUN_10c58580(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAudioInSetLineInLevel");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c58730; body size 103 bytes.
#line 1 "ENTRY_10c58730"

undefined4 * __thiscall FUN_10c58730(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAudioInGetAudioInputAttributes");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c587b0; body size 103 bytes.
#line 1 "ENTRY_10c587b0"

undefined4 * __thiscall FUN_10c587b0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAudioInGetLineInLevel");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c58830; body size 103 bytes.
#line 1 "ENTRY_10c58830"

undefined4 * __thiscall FUN_10c58830(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAudioInSetAudioInputAttributes");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c588b0; body size 103 bytes.
#line 1 "ENTRY_10c588b0"

undefined4 * __thiscall FUN_10c588b0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAudioInSetLineInLevel");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c58de0; body size 69 bytes.
#line 1 "ENTRY_10c58de0"

void __thiscall FUN_10c58de0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10c58e40; body size 69 bytes.
#line 1 "ENTRY_10c58e40"

void __thiscall FUN_10c58e40(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10c58ea0; body size 69 bytes.
#line 1 "ENTRY_10c58ea0"

void __thiscall FUN_10c58ea0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10c58f00; body size 69 bytes.
#line 1 "ENTRY_10c58f00"

void __thiscall FUN_10c58f00(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10c5a900; body size 103 bytes.
#line 1 "ENTRY_10c5a900"

undefined4 * __thiscall FUN_10c5a900(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIDeviceLineOut");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c5aaa0; body size 103 bytes.
#line 1 "ENTRY_10c5aaa0"

undefined4 * __thiscall FUN_10c5aaa0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpRenderingControlGetSupportsOutputFixed");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c5ac50; body size 103 bytes.
#line 1 "ENTRY_10c5ac50"

undefined4 * __thiscall FUN_10c5ac50(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpRenderingControlGetSupportsOutputFixed");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c5af10; body size 69 bytes.
#line 1 "ENTRY_10c5af10"

void __thiscall FUN_10c5af10(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10c5c170; body size 605 bytes.
#line 1 "ENTRY_10c5c170"

void __thiscall FUN_10c5c170(int param_1,undefined4 param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->beginsWith("SCIDeviceMusicEqualization");
  if (!bVar1) {
    return;
  }
  bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onFixedOutput");
  if (bVar1) {
    (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
    return;
  }
  bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onBalanceLevelChanged");
  if (bVar1) {
    (**(code **)(**(int **)(param_1 + 8) + 8))(param_2);
    return;
  }
  bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onTrebleLevelChanged");
  if (bVar1) {
    (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
    return;
  }
  bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onBassLevelChanged");
  if (bVar1) {
    (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_2);
    return;
  }
  bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onLoudnessChanged");
  if (bVar1) {
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(param_2);
    return;
  }
  bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onSubGainChanged");
  if (bVar1) {
    (**(code **)(**(int **)(param_1 + 8) + 0x18))(param_2);
    return;
  }
  bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onSubPolarityChanged");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onSubEnabledChanged");
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x1c))(param_2);
      return;
    }
    bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onCrossoverChanged");
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x24))(param_2);
      return;
    }
    bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onTVDialogLevelChanged");
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x28))(param_2);
      return;
    }
    bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onTVAudioDelayChanged");
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x2c))(param_2);
      return;
    }
    bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onSurroundLevelChanged");
    if (!bVar1) {
      bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onMusicSurroundLevelChanged");
      if (bVar1) {
        (**(code **)(**(int **)(param_1 + 8) + 0x34))(param_2);
        return;
      }
      bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onSurroundEnabledChanged");
      if (!bVar1) {
        bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onNightModeChanged");
        if (bVar1) {
          (**(code **)(**(int **)(param_1 + 8) + 0x3c))(param_2);
          return;
        }
        bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onSurroundModeChanged");
        if (bVar1) {
          (**(code **)(**(int **)(param_1 + 8) + 0x40))(param_2);
          return;
        }
        bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onLeftRearDelayChanged");
        if (bVar1) {
          (**(code **)(**(int **)(param_1 + 8) + 0x44))(param_2);
          return;
        }
        bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization:onRightRearDelayChanged");
        if (!bVar1) {
          return;
        }
        (**(code **)(**(int **)(param_1 + 8) + 0x48))(param_2);
        return;
      }
    }
    (**(code **)(**(int **)(param_1 + 8) + 0x30))(param_2);
    return;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x20))(param_2);
  return;
}


// Reference entry 10c5cd30; body size 103 bytes.
#line 1 "ENTRY_10c5cd30"

undefined4 * __thiscall FUN_10c5cd30(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIDeviceMusicEqualization");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c5d000; body size 103 bytes.
#line 1 "ENTRY_10c5d000"

undefined4 * __thiscall FUN_10c5d000(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c67b50; body size 119 bytes.
#line 1 "ENTRY_10c67b50"

undefined4 * __thiscall FUN_10c67b50(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    if (param_1 == (int *)0x24) {
      param_1 = (int *)0x0;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c6c1c0; body size 103 bytes.
#line 1 "ENTRY_10c6c1c0"

undefined4 * __thiscall FUN_10c6c1c0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c6e370; body size 117 bytes.
#line 1 "ENTRY_10c6e370"

undefined4 * __thiscall FUN_10c6e370(int param_1,undefined4 *param_2,SCStr *param_3)

{
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
      (**(code **)(*piVar2 + 4))();
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
      (**(code **)(*piVar2 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c6edd0; body size 123 bytes.
#line 1 "ENTRY_10c6edd0"

undefined4 * __thiscall FUN_10c6edd0(int param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIWifiListener");
  if (bVar1) {
    piVar2 = (int *)(-(uint)(param_1 != 0) & param_1 + 0xe0U);
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
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
      (**(code **)(*piVar2 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c7fb20; body size 123 bytes.
#line 1 "ENTRY_10c7fb20"

undefined4 * __thiscall FUN_10c7fb20(int param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIMdnsListener");
  if (bVar1) {
    piVar2 = (int *)(-(uint)(param_1 != 0) & param_1 + 0x170U);
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
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
      (**(code **)(*piVar2 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c83420; body size 103 bytes.
#line 1 "ENTRY_10c83420"

undefined4 * __thiscall FUN_10c83420(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c834a0; body size 103 bytes.
#line 1 "ENTRY_10c834a0"

undefined4 * __thiscall FUN_10c834a0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c83520; body size 69 bytes.
#line 1 "ENTRY_10c83520"

void __thiscall FUN_10c83520(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10c83580; body size 69 bytes.
#line 1 "ENTRY_10c83580"

void __thiscall FUN_10c83580(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10c845b0; body size 103 bytes.
#line 1 "ENTRY_10c845b0"

undefined4 * __thiscall FUN_10c845b0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIZoneGroup");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10c9bd90; body size 103 bytes.
#line 1 "ENTRY_10c9bd90"

undefined4 * __thiscall FUN_10c9bd90(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cb3240; body size 107 bytes.
#line 1 "ENTRY_10cb3240"

void __fastcall FUN_10cb3240(int param_1)

{
  int extraout_ECX;
  char *pcVar1;
  int iStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10cb32a6;
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
      return;
    }
    iStack_c = 0x10cb327e;
    thunk_FUN_10ca7a80();
    pcVar1 = "subwizard_completed";
    iStack_c = extraout_ECX;
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10cb326d;
      (**(code **)(**(int **)(param_1 + 4) + 0xac))();
      return;
    }
    pcVar1 = "back_from_subwizard";
    iStack_c = param_1;
  }
  ((SCStr *)&iStack_c)->int_allocRep(pcVar1);
  (**(code **)(**(int **)(param_1 + 4) + 0x8c))();
  return;
}


// Reference entry 10cb38c0; body size 103 bytes.
#line 1 "ENTRY_10cb38c0"

undefined4 * __thiscall FUN_10cb38c0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cbc5b0; body size 103 bytes.
#line 1 "ENTRY_10cbc5b0"

undefined4 * __thiscall FUN_10cbc5b0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIDisplayType");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cc0050; body size 103 bytes.
#line 1 "ENTRY_10cc0050"

undefined4 * __thiscall FUN_10cc0050(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlSessionCallback");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cc34d0; body size 103 bytes.
#line 1 "ENTRY_10cc34d0"

undefined4 * __thiscall FUN_10cc34d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpGetAboutSonosString");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cc3650; body size 69 bytes.
#line 1 "ENTRY_10cc3650"

void __thiscall FUN_10cc3650(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10cd87f0; body size 103 bytes.
#line 1 "ENTRY_10cd87f0"

undefined4 * __thiscall FUN_10cd87f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cd8870; body size 103 bytes.
#line 1 "ENTRY_10cd8870"

undefined4 * __thiscall FUN_10cd8870(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cd88f0; body size 103 bytes.
#line 1 "ENTRY_10cd88f0"

undefined4 * __thiscall FUN_10cd88f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cd8970; body size 103 bytes.
#line 1 "ENTRY_10cd8970"

undefined4 * __thiscall FUN_10cd8970(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cd89f0; body size 103 bytes.
#line 1 "ENTRY_10cd89f0"

undefined4 * __thiscall FUN_10cd89f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cd8a70; body size 103 bytes.
#line 1 "ENTRY_10cd8a70"

undefined4 * __thiscall FUN_10cd8a70(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cd8af0; body size 103 bytes.
#line 1 "ENTRY_10cd8af0"

undefined4 * __thiscall FUN_10cd8af0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cd8b70; body size 103 bytes.
#line 1 "ENTRY_10cd8b70"

undefined4 * __thiscall FUN_10cd8b70(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cd8bf0; body size 103 bytes.
#line 1 "ENTRY_10cd8bf0"

undefined4 * __thiscall FUN_10cd8bf0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cd8c70; body size 69 bytes.
#line 1 "ENTRY_10cd8c70"

void __thiscall FUN_10cd8c70(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10cd8cd0; body size 69 bytes.
#line 1 "ENTRY_10cd8cd0"

void __thiscall FUN_10cd8cd0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10cd8d30; body size 69 bytes.
#line 1 "ENTRY_10cd8d30"

void __thiscall FUN_10cd8d30(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10cd8d90; body size 69 bytes.
#line 1 "ENTRY_10cd8d90"

void __thiscall FUN_10cd8d90(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10cd8df0; body size 69 bytes.
#line 1 "ENTRY_10cd8df0"

void __thiscall FUN_10cd8df0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10cd8e50; body size 69 bytes.
#line 1 "ENTRY_10cd8e50"

void __thiscall FUN_10cd8e50(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10cd8eb0; body size 69 bytes.
#line 1 "ENTRY_10cd8eb0"

void __thiscall FUN_10cd8eb0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10cd8f10; body size 69 bytes.
#line 1 "ENTRY_10cd8f10"

void __thiscall FUN_10cd8f10(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10cd8f70; body size 69 bytes.
#line 1 "ENTRY_10cd8f70"

void __thiscall FUN_10cd8f70(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10cdea40; body size 103 bytes.
#line 1 "ENTRY_10cdea40"

undefined4 * __thiscall FUN_10cdea40(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAlarmClockGetDailyIndexRefreshTime");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cdeac0; body size 103 bytes.
#line 1 "ENTRY_10cdeac0"

undefined4 * __thiscall FUN_10cdeac0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAlarmClockSetDailyIndexRefreshTime");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cdeb40; body size 103 bytes.
#line 1 "ENTRY_10cdeb40"

undefined4 * __thiscall FUN_10cdeb40(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIIndexManager");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cdebc0; body size 103 bytes.
#line 1 "ENTRY_10cdebc0"

undefined4 * __thiscall FUN_10cdebc0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAlarmClockGetDailyIndexRefreshTime");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cdec40; body size 103 bytes.
#line 1 "ENTRY_10cdec40"

undefined4 * __thiscall FUN_10cdec40(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAlarmClockSetDailyIndexRefreshTime");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cdef40; body size 69 bytes.
#line 1 "ENTRY_10cdef40"

void __thiscall FUN_10cdef40(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10cdefa0; body size 69 bytes.
#line 1 "ENTRY_10cdefa0"

void __thiscall FUN_10cdefa0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10ce0a20; body size 103 bytes.
#line 1 "ENTRY_10ce0a20"

undefined4 * __thiscall FUN_10ce0a20(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ce1e20; body size 103 bytes.
#line 1 "ENTRY_10ce1e20"

undefined4 * __thiscall FUN_10ce1e20(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpGetUsageDataShareOption");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ce1ea0; body size 119 bytes.
#line 1 "ENTRY_10ce1ea0"

undefined4 * __thiscall FUN_10ce1ea0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpSystemPropertyGetString");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIOp"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10ce1f40; body size 119 bytes.
#line 1 "ENTRY_10ce1f40"

undefined4 * __thiscall FUN_10ce1f40(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpGetUsageDataShareOption");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIOp"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10ce2180; body size 69 bytes.
#line 1 "ENTRY_10ce2180"

void __thiscall FUN_10ce2180(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10ce2a80; body size 119 bytes.
#line 1 "ENTRY_10ce2a80"

undefined4 * __thiscall FUN_10ce2a80(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpSystemPropertyGetRDM");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIOp"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10ce4cb0; body size 103 bytes.
#line 1 "ENTRY_10ce4cb0"

undefined4 * __thiscall FUN_10ce4cb0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ce5d10; body size 124 bytes.
#line 1 "ENTRY_10ce5d10"

void __thiscall FUN_10ce5d10(int param_1,int *param_2,SCStr *param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  param_4 = *(uint *)(param_1 + 0x18) & param_4;
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 4 + param_4 * 8);
  if (piVar1 == *(int **)(param_1 + 4)) {
    *param_2 = (int)*(int **)(param_1 + 4);
    param_2[1] = 0;
    return;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + param_4 * 8);
  bVar4 = (param_3)->operator==((SCStr *)(piVar1 + 2));
  while( true ) {
    if (bVar4) {
      iVar3 = *piVar1;
      param_2[1] = (int)piVar1;
      *param_2 = iVar3;
      return;
    }
    if (piVar1 == piVar2) break;
    piVar1 = (int *)piVar1[1];
    bVar4 = (param_3)->operator==((SCStr *)(piVar1 + 2));
  }
  *param_2 = (int)piVar1;
  param_2[1] = 0;
  return;
}


// Reference entry 10cebbc0; body size 150 bytes.
#line 1 "ENTRY_10cebbc0"

undefined4 * __thiscall FUN_10cebbc0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIAreaManager");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIOpCB");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 2));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10cf0980; body size 103 bytes.
#line 1 "ENTRY_10cf0980"

undefined4 * __thiscall FUN_10cf0980(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cf3680; body size 103 bytes.
#line 1 "ENTRY_10cf3680"

undefined4 * __thiscall FUN_10cf3680(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cf3700; body size 103 bytes.
#line 1 "ENTRY_10cf3700"

undefined4 * __thiscall FUN_10cf3700(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cf52a0; body size 103 bytes.
#line 1 "ENTRY_10cf52a0"

undefined4 * __thiscall FUN_10cf52a0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cf63d0; body size 103 bytes.
#line 1 "ENTRY_10cf63d0"

undefined4 * __thiscall FUN_10cf63d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpValidateServiceCredentials");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cf6520; body size 69 bytes.
#line 1 "ENTRY_10cf6520"

void __thiscall FUN_10cf6520(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10cf78e0; body size 123 bytes.
#line 1 "ENTRY_10cf78e0"

void __thiscall FUN_10cf78e0(int param_1,undefined4 param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->beginsWith("SCIIndexManager");
  if (bVar1) {
    bVar1 = (param_3)->operator==("SCIIndexManager:onIndexEvent");
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
      return;
    }
    bVar1 = (param_3)->operator==("SCIIndexManager:onIndexErrorEvent");
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 8))(param_2);
      return;
    }
    bVar1 = (param_3)->operator==("SCIIndexManager:onIndexTimeChangedEvent");
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
    }
  }
  return;
}


// Reference entry 10cf8c60; body size 103 bytes.
#line 1 "ENTRY_10cf8c60"

undefined4 * __thiscall FUN_10cf8c60(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cf8ce0; body size 103 bytes.
#line 1 "ENTRY_10cf8ce0"

undefined4 * __thiscall FUN_10cf8ce0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10cfb040; body size 153 bytes.
#line 1 "ENTRY_10cfb040"

undefined4 * __thiscall FUN_10cfb040(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10cfdde0; body size 153 bytes.
#line 1 "ENTRY_10cfdde0"

undefined4 * __thiscall FUN_10cfdde0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIDeviceSettingsDataSource");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10cfdeb0; body size 150 bytes.
#line 1 "ENTRY_10cfdeb0"

undefined4 * __thiscall FUN_10cfdeb0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIPropertyBag");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x1a));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d06d40; body size 103 bytes.
#line 1 "ENTRY_10d06d40"

undefined4 * __thiscall FUN_10d06d40(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d06fa0; body size 103 bytes.
#line 1 "ENTRY_10d06fa0"

undefined4 * __thiscall FUN_10d06fa0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d07020; body size 103 bytes.
#line 1 "ENTRY_10d07020"

undefined4 * __thiscall FUN_10d07020(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAlarmMusic");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d07520; body size 103 bytes.
#line 1 "ENTRY_10d07520"

undefined4 * __thiscall FUN_10d07520(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d102d0; body size 103 bytes.
#line 1 "ENTRY_10d102d0"

undefined4 * __thiscall FUN_10d102d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d14dd0; body size 119 bytes.
#line 1 "ENTRY_10d14dd0"

undefined4 * __thiscall FUN_10d14dd0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIBadgeIndicatorSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10d14e70; body size 153 bytes.
#line 1 "ENTRY_10d14e70"

undefined4 * __thiscall FUN_10d14e70(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x21));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d14f40; body size 150 bytes.
#line 1 "ENTRY_10d14f40"

undefined4 * __thiscall FUN_10d14f40(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISettingsBrowseItem");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x1a));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d16fb0; body size 76 bytes.
#line 1 "ENTRY_10d16fb0"

void __thiscall FUN_10d16fb0(int param_1,int param_2,SCStr *param_3)

{
  bool bVar1;
  char cVar2;
  
  if (param_2 != 0) {
    bVar1 = (param_3)->operator==("SCIController:onConnectivityStateChanged");
    if (bVar1) {
      cVar2 = (**(code **)(*(int *)(param_1 + -0x274) + 0x80))();
      if (cVar2 == '\0') {
        (**(code **)(*(int *)(param_1 + -0x274) + 0x114))(0);
      }
    }
  }
  return;
}


// Reference entry 10d17ec0; body size 77 bytes.
#line 1 "ENTRY_10d17ec0"

SCStr * __thiscall FUN_10d17ec0(int param_1,SCStr *param_2,int param_3)

{
  char *pcVar1;
  
  if ((*(char *)(param_1 + 0x298) == '\0') && (*(char *)(param_1 + 0x299) != '\0')) {
    pcVar1 = "emptyhistory";
    if (param_3 != 2) {
      pcVar1 = "";
    }
    (param_2)->int_allocRep(pcVar1);
    return param_2;
  }
  (param_2)->int_allocRep("");
  return param_2;
}


// Reference entry 10d19410; body size 103 bytes.
#line 1 "ENTRY_10d19410"

undefined4 * __thiscall FUN_10d19410(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d1d4f0; body size 103 bytes.
#line 1 "ENTRY_10d1d4f0"

undefined4 * __thiscall FUN_10d1d4f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d1d570; body size 103 bytes.
#line 1 "ENTRY_10d1d570"

undefined4 * __thiscall FUN_10d1d570(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d1e560; body size 150 bytes.
#line 1 "ENTRY_10d1e560"

undefined4 * __thiscall FUN_10d1e560(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIEventSink");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0xe));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d22340; body size 103 bytes.
#line 1 "ENTRY_10d22340"

undefined4 * __thiscall FUN_10d22340(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d223d0; body size 103 bytes.
#line 1 "ENTRY_10d223d0"

undefined4 * __thiscall FUN_10d223d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
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
    cVar2 = (**(code **)(*piVar1 + 0x90))();
    uStack_10 = 0;
    if (cVar2 != '\0') {
      piStack_14 = piVar1;
      (aSStack_18)->int_allocRep("SCIBrowseDataSource:onInvalidation");
      thunk_FUN_103d65f0();
      return;
    }
    piStack_14 = (int *)0x10d235e8;
    (**(code **)(*piVar1 + 0x110))();
  }
  return;
}


// Reference entry 10d2b0f0; body size 103 bytes.
#line 1 "ENTRY_10d2b0f0"

undefined4 * __thiscall FUN_10d2b0f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d2b170; body size 153 bytes.
#line 1 "ENTRY_10d2b170"

undefined4 * __thiscall FUN_10d2b170(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIEventSink");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d2b240; body size 103 bytes.
#line 1 "ENTRY_10d2b240"

undefined4 * __thiscall FUN_10d2b240(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d2b2c0; body size 103 bytes.
#line 1 "ENTRY_10d2b2c0"

undefined4 * __thiscall FUN_10d2b2c0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d2b340; body size 103 bytes.
#line 1 "ENTRY_10d2b340"

undefined4 * __thiscall FUN_10d2b340(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d2b3c0; body size 103 bytes.
#line 1 "ENTRY_10d2b3c0"

undefined4 * __thiscall FUN_10d2b3c0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d2b440; body size 103 bytes.
#line 1 "ENTRY_10d2b440"

undefined4 * __thiscall FUN_10d2b440(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d35460; body size 103 bytes.
#line 1 "ENTRY_10d35460"

void __thiscall FUN_10d35460(int param_1,undefined4 param_2,SCStr *param_3)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource:onBrowseChanged");
  if (!bVar1) {
    bVar1 = (param_3)->operator==("SCISetting:onValueChanged:Bool");
    if (!bVar1) {
      return;
    }
    if (*(int **)(param_1 + 0x94) == (int *)0x0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x94) + 0x20))();
    }
    if (cVar2 == *(char *)(param_1 + 0x8e)) {
      return;
    }
  }
  thunk_FUN_10d38af0();
  (**(code **)(*(int *)(param_1 + -0x84) + 0x110))(0);
  return;
}


// Reference entry 10d383b0; body size 79 bytes.
#line 1 "ENTRY_10d383b0"

undefined1 FUN_10d383b0(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (param_1)->operator==("SCIHousehold:onSearchablesListChanged");
  if (!bVar1) {
    bVar1 = (param_1)->operator==("SCIHousehold:onZoneGroupsChanged");
    if (!bVar1) {
      bVar1 = (param_1)->operator==("SCIHousehold:onSettingsChanged");
      if (!bVar1) {
        bVar1 = (param_1)->operator==("SCIHousehold:onVoiceAccountInfoChanged");
        if (!bVar1) {
          return 0;
        }
      }
    }
  }
  return 1;
}


// Reference entry 10d39e40; body size 103 bytes.
#line 1 "ENTRY_10d39e40"

undefined4 * __thiscall FUN_10d39e40(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d39ec0; body size 153 bytes.
#line 1 "ENTRY_10d39ec0"

undefined4 * __thiscall FUN_10d39ec0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d3c9f0; body size 103 bytes.
#line 1 "ENTRY_10d3c9f0"

undefined4 * __thiscall FUN_10d3c9f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d3ca70; body size 103 bytes.
#line 1 "ENTRY_10d3ca70"

undefined4 * __thiscall FUN_10d3ca70(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d3caf0; body size 103 bytes.
#line 1 "ENTRY_10d3caf0"

undefined4 * __thiscall FUN_10d3caf0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d3ee70; body size 226 bytes.
#line 1 "ENTRY_10d3ee70"

void __thiscall FUN_10d3ee70(int param_1,undefined4 param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->beginsWith("SCIDateTimeManager");
  if (bVar1) {
    bVar1 = (param_3)->operator==("SCIDateTimeManager:onTimeGenerationChanged");
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
      return;
    }
    bVar1 = (param_3)->operator==("SCIDateTimeManager:onTimeFormatChanged");
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 8))(param_2);
      return;
    }
    bVar1 = (param_3)->operator==("SCIDateTimeManager:onDateFormatChanged");
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
      return;
    }
    bVar1 = (param_3)->operator==("SCIDateTimeManager:onTimeStatusChanged");
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_2);
      return;
    }
    bVar1 = (param_3)->operator==("SCIDateTimeManager:onTimeZoneChanged");
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x14))(param_2);
      return;
    }
    bVar1 = (param_3)->operator==("SCIDateTimeManager:onTimeServerChanged");
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x18))(param_2);
    }
  }
  return;
}


// Reference entry 10d41c80; body size 119 bytes.
#line 1 "ENTRY_10d41c80"

undefined4 * __thiscall FUN_10d41c80(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIBooleanSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10d41d20; body size 103 bytes.
#line 1 "ENTRY_10d41d20"

undefined4 * __thiscall FUN_10d41d20(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d41da0; body size 153 bytes.
#line 1 "ENTRY_10d41da0"

undefined4 * __thiscall FUN_10d41da0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x26));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d41e70; body size 119 bytes.
#line 1 "ENTRY_10d41e70"

undefined4 * __thiscall FUN_10d41e70(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCISpinnerSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10d41f10; body size 103 bytes.
#line 1 "ENTRY_10d41f10"

undefined4 * __thiscall FUN_10d41f10(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d44040; body size 120 bytes.
#line 1 "ENTRY_10d44040"

void __thiscall FUN_10d44040(int param_1,undefined4 param_2,SCStr *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = (param_3)->operator==("SCIDateTimeManager:onTimeStatusChanged");
  if (!bVar2) {
    bVar2 = (param_3)->operator==("SCIAlarmManager:onAlarmsChanged");
    if (bVar2) {
      (**(code **)(*(int *)(param_1 + -0x80) + 0x16c))();
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


// Reference entry 10d49470; body size 150 bytes.
#line 1 "ENTRY_10d49470"

undefined4 * __thiscall FUN_10d49470(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCITooltip");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x1a));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d49540; body size 157 bytes.
#line 1 "ENTRY_10d49540"

undefined4 * __thiscall FUN_10d49540(int *param_1,undefined4 *param_2,SCStr *param_3)

{
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
        (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10d49620; body size 153 bytes.
#line 1 "ENTRY_10d49620"

undefined4 * __thiscall FUN_10d49620(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIEventSink");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d496f0; body size 157 bytes.
#line 1 "ENTRY_10d496f0"

undefined4 * __thiscall FUN_10d496f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
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
        (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10d497d0; body size 153 bytes.
#line 1 "ENTRY_10d497d0"

undefined4 * __thiscall FUN_10d497d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIEventSink");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d498a0; body size 153 bytes.
#line 1 "ENTRY_10d498a0"

undefined4 * __thiscall FUN_10d498a0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x2a));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d4f3d0; body size 82 bytes.
#line 1 "ENTRY_10d4f3d0"

SCStr * FUN_10d4f3d0(SCStr *param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 1) {
    (param_1)->int_allocRep("playlistitem");
    return param_1;
  }
  if (param_2 != 2) {
    thunk_FUN_10210700(param_1,param_2,param_3);
    return param_1;
  }
  (param_1)->int_allocRep("emptyplaylists");
  return param_1;
}


// Reference entry 10d51180; body size 119 bytes.
#line 1 "ENTRY_10d51180"

undefined4 * __thiscall FUN_10d51180(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAddToQueueAtNumberDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10d51220; body size 153 bytes.
#line 1 "ENTRY_10d51220"

undefined4 * __thiscall FUN_10d51220(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCICommittable");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0xa0));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d58880; body size 157 bytes.
#line 1 "ENTRY_10d58880"

undefined4 * __thiscall FUN_10d58880(int *param_1,undefined4 *param_2,SCStr *param_3)

{
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
        (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10d5a990; body size 157 bytes.
#line 1 "ENTRY_10d5a990"

undefined4 * __thiscall FUN_10d5a990(int *param_1,undefined4 *param_2,SCStr *param_3)

{
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
        (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10d5eec0; body size 103 bytes.
#line 1 "ENTRY_10d5eec0"

void __thiscall FUN_10d5eec0(int param_1,int param_2)

{
  char cVar1;
  SCStr aSStack_10 [4];
  int iStack_c;
  undefined4 uStack_8;
  
  if (((*(int **)(param_1 + 0x1c) != (int *)0x0) && (*(int *)(param_1 + 0x24) != 0)) &&
     (param_2 == *(int *)(param_1 + 0xc))) {
    uStack_8 = 0x10d5eee3;
    cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x90))();
    if (cVar1 == '\0') {
      uStack_8 = 0x10d5eef4;
      cVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x90))();
      if (cVar1 == '\0') {
        uStack_8 = 0x10d5ef00;
        thunk_FUN_10d5f7c0();
        return;
      }
    }
    uStack_8 = 0;
    iStack_c = param_1 + -0x80;
    *(undefined1 *)(param_1 + -0x40) = 1;
    (aSStack_10)->int_allocRep("SCIBrowseDataSource:onInvalidation");
    thunk_FUN_103d65f0();
  }
  return;
}


// Reference entry 10d60300; body size 103 bytes.
#line 1 "ENTRY_10d60300"

undefined4 * __thiscall FUN_10d60300(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d63500; body size 153 bytes.
#line 1 "ENTRY_10d63500"

undefined4 * __thiscall FUN_10d63500(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIBrowseGroupsInfo");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d67340; body size 153 bytes.
#line 1 "ENTRY_10d67340"

undefined4 * __thiscall FUN_10d67340(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchHistoryBrowseDataSource");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d67410; body size 150 bytes.
#line 1 "ENTRY_10d67410"

undefined4 * __thiscall FUN_10d67410(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchHistoryBrowseItem");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 6));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d674e0; body size 153 bytes.
#line 1 "ENTRY_10d674e0"

undefined4 * __thiscall FUN_10d674e0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchHistoryPageDataSource");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d675b0; body size 150 bytes.
#line 1 "ENTRY_10d675b0"

undefined4 * __thiscall FUN_10d675b0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchHistoryViewBrowseItem");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 6));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d71360; body size 157 bytes.
#line 1 "ENTRY_10d71360"

undefined4 * __thiscall FUN_10d71360(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 4));
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchQuery");
    if (bVar1) {
      *param_2 = (undefined4)param_1;
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))();
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
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d71470; body size 153 bytes.
#line 1 "ENTRY_10d71470"

undefined4 * __thiscall FUN_10d71470(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCISearchResultBrowseItem");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x46));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10d71570; body size 103 bytes.
#line 1 "ENTRY_10d71570"

undefined4 * __thiscall FUN_10d71570(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d77dc0; body size 103 bytes.
#line 1 "ENTRY_10d77dc0"

SCStr * FUN_10d77dc0(SCStr *param_1,int param_2)

{
  if (param_2 == -1) {
    (param_1)->int_allocRep("canceled");
    return param_1;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      (param_1)->int_allocRep("invalid");
      return param_1;
    }
    (param_1)->int_allocRep("initNetworkFailure");
    return param_1;
  }
  (param_1)->int_allocRep("default");
  return param_1;
}


// Reference entry 10d86dd0; body size 103 bytes.
#line 1 "ENTRY_10d86dd0"

undefined4 * __thiscall FUN_10d86dd0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d86e50; body size 103 bytes.
#line 1 "ENTRY_10d86e50"

undefined4 * __thiscall FUN_10d86e50(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d86ed0; body size 103 bytes.
#line 1 "ENTRY_10d86ed0"

undefined4 * __thiscall FUN_10d86ed0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d86f50; body size 103 bytes.
#line 1 "ENTRY_10d86f50"

undefined4 * __thiscall FUN_10d86f50(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d86fd0; body size 103 bytes.
#line 1 "ENTRY_10d86fd0"

undefined4 * __thiscall FUN_10d86fd0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlSessionCallback");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d87230; body size 69 bytes.
#line 1 "ENTRY_10d87230"

void __thiscall FUN_10d87230(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10d87290; body size 69 bytes.
#line 1 "ENTRY_10d87290"

void __thiscall FUN_10d87290(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10d872f0; body size 69 bytes.
#line 1 "ENTRY_10d872f0"

void __thiscall FUN_10d872f0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10d87350; body size 69 bytes.
#line 1 "ENTRY_10d87350"

void __thiscall FUN_10d87350(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10d88ea0; body size 140 bytes.
#line 1 "ENTRY_10d88ea0"

void __thiscall FUN_10d88ea0(int param_1,undefined4 param_2,SCStr *param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  SCStr aSStack_18 [4];
  int iStack_14;
  
  iStack_14 = 0x10d88eb5;
  bVar3 = (param_3)->operator==("SCIBrowseDataSource:onBrowseChanged");
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 8);
    cVar1 = *(char *)(iVar2 + 0x88);
    *(undefined1 *)(iVar2 + 0x88) = 0;
    thunk_FUN_10d89400();
    iStack_14 = iVar2;
    (aSStack_18)->int_allocRep("SCISettingsMenu:onContentsChanged");
    thunk_FUN_103d65f0();
    if (cVar1 != '\0') {
      iStack_14 = iVar2;
      (aSStack_18)->int_allocRep("SCISettingsMenu:onMenuLoaded");
      thunk_FUN_103d65f0();
      return;
    }
  }
  else {
    iStack_14 = 0x10d88f1a;
    bVar3 = (param_3)->operator==("SCIBrowseDataSource:onInvalidation");
    if (bVar3) {
      thunk_FUN_101f1c60();
    }
  }
  return;
}


// Reference entry 10d89300; body size 103 bytes.
#line 1 "ENTRY_10d89300"

undefined4 * __thiscall FUN_10d89300(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d91bd0; body size 103 bytes.
#line 1 "ENTRY_10d91bd0"

undefined4 * __thiscall FUN_10d91bd0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d93ac0; body size 103 bytes.
#line 1 "ENTRY_10d93ac0"

undefined4 * __thiscall FUN_10d93ac0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIUrlSessionCallback");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d97210; body size 103 bytes.
#line 1 "ENTRY_10d97210"

undefined4 * __thiscall FUN_10d97210(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d9a400; body size 103 bytes.
#line 1 "ENTRY_10d9a400"

undefined4 * __thiscall FUN_10d9a400(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d9a480; body size 103 bytes.
#line 1 "ENTRY_10d9a480"

undefined4 * __thiscall FUN_10d9a480(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d9ded0; body size 103 bytes.
#line 1 "ENTRY_10d9ded0"

undefined4 * __thiscall FUN_10d9ded0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpContentDirectoryRefreshShareIndex");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d9df50; body size 103 bytes.
#line 1 "ENTRY_10d9df50"

undefined4 * __thiscall FUN_10d9df50(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpContentDirectoryRefreshShareIndex");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10d9e0f0; body size 69 bytes.
#line 1 "ENTRY_10d9e0f0"

void __thiscall FUN_10d9e0f0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10d9e640; body size 103 bytes.
#line 1 "ENTRY_10d9e640"

undefined4 * __thiscall FUN_10d9e640(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10da2790; body size 121 bytes.
#line 1 "ENTRY_10da2790"

void __thiscall FUN_10da2790(int param_1,undefined4 param_2,SCStr *param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = (param_3)->operator==("SCIHousehold:onZoneGroupsChanged");
  if (bVar2) {
    thunk_FUN_10cefc20();
    thunk_FUN_10cefa80();
    iVar1 = *(int *)(param_1 + 8);
    thunk_FUN_10bed100(iVar1 + 0x2c,-(uint)(iVar1 != 0) & iVar1 + 0x28U);
    thunk_FUN_10da3dc0();
    return;
  }
  bVar2 = (param_3)->operator==("SCIHousehold:onVoiceAccountInfoChanged");
  if ((!bVar2) && (bVar2 = (param_3)->operator==("SCConnectedPartnersCache:onSuccess"), !bVar2))
  {
    return;
  }
  thunk_FUN_10da3dc0();
  return;
}


// Reference entry 10da33b0; body size 103 bytes.
#line 1 "ENTRY_10da33b0"

undefined4 * __thiscall FUN_10da33b0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10da3430; body size 103 bytes.
#line 1 "ENTRY_10da3430"

undefined4 * __thiscall FUN_10da3430(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10da53c0; body size 118 bytes.
#line 1 "ENTRY_10da53c0"

int __thiscall FUN_10da53c0(int param_1,int param_2)

{
  SCStr *pSVar1;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  pSVar1 = (SCStr *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  if ((SCStr *)(param_2 + 0x20) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x20);
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x24);
  if ((SCStr *)(param_2 + 0x24) != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x24);
    (pSVar1)->int_addref();
  }
  return param_1;
}


// Reference entry 10da7540; body size 103 bytes.
#line 1 "ENTRY_10da7540"

undefined4 * __thiscall FUN_10da7540(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10da75c0; body size 103 bytes.
#line 1 "ENTRY_10da75c0"

undefined4 * __thiscall FUN_10da75c0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIDateTimeManager");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10da7640; body size 103 bytes.
#line 1 "ENTRY_10da7640"

undefined4 * __thiscall FUN_10da7640(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCITimeZone");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10db4d10; body size 104 bytes.
#line 1 "ENTRY_10db4d10"

SCStr * FUN_10db4d10(SCStr *param_1,int param_2)

{
  if (param_2 == 0) {
    (param_1)->int_allocRep("viewAlbumsForArtist");
    return param_1;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      (param_1)->int_allocRep("unknown");
      return param_1;
    }
    (param_1)->int_allocRep("viewTracksInAlbum");
    return param_1;
  }
  (param_1)->int_allocRep("viewTracksForArtist");
  return param_1;
}


// Reference entry 10db8e40; body size 102 bytes.
#line 1 "ENTRY_10db8e40"

SCStr * __thiscall FUN_10db8e40(SCStr *param_1,SCStr *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != param_1) {
    (param_1)->int_release();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    (param_1)->int_addref();
  }
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 != *(int *)(param_1 + 4)) {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *(int *)(param_2 + 4);
    }
    *(int *)(param_1 + 4) = iVar2;
    piVar1 = *(int **)(param_2 + 8);
    *(int **)(param_1 + 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0x10] = param_2[0x10];
  return param_1;
}


// Reference entry 10dc5850; body size 65 bytes.
#line 1 "ENTRY_10dc5850"

SCStr * __thiscall FUN_10dc5850(int param_1,SCStr *param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_3 < *(uint *)(param_1 + 0x13c)) {
    pcVar1 = *(char **)(param_1 + 0x140 + param_3 * 4);
    pcVar2 = "";
    if (pcVar1 != (char *)0x0) {
      pcVar2 = pcVar1;
    }
    (param_2)->int_allocRep(pcVar2);
    return param_2;
  }
  (param_2)->int_allocRep((char *)0x0);
  return param_2;
}


// Reference entry 10dc58b0; body size 65 bytes.
#line 1 "ENTRY_10dc58b0"

SCStr * __thiscall FUN_10dc58b0(int param_1,SCStr *param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_3 < *(uint *)(param_1 + 0x13c)) {
    pcVar1 = *(char **)(param_1 + 0x150 + param_3 * 4);
    pcVar2 = "";
    if (pcVar1 != (char *)0x0) {
      pcVar2 = pcVar1;
    }
    (param_2)->int_allocRep(pcVar2);
    return param_2;
  }
  (param_2)->int_allocRep((char *)0x0);
  return param_2;
}


// Reference entry 10dc5970; body size 253 bytes.
#line 1 "ENTRY_10dc5970"

SCStr * FUN_10dc5970(SCStr *param_1,uint param_2)

{
  if (param_2 < 0x11) {
    if (param_2 == 0x10) {
      (param_1)->int_allocRep("audiobook");
      return param_1;
    }
    switch(param_2) {
    case 1:
      (param_1)->int_allocRep("track");
      return param_1;
    case 2:
      (param_1)->int_allocRep("album");
      return param_1;
    case 4:
      (param_1)->int_allocRep("artist");
      return param_1;
    case 8:
      (param_1)->int_allocRep("author");
      return param_1;
    }
  }
  else {
    switch(param_2) {
    case 0x20:
      (param_1)->int_allocRep("radio");
      return param_1;
    case 0x40:
      (param_1)->int_allocRep("playlist");
      return param_1;
    case 0x80:
      (param_1)->int_allocRep("podcast");
      return param_1;
    case 0x100:
      (param_1)->int_allocRep("episode.podcast");
      return param_1;
    }
  }
  (param_1)->int_allocRep("other");
  return param_1;
}


// Reference entry 10dc76d0; body size 71 bytes.
#line 1 "ENTRY_10dc76d0"

undefined4 * __thiscall FUN_10dc76d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    if (param_1 == (int *)0xa8) {
      param_1 = (int *)0x0;
    }
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


// Reference entry 10dcef60; body size 103 bytes.
#line 1 "ENTRY_10dcef60"

undefined4 * __thiscall FUN_10dcef60(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIServicePopup");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10dd5ba0; body size 103 bytes.
#line 1 "ENTRY_10dd5ba0"

undefined4 * __thiscall FUN_10dd5ba0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10de28f0; body size 103 bytes.
#line 1 "ENTRY_10de28f0"

undefined4 * __thiscall FUN_10de28f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowsePageExtension");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10de4590; body size 103 bytes.
#line 1 "ENTRY_10de4590"

undefined4 * __thiscall FUN_10de4590(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10de8950; body size 103 bytes.
#line 1 "ENTRY_10de8950"

undefined4 * __thiscall FUN_10de8950(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAVTransportAddURIToSavedQueue");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10de89d0; body size 103 bytes.
#line 1 "ENTRY_10de89d0"

undefined4 * __thiscall FUN_10de89d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10de8a50; body size 103 bytes.
#line 1 "ENTRY_10de8a50"

undefined4 * __thiscall FUN_10de8a50(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAVTransportAddURIToSavedQueue");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10de8c30; body size 69 bytes.
#line 1 "ENTRY_10de8c30"

void __thiscall FUN_10de8c30(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
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
        *(int *)(pSVar4 + -8) = piVar3[-1];
        iVar2 = *piVar3;
        if (iVar2 != *(int *)(pSVar4 + -4)) {
          piVar1 = *(int **)pSVar4;
          if (piVar1 != (int *)0x0) {
            *(int *)(pSVar4 + -4) = 0;
            *(int *)pSVar4 = 0;
            (**(code **)(*piVar1 + 8))();
            iVar2 = *piVar3;
          }
          *(int *)(pSVar4 + -4) = iVar2;
          piVar1 = (int *)piVar3[1];
          *(int **)pSVar4 = piVar1;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
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

SCStr * __thiscall FUN_10def210(SCStr *param_1,SCStr *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    (param_1)->int_release();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    (param_1)->int_addref();
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    iVar2 = *(int *)(param_2 + 8);
    if (iVar2 != *(int *)(param_1 + 8)) {
      piVar1 = *(int **)(param_1 + 0xc);
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        (**(code **)(*piVar1 + 8))();
        iVar2 = *(int *)(param_2 + 8);
      }
      *(int *)(param_1 + 8) = iVar2;
      piVar1 = *(int **)(param_2 + 0xc);
      *(int **)(param_1 + 0xc) = piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
  }
  return param_1;
}


// Reference entry 10df1890; body size 543 bytes.
#line 1 "ENTRY_10df1890"

void FUN_10df1890(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (param_1)->contains("!",false);
  if (!bVar1) {
    bVar1 = (param_1)->contains("@",false);
    if (!bVar1) {
      bVar1 = (param_1)->contains("$",false);
      if (!bVar1) {
        bVar1 = (param_1)->contains("%",false);
        if (!bVar1) {
          bVar1 = (param_1)->contains("^",false);
          if (!bVar1) {
            bVar1 = (param_1)->contains("&",false);
            if (!bVar1) {
              bVar1 = (param_1)->contains("*",false);
              if (!bVar1) {
                bVar1 = (param_1)->contains("(",false);
                if (!bVar1) {
                  bVar1 = (param_1)->contains("-",false);
                  if (!bVar1) {
                    bVar1 = (param_1)->contains("_",false);
                    if (!bVar1) {
                      bVar1 = (param_1)->contains("+",false);
                      if (!bVar1) {
                        bVar1 = (param_1)->contains("=",false);
                        if (!bVar1) {
                          bVar1 = (param_1)->contains(")",false);
                          if (!bVar1) {
                            bVar1 = (param_1)->contains("[",false);
                            if (!bVar1) {
                              bVar1 = (param_1)->contains("]",false);
                              if (!bVar1) {
                                bVar1 = (param_1)->contains("|",false);
                                if (!bVar1) {
                                  bVar1 = (param_1)->contains("\\",false);
                                  if (!bVar1) {
                                    bVar1 = (param_1)->contains(":",false);
                                    if (!bVar1) {
                                      bVar1 = (param_1)->contains(";",false);
                                      if (!bVar1) {
                                        bVar1 = (param_1)->contains("\"",false);
                                        if (!bVar1) {
                                          bVar1 = (param_1)->contains("\'",false);
                                          if (!bVar1) {
                                            bVar1 = (param_1)->contains(",",false);
                                            if (!bVar1) {
                                              bVar1 = (param_1)->contains(".",false);
                                              if (!bVar1) {
                                                bVar1 = (param_1)->contains("/",false);
                                                if (!bVar1) {
                                                  bVar1 = (param_1)->contains("~",false);
                                                  if (!bVar1) {
                                                    (param_1)->contains("`",false);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


// Reference entry 10e06af0; body size 103 bytes.
#line 1 "ENTRY_10e06af0"

undefined4 * __thiscall FUN_10e06af0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIWifiListener");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10e0ae60; body size 103 bytes.
#line 1 "ENTRY_10e0ae60"

undefined4 * __thiscall FUN_10e0ae60(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10e14320; body size 262 bytes.
#line 1 "ENTRY_10e14320"

void __thiscall FUN_10e14320(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcStack_14;
  
  iVar2 = param_2;
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  if (puVar3 != *(undefined4 **)(param_1 + 0x14)) {
    do {
      pcStack_14 = (char *)0x10e14339;
      iVar1 = (**(code **)(*(int *)*puVar3 + 0x20))();
      if (iVar1 == iVar2) {
        pcStack_14 = (char *)0x10e143b1;
        iVar2 = thunk_FUN_103eb580();
        pcStack_14 = (char *)puVar3;
        if (iVar2 == 0) {
          *(undefined1 *)(param_1 + 0x1c) = 1;
          thunk_FUN_10a56100(&param_2);
        }
        else {
          thunk_FUN_10a56100(&param_2);
          if (((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) & 0xfffffff8U) == 0) &&
             (*(char *)(param_1 + 0x1c) != '\0')) {
            pcStack_14 = "secure transfer ";
            thunk_FUN_112af4e0("secure_existing",0);
            ((SCStr *)&pcStack_14)->int_allocRep("ready_for_transfer");
            (**(code **)(**(int **)(param_1 + -8) + 0x8c))();
            thunk_FUN_10e1eb40();
            return;
          }
        }
        break;
      }
      puVar3 = puVar3 + 2;
    } while (puVar3 != *(undefined4 **)(param_1 + 0x14));
  }
  if (((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) & 0xfffffff8U) == 0) &&
     (*(char *)(param_1 + 0x1c) == '\0')) {
    pcStack_14 = "secure transfer failed";
    thunk_FUN_112af4e0("secure_existing",0);
    ((SCStr *)&pcStack_14)->int_allocRep("transfer_error");
    (**(code **)(**(int **)(param_1 + -8) + 0x8c))();
    if (*(int *)(param_1 + 0xc) != 0) {
      thunk_FUN_104dec20();
      if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}


// Reference entry 10e1f660; body size 107 bytes.
#line 1 "ENTRY_10e1f660"

void __fastcall FUN_10e1f660(int param_1)

{
  int extraout_ECX;
  char *pcVar1;
  int iStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e1f6c6;
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
      return;
    }
    iStack_c = 0x10e1f69e;
    thunk_FUN_10e19870();
    pcVar1 = "subwizard_completed";
    iStack_c = extraout_ECX;
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e1f68d;
      (**(code **)(**(int **)(param_1 + 4) + 0xac))();
      return;
    }
    pcVar1 = "back_from_subwizard";
    iStack_c = param_1;
  }
  ((SCStr *)&iStack_c)->int_allocRep(pcVar1);
  (**(code **)(**(int **)(param_1 + 4) + 0x8c))();
  return;
}


// Reference entry 10e1fba0; body size 103 bytes.
#line 1 "ENTRY_10e1fba0"

undefined4 * __thiscall FUN_10e1fba0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10e24100; body size 73 bytes.
#line 1 "ENTRY_10e24100"

SCStr * FUN_10e24100(SCStr *param_1,int param_2)

{
  if (param_2 == 0) {
    (param_1)->int_allocRep("default");
    return param_1;
  }
  if (param_2 != 1) {
    (param_1)->int_allocRep("unknown");
    return param_1;
  }
  (param_1)->int_allocRep("welcomeScreen");
  return param_1;
}


// Reference entry 10e24160; body size 128 bytes.
#line 1 "ENTRY_10e24160"

SCStr * FUN_10e24160(SCStr *param_1,int param_2)

{
  switch(param_2) {
  case 1:
    (param_1)->int_allocRep("noLogin");
    return param_1;
  case 2:
    (param_1)->int_allocRep("success");
    return param_1;
  case -1:
  case 0:
    break;
  default:
    (param_1)->int_allocRep("unknown");
    return param_1;
  }
  if (param_2 == 0) {
    (param_1)->int_allocRep("default");
    return param_1;
  }
  (param_1)->int_allocRep("unknown");
  return param_1;
}


// Reference entry 10e249e0; body size 107 bytes.
#line 1 "ENTRY_10e249e0"

void __fastcall FUN_10e249e0(int param_1)

{
  int extraout_ECX;
  char *pcVar1;
  int iStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e24a46;
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
      return;
    }
    iStack_c = 0x10e24a1e;
    thunk_FUN_10e23ff0();
    pcVar1 = "subwizard_completed";
    iStack_c = extraout_ECX;
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e24a0d;
      (**(code **)(**(int **)(param_1 + 4) + 0xac))();
      return;
    }
    pcVar1 = "back_from_subwizard";
    iStack_c = param_1;
  }
  ((SCStr *)&iStack_c)->int_allocRep(pcVar1);
  (**(code **)(**(int **)(param_1 + 4) + 0x8c))();
  return;
}


// Reference entry 10e24ac0; body size 103 bytes.
#line 1 "ENTRY_10e24ac0"

undefined4 * __thiscall FUN_10e24ac0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10e3f100; body size 103 bytes.
#line 1 "ENTRY_10e3f100"

undefined4 * __thiscall FUN_10e3f100(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIServiceAppInteropResponseDelegate");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10e3f180; body size 103 bytes.
#line 1 "ENTRY_10e3f180"

undefined4 * __thiscall FUN_10e3f180(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIServiceAppInteropResponseDelegate");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10e4e4a0; body size 107 bytes.
#line 1 "ENTRY_10e4e4a0"

void __fastcall FUN_10e4e4a0(int param_1)

{
  int extraout_ECX;
  char *pcVar1;
  int iStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e4e506;
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
      return;
    }
    iStack_c = 0x10e4e4de;
    thunk_FUN_10e4a9e0();
    pcVar1 = "subwizard_completed";
    iStack_c = extraout_ECX;
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e4e4cd;
      (**(code **)(**(int **)(param_1 + 4) + 0xac))();
      return;
    }
    pcVar1 = "back_from_subwizard";
    iStack_c = param_1;
  }
  ((SCStr *)&iStack_c)->int_allocRep(pcVar1);
  (**(code **)(**(int **)(param_1 + 4) + 0x8c))();
  return;
}


// Reference entry 10e4e5e0; body size 103 bytes.
#line 1 "ENTRY_10e4e5e0"

undefined4 * __thiscall FUN_10e4e5e0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10e58bb0; body size 121 bytes.
#line 1 "ENTRY_10e58bb0"

void __thiscall FUN_10e58bb0(int param_1,int param_2)

{
  char *pcStack_8;
  
  if (param_2 == *(int *)(param_1 + 0x30)) {
    pcStack_8 = "Timeout waiting for players to enter transfer state.";
    thunk_FUN_112af4e0("secure_transfer",0);
    *(undefined4 *)(param_1 + 0x30) = 0;
    ((SCStr *)&pcStack_8)->int_allocRep("transfer_error");
    (**(code **)(**(int **)(param_1 + -0x14) + 0x8c))();
    if (*(int *)(param_1 + 0x30) != 0) {
      thunk_FUN_1059d940(*(int *)(param_1 + 0x30));
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_104dec20();
      if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
      }
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  return;
}


// Reference entry 10e59020; body size 107 bytes.
#line 1 "ENTRY_10e59020"

void __fastcall FUN_10e59020(int param_1)

{
  int extraout_ECX;
  char *pcVar1;
  int iStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e59086;
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
      return;
    }
    iStack_c = 0x10e5905e;
    thunk_FUN_10e55410();
    pcVar1 = "subwizard_completed";
    iStack_c = extraout_ECX;
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e5904d;
      (**(code **)(**(int **)(param_1 + 4) + 0xac))();
      return;
    }
    pcVar1 = "back_from_subwizard";
    iStack_c = param_1;
  }
  ((SCStr *)&iStack_c)->int_allocRep(pcVar1);
  (**(code **)(**(int **)(param_1 + 4) + 0x8c))();
  return;
}


// Reference entry 10e591f0; body size 103 bytes.
#line 1 "ENTRY_10e591f0"

undefined4 * __thiscall FUN_10e591f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10e5f7a0; body size 90 bytes.
#line 1 "ENTRY_10e5f7a0"

SCStr * __thiscall FUN_10e5f7a0(SCStr *param_1,SCStr *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != param_1) {
    (param_1)->int_release();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    (param_1)->int_addref();
  }
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 != *(int *)(param_1 + 4)) {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar2 = *(int *)(param_2 + 4);
    }
    *(int *)(param_1 + 4) = iVar2;
    piVar1 = *(int **)(param_2 + 8);
    *(int **)(param_1 + 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return param_1;
}


// Reference entry 10e71ed0; body size 107 bytes.
#line 1 "ENTRY_10e71ed0"

void __fastcall FUN_10e71ed0(int param_1)

{
  int extraout_ECX;
  char *pcVar1;
  int iStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e71f36;
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
      return;
    }
    iStack_c = 0x10e71f0e;
    thunk_FUN_10e697b0();
    pcVar1 = "subwizard_completed";
    iStack_c = extraout_ECX;
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e71efd;
      (**(code **)(**(int **)(param_1 + 4) + 0xac))();
      return;
    }
    pcVar1 = "back_from_subwizard";
    iStack_c = param_1;
  }
  ((SCStr *)&iStack_c)->int_allocRep(pcVar1);
  (**(code **)(**(int **)(param_1 + 4) + 0x8c))();
  return;
}


// Reference entry 10e72c70; body size 103 bytes.
#line 1 "ENTRY_10e72c70"

undefined4 * __thiscall FUN_10e72c70(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10e72cf0; body size 103 bytes.
#line 1 "ENTRY_10e72cf0"

undefined4 * __thiscall FUN_10e72cf0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIVSResponseListener");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10e794a0; body size 197 bytes.
#line 1 "ENTRY_10e794a0"

SCStr * FUN_10e794a0(SCStr *param_1,int param_2)

{
  switch(param_2) {
  case 1:
    (param_1)->int_allocRep("speakerDetectionFailure");
    return param_1;
  case 2:
    (param_1)->int_allocRep("speakerDetectionSuccessWithTrueplay");
    return param_1;
  case 3:
    (param_1)->int_allocRep("speakerDetectionSuccessWithTrueplayMono");
    return param_1;
  case 4:
    (param_1)->int_allocRep("speakerDetectionSuccessWithoutTrueplay");
    return param_1;
  case -1:
  case 0:
    break;
  default:
    (param_1)->int_allocRep("invalid");
    return param_1;
  }
  if (param_2 == -1) {
    (param_1)->int_allocRep("canceled");
    return param_1;
  }
  if (param_2 == 0) {
    (param_1)->int_allocRep("default");
    return param_1;
  }
  (param_1)->int_allocRep("unknown");
  return param_1;
}


// Reference entry 10e7b4e0; body size 107 bytes.
#line 1 "ENTRY_10e7b4e0"

void __fastcall FUN_10e7b4e0(int param_1)

{
  int extraout_ECX;
  char *pcVar1;
  int iStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e7b546;
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
      return;
    }
    iStack_c = 0x10e7b51e;
    thunk_FUN_10e79390();
    pcVar1 = "subwizard_completed";
    iStack_c = extraout_ECX;
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e7b50d;
      (**(code **)(**(int **)(param_1 + 4) + 0xac))();
      return;
    }
    pcVar1 = "back_from_subwizard";
    iStack_c = param_1;
  }
  ((SCStr *)&iStack_c)->int_allocRep(pcVar1);
  (**(code **)(**(int **)(param_1 + 4) + 0x8c))();
  return;
}


// Reference entry 10e7de90; body size 103 bytes.
#line 1 "ENTRY_10e7de90"

undefined4 * __thiscall FUN_10e7de90(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10e86760; body size 107 bytes.
#line 1 "ENTRY_10e86760"

void __fastcall FUN_10e86760(int param_1)

{
  int extraout_ECX;
  char *pcVar1;
  int iStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e867c6;
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
      return;
    }
    iStack_c = 0x10e8679e;
    thunk_FUN_10e84bd0();
    pcVar1 = "subwizard_completed";
    iStack_c = extraout_ECX;
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10e8678d;
      (**(code **)(**(int **)(param_1 + 4) + 0xac))();
      return;
    }
    pcVar1 = "back_from_subwizard";
    iStack_c = param_1;
  }
  ((SCStr *)&iStack_c)->int_allocRep(pcVar1);
  (**(code **)(**(int **)(param_1 + 4) + 0x8c))();
  return;
}


// Reference entry 10e86840; body size 103 bytes.
#line 1 "ENTRY_10e86840"

undefined4 * __thiscall FUN_10e86840(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10e9aa20; body size 112 bytes.
#line 1 "ENTRY_10e9aa20"

void __thiscall FUN_10e9aa20(int param_1,int param_2,short param_3)

{
  int iVar1;
  uint uVar2;
  char *pcStack_10;
  int iStack_c;
  char *pcStack_8;
  
  if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    pcStack_8 = (char *)0x10e9aa2f;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  }
  if (iVar1 == param_2) {
    if (param_3 == 0) {
      pcStack_8 = (char *)0x10e9aa49;
      uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x30))();
      pcStack_10 = (char *)(uVar2 & 0xffff);
      pcStack_8 = (char *)0x0;
      *(char **)(*(int *)(param_1 + 0x78) + 0x10) = pcStack_10;
      iStack_c = param_1 + -0x88;
      *(undefined1 *)(param_1 + -0x14) = 1;
      ((SCStr *)&pcStack_10)->int_allocRep("SCIBrowseItem:onItemChanged");
      thunk_FUN_103d65f0();
      return;
    }
    pcStack_8 = "Error getting autoplay volume";
    iStack_c = 1;
    pcStack_10 = "DeviceSettings";
    thunk_FUN_112af4e0();
  }
  return;
}


// Reference entry 10e9b010; body size 101 bytes.
#line 1 "ENTRY_10e9b010"

void __thiscall FUN_10e9b010(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iStack_14;
  int *piStack_10;
  undefined4 uStack_c;
  
  if (*(int **)(param_1 + 0xc) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    uStack_c = 0x10e9b020;
    iVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x20))();
  }
  if (iVar2 == param_2) {
    iVar2 = *(int *)(param_1 + -0x78);
    if ((short)param_3 == 0) {
      uStack_c = 0x10e9b042;
      uVar1 = (**(code **)(iVar2 + 0xe8))();
      iStack_14 = *(int *)(param_1 + 0x70);
      uStack_c = 0;
      *(undefined1 *)(iStack_14 + 0x10) = uVar1;
      *(undefined1 *)(param_1 + -4) = 1;
      piStack_10 = (int *)(param_1 + -0x78);
      ((SCStr *)&iStack_14)->int_allocRep("SCIBrowseItem:onItemChanged");
      thunk_FUN_103d65f0();
      return;
    }
    uStack_c = param_3;
    piStack_10 = (int *)0x10e9b070;
    (**(code **)(iVar2 + 0xec))();
  }
  return;
}


// Reference entry 10e9c4f0; body size 152 bytes.
#line 1 "ENTRY_10e9c4f0"

void __thiscall FUN_10e9c4f0(int param_1,int param_2,short param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  char *pcStack_14;
  int iStack_10;
  char *pcStack_c;
  
  if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    pcStack_c = (char *)0x10e9c500;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  }
  if (iVar3 == param_2) {
    if (param_3 == 0) {
      pcStack_c = (char *)0x10e9c51c;
      uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x30))();
      pcStack_14 = *(char **)(param_1 + 0x78);
      *(undefined1 *)((int)pcStack_14 + 0x10) = uVar1;
      *(undefined1 *)(param_1 + -4) = 1;
      if (*(int **)(param_1 + 0x80) != (int *)0x0) {
        iVar3 = **(int **)(param_1 + 0x80);
        pcStack_c = (char *)0x10e9c53c;
        uVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 0x30))();
        pcStack_c = (char *)(uVar4 & 0xff);
        iStack_10 = 0x10e9c54b;
        cVar2 = (**(code **)(iVar3 + 8))();
        pcStack_14 = (char *)extraout_ECX;
        if (cVar2 != '\0') {
          return;
        }
      }
      pcStack_c = (char *)0x0;
      iStack_10 = param_1 + -0x78;
      ((SCStr *)&pcStack_14)->int_allocRep("SCIBrowseItem:onItemChanged");
      thunk_FUN_103d65f0();
      return;
    }
    pcStack_c = "Error getting Use Autoplay Volume status";
    iStack_10 = 1;
    pcStack_14 = "DeviceSettings";
    thunk_FUN_112af4e0();
  }
  return;
}


// Reference entry 10ea2900; body size 103 bytes.
#line 1 "ENTRY_10ea2900"

undefined4 * __thiscall FUN_10ea2900(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlGetLEDFeedbackState");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ea2980; body size 119 bytes.
#line 1 "ENTRY_10ea2980"

undefined4 * __thiscall FUN_10ea2980(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIIntegerSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10ea2a20; body size 103 bytes.
#line 1 "ENTRY_10ea2a20"

undefined4 * __thiscall FUN_10ea2a20(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlGetLEDFeedbackState");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ea2c70; body size 119 bytes.
#line 1 "ENTRY_10ea2c70"

undefined4 * __thiscall FUN_10ea2c70(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIStringFromCustomSettingsProperty"), bVar1))
  {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10ea2d10; body size 119 bytes.
#line 1 "ENTRY_10ea2d10"

undefined4 * __thiscall FUN_10ea2d10(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIStringFromListSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10ea6b90; body size 69 bytes.
#line 1 "ENTRY_10ea6b90"

void __thiscall FUN_10ea6b90(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10ea6c60; body size 69 bytes.
#line 1 "ENTRY_10ea6c60"

void __thiscall FUN_10ea6c60(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x10);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x14);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10ea6d40; body size 69 bytes.
#line 1 "ENTRY_10ea6d40"

void __thiscall FUN_10ea6d40(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x10);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x14);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
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
          thunk_FUN_1086f2f0(pSVar1,piVar6[2]);
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
          thunk_FUN_1086f2f0(pSVar1,piVar6[2]);
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

SCStr * __thiscall FUN_10eab7c0(SCStr *param_1,SCStr *param_2)

{
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
      thunk_FUN_1086f2f0(pSVar1,piVar6[2]);
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


// Reference entry 10ead200; body size 103 bytes.
#line 1 "ENTRY_10ead200"

undefined4 * __thiscall FUN_10ead200(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ead280; body size 103 bytes.
#line 1 "ENTRY_10ead280"

undefined4 * __thiscall FUN_10ead280(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ebe080; body size 202 bytes.
#line 1 "ENTRY_10ebe080"

SCStr * FUN_10ebe080(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  SCStr *pSVar2;
  SCStr *pSVar3;
  
  if (param_1 != param_2) {
    pSVar2 = param_3 + 0x14;
    pSVar3 = param_1 + 0x14;
    do {
      if (pSVar3 + -0x14 != param_3) {
        (param_3)->int_release();
        *(undefined4 *)param_3 = *(undefined4 *)(pSVar3 + -0x14);
        (param_3)->int_addref();
      }
      *(undefined4 *)(pSVar2 + -0xc) = *(undefined4 *)(pSVar3 + -0xc);
      if (pSVar2 != pSVar3) {
        thunk_FUN_10604820();
        *(undefined4 *)(pSVar2 + -8) = *(undefined4 *)(pSVar3 + -8);
        *(undefined4 *)(pSVar2 + -4) = *(undefined4 *)(pSVar3 + -4);
        *(undefined4 *)pSVar2 = *(undefined4 *)pSVar3;
        *(undefined4 *)(pSVar3 + -8) = 0;
        *(undefined4 *)(pSVar3 + -4) = 0;
        *(undefined4 *)pSVar3 = 0;
      }
      pSVar1 = pSVar3 + 4;
      if (pSVar2 + 4 != pSVar1) {
        thunk_FUN_10604790();
        *(undefined4 *)(pSVar2 + 4) = *(undefined4 *)pSVar1;
        *(undefined4 *)(pSVar2 + 8) = *(undefined4 *)(pSVar3 + 8);
        *(undefined4 *)(pSVar2 + 0xc) = *(undefined4 *)(pSVar3 + 0xc);
        *(undefined4 *)pSVar1 = 0;
        *(undefined4 *)(pSVar3 + 8) = 0;
        *(undefined4 *)(pSVar3 + 0xc) = 0;
      }
      param_3 = param_3 + 0x24;
      pSVar2 = pSVar2 + 0x24;
      pSVar1 = pSVar3 + 0x10;
      pSVar3 = pSVar3 + 0x24;
    } while (pSVar1 != param_2);
    return param_3;
  }
  return param_3;
}


// Reference entry 10ec2b30; body size 152 bytes.
#line 1 "ENTRY_10ec2b30"

SCStr * __thiscall FUN_10ec2b30(SCStr *param_1,SCStr *param_2)

{
  SCStr *pSVar1;
  
  if (param_2 != param_1) {
    (param_1)->int_release();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    (param_1)->int_addref();
  }
  pSVar1 = param_2 + 0xc;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  if (param_1 + 0xc != pSVar1) {
    thunk_FUN_10604820();
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)pSVar1;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)pSVar1 = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
  }
  pSVar1 = param_2 + 0x18;
  if (param_1 + 0x18 != pSVar1) {
    thunk_FUN_10604790();
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)pSVar1;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)pSVar1 = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  return param_1;
}


// Reference entry 10ed0ef0; body size 121 bytes.
#line 1 "ENTRY_10ed0ef0"

SCStr * __thiscall FUN_10ed0ef0(SCStr *param_1,SCStr *param_2)

{
  SCStr *pSVar1;
  
  if (param_2 != param_1) {
    (param_1)->int_release();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    (param_1)->int_addref();
  }
  pSVar1 = param_1 + 8;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  if (param_2 + 8 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 8);
    (pSVar1)->int_addref();
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  pSVar1 = param_1 + 0x14;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  if (param_2 + 0x14 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)(param_2 + 0x14);
    (pSVar1)->int_addref();
  }
  param_1[0x18] = param_2[0x18];
  return param_1;
}


// Reference entry 10ee0c10; body size 103 bytes.
#line 1 "ENTRY_10ee0c10"

undefined4 * __thiscall FUN_10ee0c10(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ee1790; body size 103 bytes.
#line 1 "ENTRY_10ee1790"

undefined4 * __thiscall FUN_10ee1790(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ee8760; body size 103 bytes.
#line 1 "ENTRY_10ee8760"

undefined4 * __thiscall FUN_10ee8760(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10eed620; body size 103 bytes.
#line 1 "ENTRY_10eed620"

undefined4 * __thiscall FUN_10eed620(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ef2b60; body size 103 bytes.
#line 1 "ENTRY_10ef2b60"

undefined4 * __thiscall FUN_10ef2b60(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ef2be0; body size 69 bytes.
#line 1 "ENTRY_10ef2be0"

void __thiscall FUN_10ef2be0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10efb170; body size 138 bytes.
#line 1 "ENTRY_10efb170"

SCStr * __thiscall FUN_10efb170(int param_1,SCStr *param_2,int param_3)

{
  int iVar1;
  undefined1 local_c [8];
  int local_4;
  
  iVar1 = param_3;
  if ((param_3 == 3) && (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 3 != 0)) {
    thunk_FUN_10c98c80(param_2);
    return param_2;
  }
  thunk_FUN_10ef9890(local_c,&param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     ((*(int *)(local_4 + 0x10) <= iVar1 && (local_4 != *(int *)(param_1 + 0x2c))))) {
    thunk_FUN_10c98c80(param_2);
    return param_2;
  }
  (param_2)->int_allocRep("");
  return param_2;
}


// Reference entry 10effb70; body size 87 bytes.
#line 1 "ENTRY_10effb70"

SCStr * __thiscall FUN_10effb70(int param_1,SCStr *param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 3;
  if (uVar1 != 0) {
    if (param_3 != '\0') {
      thunk_FUN_10c98c80(param_2);
      return param_2;
    }
    if (1 < uVar1) {
      thunk_FUN_10c98c80(param_2);
      return param_2;
    }
  }
  (param_2)->int_allocRep("");
  return param_2;
}


// Reference entry 10f04d30; body size 103 bytes.
#line 1 "ENTRY_10f04d30"

undefined4 * __thiscall FUN_10f04d30(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f13cb0; body size 103 bytes.
#line 1 "ENTRY_10f13cb0"

undefined4 * __thiscall FUN_10f13cb0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpSubmitDiagnostics");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f13d30; body size 103 bytes.
#line 1 "ENTRY_10f13d30"

undefined4 * __thiscall FUN_10f13d30(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpSubmitDiagnostics");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f13db0; body size 103 bytes.
#line 1 "ENTRY_10f13db0"

undefined4 * __thiscall FUN_10f13db0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpSubmitDiagnostics");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f13f00; body size 69 bytes.
#line 1 "ENTRY_10f13f00"

void __thiscall FUN_10f13f00(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f13f60; body size 69 bytes.
#line 1 "ENTRY_10f13f60"

void __thiscall FUN_10f13f60(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f13fc0; body size 69 bytes.
#line 1 "ENTRY_10f13fc0"

void __thiscall FUN_10f13fc0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f1cb00; body size 96 bytes.
#line 1 "ENTRY_10f1cb00"

SCStr * __thiscall FUN_10f1cb00(SCStr *param_1,SCStr *param_2)

{
  SCStr *pSVar1;
  
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
  return param_1;
}


// Reference entry 10f228d0; body size 103 bytes.
#line 1 "ENTRY_10f228d0"

undefined4 * __thiscall FUN_10f228d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f2aa90; body size 99 bytes.
#line 1 "ENTRY_10f2aa90"

bool __thiscall FUN_10f2aa90(int param_1,SCStr *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = *(uint *)(param_1 + 0x590);
  uVar4 = *(int *)(param_1 + 0x594) + uVar3;
  if (((int *)(param_1 + 0x584) == (int *)0x0) ||
     (piVar1 = *(int **)(param_1 + 0x584), piVar1 == (int *)0x0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  bVar5 = uVar3 == uVar4;
  if (!bVar5) {
    do {
      bVar5 = ((SCStr *)(*(int *)(*(int *)(iVar2 + 4) +
                                                  (uVar3 >> 1 & *(int *)(iVar2 + 8) - 1U) * 4) +
                                         (uVar3 & 1) * 8))->operator==(param_2);
      if (bVar5) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
    bVar5 = uVar3 == uVar4;
  }
  return !bVar5;
}


// Reference entry 10f2bf40; body size 103 bytes.
#line 1 "ENTRY_10f2bf40"

undefined4 * __thiscall FUN_10f2bf40(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f2cdb0; body size 69 bytes.
#line 1 "ENTRY_10f2cdb0"

void __thiscall FUN_10f2cdb0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f36120; body size 103 bytes.
#line 1 "ENTRY_10f36120"

undefined4 * __thiscall FUN_10f36120(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f361a0; body size 103 bytes.
#line 1 "ENTRY_10f361a0"

undefined4 * __thiscall FUN_10f361a0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f36220; body size 103 bytes.
#line 1 "ENTRY_10f36220"

undefined4 * __thiscall FUN_10f36220(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f362a0; body size 103 bytes.
#line 1 "ENTRY_10f362a0"

undefined4 * __thiscall FUN_10f362a0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f36320; body size 69 bytes.
#line 1 "ENTRY_10f36320"

void __thiscall FUN_10f36320(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f36380; body size 69 bytes.
#line 1 "ENTRY_10f36380"

void __thiscall FUN_10f36380(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f363e0; body size 69 bytes.
#line 1 "ENTRY_10f363e0"

void __thiscall FUN_10f363e0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f36440; body size 69 bytes.
#line 1 "ENTRY_10f36440"

void __thiscall FUN_10f36440(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f3ee80; body size 103 bytes.
#line 1 "ENTRY_10f3ee80"

undefined4 * __thiscall FUN_10f3ee80(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f3ef00; body size 103 bytes.
#line 1 "ENTRY_10f3ef00"

undefined4 * __thiscall FUN_10f3ef00(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f42e50; body size 103 bytes.
#line 1 "ENTRY_10f42e50"

undefined4 * __thiscall FUN_10f42e50(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCINowPlaying");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f47070; body size 193 bytes.
#line 1 "ENTRY_10f47070"

void __thiscall FUN_10f47070(int param_1,SCStr *param_2,SCStr *param_3,uint param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = (param_2)->operator==((SCStr *)(param_1 + 0x80));
  if ((bVar2) &&
     (((*(char **)param_3 == (char *)0x0 || (**(char **)param_3 == '\0')) ||
      (bVar2 = (param_3)->operator==("Q:0"), bVar2)))) {
    piVar1 = (int *)(param_1 + -0x254);
    *(undefined1 *)(param_1 + -400) = 0;
    cVar3 = (**(code **)(*(int *)(param_1 + -0x254) + 0xfc))();
    if ((cVar3 == '\0') || (param_4 < *(uint *)(param_1 + 0x88))) {
      thunk_FUN_112af4e0("PlayQueue",1,"UpdateID = %lu",param_4);
    }
    else {
      thunk_FUN_112af4e0("PlayQueue",1,"UpdateID = %lu --> re-enable events!",param_4);
      (**(code **)(*piVar1 + 0x100))(0);
    }
    cVar3 = (**(code **)(*piVar1 + 0xfc))();
    if (cVar3 == '\0') {
      (**(code **)(*piVar1 + 0x94))();
    }
  }
  return;
}


// Reference entry 10f478b0; body size 103 bytes.
#line 1 "ENTRY_10f478b0"

undefined4 * __thiscall FUN_10f478b0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIPlayQueue");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f47a50; body size 103 bytes.
#line 1 "ENTRY_10f47a50"

undefined4 * __thiscall FUN_10f47a50(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIPlayQueue");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f48ce0; body size 103 bytes.
#line 1 "ENTRY_10f48ce0"

undefined4 * __thiscall FUN_10f48ce0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIArea");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f4c9c0; body size 103 bytes.
#line 1 "ENTRY_10f4c9c0"

undefined4 * __thiscall FUN_10f4c9c0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIGroupVolume");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f4cb60; body size 103 bytes.
#line 1 "ENTRY_10f4cb60"

undefined4 * __thiscall FUN_10f4cb60(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIDeviceVolume");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f51510; body size 117 bytes.
#line 1 "ENTRY_10f51510"

undefined4 * __thiscall FUN_10f51510(int param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    piVar2 = (int *)(-(uint)(param_1 != 0) & param_1 + 0x10U);
    *param_2 = (undefined4)piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
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
      (**(code **)(*piVar2 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f515b0; body size 103 bytes.
#line 1 "ENTRY_10f515b0"

undefined4 * __thiscall FUN_10f515b0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f61600; body size 79 bytes.
#line 1 "ENTRY_10f61600"

SCStr * __thiscall FUN_10f61600(int param_1,SCStr *param_2)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  
  bVar1 = ((SCStr *)(param_1 + 0x18))->operator==("R_AirplayIncludeLinked");
  if (bVar1) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x28))();
    pcVar3 = "1";
    if (cVar2 == '\0') {
      pcVar3 = "0";
    }
    (param_2)->int_allocRep(pcVar3);
    return param_2;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(param_2);
  return param_2;
}


// Reference entry 10f620f0; body size 103 bytes.
#line 1 "ENTRY_10f620f0"

undefined4 * __thiscall FUN_10f620f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlGetIRRepeaterState");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f62170; body size 103 bytes.
#line 1 "ENTRY_10f62170"

undefined4 * __thiscall FUN_10f62170(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlSetIRRepeaterState");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f621f0; body size 103 bytes.
#line 1 "ENTRY_10f621f0"

undefined4 * __thiscall FUN_10f621f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlSetLEDFeedbackState");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f62270; body size 103 bytes.
#line 1 "ENTRY_10f62270"

undefined4 * __thiscall FUN_10f62270(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpRenderingControlGetRoomCalibrationStatus");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f622f0; body size 103 bytes.
#line 1 "ENTRY_10f622f0"

undefined4 * __thiscall FUN_10f622f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlGetIRRepeaterState");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f62370; body size 103 bytes.
#line 1 "ENTRY_10f62370"

undefined4 * __thiscall FUN_10f62370(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlSetIRRepeaterState");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f623f0; body size 103 bytes.
#line 1 "ENTRY_10f623f0"

undefined4 * __thiscall FUN_10f623f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpHTControlSetLEDFeedbackState");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f62470; body size 103 bytes.
#line 1 "ENTRY_10f62470"

undefined4 * __thiscall FUN_10f62470(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpRenderingControlGetRoomCalibrationStatus");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f62fc0; body size 69 bytes.
#line 1 "ENTRY_10f62fc0"

void __thiscall FUN_10f62fc0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f63020; body size 69 bytes.
#line 1 "ENTRY_10f63020"

void __thiscall FUN_10f63020(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f63080; body size 69 bytes.
#line 1 "ENTRY_10f63080"

void __thiscall FUN_10f63080(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f630e0; body size 69 bytes.
#line 1 "ENTRY_10f630e0"

void __thiscall FUN_10f630e0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f678f0; body size 103 bytes.
#line 1 "ENTRY_10f678f0"

undefined4 * __thiscall FUN_10f678f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpContentDirectoryGetAlbumArtistDisplayOption");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f67970; body size 103 bytes.
#line 1 "ENTRY_10f67970"

undefined4 * __thiscall FUN_10f67970(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f679f0; body size 103 bytes.
#line 1 "ENTRY_10f679f0"

undefined4 * __thiscall FUN_10f679f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpContentDirectoryGetAlbumArtistDisplayOption");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f68560; body size 69 bytes.
#line 1 "ENTRY_10f68560"

void __thiscall FUN_10f68560(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f69070; body size 105 bytes.
#line 1 "ENTRY_10f69070"

void __thiscall FUN_10f69070(int param_1,SCStr *param_2,undefined4 param_3)

{
  bool bVar1;
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x1c))(param_2,param_3);
  bVar1 = (param_2)->operator==("mlUpdateTime");
  if (bVar1) {
    thunk_FUN_10f68af0();
    return;
  }
  bVar1 = (param_2)->operator==("mlCompilations");
  if (bVar1) {
    thunk_FUN_10f68710();
    return;
  }
  bVar1 = (param_2)->operator==("mlSortBy");
  if (bVar1) {
    thunk_FUN_10f68e70();
  }
  return;
}


// Reference entry 10f73640; body size 103 bytes.
#line 1 "ENTRY_10f73640"

undefined4 * __thiscall FUN_10f73640(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f73730; body size 69 bytes.
#line 1 "ENTRY_10f73730"

void __thiscall FUN_10f73730(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f7a100; body size 103 bytes.
#line 1 "ENTRY_10f7a100"

undefined4 * __thiscall FUN_10f7a100(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAlarmSave");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f7a180; body size 103 bytes.
#line 1 "ENTRY_10f7a180"

undefined4 * __thiscall FUN_10f7a180(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAlarm");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f7a5b0; body size 69 bytes.
#line 1 "ENTRY_10f7a5b0"

void __thiscall FUN_10f7a5b0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f80cd0; body size 103 bytes.
#line 1 "ENTRY_10f80cd0"

undefined4 * __thiscall FUN_10f80cd0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f80d50; body size 103 bytes.
#line 1 "ENTRY_10f80d50"

undefined4 * __thiscall FUN_10f80d50(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f80dd0; body size 69 bytes.
#line 1 "ENTRY_10f80dd0"

void __thiscall FUN_10f80dd0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f80e30; body size 69 bytes.
#line 1 "ENTRY_10f80e30"

void __thiscall FUN_10f80e30(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f8e410; body size 103 bytes.
#line 1 "ENTRY_10f8e410"

undefined4 * __thiscall FUN_10f8e410(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f8e490; body size 103 bytes.
#line 1 "ENTRY_10f8e490"

undefined4 * __thiscall FUN_10f8e490(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f8e510; body size 103 bytes.
#line 1 "ENTRY_10f8e510"

undefined4 * __thiscall FUN_10f8e510(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10f8e590; body size 69 bytes.
#line 1 "ENTRY_10f8e590"

void __thiscall FUN_10f8e590(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f8e5f0; body size 69 bytes.
#line 1 "ENTRY_10f8e5f0"

void __thiscall FUN_10f8e5f0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10f8e650; body size 69 bytes.
#line 1 "ENTRY_10f8e650"

void __thiscall FUN_10f8e650(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 10fa35e0; body size 107 bytes.
#line 1 "ENTRY_10fa35e0"

void __fastcall FUN_10fa35e0(int param_1)

{
  int extraout_ECX;
  char *pcVar1;
  int iStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10fa3646;
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
      return;
    }
    iStack_c = 0x10fa361e;
    thunk_FUN_10fa0090();
    pcVar1 = "subwizard_completed";
    iStack_c = extraout_ECX;
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10fa360d;
      (**(code **)(**(int **)(param_1 + 4) + 0xac))();
      return;
    }
    pcVar1 = "back_from_subwizard";
    iStack_c = param_1;
  }
  ((SCStr *)&iStack_c)->int_allocRep(pcVar1);
  (**(code **)(**(int **)(param_1 + 4) + 0x8c))();
  return;
}


// Reference entry 10fa36e0; body size 103 bytes.
#line 1 "ENTRY_10fa36e0"

undefined4 * __thiscall FUN_10fa36e0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fa9d30; body size 107 bytes.
#line 1 "ENTRY_10fa9d30"

void __fastcall FUN_10fa9d30(int param_1)

{
  int extraout_ECX;
  char *pcVar1;
  int iStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10fa9d96;
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
      return;
    }
    iStack_c = 0x10fa9d6e;
    thunk_FUN_10fa7300();
    pcVar1 = "subwizard_completed";
    iStack_c = extraout_ECX;
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10fa9d5d;
      (**(code **)(**(int **)(param_1 + 4) + 0xac))();
      return;
    }
    pcVar1 = "back_from_subwizard";
    iStack_c = param_1;
  }
  ((SCStr *)&iStack_c)->int_allocRep(pcVar1);
  (**(code **)(**(int **)(param_1 + 4) + 0x8c))();
  return;
}


// Reference entry 10fa9e20; body size 103 bytes.
#line 1 "ENTRY_10fa9e20"

undefined4 * __thiscall FUN_10fa9e20(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fb8f40; body size 175 bytes.
#line 1 "ENTRY_10fb8f40"

SCStr * FUN_10fb8f40(SCStr *param_1,int param_2)

{
  switch(param_2) {
  case 1:
    (param_1)->int_allocRep("passed");
    return param_1;
  case 2:
    (param_1)->int_allocRep("failed");
    return param_1;
  default:
    (param_1)->int_allocRep("invalid");
    return param_1;
  case 4:
    (param_1)->int_allocRep("error");
    return param_1;
  case -1:
  case 0:
    break;
  }
  if (param_2 == -1) {
    (param_1)->int_allocRep("canceled");
    return param_1;
  }
  if (param_2 != 0) {
    (param_1)->int_allocRep("unknown");
    return param_1;
  }
  (param_1)->int_allocRep("default");
  return param_1;
}


// Reference entry 10fbcea0; body size 103 bytes.
#line 1 "ENTRY_10fbcea0"

undefined4 * __thiscall FUN_10fbcea0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIWizard");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fc94e0; body size 107 bytes.
#line 1 "ENTRY_10fc94e0"

void __fastcall FUN_10fc94e0(int param_1)

{
  int extraout_ECX;
  char *pcVar1;
  int iStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10fc9546;
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
      return;
    }
    iStack_c = 0x10fc951e;
    thunk_FUN_10fc5a10();
    pcVar1 = "subwizard_completed";
    iStack_c = extraout_ECX;
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iStack_c = 0x10fc950d;
      (**(code **)(**(int **)(param_1 + 4) + 0xac))();
      return;
    }
    pcVar1 = "back_from_subwizard";
    iStack_c = param_1;
  }
  ((SCStr *)&iStack_c)->int_allocRep(pcVar1);
  (**(code **)(**(int **)(param_1 + 4) + 0x8c))();
  return;
}


// Reference entry 10fc95e0; body size 103 bytes.
#line 1 "ENTRY_10fc95e0"

undefined4 * __thiscall FUN_10fc95e0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fcb7d0; body size 72 bytes.
#line 1 "ENTRY_10fcb7d0"

SCStr * __thiscall FUN_10fcb7d0(int *param_1,SCStr *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = (**(code **)(*param_1 + 0xcc))();
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0xcc))();
    pcVar3 = (char *)thunk_FUN_11456530(uVar2);
    (param_2)->int_allocRep(pcVar3);
    return param_2;
  }
  (**(code **)(*param_1 + 0x9c))(param_2);
  return param_2;
}


// Reference entry 10fcbb30; body size 95 bytes.
#line 1 "ENTRY_10fcbb30"

void __thiscall FUN_10fcbb30(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x88);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x8c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}


// Reference entry 10fcf470; body size 103 bytes.
#line 1 "ENTRY_10fcf470"

undefined4 * __thiscall FUN_10fcf470(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fcf4f0; body size 103 bytes.
#line 1 "ENTRY_10fcf4f0"

undefined4 * __thiscall FUN_10fcf4f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fd25c0; body size 119 bytes.
#line 1 "ENTRY_10fd25c0"

undefined4 * __thiscall FUN_10fd25c0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsProperty");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCITimeSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10fddaf0; body size 94 bytes.
#line 1 "ENTRY_10fddaf0"

void __fastcall FUN_10fddaf0(int param_1)

{
  undefined1 uVar1;
  undefined4 uStack_14;
  char *pcStack_10;
  uint uStack_c;
  
  uStack_c = 0x10fddafe;
  uStack_c = (**(code **)(**(int **)(param_1 + -0xc) + 0x7c))();
  uStack_c = uStack_c & 0xff;
  pcStack_10 = "refresh: %d";
  uStack_14 = 1;
  thunk_FUN_112af4e0("SCAlarmSettingsShuffleMusicItem");
  uStack_c = 0x10fddb20;
  uVar1 = (**(code **)(**(int **)(param_1 + -0xc) + 0x7c))();
  uStack_c = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xb8) + 0x10) = uVar1;
  if (param_1 == 0x18) {
    param_1 = 0;
  }
  uStack_14 = 0;
  pcStack_10 = (char *)param_1;
  ((SCStr *)&uStack_14)->int_allocRep("SCIBrowseItem:onItemChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10fddd20; body size 100 bytes.
#line 1 "ENTRY_10fddd20"

void __fastcall FUN_10fddd20(int param_1)

{
  undefined1 uVar1;
  undefined4 uStack_14;
  char *pcStack_10;
  uint uStack_c;
  
  uStack_c = 0x10fddd31;
  uStack_c = (**(code **)(**(int **)(param_1 + -0xc) + 0x9c))();
  uStack_c = uStack_c & 0xff;
  pcStack_10 = "refresh: %d";
  uStack_14 = 4;
  thunk_FUN_112af4e0("SCAlarmSettingsSnoozeItem");
  uStack_c = 0x10fddd56;
  uVar1 = (**(code **)(**(int **)(param_1 + -0xc) + 0x9c))();
  uStack_c = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xb8) + 0x10) = uVar1;
  if (param_1 == 0x18) {
    param_1 = 0;
  }
  uStack_14 = 0;
  pcStack_10 = (char *)param_1;
  ((SCStr *)&uStack_14)->int_allocRep("SCIBrowseItem:onItemChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10fe3570; body size 103 bytes.
#line 1 "ENTRY_10fe3570"

undefined4 * __thiscall FUN_10fe3570(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fe35f0; body size 103 bytes.
#line 1 "ENTRY_10fe35f0"

undefined4 * __thiscall FUN_10fe35f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fe3670; body size 103 bytes.
#line 1 "ENTRY_10fe3670"

undefined4 * __thiscall FUN_10fe3670(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionDelegate");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fe5880; body size 103 bytes.
#line 1 "ENTRY_10fe5880"

undefined4 * __thiscall FUN_10fe5880(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fe6da0; body size 103 bytes.
#line 1 "ENTRY_10fe6da0"

undefined4 * __thiscall FUN_10fe6da0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fe6e20; body size 119 bytes.
#line 1 "ENTRY_10fe6e20"

undefined4 * __thiscall FUN_10fe6e20(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionWithIntDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10fe8550; body size 103 bytes.
#line 1 "ENTRY_10fe8550"

undefined4 * __thiscall FUN_10fe8550(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fe85d0; body size 103 bytes.
#line 1 "ENTRY_10fe85d0"

undefined4 * __thiscall FUN_10fe85d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fe8650; body size 103 bytes.
#line 1 "ENTRY_10fe8650"

undefined4 * __thiscall FUN_10fe8650(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10fe86d0; body size 119 bytes.
#line 1 "ENTRY_10fe86d0"

undefined4 * __thiscall FUN_10fe86d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionWithIntDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 10ff0de0; body size 97 bytes.
#line 1 "ENTRY_10ff0de0"

void __thiscall FUN_10ff0de0(int param_1,int param_2,SCStr *param_3)

{
  bool bVar1;
  char cVar2;
  SCStr aSStack_10 [4];
  int iStack_c;
  
  if ((*(int *)(param_1 + 8) == param_2) && (param_2 != 0)) {
    iStack_c = 0x10ff0dfe;
    bVar1 = (param_3)->operator==("SCIBrowseDataSource:onInvalidation");
    if (bVar1) {
      cVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x90))();
      if (cVar2 == '\0') {
        (**(code **)(**(int **)(param_1 + 8) + 0x94))();
        return;
      }
      iStack_c = param_1 + -0x18;
      (aSStack_10)->int_allocRep("SCIBrowseItem:onItemChanged");
      thunk_FUN_102c7300();
    }
  }
  return;
}


// Reference entry 10ff0e60; body size 100 bytes.
#line 1 "ENTRY_10ff0e60"

void __thiscall FUN_10ff0e60(int param_1,int param_2,SCStr *param_3)

{
  bool bVar1;
  char cVar2;
  
  if ((param_2 != *(int *)(param_1 + 0x28)) ||
     (bVar1 = (param_3)->operator==("SCIServiceDescriptorManager:onServiceDescriptorsChanged"),
     !bVar1)) {
    bVar1 = (param_3)->operator==(":onFavoritesChanged");
    if (bVar1) {
      thunk_FUN_10ff6240(0,1);
    }
    return;
  }
  if (*(int **)(param_1 + 0x48) == (int *)0x0) {
    return;
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 0x3c))();
  if (cVar2 == '\0') {
    return;
  }
  thunk_FUN_10ff3290();
  return;
}


// Reference entry 10ff1b10; body size 71 bytes.
#line 1 "ENTRY_10ff1b10"

SCStr * FUN_10ff1b10(SCStr *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = thunk_FUN_10ff8d30();
  if ((cVar1 == '\0') && (param_2 == 2)) {
    (param_1)->int_allocRep("emptyfavorites");
    return param_1;
  }
  thunk_FUN_104d8ba0(param_1,param_2,param_3);
  return param_1;
}


// Reference entry 10ff84d0; body size 103 bytes.
#line 1 "ENTRY_10ff84d0"

undefined4 * __thiscall FUN_10ff84d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ff8550; body size 103 bytes.
#line 1 "ENTRY_10ff8550"

undefined4 * __thiscall FUN_10ff8550(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ff85e0; body size 153 bytes.
#line 1 "ENTRY_10ff85e0"

undefined4 * __thiscall FUN_10ff85e0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = (param_3)->operator==("SCIBrowseDataSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return param_2;
    }
  }
  else {
    bVar1 = (param_3)->operator==("SCIReorderable");
    if (bVar1) {
      piVar2 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x20));
      *param_2 = (undefined4)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
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
        (**(code **)(*param_1 + 4))();
      }
    }
  }
  return param_2;
}


// Reference entry 10ff86c0; body size 103 bytes.
#line 1 "ENTRY_10ff86c0"

undefined4 * __thiscall FUN_10ff86c0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBrowseItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ffbb30; body size 103 bytes.
#line 1 "ENTRY_10ffbb30"

undefined4 * __thiscall FUN_10ffbb30(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIEventSink");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 10ffd0d0; body size 103 bytes.
#line 1 "ENTRY_10ffd0d0"

undefined4 * __thiscall FUN_10ffd0d0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISettingsMenuItem");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11002fc0; body size 103 bytes.
#line 1 "ENTRY_11002fc0"

undefined4 * __thiscall FUN_11002fc0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11003050; body size 103 bytes.
#line 1 "ENTRY_11003050"

undefined4 * __thiscall FUN_11003050(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIInfoViewTextPaneMetadata");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 110183f0; body size 103 bytes.
#line 1 "ENTRY_110183f0"

undefined4 * __thiscall FUN_110183f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpCheckForControllerUpdates");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11018540; body size 69 bytes.
#line 1 "ENTRY_11018540"

void __thiscall FUN_11018540(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 11019480; body size 103 bytes.
#line 1 "ENTRY_11019480"

undefined4 * __thiscall FUN_11019480(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCLibSonarAudioSampleCallback");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1101bd70; body size 103 bytes.
#line 1 "ENTRY_1101bd70"

undefined4 * __thiscall FUN_1101bd70(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCINowPlayingRatings");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1101bf10; body size 103 bytes.
#line 1 "ENTRY_1101bf10"

undefined4 * __thiscall FUN_1101bf10(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCINowPlayingRatings");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1101e290; body size 103 bytes.
#line 1 "ENTRY_1101e290"

undefined4 * __thiscall FUN_1101e290(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCINowPlayingSource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11020f20; body size 103 bytes.
#line 1 "ENTRY_11020f20"

undefined4 * __thiscall FUN_11020f20(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCINowPlayingTransport");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11022410; body size 103 bytes.
#line 1 "ENTRY_11022410"

undefined4 * __thiscall FUN_11022410(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCINowPlayingSleepTimer");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1102db80; body size 103 bytes.
#line 1 "ENTRY_1102db80"

undefined4 * __thiscall FUN_1102db80(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1102dc00; body size 103 bytes.
#line 1 "ENTRY_1102dc00"

undefined4 * __thiscall FUN_1102dc00(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIPlayQueueMgr");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1102dda0; body size 103 bytes.
#line 1 "ENTRY_1102dda0"

undefined4 * __thiscall FUN_1102dda0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpQueueReplaceAllTracks");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1102de20; body size 103 bytes.
#line 1 "ENTRY_1102de20"

undefined4 * __thiscall FUN_1102de20(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpQueueReplaceAllTracks");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1102dea0; body size 103 bytes.
#line 1 "ENTRY_1102dea0"

undefined4 * __thiscall FUN_1102dea0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIPlayQueueMgr");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1102df20; body size 103 bytes.
#line 1 "ENTRY_1102df20"

undefined4 * __thiscall FUN_1102df20(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCISonosPlaylist");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 1102e370; body size 69 bytes.
#line 1 "ENTRY_1102e370"

void __thiscall FUN_1102e370(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 11030d40; body size 65 bytes.
#line 1 "ENTRY_11030d40"

SCStr * FUN_11030d40(SCStr *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = thunk_FUN_1106f2b0();
  if (cVar1 != '\0') {
    (param_1)->int_allocRep("restrictedqueue");
    return param_1;
  }
  thunk_FUN_1020b9d0(param_1,param_2);
  return param_1;
}


// Reference entry 11030da0; body size 69 bytes.
#line 1 "ENTRY_11030da0"

SCStr * FUN_11030da0(SCStr *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = thunk_FUN_1106f2b0();
  if (cVar1 != '\0') {
    (param_1)->int_allocRep("restrictedqueue");
    return param_1;
  }
  thunk_FUN_1020ba30(param_1,param_2,param_3);
  return param_1;
}


// Reference entry 11032f80; body size 103 bytes.
#line 1 "ENTRY_11032f80"

undefined4 * __thiscall FUN_11032f80(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIPlayQueueItemState");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 110334f0; body size 103 bytes.
#line 1 "ENTRY_110334f0"

undefined4 * __thiscall FUN_110334f0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIPlayQueueItemState");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11034ef0; body size 103 bytes.
#line 1 "ENTRY_11034ef0"

undefined4 * __thiscall FUN_11034ef0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11037810; body size 103 bytes.
#line 1 "ENTRY_11037810"

undefined4 * __thiscall FUN_11037810(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11037890; body size 103 bytes.
#line 1 "ENTRY_11037890"

undefined4 * __thiscall FUN_11037890(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11037910; body size 103 bytes.
#line 1 "ENTRY_11037910"

undefined4 * __thiscall FUN_11037910(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11037990; body size 119 bytes.
#line 1 "ENTRY_11037990"

undefined4 * __thiscall FUN_11037990(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionWithIntDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 11037a30; body size 103 bytes.
#line 1 "ENTRY_11037a30"

undefined4 * __thiscall FUN_11037a30(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIAction");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11037ab0; body size 119 bytes.
#line 1 "ENTRY_11037ab0"

undefined4 * __thiscall FUN_11037ab0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIActionWithIntDescriptor");
  if ((bVar1) || (bVar1 = (param_3)->operator==("SCIActionDescriptor"), bVar1)) {
    *param_2 = (undefined4)param_1;
    if (param_1 == (int *)0x0) {
      return param_2;
    }
    (**(code **)(*param_1 + 4))();
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
  (**(code **)(*param_1 + 4))();
  return param_2;
}


// Reference entry 1105d8e0; body size 103 bytes.
#line 1 "ENTRY_1105d8e0"

undefined4 * __thiscall FUN_1105d8e0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIObj");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11060b80; body size 103 bytes.
#line 1 "ENTRY_11060b80"

undefined4 * __thiscall FUN_11060b80(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAVTransportGetRemainingSleepTimerDuration");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11060d30; body size 103 bytes.
#line 1 "ENTRY_11060d30"

undefined4 * __thiscall FUN_11060d30(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAVTransportGetRemainingSleepTimerDuration");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11060e80; body size 69 bytes.
#line 1 "ENTRY_11060e80"

void __thiscall FUN_11060e80(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 11061fc0; body size 103 bytes.
#line 1 "ENTRY_11061fc0"

undefined4 * __thiscall FUN_11061fc0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpAddTracksToQueue");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11062110; body size 69 bytes.
#line 1 "ENTRY_11062110"

void __thiscall FUN_11062110(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 11062f50; body size 103 bytes.
#line 1 "ENTRY_11062f50"

undefined4 * __thiscall FUN_11062f50(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpGenericUpdateQueue");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 110630a0; body size 69 bytes.
#line 1 "ENTRY_110630a0"

void __thiscall FUN_110630a0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 11065cb0; body size 103 bytes.
#line 1 "ENTRY_11065cb0"

undefined4 * __thiscall FUN_11065cb0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOp");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11065d30; body size 69 bytes.
#line 1 "ENTRY_11065d30"

void __thiscall FUN_11065d30(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


// Reference entry 11067290; body size 103 bytes.
#line 1 "ENTRY_11067290"

undefined4 * __thiscall FUN_11067290(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIBadgeResource");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 11068020; body size 103 bytes.
#line 1 "ENTRY_11068020"

undefined4 * __thiscall FUN_11068020(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpGetTrackPositionInfo");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 110680a0; body size 103 bytes.
#line 1 "ENTRY_110680a0"

undefined4 * __thiscall FUN_110680a0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (param_3)->operator==("SCIOpGetTrackPositionInfo");
  if (bVar1) {
    *param_2 = (undefined4)param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
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
      (**(code **)(*param_1 + 4))();
    }
  }
  return param_2;
}


// Reference entry 110681f0; body size 69 bytes.
#line 1 "ENTRY_110681f0"

void __thiscall FUN_110681f0(int param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)(param_1 + 0x28);
  if (param_2 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_2;
    (pSVar1)->int_addref();
  }
  pSVar1 = (SCStr *)(param_1 + 0x2c);
  if (param_3 != pSVar1) {
    (pSVar1)->int_release();
    *(undefined4 *)pSVar1 = *(undefined4 *)param_3;
    (pSVar1)->int_addref();
  }
  return;
}


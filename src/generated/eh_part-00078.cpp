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

extern undefined4 DAT_12126b84;
extern int FUN_11113610(...);
extern int _time64(...);
extern int thunk_FUN_1106b260(...);
extern int thunk_FUN_111155f0(...);
extern int thunk_FUN_11119940(...);
extern int thunk_FUN_1111cf00(...);
extern int thunk_FUN_111a36f0(...);
extern undefined4 thunk_FUN_111a7100(...);
extern char thunk_FUN_11262ba0(...);
extern int thunk_FUN_112630e0(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 11113610; body size 414 bytes.
namespace recovered_11113610 {
#line 1 "ENTRY_11113610"

void __thiscall FUN_11113610(int param_1,short param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  __time64_t _Var5;
  undefined4 local_34 [2];
  double local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  undefined2 local_18;
  uint local_14;


  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_34[0] = 0;
  iVar1 = *(int *)(param_1 + 0x148);
  ((void)0);
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  if (param_2 == 0) {
    local_1c = *(undefined4 *)(param_1 + 0x12a);
    local_24 = *(undefined8 *)(param_1 + 0x122);
    local_18 = *(undefined2 *)(param_1 + 0x12e);
    (**(code **)(*(int *)(param_1 + 0x150) + 4))(*(int *)(param_1 + 0x1b0) + 0xd7d0);
    thunk_FUN_112630e0(*(int *)(param_1 + 0x1b0) + 0xd7f8);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0xd818);
    _Var5 = _time64((__time64_t *)0x0);
    *(__time64_t *)(param_1 + 0x168) = _Var5;
    cVar3 = thunk_FUN_11262ba0((undefined8 *)(param_1 + 0x122));
    if (cVar3 != '\0') {
      thunk_FUN_1111cf00();
      *(undefined4 *)(param_1 + 0x174) = 0;
      goto LAB_11113738;
    }
  }
  else {
    if (param_2 != 800) {
      if (*(uint *)(param_1 + 0x174) < 5) {
        *(uint *)(param_1 + 0x174) = *(uint *)(param_1 + 0x174) + 1;
        thunk_FUN_11119940(local_14);
      }
      goto LAB_11113738;
    }
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  *(undefined4 *)(param_1 + 0x174) = 0;
LAB_11113738:
  iVar2 = *(int *)(param_1 + 0x148);
  if (iVar1 != iVar2) {
    thunk_FUN_111a36f0();
    local_2c = (double)iVar2;
    local_34[0] = 4;
    uVar4 = thunk_FUN_111a7100("onTimeGenerationChanged",1,local_34);
    thunk_FUN_1106b260(uVar4);
  }
  thunk_FUN_111155f0();
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

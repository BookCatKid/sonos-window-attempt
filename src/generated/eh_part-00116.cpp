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

extern undefined1 DAT_1186d2ee;
extern undefined4 DAT_12126b84;
extern int FUN_111313d0(...);
extern int thunk_FUN_110828b0(...);
template<class... A> int __stdcall thunk_FUN_11095e00(A...);
extern char thunk_FUN_110d3140(...);
extern int thunk_FUN_1127a080(...);
extern char thunk_FUN_1127c920(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 111313d0; body size 287 bytes.
namespace recovered_111313d0 {
#line 1 "ENTRY_111313d0"

void __fastcall FUN_111313d0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_f38 [323];
  undefined4 local_a2c [323];
  undefined4 local_520 [323];
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  iVar2 = thunk_FUN_110828b0(local_14);
  puVar3 = &DAT_1186d2ee;
  if (*(undefined1 **)(param_1 + 0x560) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_1 + 0x560);
  }
  iVar2 = (**(code **)(*(int *)(iVar2 + 0x1c) + 4))(puVar3,1);
  if ((iVar2 != 0) && (cVar1 = thunk_FUN_110d3140(), cVar1 != '\0')) {
    puVar5 = (undefined4 *)(iVar2 + 0x564);
    puVar4 = puVar5;
    puVar6 = local_f38;
    for (iVar2 = 0x143; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar4 = puVar5;
    puVar6 = local_a2c;
    for (iVar2 = 0x143; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar4 = local_520;
    for (iVar2 = 0x143; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    thunk_FUN_1127a080();
    ((void)0);
    thunk_FUN_1127a080();
    cVar1 = thunk_FUN_1127c920(local_520);
    if (cVar1 == '\0') {
      thunk_FUN_1127a080();
    }
    else {
      thunk_FUN_11095e00(-(uint)(param_1 != 0) & param_1 + 0x1cU);
      thunk_FUN_1127a080();
    }
  }
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

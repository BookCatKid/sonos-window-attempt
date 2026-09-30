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
extern int FUN_1112fc70(...);
extern int thunk_FUN_1127a080(...);
extern int thunk_FUN_1127a750(...);
extern int thunk_FUN_1127bf70(...);
extern char thunk_FUN_1127caf0(...);
extern int thunk_FUN_1148ac28(...);
// Reference entry 1112fc70; body size 208 bytes.
namespace recovered_1112fc70 {
#line 1 "ENTRY_1112fc70"

void FUN_1112fc70(void)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_a24 [322];
  undefined4 local_51c [322];
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_14 = uVar2;
  cVar1 = thunk_FUN_1127caf0(uVar2);
  if ((cVar1 != '\0') && (cVar1 = thunk_FUN_1127caf0(uVar2), cVar1 != '\0')) {
    puVar3 = (undefined4 *)thunk_FUN_1127bf70();
    puVar5 = local_a24;
    for (iVar4 = 0x142; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    ((void)0);
    puVar3 = (undefined4 *)thunk_FUN_1127bf70();
    puVar5 = local_51c;
    for (iVar4 = 0x142; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    ((void)0);
    thunk_FUN_1127a750(local_a24,local_51c);
    thunk_FUN_1127a080();
    thunk_FUN_1127a080();
  }
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

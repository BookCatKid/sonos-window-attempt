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
extern int FUN_110dc650(...);
extern int FUN_110dc9e0(...);
extern int free(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_113cfb70(...);
// Reference entry 110dc650; body size 88 bytes.
namespace recovered_110dc650 {
#line 1 "ENTRY_110dc650"

void __fastcall FUN_110dc650(int *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  puVar1 = (undefined4 *)*param_1;
  ((void)0);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 110dc9e0; body size 116 bytes.
namespace recovered_110dc9e0 {
#line 1 "ENTRY_110dc9e0"

void __fastcall FUN_110dc9e0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;


  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = *(int *)(param_1 + 0xc);
  ((void)0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  ((void)0);
  return;
}


}

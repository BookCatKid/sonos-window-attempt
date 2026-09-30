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
extern int FUN_110e2b70(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_11175b40(...);
extern int thunk_FUN_11175c30(...);
extern int thunk_FUN_111766c0(...);
extern uint thunk_FUN_11176d60(...);
extern int thunk_FUN_1145c720(...);
// Reference entry 110e2b70; body size 167 bytes.
namespace recovered_110e2b70 {
#line 1 "ENTRY_110e2b70"

void __thiscall
FUN_110e2b70(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  iVar1 = thunk_FUN_11128910(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  puVar3 = &DAT_1186d2ee;
  if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_1 + 0x18);
  }
  thunk_FUN_11175b40(*(undefined4 *)(iVar1 + 0x14),puVar3,"search");
  ((void)0);
  uVar2 = thunk_FUN_11176d60(0);
  if ((uVar2 != 0) && (param_4 < uVar2)) {
    iVar1 = thunk_FUN_111766c0(param_4);
    if (iVar1 != 0) {
      thunk_FUN_1145c720(param_2,param_3,"%s:%s",*(undefined4 *)(iVar1 + 4),param_5);
    }
  }
  thunk_FUN_11175c30();
  ((void)0);
  return;
}


}

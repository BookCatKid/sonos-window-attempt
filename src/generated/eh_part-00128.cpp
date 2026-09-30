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

extern undefined4 DAT_119cacb0;
extern undefined4 DAT_12126b84;
extern int FUN_1113ac20(...);
extern int thunk_FUN_111a0cc0(...);
extern int thunk_FUN_1123fce0(...);
// Reference entry 1113ac20; body size 128 bytes.
namespace recovered_1113ac20 {
#line 1 "ENTRY_1113ac20"

int * __thiscall FUN_1113ac20(int param_1,int *param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  uint uVar2;


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  iVar1 = *(int *)(param_1 + 0x2c);
  ((void)0);
  *param_2 = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  ((void)0);
  thunk_FUN_111a0cc0(&DAT_119cacb0);
  ((void)0);
  return param_2;
}


}

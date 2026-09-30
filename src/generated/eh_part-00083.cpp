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
extern int FUN_111155f0(...);
extern int thunk_FUN_1106b260(...);
extern int thunk_FUN_1110ff00(...);
extern int thunk_FUN_111a36f0(...);
extern undefined4 thunk_FUN_111a7100(...);
// Reference entry 111155f0; body size 187 bytes.
namespace recovered_111155f0 {
#line 1 "ENTRY_111155f0"

void __fastcall FUN_111155f0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20 [2];
  double local_18;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  if (((*(int *)(param_1 + 0x1b4) == 0) && (*(int *)(param_1 + 0x1fc) == 0)) &&
     (*(int *)(param_1 + 0x1cc) == 0)) {
    iVar1 = *(int *)(param_1 + 0x50);
    thunk_FUN_1110ff00(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar1 != iVar2) {
      local_20[0] = 0;
      ((void)0);
      thunk_FUN_111a36f0();
      local_18 = (double)iVar2;
      local_20[0] = 4;
      uVar3 = thunk_FUN_111a7100("onTimeStatusChanged",1,local_20);
      thunk_FUN_1106b260(uVar3);
      ((void)0);
      thunk_FUN_111a36f0();
    }
  }
  ((void)0);
  return;
}


}

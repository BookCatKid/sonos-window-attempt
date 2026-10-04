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
extern int FUN_1112c180(...);
extern int thunk_FUN_111a36f0(...);
template<class... A> int __stdcall thunk_FUN_111a4430(A...);
extern undefined4 thunk_FUN_111a7100(...);
extern int thunk_FUN_111a7630(...);
// Reference entry 1112c180; body size 158 bytes.
namespace recovered_1112c180 {
#line 1 "ENTRY_1112c180"

undefined4 FUN_1112c180(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_20 [4];


  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  if (param_1 != 0) {
    local_20[0] = 0;
    ((void)0);
    ((void)0);
    thunk_FUN_111a4430(param_1);
    uVar2 = thunk_FUN_111a7100("OnDeviceEvent",1,local_20);
    thunk_FUN_111a7630(param_1,uVar1);
    ((void)0);
    thunk_FUN_111a36f0();
    ((void)0);
    return uVar2;
  }
  return 0;
}


}

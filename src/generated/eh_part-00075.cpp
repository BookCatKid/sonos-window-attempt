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
extern int FUN_11111e80(...);
extern int thunk_FUN_1106b260(...);
extern char thunk_FUN_1115c580(...);
extern char thunk_FUN_1115c730(...);
extern int thunk_FUN_111a36f0(...);
extern uint thunk_FUN_111a7100(...);
// Reference entry 11111e80; body size 367 bytes.
namespace recovered_11111e80 {
#line 1 "ENTRY_11111e80"

void __thiscall FUN_11111e80(int param_1,short param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  byte bVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_24 [2];
  double local_1c;
  char local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  uVar6 = 0;
  if (param_2 == 0) {
    pcVar4 = (char *)(*(int *)(param_1 + 0x1e0) + 0xd7d4);
    bVar2 = false;
    local_11 = '\0';
    if (*pcVar4 != '\0') {
      cVar3 = thunk_FUN_1115c580(pcVar4,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
      if (*(char *)(param_1 + 0x14d) != cVar3) {
        *(char *)(param_1 + 0x14d) = cVar3;
        bVar2 = true;
      }
    }
    pcVar4 = (char *)(*(int *)(param_1 + 0x1e0) + 0xd7d0);
    if (*pcVar4 != '\0') {
      cVar3 = thunk_FUN_1115c730(pcVar4);
      if (*(char *)(param_1 + 0x14c) != cVar3) {
        *(char *)(param_1 + 0x14c) = cVar3;
        local_11 = '\x01';
      }
    }
    if (bVar2) {
      local_24[0] = 0;
      bVar1 = *(byte *)(param_1 + 0x14d);
      ((void)0);
      thunk_FUN_111a36f0();
      local_1c = (double)bVar1;
      local_24[0] = 4;
      uVar6 = thunk_FUN_111a7100("OnDateFormatChanged",1,local_24);
      ((void)0);
      thunk_FUN_111a36f0();
      ((void)0);
    }
    if (local_11 != '\0') {
      local_24[0] = 0;
      bVar1 = *(byte *)(param_1 + 0x14c);
      ((void)0);
      thunk_FUN_111a36f0();
      local_1c = (double)bVar1;
      local_24[0] = 4;
      uVar5 = thunk_FUN_111a7100("OnTimeFormatChanged",1,local_24);
      uVar6 = uVar6 | uVar5;
      ((void)0);
      thunk_FUN_111a36f0();
    }
  }
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  thunk_FUN_1106b260(uVar6);
  ((void)0);
  return;
}


}

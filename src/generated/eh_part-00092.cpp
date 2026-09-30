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
extern char* DAT_122e8a38;
extern undefined4 * PTR_DAT_12126b6c;
extern int FUN_11123240(...);
extern int FUN_11123780(...);
extern int FUN_11123de0(...);
extern int* _errno(...);
extern int free(...);
extern int memcpy(...);
extern int thunk_FUN_11121720(...);
extern int thunk_FUN_111a10b0(...);
extern int thunk_FUN_111a1880(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145cf60(...);
extern int thunk_FUN_1145d560(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 11123240; body size 109 bytes.
namespace recovered_11123240 {
#line 1 "ENTRY_11123240"

undefined4 *
FUN_11123240(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;


  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  ((void)0);
  *param_1 = 0;
  thunk_FUN_111a10b0(param_1,"x-sonos-logo:%u:%08x:%s",param_2,param_4,param_3,uVar1);
  ((void)0);
  return param_1;
}


}

// Reference entry 11123780; body size 579 bytes.
namespace recovered_11123780 {
#line 1 "ENTRY_11123780"

void __fastcall FUN_11123780(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  int *_Memory;
  char cVar1;
  char *_Src;
  int *_Memory_00;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  size_t _Size;
  int *local_48;
  undefined1 local_44 [6];
  uint local_3e;
  uint local_14;


  _Src = DAT_122e8a38;
  ((void)0);
  ((void)0);
  ((void)0);
  local_14 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if (*(char *)(param_1 + 0x48) == '\0') {
    local_48 = (int *)0x0;
    ((void)0);
    if ((DAT_122e8a38 == (char *)0x0) || (*DAT_122e8a38 == '\0')) {
      thunk_FUN_111a1880(&local_48,"%s/logos",PTR_DAT_12126b6c,local_14);
    }
    else {
      pcVar5 = DAT_122e8a38;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      _Size = (int)pcVar5 - (int)(DAT_122e8a38 + 1);
      _Memory_00 = (int *)thunk_FUN_1148b586(_Size + 0x11);
      piVar4 = _Memory_00 + 4;
      *_Memory_00 = 1;
      _Memory_00[3] = _Size;
      _Memory_00[2] = 0;
      _Memory_00[1] = 0;
      memcpy(piVar4,_Src,_Size);
      piVar3 = local_48;
      *(undefined1 *)((int)piVar4 + _Size) = 0;
      ((void)0);
      if (((local_48 != (int *)0x0) && (_Memory = local_48 + -4, local_48[-4] < 0xffff)) &&
         (iVar2 = thunk_FUN_1123fcd0(_Memory), iVar2 == 0)) {
        piVar3[-2] = 0;
        piVar3[-3] = 0;
        thunk_FUN_113cfb70(piVar3,piVar3[-1]);
        free(_Memory);
      }
      local_48 = piVar4;
      if ((piVar4 != (int *)0x0) && (*_Memory_00 < 0xffff)) {
        thunk_FUN_1123fce0(_Memory_00);
      }
      ((void)0);
      if (((piVar4 != (int *)0x0) && (*_Memory_00 < 0xffff)) &&
         (iVar2 = thunk_FUN_1123fcd0(_Memory_00), iVar2 == 0)) {
        _Memory_00[2] = 0;
        _Memory_00[1] = 0;
        thunk_FUN_113cfb70(piVar4,_Memory_00[3]);
        free(_Memory_00);
      }
    }
    piVar4 = (int *)&DAT_1186d2ee;
    if (local_48 != (int *)0x0) {
      piVar4 = local_48;
    }
    iVar2 = thunk_FUN_1145d560(piVar4,local_44);
    if (iVar2 == 0) {
      if ((local_3e & 0x4000) == 0) {
        piVar4 = (int *)&DAT_1186d2ee;
        if (local_48 != (int *)0x0) {
          piVar4 = local_48;
        }
        thunk_FUN_112af4e0("logocache",0,"%s exists, but is not a directory!",piVar4);
      }
      else {
        *(undefined1 *)(param_1 + 0x48) = 1;
      }
    }
    else {
      piVar4 = (int *)&DAT_1186d2ee;
      if (local_48 != (int *)0x0) {
        piVar4 = local_48;
      }
      iVar2 = thunk_FUN_1145cf60(piVar4,0x1ff);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x48) = 1;
      }
      else {
        piVar4 = (int *)&DAT_1186d2ee;
        if (local_48 != (int *)0x0) {
          piVar4 = local_48;
        }
        piVar3 = _errno();
        thunk_FUN_112af4e0("logocache",0,"Unable to create directory %s; errno=%d",piVar4,*piVar3);
      }
    }
    piVar4 = local_48;
    ((void)0);
    if (((local_48 != (int *)0x0) && (piVar3 = local_48 + -4, local_48[-4] < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0(piVar3), iVar2 == 0)) {
      piVar4[-2] = 0;
      piVar4[-3] = 0;
      thunk_FUN_113cfb70(piVar4,piVar4[-1]);
      free(piVar3);
    }
  }
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 11123de0; body size 190 bytes.
namespace recovered_11123de0 {
#line 1 "ENTRY_11123de0"

void __thiscall FUN_11123de0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = 10000;
  iVar2 = param_3;
  if ((param_3 != 0) && (*(int *)(param_3 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0(param_3 + -0x10,param_3,10000,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  }
  piVar1 = (int *)thunk_FUN_11121720(param_2,iVar2,uVar3);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(param_1,2);
  }
  ((void)0);
  if ((param_3 != 0) && (*(int *)(param_3 + -0x10) < 0xffff)) {
    iVar2 = thunk_FUN_1123fcd0((void *)(param_3 + -0x10));
    if (iVar2 == 0) {
      *(undefined4 *)(param_3 + -8) = 0;
      *(undefined4 *)(param_3 + -0xc) = 0;
      thunk_FUN_113cfb70(param_3,*(undefined4 *)(param_3 + -4));
      free((void *)(param_3 + -0x10));
    }
  }
  ((void)0);
  return;
}


}

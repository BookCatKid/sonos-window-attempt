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
extern byte DAT_1188752c;
extern undefined4 DAT_11916300;
extern byte DAT_1195e30c;
extern undefined4 DAT_119c3c04;
extern undefined4 DAT_119cacb0;
extern undefined4 DAT_12126b84;
extern undefined4 * PTR_DAT_12126b6c;
extern char  s_x_sonosapi_show__119c66d0[];
extern int FUN_1113b2a0(...);
extern int FUN_1113b3c0(...);
extern int FUN_1113c020(...);
extern int FUN_1113dbe0(...);
extern int FUN_1113dd20(...);
extern int FUN_1113dea0(...);
extern int FUN_1113ebd0(...);
extern int FUN_1113ee70(...);
extern int FUN_1113f590(...);
extern int FUN_1113f790(...);
extern int FUN_1113f8c0(...);
extern int FUN_1113fa10(...);
extern int FUN_1113fb00(...);
extern int _close(...);
extern int _invalid_parameter_noinfo_noreturn(...);
extern int free(...);
extern int memcpy(...);
extern int strncmp(...);
extern int thunk_FUN_1012d130(...);
extern undefined1 thunk_FUN_110a5ba0(...);
extern char thunk_FUN_110b9480(...);
extern int thunk_FUN_110ebb70(...);
extern int thunk_FUN_11139c30(...);
extern undefined1 thunk_FUN_11139fd0(...);
extern int thunk_FUN_1113a570(...);
extern int thunk_FUN_1113e2c0(...);
extern int thunk_FUN_1113e4f0(...);
extern int thunk_FUN_1113f590(...);
extern int thunk_FUN_111a0cc0(...);
extern int thunk_FUN_111a1880(...);
extern undefined4 thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a2ec0(...);
extern int thunk_FUN_111a3020(...);
extern undefined4 thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a3310(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4540(...);
extern char thunk_FUN_111a5f10(...);
extern undefined4 thunk_FUN_111a5fc0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112740e0(...);
extern int thunk_FUN_112741b0(...);
extern int thunk_FUN_11274a10(...);
extern int thunk_FUN_11274b50(...);
extern int thunk_FUN_112937c0(...);
extern int thunk_FUN_11293800(...);
extern int thunk_FUN_113b9ec0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145d170(...);
extern int thunk_FUN_1145d330(...);
extern int thunk_FUN_1145d640(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
// Reference entry 1113b2a0; body size 226 bytes.
namespace recovered_1113b2a0 {
#line 1 "ENTRY_1113b2a0"

void __fastcall FUN_1113b2a0(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;


  ((void)0);
  ((void)0);
  ((void)0);
  puVar1 = *(undefined1 **)(param_1 + 0x2c);
  ((void)0);
  if ((puVar1 != (undefined1 *)0x0) && (*(int *)(puVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0(puVar1 + -0x10,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  }
  thunk_FUN_111a0cc0(&DAT_119cacb0);
  puVar3 = &DAT_1186d2ee;
  if (*(undefined1 **)(param_1 + 0x2c) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_1 + 0x2c);
  }
  puVar4 = &DAT_1186d2ee;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  thunk_FUN_1145d330(puVar4,puVar3);
  thunk_FUN_11139c30();
  ((void)0);
  if ((puVar1 != (undefined1 *)0x0) && (*(int *)(puVar1 + -0x10) < 0xffff)) {
    iVar2 = thunk_FUN_1123fcd0(puVar1 + -0x10);
    if (iVar2 == 0) {
      *(undefined4 *)(puVar1 + -8) = 0;
      *(undefined4 *)(puVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(puVar1,*(undefined4 *)(puVar1 + -4));
      free(puVar1 + -0x10);
    }
  }
  ((void)0);
  return;
}


}

// Reference entry 1113b3c0; body size 247 bytes.
namespace recovered_1113b3c0 {
#line 1 "ENTRY_1113b3c0"

undefined1 __thiscall FUN_1113b3c0(int param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  undefined1 uVar2;
  int _FileHandle;
  undefined1 *puVar3;
  undefined1 local_20 [15];
  undefined1 local_11;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  puVar1 = (undefined4 *)(param_1 + 0x2c);
  local_11 = 0;
  thunk_FUN_111a1880(puVar1,"%s/%s",PTR_DAT_12126b6c,"servicestrings",
                     DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  puVar3 = &DAT_1186d2ee;
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*puVar1;
  }
  thunk_FUN_1113a570(puVar3);
  thunk_FUN_111a1880(puVar1,"%s/%s/%d.stl",PTR_DAT_12126b6c,"servicestrings",0);
  puVar3 = &DAT_1186d2ee;
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*puVar1;
  }
  thunk_FUN_1145d640(puVar3);
  _FileHandle = thunk_FUN_1145d170(param_2,0);
  if (-1 < _FileHandle) {
    thunk_FUN_112937c0(_FileHandle);
    ((void)0);
    uVar2 = thunk_FUN_11139fd0(local_20,*(undefined4 *)(param_1 + 0x38));
    _close(_FileHandle);
    thunk_FUN_11293800();
    ((void)0);
    return uVar2;
  }
  ((void)0);
  return local_11;
}


}

// Reference entry 1113c020; body size 353 bytes.
namespace recovered_1113c020 {
#line 1 "ENTRY_1113c020"

void __thiscall FUN_1113c020(int param_1,undefined4 param_2,char *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_2824 [4100];
  undefined1 local_1820 [4100];
  undefined1 local_81c [1028];
  char local_418 [4];
  char acStack_414 [4];
  char acStack_410 [4];
  char acStack_40c [4];
  undefined1 local_408 [1012];
  uint local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_14 = uVar1;
  iVar2 = strncmp(param_3,"x-sonosapi-show:",0x10);
  if (iVar2 == 0) {
    local_418[0] = s_x_sonosapi_show__119c66d0[0];
    local_418[1] = s_x_sonosapi_show__119c66d0[1];
    local_418[2] = s_x_sonosapi_show__119c66d0[2];
    local_418[3] = s_x_sonosapi_show__119c66d0[3];
    acStack_414[0] = s_x_sonosapi_show__119c66d0[4];
    acStack_414[1] = s_x_sonosapi_show__119c66d0[5];
    acStack_414[2] = s_x_sonosapi_show__119c66d0[6];
    acStack_414[3] = s_x_sonosapi_show__119c66d0[7];
    acStack_410[0] = s_x_sonosapi_show__119c66d0[8];
    acStack_410[1] = s_x_sonosapi_show__119c66d0[9];
    acStack_410[2] = s_x_sonosapi_show__119c66d0[10];
    acStack_410[3] = s_x_sonosapi_show__119c66d0[0xb];
    acStack_40c[0] = s_x_sonosapi_show__119c66d0[0xc];
    acStack_40c[1] = s_x_sonosapi_show__119c66d0[0xd];
    acStack_40c[2] = s_x_sonosapi_show__119c66d0[0xe];
    acStack_40c[3] = s_x_sonosapi_show__119c66d0[0xf];
    thunk_FUN_110ebb70(param_3 + 0x10,local_408,0x3f1,uVar1);
    param_3 = local_418;
  }
  thunk_FUN_112740e0(local_1820,0x1001);
  ((void)0);
  thunk_FUN_11274a10("<DIDL-Lite  xmlns:dc=\"http://purl.org/dc/elements/1.1/\"  xmlns:upnp=\"urn:schemas-upnp-org:metadata-1-0/upnp/\"  xmlns=\"urn:schemas-upnp-org:metadata-1-0/DIDL-Lite/\"><item id=\"\" restricted=\"false\">"
                     ,0xc3);
  thunk_FUN_11274b50("dc:title",param_2);
  thunk_FUN_11274b50(&DAT_11916300,param_3);
  thunk_FUN_11274a10("</item>\n</DIDL-Lite>",0x14);
  puVar3 = &DAT_1195e30c;
  if (iVar2 != 0) {
    puVar3 = &DAT_1188752c;
  }
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))
            (puVar3,local_1820,local_81c,0x401,local_2824,0x1001);
  thunk_FUN_112741b0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1113dbe0; body size 247 bytes.
namespace recovered_1113dbe0 {
#line 1 "ENTRY_1113dbe0"

undefined1 __fastcall FUN_1113dbe0(undefined4 *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  char cVar2;
  char *_Src;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  size_t _Size;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  _Src = *(char **)(param_1[1] + 8);
  if ((_Src == (char *)0x0) || (*_Src == '\0')) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    pcVar6 = _Src;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    _Size = (int)pcVar6 - (int)(_Src + 1);
    local_14 = param_1;
    puVar4 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    puVar1 = puVar4 + 4;
    *puVar4 = 1;
    puVar4[3] = _Size;
    puVar4[2] = 0;
    puVar4[1] = 0;
    memcpy(puVar1,_Src,_Size);
    *(undefined1 *)((int)puVar1 + _Size) = 0;
    local_14 = puVar1;
  }
  ((void)0);
  uVar3 = thunk_FUN_110a5ba0(&local_14,"object.container.album.musicAlbum");
  puVar1 = local_14;
  ((void)0);
  if ((local_14 != (undefined4 *)0x0) && (puVar4 = local_14 + -4, (int)local_14[-4] < 0xffff)) {
    iVar5 = thunk_FUN_1123fcd0(puVar4);
    if (iVar5 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar4);
    }
  }
  ((void)0);
  return uVar3;
}


}

// Reference entry 1113dd20; body size 247 bytes.
namespace recovered_1113dd20 {
#line 1 "ENTRY_1113dd20"

undefined1 __fastcall FUN_1113dd20(undefined4 *param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 *puVar1;
  char cVar2;
  char *_Src;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  size_t _Size;
  undefined4 *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  _Src = *(char **)(param_1[1] + 8);
  if ((_Src == (char *)0x0) || (*_Src == '\0')) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    pcVar6 = _Src;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    _Size = (int)pcVar6 - (int)(_Src + 1);
    local_14 = param_1;
    puVar4 = (undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
    puVar1 = puVar4 + 4;
    *puVar4 = 1;
    puVar4[3] = _Size;
    puVar4[2] = 0;
    puVar4[1] = 0;
    memcpy(puVar1,_Src,_Size);
    *(undefined1 *)((int)puVar1 + _Size) = 0;
    local_14 = puVar1;
  }
  ((void)0);
  uVar3 = thunk_FUN_110a5ba0(&local_14,"object.container.person.musicArtist");
  puVar1 = local_14;
  ((void)0);
  if ((local_14 != (undefined4 *)0x0) && (puVar4 = local_14 + -4, (int)local_14[-4] < 0xffff)) {
    iVar5 = thunk_FUN_1123fcd0(puVar4);
    if (iVar5 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar4);
    }
  }
  ((void)0);
  return uVar3;
}


}

// Reference entry 1113dea0; body size 165 bytes.
namespace recovered_1113dea0 {
#line 1 "ENTRY_1113dea0"

undefined1 FUN_1113dea0(void)

{
  undefined4 ghidra_cookie_frame_slot;
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int *_Memory;
  char *local_14;


  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  thunk_FUN_1113e2c0(&local_14);
  ((void)0);
  if ((local_14 != (char *)0x0) && (*local_14 != '\0')) {
    cVar2 = thunk_FUN_110b9480(local_14,uVar3);
    if (cVar2 == '\0') {
      uVar5 = 1;
      goto LAB_1113def4;
    }
  }
  uVar5 = 0;
LAB_1113def4:
  ((void)0);
  if ((local_14 != (char *)0x0) && (_Memory = (int *)(local_14 + -0x10), *_Memory < 0xffff)) {
    iVar4 = thunk_FUN_1123fcd0(_Memory);
    if (iVar4 == 0) {
      uVar1 = *(undefined4 *)(local_14 + -4);
      local_14[-0xffffffff00000008] = '\0';
      local_14[-0xffffffff00000007] = '\0';
      local_14[-0xffffffff00000006] = '\0';
      local_14[-0xffffffff00000005] = '\0';
      local_14[-0xffffffff0000000c] = '\0';
      local_14[-0xffffffff0000000b] = '\0';
      local_14[-0xffffffff0000000a] = '\0';
      local_14[-0xffffffff00000009] = '\0';
      thunk_FUN_113cfb70(local_14,uVar1);
      free(_Memory);
    }
  }
  ((void)0);
  return uVar5;
}


}

// Reference entry 1113ebd0; body size 186 bytes.
namespace recovered_1113ebd0 {
#line 1 "ENTRY_1113ebd0"

undefined1 __thiscall FUN_1113ebd0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 local_20 [4];


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_20[0] = 0;
  ((void)0);
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
LAB_1113ec47:
      cVar1 = thunk_FUN_111a5f10(param_2,local_20);
      goto LAB_1113ec4f;
    }
  }
  else {
    if ((param_1[1] == 0) || (cVar1 = thunk_FUN_111a5f10(param_2,local_20), cVar1 == '\0')) {
      iVar3 = thunk_FUN_1113f590(0);
      if (iVar3 != 0) goto LAB_1113ec47;
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
LAB_1113ec4f:
    if (cVar1 != '\0') {
      uVar4 = thunk_FUN_111a2df0();
      uVar5 = 1;
      *param_3 = uVar4;
      goto LAB_1113ec66;
    }
  }
  uVar5 = 0;
LAB_1113ec66:
  ((void)0);
  thunk_FUN_111a36f0(uVar2);
  ((void)0);
  return uVar5;
}


}

// Reference entry 1113ee70; body size 362 bytes.
namespace recovered_1113ee70 {
#line 1 "ENTRY_1113ee70"

undefined1 __thiscall FUN_1113ee70(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  undefined4 local_24 [4];
  int local_14;


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_24[0] = 0;
  ((void)0);
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
LAB_1113eef1:
      cVar1 = thunk_FUN_111a5f10(param_2,local_24);
      goto LAB_1113eef6;
    }
  }
  else {
    if ((param_1[1] == 0) || (cVar1 = thunk_FUN_111a5f10(param_2,local_24), cVar1 == '\0')) {
      iVar5 = thunk_FUN_1113f590(0);
      if (iVar5 != 0) goto LAB_1113eef1;
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
LAB_1113eef6:
    if (cVar1 != '\0') {
      piVar3 = (int *)thunk_FUN_111a3310(&local_14);
      ((void)0);
      if (piVar3 != param_3) {
        iVar5 = *param_3;
        if (((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) &&
           (iVar4 = thunk_FUN_1123fcd0((void *)(iVar5 + -0x10)), iVar4 == 0)) {
          *(undefined4 *)(iVar5 + -8) = 0;
          *(undefined4 *)(iVar5 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar5,*(undefined4 *)(iVar5 + -4));
          free((void *)(iVar5 + -0x10));
        }
        iVar5 = *piVar3;
        *param_3 = iVar5;
        if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
          thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
        }
      }
      ((void)0);
      if (((local_14 != 0) && (*(int *)(local_14 + -0x10) < 0xffff)) &&
         (iVar5 = thunk_FUN_1123fcd0((void *)(local_14 + -0x10)), iVar5 == 0)) {
        *(undefined4 *)(local_14 + -8) = 0;
        *(undefined4 *)(local_14 + -0xc) = 0;
        thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
        free((void *)(local_14 + -0x10));
      }
      uVar6 = 1;
      goto LAB_1113efb5;
    }
  }
  uVar6 = 0;
LAB_1113efb5:
  ((void)0);
  thunk_FUN_111a36f0(uVar2);
  ((void)0);
  return uVar6;
}


}

// Reference entry 1113f590; body size 400 bytes.
namespace recovered_1113f590 {
#line 1 "ENTRY_1113f590"

void FUN_1113f590(int param_1)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 ****ppppuVar5;
  undefined4 local_64 [4];
  undefined4 local_54 [4];
  undefined4 ***local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_17 [3];
  uint local_14;


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_64[0] = 0;
  local_54[0] = 0;
  ((void)0);
  ((void)0);
  local_14 = uVar2;
  cVar1 = thunk_FUN_111a5f10("CachedState",local_54);
  if ((cVar1 != '\0') && (iVar3 = thunk_FUN_111a2ec0(uVar2), iVar3 != 0)) {
    if (param_1 < 0) {
      iVar3 = thunk_FUN_1113e4f0(local_17,-param_1);
      *(undefined1 *)(iVar3 + -1) = 0x2d;
      puVar4 = (undefined1 *)(iVar3 + -1);
    }
    else {
      puVar4 = (undefined1 *)thunk_FUN_1113e4f0(local_17,param_1);
    }
    local_34 = 0;
    local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
    local_30 = 0xf;
    if (puVar4 != local_17) {
      thunk_FUN_1012d130(puVar4,(int)local_17 - (int)puVar4);
    }
    ((void)0);
    ppppuVar5 = local_44;
    if (0xf < local_30) {
      ppppuVar5 = (undefined4 ****)local_44[0];
    }
    cVar1 = thunk_FUN_111a5f10(ppppuVar5,local_64);
    if (cVar1 == '\0') {
      ((void)0);
      if (0xf < local_30) {
        uVar2 = local_30 + 1;
        ppppuVar5 = (undefined4 ****)local_44[0];
        if (0xfff < uVar2) {
          ppppuVar5 = (undefined4 ****)local_44[0][-1];
          uVar2 = local_30 + 0x24;
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppuVar5))) {
LAB_1113f6d4:
            ((void)0);

            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(ppppuVar5,uVar2);
      }
    }
    else {
      thunk_FUN_111a2ec0();
      ((void)0);
      if (0xf < local_30) {
        uVar2 = local_30 + 1;
        ppppuVar5 = (undefined4 ****)local_44[0];
        if (0xfff < uVar2) {
          ppppuVar5 = (undefined4 ****)local_44[0][-1];
          uVar2 = local_30 + 0x24;
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppuVar5))) goto LAB_1113f6d4;
        }
        thunk_FUN_1148a50e(ppppuVar5,uVar2);
      }
    }
  }
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  thunk_FUN_1148ac28();
  return;
}


}

// Reference entry 1113f790; body size 166 bytes.
namespace recovered_1113f790 {
#line 1 "ENTRY_1113f790"

undefined1
FUN_1113f790(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 local_20 [4];


  ((void)0);
  ((void)0);
  uVar2 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_20[0] = 0;
  ((void)0);
  if (param_3 == 0) {
LAB_1113f7de:
    iVar3 = thunk_FUN_1113f590(param_1);
    if (iVar3 != 0) {
      cVar1 = thunk_FUN_111a5f10(param_2,local_20);
      if (cVar1 != '\0') goto LAB_1113f7fe;
    }
    uVar4 = 0;
  }
  else {
    cVar1 = thunk_FUN_111a5f10(param_2,local_20);
    if (cVar1 == '\0') goto LAB_1113f7de;
LAB_1113f7fe:
    thunk_FUN_111a3020(param_4,param_5);
    uVar4 = 1;
  }
  ((void)0);
  thunk_FUN_111a36f0(uVar2);
  ((void)0);
  return uVar4;
}


}

// Reference entry 1113f8c0; body size 224 bytes.
namespace recovered_1113f8c0 {
#line 1 "ENTRY_1113f8c0"

undefined1 FUN_1113f8c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_20 [4];


  ((void)0);
  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  if (param_2 != 0) {
    cVar1 = thunk_FUN_111a5f10(param_1,param_3);
    if (cVar1 != '\0') {
      ((void)0);
      return 1;
    }
  }
  local_20[0] = 0;
  ((void)0);
  ((void)0);
  cVar1 = thunk_FUN_111a5f10("CachedState",local_20);
  if (cVar1 != '\0') {
    iVar4 = thunk_FUN_111a2ec0(uVar3);
    if (iVar4 != 0) {
      uVar2 = thunk_FUN_111a5f10(param_1,param_3);
      ((void)0);
      thunk_FUN_111a36f0();
      ((void)0);
      goto LAB_1113f984;
    }
  }
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  uVar2 = 0;
LAB_1113f984:
  thunk_FUN_111a36f0();
  ((void)0);
  return uVar2;
}


}

// Reference entry 1113fa10; body size 159 bytes.
namespace recovered_1113fa10 {
#line 1 "ENTRY_1113fa10"

undefined1 FUN_1113fa10(undefined4 param_1,undefined4 param_2)

{
  undefined4 ghidra_cookie_frame_slot;
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_20 [4];


  ((void)0);
  ((void)0);
  uVar3 = DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot;
  ((void)0);
  local_20[0] = 0;
  ((void)0);
  cVar1 = thunk_FUN_111a5f10("CachedState",local_20);
  if (cVar1 != '\0') {
    iVar4 = thunk_FUN_111a2ec0(uVar3);
    if (iVar4 != 0) {
      uVar2 = thunk_FUN_111a5f10(param_1,param_2);
      goto LAB_1113fa80;
    }
  }
  uVar2 = 0;
LAB_1113fa80:
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  thunk_FUN_111a36f0();
  ((void)0);
  return uVar2;
}


}

// Reference entry 1113fb00; body size 211 bytes.
namespace recovered_1113fb00 {
#line 1 "ENTRY_1113fb00"

undefined4 __thiscall FUN_1113fb00(int param_1,int param_2,undefined4 param_3)

{
  undefined4 ghidra_cookie_frame_slot;
  void *_Memory;
  undefined4 uVar1;
  int iVar2;
  int iVar3;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  uVar1 = thunk_FUN_111a32a0(DAT_12126b84 ^ (uint)&ghidra_cookie_frame_slot);
  iVar2 = thunk_FUN_113b9ec0(uVar1,&DAT_119c3c04);
  if (iVar2 == 0) {
    if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
      uVar1 = (**(code **)**(undefined4 **)(param_1 + 0x14))(&param_2);
      ((void)0);
      thunk_FUN_111a4540(uVar1);
      iVar2 = param_2;
      ((void)0);
      if ((param_2 != 0) &&
         (_Memory = (void *)(param_2 + -0x10), *(int *)(param_2 + -0x10) < 0xffff)) {
        iVar3 = thunk_FUN_1123fcd0(_Memory);
        if (iVar3 == 0) {
          *(undefined4 *)(iVar2 + -8) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
          free(_Memory);
        }
      }
    }
    ((void)0);
    return 1;
  }
  uVar1 = thunk_FUN_111a5fc0(param_2,param_3);
  ((void)0);
  return uVar1;
}


}

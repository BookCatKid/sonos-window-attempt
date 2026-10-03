// Bulk recovered functions with mechanical artifact repair.
#define NULL 0
#define TRUE 1
#define FALSE 0
using undefined1 = unsigned char;
using undefined2 = unsigned short;
using undefined4 = unsigned int;
using undefined8 = unsigned long long;
using undefined = unsigned int;
using unsigned_int = unsigned int;
using uint = unsigned int;
using ulong = unsigned long;
using byte = unsigned char;
using ushort = unsigned short;
using longlong = long long;
using float10 = long double;
using code = int(...);
typedef unsigned int size_t;
typedef int FILE;
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef int BOOL;
typedef void *HANDLE;
typedef void *LPVOID;
typedef unsigned int UINT;
typedef long LONG;
typedef long HRESULT;
typedef wchar_t WCHAR;
typedef int int3;
typedef unsigned int uint3;
typedef struct { char _p[3]; } undefined3;
typedef struct { char _p[5]; } undefined5;
typedef struct { char _p[6]; } undefined6;
typedef struct { char _p[7]; } undefined7;
using ulonglong = unsigned long long;
using __time64_t = long long;
typedef long fpos_t;
typedef struct { char _p; } _Mbstatet;
struct GUID { char _pad; };
struct exception { char _pad; };
struct type_info { char _pad; };
extern "C" void *memcpy(void *, const void *, size_t);
extern "C" void *memset(void *, int, size_t);
extern "C" int memcmp(const void *, const void *, size_t);
extern "C" size_t strlen(const char *);
extern "C" size_t wcslen(const wchar_t *);
extern "C" size_t fread(void *, size_t, size_t, FILE *);
extern "C" size_t fwrite(const void *, size_t, size_t, FILE *);
extern "C" void *malloc(size_t);
extern "C" void free(void *);
extern "C" void *calloc(size_t, size_t);
extern "C" void *realloc(void *, size_t);
extern "C" char *strcpy(char *, const char *);
extern "C" wchar_t *wcscpy(wchar_t *, const wchar_t *);
extern "C" char *strstr(char *, const char *);
extern "C" int strcmp(const char *, const char *);
extern "C" int wcscmp(const wchar_t *, const wchar_t *);
struct Recovered_Bulk { char _pad; undefined4 * __thiscall FUN_10116690(undefined4 param_2,undefined4 *param_3); undefined4 * __thiscall FUN_101166c0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); };
using namespace std;
int __fastcall FUN_10116540(int param_1);
undefined4 * __fastcall FUN_10116560(undefined4 *param_1);
undefined4 * __fastcall FUN_10116580(undefined4 *param_1);
undefined4 * __fastcall FUN_101165a0(undefined4 *param_1);
undefined4 * __fastcall FUN_101165c0(undefined4 *param_1);
undefined4 * __fastcall FUN_101165e0(undefined4 *param_1);
undefined4 __fastcall FUN_101166a0(undefined4 param_1);
undefined4 __fastcall FUN_101166b0(undefined4 param_1);
// Reference entry 10116540; body size 19 bytes.
#line 1 "ENTRY_10116540"

int __fastcall FUN_10116540(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return (int)(param_1);
}


// Reference entry 10116560; body size 25 bytes.
#line 1 "ENTRY_10116560"

undefined4 * __fastcall FUN_10116560(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10116580; body size 25 bytes.
#line 1 "ENTRY_10116580"

undefined4 * __fastcall FUN_10116580(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 101165a0; body size 18 bytes.
#line 1 "ENTRY_101165a0"

undefined4 * __fastcall FUN_101165a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 101165c0; body size 25 bytes.
#line 1 "ENTRY_101165c0"

undefined4 * __fastcall FUN_101165c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 101165e0; body size 25 bytes.
#line 1 "ENTRY_101165e0"

undefined4 * __fastcall FUN_101165e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10116690; body size 13 bytes.
#line 1 "ENTRY_10116690"

undefined4 * __thiscall Recovered_Bulk::FUN_10116690(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101166a0; body size 5 bytes.
#line 1 "ENTRY_101166a0"

undefined4 __fastcall FUN_101166a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101166b0; body size 5 bytes.
#line 1 "ENTRY_101166b0"

undefined4 __fastcall FUN_101166b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101166c0; body size 13 bytes.
#line 1 "ENTRY_101166c0"

undefined4 * __thiscall Recovered_Bulk::FUN_101166c0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (undefined4 *)(param_1);
}


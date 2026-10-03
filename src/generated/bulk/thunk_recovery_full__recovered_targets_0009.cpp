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
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_105ba370(...);
extern int thunk_FUN_10648750(...);
extern int thunk_FUN_10648810(...);
extern int thunk_FUN_1085f200(...);
extern int thunk_FUN_10e0c800(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_121a2480;
extern int DAT_121a2488;
extern int DAT_121a24ac;
extern int DAT_121a24b4;
extern int DAT_121a33f8;
extern int DAT_121a3400;
extern int _DAT_121a33f4;
extern int _DAT_121a4bf0;
extern int _DAT_121a4bf4;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_SCLoggingHelper;
typedef void *E9;
typedef void *WARNING;
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11809080(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_118090f0(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_11816e40(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_1182c330(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11849f60(void);
// Reference entry 11809080; body size 88 bytes.
#line 1 "ENTRY_11809080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11809080(void)

{
  thunk_FUN_10246290(&DAT_121a2488,*(undefined4 *)(DAT_121a2488 + 4));
  thunk_FUN_1148a50e(DAT_121a2488,0x18);
  thunk_FUN_10648750(&DAT_121a2480,*(undefined4 *)(DAT_121a2480 + 4));
  thunk_FUN_1148a50e(DAT_121a2480,0x18);
  thunk_FUN_105ba370();
  return;
}


// Reference entry 118090f0; body size 88 bytes.
#line 1 "ENTRY_118090f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_118090f0(void)

{
  thunk_FUN_10246290(&DAT_121a24b4,*(undefined4 *)(DAT_121a24b4 + 4));
  thunk_FUN_1148a50e(DAT_121a24b4,0x18);
  thunk_FUN_10648810(&DAT_121a24ac,*(undefined4 *)(DAT_121a24ac + 4));
  thunk_FUN_1148a50e(DAT_121a24ac,0x18);
  thunk_FUN_105ba370();
  return;
}


// Reference entry 11816e40; body size 98 bytes.
#line 1 "ENTRY_11816e40"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11816e40(void)

{
  thunk_FUN_10246290(&DAT_121a3400,*(undefined4 *)(DAT_121a3400 + 4));
  thunk_FUN_1148a50e(DAT_121a3400,0x18);
  thunk_FUN_1085f200(&DAT_121a33f8,*(undefined4 *)(DAT_121a33f8 + 4));
  thunk_FUN_1148a50e(DAT_121a33f8,0x18);
  _DAT_121a33f4 = (int)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105ba370();
  return;
}


// Reference entry 1182c330; body size 40 bytes.
#line 1 "ENTRY_1182c330"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1182c330(void)

{
  _DAT_121a4bf4 = (int)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  _DAT_121a4bf0 = (int)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  return;
}


// Reference entry 11849f60; body size 10 bytes.
#line 1 "ENTRY_11849f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11849f60(void)

{
  thunk_FUN_10e0c800();
  return;
}


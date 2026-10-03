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
typedef unsigned char uchar;
typedef int BOOL;
typedef void *HANDLE;
typedef void *LPVOID;
typedef unsigned int UINT;
typedef long LONG;
typedef long HRESULT;
typedef wchar_t WCHAR;
typedef int int3;
typedef unsigned int uint3;
typedef struct undefined3 { char _p[3]; undefined3(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined3;
typedef struct undefined5 { char _p[5]; undefined5(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined5;
typedef struct undefined6 { char _p[6]; undefined6(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined6;
typedef struct undefined7 { char _p[7]; undefined7(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined7;
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
extern "C" unsigned long __readfsdword(unsigned long);
#pragma intrinsic(__readfsdword)
namespace std { template<class... A> static int _Xlength_error(A...); }
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int int_addref(A...); template<class... A> static int int_allocRep(A...); template<class... A> static int int_release(A...); static int op_ctor(...); };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_dtor(...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
typedef void *E9;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106f6b60(undefined4 param_2); template<class... A> int FUN_106f6b60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106f6e40(SCStr *param_2); template<class... A> int FUN_106f6e40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106f6e70(SCStr *param_2); template<class... A> int FUN_106f6e70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106f7160(undefined4 param_2); template<class... A> int FUN_106f7160(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106f76c0(undefined4 param_2); template<class... A> int FUN_106f76c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106f7ae0(undefined4 param_2); template<class... A> int FUN_106f7ae0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106f9b30(undefined4 *param_2); template<class... A> int FUN_106f9b30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_106fb500(SCStr *param_2); template<class... A> int FUN_106fb500(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106fd6e0(SCStr *param_2); template<class... A> int FUN_106fd6e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_106fd710(SCStr *param_2); template<class... A> int FUN_106fd710(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_106fd740(int *param_2); template<class... A> int FUN_106fd740(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106fd800(undefined4 param_2); template<class... A> int FUN_106fd800(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106fdc50(undefined4 param_2); template<class... A> int FUN_106fdc50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106fdda0(undefined4 param_2); template<class... A> int FUN_106fdda0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106fdef0(undefined4 param_2); template<class... A> int FUN_106fdef0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106fe040(undefined4 param_2); template<class... A> int FUN_106fe040(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_106fe1a0(undefined4 param_2); template<class... A> int FUN_106fe1a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10702af0(undefined4 param_2); template<class... A> int FUN_10702af0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10702b00(int *param_2); template<class... A> int FUN_10702b00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10702bb0(undefined4 param_2); template<class... A> int FUN_10702bb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10702f10(undefined4 param_2); template<class... A> int FUN_10702f10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10703060(undefined4 param_2); template<class... A> int FUN_10703060(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10703220(undefined4 param_2); template<class... A> int FUN_10703220(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10704b80(undefined4 *param_2); template<class... A> int FUN_10704b80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10706810(SCStr *param_2); template<class... A> int FUN_10706810(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10708c60(int *param_2); template<class... A> int FUN_10708c60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10708e00(undefined4 param_2); template<class... A> int FUN_10708e00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107095f0(undefined4 param_2); template<class... A> int FUN_107095f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107099d0(undefined4 param_2); template<class... A> int FUN_107099d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1070dc00(SCStr *param_2); template<class... A> int FUN_1070dc00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1070dc40(SCStr *param_2); template<class... A> int FUN_1070dc40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1070dc60(SCStr *param_2); template<class... A> int FUN_1070dc60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1070dc80(SCStr *param_2); template<class... A> int FUN_1070dc80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10711ce0(undefined1 param_2); template<class... A> int FUN_10711ce0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107123c0(undefined4 param_2); template<class... A> int FUN_107123c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10712720(undefined4 param_2); template<class... A> int FUN_10712720(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107128e0(undefined4 param_2); template<class... A> int FUN_107128e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10712a60(undefined4 param_2); template<class... A> int FUN_10712a60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10718190(int *param_2); template<class... A> int FUN_10718190(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10718210(int *param_2); template<class... A> int FUN_10718210(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107183e0(undefined4 param_2); template<class... A> int FUN_107183e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10718900(undefined4 param_2); template<class... A> int FUN_10718900(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10718a50(undefined4 param_2); template<class... A> int FUN_10718a50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10718bc0(undefined4 param_2); template<class... A> int FUN_10718bc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10718d40(undefined4 param_2); template<class... A> int FUN_10718d40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10718e90(undefined4 param_2); template<class... A> int FUN_10718e90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1071e340(SCStr *param_2); template<class... A> int FUN_1071e340(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1071e610(SCStr *param_2); template<class... A> int FUN_1071e610(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1071e630(SCStr *param_2); template<class... A> int FUN_1071e630(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_1071ea60(SCStr *param_2); template<class... A> int FUN_1071ea60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10722fc0(SCStr *param_2); template<class... A> int FUN_10722fc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10722ff0(SCStr *param_2); template<class... A> int FUN_10722ff0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10723020(undefined1 *param_2); template<class... A> int FUN_10723020(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10723080(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_10723080(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10723320(undefined4 param_2,undefined4 *param_3); template<class... A> int FUN_10723320(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10723340(undefined4 param_2); template<class... A> int FUN_10723340(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10723350(undefined4 param_2); template<class... A> int FUN_10723350(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10723360(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_10723360(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10723420(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10723420(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107236e0(undefined4 *param_2); template<class... A> int FUN_107236e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10723700(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_10723700(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10724e30(undefined4 param_2); template<class... A> int FUN_10724e30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10726c00(undefined4 param_2); template<class... A> int FUN_10726c00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10726d20(undefined4 param_2); template<class... A> int FUN_10726d20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10726d90(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10726d90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10726f60(undefined4 *param_2); template<class... A> int FUN_10726f60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107275a0(undefined4 param_2); template<class... A> int FUN_107275a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107276f0(undefined4 param_2); template<class... A> int FUN_107276f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10727840(undefined4 param_2); template<class... A> int FUN_10727840(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10727990(undefined4 param_2); template<class... A> int FUN_10727990(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10727f00(undefined4 param_2); template<class... A> int FUN_10727f00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10728050(undefined4 param_2); template<class... A> int FUN_10728050(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107281a0(undefined4 param_2); template<class... A> int FUN_107281a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107282f0(undefined4 param_2); template<class... A> int FUN_107282f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10728440(undefined4 param_2); template<class... A> int FUN_10728440(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107287a0(undefined4 param_2); template<class... A> int FUN_107287a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107291a0(undefined4 param_2); template<class... A> int FUN_107291a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1072a750(undefined4 *param_2); template<class... A> int FUN_1072a750(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1072a780(undefined4 *param_2); template<class... A> int FUN_1072a780(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1072a7b0(undefined4 *param_2); template<class... A> int FUN_1072a7b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1072bd10(int *param_2); template<class... A> int FUN_1072bd10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1072bd70(int *param_2); template<class... A> int FUN_1072bd70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_1072beb0(int param_2); template<class... A> int FUN_1072beb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1072e550(int param_2); template<class... A> int FUN_1072e550(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1072e650(int *param_2); template<class... A> int FUN_1072e650(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10743050(SCStr *param_2); template<class... A> int FUN_10743050(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1074b0f0(undefined4 param_2); template<class... A> int FUN_1074b0f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1074b230(undefined4 param_2); template<class... A> int FUN_1074b230(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1074ca30(undefined4 param_2); template<class... A> int FUN_1074ca30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1074cb70(undefined4 param_2); template<class... A> int FUN_1074cb70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1074ed40(undefined4 param_2); template<class... A> int FUN_1074ed40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1074fa60(undefined4 param_2); template<class... A> int FUN_1074fa60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1074fbb0(undefined4 param_2); template<class... A> int FUN_1074fbb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1074fd10(undefined4 param_2); template<class... A> int FUN_1074fd10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1074fe60(undefined4 param_2); template<class... A> int FUN_1074fe60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1074ffb0(undefined4 param_2); template<class... A> int FUN_1074ffb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10750100(undefined4 param_2); template<class... A> int FUN_10750100(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_107581c0(undefined4 param_2); template<class... A> int FUN_107581c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_107581d0(undefined1 param_2); template<class... A> int FUN_107581d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10758260(int *param_2); template<class... A> int FUN_10758260(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10758350(undefined4 param_2); template<class... A> int FUN_10758350(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10758a30(undefined4 param_2); template<class... A> int FUN_10758a30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10758b90(undefined4 param_2); template<class... A> int FUN_10758b90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10758ce0(undefined4 param_2); template<class... A> int FUN_10758ce0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10758e30(undefined4 param_2); template<class... A> int FUN_10758e30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10758fb0(undefined4 param_2); template<class... A> int FUN_10758fb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10759100(undefined4 param_2); template<class... A> int FUN_10759100(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10759250(undefined4 param_2); template<class... A> int FUN_10759250(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10762610(undefined1 param_2); template<class... A> int FUN_10762610(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10762620(undefined4 param_2); template<class... A> int FUN_10762620(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107626e0(undefined4 param_2); template<class... A> int FUN_107626e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10762a20(undefined4 param_2); template<class... A> int FUN_10762a20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10762b80(undefined4 param_2); template<class... A> int FUN_10762b80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10762cd0(undefined4 param_2); template<class... A> int FUN_10762cd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10767680(undefined1 param_2); template<class... A> int FUN_10767680(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10767870(undefined4 param_2); template<class... A> int FUN_10767870(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10767aa0(undefined4 param_2); template<class... A> int FUN_10767aa0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10767bf0(undefined4 param_2); template<class... A> int FUN_10767bf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1076c000(undefined4 param_2); template<class... A> int FUN_1076c000(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1076c610(undefined4 param_2); template<class... A> int FUN_1076c610(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1076c770(undefined4 param_2); template<class... A> int FUN_1076c770(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1076c8c0(undefined4 param_2); template<class... A> int FUN_1076c8c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1076ca10(undefined4 param_2); template<class... A> int FUN_1076ca10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10772ea0(undefined4 param_2); template<class... A> int FUN_10772ea0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10772f80(undefined4 param_2); template<class... A> int FUN_10772f80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_107733d0(undefined4 param_2); template<class... A> int FUN_107733d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10773540(undefined4 param_2); template<class... A> int FUN_10773540(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10773690(undefined4 param_2); template<class... A> int FUN_10773690(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10773800(undefined4 param_2); template<class... A> int FUN_10773800(A...); };

extern __declspec(dllimport) int _Xlength_error(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int op_ctor(...);
extern int op_dtor(...);
extern int operator_new(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_105a05f0(...);
extern int thunk_FUN_105a0660(...);
extern int thunk_FUN_105ad8f0(...);
extern int thunk_FUN_106d91c0(...);
extern int thunk_FUN_106da030(...);
extern int thunk_FUN_106da540(...);
extern int thunk_FUN_106da680(...);
extern int thunk_FUN_106da820(...);
extern int thunk_FUN_106dbf00(...);
extern int thunk_FUN_106e05a0(...);
extern int thunk_FUN_106e1600(...);
extern int thunk_FUN_10bcef80(...);
extern int thunk_FUN_10eb4020(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb4cc0(...);
extern int thunk_FUN_10eb4d80(...);
extern int thunk_FUN_10eb4e80(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ebc1e0(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_12126b84;
extern int DAT_121a2820;
extern int DAT_121a2824;
extern int DAT_121a2828;
extern int DAT_121a282c;
extern int DAT_121a2830;
extern int DAT_121a2848;
extern int DAT_121a284c;
extern int DAT_121a2850;
extern int DAT_121a2854;
extern int DAT_121a2858;
extern int DAT_121a2870;
extern int DAT_121a2874;
extern int DAT_121a2878;
extern int DAT_121a287c;
extern int DAT_121a28c4;
extern int DAT_121a28c8;
extern int DAT_121a28cc;
extern int DAT_121a28d0;
extern int DAT_121a28d4;
extern int DAT_121a28ec;
extern int DAT_121a28f0;
extern int DAT_121a28f4;
extern int DAT_121a28f8;
extern int DAT_121a2940;
extern int DAT_121a2944;
extern int DAT_121a2948;
extern int DAT_121a294c;
extern int DAT_121a2950;
extern int DAT_121a2954;
extern int DAT_121a299c;
extern int DAT_121a29a0;
extern int DAT_121a29a4;
extern int DAT_121a29a8;
extern int DAT_121a29ac;
extern int DAT_121a29b0;
extern int DAT_121a29b4;
extern int DAT_121a29b8;
extern int DAT_121a29bc;
extern int DAT_121a29c0;
extern int DAT_121a29c4;
extern int DAT_121a29c8;
extern int DAT_121a29cc;
extern int DAT_121a29d0;
extern int DAT_121a29d4;
extern int DAT_121a29d8;
extern int DAT_121a29dc;
extern int DAT_121a29e0;
extern int DAT_121a29e4;
extern int DAT_121a29e8;
extern int DAT_121a29ec;
extern int DAT_121a29f0;
extern int DAT_121a2a78;
extern int DAT_121a2a7c;
extern int DAT_121a2ac0;
extern int DAT_121a2ac4;
extern int DAT_121a2b08;
extern int DAT_121a2b0c;
extern int DAT_121a2b10;
extern int DAT_121a2b14;
extern int DAT_121a2b18;
extern int DAT_121a2b1c;
extern int DAT_121a2b20;
extern int DAT_121a2b24;
extern int DAT_121a2b74;
extern int DAT_121a2b78;
extern int DAT_121a2b7c;
extern int DAT_121a2b80;
extern int DAT_121a2b84;
extern int DAT_121a2b88;
extern int DAT_121a2b8c;
extern int DAT_121a2b90;
extern int DAT_121a2be0;
extern int DAT_121a2be4;
extern int DAT_121a2be8;
extern int DAT_121a2bec;
extern int DAT_121a2c38;
extern int DAT_121a2c3c;
extern int DAT_121a2c40;
extern int DAT_121a2c8c;
extern int DAT_121a2c90;
extern int DAT_121a2c94;
extern int DAT_121a2c98;
extern int DAT_121a2c9c;
extern int DAT_121a2ca0;
extern int DAT_121a2cec;
extern int DAT_121a2cf0;
extern int DAT_121a2cf4;
extern int DAT_121a2cf8;
extern int ghidra_vftable_SCAccountChangeEmailExistingAccountPage;
extern int ghidra_vftable_SCAccountChangeEmailNetworkErrorPage;
extern int ghidra_vftable_SCAccountDeletionConfirmationPage;
extern int ghidra_vftable_SCAccountDeletionIntroPage;
extern int ghidra_vftable_SCAccountDeletionOutroPage;
extern int ghidra_vftable_SCAccountDeletionSendEmailPage;
extern int ghidra_vftable_SCAccountDeletionWizard;
extern int ghidra_vftable_SCAccountEmailVerificationEmailVerifiedPage;
extern int ghidra_vftable_SCAccountEmailVerificationMainPage;
extern int ghidra_vftable_SCAccountEmailVerificationNetworkErrorPage;
extern int ghidra_vftable_SCAccountLoginIntroPage;
extern int ghidra_vftable_SCAccountLoginNetworkErrorPage;
extern int ghidra_vftable_SCAccountResetPasswordCompletedPage;
extern int ghidra_vftable_SCAccountResetPasswordMainPage;
extern int ghidra_vftable_SCAccountResetPasswordNetworkErrorPage;
extern int ghidra_vftable_SCAccountUserDetailsCountryCodePage;
extern int ghidra_vftable_SCAccountUserDetailsGeoSetPage;
extern int ghidra_vftable_SCAccountUserDetailsNamePage;
extern int ghidra_vftable_SCAccountUserDetailsNetworkErrorPage;
extern int ghidra_vftable_SCAccountUserDetailsPostalCodePage;
extern int ghidra_vftable_SCAddVoiceServiceAnotherProductSelectionPage;
extern int ghidra_vftable_SCAddVoiceServiceAssetDownloadErrorPage;
extern int ghidra_vftable_SCAddVoiceServiceCountryCodeFetchErrorPage;
extern int ghidra_vftable_SCAddVoiceServiceDeviceIncompatiblePage;
extern int ghidra_vftable_SCAddVoiceServiceNoCompatibleProductPage;
extern int ghidra_vftable_SCAddVoiceServiceNotificationIntroPage;
extern int ghidra_vftable_SCAddVoiceServiceOfflineProductsErrorPage;
extern int ghidra_vftable_SCAddVoiceServiceOutroPage;
extern int ghidra_vftable_SCAddVoiceServiceProductConfirmationPage;
extern int ghidra_vftable_SCAddVoiceServiceProductSelectionPage;
extern int ghidra_vftable_SCAddVoiceServiceWaitingPage;
extern int ghidra_vftable_SCAmazonAlexaPreviewIntroPage;
extern int ghidra_vftable_SCAmazonAlexaSetupIntroPage;
extern int ghidra_vftable_SCAmpConfigurationIntroPage;
extern int ghidra_vftable_SCAmpConfigurationSelectPage;
extern int ghidra_vftable_SCAmpConfigurationSetupHomeIntroPage;
extern int ghidra_vftable_SCAmpConfigurationSpeakerPlacementPage;
extern int ghidra_vftable_SCAmpConfigurationSuccessPage;
extern int ghidra_vftable_SCAmpConfigurationWizard;
extern int ghidra_vftable_SCApConnectConnectingPage;
extern int ghidra_vftable_SCApConnectDeniedPage;
extern int ghidra_vftable_SCApConnectIntroPage;
extern int ghidra_vftable_SCApInstructionsButtonPressPage;
extern int ghidra_vftable_SCApInstructionsWaitingPage;
extern int ghidra_vftable_SCAppVersionCheckBranchSelectPage;
extern int ghidra_vftable_SCAppVersionCheckCommunicationErrorPage;
extern int ghidra_vftable_SCAppVersionCheckErrorPage;
extern int ghidra_vftable_SCAppVersionCheckIntroPage;
extern int ghidra_vftable_SCAppVersionCheckNotLivePage;
extern int ghidra_vftable_SCAppVersionCheckOutroPage;
extern int ghidra_vftable_SCAppVersionCheckUpdatePage;
extern int ghidra_vftable_SCAuthPlusAuthenticationButtonPressPage;
extern int ghidra_vftable_SCAuthPlusAuthenticationIntroPage;
extern int ghidra_vftable_SCAuthPlusAuthenticationTimeoutPage;
extern int ghidra_vftable_SCAuthPlusAuthenticationVerifyProductPage;
extern int ghidra_vftable_SCAutoTrueplayConfirmationPage;
extern int ghidra_vftable_SCAutoTrueplayEnabledPage;
extern int ghidra_vftable_SCAutoTrueplayFailedPage;
extern int ghidra_vftable_SCAutoTrueplayIntroPage;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCNewWiz;
extern int ghidra_vftable_SCNewWizPage;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizParams;
extern int ghidra_vftable_SCNewWizStateType;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCSubwizState;
extern int ghidra_vftable_SCSubwizStateFor;
extern int in_EAX;
extern int uStack_8;
extern undefined1 LAB_115e0920[];
extern undefined1 LAB_115e0ff0[];
extern int *stack0xfffffffc;
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b40(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b50(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b60(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b70(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b80(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f6b40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f6b40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f6b50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f6b50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f6ca0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f6ca0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f6cd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f6cd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f6d00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f6d00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_106f6d30(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_106f6d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f6e20(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f6e20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f6e30(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f6e30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f6ed0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f6ed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f7110(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f7110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f7120(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f7120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f7130(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f7130(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f7140(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f7140(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106f7570(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106f7570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8450(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8460(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8470(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8480(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f84f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f84f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8520(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8550(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f86a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f86a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f86c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f86c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f86f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f86f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8710(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8740(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f8910(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f8910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f8920(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f8920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f9b20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f9b20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fce60(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fce60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fce70(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fce70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fce80(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fce80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fce90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fce90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fcea0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fcea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fceb0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fceb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fcec0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fcec0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fcee0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fcee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fcef0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fcef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fcf00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fcf00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_106fcf10(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_106fcf10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fd6d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fd6d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fd7b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fd7b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fd7c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fd7c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fd7d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fd7d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fd7e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fd7e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106fdc10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106fdc10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe6c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe6c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe6f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe6f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe700(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe700(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe710(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe720(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe800(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe830(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe850(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe880(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe8a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe8a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe8d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe8d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe9a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe9a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe9c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe9c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fead0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fead0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106feae0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106feae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106feaf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106feaf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106feb00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106feb00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ff620(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ff620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ff630(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ff630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025f0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10702610(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10702610(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10702620(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10702620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10702ab0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10702ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10702ac0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10702ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10702b70(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10702b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10702b80(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10702b80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10702b90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10702b90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10702ed0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10702ed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703870(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107038a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107038a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107038b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107038b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107038c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107038c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703930(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703960(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703ab0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703ad0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703b00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703b00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10703d50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10703d50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10703d60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10703d60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10704b70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10704b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10707960(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10707960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10707970(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10707970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10707980(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10707980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10707990(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10707990(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107079b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107079b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107079c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107079c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_107079d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_107079d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10708500(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10708500(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10708b90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10708b90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10708db0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10708db0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10708dc0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10708dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10708dd0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10708dd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10708de0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10708de0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10709210(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10709210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10709230(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10709230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10709250(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10709250(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a0e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a0e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a0f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a0f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a100(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a110(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a390(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a3c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a3c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a3f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a3f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a500(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a500(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a6a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a6a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a6c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a6c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a6f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a6f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a920(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a930(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a940(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a950(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a960(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a970(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070bdb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070bdb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070bdc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070bdc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070bdd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070bdd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10710280(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10710280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10710290(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10710290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107102a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107102a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107102b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107102b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107102c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107102c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107102d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107102d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107102e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107102e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107104e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107104e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107104f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107104f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10710500(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10710500(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_107105c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_107105c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_107105e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_107105e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10711bf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10711bf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10711c00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10711c00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10711c10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10711c10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10711c20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10711c20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10711c50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10711c50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10711c80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10711c80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10712380(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10712380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10712390(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10712390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107123a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107123a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_107126e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_107126e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10712f60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10712f60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10712f90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10712f90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10712fa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10712fa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10712fb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10712fb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10713150(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10713150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10713220(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10713220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10713240(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10713240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10713270(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10713270(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10713370(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10713370(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10713380(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10713380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10714010(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10714010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10717280(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10717280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10717290(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10717290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107172a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107172a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107172b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107172b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107172d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107172d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107172e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107172e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_107172f0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_107172f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10717310(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10717310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10718080(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10718080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107180c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107180c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10718380(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10718380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10718390(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10718390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107183a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107183a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107183b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107183b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107183c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107183c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_107188e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_107188e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719600(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719600(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719630(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719640(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719650(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719660(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719670(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719750(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719780(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719850(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719920(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719940(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719970(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719990(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719990(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107199c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107199c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10719ba0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10719ba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10719bb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10719bb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1071b280(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1071b280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721a60(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721a60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721a70(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721a80(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721a80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721a90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721a90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721aa0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721ab0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10722000(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10722000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10722010(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10722010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10722020(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10722020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10722de0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10722de0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10722df0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10722df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10723040(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10723040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10723060(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10723060(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_107230a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_107230a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_107230c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_107230c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723830(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723840(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723860(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723920(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723930(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723940(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723950(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723960(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723f00(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723f00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723f20(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723f20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723fc0(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723fc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10723fe0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10723fe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724270(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724270(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10724280(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10724280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724530(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724540(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724550(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724580(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724580(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724590(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245a0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245b0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_107245f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_107245f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10724610(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10724610(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_107246a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_107246a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107246b0(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107246b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107246d0(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107246d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107246f0(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107246f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724710(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724720(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724730(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724730(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724740(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724750(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724780(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107247b0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107247b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107247c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107247c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_107247d0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_107247d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107247e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107247e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107247f0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107247f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724800(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724810(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724820(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724830(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724840(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724850(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724860(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724870(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724880(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724890(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248f0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724900(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724910(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724920(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724b20(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724b20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10726d30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10726d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10726d50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10726d50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10726d70(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10726d70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10726d80(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10726d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10726db0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10726db0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aaa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aaa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aab0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aac0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aad0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aae0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aaf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aaf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ac50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ac50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ac80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ac80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072acb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072acb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ace0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ace0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ad10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ad10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ad40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ad40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ad70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ad70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ada0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ada0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072add0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072add0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072afa0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072afa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072afc0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072afc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b080(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b0b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b0b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b0d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b0d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b100(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b120(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b150(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b170(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b1a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b1a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b1c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b1c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b1f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b1f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b210(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b240(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b260(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b290(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b2b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b2b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b2e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b2e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b300(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b350(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b380(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b3a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b3a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b3d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b3d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b3f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b3f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b420(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b440(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b470(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b490(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b4c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b4c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b4e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b4e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b510(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b5e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b5e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b660(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b680(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b6b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b6b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b6d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b6d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b700(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b700(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b720(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b750(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b770(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b7a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b7a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072bed0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072bed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_1072bff0(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1072bff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072de30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072de30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072de60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072de60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072deb0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072deb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1072e1e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1072e1e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e210(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e220(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e230(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e240(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e250(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e250(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e260(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e270(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e270(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e280(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e290(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e2a0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e2a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e2b0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e2b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1072e5c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1072e5c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1072e5f0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1072e5f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e640(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1072e6e0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1072e6e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1072e760(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1072e760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e830(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10730870(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10730870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_107308c0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_107308c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10730910(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10730910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10730960(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10730960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10730b90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10730b90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743070(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743080(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743090(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430f0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743100(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743110(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743120(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743130(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743130(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743140(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743140(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743150(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743160(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743160(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743170(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743180(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743190(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107431a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107431a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107431b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107431b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107431c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107431c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107431d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107431d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107431e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107431e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107431f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107431f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743200(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743200(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743210(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743220(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743230(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743240(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743250(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743250(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743370(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743370(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743380(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743390(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743400(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743400(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743410(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743420(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743430(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743440(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743450(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10748ac0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10748ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10748e90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10748e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10748ea0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10748ea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1074af60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1074af60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074af70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074af70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074afa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074afa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074b0d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074b0d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074b5f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074b5f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074b620(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074b620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074b630(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074b630(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074b660(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074b660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074c9c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074c9c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074c9d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074c9d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ca10(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ca10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074cf30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074cf30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074cf60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074cf60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074cf70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074cf70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074cfa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074cfa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074e940(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074e940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074e950(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074e950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1074e970(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1074e970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1074e980(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1074e980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ecc0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ecc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ecd0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ecd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ece0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ece0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ecf0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ecf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ed00(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ed00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ed10(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ed10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ed20(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ed20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750810(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750840(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750850(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750860(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750870(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750880(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750890(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107508a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107508a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107508b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107508b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107508e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107508e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750910(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750940(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750960(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750990(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750990(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107509b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107509b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107509e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107509e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750aa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750ac0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750af0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750af0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750b10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750b10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750b40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750b40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750b60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750b90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750b90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10754d30(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10754d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10754d40(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10754d40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756ef0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f00(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f10(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f20(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f30(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f40(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f50(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f60(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757390(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107573a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107573a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107573b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107573b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107573c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107573c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757800(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757810(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757820(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757830(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107582d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107582d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107582e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107582e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107582f0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107582f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10758300(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10758300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10758310(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10758310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10758320(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10758320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10758330(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10758330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759bc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759bc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759bf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759bf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759d00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759d00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759d20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759d20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759d50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759d50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759d70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759d70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759da0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759e70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759e90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759ec0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759ec0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759ee0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759ee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759f10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759f10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1075a040(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1075a040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1075e550(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1075e550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760a90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760a90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760aa0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760ab0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760ac0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760ad0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760ae0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760ae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760af0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760af0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760b00(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760b00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10760b20(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10760b20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10760ea0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10760ea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10760eb0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10760eb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107626a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107626a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107626b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107626b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107626c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107626c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10762a00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10762a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107632a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107632a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107632d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107632d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107632e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107632e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107632f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107632f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10763420(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10763420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10763440(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10763440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10763470(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10763470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10763490(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10763490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107634c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107634c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10763670(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10763670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10763680(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10763680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10763690(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10763690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10764560(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10764560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10766ff0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10766ff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767000(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767010(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767020(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10767030(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10767030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10767040(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10767040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10767060(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10767060(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10767070(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10767070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10767640(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10767640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10767650(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10767650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767840(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767850(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107680e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107680e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768110(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768120(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768130(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768130(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768160(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768160(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768180(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107681b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107681b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10768780(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10768780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10768790(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10768790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1076adf0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1076adf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076b420(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076b420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076b430(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076b430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076b440(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076b440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1076beb0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1076beb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfa0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfb0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfc0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfd0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfe0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d360(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d360(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d370(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d370(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d380(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d390(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d3a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d3a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d3b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d3b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d480(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d4a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d4a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d4d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d4d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d4f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d4f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d520(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d540(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d570(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d590(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d5c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d5c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_107706f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_107706f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771c90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771c90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771ca0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771ca0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771cb0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771cb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771cc0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771cc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771cd0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771cd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771ce0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771ce0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771cf0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771cf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771d00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771d00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771d20(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771d20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771d30(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771d40(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771d40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10772f30(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10772f30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10772f40(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10772f40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10772f50(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10772f50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10772f60(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10772f60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10773390(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10773390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773e90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773ec0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773ec0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773ed0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773ed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773ee0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773ee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773ef0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10774080(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10774080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107740a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107740a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107740d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107740d0(...);
// Reference entry 106f4b40; body size 6 bytes.
#line 1 "ENTRY_106f4b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f4b40(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 106f4b50; body size 6 bytes.
#line 1 "ENTRY_106f4b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f4b50(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 106f4b60; body size 6 bytes.
#line 1 "ENTRY_106f4b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f4b60(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 106f4b70; body size 6 bytes.
#line 1 "ENTRY_106f4b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f4b70(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 106f4b80; body size 6 bytes.
#line 1 "ENTRY_106f4b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f4b80(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 106f6b40; body size 3 bytes.
#line 1 "ENTRY_106f6b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f6b40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106f6b50; body size 3 bytes.
#line 1 "ENTRY_106f6b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f6b50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106f6b60; body size 40 bytes.
#line 1 "ENTRY_106f6b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106f6b60(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_106e1600(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
    return;
  }
  thunk_FUN_106e05a0(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 106f6ca0; body size 28 bytes.
#line 1 "ENTRY_106f6ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f6ca0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106f6cd0; body size 28 bytes.
#line 1 "ENTRY_106f6cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f6cd0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106f6d00; body size 28 bytes.
#line 1 "ENTRY_106f6d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f6d00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106f6d30; body size 7 bytes.
#line 1 "ENTRY_106f6d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_106f6d30(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf9));
}


// Reference entry 106f6e20; body size 5 bytes.
#line 1 "ENTRY_106f6e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f6e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106f6e30; body size 5 bytes.
#line 1 "ENTRY_106f6e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f6e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106f6e40; body size 39 bytes.
#line 1 "ENTRY_106f6e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106f6e40(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xf4));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 106f6e70; body size 39 bytes.
#line 1 "ENTRY_106f6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106f6e70(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xf4));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 106f6ed0; body size 8 bytes.
#line 1 "ENTRY_106f6ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f6ed0(int param_1)

{
  *(undefined1*)(param_1 + 0xf8) = (undefined1)(1);
  return;
}


// Reference entry 106f7110; body size 6 bytes.
#line 1 "ENTRY_106f7110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f7110(void)

{
  return (undefined4)(DAT_121a2828);
}


// Reference entry 106f7120; body size 6 bytes.
#line 1 "ENTRY_106f7120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f7120(void)

{
  return (undefined4)(DAT_121a2824);
}


// Reference entry 106f7130; body size 6 bytes.
#line 1 "ENTRY_106f7130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f7130(void)

{
  return (undefined4)(DAT_121a2830);
}


// Reference entry 106f7140; body size 6 bytes.
#line 1 "ENTRY_106f7140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f7140(void)

{
  return (undefined4)(DAT_121a282c);
}


// Reference entry 106f7160; body size 57 bytes.
#line 1 "ENTRY_106f7160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106f7160(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 106f7570; body size 16 bytes.
#line 1 "ENTRY_106f7570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106f7570(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106f76c0; body size 57 bytes.
#line 1 "ENTRY_106f76c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106f76c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountChangeEmailExistingAccountPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountChangeEmailExistingAccountPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountChangeEmailExistingAccountPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountChangeEmailExistingAccountPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106f7ae0; body size 57 bytes.
#line 1 "ENTRY_106f7ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106f7ae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountChangeEmailNetworkErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountChangeEmailNetworkErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountChangeEmailNetworkErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountChangeEmailNetworkErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106f8450; body size 11 bytes.
#line 1 "ENTRY_106f8450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f8450(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106f8460; body size 11 bytes.
#line 1 "ENTRY_106f8460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f8460(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106f8470; body size 11 bytes.
#line 1 "ENTRY_106f8470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f8470(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106f8480; body size 11 bytes.
#line 1 "ENTRY_106f8480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f8480(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106f84f0; body size 38 bytes.
#line 1 "ENTRY_106f84f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f84f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106f8520; body size 38 bytes.
#line 1 "ENTRY_106f8520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f8520(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106f8550; body size 21 bytes.
#line 1 "ENTRY_106f8550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f8550(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2828 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106f86a0; body size 21 bytes.
#line 1 "ENTRY_106f86a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f86a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2824 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106f86c0; body size 38 bytes.
#line 1 "ENTRY_106f86c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f86c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106f86f0; body size 21 bytes.
#line 1 "ENTRY_106f86f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f86f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2830 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106f8710; body size 38 bytes.
#line 1 "ENTRY_106f8710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f8710(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106f8740; body size 21 bytes.
#line 1 "ENTRY_106f8740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f8740(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a282c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106f8910; body size 3 bytes.
#line 1 "ENTRY_106f8910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f8910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106f8920; body size 3 bytes.
#line 1 "ENTRY_106f8920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f8920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106f9b20; body size 9 bytes.
#line 1 "ENTRY_106f9b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f9b20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106f9b30; body size 37 bytes.
#line 1 "ENTRY_106f9b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106f9b30(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xe8));
  piVar1 = (int *)(*(int **)(param_1 + 0xec));
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 106fb500; body size 23 bytes.
#line 1 "ENTRY_106fb500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_106fb500(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xf4));
  return (SCStr *)(param_2);
}


// Reference entry 106fce60; body size 6 bytes.
#line 1 "ENTRY_106fce60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106fce60(void)

{
  return (undefined4)(DAT_121a2828);
}


// Reference entry 106fce70; body size 6 bytes.
#line 1 "ENTRY_106fce70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106fce70(void)

{
  return (undefined4)(DAT_121a2824);
}


// Reference entry 106fce80; body size 6 bytes.
#line 1 "ENTRY_106fce80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106fce80(void)

{
  return (undefined4)(DAT_121a2830);
}


// Reference entry 106fce90; body size 6 bytes.
#line 1 "ENTRY_106fce90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106fce90(void)

{
  return (undefined4)(DAT_121a282c);
}


// Reference entry 106fcea0; body size 6 bytes.
#line 1 "ENTRY_106fcea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106fcea0(void)

{
  return (undefined4)(DAT_121a2820);
}


// Reference entry 106fceb0; body size 5 bytes.
#line 1 "ENTRY_106fceb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106fceb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 106fcec0; body size 5 bytes.
#line 1 "ENTRY_106fcec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106fcec0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 106fcee0; body size 5 bytes.
#line 1 "ENTRY_106fcee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106fcee0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106fcef0; body size 5 bytes.
#line 1 "ENTRY_106fcef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106fcef0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106fcf00; body size 5 bytes.
#line 1 "ENTRY_106fcf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106fcf00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106fcf10; body size 18 bytes.
#line 1 "ENTRY_106fcf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_106fcf10(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a2830));
  return (bool)(2 < iVar1);
}


// Reference entry 106fd6d0; body size 3 bytes.
#line 1 "ENTRY_106fd6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106fd6d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106fd6e0; body size 39 bytes.
#line 1 "ENTRY_106fd6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106fd6e0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xf8));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 106fd710; body size 39 bytes.
#line 1 "ENTRY_106fd710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_106fd710(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xf4));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 106fd740; body size 78 bytes.
#line 1 "ENTRY_106fd740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_106fd740(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 106fd7b0; body size 6 bytes.
#line 1 "ENTRY_106fd7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106fd7b0(void)

{
  return (undefined4)(DAT_121a2850);
}


// Reference entry 106fd7c0; body size 6 bytes.
#line 1 "ENTRY_106fd7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106fd7c0(void)

{
  return (undefined4)(DAT_121a284c);
}


// Reference entry 106fd7d0; body size 6 bytes.
#line 1 "ENTRY_106fd7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106fd7d0(void)

{
  return (undefined4)(DAT_121a2858);
}


// Reference entry 106fd7e0; body size 6 bytes.
#line 1 "ENTRY_106fd7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106fd7e0(void)

{
  return (undefined4)(DAT_121a2854);
}


// Reference entry 106fd800; body size 57 bytes.
#line 1 "ENTRY_106fd800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106fd800(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 106fdc10; body size 16 bytes.
#line 1 "ENTRY_106fdc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106fdc10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106fdc50; body size 57 bytes.
#line 1 "ENTRY_106fdc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106fdc50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionConfirmationPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionConfirmationPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionConfirmationPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionConfirmationPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106fdda0; body size 57 bytes.
#line 1 "ENTRY_106fdda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106fdda0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106fdef0; body size 57 bytes.
#line 1 "ENTRY_106fdef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106fdef0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionOutroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionOutroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionOutroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionOutroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106fe040; body size 77 bytes.
#line 1 "ENTRY_106fe040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106fe040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionSendEmailPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionSendEmailPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionSendEmailPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionSendEmailPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106fe1a0; body size 67 bytes.
#line 1 "ENTRY_106fe1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_106fe1a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionWizard);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionWizard);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionWizard);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionWizard);
  param_1[0x3a] = (undefined4)(0xfffffffe);
  return (undefined4 *)(param_1);
}


// Reference entry 106fe6c0; body size 38 bytes.
#line 1 "ENTRY_106fe6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe6c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106fe6f0; body size 11 bytes.
#line 1 "ENTRY_106fe6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe6f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106fe700; body size 11 bytes.
#line 1 "ENTRY_106fe700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe700(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106fe710; body size 11 bytes.
#line 1 "ENTRY_106fe710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe710(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106fe720; body size 11 bytes.
#line 1 "ENTRY_106fe720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe720(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106fe800; body size 38 bytes.
#line 1 "ENTRY_106fe800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe800(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106fe830; body size 21 bytes.
#line 1 "ENTRY_106fe830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe830(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2850 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106fe850; body size 38 bytes.
#line 1 "ENTRY_106fe850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe850(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106fe880; body size 21 bytes.
#line 1 "ENTRY_106fe880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe880(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a284c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106fe8a0; body size 38 bytes.
#line 1 "ENTRY_106fe8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe8a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 106fe8d0; body size 21 bytes.
#line 1 "ENTRY_106fe8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe8d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2858 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106fe9a0; body size 21 bytes.
#line 1 "ENTRY_106fe9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe9a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2854 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106fe9c0; body size 5 bytes.
#line 1 "ENTRY_106fe9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe9c0(undefined4 *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWiz);
  iVar3 = (int)((int)(param_1[0x34] - param_1[0x33]) >> 0x1f);
  if ((int)(param_1[0x34] - param_1[0x33]) / 0xc + iVar3 != iVar3) {
    iVar3 = (int)(param_1[0x34]);
    do {
      if (*(int **)(iVar3 + -8) != (int *)((0x0))) {
        (**(code **)(**(int **)(iVar3 + -8) + 0x2c))(1,uVar2);
      }
      if (*(int **)(iVar3 + -4) != (int *)((0x0))) {
        (**(code **)(**(int **)(iVar3 + -4) + 0x3c))();
        if (*(int **)(iVar3 + -4) != (int *)((0x0))) {
          (**(code **)(**(int **)(iVar3 + -4) + 0x2c))(1);
        }
      }
      param_1[0x34] = (undefined4)(param_1[0x34] + -0xc);
      iVar3 = (int)(param_1[0x34]);
      iVar1 = (int)(iVar3 - param_1[0x33] >> 0x1f);
    } while ((iVar3 - param_1[0x33]) / 0xc + iVar1 != iVar1);
  }
  ((_Tree<> *)(0))->op_dtor();
  ((_Tree<> *)(0))->op_dtor();
  thunk_FUN_106da540();
  param_1[0x2d] = (undefined4)((uint)&ghidra_vftable_SCNewWizParams);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_106da820();
  thunk_FUN_105a0660();
  thunk_FUN_106d91c0(param_1 + 0x2b,*(undefined4 *)(param_1[0x2b] + 4));
  thunk_FUN_1148a50e(param_1[0x2b],0x2c);
  thunk_FUN_105a05f0();

  return;

 } catch (...) { }
}


// Reference entry 106fead0; body size 3 bytes.
#line 1 "ENTRY_106fead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106fead0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106feae0; body size 7 bytes.
#line 1 "ENTRY_106feae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106feae0(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 106feaf0; body size 3 bytes.
#line 1 "ENTRY_106feaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106feaf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106feb00; body size 3 bytes.
#line 1 "ENTRY_106feb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106feb00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106ff620; body size 9 bytes.
#line 1 "ENTRY_106ff620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106ff620(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106ff630; body size 7 bytes.
#line 1 "ENTRY_106ff630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106ff630(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xe8));
}


// Reference entry 107025b0; body size 6 bytes.
#line 1 "ENTRY_107025b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107025b0(void)

{
  return (undefined4)(DAT_121a2850);
}


// Reference entry 107025c0; body size 6 bytes.
#line 1 "ENTRY_107025c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107025c0(void)

{
  return (undefined4)(DAT_121a284c);
}


// Reference entry 107025d0; body size 6 bytes.
#line 1 "ENTRY_107025d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107025d0(void)

{
  return (undefined4)(DAT_121a2858);
}


// Reference entry 107025e0; body size 6 bytes.
#line 1 "ENTRY_107025e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107025e0(void)

{
  return (undefined4)(DAT_121a2854);
}


// Reference entry 107025f0; body size 6 bytes.
#line 1 "ENTRY_107025f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107025f0(void)

{
  return (undefined4)(DAT_121a2848);
}


// Reference entry 10702610; body size 5 bytes.
#line 1 "ENTRY_10702610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10702610(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10702620; body size 5 bytes.
#line 1 "ENTRY_10702620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10702620(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10702ab0; body size 3 bytes.
#line 1 "ENTRY_10702ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10702ab0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10702ac0; body size 28 bytes.
#line 1 "ENTRY_10702ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10702ac0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10702af0; body size 13 bytes.
#line 1 "ENTRY_10702af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10702af0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xe8) = (undefined4)(param_2);
  return;
}


// Reference entry 10702b00; body size 78 bytes.
#line 1 "ENTRY_10702b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10702b00(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10702b70; body size 6 bytes.
#line 1 "ENTRY_10702b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10702b70(void)

{
  return (undefined4)(DAT_121a2878);
}


// Reference entry 10702b80; body size 6 bytes.
#line 1 "ENTRY_10702b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10702b80(void)

{
  return (undefined4)(DAT_121a2874);
}


// Reference entry 10702b90; body size 6 bytes.
#line 1 "ENTRY_10702b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10702b90(void)

{
  return (undefined4)(DAT_121a287c);
}


// Reference entry 10702bb0; body size 57 bytes.
#line 1 "ENTRY_10702bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10702bb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10702ed0; body size 16 bytes.
#line 1 "ENTRY_10702ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10702ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10702f10; body size 57 bytes.
#line 1 "ENTRY_10702f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10702f10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationEmailVerifiedPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationEmailVerifiedPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationEmailVerifiedPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationEmailVerifiedPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10703060; body size 146 bytes.
#line 1 "ENTRY_10703060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10703060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  param_1[0x38] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationMainPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationMainPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationMainPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationMainPage);
  param_1[0x38] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationMainPage);
  *(undefined2*)(param_1 + 0x3b) = (undefined2)(0);
  param_1[0x3c] = (undefined4)(0);
  param_1[0x3d] = (undefined4)(0);
  param_1[0x3e] = (undefined4)(0);
  param_1[0x3f] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10703220; body size 57 bytes.
#line 1 "ENTRY_10703220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10703220(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationNetworkErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationNetworkErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationNetworkErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationNetworkErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10703870; body size 38 bytes.
#line 1 "ENTRY_10703870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10703870(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 107038a0; body size 11 bytes.
#line 1 "ENTRY_107038a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107038a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 107038b0; body size 11 bytes.
#line 1 "ENTRY_107038b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107038b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 107038c0; body size 11 bytes.
#line 1 "ENTRY_107038c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107038c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10703930; body size 38 bytes.
#line 1 "ENTRY_10703930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10703930(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10703960; body size 21 bytes.
#line 1 "ENTRY_10703960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10703960(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2878 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10703ab0; body size 21 bytes.
#line 1 "ENTRY_10703ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10703ab0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2874 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10703ad0; body size 38 bytes.
#line 1 "ENTRY_10703ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10703ad0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10703b00; body size 21 bytes.
#line 1 "ENTRY_10703b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10703b00(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a287c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10703d50; body size 3 bytes.
#line 1 "ENTRY_10703d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10703d50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10703d60; body size 3 bytes.
#line 1 "ENTRY_10703d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10703d60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10704b70; body size 9 bytes.
#line 1 "ENTRY_10704b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10704b70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10704b80; body size 37 bytes.
#line 1 "ENTRY_10704b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10704b80(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xec));
  piVar1 = (int *)(*(int **)(param_1 + 0xf0));
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10706810; body size 23 bytes.
#line 1 "ENTRY_10706810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10706810(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xf8));
  return (SCStr *)(param_2);
}


// Reference entry 10707960; body size 6 bytes.
#line 1 "ENTRY_10707960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10707960(void)

{
  return (undefined4)(DAT_121a2878);
}


// Reference entry 10707970; body size 6 bytes.
#line 1 "ENTRY_10707970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10707970(void)

{
  return (undefined4)(DAT_121a2874);
}


// Reference entry 10707980; body size 6 bytes.
#line 1 "ENTRY_10707980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10707980(void)

{
  return (undefined4)(DAT_121a287c);
}


// Reference entry 10707990; body size 6 bytes.
#line 1 "ENTRY_10707990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10707990(void)

{
  return (undefined4)(DAT_121a2870);
}


// Reference entry 107079b0; body size 5 bytes.
#line 1 "ENTRY_107079b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107079b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 107079c0; body size 5 bytes.
#line 1 "ENTRY_107079c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107079c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 107079d0; body size 18 bytes.
#line 1 "ENTRY_107079d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_107079d0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a287c));
  return (bool)(2 < iVar1);
}


// Reference entry 10708500; body size 3 bytes.
#line 1 "ENTRY_10708500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10708500(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10708b90; body size 17 bytes.
#line 1 "ENTRY_10708b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10708b90(int param_1)

{
  *(bool*)(param_1 + 0xec) = (bool)(*(char *)(param_1 + 0xec) == '\0');
  return;
}


// Reference entry 10708c60; body size 78 bytes.
#line 1 "ENTRY_10708c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10708c60(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10708db0; body size 6 bytes.
#line 1 "ENTRY_10708db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10708db0(void)

{
  return (undefined4)(DAT_121a28d4);
}


// Reference entry 10708dc0; body size 6 bytes.
#line 1 "ENTRY_10708dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10708dc0(void)

{
  return (undefined4)(DAT_121a28c8);
}


// Reference entry 10708dd0; body size 6 bytes.
#line 1 "ENTRY_10708dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10708dd0(void)

{
  return (undefined4)(DAT_121a28d0);
}


// Reference entry 10708de0; body size 6 bytes.
#line 1 "ENTRY_10708de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10708de0(void)

{
  return (undefined4)(DAT_121a28cc);
}


// Reference entry 10708e00; body size 57 bytes.
#line 1 "ENTRY_10708e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10708e00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10709210; body size 16 bytes.
#line 1 "ENTRY_10709210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10709210(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10709230; body size 16 bytes.
#line 1 "ENTRY_10709230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10709230(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10709250; body size 16 bytes.
#line 1 "ENTRY_10709250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10709250(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 107095f0; body size 104 bytes.
#line 1 "ENTRY_107095f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107095f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountLoginIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountLoginIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountLoginIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountLoginIntroPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  param_1[0x3b] = (undefined4)(0);
  param_1[0x3c] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 107099d0; body size 57 bytes.
#line 1 "ENTRY_107099d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107099d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountLoginNetworkErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountLoginNetworkErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountLoginNetworkErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountLoginNetworkErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1070a0e0; body size 11 bytes.
#line 1 "ENTRY_1070a0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a0e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1070a0f0; body size 11 bytes.
#line 1 "ENTRY_1070a0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a0f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1070a100; body size 11 bytes.
#line 1 "ENTRY_1070a100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a100(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1070a110; body size 11 bytes.
#line 1 "ENTRY_1070a110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a110(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1070a390; body size 38 bytes.
#line 1 "ENTRY_1070a390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1070a3c0; body size 38 bytes.
#line 1 "ENTRY_1070a3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1070a3f0; body size 21 bytes.
#line 1 "ENTRY_1070a3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a3f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a28d4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1070a500; body size 21 bytes.
#line 1 "ENTRY_1070a500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a500(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a28c8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1070a6a0; body size 21 bytes.
#line 1 "ENTRY_1070a6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a6a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a28d0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1070a6c0; body size 38 bytes.
#line 1 "ENTRY_1070a6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a6c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1070a6f0; body size 21 bytes.
#line 1 "ENTRY_1070a6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a6f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a28cc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1070a920; body size 3 bytes.
#line 1 "ENTRY_1070a920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1070a920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1070a930; body size 3 bytes.
#line 1 "ENTRY_1070a930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1070a930(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1070a940; body size 3 bytes.
#line 1 "ENTRY_1070a940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1070a940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1070a950; body size 3 bytes.
#line 1 "ENTRY_1070a950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1070a950(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1070a960; body size 3 bytes.
#line 1 "ENTRY_1070a960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1070a960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1070a970; body size 3 bytes.
#line 1 "ENTRY_1070a970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1070a970(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1070bdb0; body size 9 bytes.
#line 1 "ENTRY_1070bdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1070bdb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1070bdc0; body size 9 bytes.
#line 1 "ENTRY_1070bdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1070bdc0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1070bdd0; body size 9 bytes.
#line 1 "ENTRY_1070bdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1070bdd0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1070dc00; body size 49 bytes.
#line 1 "ENTRY_1070dc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1070dc00(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0xe8) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0xe8) + 0x20))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 1070dc40; body size 23 bytes.
#line 1 "ENTRY_1070dc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1070dc40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xf8));
  return (SCStr *)(param_2);
}


// Reference entry 1070dc60; body size 23 bytes.
#line 1 "ENTRY_1070dc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1070dc60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xf4));
  return (SCStr *)(param_2);
}


// Reference entry 1070dc80; body size 23 bytes.
#line 1 "ENTRY_1070dc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1070dc80(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xe8));
  return (SCStr *)(param_2);
}


// Reference entry 10710280; body size 6 bytes.
#line 1 "ENTRY_10710280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10710280(void)

{
  return (undefined4)(DAT_121a28d4);
}


// Reference entry 10710290; body size 6 bytes.
#line 1 "ENTRY_10710290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10710290(void)

{
  return (undefined4)(DAT_121a28c8);
}


// Reference entry 107102a0; body size 6 bytes.
#line 1 "ENTRY_107102a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107102a0(void)

{
  return (undefined4)(DAT_121a28d0);
}


// Reference entry 107102b0; body size 6 bytes.
#line 1 "ENTRY_107102b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107102b0(void)

{
  return (undefined4)(DAT_121a28cc);
}


// Reference entry 107102c0; body size 6 bytes.
#line 1 "ENTRY_107102c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107102c0(void)

{
  return (undefined4)(DAT_121a28c4);
}


// Reference entry 107102d0; body size 5 bytes.
#line 1 "ENTRY_107102d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107102d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 107102e0; body size 5 bytes.
#line 1 "ENTRY_107102e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107102e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 107104e0; body size 5 bytes.
#line 1 "ENTRY_107104e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107104e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 107104f0; body size 5 bytes.
#line 1 "ENTRY_107104f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107104f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10710500; body size 5 bytes.
#line 1 "ENTRY_10710500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10710500(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 107105c0; body size 18 bytes.
#line 1 "ENTRY_107105c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_107105c0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a28c8));
  return (bool)(2 < iVar1);
}


// Reference entry 107105e0; body size 7 bytes.
#line 1 "ENTRY_107105e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_107105e0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf0));
}


// Reference entry 10711bf0; body size 3 bytes.
#line 1 "ENTRY_10711bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10711bf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10711c00; body size 3 bytes.
#line 1 "ENTRY_10711c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10711c00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10711c10; body size 3 bytes.
#line 1 "ENTRY_10711c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10711c10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10711c20; body size 28 bytes.
#line 1 "ENTRY_10711c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10711c20(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10711c50; body size 28 bytes.
#line 1 "ENTRY_10711c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10711c50(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10711c80; body size 28 bytes.
#line 1 "ENTRY_10711c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10711c80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10711ce0; body size 13 bytes.
#line 1 "ENTRY_10711ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10711ce0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xf0) = (undefined1)(param_2);
  return;
}


// Reference entry 10712380; body size 6 bytes.
#line 1 "ENTRY_10712380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10712380(void)

{
  return (undefined4)(DAT_121a28f8);
}


// Reference entry 10712390; body size 6 bytes.
#line 1 "ENTRY_10712390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10712390(void)

{
  return (undefined4)(DAT_121a28f0);
}


// Reference entry 107123a0; body size 6 bytes.
#line 1 "ENTRY_107123a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107123a0(void)

{
  return (undefined4)(DAT_121a28f4);
}


// Reference entry 107123c0; body size 57 bytes.
#line 1 "ENTRY_107123c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107123c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 107126e0; body size 16 bytes.
#line 1 "ENTRY_107126e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_107126e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10712720; body size 144 bytes.
#line 1 "ENTRY_10712720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10712720(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  param_1[0x38] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountResetPasswordCompletedPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountResetPasswordCompletedPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountResetPasswordCompletedPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountResetPasswordCompletedPage);
  param_1[0x38] = (undefined4)((uint)&ghidra_vftable_SCAccountResetPasswordCompletedPage);
  *(undefined1*)(param_1 + 0x3b) = (undefined1)(0);
  param_1[0x3c] = (undefined4)(0);
  param_1[0x3d] = (undefined4)(0);
  param_1[0x3e] = (undefined4)(0);
  param_1[0x3f] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 107128e0; body size 93 bytes.
#line 1 "ENTRY_107128e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107128e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountResetPasswordMainPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountResetPasswordMainPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountResetPasswordMainPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountResetPasswordMainPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x3b) = (undefined2)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10712a60; body size 57 bytes.
#line 1 "ENTRY_10712a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10712a60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountResetPasswordNetworkErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountResetPasswordNetworkErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountResetPasswordNetworkErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountResetPasswordNetworkErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10712f60; body size 38 bytes.
#line 1 "ENTRY_10712f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10712f60(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10712f90; body size 11 bytes.
#line 1 "ENTRY_10712f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10712f90(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10712fa0; body size 11 bytes.
#line 1 "ENTRY_10712fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10712fa0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10712fb0; body size 11 bytes.
#line 1 "ENTRY_10712fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10712fb0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10713150; body size 21 bytes.
#line 1 "ENTRY_10713150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10713150(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a28f8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10713220; body size 21 bytes.
#line 1 "ENTRY_10713220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10713220(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a28f0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10713240; body size 38 bytes.
#line 1 "ENTRY_10713240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10713240(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10713270; body size 21 bytes.
#line 1 "ENTRY_10713270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10713270(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a28f4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10713370; body size 3 bytes.
#line 1 "ENTRY_10713370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10713370(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10713380; body size 3 bytes.
#line 1 "ENTRY_10713380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10713380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10714010; body size 9 bytes.
#line 1 "ENTRY_10714010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10714010(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10717280; body size 6 bytes.
#line 1 "ENTRY_10717280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10717280(void)

{
  return (undefined4)(DAT_121a28f8);
}


// Reference entry 10717290; body size 6 bytes.
#line 1 "ENTRY_10717290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10717290(void)

{
  return (undefined4)(DAT_121a28f0);
}


// Reference entry 107172a0; body size 6 bytes.
#line 1 "ENTRY_107172a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107172a0(void)

{
  return (undefined4)(DAT_121a28f4);
}


// Reference entry 107172b0; body size 6 bytes.
#line 1 "ENTRY_107172b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107172b0(void)

{
  return (undefined4)(DAT_121a28ec);
}


// Reference entry 107172d0; body size 5 bytes.
#line 1 "ENTRY_107172d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107172d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 107172e0; body size 5 bytes.
#line 1 "ENTRY_107172e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107172e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 107172f0; body size 18 bytes.
#line 1 "ENTRY_107172f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_107172f0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a28f0));
  return (bool)(2 < iVar1);
}


// Reference entry 10717310; body size 19 bytes.
#line 1 "ENTRY_10717310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10717310(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 8))();
  iVar1 = (int)(thunk_FUN_105ad8f0());
  return (bool)(iVar1 == 5);
}


// Reference entry 10718080; body size 3 bytes.
#line 1 "ENTRY_10718080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10718080(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 107180c0; body size 17 bytes.
#line 1 "ENTRY_107180c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107180c0(int param_1)

{
  *(bool*)(param_1 + 0xec) = (bool)(*(char *)(param_1 + 0xec) == '\0');
  return;
}


// Reference entry 10718190; body size 91 bytes.
#line 1 "ENTRY_10718190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10718190(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = (int)(0);
  *param_1 = (int)(0);
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10718210; body size 26 bytes.
#line 1 "ENTRY_10718210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10718210(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10718380; body size 6 bytes.
#line 1 "ENTRY_10718380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10718380(void)

{
  return (undefined4)(DAT_121a2948);
}


// Reference entry 10718390; body size 6 bytes.
#line 1 "ENTRY_10718390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10718390(void)

{
  return (undefined4)(DAT_121a2950);
}


// Reference entry 107183a0; body size 6 bytes.
#line 1 "ENTRY_107183a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107183a0(void)

{
  return (undefined4)(DAT_121a2944);
}


// Reference entry 107183b0; body size 6 bytes.
#line 1 "ENTRY_107183b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107183b0(void)

{
  return (undefined4)(DAT_121a2954);
}


// Reference entry 107183c0; body size 6 bytes.
#line 1 "ENTRY_107183c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107183c0(void)

{
  return (undefined4)(DAT_121a294c);
}


// Reference entry 107183e0; body size 57 bytes.
#line 1 "ENTRY_107183e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107183e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 107188e0; body size 16 bytes.
#line 1 "ENTRY_107188e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_107188e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10718900; body size 57 bytes.
#line 1 "ENTRY_10718900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10718900(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsCountryCodePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsCountryCodePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsCountryCodePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsCountryCodePage);
  return (undefined4 *)(param_1);
}


// Reference entry 10718a50; body size 84 bytes.
#line 1 "ENTRY_10718a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10718a50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsGeoSetPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsGeoSetPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsGeoSetPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsGeoSetPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3a) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10718bc0; body size 93 bytes.
#line 1 "ENTRY_10718bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10718bc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsNamePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsNamePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsNamePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsNamePage);
  *(undefined2*)(param_1 + 0x38) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0xe2) = (undefined1)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10718d40; body size 57 bytes.
#line 1 "ENTRY_10718d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10718d40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsNetworkErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsNetworkErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsNetworkErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsNetworkErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10718e90; body size 57 bytes.
#line 1 "ENTRY_10718e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10718e90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsPostalCodePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsPostalCodePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsPostalCodePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsPostalCodePage);
  return (undefined4 *)(param_1);
}


// Reference entry 10719600; body size 38 bytes.
#line 1 "ENTRY_10719600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719600(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10719630; body size 11 bytes.
#line 1 "ENTRY_10719630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719630(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10719640; body size 11 bytes.
#line 1 "ENTRY_10719640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719640(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10719650; body size 11 bytes.
#line 1 "ENTRY_10719650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719650(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10719660; body size 11 bytes.
#line 1 "ENTRY_10719660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719660(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10719670; body size 11 bytes.
#line 1 "ENTRY_10719670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719670(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10719750; body size 38 bytes.
#line 1 "ENTRY_10719750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719750(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10719780; body size 21 bytes.
#line 1 "ENTRY_10719780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719780(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2948 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10719850; body size 21 bytes.
#line 1 "ENTRY_10719850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719850(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2950 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10719920; body size 21 bytes.
#line 1 "ENTRY_10719920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719920(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2944 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10719940; body size 38 bytes.
#line 1 "ENTRY_10719940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719940(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10719970; body size 21 bytes.
#line 1 "ENTRY_10719970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719970(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2954 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10719990; body size 38 bytes.
#line 1 "ENTRY_10719990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719990(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 107199c0; body size 21 bytes.
#line 1 "ENTRY_107199c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107199c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a294c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10719ba0; body size 3 bytes.
#line 1 "ENTRY_10719ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10719ba0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10719bb0; body size 3 bytes.
#line 1 "ENTRY_10719bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10719bb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1071b280; body size 9 bytes.
#line 1 "ENTRY_1071b280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1071b280(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1071e340; body size 23 bytes.
#line 1 "ENTRY_1071e340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1071e340(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xf0));
  return (SCStr *)(param_2);
}


// Reference entry 1071e610; body size 23 bytes.
#line 1 "ENTRY_1071e610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1071e610(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xf8));
  return (SCStr *)(param_2);
}


// Reference entry 1071e630; body size 23 bytes.
#line 1 "ENTRY_1071e630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1071e630(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xfc));
  return (SCStr *)(param_2);
}


// Reference entry 1071ea60; body size 23 bytes.
#line 1 "ENTRY_1071ea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_1071ea60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xf4));
  return (SCStr *)(param_2);
}


// Reference entry 10721a60; body size 6 bytes.
#line 1 "ENTRY_10721a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10721a60(void)

{
  return (undefined4)(DAT_121a2948);
}


// Reference entry 10721a70; body size 6 bytes.
#line 1 "ENTRY_10721a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10721a70(void)

{
  return (undefined4)(DAT_121a2950);
}


// Reference entry 10721a80; body size 6 bytes.
#line 1 "ENTRY_10721a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10721a80(void)

{
  return (undefined4)(DAT_121a2944);
}


// Reference entry 10721a90; body size 6 bytes.
#line 1 "ENTRY_10721a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10721a90(void)

{
  return (undefined4)(DAT_121a2954);
}


// Reference entry 10721aa0; body size 6 bytes.
#line 1 "ENTRY_10721aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10721aa0(void)

{
  return (undefined4)(DAT_121a294c);
}


// Reference entry 10721ab0; body size 6 bytes.
#line 1 "ENTRY_10721ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10721ab0(void)

{
  return (undefined4)(DAT_121a2940);
}


// Reference entry 10722000; body size 5 bytes.
#line 1 "ENTRY_10722000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10722000(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10722010; body size 5 bytes.
#line 1 "ENTRY_10722010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10722010(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10722020; body size 18 bytes.
#line 1 "ENTRY_10722020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10722020(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a2954));
  return (bool)(iVar1 == 2);
}


// Reference entry 10722de0; body size 3 bytes.
#line 1 "ENTRY_10722de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10722de0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10722df0; body size 28 bytes.
#line 1 "ENTRY_10722df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10722df0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10722fc0; body size 39 bytes.
#line 1 "ENTRY_10722fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10722fc0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xf0));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10722ff0; body size 39 bytes.
#line 1 "ENTRY_10722ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10722ff0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xf4));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10723020; body size 15 bytes.
#line 1 "ENTRY_10723020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10723020(undefined1 *param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x104) = (undefined1)(*param_2);
  return;
}


// Reference entry 10723040; body size 18 bytes.
#line 1 "ENTRY_10723040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10723040(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10723060; body size 18 bytes.
#line 1 "ENTRY_10723060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10723060(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10723080; body size 22 bytes.
#line 1 "ENTRY_10723080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10723080(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 107230a0; body size 18 bytes.
#line 1 "ENTRY_107230a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_107230a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 107230c0; body size 18 bytes.
#line 1 "ENTRY_107230c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_107230c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10723320; body size 17 bytes.
#line 1 "ENTRY_10723320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10723320(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10723340; body size 11 bytes.
#line 1 "ENTRY_10723340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10723340(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10723350; body size 11 bytes.
#line 1 "ENTRY_10723350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10723350(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10723360; body size 22 bytes.
#line 1 "ENTRY_10723360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10723360(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10723420; body size 11 bytes.
#line 1 "ENTRY_10723420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10723420(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 107236e0; body size 19 bytes.
#line 1 "ENTRY_107236e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107236e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10723700; body size 22 bytes.
#line 1 "ENTRY_10723700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10723700(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10723830; body size 3 bytes.
#line 1 "ENTRY_10723830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10723830(void)

{
  return;
}


// Reference entry 10723840; body size 25 bytes.
#line 1 "ENTRY_10723840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10723840(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10723860; body size 25 bytes.
#line 1 "ENTRY_10723860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10723860(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10723920; body size 13 bytes.
#line 1 "ENTRY_10723920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10723920(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10723930; body size 13 bytes.
#line 1 "ENTRY_10723930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10723930(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10723940; body size 13 bytes.
#line 1 "ENTRY_10723940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10723940(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10723950; body size 3 bytes.
#line 1 "ENTRY_10723950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10723950(void)

{
  return;
}


// Reference entry 10723960; body size 3 bytes.
#line 1 "ENTRY_10723960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10723960(void)

{
  return;
}


// Reference entry 10723f00; body size 15 bytes.
#line 1 "ENTRY_10723f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10723f00(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10723f20; body size 15 bytes.
#line 1 "ENTRY_10723f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10723f20(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10723fc0; body size 15 bytes.
#line 1 "ENTRY_10723fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10723fc0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10723fe0; body size 7 bytes.
#line 1 "ENTRY_10723fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10723fe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10724270; body size 5 bytes.
#line 1 "ENTRY_10724270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10724280; body size 31 bytes.
#line 1 "ENTRY_10724280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10724280(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10724530; body size 7 bytes.
#line 1 "ENTRY_10724530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724530(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10724540; body size 5 bytes.
#line 1 "ENTRY_10724540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10724550; body size 5 bytes.
#line 1 "ENTRY_10724550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10724580; body size 5 bytes.
#line 1 "ENTRY_10724580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10724590; body size 5 bytes.
#line 1 "ENTRY_10724590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724590(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 107245a0; body size 5 bytes.
#line 1 "ENTRY_107245a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107245a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 107245b0; body size 5 bytes.
#line 1 "ENTRY_107245b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107245b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 107245c0; body size 5 bytes.
#line 1 "ENTRY_107245c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107245c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 107245d0; body size 5 bytes.
#line 1 "ENTRY_107245d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107245d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 107245e0; body size 5 bytes.
#line 1 "ENTRY_107245e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107245e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 107245f0; body size 19 bytes.
#line 1 "ENTRY_107245f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_107245f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_3[1]);
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 10724610; body size 19 bytes.
#line 1 "ENTRY_10724610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10724610(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  *(undefined1*)(param_2 + 1) = (undefined1)(0);
  return;
}


// Reference entry 107246a0; body size 3 bytes.
#line 1 "ENTRY_107246a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_107246a0(void)

{
  return;
}


// Reference entry 107246b0; body size 15 bytes.
#line 1 "ENTRY_107246b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107246b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 107246d0; body size 15 bytes.
#line 1 "ENTRY_107246d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107246d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 107246f0; body size 15 bytes.
#line 1 "ENTRY_107246f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107246f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10724710; body size 5 bytes.
#line 1 "ENTRY_10724710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10724720; body size 5 bytes.
#line 1 "ENTRY_10724720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10724730; body size 5 bytes.
#line 1 "ENTRY_10724730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10724740; body size 5 bytes.
#line 1 "ENTRY_10724740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10724750; body size 5 bytes.
#line 1 "ENTRY_10724750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10724780; body size 5 bytes.
#line 1 "ENTRY_10724780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 107247b0; body size 5 bytes.
#line 1 "ENTRY_107247b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107247b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 107247c0; body size 5 bytes.
#line 1 "ENTRY_107247c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107247c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 107247d0; body size 11 bytes.
#line 1 "ENTRY_107247d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_107247d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 107247e0; body size 6 bytes.
#line 1 "ENTRY_107247e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107247e0(void)

{
  return (undefined4)(DAT_121a29ec);
}


// Reference entry 107247f0; body size 6 bytes.
#line 1 "ENTRY_107247f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107247f0(void)

{
  return (undefined4)(DAT_121a29bc);
}


// Reference entry 10724800; body size 6 bytes.
#line 1 "ENTRY_10724800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724800(void)

{
  return (undefined4)(DAT_121a29e0);
}


// Reference entry 10724810; body size 6 bytes.
#line 1 "ENTRY_10724810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724810(void)

{
  return (undefined4)(DAT_121a29d0);
}


// Reference entry 10724820; body size 6 bytes.
#line 1 "ENTRY_10724820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724820(void)

{
  return (undefined4)(DAT_121a29b4);
}


// Reference entry 10724830; body size 6 bytes.
#line 1 "ENTRY_10724830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724830(void)

{
  return (undefined4)(DAT_121a29ac);
}


// Reference entry 10724840; body size 6 bytes.
#line 1 "ENTRY_10724840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724840(void)

{
  return (undefined4)(DAT_121a29b0);
}


// Reference entry 10724850; body size 6 bytes.
#line 1 "ENTRY_10724850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724850(void)

{
  return (undefined4)(DAT_121a29c0);
}


// Reference entry 10724860; body size 6 bytes.
#line 1 "ENTRY_10724860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724860(void)

{
  return (undefined4)(DAT_121a29e4);
}


// Reference entry 10724870; body size 6 bytes.
#line 1 "ENTRY_10724870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724870(void)

{
  return (undefined4)(DAT_121a29b8);
}


// Reference entry 10724880; body size 6 bytes.
#line 1 "ENTRY_10724880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724880(void)

{
  return (undefined4)(DAT_121a29a0);
}


// Reference entry 10724890; body size 6 bytes.
#line 1 "ENTRY_10724890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724890(void)

{
  return (undefined4)(DAT_121a29d4);
}


// Reference entry 107248a0; body size 6 bytes.
#line 1 "ENTRY_107248a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107248a0(void)

{
  return (undefined4)(DAT_121a29f0);
}


// Reference entry 107248b0; body size 6 bytes.
#line 1 "ENTRY_107248b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107248b0(void)

{
  return (undefined4)(DAT_121a29cc);
}


// Reference entry 107248c0; body size 6 bytes.
#line 1 "ENTRY_107248c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107248c0(void)

{
  return (undefined4)(DAT_121a29dc);
}


// Reference entry 107248d0; body size 6 bytes.
#line 1 "ENTRY_107248d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107248d0(void)

{
  return (undefined4)(DAT_121a29c8);
}


// Reference entry 107248e0; body size 6 bytes.
#line 1 "ENTRY_107248e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107248e0(void)

{
  return (undefined4)(DAT_121a29a4);
}


// Reference entry 107248f0; body size 6 bytes.
#line 1 "ENTRY_107248f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107248f0(void)

{
  return (undefined4)(DAT_121a29c4);
}


// Reference entry 10724900; body size 6 bytes.
#line 1 "ENTRY_10724900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724900(void)

{
  return (undefined4)(DAT_121a29e8);
}


// Reference entry 10724910; body size 6 bytes.
#line 1 "ENTRY_10724910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724910(void)

{
  return (undefined4)(DAT_121a29d8);
}


// Reference entry 10724920; body size 6 bytes.
#line 1 "ENTRY_10724920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724920(void)

{
  return (undefined4)(DAT_121a29a8);
}


// Reference entry 10724b20; body size 5 bytes.
#line 1 "ENTRY_10724b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10724b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10724e30; body size 57 bytes.
#line 1 "ENTRY_10724e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10724e30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10726c00; body size 18 bytes.
#line 1 "ENTRY_10726c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10726c00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10726d20; body size 11 bytes.
#line 1 "ENTRY_10726d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10726d20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10726d30; body size 16 bytes.
#line 1 "ENTRY_10726d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10726d30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10726d50; body size 16 bytes.
#line 1 "ENTRY_10726d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10726d50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10726d70; body size 3 bytes.
#line 1 "ENTRY_10726d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10726d70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10726d80; body size 3 bytes.
#line 1 "ENTRY_10726d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10726d80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10726d90; body size 18 bytes.
#line 1 "ENTRY_10726d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10726d90(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10726db0; body size 52 bytes.
#line 1 "ENTRY_10726db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10726db0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10726f60; body size 13 bytes.
#line 1 "ENTRY_10726f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10726f60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 107275a0; body size 57 bytes.
#line 1 "ENTRY_107275a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107275a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAnotherProductSelectionPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAnotherProductSelectionPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAnotherProductSelectionPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAnotherProductSelectionPage);
  return (undefined4 *)(param_1);
}


// Reference entry 107276f0; body size 57 bytes.
#line 1 "ENTRY_107276f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107276f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAssetDownloadErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAssetDownloadErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAssetDownloadErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAssetDownloadErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10727840; body size 57 bytes.
#line 1 "ENTRY_10727840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10727840(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceCountryCodeFetchErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceCountryCodeFetchErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceCountryCodeFetchErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceCountryCodeFetchErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10727990; body size 57 bytes.
#line 1 "ENTRY_10727990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10727990(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceDeviceIncompatiblePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceDeviceIncompatiblePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceDeviceIncompatiblePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceDeviceIncompatiblePage);
  return (undefined4 *)(param_1);
}


// Reference entry 10727f00; body size 57 bytes.
#line 1 "ENTRY_10727f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10727f00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNoCompatibleProductPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNoCompatibleProductPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNoCompatibleProductPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNoCompatibleProductPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10728050; body size 57 bytes.
#line 1 "ENTRY_10728050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10728050(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNotificationIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNotificationIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNotificationIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNotificationIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 107281a0; body size 57 bytes.
#line 1 "ENTRY_107281a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107281a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOfflineProductsErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOfflineProductsErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOfflineProductsErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOfflineProductsErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 107282f0; body size 64 bytes.
#line 1 "ENTRY_107282f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107282f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOutroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOutroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOutroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOutroPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10728440; body size 57 bytes.
#line 1 "ENTRY_10728440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10728440(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceProductConfirmationPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceProductConfirmationPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceProductConfirmationPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceProductConfirmationPage);
  return (undefined4 *)(param_1);
}


// Reference entry 107287a0; body size 84 bytes.
#line 1 "ENTRY_107287a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107287a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceProductSelectionPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceProductSelectionPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceProductSelectionPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceProductSelectionPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 107291a0; body size 57 bytes.
#line 1 "ENTRY_107291a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107291a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceWaitingPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceWaitingPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceWaitingPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceWaitingPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1072a750; body size 38 bytes.
#line 1 "ENTRY_1072a750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1072a750(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072a780; body size 38 bytes.
#line 1 "ENTRY_1072a780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1072a780(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072a7b0; body size 38 bytes.
#line 1 "ENTRY_1072a7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1072a7b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1072aa20; body size 11 bytes.
#line 1 "ENTRY_1072aa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa20(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072aa30; body size 11 bytes.
#line 1 "ENTRY_1072aa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa30(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072aa40; body size 11 bytes.
#line 1 "ENTRY_1072aa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa40(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072aa50; body size 11 bytes.
#line 1 "ENTRY_1072aa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa50(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072aa60; body size 11 bytes.
#line 1 "ENTRY_1072aa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa60(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072aa70; body size 11 bytes.
#line 1 "ENTRY_1072aa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa70(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072aa80; body size 11 bytes.
#line 1 "ENTRY_1072aa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa80(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072aa90; body size 11 bytes.
#line 1 "ENTRY_1072aa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa90(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072aaa0; body size 11 bytes.
#line 1 "ENTRY_1072aaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aaa0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072aab0; body size 11 bytes.
#line 1 "ENTRY_1072aab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aab0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072aac0; body size 11 bytes.
#line 1 "ENTRY_1072aac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aac0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072aad0; body size 11 bytes.
#line 1 "ENTRY_1072aad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aad0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072aae0; body size 11 bytes.
#line 1 "ENTRY_1072aae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aae0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072aaf0; body size 11 bytes.
#line 1 "ENTRY_1072aaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aaf0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072ab00; body size 11 bytes.
#line 1 "ENTRY_1072ab00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab00(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072ab10; body size 11 bytes.
#line 1 "ENTRY_1072ab10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab10(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072ab20; body size 11 bytes.
#line 1 "ENTRY_1072ab20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab20(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072ab30; body size 11 bytes.
#line 1 "ENTRY_1072ab30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab30(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072ab40; body size 11 bytes.
#line 1 "ENTRY_1072ab40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab40(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072ab50; body size 11 bytes.
#line 1 "ENTRY_1072ab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab50(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072ab60; body size 11 bytes.
#line 1 "ENTRY_1072ab60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab60(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072ac50; body size 38 bytes.
#line 1 "ENTRY_1072ac50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ac50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072ac80; body size 38 bytes.
#line 1 "ENTRY_1072ac80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ac80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072acb0; body size 38 bytes.
#line 1 "ENTRY_1072acb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072acb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072ace0; body size 38 bytes.
#line 1 "ENTRY_1072ace0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ace0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072ad10; body size 38 bytes.
#line 1 "ENTRY_1072ad10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ad10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072ad40; body size 38 bytes.
#line 1 "ENTRY_1072ad40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ad40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072ad70; body size 38 bytes.
#line 1 "ENTRY_1072ad70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ad70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072ada0; body size 38 bytes.
#line 1 "ENTRY_1072ada0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ada0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072add0; body size 38 bytes.
#line 1 "ENTRY_1072add0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072add0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072afa0; body size 19 bytes.
#line 1 "ENTRY_1072afa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072afa0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 1072afc0; body size 19 bytes.
#line 1 "ENTRY_1072afc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072afc0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 1072b080; body size 38 bytes.
#line 1 "ENTRY_1072b080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b0b0; body size 21 bytes.
#line 1 "ENTRY_1072b0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b0b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29ec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b0d0; body size 38 bytes.
#line 1 "ENTRY_1072b0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b100; body size 21 bytes.
#line 1 "ENTRY_1072b100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b100(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29bc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b120; body size 38 bytes.
#line 1 "ENTRY_1072b120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b120(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b150; body size 21 bytes.
#line 1 "ENTRY_1072b150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b150(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29e0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b170; body size 38 bytes.
#line 1 "ENTRY_1072b170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b170(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b1a0; body size 21 bytes.
#line 1 "ENTRY_1072b1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b1a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29d0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b1c0; body size 38 bytes.
#line 1 "ENTRY_1072b1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b1c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b1f0; body size 21 bytes.
#line 1 "ENTRY_1072b1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b1f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29b4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b210; body size 38 bytes.
#line 1 "ENTRY_1072b210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b210(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b240; body size 21 bytes.
#line 1 "ENTRY_1072b240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b240(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29ac = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b260; body size 38 bytes.
#line 1 "ENTRY_1072b260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b260(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b290; body size 21 bytes.
#line 1 "ENTRY_1072b290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b290(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29b0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b2b0; body size 38 bytes.
#line 1 "ENTRY_1072b2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b2b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b2e0; body size 21 bytes.
#line 1 "ENTRY_1072b2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b2e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29c0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b300; body size 38 bytes.
#line 1 "ENTRY_1072b300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b300(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b330; body size 21 bytes.
#line 1 "ENTRY_1072b330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b330(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29e4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b350; body size 38 bytes.
#line 1 "ENTRY_1072b350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b350(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b380; body size 21 bytes.
#line 1 "ENTRY_1072b380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b380(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29b8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b3a0; body size 38 bytes.
#line 1 "ENTRY_1072b3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b3a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b3d0; body size 21 bytes.
#line 1 "ENTRY_1072b3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b3d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29a0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b3f0; body size 38 bytes.
#line 1 "ENTRY_1072b3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b3f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b420; body size 21 bytes.
#line 1 "ENTRY_1072b420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b420(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29d4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b440; body size 38 bytes.
#line 1 "ENTRY_1072b440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b440(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b470; body size 21 bytes.
#line 1 "ENTRY_1072b470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b470(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29f0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b490; body size 38 bytes.
#line 1 "ENTRY_1072b490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b490(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b4c0; body size 21 bytes.
#line 1 "ENTRY_1072b4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b4c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29cc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b4e0; body size 38 bytes.
#line 1 "ENTRY_1072b4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b4e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b510; body size 21 bytes.
#line 1 "ENTRY_1072b510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b510(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29dc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b5e0; body size 21 bytes.
#line 1 "ENTRY_1072b5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b5e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29c8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b660; body size 21 bytes.
#line 1 "ENTRY_1072b660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b660(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29a4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b680; body size 38 bytes.
#line 1 "ENTRY_1072b680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b6b0; body size 21 bytes.
#line 1 "ENTRY_1072b6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b6b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29c4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b6d0; body size 38 bytes.
#line 1 "ENTRY_1072b6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b6d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b700; body size 21 bytes.
#line 1 "ENTRY_1072b700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b700(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29e8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b720; body size 38 bytes.
#line 1 "ENTRY_1072b720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b750; body size 21 bytes.
#line 1 "ENTRY_1072b750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b750(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29d8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b770; body size 38 bytes.
#line 1 "ENTRY_1072b770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b770(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1072b7a0; body size 21 bytes.
#line 1 "ENTRY_1072b7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b7a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29a8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072bd10; body size 65 bytes.
#line 1 "ENTRY_1072bd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1072bd10(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if (iVar2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 1072bd70; body size 65 bytes.
#line 1 "ENTRY_1072bd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1072bd70(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if (iVar2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 1072beb0; body size 21 bytes.
#line 1 "ENTRY_1072beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_1072beb0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x1c);
}


// Reference entry 1072bed0; body size 3 bytes.
#line 1 "ENTRY_1072bed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072bed0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1072bff0; body size 18 bytes.
#line 1 "ENTRY_1072bff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_1072bff0(int *param_1,int *param_2)

{
  return (bool)(*param_1 < *param_2);
}


// Reference entry 1072de30; body size 31 bytes.
#line 1 "ENTRY_1072de30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072de30(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 1072de60; body size 31 bytes.
#line 1 "ENTRY_1072de60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072de60(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 1072deb0; body size 14 bytes.
#line 1 "ENTRY_1072deb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072deb0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 1072e1e0; body size 5 bytes.
#line 1 "ENTRY_1072e1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1072e1e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1072e210; body size 3 bytes.
#line 1 "ENTRY_1072e210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072e210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1072e220; body size 3 bytes.
#line 1 "ENTRY_1072e220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072e220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1072e230; body size 3 bytes.
#line 1 "ENTRY_1072e230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072e230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1072e240; body size 3 bytes.
#line 1 "ENTRY_1072e240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072e240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1072e250; body size 3 bytes.
#line 1 "ENTRY_1072e250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072e250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1072e260; body size 3 bytes.
#line 1 "ENTRY_1072e260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072e260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1072e270; body size 3 bytes.
#line 1 "ENTRY_1072e270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072e270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1072e280; body size 3 bytes.
#line 1 "ENTRY_1072e280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072e280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1072e290; body size 3 bytes.
#line 1 "ENTRY_1072e290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072e290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1072e2a0; body size 3 bytes.
#line 1 "ENTRY_1072e2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072e2a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1072e2b0; body size 3 bytes.
#line 1 "ENTRY_1072e2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072e2b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1072e550; body size 79 bytes.
#line 1 "ENTRY_1072e550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1072e550(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int*)(param_2 + 8) = (int)(*piVar1);
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int*)(*piVar1 + 4) = (int)(param_2);
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
  if ((int)(param_2) == *(int *)(*param_1 + 4)) {
    *(int**)(*param_1 + 4) = (int *)(piVar1);
    *piVar1 = (int)(param_2);
    *(int**)(param_2 + 4) = (int *)(piVar1);
    return;
  }
  piVar2 = (int *)(*(int **)(param_2 + 4));
  if (param_2 == *piVar2) {
    *piVar2 = (int)((int)piVar1);
    *piVar1 = (int)(param_2);
    *(int**)(param_2 + 4) = (int *)(piVar1);
    return;
  }
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int**)(param_2 + 4) = (int *)(piVar1);
  return;
}


// Reference entry 1072e5c0; body size 30 bytes.
#line 1 "ENTRY_1072e5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1072e5c0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)(*(char *)(*(int *)(param_1 + 8) + 0xd));
  iVar2 = (int)(*(int *)(param_1 + 8));
  while (iVar3 = iVar2, cVar1 == '\0') {
    iVar2 = (int)(*(int *)(iVar3 + 8));
    cVar1 = (char)(*(char *)(iVar2 + 0xd));
    param_1 = (int)(iVar3);
  }
  return (int)(param_1);
}


// Reference entry 1072e5f0; body size 31 bytes.
#line 1 "ENTRY_1072e5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_1072e5f0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = (char)(*(char *)(*param_1 + 0xd));
  piVar2 = (int *)((int *)*param_1);
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)((int *)*piVar3);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_1 = (int *)(piVar3);
  }
  return (int *)(param_1);
}


// Reference entry 1072e640; body size 11 bytes.
#line 1 "ENTRY_1072e640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072e640(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1072e650; body size 83 bytes.
#line 1 "ENTRY_1072e650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1072e650(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(*(int *)(iVar1 + 8));
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int**)(*(int *)(iVar1 + 8) + 4) = (int *)(param_2);
  }
  *(int*)(iVar1 + 4) = (int)(param_2[1]);
  if ((int *)(param_2) == *(int **)(*param_1 + 4)) {
    *(int*)(*param_1 + 4) = (int)(iVar1);
    *(int**)(iVar1 + 8) = (int *)(param_2);
    param_2[1] = (int)(iVar1);
    return;
  }
  piVar2 = (int *)((int *)param_2[1]);
  if ((int *)(param_2) == (int *)piVar2[2]) {
    piVar2[2] = (int)(iVar1);
    *(int**)(iVar1 + 8) = (int *)(param_2);
    param_2[1] = (int)(iVar1);
    return;
  }
  *piVar2 = (int)(iVar1);
  *(int**)(iVar1 + 8) = (int *)(param_2);
  param_2[1] = (int)(iVar1);
  return;
}


// Reference entry 1072e6e0; body size 90 bytes.
#line 1 "ENTRY_1072e6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1072e6e0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1072e760; body size 90 bytes.
#line 1 "ENTRY_1072e760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1072e760(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 1072e830; body size 3 bytes.
#line 1 "ENTRY_1072e830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1072e830(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10730870; body size 57 bytes.
#line 1 "ENTRY_10730870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10730870(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x18);
  iVar1 = (int)(param_2);
  if (0xfff < uVar2) {
    iVar1 = (int)(*(int *)(param_2 + -4));
    uVar2 = (uint)(uVar2 + 0x23);
    if (0x1f < (param_2 - iVar1) - 4U) {
                    
                    
                    
      _invalid_parameter_noinfo_noreturn();
      return;
    }
  }
  thunk_FUN_1148a50e(iVar1,uVar2);
  return;
}


// Reference entry 107308c0; body size 57 bytes.
#line 1 "ENTRY_107308c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_107308c0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x18);
  iVar1 = (int)(param_2);
  if (0xfff < uVar2) {
    iVar1 = (int)(*(int *)(param_2 + -4));
    uVar2 = (uint)(uVar2 + 0x23);
    if (0x1f < (param_2 - iVar1) - 4U) {
                    
                    
                    
      _invalid_parameter_noinfo_noreturn();
      return;
    }
  }
  thunk_FUN_1148a50e(iVar1,uVar2);
  return;
}


// Reference entry 10730910; body size 60 bytes.
#line 1 "ENTRY_10730910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10730910(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x18);
  iVar1 = (int)(param_1);
  if (0xfff < uVar2) {
    iVar1 = (int)(*(int *)(param_1 + -4));
    uVar2 = (uint)(uVar2 + 0x23);
    if (0x1f < (param_1 - iVar1) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar1,uVar2);
  return;
}


// Reference entry 10730960; body size 4 bytes.
#line 1 "ENTRY_10730960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10730960(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10730b90; body size 7 bytes.
#line 1 "ENTRY_10730b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10730b90(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x140));
}


// Reference entry 10743050; body size 23 bytes.
#line 1 "ENTRY_10743050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10743050(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x100));
  return (SCStr *)(param_2);
}


// Reference entry 10743070; body size 6 bytes.
#line 1 "ENTRY_10743070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10743070(void)

{
  return (undefined4)(DAT_121a29ec);
}


// Reference entry 10743080; body size 6 bytes.
#line 1 "ENTRY_10743080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10743080(void)

{
  return (undefined4)(DAT_121a29bc);
}


// Reference entry 10743090; body size 6 bytes.
#line 1 "ENTRY_10743090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10743090(void)

{
  return (undefined4)(DAT_121a29e0);
}


// Reference entry 107430a0; body size 6 bytes.
#line 1 "ENTRY_107430a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107430a0(void)

{
  return (undefined4)(DAT_121a29d0);
}


// Reference entry 107430b0; body size 6 bytes.
#line 1 "ENTRY_107430b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107430b0(void)

{
  return (undefined4)(DAT_121a29b4);
}


// Reference entry 107430c0; body size 6 bytes.
#line 1 "ENTRY_107430c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107430c0(void)

{
  return (undefined4)(DAT_121a29ac);
}


// Reference entry 107430d0; body size 6 bytes.
#line 1 "ENTRY_107430d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107430d0(void)

{
  return (undefined4)(DAT_121a29b0);
}


// Reference entry 107430e0; body size 6 bytes.
#line 1 "ENTRY_107430e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107430e0(void)

{
  return (undefined4)(DAT_121a29c0);
}


// Reference entry 107430f0; body size 6 bytes.
#line 1 "ENTRY_107430f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107430f0(void)

{
  return (undefined4)(DAT_121a29e4);
}


// Reference entry 10743100; body size 6 bytes.
#line 1 "ENTRY_10743100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10743100(void)

{
  return (undefined4)(DAT_121a29b8);
}


// Reference entry 10743110; body size 6 bytes.
#line 1 "ENTRY_10743110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10743110(void)

{
  return (undefined4)(DAT_121a29a0);
}


// Reference entry 10743120; body size 6 bytes.
#line 1 "ENTRY_10743120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10743120(void)

{
  return (undefined4)(DAT_121a29d4);
}


// Reference entry 10743130; body size 6 bytes.
#line 1 "ENTRY_10743130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10743130(void)

{
  return (undefined4)(DAT_121a29f0);
}


// Reference entry 10743140; body size 6 bytes.
#line 1 "ENTRY_10743140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10743140(void)

{
  return (undefined4)(DAT_121a29cc);
}


// Reference entry 10743150; body size 6 bytes.
#line 1 "ENTRY_10743150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10743150(void)

{
  return (undefined4)(DAT_121a29dc);
}


// Reference entry 10743160; body size 6 bytes.
#line 1 "ENTRY_10743160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10743160(void)

{
  return (undefined4)(DAT_121a29c8);
}


// Reference entry 10743170; body size 6 bytes.
#line 1 "ENTRY_10743170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10743170(void)

{
  return (undefined4)(DAT_121a29a4);
}


// Reference entry 10743180; body size 6 bytes.
#line 1 "ENTRY_10743180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10743180(void)

{
  return (undefined4)(DAT_121a29c4);
}


// Reference entry 10743190; body size 6 bytes.
#line 1 "ENTRY_10743190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10743190(void)

{
  return (undefined4)(DAT_121a29e8);
}


// Reference entry 107431a0; body size 6 bytes.
#line 1 "ENTRY_107431a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107431a0(void)

{
  return (undefined4)(DAT_121a29d8);
}


// Reference entry 107431b0; body size 6 bytes.
#line 1 "ENTRY_107431b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107431b0(void)

{
  return (undefined4)(DAT_121a29a8);
}


// Reference entry 107431c0; body size 6 bytes.
#line 1 "ENTRY_107431c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107431c0(void)

{
  return (undefined4)(DAT_121a299c);
}


// Reference entry 107431d0; body size 5 bytes.
#line 1 "ENTRY_107431d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107431d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 107431e0; body size 5 bytes.
#line 1 "ENTRY_107431e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107431e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 107431f0; body size 5 bytes.
#line 1 "ENTRY_107431f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107431f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10743200; body size 5 bytes.
#line 1 "ENTRY_10743200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743200(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10743210; body size 5 bytes.
#line 1 "ENTRY_10743210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743210(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10743220; body size 5 bytes.
#line 1 "ENTRY_10743220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743220(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10743230; body size 5 bytes.
#line 1 "ENTRY_10743230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743230(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10743240; body size 5 bytes.
#line 1 "ENTRY_10743240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743240(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10743250; body size 5 bytes.
#line 1 "ENTRY_10743250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743250(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10743370; body size 5 bytes.
#line 1 "ENTRY_10743370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743370(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10743380; body size 5 bytes.
#line 1 "ENTRY_10743380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743380(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10743390; body size 5 bytes.
#line 1 "ENTRY_10743390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743390(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 107433a0; body size 5 bytes.
#line 1 "ENTRY_107433a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107433a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 107433b0; body size 5 bytes.
#line 1 "ENTRY_107433b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107433b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 107433c0; body size 5 bytes.
#line 1 "ENTRY_107433c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107433c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 107433d0; body size 5 bytes.
#line 1 "ENTRY_107433d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107433d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 107433e0; body size 5 bytes.
#line 1 "ENTRY_107433e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107433e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 107433f0; body size 5 bytes.
#line 1 "ENTRY_107433f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107433f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10743400; body size 5 bytes.
#line 1 "ENTRY_10743400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743400(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10743410; body size 5 bytes.
#line 1 "ENTRY_10743410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743410(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10743420; body size 5 bytes.
#line 1 "ENTRY_10743420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743420(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10743430; body size 5 bytes.
#line 1 "ENTRY_10743430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743430(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10743440; body size 5 bytes.
#line 1 "ENTRY_10743440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743440(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10743450; body size 5 bytes.
#line 1 "ENTRY_10743450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10743450(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10748ac0; body size 7 bytes.
#line 1 "ENTRY_10748ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10748ac0(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10748e90; body size 6 bytes.
#line 1 "ENTRY_10748e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10748e90(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10748ea0; body size 6 bytes.
#line 1 "ENTRY_10748ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10748ea0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 1074af60; body size 3 bytes.
#line 1 "ENTRY_1074af60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1074af60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1074af70; body size 28 bytes.
#line 1 "ENTRY_1074af70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074af70(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 1074afa0; body size 28 bytes.
#line 1 "ENTRY_1074afa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074afa0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 1074b0d0; body size 6 bytes.
#line 1 "ENTRY_1074b0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1074b0d0(void)

{
  return (undefined4)(DAT_121a2a78);
}


// Reference entry 1074b0f0; body size 57 bytes.
#line 1 "ENTRY_1074b0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1074b0f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1074b230; body size 57 bytes.
#line 1 "ENTRY_1074b230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1074b230(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaPreviewIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaPreviewIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaPreviewIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaPreviewIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1074b5f0; body size 38 bytes.
#line 1 "ENTRY_1074b5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074b5f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1074b620; body size 11 bytes.
#line 1 "ENTRY_1074b620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074b620(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1074b630; body size 38 bytes.
#line 1 "ENTRY_1074b630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074b630(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1074b660; body size 21 bytes.
#line 1 "ENTRY_1074b660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074b660(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2a78 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1074c9c0; body size 6 bytes.
#line 1 "ENTRY_1074c9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1074c9c0(void)

{
  return (undefined4)(DAT_121a2a78);
}


// Reference entry 1074c9d0; body size 6 bytes.
#line 1 "ENTRY_1074c9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1074c9d0(void)

{
  return (undefined4)(DAT_121a2a7c);
}


// Reference entry 1074ca10; body size 6 bytes.
#line 1 "ENTRY_1074ca10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1074ca10(void)

{
  return (undefined4)(DAT_121a2ac4);
}


// Reference entry 1074ca30; body size 57 bytes.
#line 1 "ENTRY_1074ca30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1074ca30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1074cb70; body size 57 bytes.
#line 1 "ENTRY_1074cb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1074cb70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaSetupIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaSetupIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaSetupIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaSetupIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1074cf30; body size 38 bytes.
#line 1 "ENTRY_1074cf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074cf30(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1074cf60; body size 11 bytes.
#line 1 "ENTRY_1074cf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074cf60(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1074cf70; body size 38 bytes.
#line 1 "ENTRY_1074cf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074cf70(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1074cfa0; body size 21 bytes.
#line 1 "ENTRY_1074cfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074cfa0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2ac4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1074e940; body size 6 bytes.
#line 1 "ENTRY_1074e940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1074e940(void)

{
  return (undefined4)(DAT_121a2ac4);
}


// Reference entry 1074e950; body size 6 bytes.
#line 1 "ENTRY_1074e950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1074e950(void)

{
  return (undefined4)(DAT_121a2ac0);
}


// Reference entry 1074e970; body size 5 bytes.
#line 1 "ENTRY_1074e970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1074e970(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1074e980; body size 5 bytes.
#line 1 "ENTRY_1074e980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1074e980(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1074ecc0; body size 6 bytes.
#line 1 "ENTRY_1074ecc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1074ecc0(void)

{
  return (undefined4)(DAT_121a2b20);
}


// Reference entry 1074ecd0; body size 6 bytes.
#line 1 "ENTRY_1074ecd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1074ecd0(void)

{
  return (undefined4)(DAT_121a2b1c);
}


// Reference entry 1074ece0; body size 6 bytes.
#line 1 "ENTRY_1074ece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1074ece0(void)

{
  return (undefined4)(DAT_121a2b08);
}


// Reference entry 1074ecf0; body size 6 bytes.
#line 1 "ENTRY_1074ecf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1074ecf0(void)

{
  return (undefined4)(DAT_121a2b10);
}


// Reference entry 1074ed00; body size 6 bytes.
#line 1 "ENTRY_1074ed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1074ed00(void)

{
  return (undefined4)(DAT_121a2b0c);
}


// Reference entry 1074ed10; body size 6 bytes.
#line 1 "ENTRY_1074ed10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1074ed10(void)

{
  return (undefined4)(DAT_121a2b14);
}


// Reference entry 1074ed20; body size 6 bytes.
#line 1 "ENTRY_1074ed20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1074ed20(void)

{
  return (undefined4)(DAT_121a2b18);
}


// Reference entry 1074ed40; body size 57 bytes.
#line 1 "ENTRY_1074ed40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1074ed40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1074fa60; body size 57 bytes.
#line 1 "ENTRY_1074fa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1074fa60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1074fbb0; body size 67 bytes.
#line 1 "ENTRY_1074fbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1074fbb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSelectPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSelectPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSelectPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSelectPage);
  param_1[0x38] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1074fd10; body size 57 bytes.
#line 1 "ENTRY_1074fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1074fd10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSetupHomeIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSetupHomeIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSetupHomeIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSetupHomeIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1074fe60; body size 57 bytes.
#line 1 "ENTRY_1074fe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1074fe60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSpeakerPlacementPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSpeakerPlacementPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSpeakerPlacementPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSpeakerPlacementPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1074ffb0; body size 57 bytes.
#line 1 "ENTRY_1074ffb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1074ffb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSuccessPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSuccessPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSuccessPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSuccessPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10750100; body size 87 bytes.
#line 1 "ENTRY_10750100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10750100(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationWizard);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationWizard);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationWizard);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationWizard);
  param_1[0x3a] = (undefined4)(0);
  param_1[0x3b] = (undefined4)(0);
  param_1[0x3c] = (undefined4)(0xffffffff);
  return (undefined4 *)(param_1);
}


// Reference entry 10750810; body size 38 bytes.
#line 1 "ENTRY_10750810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750810(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10750840; body size 11 bytes.
#line 1 "ENTRY_10750840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750840(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10750850; body size 11 bytes.
#line 1 "ENTRY_10750850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750850(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10750860; body size 11 bytes.
#line 1 "ENTRY_10750860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750860(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10750870; body size 11 bytes.
#line 1 "ENTRY_10750870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750870(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10750880; body size 11 bytes.
#line 1 "ENTRY_10750880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750880(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10750890; body size 11 bytes.
#line 1 "ENTRY_10750890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750890(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 107508a0; body size 11 bytes.
#line 1 "ENTRY_107508a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107508a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 107508b0; body size 38 bytes.
#line 1 "ENTRY_107508b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107508b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 107508e0; body size 38 bytes.
#line 1 "ENTRY_107508e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107508e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10750910; body size 38 bytes.
#line 1 "ENTRY_10750910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10750940; body size 21 bytes.
#line 1 "ENTRY_10750940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750940(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b20 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10750960; body size 38 bytes.
#line 1 "ENTRY_10750960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10750990; body size 21 bytes.
#line 1 "ENTRY_10750990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750990(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b1c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 107509b0; body size 38 bytes.
#line 1 "ENTRY_107509b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107509b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 107509e0; body size 21 bytes.
#line 1 "ENTRY_107509e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107509e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b08 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10750aa0; body size 21 bytes.
#line 1 "ENTRY_10750aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750aa0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b10 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10750ac0; body size 38 bytes.
#line 1 "ENTRY_10750ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750ac0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10750af0; body size 21 bytes.
#line 1 "ENTRY_10750af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750af0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b0c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10750b10; body size 38 bytes.
#line 1 "ENTRY_10750b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750b10(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10750b40; body size 21 bytes.
#line 1 "ENTRY_10750b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750b40(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b14 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10750b60; body size 38 bytes.
#line 1 "ENTRY_10750b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750b60(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10750b90; body size 21 bytes.
#line 1 "ENTRY_10750b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750b90(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b18 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10754d30; body size 7 bytes.
#line 1 "ENTRY_10754d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10754d30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xf0));
}


// Reference entry 10754d40; body size 7 bytes.
#line 1 "ENTRY_10754d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10754d40(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf4));
}


// Reference entry 10756ef0; body size 6 bytes.
#line 1 "ENTRY_10756ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10756ef0(void)

{
  return (undefined4)(DAT_121a2b20);
}


// Reference entry 10756f00; body size 6 bytes.
#line 1 "ENTRY_10756f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10756f00(void)

{
  return (undefined4)(DAT_121a2b1c);
}


// Reference entry 10756f10; body size 6 bytes.
#line 1 "ENTRY_10756f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10756f10(void)

{
  return (undefined4)(DAT_121a2b08);
}


// Reference entry 10756f20; body size 6 bytes.
#line 1 "ENTRY_10756f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10756f20(void)

{
  return (undefined4)(DAT_121a2b10);
}


// Reference entry 10756f30; body size 6 bytes.
#line 1 "ENTRY_10756f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10756f30(void)

{
  return (undefined4)(DAT_121a2b0c);
}


// Reference entry 10756f40; body size 6 bytes.
#line 1 "ENTRY_10756f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10756f40(void)

{
  return (undefined4)(DAT_121a2b14);
}


// Reference entry 10756f50; body size 6 bytes.
#line 1 "ENTRY_10756f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10756f50(void)

{
  return (undefined4)(DAT_121a2b18);
}


// Reference entry 10756f60; body size 6 bytes.
#line 1 "ENTRY_10756f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10756f60(void)

{
  return (undefined4)(DAT_121a2b24);
}


// Reference entry 10757390; body size 5 bytes.
#line 1 "ENTRY_10757390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10757390(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 107573a0; body size 5 bytes.
#line 1 "ENTRY_107573a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107573a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 107573b0; body size 5 bytes.
#line 1 "ENTRY_107573b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107573b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 107573c0; body size 5 bytes.
#line 1 "ENTRY_107573c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_107573c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10757800; body size 5 bytes.
#line 1 "ENTRY_10757800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10757800(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10757810; body size 5 bytes.
#line 1 "ENTRY_10757810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10757810(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10757820; body size 5 bytes.
#line 1 "ENTRY_10757820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10757820(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10757830; body size 5 bytes.
#line 1 "ENTRY_10757830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10757830(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 107581c0; body size 13 bytes.
#line 1 "ENTRY_107581c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_107581c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xf0) = (undefined4)(param_2);
  return;
}


// Reference entry 107581d0; body size 13 bytes.
#line 1 "ENTRY_107581d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_107581d0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xf4) = (undefined1)(param_2);
  return;
}


// Reference entry 10758260; body size 78 bytes.
#line 1 "ENTRY_10758260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10758260(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 107582d0; body size 6 bytes.
#line 1 "ENTRY_107582d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107582d0(void)

{
  return (undefined4)(DAT_121a2b8c);
}


// Reference entry 107582e0; body size 6 bytes.
#line 1 "ENTRY_107582e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107582e0(void)

{
  return (undefined4)(DAT_121a2b80);
}


// Reference entry 107582f0; body size 6 bytes.
#line 1 "ENTRY_107582f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107582f0(void)

{
  return (undefined4)(DAT_121a2b7c);
}


// Reference entry 10758300; body size 6 bytes.
#line 1 "ENTRY_10758300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10758300(void)

{
  return (undefined4)(DAT_121a2b78);
}


// Reference entry 10758310; body size 6 bytes.
#line 1 "ENTRY_10758310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10758310(void)

{
  return (undefined4)(DAT_121a2b84);
}


// Reference entry 10758320; body size 6 bytes.
#line 1 "ENTRY_10758320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10758320(void)

{
  return (undefined4)(DAT_121a2b90);
}


// Reference entry 10758330; body size 6 bytes.
#line 1 "ENTRY_10758330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10758330(void)

{
  return (undefined4)(DAT_121a2b88);
}


// Reference entry 10758350; body size 57 bytes.
#line 1 "ENTRY_10758350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10758350(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10758a30; body size 67 bytes.
#line 1 "ENTRY_10758a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10758a30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckBranchSelectPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckBranchSelectPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckBranchSelectPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckBranchSelectPage);
  param_1[0x38] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10758b90; body size 57 bytes.
#line 1 "ENTRY_10758b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10758b90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckCommunicationErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckCommunicationErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckCommunicationErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckCommunicationErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10758ce0; body size 57 bytes.
#line 1 "ENTRY_10758ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10758ce0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10758e30; body size 94 bytes.
#line 1 "ENTRY_10758e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10758e30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckIntroPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3b) = (undefined1)(1);
  return (undefined4 *)(param_1);
}


// Reference entry 10758fb0; body size 57 bytes.
#line 1 "ENTRY_10758fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10758fb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckNotLivePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckNotLivePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckNotLivePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckNotLivePage);
  return (undefined4 *)(param_1);
}


// Reference entry 10759100; body size 57 bytes.
#line 1 "ENTRY_10759100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10759100(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckOutroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckOutroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckOutroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckOutroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10759250; body size 124 bytes.
#line 1 "ENTRY_10759250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10759250(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  param_1[0x38] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckUpdatePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckUpdatePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckUpdatePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckUpdatePage);
  param_1[0x38] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckUpdatePage);
  *(undefined1*)(param_1 + 0x3b) = (undefined1)(0);
  param_1[0x3c] = (undefined4)(0);
  param_1[0x3d] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10759bc0; body size 38 bytes.
#line 1 "ENTRY_10759bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759bc0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10759bf0; body size 11 bytes.
#line 1 "ENTRY_10759bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759bf0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10759c00; body size 11 bytes.
#line 1 "ENTRY_10759c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759c00(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10759c10; body size 11 bytes.
#line 1 "ENTRY_10759c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759c10(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10759c20; body size 11 bytes.
#line 1 "ENTRY_10759c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759c20(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10759c30; body size 11 bytes.
#line 1 "ENTRY_10759c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759c30(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10759c40; body size 11 bytes.
#line 1 "ENTRY_10759c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759c40(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10759c50; body size 11 bytes.
#line 1 "ENTRY_10759c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759c50(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10759d00; body size 21 bytes.
#line 1 "ENTRY_10759d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759d00(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b8c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10759d20; body size 38 bytes.
#line 1 "ENTRY_10759d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759d20(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10759d50; body size 21 bytes.
#line 1 "ENTRY_10759d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759d50(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b80 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10759d70; body size 38 bytes.
#line 1 "ENTRY_10759d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759d70(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10759da0; body size 21 bytes.
#line 1 "ENTRY_10759da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759da0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b7c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10759e70; body size 21 bytes.
#line 1 "ENTRY_10759e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759e70(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b78 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10759e90; body size 38 bytes.
#line 1 "ENTRY_10759e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759e90(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10759ec0; body size 21 bytes.
#line 1 "ENTRY_10759ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759ec0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b84 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10759ee0; body size 38 bytes.
#line 1 "ENTRY_10759ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759ee0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10759f10; body size 21 bytes.
#line 1 "ENTRY_10759f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759f10(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b90 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1075a040; body size 21 bytes.
#line 1 "ENTRY_1075a040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1075a040(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b88 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1075e550; body size 7 bytes.
#line 1 "ENTRY_1075e550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1075e550(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x100));
}


// Reference entry 10760a90; body size 6 bytes.
#line 1 "ENTRY_10760a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10760a90(void)

{
  return (undefined4)(DAT_121a2b8c);
}


// Reference entry 10760aa0; body size 6 bytes.
#line 1 "ENTRY_10760aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10760aa0(void)

{
  return (undefined4)(DAT_121a2b80);
}


// Reference entry 10760ab0; body size 6 bytes.
#line 1 "ENTRY_10760ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10760ab0(void)

{
  return (undefined4)(DAT_121a2b7c);
}


// Reference entry 10760ac0; body size 6 bytes.
#line 1 "ENTRY_10760ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10760ac0(void)

{
  return (undefined4)(DAT_121a2b78);
}


// Reference entry 10760ad0; body size 6 bytes.
#line 1 "ENTRY_10760ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10760ad0(void)

{
  return (undefined4)(DAT_121a2b84);
}


// Reference entry 10760ae0; body size 6 bytes.
#line 1 "ENTRY_10760ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10760ae0(void)

{
  return (undefined4)(DAT_121a2b90);
}


// Reference entry 10760af0; body size 6 bytes.
#line 1 "ENTRY_10760af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10760af0(void)

{
  return (undefined4)(DAT_121a2b88);
}


// Reference entry 10760b00; body size 6 bytes.
#line 1 "ENTRY_10760b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10760b00(void)

{
  return (undefined4)(DAT_121a2b74);
}


// Reference entry 10760b20; body size 7 bytes.
#line 1 "ENTRY_10760b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10760b20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x104));
}


// Reference entry 10760ea0; body size 5 bytes.
#line 1 "ENTRY_10760ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10760ea0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10760eb0; body size 5 bytes.
#line 1 "ENTRY_10760eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10760eb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10762610; body size 13 bytes.
#line 1 "ENTRY_10762610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10762610(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x100) = (undefined1)(param_2);
  return;
}


// Reference entry 10762620; body size 13 bytes.
#line 1 "ENTRY_10762620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10762620(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x104) = (undefined4)(param_2);
  return;
}


// Reference entry 107626a0; body size 6 bytes.
#line 1 "ENTRY_107626a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107626a0(void)

{
  return (undefined4)(DAT_121a2be8);
}


// Reference entry 107626b0; body size 6 bytes.
#line 1 "ENTRY_107626b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107626b0(void)

{
  return (undefined4)(DAT_121a2bec);
}


// Reference entry 107626c0; body size 6 bytes.
#line 1 "ENTRY_107626c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_107626c0(void)

{
  return (undefined4)(DAT_121a2be4);
}


// Reference entry 107626e0; body size 57 bytes.
#line 1 "ENTRY_107626e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107626e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10762a00; body size 16 bytes.
#line 1 "ENTRY_10762a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10762a00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10762a20; body size 77 bytes.
#line 1 "ENTRY_10762a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10762a20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCApConnectConnectingPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCApConnectConnectingPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCApConnectConnectingPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCApConnectConnectingPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10762b80; body size 57 bytes.
#line 1 "ENTRY_10762b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10762b80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCApConnectDeniedPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCApConnectDeniedPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCApConnectDeniedPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCApConnectDeniedPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10762cd0; body size 57 bytes.
#line 1 "ENTRY_10762cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10762cd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCApConnectIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCApConnectIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCApConnectIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCApConnectIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 107632a0; body size 38 bytes.
#line 1 "ENTRY_107632a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107632a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 107632d0; body size 11 bytes.
#line 1 "ENTRY_107632d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107632d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 107632e0; body size 11 bytes.
#line 1 "ENTRY_107632e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107632e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 107632f0; body size 11 bytes.
#line 1 "ENTRY_107632f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107632f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10763420; body size 21 bytes.
#line 1 "ENTRY_10763420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10763420(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2be8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10763440; body size 38 bytes.
#line 1 "ENTRY_10763440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10763440(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10763470; body size 21 bytes.
#line 1 "ENTRY_10763470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10763470(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2bec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10763490; body size 38 bytes.
#line 1 "ENTRY_10763490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10763490(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 107634c0; body size 21 bytes.
#line 1 "ENTRY_107634c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107634c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2be4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10763670; body size 3 bytes.
#line 1 "ENTRY_10763670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10763670(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10763680; body size 7 bytes.
#line 1 "ENTRY_10763680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10763680(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10763690; body size 3 bytes.
#line 1 "ENTRY_10763690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10763690(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10764560; body size 9 bytes.
#line 1 "ENTRY_10764560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10764560(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10766ff0; body size 6 bytes.
#line 1 "ENTRY_10766ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10766ff0(void)

{
  return (undefined4)(DAT_121a2be8);
}


// Reference entry 10767000; body size 6 bytes.
#line 1 "ENTRY_10767000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10767000(void)

{
  return (undefined4)(DAT_121a2bec);
}


// Reference entry 10767010; body size 6 bytes.
#line 1 "ENTRY_10767010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10767010(void)

{
  return (undefined4)(DAT_121a2be4);
}


// Reference entry 10767020; body size 6 bytes.
#line 1 "ENTRY_10767020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10767020(void)

{
  return (undefined4)(DAT_121a2be0);
}


// Reference entry 10767030; body size 7 bytes.
#line 1 "ENTRY_10767030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10767030(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x118));
}


// Reference entry 10767040; body size 4 bytes.
#line 1 "ENTRY_10767040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10767040(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x18));
}


// Reference entry 10767060; body size 5 bytes.
#line 1 "ENTRY_10767060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10767060(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10767070; body size 5 bytes.
#line 1 "ENTRY_10767070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10767070(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10767640; body size 3 bytes.
#line 1 "ENTRY_10767640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10767640(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10767650; body size 28 bytes.
#line 1 "ENTRY_10767650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10767650(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10767680; body size 13 bytes.
#line 1 "ENTRY_10767680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10767680(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x118) = (undefined1)(param_2);
  return;
}


// Reference entry 10767840; body size 6 bytes.
#line 1 "ENTRY_10767840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10767840(void)

{
  return (undefined4)(DAT_121a2c38);
}


// Reference entry 10767850; body size 6 bytes.
#line 1 "ENTRY_10767850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10767850(void)

{
  return (undefined4)(DAT_121a2c3c);
}


// Reference entry 10767870; body size 57 bytes.
#line 1 "ENTRY_10767870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10767870(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10767aa0; body size 57 bytes.
#line 1 "ENTRY_10767aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10767aa0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCApInstructionsButtonPressPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCApInstructionsButtonPressPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCApInstructionsButtonPressPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCApInstructionsButtonPressPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10767bf0; body size 57 bytes.
#line 1 "ENTRY_10767bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10767bf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCApInstructionsWaitingPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCApInstructionsWaitingPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCApInstructionsWaitingPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCApInstructionsWaitingPage);
  return (undefined4 *)(param_1);
}


// Reference entry 107680e0; body size 38 bytes.
#line 1 "ENTRY_107680e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107680e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10768110; body size 11 bytes.
#line 1 "ENTRY_10768110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10768110(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10768120; body size 11 bytes.
#line 1 "ENTRY_10768120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10768120(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10768130; body size 38 bytes.
#line 1 "ENTRY_10768130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10768130(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10768160; body size 21 bytes.
#line 1 "ENTRY_10768160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10768160(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2c38 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10768180; body size 38 bytes.
#line 1 "ENTRY_10768180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10768180(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 107681b0; body size 21 bytes.
#line 1 "ENTRY_107681b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107681b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2c3c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10768780; body size 3 bytes.
#line 1 "ENTRY_10768780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10768780(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10768790; body size 4 bytes.
#line 1 "ENTRY_10768790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10768790(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1076adf0; body size 7 bytes.
#line 1 "ENTRY_1076adf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1076adf0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x118));
}


// Reference entry 1076b420; body size 6 bytes.
#line 1 "ENTRY_1076b420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1076b420(void)

{
  return (undefined4)(DAT_121a2c38);
}


// Reference entry 1076b430; body size 6 bytes.
#line 1 "ENTRY_1076b430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1076b430(void)

{
  return (undefined4)(DAT_121a2c3c);
}


// Reference entry 1076b440; body size 6 bytes.
#line 1 "ENTRY_1076b440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1076b440(void)

{
  return (undefined4)(DAT_121a2c40);
}


// Reference entry 1076beb0; body size 5 bytes.
#line 1 "ENTRY_1076beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1076beb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1076bfa0; body size 6 bytes.
#line 1 "ENTRY_1076bfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1076bfa0(void)

{
  return (undefined4)(DAT_121a2c90);
}


// Reference entry 1076bfb0; body size 6 bytes.
#line 1 "ENTRY_1076bfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1076bfb0(void)

{
  return (undefined4)(DAT_121a2c98);
}


// Reference entry 1076bfc0; body size 6 bytes.
#line 1 "ENTRY_1076bfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1076bfc0(void)

{
  return (undefined4)(DAT_121a2c9c);
}


// Reference entry 1076bfd0; body size 6 bytes.
#line 1 "ENTRY_1076bfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1076bfd0(void)

{
  return (undefined4)(DAT_121a2c8c);
}


// Reference entry 1076bfe0; body size 6 bytes.
#line 1 "ENTRY_1076bfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1076bfe0(void)

{
  return (undefined4)(DAT_121a2c94);
}


// Reference entry 1076c000; body size 57 bytes.
#line 1 "ENTRY_1076c000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1076c000(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1076c610; body size 74 bytes.
#line 1 "ENTRY_1076c610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1076c610(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayConfirmationPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayConfirmationPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayConfirmationPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayConfirmationPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  param_1[0x39] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1076c770; body size 57 bytes.
#line 1 "ENTRY_1076c770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1076c770(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayEnabledPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayEnabledPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayEnabledPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayEnabledPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1076c8c0; body size 57 bytes.
#line 1 "ENTRY_1076c8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1076c8c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayFailedPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayFailedPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayFailedPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayFailedPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1076ca10; body size 57 bytes.
#line 1 "ENTRY_1076ca10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1076ca10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1076d330; body size 38 bytes.
#line 1 "ENTRY_1076d330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d330(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1076d360; body size 11 bytes.
#line 1 "ENTRY_1076d360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d360(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1076d370; body size 11 bytes.
#line 1 "ENTRY_1076d370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d370(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1076d380; body size 11 bytes.
#line 1 "ENTRY_1076d380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d380(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1076d390; body size 11 bytes.
#line 1 "ENTRY_1076d390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d390(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1076d3a0; body size 11 bytes.
#line 1 "ENTRY_1076d3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d3a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1076d3b0; body size 38 bytes.
#line 1 "ENTRY_1076d3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d3b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1076d480; body size 21 bytes.
#line 1 "ENTRY_1076d480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d480(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2c90 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1076d4a0; body size 38 bytes.
#line 1 "ENTRY_1076d4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d4a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1076d4d0; body size 21 bytes.
#line 1 "ENTRY_1076d4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d4d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2c98 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1076d4f0; body size 38 bytes.
#line 1 "ENTRY_1076d4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d4f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1076d520; body size 21 bytes.
#line 1 "ENTRY_1076d520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d520(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2c9c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1076d540; body size 38 bytes.
#line 1 "ENTRY_1076d540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d540(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1076d570; body size 21 bytes.
#line 1 "ENTRY_1076d570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d570(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2c8c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1076d590; body size 38 bytes.
#line 1 "ENTRY_1076d590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizState);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1076d5c0; body size 21 bytes.
#line 1 "ENTRY_1076d5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d5c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2c94 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 107706f0; body size 7 bytes.
#line 1 "ENTRY_107706f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_107706f0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf8));
}


// Reference entry 10771c90; body size 6 bytes.
#line 1 "ENTRY_10771c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10771c90(void)

{
  return (undefined4)(DAT_121a2c90);
}


// Reference entry 10771ca0; body size 6 bytes.
#line 1 "ENTRY_10771ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10771ca0(void)

{
  return (undefined4)(DAT_121a2c98);
}


// Reference entry 10771cb0; body size 6 bytes.
#line 1 "ENTRY_10771cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10771cb0(void)

{
  return (undefined4)(DAT_121a2c9c);
}


// Reference entry 10771cc0; body size 6 bytes.
#line 1 "ENTRY_10771cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10771cc0(void)

{
  return (undefined4)(DAT_121a2c8c);
}


// Reference entry 10771cd0; body size 6 bytes.
#line 1 "ENTRY_10771cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10771cd0(void)

{
  return (undefined4)(DAT_121a2c94);
}


// Reference entry 10771ce0; body size 6 bytes.
#line 1 "ENTRY_10771ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10771ce0(void)

{
  return (undefined4)(DAT_121a2ca0);
}


// Reference entry 10771cf0; body size 5 bytes.
#line 1 "ENTRY_10771cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10771cf0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10771d00; body size 5 bytes.
#line 1 "ENTRY_10771d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10771d00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10771d20; body size 5 bytes.
#line 1 "ENTRY_10771d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10771d20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10771d30; body size 5 bytes.
#line 1 "ENTRY_10771d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10771d30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10771d40; body size 5 bytes.
#line 1 "ENTRY_10771d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10771d40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10772ea0; body size 13 bytes.
#line 1 "ENTRY_10772ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10772ea0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xf4) = (undefined4)(param_2);
  return;
}


// Reference entry 10772f30; body size 6 bytes.
#line 1 "ENTRY_10772f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10772f30(void)

{
  return (undefined4)(DAT_121a2cf0);
}


// Reference entry 10772f40; body size 6 bytes.
#line 1 "ENTRY_10772f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10772f40(void)

{
  return (undefined4)(DAT_121a2cec);
}


// Reference entry 10772f50; body size 6 bytes.
#line 1 "ENTRY_10772f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10772f50(void)

{
  return (undefined4)(DAT_121a2cf4);
}


// Reference entry 10772f60; body size 6 bytes.
#line 1 "ENTRY_10772f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10772f60(void)

{
  return (undefined4)(DAT_121a2cf8);
}


// Reference entry 10772f80; body size 57 bytes.
#line 1 "ENTRY_10772f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10772f80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10773390; body size 16 bytes.
#line 1 "ENTRY_10773390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10773390(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 107733d0; body size 84 bytes.
#line 1 "ENTRY_107733d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_107733d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationButtonPressPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationButtonPressPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationButtonPressPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationButtonPressPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3a) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10773540; body size 64 bytes.
#line 1 "ENTRY_10773540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10773540(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationIntroPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10773690; body size 84 bytes.
#line 1 "ENTRY_10773690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10773690(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationTimeoutPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationTimeoutPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationTimeoutPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationTimeoutPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3a) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10773800; body size 77 bytes.
#line 1 "ENTRY_10773800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10773800(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationVerifyProductPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationVerifyProductPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationVerifyProductPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationVerifyProductPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10773e90; body size 38 bytes.
#line 1 "ENTRY_10773e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10773e90(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10773ec0; body size 11 bytes.
#line 1 "ENTRY_10773ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10773ec0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10773ed0; body size 11 bytes.
#line 1 "ENTRY_10773ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10773ed0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10773ee0; body size 11 bytes.
#line 1 "ENTRY_10773ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10773ee0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10773ef0; body size 11 bytes.
#line 1 "ENTRY_10773ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10773ef0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10774080; body size 21 bytes.
#line 1 "ENTRY_10774080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10774080(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2cf0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 107740a0; body size 38 bytes.
#line 1 "ENTRY_107740a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107740a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPage);
  thunk_FUN_10eb4d80(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 107740d0; body size 21 bytes.
#line 1 "ENTRY_107740d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107740d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2cec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateType);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


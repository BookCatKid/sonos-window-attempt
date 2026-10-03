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
namespace std { template<class... A> static int _Xlength_error(A...); typedef int _Iterator_base0; }
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int beginsWith(A...); template<class... A> static int format(A...); template<class... A> static int int_release(A...); template<class... A> static int length(A...); static int op_ctor(...); static int op_lt(...); };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_dtor(...); };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); }; }
struct AddAccountX { char _pad; AddAccountX(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCHousehold { char _pad; SCHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIBrowseStackManager { char _pad; SCIBrowseStackManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIEnumerator { char _pad; SCIEnumerator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIOpAddServiceAccount { char _pad; SCIOpAddServiceAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIServiceDescriptorInternals { char _pad; SCIServiceDescriptorInternals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIStackedItemImpl { char _pad; SCIStackedItemImpl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCITokenManager { char _pad; SCITokenManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SystemProperties { char _pad; SystemProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
typedef void *E9;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10393a70(undefined4 *param_2); template<class... A> int FUN_10393a70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10395d40(undefined4 param_2); template<class... A> int FUN_10395d40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103967a0(undefined4 param_2); template<class... A> int FUN_103967a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103967b0(undefined4 param_2); template<class... A> int FUN_103967b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103967c0(undefined4 param_2); template<class... A> int FUN_103967c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103967d0(undefined4 param_2); template<class... A> int FUN_103967d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103967e0(undefined4 param_2); template<class... A> int FUN_103967e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10396810(undefined1 param_2); template<class... A> int FUN_10396810(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10397310(undefined2 param_2); template<class... A> int FUN_10397310(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10397320(undefined4 param_2); template<class... A> int FUN_10397320(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10399ea0(int *param_2); template<class... A> int FUN_10399ea0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1039a5a0(int *param_2); template<class... A> int FUN_1039a5a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1039a5c0(int param_2); template<class... A> int FUN_1039a5c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_1039a990(int *param_2); template<class... A> int FUN_1039a990(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1039ec00(int *param_2); template<class... A> int FUN_1039ec00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1039ec20(int *param_2); template<class... A> int FUN_1039ec20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_1039ec40(int *param_2); template<class... A> int FUN_1039ec40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1039f240(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int FUN_1039f240(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103a0820(undefined4 param_2); template<class... A> int FUN_103a0820(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103a0830(undefined4 param_2); template<class... A> int FUN_103a0830(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a4240(undefined4 *param_2,undefined4 *param_3); template<class... A> int FUN_103a4240(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a4260(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_103a4260(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103a4370(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_103a4370(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a43a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_103a43a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103a43e0(undefined4 *param_2); template<class... A> int FUN_103a43e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a4420(int *param_2); template<class... A> int FUN_103a4420(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a4580(int *param_2); template<class... A> int FUN_103a4580(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a46a0(int *param_2); template<class... A> int FUN_103a46a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a4720(int *param_2); template<class... A> int FUN_103a4720(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a4740(int *param_2); template<class... A> int FUN_103a4740(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103a4ac0(undefined4 *param_2); template<class... A> int FUN_103a4ac0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6080(undefined4 param_2); template<class... A> int FUN_103a6080(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a60a0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_103a60a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a60c0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_103a60c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a60e0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_103a60e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6100(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_103a6100(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a61c0(undefined4 param_2); template<class... A> int FUN_103a61c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a61d0(undefined4 param_2); template<class... A> int FUN_103a61d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6260(undefined4 param_2); template<class... A> int FUN_103a6260(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6270(undefined4 param_2); template<class... A> int FUN_103a6270(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a62a0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_103a62a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a62c0(undefined4 param_2); template<class... A> int FUN_103a62c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a62e0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_103a62e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6300(undefined4 param_2); template<class... A> int FUN_103a6300(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6320(undefined4 *param_2); template<class... A> int FUN_103a6320(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6370(undefined4 param_2); template<class... A> int FUN_103a6370(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a6380(undefined4 param_2); template<class... A> int FUN_103a6380(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a7010(undefined4 param_2); template<class... A> int FUN_103a7010(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a7050(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7); template<class... A> int FUN_103a7050(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a7300(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6); template<class... A> int FUN_103a7300(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a7670(undefined4 param_2); template<class... A> int FUN_103a7670(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a8ac0(int *param_2); template<class... A> int FUN_103a8ac0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a8b20(undefined4 *param_2); template<class... A> int FUN_103a8b20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a8b70(char param_2); template<class... A> int FUN_103a8b70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103a8ba0(int *param_2); template<class... A> int FUN_103a8ba0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103a8bc0(int *param_2); template<class... A> int FUN_103a8bc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103a8be0(uint *param_2); template<class... A> int FUN_103a8be0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103a8c10(int *param_2); template<class... A> int FUN_103a8c10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103a8c30(int *param_2); template<class... A> int FUN_103a8c30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103a8c50(uint *param_2); template<class... A> int FUN_103a8c50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103a8d90(int *param_2,uint param_3); template<class... A> int FUN_103a8d90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103a8f50(undefined4 *param_2); template<class... A> int FUN_103a8f50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103a8f70(undefined4 *param_2); template<class... A> int FUN_103a8f70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103a9100(int *param_2); template<class... A> int FUN_103a9100(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103a9220(int *param_2,int param_3); template<class... A> int FUN_103a9220(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a92d0(int param_2); template<class... A> int FUN_103a92d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a92f0(int param_2); template<class... A> int FUN_103a92f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103a9310(uint param_2); template<class... A> int FUN_103a9310(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_103a9330(int param_2); template<class... A> int FUN_103a9330(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103aa020(int param_2); template<class... A> int FUN_103aa020(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103aa770(uint param_2); template<class... A> int FUN_103aa770(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103aa790(uint param_2); template<class... A> int FUN_103aa790(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103aa7b0(uint param_2); template<class... A> int FUN_103aa7b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103aa7d0(uint param_2); template<class... A> int FUN_103aa7d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103ab3f0(int *param_2,int param_3,int param_4); template<class... A> int FUN_103ab3f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103ab9c0(undefined4 *param_2); template<class... A> int FUN_103ab9c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103ab9d0(int *param_2); template<class... A> int FUN_103ab9d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103ab9f0(int *param_2); template<class... A> int FUN_103ab9f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103ac0f0(undefined4 *param_2); template<class... A> int FUN_103ac0f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103ac100(undefined4 *param_2); template<class... A> int FUN_103ac100(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103b6af0(undefined4 *param_2); template<class... A> int FUN_103b6af0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103b6b00(undefined4 *param_2); template<class... A> int FUN_103b6b00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103b6de0(undefined4 *param_2,void *param_3,void *param_4); template<class... A> int FUN_103b6de0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103bcf10(undefined4 param_2); template<class... A> int FUN_103bcf10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103bdfb0(int *param_2); template<class... A> int FUN_103bdfb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103be2f0(int *param_2); template<class... A> int FUN_103be2f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103be310(undefined4 param_2,undefined4 *param_3); template<class... A> int FUN_103be310(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103be880(int param_2); template<class... A> int FUN_103be880(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103bec20(int param_2); template<class... A> int FUN_103bec20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103bf3d0(undefined4 param_2,int param_3); template<class... A> int FUN_103bf3d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103bf430(undefined4 *param_2,undefined4 *param_3); template<class... A> int FUN_103bf430(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103bf450(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_103bf450(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103bf5c0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_103bf5c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103bf610(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_103bf610(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103bf670(undefined4 *param_2); template<class... A> int FUN_103bf670(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103bf6d0(int *param_2); template<class... A> int FUN_103bf6d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103bfd40(int *param_2); template<class... A> int FUN_103bfd40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103bfdc0(int *param_2,undefined4 param_3); template<class... A> int FUN_103bfdc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103bfe70(int *param_2,undefined4 param_3); template<class... A> int FUN_103bfe70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103c03a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_103c03a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103c0820(undefined4 *param_2); template<class... A> int FUN_103c0820(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103c0910(undefined4 param_2); template<class... A> int FUN_103c0910(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103c0a30(undefined4 param_2); template<class... A> int FUN_103c0a30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103c0e30(undefined1 param_2); template<class... A> int FUN_103c0e30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103c1270(undefined4 param_2); template<class... A> int FUN_103c1270(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103c3400(int *param_2); template<class... A> int FUN_103c3400(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103c34c0(int *param_2); template<class... A> int FUN_103c34c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103c34e0(int *param_2); template<class... A> int FUN_103c34e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103c3700(undefined4 *param_2); template<class... A> int FUN_103c3700(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4c60(int param_2); template<class... A> int FUN_103c4c60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4c80(int param_2); template<class... A> int FUN_103c4c80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4d10(undefined4 param_2); template<class... A> int FUN_103c4d10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4d20(undefined4 param_2); template<class... A> int FUN_103c4d20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4d30(undefined4 param_2); template<class... A> int FUN_103c4d30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4de0(undefined4 *param_2); template<class... A> int FUN_103c4de0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103c4df0(undefined4 *param_2); template<class... A> int FUN_103c4df0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103c81b0(SCStr *param_2); template<class... A> int FUN_103c81b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103c8290(SCStr *param_2); template<class... A> int FUN_103c8290(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103c8320(SCStr *param_2); template<class... A> int FUN_103c8320(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103c8340(SCStr *param_2); template<class... A> int FUN_103c8340(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103c8750(SCStr *param_2); template<class... A> int FUN_103c8750(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103c8770(SCStr *param_2); template<class... A> int FUN_103c8770(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103c8790(SCStr *param_2); template<class... A> int FUN_103c8790(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103cc5b0(int *param_2); template<class... A> int FUN_103cc5b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_103cc600(int *param_2); template<class... A> int FUN_103cc600(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_103cc8d0(uint param_2); template<class... A> int FUN_103cc8d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103cca10(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_103cca10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cca80(undefined4 *param_2,undefined4 *param_3); template<class... A> int FUN_103cca80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103ccaa0(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_103ccaa0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103ccac0(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_103ccac0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103ccdb0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_103ccdb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103ccde0(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_103ccde0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cce40(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_103cce40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cce60(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_103cce60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103cd200(undefined4 *param_2); template<class... A> int FUN_103cd200(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103cd230(undefined4 *param_2); template<class... A> int FUN_103cd230(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103cd260(undefined4 *param_2); template<class... A> int FUN_103cd260(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103cd2c0(int *param_2); template<class... A> int FUN_103cd2c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103cd8e0(int *param_2,undefined4 param_3); template<class... A> int FUN_103cd8e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_103cd970(int *param_2,undefined4 param_3); template<class... A> int FUN_103cd970(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103ce4d0(int *param_2,SCStr *param_3); template<class... A> int FUN_103ce4d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103ceeb0(undefined4 param_2); template<class... A> int FUN_103ceeb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103ceed0(undefined4 param_2); template<class... A> int FUN_103ceed0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103ceff0(undefined4 param_2); template<class... A> int FUN_103ceff0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf000(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_103cf000(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf040(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_103cf040(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf080(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_103cf080(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf0c0(undefined4 param_2); template<class... A> int FUN_103cf0c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf1d0(undefined4 param_2); template<class... A> int FUN_103cf1d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf1e0(undefined4 param_2); template<class... A> int FUN_103cf1e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf220(undefined4 *param_2); template<class... A> int FUN_103cf220(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103cf490(undefined4 *param_2); template<class... A> int FUN_103cf490(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_103cf610(SCStr *param_2); template<class... A> int FUN_103cf610(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103d04f0(undefined4 param_2); template<class... A> int FUN_103d04f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103d0a20(int *param_2); template<class... A> int FUN_103d0a20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_103d0a70(int *param_2); template<class... A> int FUN_103d0a70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_103d0ac0(undefined4 *param_2); template<class... A> int FUN_103d0ac0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103d0bb0(int *param_2); template<class... A> int FUN_103d0bb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103d0bd0(int *param_2); template<class... A> int FUN_103d0bd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103d0bf0(int *param_2); template<class... A> int FUN_103d0bf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_103d0c10(int *param_2); template<class... A> int FUN_103d0c10(A...); };

extern int FUN_100517a8(...);
extern int FUN_1039f830(...);
extern int FUN_1039f840(...);
extern int FUN_103c1dc0(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _Xlength_error(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern int beginsWith(...);
extern int format(...);
extern int func_0x10015be0(...);
extern int func_0x1006dccd(...);
extern int int_release(...);
extern int int_start(...);
extern int length(...);
extern __declspec(dllimport) int memmove(...);
extern int op_ctor(...);
extern int op_dtor(...);
extern int op_inc(...);
extern int op_lt(...);
extern int operator_new(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_10200150(...);
extern int thunk_FUN_10203970(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_102460b0(...);
extern int thunk_FUN_10247e10(...);
extern int thunk_FUN_102e8bc0(...);
extern int thunk_FUN_10353440(...);
extern int thunk_FUN_103a7c30(...);
extern int thunk_FUN_103a7d90(...);
extern int thunk_FUN_103a9240(...);
extern int thunk_FUN_103aac30(...);
extern int thunk_FUN_103bc4b0(...);
extern int thunk_FUN_103cd850(...);
extern int thunk_FUN_103cdb40(...);
extern int thunk_FUN_103cdcc0(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a05f0(...);
extern int thunk_FUN_105a5110(...);
extern int thunk_FUN_105a51f0(...);
extern int thunk_FUN_105a52b0(...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105ad900(...);
extern int thunk_FUN_10708df0(...);
extern int thunk_FUN_10cf1210(...);
extern int thunk_FUN_10d08960(...);
extern int thunk_FUN_1106b1c0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_110ce190(...);
extern int thunk_FUN_110d3ac0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111c4880(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_11255220(...);
extern int thunk_FUN_11255560(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_11d330dc;
extern int DAT_121195a8;
extern int DAT_12126b84;
extern int DAT_122e8a34;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RHTTPBufferedDataIO;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpSPAddAccountXAIOOp;
extern int ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp;
extern int ghidra_vftable_SCAsyncBrowseDataSource;
extern int ghidra_vftable_SCBrowseStackManagerEventSinkInternal;
extern int ghidra_vftable_SCContentPageDataSource;
extern int ghidra_vftable_SCContentRootPageDataSource;
extern int ghidra_vftable_SCContentSessionCallback;
extern int ghidra_vftable_SCEventSinkDelegateInternal;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIBrowseStackManager;
extern int ghidra_vftable_SCIEnumerator;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpAddServiceAccount;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIServiceDescriptor;
extern int ghidra_vftable_SCIServiceDescriptorInternals;
extern int ghidra_vftable_SCITokenManager;
extern int ghidra_vftable_SCIndexedShareDataSource;
extern int ghidra_vftable_SCLastFMBrowseDataSource;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCNewWizController;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCOpAddAccountX;
extern int ghidra_vftable_SCOpFetchToken;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCShareManagerEventSink;
extern int ghidra_vftable_SCSwfObjBCListener;
extern int ghidra_vftable_SCTestPoint_TestPointCallback;
extern int ghidra_vftable_SCTimerUser;
extern int in_EAX;
extern int uStack_25c;
extern int uStack_8;
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_11503650[];
extern undefined1 LAB_115486b5[];
extern undefined1 LAB_11549320[];
extern undefined1 LAB_1154a6c0[];
extern undefined1 LAB_1154a6f0[];
extern undefined1 LAB_1154c4a0[];
extern undefined1 LAB_1154d440[];
extern undefined1 LAB_115a83b0[];
extern undefined1 LAB_11700b00[];
extern int *stack0xfffffffc;
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103937d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103937d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103937e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103937e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103937f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103937f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393800(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393810(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393810(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393820(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393830(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393840(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393850(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393860(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393870(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393880(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393890(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393900(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393910(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393920(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393930(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393940(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393950(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393960(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393970(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393980(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393990(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393990(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394530(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394560(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394590(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103945c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103945c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103945f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103945f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394620(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394650(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394680(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103946b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103946b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103946e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103946e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394710(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394740(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394770(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103947a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103947a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103947d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103947d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394800(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394830(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394860(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394890(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103948c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103948c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103948f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103948f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394920(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394950(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394980(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103949b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103949b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103949e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103949e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394a10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394a40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394a40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394a70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394aa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394ad0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394bc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394bc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394bf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394bf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394c20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394c20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394c50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394c50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394c80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394c80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394cb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394cb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394ce0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394ce0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d40(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d60(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d80(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394da0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103952d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103952d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10395b70(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10395b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10395c90(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10395c90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10395cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10395cb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10397330(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10397330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10398730(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10398730(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398740(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10398750(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10398750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398760(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398770(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398780(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10398790(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10398790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103987a0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103987a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10399400(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10399400(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_1039a0f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_1039a0f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039a4c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039a4c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039b2f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039b2f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1039ea00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1039ea00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1039ea10(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1039ea10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1039ea60(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1039ea60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1039ebc0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1039ebc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1039ecb0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1039ecb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1039ecc0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1039ecc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039edf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039edf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039ee20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039ee20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039ee50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039ee50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f180(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f1a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f1a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f1c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f1c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f3a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f3a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f3b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f3b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f3c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f3c0(...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_1039f830(undefined4 *param_1);
/* WARNING: Removing unreachable block_1039f840 (ram,0x101ba14a) */ void __fastcall FUN_1039f840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1039ffc0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1039ffc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1039ffd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1039ffd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1039ffe0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1039ffe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1039fff0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1039fff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a0000(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a0000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a0010(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a0010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103a0980(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103a0980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a13c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a13c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a1530(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a1530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a15a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a15a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a15b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a15b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a18d0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a18d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a2cc0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a2cc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a2d10(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a2d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a2d20(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a2d20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2ea0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2ea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2eb0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2eb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a2ef0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a2ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a2f30(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a2f30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2f80(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2f80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2fd0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2fd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_103a2fe0(char param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_103a2fe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a30c0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a30c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a3110(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a3110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_103a3120(char param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_103a3120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a3510(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a3510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a3520(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a3520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a3c40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a3c40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a3c70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a3c70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a3ca0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a3ca0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a4160(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a4160(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a4170(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a4170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a4190(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a4190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a41c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a41c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a41e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a41e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a4210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a4210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a4280(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a4280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a43c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a43c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a43d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a43d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a4680(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a4680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a4690(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a4690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a47f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a47f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4820(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4840(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4850(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4860(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4880(undefined4 *param_1,uint *param_2,int param_3,uint *param_4,int param_5,
                 uint *param_6,uint param_7);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a4920(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a4920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a4950(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a4950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4980(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,
                 uint *param_6,uint param_7);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a30(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a50(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a70(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a80(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4aa0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4ab0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4e30(uint *param_1,int param_2,uint *param_3,int param_4,char *param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4e30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4f20(void *param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4f20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5000(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5100(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5110(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5120(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5130(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5130(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5150(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5170(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5190(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a51b0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a51b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a51c0(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a51c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a51f0(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a51f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5220(int *param_1,int param_2,uint param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5250(undefined4 *param_1,undefined4 param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5250(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5270(undefined4 *param_1,undefined4 param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5270(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5470(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5480(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5490(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a55f0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a55f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5600(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5600(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5610(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5610(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_103a5620(int *param_1,int param_2,int *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_103a5620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103a5690(void *param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103a5690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103a56c0(void *param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103a56c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a56f0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a56f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5700(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5700(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5710(void *param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5740(void *param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5770(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5780(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5790(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57a0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57b0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5820(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5850(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *
FUN_103a5880(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6
            ,uint param_7);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_103a5880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *
FUN_103a5910(undefined4 *param_1,uint *param_2,int param_3,uint *param_4,int param_5,uint *param_6,
            uint param_7);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_103a5910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5ab0(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5b20(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5b20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5b40(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5b40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5b60(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5b80(uint *param_1,int param_2,uint *param_3,int param_4,char *param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5b80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5c90(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5c90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5ca0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5ca0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cb0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cc0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cd0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5ce0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5ce0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cf0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5d00(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5d00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a5d10(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a5d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a5d20(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a5d20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5d30(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5d60(void *param_1,int param_2,void *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5d60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5d90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5d90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5dc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5e20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5e20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5ec0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5ec0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6120(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6120(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6150(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6280(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6340(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a6390(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a6390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a63a0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a63a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6450(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a65c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a65c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a7110(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a7110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a7140(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a7140(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a7660(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a7660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a7bb0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a7bb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a7fb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a7fb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a7fc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a7fc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a8680(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a8680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a86a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a86a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a8750(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a8750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a8760(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a8760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a87f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a87f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8dc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8dd0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8dd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8de0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8de0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8df0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8e10(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8e10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8e20(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8e20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8e90(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8ec0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8ec0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8ef0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8f20(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8f20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a9000(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a9000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a9030(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a9030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9060(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9060(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9070(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9080(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9090(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a90a0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a90a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a90d0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a90d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aa040(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aa040(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aa090(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aa090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103aa0b0(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103aa0b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aa0c0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aa0c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa640(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa650(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa660(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa670(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa680(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa690(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6a0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6b0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6f0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa700(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa700(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa710(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa720(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa730(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa730(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa740(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa750(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa760(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa760(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa7f0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa7f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa800(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aac10(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aac10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab440(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab450(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab460(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab470(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab480(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103ab490(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103ab490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab4f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab4f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab500(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab500(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab510(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab520(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab530(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab540(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_103ab550(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_103ab550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab560(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab570(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab580(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab580(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103ab590(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ab5a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ab5a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103ab5b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103ab5b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103aba10(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103aba10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abd90(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abd90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abe00(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abe00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abe70(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abe70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abef0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abf60(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abf60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ac050(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ac050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b6820(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b6820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103b6830(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103b6830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103b6880(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103b6880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103b68d0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103b68d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103b6920(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103b6920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103b6970(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103b6970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103b69d0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103b69d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b6a20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b6a20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b6a30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b6a30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ab0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ac0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ad0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ae0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103b78b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103b78b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b8650(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b8650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_103b8670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b8670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103b8b60(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103b8b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103b8b70(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103b8b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b8d80(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b8d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103b9190(uint *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103b9190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_103b91b0(SCStr *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_103b91b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103b93d0(uint *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103b93d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9420(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9430(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9440(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9450(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9460(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9470(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bbe50(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bbe50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bbf00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bbf00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc700(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc700(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc710(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc720(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc730(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc730(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd3a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd3a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd3d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd3d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd400(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd400(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd430(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd460(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd490(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd4c0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd4c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd40(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd50(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd60(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd70(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd80(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdda0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdda0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103be340(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103be340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103be4f0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103be4f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103be500(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103be500(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103be740(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103be740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103be870(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103be870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103be890(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103be890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103be8a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103be8a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103be9d0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103be9d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103bf210(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103bf210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103bf380(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103bf380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103bf390(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103bf390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103bf410(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103bf410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103bf470(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103bf470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf740(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf750(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf750(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf790(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf7a0(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf7a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf7b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf7b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bfa40(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bfa40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103bfae0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103bfae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfb10(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfb10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfb20(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfb20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfb30(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfb30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfd00(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfd00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfd20(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfd20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfd30(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfd30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bff20(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bff20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103bfff0(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103bfff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0110(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0130(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0130(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0150(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0160(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0160(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0180(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0190(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c01b0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c01b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c01c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c01c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103c01d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103c01d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0220(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0370(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0370(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c06e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c06e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0740(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c07a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c07a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c07c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c07c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0850(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c08f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c08f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c0930(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c0930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0940(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0950(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0960(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0a40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0a40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c0a60(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c0a60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0a70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0b00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0b00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0b90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0b90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c12b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c12b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c1d90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c1d90(...);
/* WARNING: Removing unreachable block_103c1dc0 (ram,0x101ba14a) */ void __fastcall FUN_103c1dc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c1df0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c1df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c2d90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c2d90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c2db0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c2db0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c2df0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c2df0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c3650(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c3650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c3660(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c3660(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c3670(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c3670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c3680(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c3680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c3690(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c3690(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c41f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c41f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c4240(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c4240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c42c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c42c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c42d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c42d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c42e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c42e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4820(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4830(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4840(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4850(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4860(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4870(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4880(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4890(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c48a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c48a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c48b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c48b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c4b50(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c4b50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c4b60(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c4b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c4b70(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c4b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103c4bf0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103c4bf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103c4c40(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103c4c40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4c50(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4c50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103c6550(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103c6550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c7250(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c7250(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c72a0(SCStr *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c72a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103c72f0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103c72f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103c7340(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103c7340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103c73a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103c73a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c73b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c73b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8170(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8180(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c81d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c81d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c81e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c81e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c81f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c81f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8200(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8200(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8210(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8220(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8230(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8260(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8270(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8270(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8280(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8300(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8310(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8720(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8730(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8730(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8740(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8b40(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8b40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103c9390(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103c9390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c93a0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c93a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ca170(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ca170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ca180(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ca180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ca9c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ca9c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb270(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb270(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb2a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb2a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb2d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb2d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb300(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103cbed0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cbed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cbee0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cbee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cc1e0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cc1e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cca40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cca40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cca60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cca60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccae0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cce80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cce80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccea0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccec0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccec0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccee0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccee0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccfa0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccfa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd330(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd340(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd820(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd830(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd840(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce540(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce550(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce560(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce570(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce5a0(int param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce5a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ce5d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ce5d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ce5e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ce5e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ce5f0(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ce5f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea60(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea70(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea80(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea90(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceaa0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceaa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceab0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceac0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cead0(undefined4 param_1,SCStr *param_2,SCStr *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cead0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ceb00(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ceb00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ceb30(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ceb30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cec00(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cec00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103cece0(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103cece0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ced50(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ced50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ced70(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ced70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ced90(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ced90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceda0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceda0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedb0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedc0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedd0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cede0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cede0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedf0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee00(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee10(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee20(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee30(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee40(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee50(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee60(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee70(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee80(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cee90(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cee90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cf1f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cf1f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103cf210(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103cf210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cf320(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cf320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cf770(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cf770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103d04b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103d04b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103d0a10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103d0a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103d0ff0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103d0ff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103d1000(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103d1000(...);
// Reference entry 103937d0; body size 5 bytes.
#line 1 "ENTRY_103937d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103937d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103937e0; body size 3 bytes.
#line 1 "ENTRY_103937e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103937e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103937f0; body size 3 bytes.
#line 1 "ENTRY_103937f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103937f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393800; body size 3 bytes.
#line 1 "ENTRY_10393800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393800(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393810; body size 3 bytes.
#line 1 "ENTRY_10393810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393810(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393820; body size 3 bytes.
#line 1 "ENTRY_10393820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393820(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393830; body size 3 bytes.
#line 1 "ENTRY_10393830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393830(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393840; body size 3 bytes.
#line 1 "ENTRY_10393840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393840(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393850; body size 3 bytes.
#line 1 "ENTRY_10393850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393850(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393860; body size 3 bytes.
#line 1 "ENTRY_10393860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393860(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393870; body size 3 bytes.
#line 1 "ENTRY_10393870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393870(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393880; body size 3 bytes.
#line 1 "ENTRY_10393880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393880(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393890; body size 3 bytes.
#line 1 "ENTRY_10393890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103938a0; body size 3 bytes.
#line 1 "ENTRY_103938a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103938b0; body size 3 bytes.
#line 1 "ENTRY_103938b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103938c0; body size 3 bytes.
#line 1 "ENTRY_103938c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103938d0; body size 3 bytes.
#line 1 "ENTRY_103938d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103938e0; body size 3 bytes.
#line 1 "ENTRY_103938e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103938f0; body size 3 bytes.
#line 1 "ENTRY_103938f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393900; body size 3 bytes.
#line 1 "ENTRY_10393900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393900(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393910; body size 3 bytes.
#line 1 "ENTRY_10393910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393920; body size 3 bytes.
#line 1 "ENTRY_10393920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393930; body size 3 bytes.
#line 1 "ENTRY_10393930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393930(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393940; body size 3 bytes.
#line 1 "ENTRY_10393940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393950; body size 3 bytes.
#line 1 "ENTRY_10393950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393950(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393960; body size 3 bytes.
#line 1 "ENTRY_10393960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393970; body size 3 bytes.
#line 1 "ENTRY_10393970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393970(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393980; body size 3 bytes.
#line 1 "ENTRY_10393980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393980(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393990; body size 3 bytes.
#line 1 "ENTRY_10393990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393990(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103939a0; body size 3 bytes.
#line 1 "ENTRY_103939a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103939b0; body size 3 bytes.
#line 1 "ENTRY_103939b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103939c0; body size 3 bytes.
#line 1 "ENTRY_103939c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103939d0; body size 3 bytes.
#line 1 "ENTRY_103939d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103939e0; body size 3 bytes.
#line 1 "ENTRY_103939e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103939f0; body size 3 bytes.
#line 1 "ENTRY_103939f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a00; body size 3 bytes.
#line 1 "ENTRY_10393a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a10; body size 3 bytes.
#line 1 "ENTRY_10393a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a20; body size 3 bytes.
#line 1 "ENTRY_10393a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a30; body size 3 bytes.
#line 1 "ENTRY_10393a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a40; body size 3 bytes.
#line 1 "ENTRY_10393a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a50; body size 3 bytes.
#line 1 "ENTRY_10393a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a60; body size 3 bytes.
#line 1 "ENTRY_10393a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a70; body size 36 bytes.
#line 1 "ENTRY_10393a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10393a70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10353440(puVar1,param_2);
  return;
}


// Reference entry 10394530; body size 28 bytes.
#line 1 "ENTRY_10394530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394530(undefined4 *param_1)

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


// Reference entry 10394560; body size 28 bytes.
#line 1 "ENTRY_10394560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394560(undefined4 *param_1)

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


// Reference entry 10394590; body size 28 bytes.
#line 1 "ENTRY_10394590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394590(undefined4 *param_1)

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


// Reference entry 103945c0; body size 28 bytes.
#line 1 "ENTRY_103945c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103945c0(undefined4 *param_1)

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


// Reference entry 103945f0; body size 28 bytes.
#line 1 "ENTRY_103945f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103945f0(undefined4 *param_1)

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


// Reference entry 10394620; body size 28 bytes.
#line 1 "ENTRY_10394620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394620(undefined4 *param_1)

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


// Reference entry 10394650; body size 28 bytes.
#line 1 "ENTRY_10394650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394650(undefined4 *param_1)

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


// Reference entry 10394680; body size 28 bytes.
#line 1 "ENTRY_10394680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394680(undefined4 *param_1)

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


// Reference entry 103946b0; body size 28 bytes.
#line 1 "ENTRY_103946b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103946b0(undefined4 *param_1)

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


// Reference entry 103946e0; body size 28 bytes.
#line 1 "ENTRY_103946e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103946e0(undefined4 *param_1)

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


// Reference entry 10394710; body size 28 bytes.
#line 1 "ENTRY_10394710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394710(undefined4 *param_1)

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


// Reference entry 10394740; body size 28 bytes.
#line 1 "ENTRY_10394740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394740(undefined4 *param_1)

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


// Reference entry 10394770; body size 28 bytes.
#line 1 "ENTRY_10394770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394770(undefined4 *param_1)

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


// Reference entry 103947a0; body size 28 bytes.
#line 1 "ENTRY_103947a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103947a0(undefined4 *param_1)

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


// Reference entry 103947d0; body size 28 bytes.
#line 1 "ENTRY_103947d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103947d0(undefined4 *param_1)

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


// Reference entry 10394800; body size 28 bytes.
#line 1 "ENTRY_10394800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394800(undefined4 *param_1)

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


// Reference entry 10394830; body size 28 bytes.
#line 1 "ENTRY_10394830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394830(undefined4 *param_1)

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


// Reference entry 10394860; body size 28 bytes.
#line 1 "ENTRY_10394860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394860(undefined4 *param_1)

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


// Reference entry 10394890; body size 28 bytes.
#line 1 "ENTRY_10394890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394890(undefined4 *param_1)

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


// Reference entry 103948c0; body size 28 bytes.
#line 1 "ENTRY_103948c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103948c0(undefined4 *param_1)

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


// Reference entry 103948f0; body size 28 bytes.
#line 1 "ENTRY_103948f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103948f0(undefined4 *param_1)

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


// Reference entry 10394920; body size 28 bytes.
#line 1 "ENTRY_10394920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394920(undefined4 *param_1)

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


// Reference entry 10394950; body size 28 bytes.
#line 1 "ENTRY_10394950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394950(undefined4 *param_1)

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


// Reference entry 10394980; body size 28 bytes.
#line 1 "ENTRY_10394980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394980(undefined4 *param_1)

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


// Reference entry 103949b0; body size 28 bytes.
#line 1 "ENTRY_103949b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103949b0(undefined4 *param_1)

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


// Reference entry 103949e0; body size 28 bytes.
#line 1 "ENTRY_103949e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103949e0(undefined4 *param_1)

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


// Reference entry 10394a10; body size 28 bytes.
#line 1 "ENTRY_10394a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394a10(undefined4 *param_1)

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


// Reference entry 10394a40; body size 28 bytes.
#line 1 "ENTRY_10394a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394a40(undefined4 *param_1)

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


// Reference entry 10394a70; body size 28 bytes.
#line 1 "ENTRY_10394a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394a70(undefined4 *param_1)

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


// Reference entry 10394aa0; body size 28 bytes.
#line 1 "ENTRY_10394aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394aa0(undefined4 *param_1)

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


// Reference entry 10394ad0; body size 28 bytes.
#line 1 "ENTRY_10394ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394ad0(undefined4 *param_1)

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


// Reference entry 10394b00; body size 28 bytes.
#line 1 "ENTRY_10394b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394b00(undefined4 *param_1)

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


// Reference entry 10394b30; body size 28 bytes.
#line 1 "ENTRY_10394b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394b30(undefined4 *param_1)

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


// Reference entry 10394b60; body size 28 bytes.
#line 1 "ENTRY_10394b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394b60(undefined4 *param_1)

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


// Reference entry 10394b90; body size 28 bytes.
#line 1 "ENTRY_10394b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394b90(undefined4 *param_1)

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


// Reference entry 10394bc0; body size 28 bytes.
#line 1 "ENTRY_10394bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394bc0(undefined4 *param_1)

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


// Reference entry 10394bf0; body size 28 bytes.
#line 1 "ENTRY_10394bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394bf0(undefined4 *param_1)

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


// Reference entry 10394c20; body size 28 bytes.
#line 1 "ENTRY_10394c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394c20(undefined4 *param_1)

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


// Reference entry 10394c50; body size 28 bytes.
#line 1 "ENTRY_10394c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394c50(undefined4 *param_1)

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


// Reference entry 10394c80; body size 28 bytes.
#line 1 "ENTRY_10394c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394c80(undefined4 *param_1)

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


// Reference entry 10394cb0; body size 28 bytes.
#line 1 "ENTRY_10394cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394cb0(undefined4 *param_1)

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


// Reference entry 10394ce0; body size 28 bytes.
#line 1 "ENTRY_10394ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394ce0(undefined4 *param_1)

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


// Reference entry 10394d10; body size 28 bytes.
#line 1 "ENTRY_10394d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394d10(undefined4 *param_1)

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


// Reference entry 10394d40; body size 20 bytes.
#line 1 "ENTRY_10394d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394d40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10394d60; body size 20 bytes.
#line 1 "ENTRY_10394d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394d60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10394d80; body size 20 bytes.
#line 1 "ENTRY_10394d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394d80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10394da0; body size 20 bytes.
#line 1 "ENTRY_10394da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394da0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 103952d0; body size 11 bytes.
#line 1 "ENTRY_103952d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103952d0(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 200) + 0x7c))();
  return;
}


// Reference entry 10395b70; body size 5 bytes.
#line 1 "ENTRY_10395b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10395b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10395c90; body size 24 bytes.
#line 1 "ENTRY_10395c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10395c90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10395cb0; body size 24 bytes.
#line 1 "ENTRY_10395cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10395cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10395d40; body size 240 bytes.
#line 1 "ENTRY_10395d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10395d40(undefined4 param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("deviceID",0));
  uVar4 = (undefined4)(param_2);
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("model",0));
  uVar3 = (undefined4)(param_2);
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("sonosid",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("householdid",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("osVer",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("softwareVer",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("systemVer",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  thunk_FUN_111c4880(uVar4,uVar3);
  uVar3 = (undefined4)(0x11);
  iVar2 = (int)(param_1 + 0xdbd1);
  thunk_FUN_1124ff50("software_downloadReturn");
  thunk_FUN_112503c0(iVar2,uVar3);
  return (int)(param_1);
}


// Reference entry 103967a0; body size 10 bytes.
#line 1 "ENTRY_103967a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103967a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 103967b0; body size 10 bytes.
#line 1 "ENTRY_103967b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103967b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 103967c0; body size 10 bytes.
#line 1 "ENTRY_103967c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103967c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 103967d0; body size 10 bytes.
#line 1 "ENTRY_103967d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103967d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 103967e0; body size 10 bytes.
#line 1 "ENTRY_103967e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103967e0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 10396810; body size 13 bytes.
#line 1 "ENTRY_10396810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10396810(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x6cc) = (undefined1)(param_2);
  return;
}


// Reference entry 10397310; body size 12 bytes.
#line 1 "ENTRY_10397310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10397310(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2*)(param_1 + 0x5c) = (undefined2)(param_2);
  return;
}


// Reference entry 10397320; body size 10 bytes.
#line 1 "ENTRY_10397320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10397320(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  return;
}


// Reference entry 10397330; body size 11 bytes.
#line 1 "ENTRY_10397330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10397330(int param_1)

{
  return (uint)(((uint)((uint3)(*(uint *)(param_1 + 0xd08) >> 9)) << 8 | (uint)((char)(*(uint *)(param_1 + 0xd08) >> 1)))
         & 0xffffff01);
}


// Reference entry 10398730; body size 11 bytes.
#line 1 "ENTRY_10398730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10398730(void)

{
  return (bool)(DAT_122e8a34 != 0);
}


// Reference entry 10398740; body size 4 bytes.
#line 1 "ENTRY_10398740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10398740(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10398750; body size 9 bytes.
#line 1 "ENTRY_10398750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10398750(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10398760; body size 4 bytes.
#line 1 "ENTRY_10398760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10398760(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10398770; body size 4 bytes.
#line 1 "ENTRY_10398770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10398770(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10398780; body size 4 bytes.
#line 1 "ENTRY_10398780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10398780(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10398790; body size 9 bytes.
#line 1 "ENTRY_10398790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10398790(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 103987a0; body size 9 bytes.
#line 1 "ENTRY_103987a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103987a0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10399400; body size 8 bytes.
#line 1 "ENTRY_10399400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10399400(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 4) + 0x14))();
  return;
}


// Reference entry 10399ea0; body size 21 bytes.
#line 1 "ENTRY_10399ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10399ea0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x1c))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 1039a0f0; body size 17 bytes.
#line 1 "ENTRY_1039a0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_1039a0f0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x104) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x104));
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 1039a4c0; body size 8 bytes.
#line 1 "ENTRY_1039a4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039a4c0(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 4) + 0x18))();
  return;
}


// Reference entry 1039a5a0; body size 21 bytes.
#line 1 "ENTRY_1039a5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1039a5a0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x2c))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 1039a5c0; body size 24 bytes.
#line 1 "ENTRY_1039a5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1039a5c0(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    (**(code **)(**(int **)(param_2 + 4) + 0x18))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 1039a990; body size 21 bytes.
#line 1 "ENTRY_1039a990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_1039a990(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x20))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 1039b2f0; body size 304 bytes.
#line 1 "ENTRY_1039b2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039b2f0(int param_1)

{
 try {
  int iVar1;
  char *pcVar2;
  bool bVar3;
  int *piStack_268;
  void *pvStack_264;
  undefined1 *puStack_260;
  undefined4 uStack_25c;
  undefined1 auStack_258 [488];
  int iStack_70;
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_258);

  iVar1 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))(uStack_8));
  thunk_FUN_11255220();

  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x28) + 4))(0x12f07,0,auStack_258);
  }
  bVar3 = (bool)(iStack_70 == 3);
  if (bVar3 != (bool)*(char *)(param_1 + 0x1130)) {
    *(bool*)(param_1 + 0x1130) = (bool)(bVar3);
    pcVar2 = (char *)("true");
    if (!bVar3) {
      pcVar2 = (char *)("false");
    }
    thunk_FUN_112af4e0("SCHousehold",3,"hasRadioHD has changed to %s, invalidating logo cache",
                       pcVar2);
    if (DAT_122e8a34 != 0) {
      func_0x1006dccd(*(undefined1 *)(param_1 + 0x1130));
    }
    thunk_FUN_10cf1210();
    *(unsigned char *)((char *)&uStack_25c + 0) = 1;
    func_0x10015be0(*(undefined1 *)(param_1 + 0x1130));
    uStack_25c = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_25c + 1)) << 8 | (uint)(2)));
    if ((int *)(piStack_268) != (int *)0x0) {
      (**(code **)(*piStack_268 + 8))();
    }
  }
  thunk_FUN_11255560();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 1039ea00; body size 7 bytes.
#line 1 "ENTRY_1039ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1039ea00(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x548));
}


// Reference entry 1039ea10; body size 11 bytes.
#line 1 "ENTRY_1039ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1039ea10(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x570) != 0);
}


// Reference entry 1039ea60; body size 7 bytes.
#line 1 "ENTRY_1039ea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1039ea60(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xdbd1));
}


// Reference entry 1039ebc0; body size 7 bytes.
#line 1 "ENTRY_1039ebc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1039ebc0(int param_1)

{
  return (int)(param_1 + 0x1430);
}


// Reference entry 1039ec00; body size 26 bytes.
#line 1 "ENTRY_1039ec00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1039ec00(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 1039ec20; body size 26 bytes.
#line 1 "ENTRY_1039ec20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1039ec20(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 1039ec40; body size 78 bytes.
#line 1 "ENTRY_1039ec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_1039ec40(int *param_2)
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


// Reference entry 1039ecb0; body size 6 bytes.
#line 1 "ENTRY_1039ecb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1039ecb0(void)

{
  return (char *)("SCIOpAddServiceAccount");
}


// Reference entry 1039ecc0; body size 6 bytes.
#line 1 "ENTRY_1039ecc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1039ecc0(void)

{
  return (char *)("SCIServiceDescriptorInternals");
}


// Reference entry 1039edf0; body size 27 bytes.
#line 1 "ENTRY_1039edf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039edf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1039ee20; body size 27 bytes.
#line 1 "ENTRY_1039ee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039ee20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1039ee50; body size 27 bytes.
#line 1 "ENTRY_1039ee50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039ee50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f180; body size 16 bytes.
#line 1 "ENTRY_1039f180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f1a0; body size 16 bytes.
#line 1 "ENTRY_1039f1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f1a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f1c0; body size 16 bytes.
#line 1 "ENTRY_1039f1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f1c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f240; body size 134 bytes.
#line 1 "ENTRY_1039f240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1039f240(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:SystemProperties:1","AddAccountX",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f3a0; body size 9 bytes.
#line 1 "ENTRY_1039f3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f3a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAddServiceAccount);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f3b0; body size 9 bytes.
#line 1 "ENTRY_1039f3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f3b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f3c0; body size 9 bytes.
#line 1 "ENTRY_1039f3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceDescriptorInternals);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f830; body size 11 bytes.
#line 1 "ENTRY_1039f830"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039f830(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 1039f840; body size 11 bytes.
#line 1 "ENTRY_1039f840"

/* WARNING: Removing unreachable block_1039f840 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039f840(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 1039fd00; body size 28 bytes.
#line 1 "ENTRY_1039fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)((0x0))) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 1039fd30; body size 28 bytes.
#line 1 "ENTRY_1039fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)((0x0))) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 1039fd60; body size 7 bytes.
#line 1 "ENTRY_1039fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1039fd70; body size 7 bytes.
#line 1 "ENTRY_1039fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1039fd80; body size 7 bytes.
#line 1 "ENTRY_1039fd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1039fd90; body size 18 bytes.
#line 1 "ENTRY_1039fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd90(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAddAccountX);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAddAccountX);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
  }
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObj);

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1039ffc0; body size 7 bytes.
#line 1 "ENTRY_1039ffc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1039ffc0(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 1039ffd0; body size 3 bytes.
#line 1 "ENTRY_1039ffd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1039ffd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1039ffe0; body size 3 bytes.
#line 1 "ENTRY_1039ffe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1039ffe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1039fff0; body size 4 bytes.
#line 1 "ENTRY_1039fff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1039fff0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103a0000; body size 4 bytes.
#line 1 "ENTRY_103a0000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a0000(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103a0010; body size 3 bytes.
#line 1 "ENTRY_103a0010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a0010(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a0820; body size 11 bytes.
#line 1 "ENTRY_103a0820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103a0820(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0xa990));
  if (uVar1 < 0x10) {
    *(uint*)(param_1 + 0xa990) = (uint)(uVar1 + 1);
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  *(int*)(param_1 + 0xbb00) = (int)(*(int *)(param_1 + 0xbb00) + 1);
  iVar2 = (int)(uVar1 * 0x60 + param_1 + 0xa988);
  (**(code **)(*(int *)(iVar2 + 0x1180) + 4))(param_2);
  *(undefined1*)(iVar2 + 0x11d4) = (undefined1)(0);
  *(int*)(iVar2 + 0x11d0) = (int)(param_1 + 0xb5e4);
  return (int)(iVar2 + 0x1180);
}


// Reference entry 103a0830; body size 11 bytes.
#line 1 "ENTRY_103a0830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103a0830(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(uint *)(param_1 + 0xc10c));
  if (uVar2 < 0x10) {
    *(uint*)(param_1 + 0xc10c) = (uint)(uVar2 + 1);
  }
  else {
    uVar2 = (uint)(uVar2 - 1);
  }
  *(int*)(param_1 + 0xc110) = (int)(*(int *)(param_1 + 0xc110) + 1);
  iVar1 = (int)(param_1 + 0xc108 + uVar2 * 0x38);
  (**(code **)(*(int *)(param_1 + 0xc3f0 + uVar2 * 0x38) + 4))(param_2);
  *(undefined1*)(iVar1 + 0x31a) = (undefined1)(1);
  return (int)(iVar1 + 0x2e8);
}


// Reference entry 103a0980; body size 8 bytes.
#line 1 "ENTRY_103a0980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103a0980(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x12d));
}


// Reference entry 103a13c0; body size 9 bytes.
#line 1 "ENTRY_103a13c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a13c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103a1530; body size 7 bytes.
#line 1 "ENTRY_103a1530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a1530(int param_1)

{
  return (int)(param_1 + 0xdbd0);
}


// Reference entry 103a15a0; body size 7 bytes.
#line 1 "ENTRY_103a15a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a15a0(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 103a15b0; body size 7 bytes.
#line 1 "ENTRY_103a15b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a15b0(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 103a18d0; body size 18 bytes.
#line 1 "ENTRY_103a18d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a18d0(int *param_1)

{
  if (*param_1 == 0) {
    return (undefined4)(*(undefined4 *)(param_1[1] + 0x134));
  }
  return (undefined4)(0);
}


// Reference entry 103a2cc0; body size 57 bytes.
#line 1 "ENTRY_103a2cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a2cc0(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_110828b0());
  iVar2 = (int)((*(code *)**(undefined4 **)(iVar2 + 0x1c))());
  if (iVar2 != 0) {
    cVar1 = (char)(thunk_FUN_110d3ac0());
    if (cVar1 != '\0') {
      iVar2 = (int)(thunk_FUN_110ce190());
      if (iVar2 != 0) {
        iVar2 = (int)(thunk_FUN_110ce190());
        return (undefined4)(*(undefined4 *)(iVar2 + 0x2c));
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 103a2d10; body size 6 bytes.
#line 1 "ENTRY_103a2d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103a2d10(void)

{
  return (char *)("SCIOpAddServiceAccount");
}


// Reference entry 103a2d20; body size 6 bytes.
#line 1 "ENTRY_103a2d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103a2d20(void)

{
  return (char *)("SCIServiceDescriptorInternals");
}


// Reference entry 103a2ea0; body size 7 bytes.
#line 1 "ENTRY_103a2ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a2ea0(int *param_1)

{
  return (bool)(*param_1 == 0);
}


// Reference entry 103a2eb0; body size 7 bytes.
#line 1 "ENTRY_103a2eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a2eb0(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 103a2ef0; body size 16 bytes.
#line 1 "ENTRY_103a2ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103a2ef0(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = (uint)(in_EAX & 0xffffff00);
  if (*param_1 != 0) {
    return (uint)(uVar1);
  }
  if (((*(char *)(param_1[1] + 0x12d) != '\x03') &&
      (uVar1 = *(uint *)(param_1[1] + 0x134), uVar1 != 0x12f)) && (uVar1 != 500)) {
    return (uint)(uVar1 & 0xffffff00);
  }
  return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 103a2f30; body size 21 bytes.
#line 1 "ENTRY_103a2f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103a2f30(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = (uint)(in_EAX & 0xffffff00);
  if (*param_1 == 0) {
    uVar1 = (uint)(((uint)((int3)((uint)param_1[1] >> 8)) << 8 | (uint)(*(char *)(param_1[1] + 0x12d) == '\x02')));
  }
  return (uint)(uVar1);
}


// Reference entry 103a2f80; body size 11 bytes.
#line 1 "ENTRY_103a2f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a2f80(int param_1)

{
  return (bool)(*(char *)(param_1 + 0x12d) == '\x02');
}


// Reference entry 103a2fd0; body size 7 bytes.
#line 1 "ENTRY_103a2fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a2fd0(int *param_1)

{
  return (bool)(*param_1 == 0);
}


// Reference entry 103a2fe0; body size 9 bytes.
#line 1 "ENTRY_103a2fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_103a2fe0(char param_1)

{
  return (bool)(param_1 == '\a');
}


// Reference entry 103a30c0; body size 21 bytes.
#line 1 "ENTRY_103a30c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103a30c0(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = (uint)(in_EAX & 0xffffff00);
  if (*param_1 == 0) {
    uVar1 = (uint)(((uint)((int3)((uint)param_1[1] >> 8)) << 8 | (uint)(*(char *)(param_1[1] + 0x12d) == '\x01')));
  }
  return (uint)(uVar1);
}


// Reference entry 103a3110; body size 11 bytes.
#line 1 "ENTRY_103a3110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a3110(int param_1)

{
  return (bool)(*(char *)(param_1 + 0x12d) == '\x01');
}


// Reference entry 103a3120; body size 9 bytes.
#line 1 "ENTRY_103a3120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_103a3120(char param_1)

{
  return (bool)(param_1 == '\b');
}


// Reference entry 103a3510; body size 3 bytes.
#line 1 "ENTRY_103a3510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a3510(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a3520; body size 3 bytes.
#line 1 "ENTRY_103a3520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a3520(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a3c40; body size 28 bytes.
#line 1 "ENTRY_103a3c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a3c40(undefined4 *param_1)

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


// Reference entry 103a3c70; body size 28 bytes.
#line 1 "ENTRY_103a3c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a3c70(undefined4 *param_1)

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


// Reference entry 103a3ca0; body size 28 bytes.
#line 1 "ENTRY_103a3ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a3ca0(undefined4 *param_1)

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


// Reference entry 103a4160; body size 7 bytes.
#line 1 "ENTRY_103a4160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a4160(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x134));
}


// Reference entry 103a4170; body size 14 bytes.
#line 1 "ENTRY_103a4170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103a4170(int param_1)

{
  return (uint)(((uint)((uint3)(*(uint *)(param_1 + 0x130) >> 0x16)) << 8 | (uint)(~(byte)(*(uint *)(param_1 + 0x130) >> 0xe))) & 0xffffff01);
}


// Reference entry 103a4190; body size 24 bytes.
#line 1 "ENTRY_103a4190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103a4190(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = (uint)(in_EAX & 0xffffff00);
  if (*param_1 == 0) {
    uVar1 = (uint)(((uint)((uint3)(*(uint *)(param_1[1] + 0x130) >> 0x16)) << 8 | (uint)(~(byte)(*(uint *)(param_1[1] + 0x130) >> 0xe))) & 0xffffff01);
  }
  return (uint)(uVar1);
}


// Reference entry 103a41c0; body size 18 bytes.
#line 1 "ENTRY_103a41c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a41c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a41e0; body size 39 bytes.
#line 1 "ENTRY_103a41e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a41e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a4210; body size 39 bytes.
#line 1 "ENTRY_103a4210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a4210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a4240; body size 22 bytes.
#line 1 "ENTRY_103a4240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a4240(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103a4260; body size 22 bytes.
#line 1 "ENTRY_103a4260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a4260(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103a4280; body size 18 bytes.
#line 1 "ENTRY_103a4280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a4280(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a4370; body size 38 bytes.
#line 1 "ENTRY_103a4370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103a4370(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 103a43a0; body size 22 bytes.
#line 1 "ENTRY_103a43a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a43a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103a43c0; body size 5 bytes.
#line 1 "ENTRY_103a43c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a43c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a43d0; body size 5 bytes.
#line 1 "ENTRY_103a43d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a43d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a43e0; body size 40 bytes.
#line 1 "ENTRY_103a43e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103a43e0(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 103a4420; body size 91 bytes.
#line 1 "ENTRY_103a4420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a4420(int *param_2)
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


// Reference entry 103a4580; body size 91 bytes.
#line 1 "ENTRY_103a4580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a4580(int *param_2)
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


// Reference entry 103a4680; body size 5 bytes.
#line 1 "ENTRY_103a4680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a4680(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a4690; body size 5 bytes.
#line 1 "ENTRY_103a4690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a4690(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a46a0; body size 91 bytes.
#line 1 "ENTRY_103a46a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a46a0(int *param_2)
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


// Reference entry 103a4720; body size 26 bytes.
#line 1 "ENTRY_103a4720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a4720(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 103a4740; body size 78 bytes.
#line 1 "ENTRY_103a4740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a4740(int *param_2)
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


// Reference entry 103a47b0; body size 3 bytes.
#line 1 "ENTRY_103a47b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a47b0(void)

{
  return;
}


// Reference entry 103a47c0; body size 3 bytes.
#line 1 "ENTRY_103a47c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a47c0(void)

{
  return;
}


// Reference entry 103a47d0; body size 3 bytes.
#line 1 "ENTRY_103a47d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a47d0(void)

{
  return;
}


// Reference entry 103a47e0; body size 3 bytes.
#line 1 "ENTRY_103a47e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a47e0(void)

{
  return;
}


// Reference entry 103a47f0; body size 28 bytes.
#line 1 "ENTRY_103a47f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a47f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(8));
  puVar1[1] = (undefined4)(0);
  *param_1 = (undefined4)(puVar1);
  *puVar1 = (undefined4)(param_1);
  return;
}


// Reference entry 103a4820; body size 25 bytes.
#line 1 "ENTRY_103a4820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4820(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 103a4840; body size 13 bytes.
#line 1 "ENTRY_103a4840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4840(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103a4850; body size 13 bytes.
#line 1 "ENTRY_103a4850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4850(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103a4860; body size 20 bytes.
#line 1 "ENTRY_103a4860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4860(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 103a4880; body size 123 bytes.
#line 1 "ENTRY_103a4880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4880(undefined4 *param_1,uint *param_2,int param_3,uint *param_4,int param_5,
                 uint *param_6,uint param_7)

{
  while( true ) {
    if (((uint *)(param_2) == (uint *)(param_4)) && (param_3 == param_5)) break;
    if (param_5 == 0) {
      param_4 = (uint *)(param_4 + -1);
      param_5 = (int)(0x1f);
    }
    else {
      param_5 = (int)(param_5 + -1);
    }
    if (param_7 == 0) {
      param_6 = (uint *)(param_6 + -1);
      param_7 = (uint)(0x1f);
    }
    else {
      param_7 = (uint)(param_7 - 1);
    }
    if ((*param_4 & 1 << ((byte)param_5 & 0x1f)) == 0) {
      *param_6 = (uint)(*param_6 & ~(1 << (param_7 & 0x1f)));
    }
    else {
      *param_6 = (uint)(*param_6 | 1 << (param_7 & 0x1f));
    }
  }
  *param_1 = (undefined4)(param_6);
  param_1[1] = (undefined4)(param_7);
  return;
}


// Reference entry 103a4920; body size 33 bytes.
#line 1 "ENTRY_103a4920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a4920(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 103a4950; body size 33 bytes.
#line 1 "ENTRY_103a4950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a4950(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 103a4980; body size 129 bytes.
#line 1 "ENTRY_103a4980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4980(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,
                 uint *param_6,uint param_7)

{
  uint uVar1;
  
  while (((uint *)(param_2) != (uint *)(param_4) || (param_3 != param_5))) {
    if ((*param_2 & 1 << ((byte)param_3 & 0x1f)) == 0) {
      uVar1 = (uint)(*param_6 & ~(1 << (param_7 & 0x1f)));
    }
    else {
      uVar1 = (uint)(*param_6 | 1 << (param_7 & 0x1f));
    }
    *param_6 = (uint)(uVar1);
    if (param_7 < 0x1f) {
      param_7 = (uint)(param_7 + 1);
    }
    else {
      param_7 = (uint)(0);
      param_6 = (uint *)(param_6 + 1);
    }
    if (param_3 < 0x1f) {
      param_3 = (uint)(param_3 + 1);
    }
    else {
      param_2 = (uint *)(param_2 + 1);
      param_3 = (uint)(0);
    }
  }
  *param_1 = (undefined4)(param_6);
  param_1[1] = (undefined4)(param_7);
  return;
}


// Reference entry 103a4a30; body size 15 bytes.
#line 1 "ENTRY_103a4a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a30(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,8);
  return;
}


// Reference entry 103a4a50; body size 15 bytes.
#line 1 "ENTRY_103a4a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,8);
  return;
}


// Reference entry 103a4a70; body size 3 bytes.
#line 1 "ENTRY_103a4a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a70(void)

{
  return;
}


// Reference entry 103a4a80; body size 3 bytes.
#line 1 "ENTRY_103a4a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a80(void)

{
  return;
}


// Reference entry 103a4a90; body size 3 bytes.
#line 1 "ENTRY_103a4a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a90(void)

{
  return;
}


// Reference entry 103a4aa0; body size 3 bytes.
#line 1 "ENTRY_103a4aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4aa0(void)

{
  return;
}


// Reference entry 103a4ab0; body size 3 bytes.
#line 1 "ENTRY_103a4ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4ab0(void)

{
  return;
}


// Reference entry 103a4ac0; body size 18 bytes.
#line 1 "ENTRY_103a4ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103a4ac0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 103a4e30; body size 191 bytes.
#line 1 "ENTRY_103a4e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4e30(uint *param_1,int param_2,uint *param_3,int param_4,char *param_5)

{
  char cVar1;
  int _Val;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((uint *)(param_1) != (uint *)(param_3)) || (param_2 != param_4)) {
    uVar4 = (uint)(-1 << ((byte)param_2 & 0x1f));
    cVar1 = (char)(*param_5);
    if ((uint *)(param_1) == (uint *)(param_3)) {
      uVar2 = (uint)(0xffffffff >> (0x20U - (char)param_4 & 0x1f));
      uVar3 = (uint)(0);
      if (cVar1 != '\0') {
        uVar3 = (uint)(uVar2);
      }
      *param_1 = (uint)(uVar3 & uVar4 | (~uVar2 | ~uVar4) & *param_1);
      return;
    }
    uVar3 = (uint)(0);
    if (cVar1 != '\0') {
      uVar3 = (uint)(uVar4);
    }
    *param_1 = (uint)(uVar3 | *param_1 & ~uVar4);
    _Val = (int)(0);
    if (*param_5 != '\0') {
      _Val = (int)(0xff);
    }
    memset(param_1 + 1,_Val,(int)param_3 - (int)(param_1 + 1));
    if (param_4 != 0) {
      uVar3 = (uint)(0xffffffff >> (0x20U - (char)param_4 & 0x1f));
      uVar4 = (uint)(0);
      if (cVar1 != '\0') {
        uVar4 = (uint)(uVar3);
      }
      *param_3 = (uint)(~uVar3 & *param_3 | uVar4);
    }
  }
  return;
}


// Reference entry 103a4f20; body size 23 bytes.
#line 1 "ENTRY_103a4f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4f20(void *param_1,int param_2)

{
  memset(param_1,0,param_2 << 2);
  return;
}


// Reference entry 103a5000; body size 15 bytes.
#line 1 "ENTRY_103a5000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5000(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 103a50c0; body size 5 bytes.
#line 1 "ENTRY_103a50c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a50c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a50d0; body size 5 bytes.
#line 1 "ENTRY_103a50d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a50d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a50e0; body size 7 bytes.
#line 1 "ENTRY_103a50e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a50e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a50f0; body size 7 bytes.
#line 1 "ENTRY_103a50f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a50f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a5100; body size 7 bytes.
#line 1 "ENTRY_103a5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5100(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a5110; body size 7 bytes.
#line 1 "ENTRY_103a5110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5110(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a5120; body size 5 bytes.
#line 1 "ENTRY_103a5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5130; body size 16 bytes.
#line 1 "ENTRY_103a5130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5130(int *param_1,int *param_2)

{
  return (int)(*param_2 - *param_1 >> 2);
}


// Reference entry 103a5150; body size 16 bytes.
#line 1 "ENTRY_103a5150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5150(int *param_1,int *param_2)

{
  return (int)(*param_2 - *param_1 >> 2);
}


// Reference entry 103a5170; body size 25 bytes.
#line 1 "ENTRY_103a5170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5170(int *param_1,int *param_2)

{
  return (int)(((*param_2 - *param_1 >> 2) * 0x20 - param_1[1]) + param_2[1]);
}


// Reference entry 103a5190; body size 24 bytes.
#line 1 "ENTRY_103a5190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5190(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == 0)));
}


// Reference entry 103a51b0; body size 5 bytes.
#line 1 "ENTRY_103a51b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a51b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a51c0; body size 37 bytes.
#line 1 "ENTRY_103a51c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a51c0(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 103a51f0; body size 33 bytes.
#line 1 "ENTRY_103a51f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a51f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 103a5220; body size 39 bytes.
#line 1 "ENTRY_103a5220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5220(int *param_1,int param_2,uint param_3)

{
  if (param_3 < 0x1f) {
    *param_1 = (int)(param_2);
    param_1[1] = (int)(param_3 + 1);
    return;
  }
  *param_1 = (int)(param_2 + 4);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 103a5250; body size 19 bytes.
#line 1 "ENTRY_103a5250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5250(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3 + -1);
  return;
}


// Reference entry 103a5270; body size 19 bytes.
#line 1 "ENTRY_103a5270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5270(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3 + -1);
  return;
}


// Reference entry 103a5470; body size 13 bytes.
#line 1 "ENTRY_103a5470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5470(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103a5480; body size 13 bytes.
#line 1 "ENTRY_103a5480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5480(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103a5490; body size 19 bytes.
#line 1 "ENTRY_103a5490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5490(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2[1]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 103a55f0; body size 5 bytes.
#line 1 "ENTRY_103a55f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a55f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5600; body size 5 bytes.
#line 1 "ENTRY_103a5600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5600(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5610; body size 5 bytes.
#line 1 "ENTRY_103a5610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5610(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5620; body size 86 bytes.
#line 1 "ENTRY_103a5620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_103a5620(int *param_1,int param_2,int *param_3)

{
  if (*param_3 == 0) {
    memset(param_1,0,param_2 * 4);
    return (int *)(param_1 + param_2);
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (int)(*param_3);
    param_1 = (int *)(param_1 + 1);
  }
  return (int *)(param_1);
}


// Reference entry 103a5690; body size 35 bytes.
#line 1 "ENTRY_103a5690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103a5690(void *param_1,int param_2)

{
  memset(param_1,0,param_2 * 4);
  return (void *)((void *)(param_2 * 4 + (int)param_1));
}


// Reference entry 103a56c0; body size 35 bytes.
#line 1 "ENTRY_103a56c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103a56c0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 * 4);
  return (void *)((void *)(param_2 * 4 + (int)param_1));
}


// Reference entry 103a56f0; body size 5 bytes.
#line 1 "ENTRY_103a56f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a56f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5700; body size 5 bytes.
#line 1 "ENTRY_103a5700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5710; body size 27 bytes.
#line 1 "ENTRY_103a5710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5710(void *param_1,int param_2)

{
  memset(param_1,0,param_2 - (int)param_1);
  return (int)(param_2);
}


// Reference entry 103a5740; body size 27 bytes.
#line 1 "ENTRY_103a5740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5740(void *param_1,int param_2)

{
  memset(param_1,0,param_2 - (int)param_1);
  return (int)(param_2);
}


// Reference entry 103a5770; body size 5 bytes.
#line 1 "ENTRY_103a5770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5780; body size 5 bytes.
#line 1 "ENTRY_103a5780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5790; body size 5 bytes.
#line 1 "ENTRY_103a5790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a57a0; body size 5 bytes.
#line 1 "ENTRY_103a57a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a57b0; body size 5 bytes.
#line 1 "ENTRY_103a57b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a57c0; body size 5 bytes.
#line 1 "ENTRY_103a57c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a57d0; body size 5 bytes.
#line 1 "ENTRY_103a57d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a57e0; body size 5 bytes.
#line 1 "ENTRY_103a57e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5820; body size 34 bytes.
#line 1 "ENTRY_103a5820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5820(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 103a5850; body size 28 bytes.
#line 1 "ENTRY_103a5850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5850(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 103a5880; body size 115 bytes.
#line 1 "ENTRY_103a5880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *
FUN_103a5880(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6
            ,uint param_7)

{
  uint uVar1;
  
  while (((uint *)(param_2) != (uint *)(param_4) || (param_3 != param_5))) {
    if ((*param_2 & 1 << ((byte)param_3 & 0x1f)) == 0) {
      uVar1 = (uint)(*param_6 & ~(1 << (param_7 & 0x1f)));
    }
    else {
      uVar1 = (uint)(*param_6 | 1 << (param_7 & 0x1f));
    }
    *param_6 = (uint)(uVar1);
    if (param_7 < 0x1f) {
      param_7 = (uint)(param_7 + 1);
    }
    else {
      param_7 = (uint)(0);
      param_6 = (uint *)(param_6 + 1);
    }
    if (param_3 < 0x1f) {
      param_3 = (uint)(param_3 + 1);
    }
    else {
      param_3 = (uint)(0);
      param_2 = (uint *)(param_2 + 1);
    }
  }
  *param_1 = (undefined4)(param_6);
  param_1[1] = (undefined4)(param_7);
  return (undefined4 *)(param_1);
}


// Reference entry 103a5910; body size 125 bytes.
#line 1 "ENTRY_103a5910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *
FUN_103a5910(undefined4 *param_1,uint *param_2,int param_3,uint *param_4,int param_5,uint *param_6,
            uint param_7)

{
  while (((uint *)(param_2) != (uint *)(param_4) || (param_3 != param_5))) {
    if (param_5 == 0) {
      param_5 = (int)(0x1f);
      param_4 = (uint *)(param_4 + -1);
    }
    else {
      param_5 = (int)(param_5 + -1);
    }
    if (param_7 == 0) {
      param_7 = (uint)(0x1f);
      param_6 = (uint *)(param_6 + -1);
    }
    else {
      param_7 = (uint)(param_7 - 1);
    }
    if ((*param_4 & 1 << ((byte)param_5 & 0x1f)) == 0) {
      *param_6 = (uint)(*param_6 & ~(1 << (param_7 & 0x1f)));
    }
    else {
      *param_6 = (uint)(*param_6 | 1 << (param_7 & 0x1f));
    }
  }
  *param_1 = (undefined4)(param_6);
  param_1[1] = (undefined4)(param_7);
  return (undefined4 *)(param_1);
}


// Reference entry 103a5ab0; body size 86 bytes.
#line 1 "ENTRY_103a5ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5ab0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)(0);
  while ((int *)(param_1) != (int *)(param_2)) {
    piVar2 = (int *)((int *)param_1[2]);
    iVar4 = (int)(iVar4 + 1);
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar2 + 0xd));
      param_1 = (int *)(piVar2);
      piVar2 = (int *)((int *)*piVar2);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar2 + 0xd));
        param_1 = (int *)(piVar2);
        piVar2 = (int *)((int *)*piVar2);
      }
    }
    else {
      cVar1 = (char)(*(char *)(param_1[1] + 0xd));
      piVar3 = (int *)((int *)param_1[1]);
      piVar2 = (int *)(param_1);
      while ((param_1 = piVar3, cVar1 == '\0' && ((int *)(piVar2) == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (int)(iVar4);
}


// Reference entry 103a5b20; body size 15 bytes.
#line 1 "ENTRY_103a5b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5b20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103a5b40; body size 15 bytes.
#line 1 "ENTRY_103a5b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5b40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103a5b60; body size 15 bytes.
#line 1 "ENTRY_103a5b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5b60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103a5b80; body size 211 bytes.
#line 1 "ENTRY_103a5b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5b80(uint *param_1,int param_2,uint *param_3,int param_4,char *param_5)

{
  char cVar1;
  int _Val;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((uint *)(param_1) != (uint *)(param_3)) || (param_2 != param_4)) {
    uVar2 = (uint)(-1 << ((byte)param_2 & 0x1f));
    cVar1 = (char)(*param_5);
    if ((uint *)(param_1) == (uint *)(param_3)) {
      uVar3 = (uint)(0xffffffff >> (0x20U - (char)param_4 & 0x1f));
      uVar4 = (uint)(0);
      if (cVar1 != '\0') {
        uVar4 = (uint)(uVar3);
      }
      *param_1 = (uint)(uVar4 & uVar2 | (~uVar3 | ~uVar2) & *param_1);
      return;
    }
    uVar4 = (uint)(0);
    if (cVar1 != '\0') {
      uVar4 = (uint)(uVar2);
    }
    *param_1 = (uint)(uVar4 | *param_1 & ~uVar2);
    _Val = (int)(0);
    if (*param_5 != '\0') {
      _Val = (int)(0xff);
    }
    memset(param_1 + 1,_Val,(int)param_3 - (int)(param_1 + 1));
    if (param_4 != 0) {
      uVar4 = (uint)(0xffffffff >> (0x20U - (char)param_4 & 0x1f));
      uVar2 = (uint)(0);
      if (cVar1 != '\0') {
        uVar2 = (uint)(uVar4);
      }
      *param_3 = (uint)(uVar2 | ~uVar4 & *param_3);
    }
  }
  return;
}


// Reference entry 103a5c90; body size 5 bytes.
#line 1 "ENTRY_103a5c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5ca0; body size 5 bytes.
#line 1 "ENTRY_103a5ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5ca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5cb0; body size 5 bytes.
#line 1 "ENTRY_103a5cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5cc0; body size 5 bytes.
#line 1 "ENTRY_103a5cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5cd0; body size 5 bytes.
#line 1 "ENTRY_103a5cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5ce0; body size 5 bytes.
#line 1 "ENTRY_103a5ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5ce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5cf0; body size 5 bytes.
#line 1 "ENTRY_103a5cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5d00; body size 5 bytes.
#line 1 "ENTRY_103a5d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5d10; body size 6 bytes.
#line 1 "ENTRY_103a5d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103a5d10(void)

{
  return (char *)("SCIBrowseStackManager");
}


// Reference entry 103a5d20; body size 6 bytes.
#line 1 "ENTRY_103a5d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103a5d20(void)

{
  return (char *)("SCIStackedItemImpl");
}


// Reference entry 103a5d30; body size 33 bytes.
#line 1 "ENTRY_103a5d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5d30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 103a5d60; body size 33 bytes.
#line 1 "ENTRY_103a5d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5d60(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 103a5d90; body size 27 bytes.
#line 1 "ENTRY_103a5d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a5d90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 103a5dc0; body size 16 bytes.
#line 1 "ENTRY_103a5dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a5dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a5e20; body size 16 bytes.
#line 1 "ENTRY_103a5e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a5e20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a5ec0; body size 16 bytes.
#line 1 "ENTRY_103a5ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a5ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6080; body size 18 bytes.
#line 1 "ENTRY_103a6080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6080(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a60a0; body size 18 bytes.
#line 1 "ENTRY_103a60a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a60a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a60c0; body size 18 bytes.
#line 1 "ENTRY_103a60c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a60c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a60e0; body size 18 bytes.
#line 1 "ENTRY_103a60e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a60e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6100; body size 18 bytes.
#line 1 "ENTRY_103a6100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6100(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6120; body size 37 bytes.
#line 1 "ENTRY_103a6120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6150; body size 37 bytes.
#line 1 "ENTRY_103a6150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6150(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a61c0; body size 11 bytes.
#line 1 "ENTRY_103a61c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a61c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a61d0; body size 11 bytes.
#line 1 "ENTRY_103a61d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a61d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6260; body size 11 bytes.
#line 1 "ENTRY_103a6260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6260(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6270; body size 11 bytes.
#line 1 "ENTRY_103a6270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6270(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6280; body size 16 bytes.
#line 1 "ENTRY_103a6280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6280(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a62a0; body size 21 bytes.
#line 1 "ENTRY_103a62a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a62a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103a62c0; body size 18 bytes.
#line 1 "ENTRY_103a62c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a62c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a62e0; body size 18 bytes.
#line 1 "ENTRY_103a62e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a62e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6300; body size 18 bytes.
#line 1 "ENTRY_103a6300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6320; body size 19 bytes.
#line 1 "ENTRY_103a6320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6320(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2[1]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6340; body size 30 bytes.
#line 1 "ENTRY_103a6340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6340(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6370; body size 11 bytes.
#line 1 "ENTRY_103a6370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6370(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6380; body size 11 bytes.
#line 1 "ENTRY_103a6380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a6380(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6390; body size 3 bytes.
#line 1 "ENTRY_103a6390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a6390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a63a0; body size 3 bytes.
#line 1 "ENTRY_103a63a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a63a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a6450; body size 52 bytes.
#line 1 "ENTRY_103a6450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6450(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 103a65c0; body size 30 bytes.
#line 1 "ENTRY_103a65c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a65c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a7010; body size 42 bytes.
#line 1 "ENTRY_103a7010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a7010(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseStackManagerEventSinkInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 103a7050; body size 151 bytes.
#line 1 "ENTRY_103a7050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a7050(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10d08960(param_2,param_3,param_4,param_5,param_6,param_7);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x25] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  *(undefined1*)((int)param_1 + 0x275) = (undefined1)(1);
  return (undefined4 *)(param_1);
}


// Reference entry 103a7110; body size 33 bytes.
#line 1 "ENTRY_103a7110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a7110(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentSessionCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 103a7140; body size 9 bytes.
#line 1 "ENTRY_103a7140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a7140(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBrowseStackManager);
  return (undefined4 *)(param_1);
}


// Reference entry 103a7300; body size 150 bytes.
#line 1 "ENTRY_103a7300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a7300(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10200150(param_2,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x25] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x95] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  return (undefined4 *)(param_1);
}


// Reference entry 103a7660; body size 9 bytes.
#line 1 "ENTRY_103a7660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a7660(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a7670; body size 18 bytes.
#line 1 "ENTRY_103a7670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a7670(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a7bb0; body size 3 bytes.
#line 1 "ENTRY_103a7bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a7bb0(void)

{
  return;
}


// Reference entry 103a7fb0; body size 5 bytes.
#line 1 "ENTRY_103a7fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a7fb0(undefined4 *param_1)

{
 try {
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar3 = (uint)(DAT_12126b84);

  iVar7 = (int)(param_1[4]);
  if (iVar7 != 0) {
    do {
      uVar5 = (uint)(param_1[3] + -1 + iVar7);
      uVar6 = (uint)(uVar5 & 1);
      iVar4 = (int)(*(int *)(param_1[1] + (param_1[2] - 1 & uVar5 >> 1) * 4));
      piVar1 = (int *)(*(int **)(iVar4 + 4 + uVar6 * 8));

      if ((int *)(piVar1) != (int *)0x0) {
        *(undefined4*)(iVar4 + uVar6 * 8) = (undefined4)(0);
        *(undefined4*)(iVar4 + 4 + uVar6 * 8) = (undefined4)(0);
        (**(code **)(*piVar1 + 8))(uVar3);
        iVar7 = (int)(param_1[4]);
      }
      iVar7 = (int)(iVar7 + -1);
      param_1[4] = (undefined4)(iVar7);
    } while (iVar7 != 0);
    param_1[3] = (undefined4)(0);
  }

  iVar7 = (int)(param_1[2]);
  while (iVar7 != 0) {
    iVar7 = (int)(iVar7 + -1);
    iVar4 = (int)(*(int *)(param_1[1] + iVar7 * 4));
    if (iVar4 != 0) {
      thunk_FUN_1148a50e(iVar4,0x10);
    }
  }
  iVar7 = (int)(param_1[1]);
  if (iVar7 != 0) {
    uVar3 = (uint)(param_1[2] * 4);
    iVar4 = (int)(iVar7);
    if (0xfff < uVar3) {
      iVar4 = (int)(*(int *)(iVar7 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar7 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
  }
  uVar2 = (undefined4)(*param_1);
  param_1[2] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)(0);
  thunk_FUN_1148a50e(uVar2,8);

  return;

 } catch (...) { }
}


// Reference entry 103a7fc0; body size 5 bytes.
#line 1 "ENTRY_103a7fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a7fc0(undefined4 *param_1)

{
 try {
  SCStr *this_;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar4 = (int)(param_1[4]);
  if (iVar4 != 0) {
    do {
      uVar5 = (uint)(param_1[3] + -1 + iVar4);
      this_ = (SCStr *)((SCStr *)(*(int *)(param_1[1] + (param_1[2] - 1 & uVar5 >> 2) * 4) + (uVar5 & 3) * 4));

      ((SCStr *)(this_))->int_release();
      *(undefined4*)this_ = (undefined4)((SCStr *)(0));
      iVar4 = (int)(param_1[4] + -1);
      param_1[4] = (undefined4)(iVar4);
    } while (iVar4 != 0);
    param_1[3] = (undefined4)(0);
  }

  iVar4 = (int)(param_1[2]);
  while (iVar4 != 0) {
    iVar4 = (int)(iVar4 + -1);
    iVar3 = (int)(*(int *)(param_1[1] + iVar4 * 4));
    if (iVar3 != 0) {
      thunk_FUN_1148a50e(iVar3,0x10,uVar2);
    }
  }
  iVar4 = (int)(param_1[1]);
  if (iVar4 != 0) {
    uVar5 = (uint)(param_1[2] * 4);
    iVar3 = (int)(iVar4);
    if (0xfff < uVar5) {
      iVar3 = (int)(*(int *)(iVar4 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar4 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar5,uVar2);
  }
  uVar1 = (undefined4)(*param_1);
  param_1[2] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)(0);
  thunk_FUN_1148a50e(uVar1,8,uVar2);

  return;

 } catch (...) { }
}


// Reference entry 103a8680; body size 19 bytes.
#line 1 "ENTRY_103a8680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a8680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103a86a0; body size 105 bytes.
#line 1 "ENTRY_103a86a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a86a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x25] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCContentRootPageDataSource);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentPageDataSource);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCContentPageDataSource);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCContentPageDataSource);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCContentPageDataSource);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCContentPageDataSource);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCContentPageDataSource);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCContentPageDataSource);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCContentPageDataSource);
  param_1[0x25] = (undefined4)((uint)&ghidra_vftable_SCContentPageDataSource);
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCContentPageDataSource);
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCContentPageDataSource);
  if (param_1[0xac] != 0) {
    piVar1 = (int *)((int *)param_1[0xad]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[0xac] = (undefined4)(0);
      param_1[0xad] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[0xac] = (undefined4)(0);
    param_1[0xad] = (undefined4)(0);
  }
  if (param_1[0xae] != 0) {
    piVar1 = (int *)((int *)param_1[0xaf]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[0xae] = (undefined4)(0);
      param_1[0xaf] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    param_1[0xae] = (undefined4)(0);
    param_1[0xaf] = (undefined4)(0);
  }
  thunk_FUN_1059d940(param_1[0x9f]);
  piVar1 = (int *)((int *)param_1[0xb7]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0xb6] = (undefined4)(0);
    param_1[0xb7] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xb5]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0xb4] = (undefined4)(0);
    param_1[0xb5] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xb3]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0xb2] = (undefined4)(0);
    param_1[0xb3] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xb1]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0xb0] = (undefined4)(0);
    param_1[0xb1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xaf]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0xae] = (undefined4)(0);
    param_1[0xaf] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xad]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0xac] = (undefined4)(0);
    param_1[0xad] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xab]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0xaa] = (undefined4)(0);
    param_1[0xab] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10120220();

  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  thunk_FUN_10203970();

  return;

 } catch (...) { }
}


// Reference entry 103a8750; body size 7 bytes.
#line 1 "ENTRY_103a8750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a8750(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103a8760; body size 115 bytes.
#line 1 "ENTRY_103a8760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a8760(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);
  param_1[0x25] = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);
  param_1[0x95] = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCIndexedShareDataSource);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x25] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x95] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  if ((int *)param_1[0x9a] != (int *)((0x0))) {
    (**(code **)(*(int *)param_1[0x9a] + 0x18))(param_1[0x97],uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x9e)))->int_release();
  param_1[0x9e] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[0x9b]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x9a] = (undefined4)(0);
    param_1[0x9b] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCShareManagerEventSink);
  piVar1 = (int *)((int *)param_1[0x98]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x97] = (undefined4)(0);
    param_1[0x98] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x95] = (undefined4)((uint)&ghidra_vftable_SCSwfObjBCListener);
  thunk_FUN_110a9ef0();
  thunk_FUN_10203970();

  return;

 } catch (...) { }
}


// Reference entry 103a87f0; body size 115 bytes.
#line 1 "ENTRY_103a87f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a87f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x25] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x95] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCLastFMBrowseDataSource);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x25] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x95] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  if ((int *)param_1[0x9a] != (int *)((0x0))) {
    (**(code **)(*(int *)param_1[0x9a] + 0x18))(param_1[0x97],uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x9e)))->int_release();
  param_1[0x9e] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[0x9b]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x9a] = (undefined4)(0);
    param_1[0x9b] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCShareManagerEventSink);
  piVar1 = (int *)((int *)param_1[0x98]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x97] = (undefined4)(0);
    param_1[0x98] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x95] = (undefined4)((uint)&ghidra_vftable_SCSwfObjBCListener);
  thunk_FUN_110a9ef0();
  thunk_FUN_10203970();

  return;

 } catch (...) { }
}


// Reference entry 103a8ac0; body size 65 bytes.
#line 1 "ENTRY_103a8ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a8ac0(int *param_2)
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


// Reference entry 103a8b20; body size 59 bytes.
#line 1 "ENTRY_103a8b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a8b20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint *puVar1;
  
  puVar1 = (uint *)((uint *)*param_1);
  if ((*(uint *)*param_2 & 1 << ((byte)param_2[1] & 0x1f)) != 0) {
    *puVar1 = (uint)(*puVar1 | 1 << (param_1[1] & 0x1f));
    return (undefined4 *)(param_1);
  }
  *puVar1 = (uint)(*puVar1 & ~(1 << (param_1[1] & 0x1f)));
  return (undefined4 *)(param_1);
}


// Reference entry 103a8b70; body size 37 bytes.
#line 1 "ENTRY_103a8b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a8b70(char param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint *puVar1;
  
  puVar1 = (uint *)((uint *)*param_1);
  if (param_2 != '\0') {
    *puVar1 = (uint)(*puVar1 | 1 << (param_1[1] & 0x1f));
    return (undefined4 *)(param_1);
  }
  *puVar1 = (uint)(*puVar1 & ~(1 << (param_1[1] & 0x1f)));
  return (undefined4 *)(param_1);
}


// Reference entry 103a8ba0; body size 14 bytes.
#line 1 "ENTRY_103a8ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103a8ba0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 103a8bc0; body size 14 bytes.
#line 1 "ENTRY_103a8bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103a8bc0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 103a8be0; body size 28 bytes.
#line 1 "ENTRY_103a8be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103a8be0(uint *param_2)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if ((uVar1 == *param_2) && (uVar1 = param_1[1],(uint *)((uVar1)) == (uint *)(param_2[1]))) {
    return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 103a8c10; body size 14 bytes.
#line 1 "ENTRY_103a8c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103a8c10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 103a8c30; body size 14 bytes.
#line 1 "ENTRY_103a8c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103a8c30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 103a8c50; body size 28 bytes.
#line 1 "ENTRY_103a8c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103a8c50(uint *param_2)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if ((uVar1 == *param_2) && (uVar1 = param_1[1],(uint *)((uVar1)) == (uint *)(param_2[1]))) {
    return (uint)(uVar1 & 0xffffff00);
  }
  return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 103a8d90; body size 31 bytes.
#line 1 "ENTRY_103a8d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103a8d90(int *param_2,uint param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  param_2[1] = (int)(param_3 & 0x1f);
  *param_2 = (int)(iVar1 + (param_3 >> 5) * 4);
  return;
}


// Reference entry 103a8dc0; body size 3 bytes.
#line 1 "ENTRY_103a8dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8dc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8dd0; body size 7 bytes.
#line 1 "ENTRY_103a8dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a8dd0(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 103a8de0; body size 3 bytes.
#line 1 "ENTRY_103a8de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8de0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8df0; body size 7 bytes.
#line 1 "ENTRY_103a8df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a8df0(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 103a8e00; body size 3 bytes.
#line 1 "ENTRY_103a8e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8e10; body size 7 bytes.
#line 1 "ENTRY_103a8e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a8e10(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 103a8e20; body size 7 bytes.
#line 1 "ENTRY_103a8e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a8e20(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 103a8e30; body size 20 bytes.
#line 1 "ENTRY_103a8e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e30(undefined4 *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)((*(uint *)*param_1 & 1 << ((byte)param_1[1] & 0x1f)) != 0)));
}


// Reference entry 103a8e50; body size 3 bytes.
#line 1 "ENTRY_103a8e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8e60; body size 3 bytes.
#line 1 "ENTRY_103a8e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8e70; body size 3 bytes.
#line 1 "ENTRY_103a8e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8e80; body size 3 bytes.
#line 1 "ENTRY_103a8e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8e90; body size 30 bytes.
#line 1 "ENTRY_103a8e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a8e90(int *param_1)

{
  return (int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 1) * 4
                 ) + (param_1[1] & 1U) * 8);
}


// Reference entry 103a8ec0; body size 31 bytes.
#line 1 "ENTRY_103a8ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a8ec0(int *param_1)

{
  return (int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 2) * 4
                 ) + (param_1[1] & 3U) * 4);
}


// Reference entry 103a8ef0; body size 30 bytes.
#line 1 "ENTRY_103a8ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a8ef0(int *param_1)

{
  return (int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 1) * 4
                 ) + (param_1[1] & 1U) * 8);
}


// Reference entry 103a8f20; body size 31 bytes.
#line 1 "ENTRY_103a8f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a8f20(int *param_1)

{
  return (int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 2) * 4
                 ) + (param_1[1] & 3U) * 4);
}


// Reference entry 103a8f50; body size 17 bytes.
#line 1 "ENTRY_103a8f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103a8f50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_1[1]);
  *param_2 = (undefined4)(*param_1);
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 103a8f70; body size 20 bytes.
#line 1 "ENTRY_103a8f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103a8f70(undefined4 *param_2)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 103a9000; body size 28 bytes.
#line 1 "ENTRY_103a9000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103a9000(int *param_1)

{
  if ((uint)param_1[1] < 0x1f) {
    param_1[1] = (int)(param_1[1] + 1);
    return (int *)(param_1);
  }
  *param_1 = (int)(*param_1 + 4);
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 103a9030; body size 28 bytes.
#line 1 "ENTRY_103a9030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103a9030(int *param_1)

{
  if ((uint)param_1[1] < 0x1f) {
    param_1[1] = (int)(param_1[1] + 1);
    return (int *)(param_1);
  }
  *param_1 = (int)(*param_1 + 4);
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 103a9060; body size 6 bytes.
#line 1 "ENTRY_103a9060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a9060(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  return (int)(param_1);
}


// Reference entry 103a9070; body size 6 bytes.
#line 1 "ENTRY_103a9070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a9070(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  return (int)(param_1);
}


// Reference entry 103a9080; body size 6 bytes.
#line 1 "ENTRY_103a9080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a9080(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  return (int)(param_1);
}


// Reference entry 103a9090; body size 6 bytes.
#line 1 "ENTRY_103a9090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a9090(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  return (int)(param_1);
}


// Reference entry 103a90a0; body size 27 bytes.
#line 1 "ENTRY_103a90a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103a90a0(int *param_1)

{
  if (param_1[1] != 0) {
    param_1[1] = (int)(param_1[1] + -1);
    return (int *)(param_1);
  }
  *param_1 = (int)(*param_1 + -4);
  param_1[1] = (int)(0x1f);
  return (int *)(param_1);
}


// Reference entry 103a90d0; body size 27 bytes.
#line 1 "ENTRY_103a90d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103a90d0(int *param_1)

{
  if (param_1[1] != 0) {
    param_1[1] = (int)(param_1[1] + -1);
    return (int *)(param_1);
  }
  *param_1 = (int)(*param_1 + -4);
  param_1[1] = (int)(0x1f);
  return (int *)(param_1);
}


// Reference entry 103a9100; body size 23 bytes.
#line 1 "ENTRY_103a9100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103a9100(int *param_2)
{
  int *param_1 = (int *)this;
  return (int)(((*param_1 - *param_2 >> 2) * 0x20 - param_2[1]) + param_1[1]);
}


// Reference entry 103a9220; body size 18 bytes.
#line 1 "ENTRY_103a9220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103a9220(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 4);
  return;
}


// Reference entry 103a92d0; body size 14 bytes.
#line 1 "ENTRY_103a92d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a92d0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 4);
  return (int *)(param_1);
}


// Reference entry 103a92f0; body size 14 bytes.
#line 1 "ENTRY_103a92f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a92f0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 4);
  return (int *)(param_1);
}


// Reference entry 103a9310; body size 15 bytes.
#line 1 "ENTRY_103a9310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103a9310(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(-param_2);
  if ((iVar1 < 0) && ((uint)param_1[1] < param_2)) {
    uVar2 = (uint)(param_1[1] + iVar1);
    param_1[1] = (int)(uVar2);
    *param_1 = (int)(*param_1 + (~uVar2 >> 5) * -4 + -4);
    param_1[1] = (int)(uVar2 & 0x1f);
    return (int *)(param_1);
  }
  uVar2 = (uint)(param_1[1] + iVar1);
  param_1[1] = (int)(uVar2);
  *param_1 = (int)(*param_1 + (uVar2 >> 5) * 4);
  param_1[1] = (int)(uVar2 & 0x1f);
  return (int *)(param_1);
}


// Reference entry 103a9330; body size 21 bytes.
#line 1 "ENTRY_103a9330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_103a9330(int param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103a9240(-param_2);
  return (undefined4)(param_1);
}


// Reference entry 103aa020; body size 26 bytes.
#line 1 "ENTRY_103aa020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103aa020(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + ((uint)(param_1[1] + param_2) >> 5) * 4);
  param_1[1] = (int)(param_1[1] + param_2 & 0x1f);
  return;
}


// Reference entry 103aa040; body size 31 bytes.
#line 1 "ENTRY_103aa040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103aa040(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 103aa090; body size 14 bytes.
#line 1 "ENTRY_103aa090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103aa090(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 103aa0b0; body size 3 bytes.
#line 1 "ENTRY_103aa0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103aa0b0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 103aa0c0; body size 23 bytes.
#line 1 "ENTRY_103aa0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103aa0c0(int *param_1)

{
  if (param_1[1] != 0) {
    param_1[1] = (int)(param_1[1] + -1);
    return;
  }
  *param_1 = (int)(*param_1 + -4);
  param_1[1] = (int)(0x1f);
  return;
}


// Reference entry 103aa640; body size 3 bytes.
#line 1 "ENTRY_103aa640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa650; body size 3 bytes.
#line 1 "ENTRY_103aa650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa650(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa660; body size 3 bytes.
#line 1 "ENTRY_103aa660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa670; body size 3 bytes.
#line 1 "ENTRY_103aa670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa680; body size 3 bytes.
#line 1 "ENTRY_103aa680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa690; body size 3 bytes.
#line 1 "ENTRY_103aa690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa6a0; body size 3 bytes.
#line 1 "ENTRY_103aa6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa6b0; body size 3 bytes.
#line 1 "ENTRY_103aa6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa6c0; body size 3 bytes.
#line 1 "ENTRY_103aa6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa6d0; body size 3 bytes.
#line 1 "ENTRY_103aa6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa6e0; body size 3 bytes.
#line 1 "ENTRY_103aa6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa6f0; body size 3 bytes.
#line 1 "ENTRY_103aa6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa700; body size 3 bytes.
#line 1 "ENTRY_103aa700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa710; body size 3 bytes.
#line 1 "ENTRY_103aa710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa720; body size 3 bytes.
#line 1 "ENTRY_103aa720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa730; body size 3 bytes.
#line 1 "ENTRY_103aa730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa740; body size 3 bytes.
#line 1 "ENTRY_103aa740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa750; body size 3 bytes.
#line 1 "ENTRY_103aa750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa760; body size 3 bytes.
#line 1 "ENTRY_103aa760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa770; body size 15 bytes.
#line 1 "ENTRY_103aa770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103aa770(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 1);
}


// Reference entry 103aa790; body size 16 bytes.
#line 1 "ENTRY_103aa790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103aa790(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 2);
}


// Reference entry 103aa7b0; body size 15 bytes.
#line 1 "ENTRY_103aa7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103aa7b0(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 1);
}


// Reference entry 103aa7d0; body size 16 bytes.
#line 1 "ENTRY_103aa7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103aa7d0(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 2);
}


// Reference entry 103aa7f0; body size 3 bytes.
#line 1 "ENTRY_103aa7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa7f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa800; body size 3 bytes.
#line 1 "ENTRY_103aa800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa800(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103aac10; body size 24 bytes.
#line 1 "ENTRY_103aac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103aac10(int *param_1)

{
  if ((uint)param_1[1] < 0x1f) {
    param_1[1] = (int)(param_1[1] + 1);
    return;
  }
  *param_1 = (int)(*param_1 + 4);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 103ab3f0; body size 52 bytes.
#line 1 "ENTRY_103ab3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103ab3f0(int *param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1);
  param_2[1] = (int)(0);
  if (param_1[3] != 0) {
    thunk_FUN_103a9240((param_3 - *param_1 >> 2) * 0x20 + param_4);
  }
  return (int *)(param_2);
}


// Reference entry 103ab440; body size 4 bytes.
#line 1 "ENTRY_103ab440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab440(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 103ab450; body size 4 bytes.
#line 1 "ENTRY_103ab450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab450(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 103ab460; body size 4 bytes.
#line 1 "ENTRY_103ab460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab460(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 103ab470; body size 4 bytes.
#line 1 "ENTRY_103ab470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab470(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 103ab480; body size 11 bytes.
#line 1 "ENTRY_103ab480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab480(int param_1)

{
  return (int)(1 << ((byte)*(undefined4 *)(param_1 + 4) & 0x1f));
}


// Reference entry 103ab490; body size 30 bytes.
#line 1 "ENTRY_103ab490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103ab490(int param_1)

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


// Reference entry 103ab4f0; body size 4 bytes.
#line 1 "ENTRY_103ab4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab4f0(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 103ab500; body size 4 bytes.
#line 1 "ENTRY_103ab500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab500(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 103ab510; body size 4 bytes.
#line 1 "ENTRY_103ab510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab510(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 103ab520; body size 4 bytes.
#line 1 "ENTRY_103ab520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab520(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 103ab530; body size 4 bytes.
#line 1 "ENTRY_103ab530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab530(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 103ab540; body size 4 bytes.
#line 1 "ENTRY_103ab540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab540(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 103ab550; body size 11 bytes.
#line 1 "ENTRY_103ab550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_103ab550(int param_1)

{
  return (uint)(param_1 + 0x1fU >> 5);
}


// Reference entry 103ab560; body size 3 bytes.
#line 1 "ENTRY_103ab560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ab560(void)

{
  return;
}


// Reference entry 103ab570; body size 3 bytes.
#line 1 "ENTRY_103ab570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ab570(void)

{
  return;
}


// Reference entry 103ab580; body size 3 bytes.
#line 1 "ENTRY_103ab580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ab580(void)

{
  return;
}


// Reference entry 103ab590; body size 3 bytes.
#line 1 "ENTRY_103ab590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103ab590(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 103ab5a0; body size 11 bytes.
#line 1 "ENTRY_103ab5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103ab5a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103ab5b0; body size 6 bytes.
#line 1 "ENTRY_103ab5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103ab5b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 103ab9c0; body size 13 bytes.
#line 1 "ENTRY_103ab9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103ab9c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103ab9d0; body size 18 bytes.
#line 1 "ENTRY_103ab9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103ab9d0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10));
  iVar2 = (int)(*(int *)(param_1 + 0xc));
  *param_2 = (int)(param_1);
  param_2[1] = (int)(iVar1 + iVar2);
  return;
}


// Reference entry 103ab9f0; body size 18 bytes.
#line 1 "ENTRY_103ab9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103ab9f0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10));
  iVar2 = (int)(*(int *)(param_1 + 0xc));
  *param_2 = (int)(param_1);
  param_2[1] = (int)(iVar1 + iVar2);
  return;
}


// Reference entry 103aba10; body size 3 bytes.
#line 1 "ENTRY_103aba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103aba10(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 103abd90; body size 87 bytes.
#line 1 "ENTRY_103abd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103abd90(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
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


// Reference entry 103abe00; body size 87 bytes.
#line 1 "ENTRY_103abe00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103abe00(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
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


// Reference entry 103abe70; body size 97 bytes.
#line 1 "ENTRY_103abe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103abe70(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x924924a) {
    param_1 = (uint)(param_1 * 0x1c);
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


// Reference entry 103abef0; body size 87 bytes.
#line 1 "ENTRY_103abef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103abef0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x20000000) {
    param_1 = (uint)(param_1 * 8);
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


// Reference entry 103abf60; body size 87 bytes.
#line 1 "ENTRY_103abf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103abf60(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x20000000) {
    param_1 = (uint)(param_1 * 8);
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


// Reference entry 103ac050; body size 7 bytes.
#line 1 "ENTRY_103ac050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ac050(int param_1)

{
  return (int)(*(int *)(param_1 + 4) + -4);
}


// Reference entry 103ac0f0; body size 11 bytes.
#line 1 "ENTRY_103ac0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103ac0f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103ac100; body size 18 bytes.
#line 1 "ENTRY_103ac100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103ac100(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 103b6820; body size 3 bytes.
#line 1 "ENTRY_103b6820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103b6820(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103b6830; body size 63 bytes.
#line 1 "ENTRY_103b6830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103b6830(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x1c);
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


// Reference entry 103b6880; body size 58 bytes.
#line 1 "ENTRY_103b6880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103b6880(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 8);
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


// Reference entry 103b68d0; body size 61 bytes.
#line 1 "ENTRY_103b68d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103b68d0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 4);
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


// Reference entry 103b6920; body size 61 bytes.
#line 1 "ENTRY_103b6920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103b6920(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 4);
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


// Reference entry 103b6970; body size 66 bytes.
#line 1 "ENTRY_103b6970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103b6970(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x1c);
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


// Reference entry 103b69d0; body size 61 bytes.
#line 1 "ENTRY_103b69d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103b69d0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 8);
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


// Reference entry 103b6a20; body size 9 bytes.
#line 1 "ENTRY_103b6a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103b6a20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103b6a30; body size 9 bytes.
#line 1 "ENTRY_103b6a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103b6a30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103b6ab0; body size 8 bytes.
#line 1 "ENTRY_103b6ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b6ab0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 103b6ac0; body size 8 bytes.
#line 1 "ENTRY_103b6ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b6ac0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 103b6ad0; body size 8 bytes.
#line 1 "ENTRY_103b6ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b6ad0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 103b6ae0; body size 8 bytes.
#line 1 "ENTRY_103b6ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b6ae0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0xc) == 0);
}


// Reference entry 103b6af0; body size 11 bytes.
#line 1 "ENTRY_103b6af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103b6af0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103b6b00; body size 12 bytes.
#line 1 "ENTRY_103b6b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103b6b00(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 103b6de0; body size 51 bytes.
#line 1 "ENTRY_103b6de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103b6de0(undefined4 *param_2,void *param_3,void *param_4)
{
  int param_1 = (int )this;
  size_t _Size;
  
  if ((void *)(param_3) != (void *)(param_4)) {
    _Size = (size_t)(*(int *)(param_1 + 4) - (int)param_4);
    memmove(param_3,param_4,_Size);
    *(size_t*)(param_1 + 4) = (size_t)((int)param_3 + _Size);
  }
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 103b78b0; body size 7 bytes.
#line 1 "ENTRY_103b78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103b78b0(int param_1)

{
  return (int)(param_1 + 0x8d);
}


// Reference entry 103b8650; body size 4 bytes.
#line 1 "ENTRY_103b8650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103b8650(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x70));
}


// Reference entry 103b8670; body size 30 bytes.
#line 1 "ENTRY_103b8670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_103b8670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_103aac30(param_1,param_2,param_3,1,param_4);
  return (undefined4)(param_1);
}


// Reference entry 103b8b60; body size 6 bytes.
#line 1 "ENTRY_103b8b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103b8b60(void)

{
  return (char *)("SCIBrowseStackManager");
}


// Reference entry 103b8b70; body size 6 bytes.
#line 1 "ENTRY_103b8b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103b8b70(void)

{
  return (char *)("SCIStackedItemImpl");
}


// Reference entry 103b8d80; body size 8 bytes.
#line 1 "ENTRY_103b8d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b8d80(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 103b9190; body size 10 bytes.
#line 1 "ENTRY_103b9190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103b9190(uint *param_1)

{
  return (uint)(((uint)((uint3)(*param_1 >> 0x11)) << 8 | (uint)(~(byte)(*param_1 >> 9))) & 0xffffff01);
}


// Reference entry 103b91b0; body size 40 bytes.
#line 1 "ENTRY_103b91b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_103b91b0(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->beginsWith("searchresults"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->beginsWith("searchaggregate"));
    if (!bVar1) {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 103b93d0; body size 8 bytes.
#line 1 "ENTRY_103b93d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_103b93d0(uint *param_1)

{
  return (uint)(*param_1 >> 10 & 0xffffff01);
}


// Reference entry 103b9420; body size 6 bytes.
#line 1 "ENTRY_103b9420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9420(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 103b9430; body size 6 bytes.
#line 1 "ENTRY_103b9430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9430(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 103b9440; body size 6 bytes.
#line 1 "ENTRY_103b9440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9440(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 103b9450; body size 6 bytes.
#line 1 "ENTRY_103b9450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9450(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 103b9460; body size 6 bytes.
#line 1 "ENTRY_103b9460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9460(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 103b9470; body size 6 bytes.
#line 1 "ENTRY_103b9470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9470(void)

{
  return (undefined4)(0x7fffffff);
}


// Reference entry 103bbe50; body size 5 bytes.
#line 1 "ENTRY_103bbe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bbe50(int param_1)

{
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar3 = (uint)(DAT_12126b84);

  iVar4 = (int)(*(int *)(param_1 + 0x10));
  uVar5 = (uint)(*(int *)(param_1 + 0xc) + -1 + iVar4);
  uVar6 = (uint)(uVar5 & 1);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & uVar5 >> 1) * 4));
  piVar2 = (int *)(*(int **)(iVar1 + 4 + uVar6 * 8));

  if ((int *)(piVar2) != (int *)0x0) {
    *(undefined4*)(iVar1 + uVar6 * 8) = (undefined4)(0);
    *(undefined4*)(iVar1 + 4 + uVar6 * 8) = (undefined4)(0);
    (**(code **)(*piVar2 + 8))(uVar3);
    iVar4 = (int)(*(int *)(param_1 + 0x10));
  }
  *(int*)(param_1 + 0x10) = (int)(iVar4 + -1);
  if (iVar4 + -1 == 0) {
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 103bbf00; body size 5 bytes.
#line 1 "ENTRY_103bbf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bbf00(int param_1)

{
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar3 = (uint)(DAT_12126b84);

  iVar4 = (int)(*(int *)(param_1 + 0x10));
  uVar5 = (uint)(*(int *)(param_1 + 0xc) + -1 + iVar4);
  uVar6 = (uint)(uVar5 & 1);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & uVar5 >> 1) * 4));
  piVar2 = (int *)(*(int **)(iVar1 + 4 + uVar6 * 8));

  if ((int *)(piVar2) != (int *)0x0) {
    *(undefined4*)(iVar1 + uVar6 * 8) = (undefined4)(0);
    *(undefined4*)(iVar1 + 4 + uVar6 * 8) = (undefined4)(0);
    (**(code **)(*piVar2 + 8))(uVar3);
    iVar4 = (int)(*(int *)(param_1 + 0x10));
  }
  *(int*)(param_1 + 0x10) = (int)(iVar4 + -1);
  if (iVar4 + -1 == 0) {
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 103bc700; body size 3 bytes.
#line 1 "ENTRY_103bc700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bc700(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103bc710; body size 3 bytes.
#line 1 "ENTRY_103bc710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bc710(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103bc720; body size 3 bytes.
#line 1 "ENTRY_103bc720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bc720(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103bc730; body size 3 bytes.
#line 1 "ENTRY_103bc730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bc730(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103bcf10; body size 73 bytes.
#line 1 "ENTRY_103bcf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103bcf10(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  undefined1 auStack_8 [8];
  
  uVar2 = (uint)(param_1[3]);
  if (((int)uVar2 < 0) && (uVar2 != 0)) {
    iVar1 = (int)(-((~uVar2 >> 5) * 4 + 4));
  }
  else {
    iVar1 = (int)((uVar2 >> 5) * 4);
  }
  thunk_FUN_103aac30(auStack_8,*param_1 + iVar1,uVar2 & 0x1f,1,param_2);
  return;
}


// Reference entry 103bd3a0; body size 28 bytes.
#line 1 "ENTRY_103bd3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd3a0(undefined4 *param_1)

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


// Reference entry 103bd3d0; body size 28 bytes.
#line 1 "ENTRY_103bd3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd3d0(undefined4 *param_1)

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


// Reference entry 103bd400; body size 28 bytes.
#line 1 "ENTRY_103bd400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd400(undefined4 *param_1)

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


// Reference entry 103bd430; body size 28 bytes.
#line 1 "ENTRY_103bd430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd430(undefined4 *param_1)

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


// Reference entry 103bd460; body size 28 bytes.
#line 1 "ENTRY_103bd460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd460(undefined4 *param_1)

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


// Reference entry 103bd490; body size 28 bytes.
#line 1 "ENTRY_103bd490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd490(undefined4 *param_1)

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


// Reference entry 103bd4c0; body size 20 bytes.
#line 1 "ENTRY_103bd4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd4c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 103bdd40; body size 4 bytes.
#line 1 "ENTRY_103bdd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd50; body size 4 bytes.
#line 1 "ENTRY_103bdd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd60; body size 4 bytes.
#line 1 "ENTRY_103bdd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd70; body size 4 bytes.
#line 1 "ENTRY_103bdd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd80; body size 4 bytes.
#line 1 "ENTRY_103bdd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd90; body size 4 bytes.
#line 1 "ENTRY_103bdd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdda0; body size 4 bytes.
#line 1 "ENTRY_103bdda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdda0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 103bdfb0; body size 21 bytes.
#line 1 "ENTRY_103bdfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103bdfb0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 103be2f0; body size 21 bytes.
#line 1 "ENTRY_103be2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103be2f0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 100))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 103be310; body size 39 bytes.
#line 1 "ENTRY_103be310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103be310(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_1[2] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103be340; body size 5 bytes.
#line 1 "ENTRY_103be340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103be340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103be4f0; body size 6 bytes.
#line 1 "ENTRY_103be4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103be4f0(void)

{
  return (char *)("SCIEnumerator");
}


// Reference entry 103be500; body size 27 bytes.
#line 1 "ENTRY_103be500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103be500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 103be740; body size 9 bytes.
#line 1 "ENTRY_103be740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103be740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIEnumerator);
  return (undefined4 *)(param_1);
}


// Reference entry 103be870; body size 7 bytes.
#line 1 "ENTRY_103be870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103be870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103be880; body size 12 bytes.
#line 1 "ENTRY_103be880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103be880(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 103be890; body size 7 bytes.
#line 1 "ENTRY_103be890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103be890(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 103be8a0; body size 3 bytes.
#line 1 "ENTRY_103be8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103be8a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103be9d0; body size 13 bytes.
#line 1 "ENTRY_103be9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103be9d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 103bec20; body size 13 bytes.
#line 1 "ENTRY_103bec20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103bec20(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 8);
}


// Reference entry 103bf210; body size 6 bytes.
#line 1 "ENTRY_103bf210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103bf210(void)

{
  return (char *)("SCIEnumerator");
}


// Reference entry 103bf380; body size 10 bytes.
#line 1 "ENTRY_103bf380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103bf380(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3);
}


// Reference entry 103bf390; body size 9 bytes.
#line 1 "ENTRY_103bf390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103bf390(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 103bf3d0; body size 41 bytes.
#line 1 "ENTRY_103bf3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103bf3d0(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(*(int *)(*(int *)(param_1 + 0xc) + 0xc));
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0xc) + 8) + param_3 * 8);
  thunk_FUN_102e8bc0(iVar1,iVar2,iVar2 - iVar1 >> 3,param_2);
  return;
}


// Reference entry 103bf410; body size 18 bytes.
#line 1 "ENTRY_103bf410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103bf410(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103bf430; body size 22 bytes.
#line 1 "ENTRY_103bf430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103bf430(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103bf450; body size 22 bytes.
#line 1 "ENTRY_103bf450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103bf450(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103bf470; body size 18 bytes.
#line 1 "ENTRY_103bf470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103bf470(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103bf5c0; body size 63 bytes.
#line 1 "ENTRY_103bf5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103bf5c0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 103bf610; body size 22 bytes.
#line 1 "ENTRY_103bf610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103bf610(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103bf670; body size 65 bytes.
#line 1 "ENTRY_103bf670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103bf670(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 103bf6d0; body size 78 bytes.
#line 1 "ENTRY_103bf6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103bf6d0(int *param_2)
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


// Reference entry 103bf740; body size 3 bytes.
#line 1 "ENTRY_103bf740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf740(void)

{
  return;
}


// Reference entry 103bf750; body size 25 bytes.
#line 1 "ENTRY_103bf750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf750(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x38));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 103bf790; body size 13 bytes.
#line 1 "ENTRY_103bf790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf790(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103bf7a0; body size 13 bytes.
#line 1 "ENTRY_103bf7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf7a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103bf7b0; body size 3 bytes.
#line 1 "ENTRY_103bf7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf7b0(void)

{
  return;
}


// Reference entry 103bfa40; body size 15 bytes.
#line 1 "ENTRY_103bfa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bfa40(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x38);
  return;
}


// Reference entry 103bfae0; body size 29 bytes.
#line 1 "ENTRY_103bfae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103bfae0(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x4924925) {
    return (int)(param_1 * 0x38);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 103bfb10; body size 5 bytes.
#line 1 "ENTRY_103bfb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfb10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103bfb20; body size 5 bytes.
#line 1 "ENTRY_103bfb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfb20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103bfb30; body size 37 bytes.
#line 1 "ENTRY_103bfb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfb30(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 103bfd00; body size 5 bytes.
#line 1 "ENTRY_103bfd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfd00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103bfd20; body size 5 bytes.
#line 1 "ENTRY_103bfd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfd20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103bfd30; body size 5 bytes.
#line 1 "ENTRY_103bfd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfd30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103bfd40; body size 93 bytes.
#line 1 "ENTRY_103bfd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103bfd40(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  (**(code **)(*param_1 + 4))();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)0x0) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[2] = (int)(iVar3);
    return (int)(param_1[1]);
  }
  param_1[2] = (int)(0);
  return (int)(0);
}


// Reference entry 103bfdc0; body size 130 bytes.
#line 1 "ENTRY_103bfdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103bfdc0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  (**(code **)(*param_1 + 4))();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)0x0) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)0x0) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)((0x0))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 103bfe70; body size 130 bytes.
#line 1 "ENTRY_103bfe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103bfe70(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  (**(code **)(*param_1 + 4))();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)0x0) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)0x0) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)((0x0))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 103bff20; body size 76 bytes.
#line 1 "ENTRY_103bff20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bff20(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x24) = (undefined4)(0);
  return;
}


// Reference entry 103bfff0; body size 86 bytes.
#line 1 "ENTRY_103bfff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103bfff0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)(0);
  while ((int *)(param_1) != (int *)(param_2)) {
    piVar2 = (int *)((int *)param_1[2]);
    iVar4 = (int)(iVar4 + 1);
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar2 + 0xd));
      param_1 = (int *)(piVar2);
      piVar2 = (int *)((int *)*piVar2);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar2 + 0xd));
        param_1 = (int *)(piVar2);
        piVar2 = (int *)((int *)*piVar2);
      }
    }
    else {
      cVar1 = (char)(*(char *)(param_1[1] + 0xd));
      piVar3 = (int *)((int *)param_1[1]);
      piVar2 = (int *)(param_1);
      while ((param_1 = piVar3, cVar1 == '\0' && ((int *)(piVar2) == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (int)(iVar4);
}


// Reference entry 103c0110; body size 15 bytes.
#line 1 "ENTRY_103c0110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0110(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103c0130; body size 15 bytes.
#line 1 "ENTRY_103c0130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0130(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103c0150; body size 5 bytes.
#line 1 "ENTRY_103c0150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c0160; body size 5 bytes.
#line 1 "ENTRY_103c0160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c0180; body size 5 bytes.
#line 1 "ENTRY_103c0180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c0190; body size 5 bytes.
#line 1 "ENTRY_103c0190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c01b0; body size 5 bytes.
#line 1 "ENTRY_103c01b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c01b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c01c0; body size 5 bytes.
#line 1 "ENTRY_103c01c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c01c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c01d0; body size 6 bytes.
#line 1 "ENTRY_103c01d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103c01d0(void)

{
  return (char *)("SCITokenManager");
}


// Reference entry 103c0220; body size 28 bytes.
#line 1 "ENTRY_103c0220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0220(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0370; body size 27 bytes.
#line 1 "ENTRY_103c0370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 103c03a0; body size 95 bytes.
#line 1 "ENTRY_103c03a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103c03a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10708df0());
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xc))(param_2,param_3,param_4));
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 103c06e0; body size 70 bytes.
#line 1 "ENTRY_103c06e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c06e0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0xf] = (undefined4)(0);
  param_1[0x19] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0740; body size 70 bytes.
#line 1 "ENTRY_103c0740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0740(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0xf] = (undefined4)(0);
  param_1[0x19] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c07a0; body size 16 bytes.
#line 1 "ENTRY_103c07a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c07a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c07c0; body size 16 bytes.
#line 1 "ENTRY_103c07c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c07c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0820; body size 32 bytes.
#line 1 "ENTRY_103c0820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103c0820(undefined4 *param_2)
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


// Reference entry 103c0850; body size 16 bytes.
#line 1 "ENTRY_103c0850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0850(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c08f0; body size 16 bytes.
#line 1 "ENTRY_103c08f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c08f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0910; body size 18 bytes.
#line 1 "ENTRY_103c0910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103c0910(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0930; body size 3 bytes.
#line 1 "ENTRY_103c0930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c0930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c0940; body size 10 bytes.
#line 1 "ENTRY_103c0940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0940(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103c0950; body size 10 bytes.
#line 1 "ENTRY_103c0950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0950(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103c0960; body size 10 bytes.
#line 1 "ENTRY_103c0960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0960(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103c0a30; body size 11 bytes.
#line 1 "ENTRY_103c0a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103c0a30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0a40; body size 16 bytes.
#line 1 "ENTRY_103c0a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0a40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0a60; body size 3 bytes.
#line 1 "ENTRY_103c0a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c0a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c0a70; body size 12 bytes.
#line 1 "ENTRY_103c0a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0a70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103c0b00; body size 12 bytes.
#line 1 "ENTRY_103c0b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0b00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103c0b90; body size 52 bytes.
#line 1 "ENTRY_103c0b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0b90(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x38));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0e30; body size 57 bytes.
#line 1 "ENTRY_103c0e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103c0e30(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *(undefined1*)((int)param_1 + 0x12) = (undefined1)(param_2);
  *(undefined2*)(param_1 + 4) = (undefined2)(1);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c1270; body size 42 bytes.
#line 1 "ENTRY_103c1270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103c1270(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSinkDelegateInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 103c12b0; body size 9 bytes.
#line 1 "ENTRY_103c12b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c12b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITokenManager);
  return (undefined4 *)(param_1);
}


// Reference entry 103c1d90; body size 36 bytes.
#line 1 "ENTRY_103c1d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c1d90(int param_1)

{
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103c1dc0; body size 11 bytes.
#line 1 "ENTRY_103c1dc0"

/* WARNING: Removing unreachable block_103c1dc0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c1dc0(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 103c1df0; body size 53 bytes.
#line 1 "ENTRY_103c1df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c1df0(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)((0x0))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)0x0) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)0x0) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)0x0) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)0x0) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 103c2d90; body size 19 bytes.
#line 1 "ENTRY_103c2d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c2d90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103c2db0; body size 7 bytes.
#line 1 "ENTRY_103c2db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c2db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103c2df0; body size 18 bytes.
#line 1 "ENTRY_103c2df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c2df0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpFetchToken);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpFetchToken);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)0x0) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
  }
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObj);

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 103c3400; body size 65 bytes.
#line 1 "ENTRY_103c3400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103c3400(int *param_2)
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


// Reference entry 103c34c0; body size 14 bytes.
#line 1 "ENTRY_103c34c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103c34c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 103c34e0; body size 14 bytes.
#line 1 "ENTRY_103c34e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103c34e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 103c3650; body size 4 bytes.
#line 1 "ENTRY_103c3650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c3650(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c3660; body size 3 bytes.
#line 1 "ENTRY_103c3660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c3660(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103c3670; body size 8 bytes.
#line 1 "ENTRY_103c3670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c3670(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103c3680; body size 8 bytes.
#line 1 "ENTRY_103c3680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c3680(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103c3690; body size 4 bytes.
#line 1 "ENTRY_103c3690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c3690(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c36a0; body size 4 bytes.
#line 1 "ENTRY_103c36a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c36b0; body size 4 bytes.
#line 1 "ENTRY_103c36b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c36c0; body size 4 bytes.
#line 1 "ENTRY_103c36c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c36d0; body size 3 bytes.
#line 1 "ENTRY_103c36d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103c36e0; body size 3 bytes.
#line 1 "ENTRY_103c36e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103c3700; body size 20 bytes.
#line 1 "ENTRY_103c3700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103c3700(undefined4 *param_2)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 103c41f0; body size 31 bytes.
#line 1 "ENTRY_103c41f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c41f0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x38));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 103c4240; body size 14 bytes.
#line 1 "ENTRY_103c4240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c4240(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x4924924) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 103c42c0; body size 8 bytes.
#line 1 "ENTRY_103c42c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c42c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103c42d0; body size 8 bytes.
#line 1 "ENTRY_103c42d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c42d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103c42e0; body size 8 bytes.
#line 1 "ENTRY_103c42e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c42e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103c4820; body size 3 bytes.
#line 1 "ENTRY_103c4820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4830; body size 3 bytes.
#line 1 "ENTRY_103c4830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4840; body size 3 bytes.
#line 1 "ENTRY_103c4840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4850; body size 3 bytes.
#line 1 "ENTRY_103c4850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4860; body size 3 bytes.
#line 1 "ENTRY_103c4860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4870; body size 3 bytes.
#line 1 "ENTRY_103c4870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4880; body size 3 bytes.
#line 1 "ENTRY_103c4880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4890; body size 4 bytes.
#line 1 "ENTRY_103c4890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4890(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103c48a0; body size 4 bytes.
#line 1 "ENTRY_103c48a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c48a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103c48b0; body size 4 bytes.
#line 1 "ENTRY_103c48b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c48b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103c4b50; body size 7 bytes.
#line 1 "ENTRY_103c4b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c4b50(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 103c4b60; body size 7 bytes.
#line 1 "ENTRY_103c4b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c4b60(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 103c4b70; body size 7 bytes.
#line 1 "ENTRY_103c4b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c4b70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 103c4bf0; body size 30 bytes.
#line 1 "ENTRY_103c4bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103c4bf0(int param_1)

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


// Reference entry 103c4c40; body size 3 bytes.
#line 1 "ENTRY_103c4c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103c4c40(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 103c4c50; body size 11 bytes.
#line 1 "ENTRY_103c4c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4c50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103c4c60; body size 26 bytes.
#line 1 "ENTRY_103c4c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4c60(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 103c4c80; body size 26 bytes.
#line 1 "ENTRY_103c4c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4c80(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 103c4d10; body size 10 bytes.
#line 1 "ENTRY_103c4d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4d10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 103c4d20; body size 10 bytes.
#line 1 "ENTRY_103c4d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4d20(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 103c4d30; body size 10 bytes.
#line 1 "ENTRY_103c4d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4d30(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 103c4de0; body size 13 bytes.
#line 1 "ENTRY_103c4de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4de0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103c4df0; body size 11 bytes.
#line 1 "ENTRY_103c4df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103c4df0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103c6550; body size 97 bytes.
#line 1 "ENTRY_103c6550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103c6550(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x4924925) {
    param_1 = (uint)(param_1 * 0x38);
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


// Reference entry 103c7250; body size 59 bytes.
#line 1 "ENTRY_103c7250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c7250(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint uVar1;
  
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x6218));
  uVar1 = (uint)(((SCStr *)(param_1 + 0x6218))->length());
  *(uint*)(param_1 + 0x6210) = (uint)(uVar1);
  return;
}


// Reference entry 103c72a0; body size 56 bytes.
#line 1 "ENTRY_103c72a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c72a0(SCStr *param_1)

{
  uint uVar1;
  
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x6218));
  uVar1 = (uint)(((SCStr *)(param_1 + 0x6218))->length());
  *(uint*)(param_1 + 0x6210) = (uint)(uVar1);
  return;
}


// Reference entry 103c72f0; body size 63 bytes.
#line 1 "ENTRY_103c72f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103c72f0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x38);
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


// Reference entry 103c7340; body size 66 bytes.
#line 1 "ENTRY_103c7340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103c7340(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x38);
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


// Reference entry 103c73a0; body size 7 bytes.
#line 1 "ENTRY_103c73a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103c73a0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x88));
}


// Reference entry 103c73b0; body size 10 bytes.
#line 1 "ENTRY_103c73b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c73b0(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x18) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x18) + 0x88))));
}


// Reference entry 103c8170; body size 7 bytes.
#line 1 "ENTRY_103c8170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8170(int param_1)

{
  return (int)(param_1 + 0x6224);
}


// Reference entry 103c8180; body size 7 bytes.
#line 1 "ENTRY_103c8180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8180(int param_1)

{
  return (int)(param_1 + 0x6238);
}


// Reference entry 103c81b0; body size 23 bytes.
#line 1 "ENTRY_103c81b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103c81b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x6684));
  return (SCStr *)(param_2);
}


// Reference entry 103c81d0; body size 7 bytes.
#line 1 "ENTRY_103c81d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c81d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x100));
}


// Reference entry 103c81e0; body size 7 bytes.
#line 1 "ENTRY_103c81e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c81e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6638));
}


// Reference entry 103c81f0; body size 7 bytes.
#line 1 "ENTRY_103c81f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c81f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6230));
}


// Reference entry 103c8200; body size 7 bytes.
#line 1 "ENTRY_103c8200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8200(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6278));
}


// Reference entry 103c8210; body size 7 bytes.
#line 1 "ENTRY_103c8210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8210(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6680));
}


// Reference entry 103c8220; body size 10 bytes.
#line 1 "ENTRY_103c8220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8220(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x448c));
}


// Reference entry 103c8230; body size 10 bytes.
#line 1 "ENTRY_103c8230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8230(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x448c));
}


// Reference entry 103c8260; body size 4 bytes.
#line 1 "ENTRY_103c8260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8260(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c8270; body size 4 bytes.
#line 1 "ENTRY_103c8270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8270(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c8280; body size 7 bytes.
#line 1 "ENTRY_103c8280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8280(int param_1)

{
  return (int)(param_1 + 0x6630);
}


// Reference entry 103c8290; body size 23 bytes.
#line 1 "ENTRY_103c8290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103c8290(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x6678));
  return (SCStr *)(param_2);
}


// Reference entry 103c8300; body size 7 bytes.
#line 1 "ENTRY_103c8300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8300(int param_1)

{
  return (int)(param_1 + 0x6634);
}


// Reference entry 103c8310; body size 7 bytes.
#line 1 "ENTRY_103c8310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8310(int param_1)

{
  return (int)(param_1 + 0x622c);
}


// Reference entry 103c8320; body size 23 bytes.
#line 1 "ENTRY_103c8320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103c8320(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x6274));
  return (SCStr *)(param_2);
}


// Reference entry 103c8340; body size 23 bytes.
#line 1 "ENTRY_103c8340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103c8340(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x667c));
  return (SCStr *)(param_2);
}


// Reference entry 103c8720; body size 4 bytes.
#line 1 "ENTRY_103c8720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8720(int param_1)

{
  return (int)(param_1 + 100);
}


// Reference entry 103c8730; body size 7 bytes.
#line 1 "ENTRY_103c8730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8730(int param_1)

{
  return (int)(param_1 + 0x662c);
}


// Reference entry 103c8740; body size 7 bytes.
#line 1 "ENTRY_103c8740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8740(int param_1)

{
  return (int)(param_1 + 0x6224);
}


// Reference entry 103c8750; body size 23 bytes.
#line 1 "ENTRY_103c8750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103c8750(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x626c));
  return (SCStr *)(param_2);
}


// Reference entry 103c8770; body size 23 bytes.
#line 1 "ENTRY_103c8770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103c8770(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 100));
  return (SCStr *)(param_2);
}


// Reference entry 103c8790; body size 23 bytes.
#line 1 "ENTRY_103c8790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103c8790(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x6674));
  return (SCStr *)(param_2);
}


// Reference entry 103c8b40; body size 5 bytes.
#line 1 "ENTRY_103c8b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8b40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 103c9390; body size 6 bytes.
#line 1 "ENTRY_103c9390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103c9390(void)

{
  return (char *)("SCITokenManager");
}


// Reference entry 103c93a0; body size 7 bytes.
#line 1 "ENTRY_103c93a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c93a0(int *param_1)

{
  return (bool)(*param_1 == 0);
}


// Reference entry 103ca170; body size 6 bytes.
#line 1 "ENTRY_103ca170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ca170(void)

{
  return (undefined4)(0x4924924);
}


// Reference entry 103ca180; body size 6 bytes.
#line 1 "ENTRY_103ca180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ca180(void)

{
  return (undefined4)(0x4924924);
}


// Reference entry 103ca9c0; body size 3 bytes.
#line 1 "ENTRY_103ca9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103ca9c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103cb270; body size 28 bytes.
#line 1 "ENTRY_103cb270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb270(undefined4 *param_1)

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


// Reference entry 103cb2a0; body size 28 bytes.
#line 1 "ENTRY_103cb2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb2a0(undefined4 *param_1)

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


// Reference entry 103cb2d0; body size 28 bytes.
#line 1 "ENTRY_103cb2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb2d0(undefined4 *param_1)

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


// Reference entry 103cb300; body size 28 bytes.
#line 1 "ENTRY_103cb300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb300(undefined4 *param_1)

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


// Reference entry 103cb330; body size 28 bytes.
#line 1 "ENTRY_103cb330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb330(undefined4 *param_1)

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


// Reference entry 103cbed0; body size 12 bytes.
#line 1 "ENTRY_103cbed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103cbed0(undefined4 param_1)

{
  DAT_121195a8 = (int)(param_1);
  return;
}


// Reference entry 103cbee0; body size 59 bytes.
#line 1 "ENTRY_103cbee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cbee0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint uVar1;
  
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x6218));
  uVar1 = (uint)(((SCStr *)(param_1 + 0x6218))->length());
  *(uint*)(param_1 + 0x6210) = (uint)(uVar1);
  return;
}


// Reference entry 103cc1e0; body size 9 bytes.
#line 1 "ENTRY_103cc1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cc1e0(int param_1)

{
                    
                    
  (**(code **)(*(int *)(param_1 + 0x28) + 8))();
  return;
}


// Reference entry 103cc5b0; body size 28 bytes.
#line 1 "ENTRY_103cc5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103cc5b0(int *param_2)
{
  int param_1 = (int )this;
  uint in_EAX;
  uint uVar1;
  
  if ((int *)(param_2) != (int *)0x0) {
    uVar1 = (uint)((**(code **)(*param_2 + 0x14))(*(undefined4 *)(param_1 + 4)));
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 103cc600; body size 28 bytes.
#line 1 "ENTRY_103cc600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_103cc600(int *param_2)
{
  int param_1 = (int )this;
  uint in_EAX;
  uint uVar1;
  
  if ((int *)(param_2) != (int *)0x0) {
    uVar1 = (uint)((**(code **)(*param_2 + 0x18))(*(undefined4 *)(param_1 + 4)));
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 103cc8d0; body size 51 bytes.
#line 1 "ENTRY_103cc8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_103cc8d0(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  uint3 uVar3;
  int iVar4;
  __time64_t _Var5;
  
  _Var5 = (__time64_t)(_time64((__time64_t *)0x0));
  uVar1 = (uint)((uint)_Var5 + param_2);
  uVar2 = (uint)(uVar1 + 0x78);
  iVar4 = (int)((int)((ulonglong)_Var5 >> 0x20) + (uint)((uint)((uint)_Var5) + (uint)(param_2) < (uint)((uint)_Var5)) +
          (uint)(0xffffff87 < uVar1));
  uVar3 = (uint3)((uint3)(uVar2 >> 8));
  if (((int)(iVar4) <= *(int *)(param_1 + 0x54)) &&
     ((iVar4 < *(int *)(param_1 + 0x54) || (uVar2 < *(uint *)(param_1 + 0x50))))) {
    return (int)(((uint)(uVar3) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar3 << 8);
}


// Reference entry 103cca10; body size 31 bytes.
#line 1 "ENTRY_103cca10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103cca10(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 103cca40; body size 18 bytes.
#line 1 "ENTRY_103cca40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cca40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103cca60; body size 25 bytes.
#line 1 "ENTRY_103cca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cca60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103cca80; body size 22 bytes.
#line 1 "ENTRY_103cca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cca80(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccaa0; body size 22 bytes.
#line 1 "ENTRY_103ccaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103ccaa0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccac0; body size 22 bytes.
#line 1 "ENTRY_103ccac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103ccac0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccae0; body size 18 bytes.
#line 1 "ENTRY_103ccae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccae0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccdb0; body size 31 bytes.
#line 1 "ENTRY_103ccdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103ccdb0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 103ccde0; body size 73 bytes.
#line 1 "ENTRY_103ccde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103ccde0(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 103cce40; body size 22 bytes.
#line 1 "ENTRY_103cce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cce40(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103cce60; body size 22 bytes.
#line 1 "ENTRY_103cce60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cce60(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103cce80; body size 18 bytes.
#line 1 "ENTRY_103cce80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cce80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccea0; body size 18 bytes.
#line 1 "ENTRY_103ccea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccea0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccec0; body size 18 bytes.
#line 1 "ENTRY_103ccec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccec0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccee0; body size 18 bytes.
#line 1 "ENTRY_103ccee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccee0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccfa0; body size 18 bytes.
#line 1 "ENTRY_103ccfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccfa0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103cd200; body size 33 bytes.
#line 1 "ENTRY_103cd200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103cd200(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 103cd230; body size 33 bytes.
#line 1 "ENTRY_103cd230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103cd230(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 103cd260; body size 75 bytes.
#line 1 "ENTRY_103cd260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103cd260(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 103cd2c0; body size 78 bytes.
#line 1 "ENTRY_103cd2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103cd2c0(int *param_2)
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


// Reference entry 103cd330; body size 3 bytes.
#line 1 "ENTRY_103cd330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd330(void)

{
  return;
}


// Reference entry 103cd340; body size 25 bytes.
#line 1 "ENTRY_103cd340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd340(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 103cd820; body size 13 bytes.
#line 1 "ENTRY_103cd820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd820(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103cd830; body size 13 bytes.
#line 1 "ENTRY_103cd830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd830(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103cd840; body size 13 bytes.
#line 1 "ENTRY_103cd840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd840(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103cd8e0; body size 113 bytes.
#line 1 "ENTRY_103cd8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103cd8e0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_103cdb40(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
  *(undefined4*)(*param_1 + 4) = (undefined4)(uVar7);
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = (int)(param_2[1]);
  piVar3 = (int *)((int *)piVar2[1]);
  if (*(char *)((int)piVar3 + 0xd) != '\0') {
    *piVar2 = (int)((int)piVar2);
    *(int*)(*param_1 + 8) = (int)(*param_1);
    return;
  }
  cVar1 = (char)(*(char *)(*piVar3 + 0xd));
  piVar6 = (int *)((int *)*piVar3);
  while (cVar1 == '\0') {
    cVar1 = (char)(*(char *)(*piVar6 + 0xd));
    piVar3 = (int *)(piVar6);
    piVar6 = (int *)((int *)*piVar6);
  }
  *piVar2 = (int)((int)piVar3);
  iVar4 = (int)(*(int *)(*param_1 + 4));
  iVar5 = (int)(*(int *)(iVar4 + 8));
  cVar1 = (char)(*(char *)(iVar5 + 0xd));
  while (cVar1 == '\0') {
    cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
    iVar4 = (int)(iVar5);
    iVar5 = (int)(*(int *)(iVar5 + 8));
  }
  *(int*)(*param_1 + 8) = (int)(iVar4);
  return;
}


// Reference entry 103cd970; body size 113 bytes.
#line 1 "ENTRY_103cd970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_103cd970(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_103cdcc0(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
  *(undefined4*)(*param_1 + 4) = (undefined4)(uVar7);
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = (int)(param_2[1]);
  piVar3 = (int *)((int *)piVar2[1]);
  if (*(char *)((int)piVar3 + 0xd) != '\0') {
    *piVar2 = (int)((int)piVar2);
    *(int*)(*param_1 + 8) = (int)(*param_1);
    return;
  }
  cVar1 = (char)(*(char *)(*piVar3 + 0xd));
  piVar6 = (int *)((int *)*piVar3);
  while (cVar1 == '\0') {
    cVar1 = (char)(*(char *)(*piVar6 + 0xd));
    piVar3 = (int *)(piVar6);
    piVar6 = (int *)((int *)*piVar6);
  }
  *piVar2 = (int)((int)piVar3);
  iVar4 = (int)(*(int *)(*param_1 + 4));
  iVar5 = (int)(*(int *)(iVar4 + 8));
  cVar1 = (char)(*(char *)(iVar5 + 0xd));
  while (cVar1 == '\0') {
    cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
    iVar4 = (int)(iVar5);
    iVar5 = (int)(*(int *)(iVar5 + 8));
  }
  *(int*)(*param_1 + 8) = (int)(iVar4);
  return;
}


// Reference entry 103ce4d0; body size 83 bytes.
#line 1 "ENTRY_103ce4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103ce4d0(int *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  
  iVar2 = (int)(*param_1);
  puVar4 = (undefined4 *)(*(undefined4 **)(iVar2 + 4));
  *param_2 = (int)((int)puVar4);
  cVar1 = (char)(*(char *)((int)puVar4 + 0xd));
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar2);
  while (cVar1 == '\0') {
    *param_2 = (int)((int)puVar4);
    bVar3 = (bool)(((SCStr *)((SCStr *)(puVar4 + 4)))->op_lt(param_3));
    if (!bVar3) {
      param_2[2] = (int)((int)puVar4);
      puVar4 = (undefined4 *)((undefined4 *)*puVar4);
    }
    else {
      puVar4 = (undefined4 *)((undefined4 *)puVar4[2]);
    }
    param_2[1] = (int)((uint)!bVar3);
    cVar1 = (char)(*(char *)((int)puVar4 + 0xd));
  }
  return (int *)(param_2);
}


// Reference entry 103ce540; body size 5 bytes.
#line 1 "ENTRY_103ce540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ce540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ce550; body size 5 bytes.
#line 1 "ENTRY_103ce550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ce550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ce560; body size 5 bytes.
#line 1 "ENTRY_103ce560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ce560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ce570; body size 37 bytes.
#line 1 "ENTRY_103ce570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ce570(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 103ce5a0; body size 37 bytes.
#line 1 "ENTRY_103ce5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ce5a0(int param_1,SCStr *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 103ce5d0; body size 3 bytes.
#line 1 "ENTRY_103ce5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ce5d0(void)

{
  return;
}


// Reference entry 103ce5e0; body size 3 bytes.
#line 1 "ENTRY_103ce5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ce5e0(void)

{
  return;
}


// Reference entry 103ce5f0; body size 19 bytes.
#line 1 "ENTRY_103ce5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ce5f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 103cea60; body size 5 bytes.
#line 1 "ENTRY_103cea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cea60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cea70; body size 5 bytes.
#line 1 "ENTRY_103cea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cea70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cea80; body size 5 bytes.
#line 1 "ENTRY_103cea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cea80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cea90; body size 5 bytes.
#line 1 "ENTRY_103cea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cea90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ceaa0; body size 5 bytes.
#line 1 "ENTRY_103ceaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ceaa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ceab0; body size 5 bytes.
#line 1 "ENTRY_103ceab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ceab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ceac0; body size 5 bytes.
#line 1 "ENTRY_103ceac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ceac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cead0; body size 27 bytes.
#line 1 "ENTRY_103cead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cead0(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->op_ctor(param_3);
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_3 + 4));
  return;
}


// Reference entry 103ceb00; body size 27 bytes.
#line 1 "ENTRY_103ceb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ceb00(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 103ceb30; body size 27 bytes.
#line 1 "ENTRY_103ceb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ceb30(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 103cec00; body size 83 bytes.
#line 1 "ENTRY_103cec00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cec00(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);
  return;
}


// Reference entry 103cece0; body size 86 bytes.
#line 1 "ENTRY_103cece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103cece0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)(0);
  while ((int *)(param_1) != (int *)(param_2)) {
    piVar2 = (int *)((int *)param_1[2]);
    iVar4 = (int)(iVar4 + 1);
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar2 + 0xd));
      param_1 = (int *)(piVar2);
      piVar2 = (int *)((int *)*piVar2);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar2 + 0xd));
        param_1 = (int *)(piVar2);
        piVar2 = (int *)((int *)*piVar2);
      }
    }
    else {
      cVar1 = (char)(*(char *)(param_1[1] + 0xd));
      piVar3 = (int *)((int *)param_1[1]);
      piVar2 = (int *)(param_1);
      while ((param_1 = piVar3, cVar1 == '\0' && ((int *)(piVar2) == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (int)(iVar4);
}


// Reference entry 103ced50; body size 15 bytes.
#line 1 "ENTRY_103ced50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ced50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103ced70; body size 15 bytes.
#line 1 "ENTRY_103ced70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ced70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103ced90; body size 5 bytes.
#line 1 "ENTRY_103ced90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ced90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ceda0; body size 5 bytes.
#line 1 "ENTRY_103ceda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ceda0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cedb0; body size 5 bytes.
#line 1 "ENTRY_103cedb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cedb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cedc0; body size 5 bytes.
#line 1 "ENTRY_103cedc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cedc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cedd0; body size 5 bytes.
#line 1 "ENTRY_103cedd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cedd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cede0; body size 5 bytes.
#line 1 "ENTRY_103cede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cede0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cedf0; body size 5 bytes.
#line 1 "ENTRY_103cedf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cedf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee00; body size 5 bytes.
#line 1 "ENTRY_103cee00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee10; body size 5 bytes.
#line 1 "ENTRY_103cee10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee20; body size 5 bytes.
#line 1 "ENTRY_103cee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee30; body size 5 bytes.
#line 1 "ENTRY_103cee30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee40; body size 5 bytes.
#line 1 "ENTRY_103cee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee50; body size 5 bytes.
#line 1 "ENTRY_103cee50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee60; body size 5 bytes.
#line 1 "ENTRY_103cee60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee70; body size 5 bytes.
#line 1 "ENTRY_103cee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee80; body size 5 bytes.
#line 1 "ENTRY_103cee80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee90; body size 19 bytes.
#line 1 "ENTRY_103cee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cee90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 103ceeb0; body size 18 bytes.
#line 1 "ENTRY_103ceeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103ceeb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ceed0; body size 18 bytes.
#line 1 "ENTRY_103ceed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103ceed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ceff0; body size 11 bytes.
#line 1 "ENTRY_103ceff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103ceff0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103cf000; body size 51 bytes.
#line 1 "ENTRY_103cf000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf000(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 103cf040; body size 51 bytes.
#line 1 "ENTRY_103cf040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf040(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 103cf080; body size 51 bytes.
#line 1 "ENTRY_103cf080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf080(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 103cf0c0; body size 11 bytes.
#line 1 "ENTRY_103cf0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf0c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103cf1d0; body size 11 bytes.
#line 1 "ENTRY_103cf1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf1d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103cf1e0; body size 11 bytes.
#line 1 "ENTRY_103cf1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf1e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103cf1f0; body size 16 bytes.
#line 1 "ENTRY_103cf1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cf1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103cf210; body size 3 bytes.
#line 1 "ENTRY_103cf210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103cf210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cf220; body size 76 bytes.
#line 1 "ENTRY_103cf220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf220(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x18));
  *(void**)pvVar2 = (void *)((void *)(pvVar2));
  *(void**)((int)pvVar2 + 4) = (void *)(pvVar2);
  *(void**)((int)pvVar2 + 8) = (void *)(pvVar2);
  *(undefined2*)((int)pvVar2 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar2);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(pvVar2);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 103cf320; body size 52 bytes.
#line 1 "ENTRY_103cf320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cf320(undefined4 *param_1)

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


// Reference entry 103cf490; body size 76 bytes.
#line 1 "ENTRY_103cf490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103cf490(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x18));
  *(void**)pvVar2 = (void *)((void *)(pvVar2));
  *(void**)((int)pvVar2 + 4) = (void *)(pvVar2);
  *(void**)((int)pvVar2 + 8) = (void *)(pvVar2);
  *(undefined2*)((int)pvVar2 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar2);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(pvVar2);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 103cf610; body size 33 bytes.
#line 1 "ENTRY_103cf610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_103cf610(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 103cf770; body size 23 bytes.
#line 1 "ENTRY_103cf770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cf770(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103d04b0; body size 42 bytes.
#line 1 "ENTRY_103d04b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103d04b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103d04f0; body size 23 bytes.
#line 1 "ENTRY_103d04f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103d04f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTestPoint_TestPointCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 103d0a10; body size 7 bytes.
#line 1 "ENTRY_103d0a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103d0a10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  return;
}


// Reference entry 103d0a20; body size 58 bytes.
#line 1 "ENTRY_103d0a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103d0a20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_102460b0(param_1,*(undefined4 *)(iVar1 + 4));
    *(int*)(iVar1 + 4) = (int)(iVar1);
    *(int*)iVar1 = (int)((int)(iVar1));
    *(int*)(iVar1 + 8) = (int)(iVar1);
    param_1[1] = (int)(0);
    thunk_FUN_103cd850(param_2,param_2);
  }
  return (int *)(param_1);
}


// Reference entry 103d0a70; body size 58 bytes.
#line 1 "ENTRY_103d0a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_103d0a70(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_102460b0(param_1,*(undefined4 *)(iVar1 + 4));
    *(int*)(iVar1 + 4) = (int)(iVar1);
    *(int*)iVar1 = (int)((int)(iVar1));
    *(int*)(iVar1 + 8) = (int)(iVar1);
    param_1[1] = (int)(0);
    thunk_FUN_103cd850(param_2,param_2);
  }
  return (int *)(param_1);
}


// Reference entry 103d0ac0; body size 60 bytes.
#line 1 "ENTRY_103d0ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_103d0ac0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_10247e10();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103d0bb0; body size 14 bytes.
#line 1 "ENTRY_103d0bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103d0bb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 103d0bd0; body size 14 bytes.
#line 1 "ENTRY_103d0bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103d0bd0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 103d0bf0; body size 14 bytes.
#line 1 "ENTRY_103d0bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103d0bf0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 103d0c10; body size 14 bytes.
#line 1 "ENTRY_103d0c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_103d0c10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 103d0ff0; body size 6 bytes.
#line 1 "ENTRY_103d0ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103d0ff0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103d1000; body size 6 bytes.
#line 1 "ENTRY_103d1000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103d1000(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


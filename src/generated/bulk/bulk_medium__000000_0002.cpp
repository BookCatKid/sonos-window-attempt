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
namespace std { template<class... A> static int _Xbad_function_call(A...); }
struct SCImageResource { char _pad; SCImageResource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_ctor(...); };
struct SCLibParameters { char _pad; SCLibParameters(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_ctor(...); static int op_dtor(...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int isShuttingDown(A...); static int op_dtor(...); };
struct SCProperty { char _pad; SCProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_dtor(...); };
struct SCPropertyBag { char _pad; SCPropertyBag(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_dtor(...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int format(A...); template<class... A> static int int_addref(A...); template<class... A> static int int_allocRep(A...); template<class... A> static int int_formatv(A...); template<class... A> static int int_release(A...); static int op_ctor(...); static int op_eq(...); static int op_lt(...); template<class... A> static int setFromUTF16(A...); template<class... A> static int stringWithFormat(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Fetc { char _pad; Fetc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCElapsedTimeMeasurement { char _pad; SCElapsedTimeMeasurement(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCFetchTokenAction { char _pad; SCFetchTokenAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionCategoryDefault { char _pad; SCIActionCategoryDefault(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionNoArgDescriptor { char _pad; SCIActionNoArgDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCISystemStatusManager { char _pad; SCISystemStatusManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCThreadSafeInc { char _pad; SCThreadSafeInc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCVersion { char _pad; SCVersion(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
typedef void *LOCK;
typedef void *T;
typedef void *UNLOCK;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; int * __thiscall FUN_101a2b10(int *param_2); template<class... A> int FUN_101a2b10(A...); int * __thiscall FUN_101a2b50(int *param_2); template<class... A> int FUN_101a2b50(A...); int * __thiscall FUN_101a2b90(int *param_2); template<class... A> int FUN_101a2b90(A...); void __thiscall FUN_101a3370(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_101a3370(A...); bool __thiscall FUN_101a4420(undefined4 *param_2); template<class... A> int FUN_101a4420(A...); bool __thiscall FUN_101a4460(undefined1 *param_2); template<class... A> int FUN_101a4460(A...); bool __thiscall FUN_101a4d40(undefined4 *param_2); template<class... A> int FUN_101a4d40(A...); bool __thiscall FUN_101a4d80(undefined1 *param_2); template<class... A> int FUN_101a4d80(A...); void __thiscall FUN_101a5590(ushort *param_2); template<class... A> int FUN_101a5590(A...); undefined4 * __thiscall FUN_101a8d90(int *param_2); template<class... A> int FUN_101a8d90(A...); undefined4 * __thiscall FUN_101a8dd0(int *param_2); template<class... A> int FUN_101a8dd0(A...); undefined4 * __thiscall FUN_101a8df0(int *param_2); template<class... A> int FUN_101a8df0(A...); undefined4 __thiscall FUN_101a93e0(byte param_2); template<class... A> int FUN_101a93e0(A...); undefined4 * __thiscall FUN_101a9410(byte param_2); template<class... A> int FUN_101a9410(A...); undefined4 * __thiscall FUN_101a9450(byte param_2); template<class... A> int FUN_101a9450(A...); undefined4 * __thiscall FUN_101a9490(byte param_2); template<class... A> int FUN_101a9490(A...); void __thiscall FUN_101a9d20(undefined4 param_2); template<class... A> int FUN_101a9d20(A...); void __thiscall FUN_101aa430(uint param_2); template<class... A> int FUN_101aa430(A...); void __thiscall FUN_101ab320(int *param_2); template<class... A> int FUN_101ab320(A...); void __thiscall FUN_101ab9e0(int param_2); template<class... A> int FUN_101ab9e0(A...); undefined4 * __thiscall FUN_101ac3a0(int param_2); template<class... A> int FUN_101ac3a0(A...); undefined4 * __thiscall FUN_101ac420(int *param_2); template<class... A> int FUN_101ac420(A...); undefined4 * __thiscall FUN_101ac990(int *param_2); template<class... A> int FUN_101ac990(A...); undefined4 * __thiscall FUN_101aced0(int param_2); template<class... A> int FUN_101aced0(A...); undefined4 * __thiscall FUN_101b1580(byte param_2); template<class... A> int FUN_101b1580(A...); undefined4 * __thiscall FUN_101b15c0(byte param_2); template<class... A> int FUN_101b15c0(A...); undefined4 * __thiscall FUN_101b1600(byte param_2); template<class... A> int FUN_101b1600(A...); undefined4 * __thiscall FUN_101b1640(byte param_2); template<class... A> int FUN_101b1640(A...); undefined4 * __thiscall FUN_101b1730(byte param_2); template<class... A> int FUN_101b1730(A...); undefined4 * __thiscall FUN_101b1760(byte param_2); template<class... A> int FUN_101b1760(A...); undefined4 __thiscall FUN_101b19d0(byte param_2); template<class... A> int FUN_101b19d0(A...); undefined4 * __thiscall FUN_101b1aa0(byte param_2); template<class... A> int FUN_101b1aa0(A...); undefined4 * __thiscall FUN_101b1ae0(byte param_2); template<class... A> int FUN_101b1ae0(A...); undefined4 * __thiscall FUN_101b1b10(byte param_2); template<class... A> int FUN_101b1b10(A...); undefined4 * __thiscall FUN_101b1b40(byte param_2); template<class... A> int FUN_101b1b40(A...); undefined4 * __thiscall FUN_101b1b70(byte param_2); template<class... A> int FUN_101b1b70(A...); SCLibrary * __thiscall FUN_101b1ba0(byte param_2); template<class... A> int FUN_101b1ba0(A...); undefined4 * __thiscall FUN_101b1bd0(byte param_2); template<class... A> int FUN_101b1bd0(A...); void __thiscall FUN_101b2980(int *param_2); template<class... A> int FUN_101b2980(A...); void __thiscall FUN_101b29d0(int *param_2); template<class... A> int FUN_101b29d0(A...); void __thiscall FUN_101b2a20(int *param_2); template<class... A> int FUN_101b2a20(A...); void __thiscall FUN_101b2a70(int *param_2); template<class... A> int FUN_101b2a70(A...); void __thiscall FUN_101b2ac0(int param_2); template<class... A> int FUN_101b2ac0(A...); undefined4 __thiscall FUN_101b2d50(int param_2); template<class... A> int FUN_101b2d50(A...); undefined4 __thiscall FUN_101b2d90(int param_2); template<class... A> int FUN_101b2d90(A...); undefined4 __thiscall FUN_101b2dd0(int param_2); template<class... A> int FUN_101b2dd0(A...); undefined4 __thiscall FUN_101b4d70(int param_2); template<class... A> int FUN_101b4d70(A...); int * __thiscall FUN_101b5290(int *param_2); template<class... A> int FUN_101b5290(A...); undefined4 __thiscall FUN_101b5e00(undefined4 param_2,int param_3); template<class... A> int FUN_101b5e00(A...); int __thiscall FUN_101b5e50(int param_2); template<class... A> int FUN_101b5e50(A...); uint __thiscall FUN_101b7cd0(int param_2); template<class... A> int FUN_101b7cd0(A...); void __thiscall FUN_101b7f90(int *param_2); template<class... A> int FUN_101b7f90(A...); void __thiscall FUN_101b7fb0(int *param_2); template<class... A> int FUN_101b7fb0(A...); undefined4 __thiscall FUN_101b7fd0(int param_2); template<class... A> int FUN_101b7fd0(A...); void __thiscall FUN_101b8080(int *param_2); template<class... A> int FUN_101b8080(A...); undefined4 * __thiscall FUN_101b80e0(int *param_2); template<class... A> int FUN_101b80e0(A...); undefined4 * __thiscall FUN_101b8120(int *param_2); template<class... A> int FUN_101b8120(A...); undefined4 * __thiscall FUN_101b83f0(byte param_2); template<class... A> int FUN_101b83f0(A...); undefined4 * __thiscall FUN_101b8430(byte param_2); template<class... A> int FUN_101b8430(A...); char * __thiscall FUN_101b8530(char *param_2); template<class... A> int FUN_101b8530(A...); bool __thiscall FUN_101b8740(char *param_2); template<class... A> int FUN_101b8740(A...); SCStr * __thiscall FUN_101b87d0(SCStr *param_2); template<class... A> int FUN_101b87d0(A...); void __thiscall FUN_101b8f90(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_101b8f90(A...); undefined4 * __thiscall FUN_101b9190(undefined4 param_2); template<class... A> int FUN_101b9190(A...); undefined4 * __thiscall FUN_101b9650(int *param_2); template<class... A> int FUN_101b9650(A...); undefined4 * __thiscall FUN_101b9700(int *param_2); template<class... A> int FUN_101b9700(A...); undefined4 * __thiscall FUN_101b9890(int param_2); template<class... A> int FUN_101b9890(A...); undefined4 * __thiscall FUN_101ba7d0(byte param_2); template<class... A> int FUN_101ba7d0(A...); undefined4 * __thiscall FUN_101ba800(byte param_2); template<class... A> int FUN_101ba800(A...); undefined4 * __thiscall FUN_101ba840(byte param_2); template<class... A> int FUN_101ba840(A...); undefined4 __thiscall FUN_101ba880(byte param_2); template<class... A> int FUN_101ba880(A...); undefined4 * __thiscall FUN_101ba8b0(byte param_2); template<class... A> int FUN_101ba8b0(A...); undefined4 __thiscall FUN_101ba8e0(byte param_2); template<class... A> int FUN_101ba8e0(A...); undefined4 * __thiscall FUN_101ba910(byte param_2); template<class... A> int FUN_101ba910(A...); undefined4 * __thiscall FUN_101ba950(byte param_2); template<class... A> int FUN_101ba950(A...); undefined4 * __thiscall FUN_101ba980(byte param_2); template<class... A> int FUN_101ba980(A...); undefined4 * __thiscall FUN_101baa50(byte param_2); template<class... A> int FUN_101baa50(A...); void __thiscall FUN_101bac00(int *param_2); template<class... A> int FUN_101bac00(A...); void __thiscall FUN_101bac50(int *param_2); template<class... A> int FUN_101bac50(A...); void __thiscall FUN_101bad20(int param_2); template<class... A> int FUN_101bad20(A...); void __thiscall FUN_101bad70(int param_2); template<class... A> int FUN_101bad70(A...); void __thiscall FUN_101bc430(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_101bc430(A...); void __thiscall FUN_101bc460(int *param_2); template<class... A> int FUN_101bc460(A...); void __thiscall FUN_101bc480(int *param_2); template<class... A> int FUN_101bc480(A...); undefined4 * __thiscall FUN_101bdfa0(int *param_2); template<class... A> int FUN_101bdfa0(A...); undefined4 * __thiscall FUN_101be2b0(byte param_2); template<class... A> int FUN_101be2b0(A...); undefined4 * __thiscall FUN_101be2f0(byte param_2); template<class... A> int FUN_101be2f0(A...); void __thiscall FUN_101be3c0(int *param_2); template<class... A> int FUN_101be3c0(A...); void __thiscall FUN_101be410(SCStr *param_2); template<class... A> int FUN_101be410(A...); void __thiscall FUN_101bef40(SCStr *param_2); template<class... A> int FUN_101bef40(A...); void __thiscall FUN_101c35c0(int *param_2); template<class... A> int FUN_101c35c0(A...); int __thiscall FUN_101c4700(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_101c4700(A...); void __thiscall FUN_101c4ee0(int param_2); template<class... A> int FUN_101c4ee0(A...); void __thiscall FUN_101c5120(undefined4 *param_2); template<class... A> int FUN_101c5120(A...); void __thiscall FUN_101c5210(int *param_2,undefined4 param_3); template<class... A> int FUN_101c5210(A...); undefined4 * __thiscall FUN_101c55c0(int *param_2); template<class... A> int FUN_101c55c0(A...); undefined4 * __thiscall FUN_101c5640(int *param_2); template<class... A> int FUN_101c5640(A...); undefined4 * __thiscall FUN_101c5660(int *param_2); template<class... A> int FUN_101c5660(A...); undefined4 * __thiscall FUN_101c5680(int *param_2); template<class... A> int FUN_101c5680(A...); int * __thiscall FUN_101c62f0(int *param_2); template<class... A> int FUN_101c62f0(A...); undefined4 * __thiscall FUN_101c77c0(byte param_2); template<class... A> int FUN_101c77c0(A...); undefined4 * __thiscall FUN_101c7800(byte param_2); template<class... A> int FUN_101c7800(A...); undefined4 * __thiscall FUN_101c7840(byte param_2); template<class... A> int FUN_101c7840(A...); undefined4 * __thiscall FUN_101c7a70(byte param_2); template<class... A> int FUN_101c7a70(A...); undefined4 * __thiscall FUN_101c7ab0(byte param_2); template<class... A> int FUN_101c7ab0(A...); undefined4 * __thiscall FUN_101c7ea0(byte param_2); template<class... A> int FUN_101c7ea0(A...); void __thiscall FUN_101c8730(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_101c8730(A...); void __thiscall FUN_101c97f0(int *param_2); template<class... A> int FUN_101c97f0(A...); void __thiscall FUN_101c9840(int *param_2); template<class... A> int FUN_101c9840(A...); void __thiscall FUN_101c9890(int *param_2); template<class... A> int FUN_101c9890(A...); void __thiscall FUN_101c98e0(int *param_2); template<class... A> int FUN_101c98e0(A...); void __thiscall FUN_101c9930(int param_2); template<class... A> int FUN_101c9930(A...); void __thiscall FUN_101cb160(undefined4 *param_2); template<class... A> int FUN_101cb160(A...); void __thiscall FUN_101cdd70(undefined4 param_2); template<class... A> int FUN_101cdd70(A...); void __thiscall FUN_101ce970(int param_2); template<class... A> int FUN_101ce970(A...); void __thiscall FUN_101ce9a0(int param_2); template<class... A> int FUN_101ce9a0(A...); undefined4 * __thiscall FUN_101cf880(int param_2); template<class... A> int FUN_101cf880(A...); undefined4 * __thiscall FUN_101cf8d0(int param_2); template<class... A> int FUN_101cf8d0(A...); undefined4 * __thiscall FUN_101cf920(undefined4 param_2); template<class... A> int FUN_101cf920(A...); undefined4 * __thiscall FUN_101cf9a0(int param_2); template<class... A> int FUN_101cf9a0(A...); undefined4 * __thiscall FUN_101cf9d0(undefined4 param_2); template<class... A> int FUN_101cf9d0(A...); undefined4 * __thiscall FUN_101cfa50(int param_2); template<class... A> int FUN_101cfa50(A...); undefined4 * __thiscall FUN_101cfae0(int *param_2); template<class... A> int FUN_101cfae0(A...); undefined4 * __thiscall FUN_101cfb80(int *param_2); template<class... A> int FUN_101cfb80(A...); undefined4 * __thiscall FUN_101cfbc0(int *param_2); template<class... A> int FUN_101cfbc0(A...); undefined4 * __thiscall FUN_101cfc00(int *param_2); template<class... A> int FUN_101cfc00(A...); undefined4 * __thiscall FUN_101cfc70(int *param_2); template<class... A> int FUN_101cfc70(A...); undefined4 * __thiscall FUN_101cfcf0(int *param_2); template<class... A> int FUN_101cfcf0(A...); undefined4 * __thiscall FUN_101cfd30(int *param_2); template<class... A> int FUN_101cfd30(A...); undefined4 * __thiscall FUN_101cfdc0(int *param_2); template<class... A> int FUN_101cfdc0(A...); undefined4 * __thiscall FUN_101cfe30(int *param_2); template<class... A> int FUN_101cfe30(A...); undefined4 * __thiscall FUN_101cfe90(int *param_2); template<class... A> int FUN_101cfe90(A...); undefined4 * __thiscall FUN_101cfeb0(int *param_2); template<class... A> int FUN_101cfeb0(A...); int __thiscall FUN_101d3b70(int param_2); template<class... A> int FUN_101d3b70(A...); int __thiscall FUN_101d3b90(int param_2); template<class... A> int FUN_101d3b90(A...); undefined4 * __thiscall FUN_101d5520(byte param_2); template<class... A> int FUN_101d5520(A...); undefined4 * __thiscall FUN_101d5560(byte param_2); template<class... A> int FUN_101d5560(A...); undefined4 * __thiscall FUN_101d55a0(byte param_2); template<class... A> int FUN_101d55a0(A...); undefined4 * __thiscall FUN_101d55e0(byte param_2); template<class... A> int FUN_101d55e0(A...); undefined4 * __thiscall FUN_101d5620(byte param_2); template<class... A> int FUN_101d5620(A...); undefined4 * __thiscall FUN_101d5660(byte param_2); template<class... A> int FUN_101d5660(A...); undefined4 * __thiscall FUN_101d56a0(byte param_2); template<class... A> int FUN_101d56a0(A...); undefined4 * __thiscall FUN_101d56f0(byte param_2); template<class... A> int FUN_101d56f0(A...); undefined4 __thiscall FUN_101d5740(byte param_2); template<class... A> int FUN_101d5740(A...); int __thiscall FUN_101d5800(byte param_2); template<class... A> int FUN_101d5800(A...); undefined4 * __thiscall FUN_101d5850(byte param_2); template<class... A> int FUN_101d5850(A...); undefined4 * __thiscall FUN_101d5930(byte param_2); template<class... A> int FUN_101d5930(A...); undefined4 __thiscall FUN_101d5970(byte param_2); template<class... A> int FUN_101d5970(A...); undefined4 * __thiscall FUN_101d59a0(byte param_2); template<class... A> int FUN_101d59a0(A...); undefined4 * __thiscall FUN_101d59e0(byte param_2); template<class... A> int FUN_101d59e0(A...); undefined4 * __thiscall FUN_101d5a20(byte param_2); template<class... A> int FUN_101d5a20(A...); undefined4 * __thiscall FUN_101d5b00(byte param_2); template<class... A> int FUN_101d5b00(A...); undefined4 * __thiscall FUN_101d5bd0(byte param_2); template<class... A> int FUN_101d5bd0(A...); undefined4 * __thiscall FUN_101d5c00(byte param_2); template<class... A> int FUN_101d5c00(A...); undefined4 * __thiscall FUN_101d5c30(byte param_2); template<class... A> int FUN_101d5c30(A...); undefined4 * __thiscall FUN_101d5c60(byte param_2); template<class... A> int FUN_101d5c60(A...); undefined4 * __thiscall FUN_101d5d30(byte param_2); template<class... A> int FUN_101d5d30(A...); undefined4 __thiscall FUN_101d5d70(byte param_2); template<class... A> int FUN_101d5d70(A...); SCProperty * __thiscall FUN_101d5da0(byte param_2); template<class... A> int FUN_101d5da0(A...); SCPropertyBag * __thiscall FUN_101d5dd0(byte param_2); template<class... A> int FUN_101d5dd0(A...); undefined4 * __thiscall FUN_101d5ea0(byte param_2); template<class... A> int FUN_101d5ea0(A...); void __thiscall FUN_101d6060(undefined4 *param_2); template<class... A> int FUN_101d6060(A...); void __thiscall FUN_101d6080(undefined4 *param_2); template<class... A> int FUN_101d6080(A...); void __thiscall FUN_101d6200(char param_2); template<class... A> int FUN_101d6200(A...); void __thiscall FUN_101d6220(char param_2); template<class... A> int FUN_101d6220(A...); void __thiscall FUN_101d6240(char param_2); template<class... A> int FUN_101d6240(A...); void __thiscall FUN_101d6440(undefined4 *param_2,undefined4 param_3); template<class... A> int FUN_101d6440(A...); void __thiscall FUN_101d6f80(undefined4 *param_2); template<class... A> int FUN_101d6f80(A...); void __thiscall FUN_101d6fa0(undefined4 *param_2); template<class... A> int FUN_101d6fa0(A...); void __thiscall FUN_101d7950(int *param_2); template<class... A> int FUN_101d7950(A...); void __thiscall FUN_101d79a0(int *param_2); template<class... A> int FUN_101d79a0(A...); void __thiscall FUN_101d79f0(int *param_2); template<class... A> int FUN_101d79f0(A...); void __thiscall FUN_101d7a40(int *param_2); template<class... A> int FUN_101d7a40(A...); void __thiscall FUN_101d7a90(int *param_2); template<class... A> int FUN_101d7a90(A...); void __thiscall FUN_101d7ae0(int *param_2); template<class... A> int FUN_101d7ae0(A...); void __thiscall FUN_101d7b30(int *param_2); template<class... A> int FUN_101d7b30(A...); void __thiscall FUN_101d7b80(int *param_2); template<class... A> int FUN_101d7b80(A...); void __thiscall FUN_101d7bd0(int *param_2); template<class... A> int FUN_101d7bd0(A...); void __thiscall FUN_101d7c20(int *param_2); template<class... A> int FUN_101d7c20(A...); void __thiscall FUN_101d7c70(int *param_2); template<class... A> int FUN_101d7c70(A...); void __thiscall FUN_101d7cc0(int *param_2); template<class... A> int FUN_101d7cc0(A...); void __thiscall FUN_101d7d10(int *param_2); template<class... A> int FUN_101d7d10(A...); void __thiscall FUN_101d7d60(int *param_2); template<class... A> int FUN_101d7d60(A...); void __thiscall FUN_101d7db0(int param_2); template<class... A> int FUN_101d7db0(A...); void __thiscall FUN_101d7de0(int param_2); template<class... A> int FUN_101d7de0(A...); int * __thiscall FUN_101d8b20(int *param_2); template<class... A> int FUN_101d8b20(A...); void __thiscall FUN_101d8db0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_101d8db0(A...); SCStr * __thiscall FUN_101da020(SCStr *param_2); template<class... A> int FUN_101da020(A...); SCStr * __thiscall FUN_101da040(SCStr *param_2); template<class... A> int FUN_101da040(A...); void __thiscall FUN_101dfc00(int param_2); template<class... A> int FUN_101dfc00(A...); int __thiscall FUN_101e0b40(SCStr *param_2); template<class... A> int FUN_101e0b40(A...); void __thiscall FUN_101e0dc0(int param_2); template<class... A> int FUN_101e0dc0(A...); void __thiscall FUN_101e0df0(int param_2); template<class... A> int FUN_101e0df0(A...); undefined4 * __thiscall FUN_101e0f70(int *param_2); template<class... A> int FUN_101e0f70(A...); undefined4 * __thiscall FUN_101e1000(int *param_2); template<class... A> int FUN_101e1000(A...); undefined4 * __thiscall FUN_101e1020(int *param_2); template<class... A> int FUN_101e1020(A...); undefined4 * __thiscall FUN_101e1040(int *param_2); template<class... A> int FUN_101e1040(A...); undefined4 * __thiscall FUN_101e1060(int *param_2); template<class... A> int FUN_101e1060(A...); undefined4 * __thiscall FUN_101e1080(int *param_2); template<class... A> int FUN_101e1080(A...); undefined4 * __thiscall FUN_101e10a0(int *param_2); template<class... A> int FUN_101e10a0(A...); void __thiscall FUN_101e23d0(int *param_2); template<class... A> int FUN_101e23d0(A...); void __thiscall FUN_101e2420(int *param_2); template<class... A> int FUN_101e2420(A...); void __thiscall FUN_101e2470(int param_2); template<class... A> int FUN_101e2470(A...); void __thiscall FUN_101e24a0(int param_2); template<class... A> int FUN_101e24a0(A...); int * __thiscall FUN_101e3f40(int *param_2); template<class... A> int FUN_101e3f40(A...); int __thiscall FUN_101e6b50(SCStr *param_2); template<class... A> int FUN_101e6b50(A...); SCStr * __thiscall FUN_101e6e10(SCStr *param_2); template<class... A> int FUN_101e6e10(A...); int * __thiscall FUN_101e71e0(int *param_2); template<class... A> int FUN_101e71e0(A...); undefined4 __thiscall FUN_101e7200(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_101e7200(A...); SCStr * __thiscall FUN_101e7220(SCStr *param_2); template<class... A> int FUN_101e7220(A...); void __thiscall FUN_101e9b50(undefined4 *param_2); template<class... A> int FUN_101e9b50(A...); void __thiscall FUN_101e9ba0(undefined4 *param_2); template<class... A> int FUN_101e9ba0(A...); undefined4 * __thiscall FUN_101e9e00(int *param_2); template<class... A> int FUN_101e9e00(A...); undefined4 * __thiscall FUN_101e9e90(int *param_2); template<class... A> int FUN_101e9e90(A...); undefined4 * __thiscall FUN_101e9ed0(int *param_2); template<class... A> int FUN_101e9ed0(A...); undefined4 * __thiscall FUN_101e9ef0(int *param_2); template<class... A> int FUN_101e9ef0(A...); undefined4 * __thiscall FUN_101e9f10(int *param_2); template<class... A> int FUN_101e9f10(A...); undefined4 * __thiscall FUN_101e9f30(int *param_2); template<class... A> int FUN_101e9f30(A...); undefined4 * __thiscall FUN_101ebc60(byte param_2); template<class... A> int FUN_101ebc60(A...); undefined4 * __thiscall FUN_101ebca0(byte param_2); template<class... A> int FUN_101ebca0(A...); undefined4 * __thiscall FUN_101ebe00(byte param_2); template<class... A> int FUN_101ebe00(A...); undefined4 * __thiscall FUN_101ebe40(byte param_2); template<class... A> int FUN_101ebe40(A...); undefined4 * __thiscall FUN_101ebe70(byte param_2); template<class... A> int FUN_101ebe70(A...); undefined4 * __thiscall FUN_101ebea0(byte param_2); template<class... A> int FUN_101ebea0(A...); undefined4 * __thiscall FUN_101ebef0(byte param_2); template<class... A> int FUN_101ebef0(A...); undefined4 __thiscall FUN_101ebf30(byte param_2); template<class... A> int FUN_101ebf30(A...); undefined4 * __thiscall FUN_101ebf60(byte param_2); template<class... A> int FUN_101ebf60(A...); undefined4 __thiscall FUN_101ebfb0(byte param_2); template<class... A> int FUN_101ebfb0(A...); void __thiscall FUN_101ec310(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_101ec310(A...); void __thiscall FUN_101ec330(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_101ec330(A...); void __thiscall FUN_101ec720(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_101ec720(A...); void __thiscall FUN_101ec800(int *param_2); template<class... A> int FUN_101ec800(A...); void __thiscall FUN_101ec850(int *param_2); template<class... A> int FUN_101ec850(A...); void __thiscall FUN_101ec8a0(int *param_2); template<class... A> int FUN_101ec8a0(A...); void __thiscall FUN_101ec8f0(int *param_2); template<class... A> int FUN_101ec8f0(A...); };

extern __declspec(dllimport) int _Xbad_function_call(...);
extern __declspec(dllimport) int __stdio_common_vsscanf(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _strdup(...);
extern __declspec(dllimport) int ceil(...);
extern int createSCStringArray(...);
extern int format(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_formatv(...);
extern int int_release(...);
extern int isShuttingDown(...);
extern __declspec(dllimport) int memmove(...);
extern int op_ctor(...);
extern int op_dtor(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern int setFromUTF16(...);
extern int stringWithFormat(...);
extern int thunk_FUN_101a2210(...);
extern int thunk_FUN_101a2390(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101a6f70(...);
extern int thunk_FUN_101a83f0(...);
extern int thunk_FUN_101a8700(...);
extern int thunk_FUN_101a8f30(...);
extern int thunk_FUN_101ab700(...);
extern int thunk_FUN_101b1fc0(...);
extern int thunk_FUN_101b2090(...);
extern int thunk_FUN_101b9120(...);
extern int thunk_FUN_101b9ba0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101bc5e0(...);
extern int thunk_FUN_101bda70(...);
extern int thunk_FUN_101be460(...);
extern int thunk_FUN_101c3fc0(...);
extern int thunk_FUN_101c42f0(...);
extern int thunk_FUN_101c4440(...);
extern int thunk_FUN_101c4740(...);
extern int thunk_FUN_101c4810(...);
extern int thunk_FUN_101c4a90(...);
extern int thunk_FUN_101cde00(...);
extern int thunk_FUN_101cdee0(...);
extern int thunk_FUN_101cdf90(...);
extern int thunk_FUN_101d19a0(...);
extern int thunk_FUN_101d2f40(...);
extern int thunk_FUN_101d3630(...);
extern int thunk_FUN_101db840(...);
extern int thunk_FUN_101df120(...);
extern int thunk_FUN_101e0b90(...);
extern int thunk_FUN_101e6ce0(...);
extern int thunk_FUN_101e7240(...);
extern int thunk_FUN_101e76a0(...);
extern int thunk_FUN_101e8670(...);
extern int thunk_FUN_101e8710(...);
extern int thunk_FUN_101e8900(...);
extern int thunk_FUN_101e8ca0(...);
extern int thunk_FUN_101e90e0(...);
extern int thunk_FUN_101eb2b0(...);
extern int thunk_FUN_101eb3f0(...);
extern int thunk_FUN_10222ce0(...);
extern int thunk_FUN_103026f0(...);
extern int thunk_FUN_103134f0(...);
extern int thunk_FUN_10313720(...);
extern int thunk_FUN_103138c0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d5ff0(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_11069bc0(...);
extern int thunk_FUN_1106a250(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_1186d2ee;
extern int DAT_1211905c;
extern int DAT_12119064;
extern int DAT_1211906c;
extern int DAT_12126b84;
extern int DAT_121a06cc;
extern int DAT_121a06d0;
extern int DAT_121a06d4;
extern int DAT_121a07b0;
extern int DAT_121a07b4;
extern int g_lSCObjCount;
extern int ghidra_vftable_AnacapaLauncherCB;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_SCHouseholdEventSink;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOwnedObjImpl;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCRemoveMeSettingsMenu;
extern int ghidra_vftable_SCStringArray;
extern int ghidra_vftable_SCSystemEventSink;
extern int ghidra_vftable_SwigDirector_SCIActionDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIActionFilterSwigBase;
extern int ghidra_vftable_SwigDirector_SCIActionSwigBase;
extern int ghidra_vftable_SwigDirector_SCIAutomationDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIClipboardDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIEventSinkSwigBase;
extern int ghidra_vftable_SwigDirector_SCIGetAboutSonosStringCBSwigBase;
extern int ghidra_vftable_SwigDirector_SCIGetSonosPlaylistsCBSwigBase;
extern int ghidra_vftable_SwigDirector_SCIHapticDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCILifecycleAppProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCINetworkManagementDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCINewWizDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIOpCBSwigBase;
extern int ghidra_vftable_SwigDirector_SCIPlatformDateTimeProvider;
extern int ghidra_vftable_SwigDirector_SCIServiceAppInteropSwigBase;
extern int ghidra_vftable_SwigDirector_SCIStackTraceCaptureDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIUINotificationsDelegate;
extern int ghidra_vftable_SwigDirector_SCIUrlSessionCallbackSwigBase;
extern int ghidra_vftable_SwigDirector_SCIVpnDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCLibAssertionFailureCallback;
extern int ghidra_vftable_SwigDirector_SCLibCallUIThreadCallback;
extern int ghidra_vftable_SwigDirector_SCLibCustomSubWizardCallback;
extern int ghidra_vftable_SwigDirector_SCLibDelegateFactory;
extern int ghidra_vftable_SwigDirector_SCLibDiagnosticConsoleLogCallback;
extern int ghidra_vftable_SwigDirector_SCLibDiagnosticExtraInfoCallback;
extern int ghidra_vftable_SwigDirector_SCLibLogCallback;
extern int ghidra_vftable_SwigDirector_SCLibPlatformStringCallback;
extern int ghidra_vftable_SwigDirector_SCLibTruncatedStringsCallback;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_Ref_count_obj2;
extern int in_EAX;
extern int uStack_8;
extern undefined1 LAB_1001b7c5[];
extern undefined1 LAB_101aa510[];
extern undefined1 LAB_114f3770[];
extern undefined1 LAB_114f37a0[];
extern undefined1 LAB_114f4640[];
extern undefined1 LAB_114f5c50[];
extern undefined1 LAB_114f5c80[];
extern undefined1 LAB_114f5cb0[];
extern undefined1 LAB_114f6840[];
extern undefined1 LAB_114f8000[];
extern undefined1 LAB_114fa300[];
extern undefined1 LAB_114fa330[];
extern undefined1 LAB_114fa360[];
extern undefined1 LAB_114fa390[];
extern undefined1 LAB_114fa3c0[];
extern undefined1 LAB_114fa3f0[];
extern undefined1 LAB_114fa420[];
extern undefined1 LAB_114fa450[];
extern undefined1 LAB_114fc720[];
extern undefined1 LAB_114fc750[];
extern undefined1 LAB_114fe6c0[];
extern undefined1 LAB_114fe6f0[];
extern undefined1 LAB_114fe720[];
extern undefined1 LAB_114fe750[];
extern int *stack0x0000000c;
extern int *stack0xfffffffc;
extern void *ExceptionList;
void __stdcall FUN_1019c9f0(int *param_1);
void __stdcall FUN_1019c9f0(int *param_1);
void __stdcall FUN_1019ca10(int *param_1);
void __stdcall FUN_1019ca10(int *param_1);
void __stdcall FUN_1019ca30(int *param_1);
void __stdcall FUN_1019ca30(int *param_1);
void __stdcall FUN_1019ca50(int *param_1);
void __stdcall FUN_1019ca50(int *param_1);
void __stdcall FUN_1019ca70(int *param_1);
void __stdcall FUN_1019ca70(int *param_1);
void __stdcall FUN_1019ca90(int *param_1);
void __stdcall FUN_1019ca90(int *param_1);
void __stdcall FUN_1019cab0(int *param_1);
void __stdcall FUN_1019cab0(int *param_1);
void __stdcall FUN_1019cad0(int *param_1);
void __stdcall FUN_1019cad0(int *param_1);
void __stdcall FUN_1019caf0(int *param_1);
void __stdcall FUN_1019caf0(int *param_1);
void __stdcall FUN_1019cb10(int *param_1);
void __stdcall FUN_1019cb10(int *param_1);
void __stdcall FUN_1019cb30(int *param_1);
void __stdcall FUN_1019cb30(int *param_1);
void __stdcall FUN_1019cb50(int *param_1);
void __stdcall FUN_1019cb50(int *param_1);
void __stdcall FUN_1019cb70(int *param_1);
void __stdcall FUN_1019cb70(int *param_1);
void __stdcall FUN_1019cb90(int *param_1);
void __stdcall FUN_1019cb90(int *param_1);
void __stdcall FUN_1019cbb0(int *param_1);
void __stdcall FUN_1019cbb0(int *param_1);
void __stdcall FUN_1019cbd0(int *param_1);
void __stdcall FUN_1019cbd0(int *param_1);
void __stdcall FUN_1019cbf0(int *param_1);
void __stdcall FUN_1019cbf0(int *param_1);
void __stdcall FUN_1019cc10(int *param_1);
void __stdcall FUN_1019cc10(int *param_1);
void __stdcall FUN_1019cc30(int *param_1);
void __stdcall FUN_1019cc30(int *param_1);
void __stdcall FUN_1019cc50(int *param_1);
void __stdcall FUN_1019cc50(int *param_1);
void __stdcall FUN_1019cc70(int *param_1);
void __stdcall FUN_1019cc70(int *param_1);
void __stdcall FUN_1019cc90(int *param_1);
void __stdcall FUN_1019cc90(int *param_1);
void __stdcall FUN_1019ccb0(int *param_1);
void __stdcall FUN_1019ccb0(int *param_1);
void __stdcall FUN_1019ccd0(int *param_1);
void __stdcall FUN_1019ccd0(int *param_1);
void __stdcall FUN_1019ccf0(int *param_1);
void __stdcall FUN_1019ccf0(int *param_1);
void __stdcall FUN_1019cd10(int *param_1);
void __stdcall FUN_1019cd10(int *param_1);
void __stdcall FUN_1019cd30(int *param_1);
void __stdcall FUN_1019cd30(int *param_1);
void __stdcall FUN_1019cd50(int *param_1);
void __stdcall FUN_1019cd50(int *param_1);
void __stdcall FUN_1019cd70(int *param_1);
void __stdcall FUN_1019cd70(int *param_1);
void __stdcall FUN_1019cd90(int *param_1);
void __stdcall FUN_1019cd90(int *param_1);
void __stdcall FUN_1019cdb0(int *param_1);
void __stdcall FUN_1019cdb0(int *param_1);
void __stdcall FUN_1019cdd0(int *param_1);
void __stdcall FUN_1019cdd0(int *param_1);
void __stdcall FUN_1019cdf0(int *param_1);
void __stdcall FUN_1019cdf0(int *param_1);
void __stdcall FUN_1019ce10(int *param_1);
void __stdcall FUN_1019ce10(int *param_1);
void __stdcall FUN_1019ce30(int *param_1);
void __stdcall FUN_1019ce30(int *param_1);
void __stdcall FUN_1019ce50(int *param_1);
void __stdcall FUN_1019ce50(int *param_1);
void __stdcall FUN_1019ce70(int *param_1);
void __stdcall FUN_1019ce70(int *param_1);
void __stdcall FUN_1019ce90(int *param_1);
void __stdcall FUN_1019ce90(int *param_1);
void __stdcall FUN_1019ceb0(int *param_1);
void __stdcall FUN_1019ceb0(int *param_1);
void __stdcall FUN_1019ced0(int *param_1);
void __stdcall FUN_1019ced0(int *param_1);
void __stdcall FUN_1019cef0(int *param_1);
void __stdcall FUN_1019cef0(int *param_1);
void __stdcall FUN_1019cf10(int *param_1);
void __stdcall FUN_1019cf10(int *param_1);
void __stdcall FUN_1019cf30(int *param_1);
void __stdcall FUN_1019cf30(int *param_1);
void __stdcall FUN_1019cf50(int *param_1);
void __stdcall FUN_1019cf50(int *param_1);
void __stdcall FUN_1019cf70(int *param_1);
void __stdcall FUN_1019cf70(int *param_1);
void __stdcall FUN_1019cf90(int *param_1);
void __stdcall FUN_1019cf90(int *param_1);
void __stdcall FUN_1019cfb0(int *param_1);
void __stdcall FUN_1019cfb0(int *param_1);
void __stdcall FUN_1019cfd0(int *param_1);
void __stdcall FUN_1019cfd0(int *param_1);
void __stdcall FUN_1019cff0(int *param_1);
void __stdcall FUN_1019cff0(int *param_1);
void __stdcall FUN_1019d010(int *param_1);
void __stdcall FUN_1019d010(int *param_1);
void __stdcall FUN_1019d030(int *param_1);
void __stdcall FUN_1019d030(int *param_1);
void __stdcall FUN_1019d050(int *param_1);
void __stdcall FUN_1019d050(int *param_1);
void __stdcall FUN_1019d070(int *param_1);
void __stdcall FUN_1019d070(int *param_1);
void __stdcall FUN_1019d090(int *param_1);
void __stdcall FUN_1019d090(int *param_1);
void __stdcall FUN_1019d0b0(int *param_1);
void __stdcall FUN_1019d0b0(int *param_1);
void __stdcall FUN_1019d0d0(int *param_1);
void __stdcall FUN_1019d0d0(int *param_1);
void __stdcall FUN_1019d0f0(int *param_1);
void __stdcall FUN_1019d0f0(int *param_1);
void __stdcall FUN_1019d110(int *param_1);
void __stdcall FUN_1019d110(int *param_1);
void __stdcall FUN_1019d130(int *param_1);
void __stdcall FUN_1019d130(int *param_1);
void __stdcall FUN_1019d150(int *param_1);
void __stdcall FUN_1019d150(int *param_1);
void __stdcall FUN_1019d170(int *param_1);
void __stdcall FUN_1019d170(int *param_1);
void __stdcall FUN_1019d190(int *param_1);
void __stdcall FUN_1019d190(int *param_1);
void __stdcall FUN_1019d1b0(int *param_1);
void __stdcall FUN_1019d1b0(int *param_1);
void __stdcall FUN_1019d1d0(int *param_1);
void __stdcall FUN_1019d1d0(int *param_1);
void __stdcall FUN_1019d1f0(int *param_1);
void __stdcall FUN_1019d1f0(int *param_1);
void __stdcall FUN_1019d210(int *param_1);
void __stdcall FUN_1019d210(int *param_1);
void __stdcall FUN_1019d230(int *param_1);
void __stdcall FUN_1019d230(int *param_1);
void __stdcall FUN_1019d250(int *param_1);
void __stdcall FUN_1019d250(int *param_1);
void __stdcall FUN_1019d270(int *param_1);
void __stdcall FUN_1019d270(int *param_1);
void __stdcall FUN_1019d290(int *param_1);
void __stdcall FUN_1019d290(int *param_1);
void __stdcall FUN_1019d2b0(int *param_1);
void __stdcall FUN_1019d2b0(int *param_1);
void __stdcall FUN_1019d2d0(int *param_1);
void __stdcall FUN_1019d2d0(int *param_1);
void __stdcall FUN_1019d2f0(int *param_1);
void __stdcall FUN_1019d2f0(int *param_1);
void __stdcall FUN_1019d310(int *param_1);
void __stdcall FUN_1019d310(int *param_1);
void __stdcall FUN_1019d330(int *param_1);
void __stdcall FUN_1019d330(int *param_1);
void __stdcall FUN_1019d350(int *param_1);
void __stdcall FUN_1019d350(int *param_1);
void __stdcall FUN_1019d370(int *param_1);
void __stdcall FUN_1019d370(int *param_1);
void __stdcall FUN_1019d390(int *param_1);
void __stdcall FUN_1019d390(int *param_1);
void __stdcall FUN_1019d3b0(int *param_1);
void __stdcall FUN_1019d3b0(int *param_1);
void __stdcall FUN_1019d3d0(int *param_1);
void __stdcall FUN_1019d3d0(int *param_1);
void __stdcall FUN_1019d3f0(int *param_1);
void __stdcall FUN_1019d3f0(int *param_1);
void __stdcall FUN_1019d410(int *param_1);
void __stdcall FUN_1019d410(int *param_1);
void __stdcall FUN_1019d430(int *param_1);
void __stdcall FUN_1019d430(int *param_1);
void __stdcall FUN_1019d450(int *param_1);
void __stdcall FUN_1019d450(int *param_1);
void __stdcall FUN_1019d470(int *param_1);
void __stdcall FUN_1019d470(int *param_1);
void __stdcall FUN_1019d490(int *param_1);
void __stdcall FUN_1019d490(int *param_1);
void __stdcall FUN_1019d4b0(int *param_1);
void __stdcall FUN_1019d4b0(int *param_1);
void __stdcall FUN_1019d4d0(int *param_1);
void __stdcall FUN_1019d4d0(int *param_1);
void __stdcall FUN_1019d4f0(int *param_1);
void __stdcall FUN_1019d4f0(int *param_1);
void __stdcall FUN_1019d510(int *param_1);
void __stdcall FUN_1019d510(int *param_1);
void __stdcall FUN_1019d530(int *param_1);
void __stdcall FUN_1019d530(int *param_1);
void __stdcall FUN_1019d550(int *param_1);
void __stdcall FUN_1019d550(int *param_1);
void __stdcall FUN_1019d570(int *param_1);
void __stdcall FUN_1019d570(int *param_1);
void __stdcall FUN_1019d590(int *param_1);
void __stdcall FUN_1019d590(int *param_1);
void __stdcall FUN_1019d5b0(int *param_1);
void __stdcall FUN_1019d5b0(int *param_1);
void __stdcall FUN_1019d5d0(int *param_1);
void __stdcall FUN_1019d5d0(int *param_1);
void __stdcall FUN_1019d5f0(int *param_1);
void __stdcall FUN_1019d5f0(int *param_1);
void __stdcall FUN_1019d610(int *param_1);
void __stdcall FUN_1019d610(int *param_1);
void __stdcall FUN_1019d630(int *param_1);
void __stdcall FUN_1019d630(int *param_1);
void __stdcall FUN_1019d650(int *param_1);
void __stdcall FUN_1019d650(int *param_1);
void __stdcall FUN_1019d670(int *param_1);
void __stdcall FUN_1019d670(int *param_1);
void __stdcall FUN_1019d690(int *param_1);
void __stdcall FUN_1019d690(int *param_1);
void __stdcall FUN_1019d6b0(int *param_1);
void __stdcall FUN_1019d6b0(int *param_1);
void __stdcall FUN_1019d6d0(int *param_1);
void __stdcall FUN_1019d6d0(int *param_1);
void __stdcall FUN_1019d6f0(int *param_1);
void __stdcall FUN_1019d6f0(int *param_1);
void __stdcall FUN_1019d710(int *param_1);
void __stdcall FUN_1019d710(int *param_1);
void __stdcall FUN_1019d730(int *param_1);
void __stdcall FUN_1019d730(int *param_1);
void __stdcall FUN_1019d750(int *param_1);
void __stdcall FUN_1019d750(int *param_1);
void __stdcall FUN_1019d770(int *param_1);
void __stdcall FUN_1019d770(int *param_1);
void __stdcall FUN_1019d790(int *param_1);
void __stdcall FUN_1019d790(int *param_1);
void __stdcall FUN_1019d7b0(int *param_1);
void __stdcall FUN_1019d7b0(int *param_1);
void __stdcall FUN_1019d7d0(int *param_1);
void __stdcall FUN_1019d7d0(int *param_1);
void __stdcall FUN_1019d7f0(int *param_1);
void __stdcall FUN_1019d7f0(int *param_1);
void __stdcall FUN_1019d810(int *param_1);
void __stdcall FUN_1019d810(int *param_1);
void __stdcall FUN_1019d830(int *param_1);
void __stdcall FUN_1019d830(int *param_1);
void __stdcall FUN_1019d850(int *param_1);
void __stdcall FUN_1019d850(int *param_1);
void __stdcall FUN_1019d870(int *param_1);
void __stdcall FUN_1019d870(int *param_1);
void __stdcall FUN_1019d890(int *param_1);
void __stdcall FUN_1019d890(int *param_1);
void __stdcall FUN_1019d8b0(int *param_1);
void __stdcall FUN_1019d8b0(int *param_1);
void __stdcall FUN_1019d8d0(int *param_1);
void __stdcall FUN_1019d8d0(int *param_1);
void __stdcall FUN_1019d8f0(int *param_1);
void __stdcall FUN_1019d8f0(int *param_1);
void __stdcall FUN_1019d910(int *param_1);
void __stdcall FUN_1019d910(int *param_1);
void __stdcall FUN_1019d930(int *param_1);
void __stdcall FUN_1019d930(int *param_1);
void __stdcall FUN_1019d950(int *param_1);
void __stdcall FUN_1019d950(int *param_1);
void __stdcall FUN_1019d970(int *param_1);
void __stdcall FUN_1019d970(int *param_1);
void __stdcall FUN_1019d990(int *param_1);
void __stdcall FUN_1019d990(int *param_1);
void __stdcall FUN_1019d9b0(int *param_1);
void __stdcall FUN_1019d9b0(int *param_1);
void __stdcall FUN_1019d9d0(int *param_1);
void __stdcall FUN_1019d9d0(int *param_1);
void __stdcall FUN_1019d9f0(int *param_1);
void __stdcall FUN_1019d9f0(int *param_1);
void __stdcall FUN_1019da10(int *param_1);
void __stdcall FUN_1019da10(int *param_1);
void __stdcall FUN_1019da30(int *param_1);
void __stdcall FUN_1019da30(int *param_1);
void __stdcall FUN_1019da50(int *param_1);
void __stdcall FUN_1019da50(int *param_1);
void __stdcall FUN_1019da70(int *param_1);
void __stdcall FUN_1019da70(int *param_1);
void __stdcall FUN_1019da90(int *param_1);
void __stdcall FUN_1019da90(int *param_1);
void __stdcall FUN_1019dab0(int *param_1);
void __stdcall FUN_1019dab0(int *param_1);
void __stdcall FUN_1019dad0(int *param_1);
void __stdcall FUN_1019dad0(int *param_1);
void __stdcall FUN_1019daf0(int *param_1);
void __stdcall FUN_1019daf0(int *param_1);
void __stdcall FUN_1019db10(int *param_1);
void __stdcall FUN_1019db10(int *param_1);
void __stdcall FUN_1019db30(int *param_1);
void __stdcall FUN_1019db30(int *param_1);
void __stdcall FUN_1019db50(int *param_1);
void __stdcall FUN_1019db50(int *param_1);
void __stdcall FUN_1019db70(int *param_1);
void __stdcall FUN_1019db70(int *param_1);
void __stdcall FUN_1019db90(int *param_1);
void __stdcall FUN_1019db90(int *param_1);
void __stdcall FUN_1019dbb0(int *param_1);
void __stdcall FUN_1019dbb0(int *param_1);
void __stdcall FUN_1019dbd0(int *param_1);
void __stdcall FUN_1019dbd0(int *param_1);
void __stdcall FUN_1019dbf0(int *param_1);
void __stdcall FUN_1019dbf0(int *param_1);
void __stdcall FUN_1019dc10(int *param_1);
void __stdcall FUN_1019dc10(int *param_1);
void __stdcall FUN_1019dc30(int *param_1);
void __stdcall FUN_1019dc30(int *param_1);
void __stdcall FUN_1019dc50(int *param_1);
void __stdcall FUN_1019dc50(int *param_1);
void __stdcall FUN_1019dc70(int *param_1);
void __stdcall FUN_1019dc70(int *param_1);
void __stdcall FUN_1019dc90(int *param_1);
void __stdcall FUN_1019dc90(int *param_1);
void __stdcall FUN_1019dcb0(int *param_1);
void __stdcall FUN_1019dcb0(int *param_1);
void __stdcall FUN_1019dcd0(int *param_1);
void __stdcall FUN_1019dcd0(int *param_1);
void __stdcall FUN_1019dcf0(int *param_1);
void __stdcall FUN_1019dcf0(int *param_1);
void __stdcall FUN_1019dd10(int *param_1);
void __stdcall FUN_1019dd10(int *param_1);
void __stdcall FUN_1019dd30(int *param_1);
void __stdcall FUN_1019dd30(int *param_1);
void __stdcall FUN_1019dd50(int *param_1);
void __stdcall FUN_1019dd50(int *param_1);
void __stdcall FUN_1019dd70(int *param_1);
void __stdcall FUN_1019dd70(int *param_1);
void __stdcall FUN_1019dd90(int *param_1);
void __stdcall FUN_1019dd90(int *param_1);
void __stdcall FUN_1019ddb0(int *param_1);
void __stdcall FUN_1019ddb0(int *param_1);
void __stdcall FUN_1019ddd0(int *param_1);
void __stdcall FUN_1019ddd0(int *param_1);
void __stdcall FUN_1019ddf0(int *param_1);
void __stdcall FUN_1019ddf0(int *param_1);
void __stdcall FUN_1019de10(int *param_1);
void __stdcall FUN_1019de10(int *param_1);
void __stdcall FUN_1019de30(int *param_1);
void __stdcall FUN_1019de30(int *param_1);
void __stdcall FUN_1019de50(int *param_1);
void __stdcall FUN_1019de50(int *param_1);
void __stdcall FUN_1019de70(int *param_1);
void __stdcall FUN_1019de70(int *param_1);
void __stdcall FUN_1019de90(int *param_1);
void __stdcall FUN_1019de90(int *param_1);
void __stdcall FUN_1019deb0(int *param_1);
void __stdcall FUN_1019deb0(int *param_1);
void __stdcall FUN_1019ded0(int *param_1);
void __stdcall FUN_1019ded0(int *param_1);
void __stdcall FUN_1019def0(int *param_1);
void __stdcall FUN_1019def0(int *param_1);
void __stdcall FUN_1019df10(int *param_1);
void __stdcall FUN_1019df10(int *param_1);
void __stdcall FUN_1019df30(int *param_1);
void __stdcall FUN_1019df30(int *param_1);
void __stdcall FUN_1019df50(int *param_1);
void __stdcall FUN_1019df50(int *param_1);
void __stdcall FUN_1019df70(int *param_1);
void __stdcall FUN_1019df70(int *param_1);
void __stdcall FUN_1019df90(int *param_1);
void __stdcall FUN_1019df90(int *param_1);
void __stdcall FUN_1019dfb0(int *param_1);
void __stdcall FUN_1019dfb0(int *param_1);
void __stdcall FUN_1019dfd0(int *param_1);
void __stdcall FUN_1019dfd0(int *param_1);
void __stdcall FUN_1019dff0(int *param_1);
void __stdcall FUN_1019dff0(int *param_1);
void __stdcall FUN_1019e010(int *param_1);
void __stdcall FUN_1019e010(int *param_1);
void __stdcall FUN_1019e030(int *param_1);
void __stdcall FUN_1019e030(int *param_1);
void __stdcall FUN_1019e050(int *param_1);
void __stdcall FUN_1019e050(int *param_1);
void __stdcall FUN_1019e070(int *param_1);
void __stdcall FUN_1019e070(int *param_1);
void __stdcall FUN_1019e090(int *param_1);
void __stdcall FUN_1019e090(int *param_1);
void __stdcall FUN_1019e0b0(int *param_1);
void __stdcall FUN_1019e0b0(int *param_1);
void __stdcall FUN_1019e0d0(int *param_1);
void __stdcall FUN_1019e0d0(int *param_1);
void __stdcall FUN_1019e0f0(int *param_1);
void __stdcall FUN_1019e0f0(int *param_1);
void __stdcall FUN_1019e110(int *param_1);
void __stdcall FUN_1019e110(int *param_1);
void __stdcall FUN_1019e130(int *param_1);
void __stdcall FUN_1019e130(int *param_1);
void __stdcall FUN_1019e150(int *param_1);
void __stdcall FUN_1019e150(int *param_1);
void __stdcall FUN_1019e170(int *param_1);
void __stdcall FUN_1019e170(int *param_1);
void __stdcall FUN_1019e190(int *param_1);
void __stdcall FUN_1019e190(int *param_1);
void __stdcall FUN_1019e1b0(int *param_1);
void __stdcall FUN_1019e1b0(int *param_1);
void __stdcall FUN_1019e1d0(int *param_1);
void __stdcall FUN_1019e1d0(int *param_1);
void __stdcall FUN_1019e1f0(int *param_1);
void __stdcall FUN_1019e1f0(int *param_1);
void __stdcall FUN_1019e210(int *param_1);
void __stdcall FUN_1019e210(int *param_1);
void __stdcall FUN_1019e230(int *param_1);
void __stdcall FUN_1019e230(int *param_1);
void __stdcall FUN_1019e250(int *param_1);
void __stdcall FUN_1019e250(int *param_1);
void __stdcall FUN_1019e270(int *param_1);
void __stdcall FUN_1019e270(int *param_1);
void __stdcall FUN_1019e290(int *param_1);
void __stdcall FUN_1019e290(int *param_1);
void __stdcall FUN_1019e2b0(int *param_1);
void __stdcall FUN_1019e2b0(int *param_1);
void __stdcall FUN_1019e2d0(int *param_1);
void __stdcall FUN_1019e2d0(int *param_1);
void __stdcall FUN_1019e2f0(int *param_1);
void __stdcall FUN_1019e2f0(int *param_1);
void __stdcall FUN_1019e310(int *param_1);
void __stdcall FUN_1019e310(int *param_1);
void __stdcall FUN_1019e330(int *param_1);
void __stdcall FUN_1019e330(int *param_1);
void __stdcall FUN_1019e350(int *param_1);
void __stdcall FUN_1019e350(int *param_1);
void __stdcall FUN_1019e370(int *param_1);
void __stdcall FUN_1019e370(int *param_1);
void __stdcall FUN_1019e390(int *param_1);
void __stdcall FUN_1019e390(int *param_1);
void __stdcall FUN_1019e3b0(int *param_1);
void __stdcall FUN_1019e3b0(int *param_1);
void __stdcall FUN_1019e3d0(int *param_1);
void __stdcall FUN_1019e3d0(int *param_1);
void __stdcall FUN_1019e3f0(int *param_1);
void __stdcall FUN_1019e3f0(int *param_1);
void __stdcall FUN_1019e410(int *param_1);
void __stdcall FUN_1019e410(int *param_1);
void __stdcall FUN_1019e430(int *param_1);
void __stdcall FUN_1019e430(int *param_1);
void __stdcall FUN_1019e450(int *param_1);
void __stdcall FUN_1019e450(int *param_1);
void __stdcall FUN_1019e470(int *param_1);
void __stdcall FUN_1019e470(int *param_1);
void __stdcall FUN_1019e490(int *param_1);
void __stdcall FUN_1019e490(int *param_1);
void __stdcall FUN_1019e4b0(int *param_1);
void __stdcall FUN_1019e4b0(int *param_1);
void __stdcall FUN_1019e4d0(int *param_1);
void __stdcall FUN_1019e4d0(int *param_1);
void __stdcall FUN_1019e4f0(int *param_1);
void __stdcall FUN_1019e4f0(int *param_1);
void __stdcall FUN_1019e510(int *param_1);
void __stdcall FUN_1019e510(int *param_1);
void __stdcall FUN_1019e530(int *param_1);
void __stdcall FUN_1019e530(int *param_1);
void __stdcall FUN_1019e550(int *param_1);
void __stdcall FUN_1019e550(int *param_1);
void __stdcall FUN_1019e570(int *param_1);
void __stdcall FUN_1019e570(int *param_1);
void __stdcall FUN_1019e590(int *param_1);
void __stdcall FUN_1019e590(int *param_1);
void __stdcall FUN_1019e5b0(int *param_1);
void __stdcall FUN_1019e5b0(int *param_1);
void __stdcall FUN_1019e5d0(int *param_1);
void __stdcall FUN_1019e5d0(int *param_1);
void __stdcall FUN_1019e5f0(int *param_1);
void __stdcall FUN_1019e5f0(int *param_1);
void __stdcall FUN_1019e610(int *param_1);
void __stdcall FUN_1019e610(int *param_1);
void __stdcall FUN_1019e630(int *param_1);
void __stdcall FUN_1019e630(int *param_1);
void __stdcall FUN_1019e650(int *param_1);
void __stdcall FUN_1019e650(int *param_1);
void __stdcall FUN_1019e670(int *param_1);
void __stdcall FUN_1019e670(int *param_1);
void __stdcall FUN_1019e690(int *param_1);
void __stdcall FUN_1019e690(int *param_1);
void __stdcall FUN_1019e6b0(int *param_1);
void __stdcall FUN_1019e6b0(int *param_1);
void __stdcall FUN_1019e6d0(int *param_1);
void __stdcall FUN_1019e6d0(int *param_1);
void __stdcall FUN_1019e6f0(int *param_1);
void __stdcall FUN_1019e6f0(int *param_1);
void __stdcall FUN_1019e710(int *param_1);
void __stdcall FUN_1019e710(int *param_1);
void __stdcall FUN_1019e730(int *param_1);
void __stdcall FUN_1019e730(int *param_1);
void __stdcall FUN_1019e750(int *param_1);
void __stdcall FUN_1019e750(int *param_1);
void __stdcall FUN_1019e770(int *param_1);
void __stdcall FUN_1019e770(int *param_1);
void __stdcall FUN_1019e790(int *param_1);
void __stdcall FUN_1019e790(int *param_1);
void __stdcall FUN_1019e7b0(int *param_1);
void __stdcall FUN_1019e7b0(int *param_1);
void __stdcall FUN_1019e7d0(int *param_1);
void __stdcall FUN_1019e7d0(int *param_1);
void __stdcall FUN_1019e7f0(int *param_1);
void __stdcall FUN_1019e7f0(int *param_1);
void __stdcall FUN_1019e810(int *param_1);
void __stdcall FUN_1019e810(int *param_1);
void __stdcall FUN_1019e830(int *param_1);
void __stdcall FUN_1019e830(int *param_1);
void __stdcall FUN_1019e850(int *param_1);
void __stdcall FUN_1019e850(int *param_1);
void __stdcall FUN_1019e870(int *param_1);
void __stdcall FUN_1019e870(int *param_1);
void __stdcall FUN_1019e890(int *param_1);
void __stdcall FUN_1019e890(int *param_1);
void __stdcall FUN_1019e8b0(int *param_1);
void __stdcall FUN_1019e8b0(int *param_1);
void __stdcall FUN_1019e8d0(int *param_1);
void __stdcall FUN_1019e8d0(int *param_1);
void __stdcall FUN_1019e8f0(int *param_1);
void __stdcall FUN_1019e8f0(int *param_1);
void __stdcall FUN_1019e910(int *param_1);
void __stdcall FUN_1019e910(int *param_1);
void __stdcall FUN_1019e930(int *param_1);
void __stdcall FUN_1019e930(int *param_1);
void __stdcall FUN_1019e950(int *param_1);
void __stdcall FUN_1019e950(int *param_1);
void __stdcall FUN_1019e970(int *param_1);
void __stdcall FUN_1019e970(int *param_1);
void __stdcall FUN_1019e990(int *param_1);
void __stdcall FUN_1019e990(int *param_1);
void __stdcall FUN_1019e9b0(int *param_1);
void __stdcall FUN_1019e9b0(int *param_1);
void __stdcall FUN_1019e9d0(int *param_1);
void __stdcall FUN_1019e9d0(int *param_1);
void __stdcall FUN_1019e9f0(int *param_1);
void __stdcall FUN_1019e9f0(int *param_1);
void __stdcall FUN_1019ea10(int *param_1);
void __stdcall FUN_1019ea10(int *param_1);
void __stdcall FUN_1019ea30(int *param_1);
void __stdcall FUN_1019ea30(int *param_1);
void __stdcall FUN_1019eaf0(int *param_1);
void __stdcall FUN_1019eaf0(int *param_1);
void __stdcall FUN_1019eb10(int *param_1);
void __stdcall FUN_1019eb10(int *param_1);
void __stdcall FUN_1019eb30(int *param_1);
void __stdcall FUN_1019eb30(int *param_1);
void __stdcall FUN_1019eb50(int *param_1);
void __stdcall FUN_1019eb50(int *param_1);
void __stdcall FUN_1019ebf0(int *param_1);
void __stdcall FUN_1019ebf0(int *param_1);
void __stdcall FUN_1019ec10(int *param_1);
void __stdcall FUN_1019ec10(int *param_1);
void __stdcall FUN_1019ec30(int *param_1);
void __stdcall FUN_1019ec30(int *param_1);
void __stdcall FUN_1019ec50(int *param_1);
void __stdcall FUN_1019ec50(int *param_1);
void __stdcall FUN_1019ec70(int *param_1);
void __stdcall FUN_1019ec70(int *param_1);
void __stdcall FUN_1019ec90(int *param_1);
void __stdcall FUN_1019ec90(int *param_1);
void __stdcall FUN_1019ecb0(int *param_1);
void __stdcall FUN_1019ecb0(int *param_1);
void __stdcall FUN_1019ecd0(int *param_1);
void __stdcall FUN_1019ecd0(int *param_1);
void __stdcall FUN_1019ecf0(int *param_1);
void __stdcall FUN_1019ecf0(int *param_1);
void __stdcall FUN_1019ed90(int param_1);
void __stdcall FUN_1019ed90(int param_1);
void __stdcall FUN_1019edb0(int *param_1);
void __stdcall FUN_1019edb0(int *param_1);
void __stdcall FUN_1019edd0(int *param_1);
void __stdcall FUN_1019edd0(int *param_1);
void __stdcall FUN_1019edf0(int *param_1);
void __stdcall FUN_1019edf0(int *param_1);
void __stdcall FUN_1019ee10(int *param_1);
void __stdcall FUN_1019ee10(int *param_1);
void __stdcall FUN_1019ee30(int *param_1);
void __stdcall FUN_1019ee30(int *param_1);
void __stdcall FUN_1019ee50(int *param_1);
void __stdcall FUN_1019ee50(int *param_1);
void __stdcall FUN_1019ee70(int *param_1);
void __stdcall FUN_1019ee70(int *param_1);
void __stdcall FUN_1019ee90(int *param_1);
void __stdcall FUN_1019ee90(int *param_1);
void __stdcall FUN_1019eeb0(SCLibParameters *param_1);
void __stdcall FUN_1019eeb0(SCLibParameters *param_1);
void __stdcall FUN_1019eee0(int *param_1);
void __stdcall FUN_1019eee0(int *param_1);
void __stdcall FUN_1019ef00(int *param_1);
void __stdcall FUN_1019ef00(int *param_1);
void __stdcall FUN_1019ef20(int *param_1);
void __stdcall FUN_1019ef20(int *param_1);
void __stdcall FUN_1019ef40(int *param_1);
void __stdcall FUN_1019ef40(int *param_1);
void __stdcall FUN_1019ef60(int *param_1);
void __stdcall FUN_1019ef60(int *param_1);
void __stdcall FUN_1019ef80(int *param_1);
void __stdcall FUN_1019ef80(int *param_1);
void __stdcall FUN_1019efa0(int *param_1);
void __stdcall FUN_1019efa0(int *param_1);
undefined8 * FUN_1019fe40(void);
extern undefined8 * FUN_1019fe40(...);
undefined8 * FUN_1019fe60(void);
extern undefined8 * FUN_1019fe60(...);
undefined4 * FUN_1019ff40(void);
extern undefined4 * FUN_1019ff40(...);
undefined4 * FUN_101a00b0(void);
extern undefined4 * FUN_101a00b0(...);
undefined4 * FUN_101a00f0(void);
extern undefined4 * FUN_101a00f0(...);
undefined4 * FUN_101a0130(void);
extern undefined4 * FUN_101a0130(...);
undefined4 * FUN_101a0660(void);
extern undefined4 * FUN_101a0660(...);
undefined4 * FUN_101a07c0(void);
extern undefined4 * FUN_101a07c0(...);
undefined4 * FUN_101a08e0(void);
extern undefined4 * FUN_101a08e0(...);
undefined4 * FUN_101a0920(void);
extern undefined4 * FUN_101a0920(...);
undefined4 * FUN_101a0970(void);
extern undefined4 * FUN_101a0970(...);
undefined4 * FUN_101a0aa0(void);
extern undefined4 * FUN_101a0aa0(...);
undefined4 * FUN_101a0e60(void);
extern undefined4 * FUN_101a0e60(...);
undefined4 * FUN_101a0eb0(void);
extern undefined4 * FUN_101a0eb0(...);
undefined4 * FUN_101a0f60(void);
extern undefined4 * FUN_101a0f60(...);
undefined4 * FUN_101a0fa0(void);
extern undefined4 * FUN_101a0fa0(...);
undefined4 * FUN_101a1190(void);
extern undefined4 * FUN_101a1190(...);
undefined4 * FUN_101a11e0(void);
extern undefined4 * FUN_101a11e0(...);
undefined4 * FUN_101a1320(void);
extern undefined4 * FUN_101a1320(...);
undefined4 * FUN_101a1440(void);
extern undefined4 * FUN_101a1440(...);
undefined4 * FUN_101a1570(void);
extern undefined4 * FUN_101a1570(...);
undefined4 * FUN_101a1600(void);
extern undefined4 * FUN_101a1600(...);
undefined4 * FUN_101a16b0(void);
extern undefined4 * FUN_101a16b0(...);
undefined4 FUN_101a1800(void);
extern undefined4 FUN_101a1800(...);
undefined4 * FUN_101a19a0(undefined4 param_1,undefined4 param_2);
extern undefined4 * FUN_101a19a0(...);
undefined4 * FUN_101a1a30(void);
extern undefined4 * FUN_101a1a30(...);
undefined4 * FUN_101a1a60(void);
extern undefined4 * FUN_101a1a60(...);
undefined4 * FUN_101a1a90(void);
extern undefined4 * FUN_101a1a90(...);
undefined4 * FUN_101a1ad0(void);
extern undefined4 * FUN_101a1ad0(...);
undefined4 * FUN_101a1b10(void);
extern undefined4 * FUN_101a1b10(...);
undefined4 * FUN_101a1b40(void);
extern undefined4 * FUN_101a1b40(...);
undefined4 * FUN_101a1b70(void);
extern undefined4 * FUN_101a1b70(...);
undefined4 FUN_101a1ba0(void);
extern undefined4 FUN_101a1ba0(...);
undefined4 * FUN_101a1bd0(void);
extern undefined4 * FUN_101a1bd0(...);
undefined4 * FUN_101a1cf0(void);
extern undefined4 * FUN_101a1cf0(...);
undefined4 FUN_101a1d30(void);
extern undefined4 FUN_101a1d30(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void __stdcall FUN_101a1d50(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_101a1d50(...);
void __stdcall FUN_101a1e00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __stdcall FUN_101a1e00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
float10 FUN_101a1e50(float param_1);
extern float10 FUN_101a1e50(...);
void __fastcall FUN_101a2000(int param_1);
extern void __fastcall FUN_101a2000(...);
void __fastcall FUN_101a2bd0(undefined4 *param_1);
extern void __fastcall FUN_101a2bd0(...);
void __fastcall FUN_101a3710(undefined4 *param_1);
extern void __fastcall FUN_101a3710(...);
void __stdcall FUN_101a3cc0(int param_1,int param_2);
void __stdcall FUN_101a3cc0(int param_1,int param_2);
void FUN_101a45a0(SCStr *param_1,char *param_2);
extern void FUN_101a45a0(...);
void __fastcall FUN_101a4870(int *param_1);
extern void __fastcall FUN_101a4870(...);
void __fastcall FUN_101a4bf0(int *param_1);
extern void __fastcall FUN_101a4bf0(...);
int __fastcall FUN_101a4ca0(undefined4 *param_1);
extern int __fastcall FUN_101a4ca0(...);
int __fastcall FUN_101a4cd0(undefined4 *param_1);
extern int __fastcall FUN_101a4cd0(...);
int __fastcall FUN_101a4fe0(int *param_1);
extern int __fastcall FUN_101a4fe0(...);
int __fastcall FUN_101a6af0(int *param_1);
extern int __fastcall FUN_101a6af0(...);
void __fastcall FUN_101a6b20(int param_1);
extern void __fastcall FUN_101a6b20(...);
void __fastcall FUN_101a8fe0(undefined4 *param_1);
extern void __fastcall FUN_101a8fe0(...);
void __fastcall FUN_101a90e0(int *param_1);
extern void __fastcall FUN_101a90e0(...);
void __fastcall FUN_101a9140(int *param_1);
extern void __fastcall FUN_101a9140(...);
void __fastcall FUN_101aa540(int param_1);
extern void __fastcall FUN_101aa540(...);
void __fastcall FUN_101aa570(uint param_1);
extern void __fastcall FUN_101aa570(...);
undefined4 * __fastcall FUN_101ac3c0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_101ac3c0(...);
undefined4 * __fastcall FUN_101acad0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_101acad0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_101ada20(undefined4 *param_1);
extern void __fastcall FUN_101ada20(...);
void __fastcall FUN_101ada40(undefined4 *param_1);
extern void __fastcall FUN_101ada40(...);
void __fastcall FUN_101ada60(undefined4 *param_1);
extern void __fastcall FUN_101ada60(...);
void __fastcall FUN_101ae8e0(int *param_1);
extern void __fastcall FUN_101ae8e0(...);
void __fastcall FUN_101ae940(int param_1);
extern void __fastcall FUN_101ae940(...);
void __fastcall FUN_101aebf0(undefined4 *param_1);
extern void __fastcall FUN_101aebf0(...);
void __fastcall FUN_101b1cc0(int param_1);
extern void __fastcall FUN_101b1cc0(...);
int * FUN_101b2450(int *param_1);
extern int * FUN_101b2450(...);
void __fastcall FUN_101b2520(int param_1);
extern void __fastcall FUN_101b2520(...);
void __fastcall FUN_101b2540(int param_1);
extern void __fastcall FUN_101b2540(...);
void __fastcall FUN_101b25f0(undefined4 *param_1);
extern void __fastcall FUN_101b25f0(...);
void __fastcall FUN_101b2e80(int *param_1);
extern void __fastcall FUN_101b2e80(...);
void __fastcall FUN_101b4d40(int *param_1);
extern void __fastcall FUN_101b4d40(...);
SCStr * __stdcall FUN_101b5270(SCStr *param_1);
SCStr * __stdcall FUN_101b5270(SCStr *param_1);
uint __fastcall FUN_101b5ef0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
uint __fastcall FUN_101b5ef0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
uint __fastcall FUN_101b7d20(int param_1);
extern uint __fastcall FUN_101b7d20(...);
void __fastcall FUN_101b8260(undefined4 *param_1);
extern void __fastcall FUN_101b8260(...);
SCStr * __stdcall FUN_101b8720(SCStr *param_1);
SCStr * __stdcall FUN_101b8720(SCStr *param_1);
void FUN_101b9160(undefined4 param_1,undefined4 param_2);
extern void FUN_101b9160(...);
void __fastcall FUN_101b9240(undefined4 *param_1);
extern void __fastcall FUN_101b9240(...);
void __fastcall FUN_101b9b80(undefined4 *param_1);
extern void __fastcall FUN_101b9b80(...);
void __fastcall FUN_101b9f90(int *param_1);
extern void __fastcall FUN_101b9f90(...);
void __fastcall FUN_101b9ff0(int *param_1);
extern void __fastcall FUN_101b9ff0(...);
void __fastcall FUN_101ba050(int *param_1);
extern void __fastcall FUN_101ba050(...);
void __fastcall FUN_101ba220(undefined4 *param_1);
extern void __fastcall FUN_101ba220(...);
SCStr * __stdcall FUN_101bb0e0(SCStr *param_1);
SCStr * __stdcall FUN_101bb0e0(SCStr *param_1);
void __fastcall FUN_101bb100(int *param_1);
extern void __fastcall FUN_101bb100(...);
void __fastcall FUN_101bb140(undefined4 *param_1);
extern void __fastcall FUN_101bb140(...);
void __fastcall FUN_101bb180(int *param_1);
extern void __fastcall FUN_101bb180(...);
SCStr * __stdcall FUN_101bb870(SCStr *param_1);
SCStr * __stdcall FUN_101bb870(SCStr *param_1);
uint __fastcall FUN_101bbbe0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
uint __fastcall FUN_101bbbe0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int __fastcall FUN_101bc2d0(undefined4 *param_1);
extern int __fastcall FUN_101bc2d0(...);
void __fastcall FUN_101bc330(int *param_1);
extern void __fastcall FUN_101bc330(...);
undefined4 __fastcall FUN_101bc3e0(int param_1);
extern undefined4 __fastcall FUN_101bc3e0(...);
void __fastcall FUN_101be0d0(int *param_1);
extern void __fastcall FUN_101be0d0(...);
void __fastcall FUN_101be1b0(undefined4 *param_1);
extern void __fastcall FUN_101be1b0(...);
void __fastcall FUN_101bf1c0(int param_1);
extern void __fastcall FUN_101bf1c0(...);
undefined4 FUN_101c3610(undefined4 param_1);
extern undefined4 FUN_101c3610(...);
void __stdcall FUN_101c4f10(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_101c4f10(undefined4 *param_1,undefined4 param_2);
undefined4 * __fastcall FUN_101c58b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_101c58b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_101c6350(undefined4 *param_1);
extern void __fastcall FUN_101c6350(...);
void __fastcall FUN_101c6370(undefined4 *param_1);
extern void __fastcall FUN_101c6370(...);
void __fastcall FUN_101c6790(int *param_1);
extern void __fastcall FUN_101c6790(...);
void __fastcall FUN_101c67f0(int param_1);
extern void __fastcall FUN_101c67f0(...);
void __fastcall FUN_101c69e0(undefined4 *param_1);
extern void __fastcall FUN_101c69e0(...);
void __fastcall FUN_101c6a00(undefined4 *param_1);
extern void __fastcall FUN_101c6a00(...);
int __stdcall FUN_101c7440(undefined4 param_1);
int __stdcall FUN_101c7440(undefined4 param_1);
void __fastcall FUN_101c83f0(int param_1);
extern void __fastcall FUN_101c83f0(...);
void __fastcall FUN_101c8da0(undefined4 *param_1);
extern void __fastcall FUN_101c8da0(...);
void __fastcall FUN_101c9af0(int param_1);
extern void __fastcall FUN_101c9af0(...);
void __fastcall FUN_101c9b90(int *param_1);
extern void __fastcall FUN_101c9b90(...);
void __stdcall FUN_101ca860(int param_1,int param_2);
void __stdcall FUN_101ca860(int param_1,int param_2);
SCStr * __stdcall FUN_101ca950(SCStr *param_1);
SCStr * __stdcall FUN_101ca950(SCStr *param_1);
void __fastcall FUN_101ca970(int *param_1);
extern void __fastcall FUN_101ca970(...);
undefined4 * __fastcall FUN_101cc2c0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_101cc2c0(...);
void __stdcall FUN_101cdee0(undefined4 param_1,int *param_2);
void __stdcall FUN_101cdee0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_101cf8a0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_101cf8a0(...);
undefined4 * __fastcall FUN_101cf8f0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_101cf8f0(...);
undefined4 * __fastcall FUN_101cf960(undefined4 *param_1);
extern undefined4 * __fastcall FUN_101cf960(...);
undefined4 * __fastcall FUN_101cfa10(undefined4 *param_1);
extern undefined4 * __fastcall FUN_101cfa10(...);
undefined4 * __fastcall FUN_101d0020(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_101d0020(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_101d0060(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_101d0060(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_101d0480(undefined4 *param_1);
extern undefined4 * __fastcall FUN_101d0480(...);
void __fastcall FUN_101d18a0(undefined4 *param_1);
extern void __fastcall FUN_101d18a0(...);
void __fastcall FUN_101d18c0(undefined4 *param_1);
extern void __fastcall FUN_101d18c0(...);
void __fastcall FUN_101d1920(undefined4 *param_1);
extern void __fastcall FUN_101d1920(...);
void __fastcall FUN_101d1940(undefined4 *param_1);
extern void __fastcall FUN_101d1940(...);
void __fastcall FUN_101d1960(undefined4 *param_1);
extern void __fastcall FUN_101d1960(...);
void __fastcall FUN_101d1980(undefined4 *param_1);
extern void __fastcall FUN_101d1980(...);
void __fastcall FUN_101d2630(int *param_1);
extern void __fastcall FUN_101d2630(...);
void __fastcall FUN_101d2690(int *param_1);
extern void __fastcall FUN_101d2690(...);
void __fastcall FUN_101d26f0(int *param_1);
extern void __fastcall FUN_101d26f0(...);
void __fastcall FUN_101d2750(int *param_1);
extern void __fastcall FUN_101d2750(...);
void __fastcall FUN_101d27b0(int *param_1);
extern void __fastcall FUN_101d27b0(...);
void __fastcall FUN_101d2810(int *param_1);
extern void __fastcall FUN_101d2810(...);
void __fastcall FUN_101d2870(int *param_1);
extern void __fastcall FUN_101d2870(...);
void __fastcall FUN_101d28d0(int *param_1);
extern void __fastcall FUN_101d28d0(...);
void __fastcall FUN_101d2930(int param_1);
extern void __fastcall FUN_101d2930(...);
void __fastcall FUN_101d2950(int param_1);
extern void __fastcall FUN_101d2950(...);
void __fastcall FUN_101d2970(int *param_1);
extern void __fastcall FUN_101d2970(...);
void __fastcall FUN_101d29a0(int *param_1);
extern void __fastcall FUN_101d29a0(...);
void __fastcall FUN_101d29d0(int *param_1);
extern void __fastcall FUN_101d29d0(...);
void __fastcall FUN_101d2a00(int *param_1);
extern void __fastcall FUN_101d2a00(...);
void __fastcall FUN_101d2a30(int *param_1);
extern void __fastcall FUN_101d2a30(...);
void __fastcall FUN_101d2a60(int *param_1);
extern void __fastcall FUN_101d2a60(...);
void __fastcall FUN_101d2a90(int *param_1);
extern void __fastcall FUN_101d2a90(...);
void __fastcall FUN_101d2bf0(int *param_1);
extern void __fastcall FUN_101d2bf0(...);
void __fastcall FUN_101d2c40(int param_1);
extern void __fastcall FUN_101d2c40(...);
void __fastcall FUN_101d2c60(int *param_1);
extern void __fastcall FUN_101d2c60(...);
void __fastcall FUN_101d2c90(int *param_1);
extern void __fastcall FUN_101d2c90(...);
void __fastcall FUN_101d2cc0(int *param_1);
extern void __fastcall FUN_101d2cc0(...);
void __fastcall FUN_101d2cf0(int *param_1);
extern void __fastcall FUN_101d2cf0(...);
void __fastcall FUN_101d2d20(int *param_1);
extern void __fastcall FUN_101d2d20(...);
void __fastcall FUN_101d2d50(int *param_1);
extern void __fastcall FUN_101d2d50(...);
void __fastcall FUN_101d2d80(int *param_1);
extern void __fastcall FUN_101d2d80(...);
void __fastcall FUN_101d2db0(undefined4 *param_1);
extern void __fastcall FUN_101d2db0(...);
void __fastcall FUN_101d2de0(int *param_1);
extern void __fastcall FUN_101d2de0(...);
void __fastcall FUN_101d2ea0(int param_1);
extern void __fastcall FUN_101d2ea0(...);
void __fastcall FUN_101d2ee0(int param_1);
extern void __fastcall FUN_101d2ee0(...);
void __fastcall FUN_101d33f0(undefined4 *param_1);
extern void __fastcall FUN_101d33f0(...);
void __fastcall FUN_101d3410(undefined4 *param_1);
extern void __fastcall FUN_101d3410(...);
void __fastcall FUN_101d3a30(int *param_1);
extern void __fastcall FUN_101d3a30(...);
int * __fastcall FUN_101d4050(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_101d4050(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_101d4080(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_101d4080(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_101d6000(int param_1);
extern void __fastcall FUN_101d6000(...);
void __fastcall FUN_101d6020(int param_1);
extern void __fastcall FUN_101d6020(...);
int * FUN_101d6f20(int *param_1);
extern int * FUN_101d6f20(...);
int * FUN_101d6f50(int *param_1);
extern int * FUN_101d6f50(...);
void __fastcall FUN_101d7230(int *param_1);
extern void __fastcall FUN_101d7230(...);
void __fastcall FUN_101d7260(int *param_1);
extern void __fastcall FUN_101d7260(...);
void __fastcall FUN_101d7290(int *param_1);
extern void __fastcall FUN_101d7290(...);
void __fastcall FUN_101d72c0(int *param_1);
extern void __fastcall FUN_101d72c0(...);
void __fastcall FUN_101d72f0(int *param_1);
extern void __fastcall FUN_101d72f0(...);
void __fastcall FUN_101d7320(int *param_1);
extern void __fastcall FUN_101d7320(...);
void __fastcall FUN_101d7350(int *param_1);
extern void __fastcall FUN_101d7350(...);
void __fastcall FUN_101d7380(undefined4 *param_1);
extern void __fastcall FUN_101d7380(...);
int __fastcall FUN_101d78c0(int *param_1);
extern int __fastcall FUN_101d78c0(...);
int __fastcall FUN_101d7900(int *param_1);
extern int __fastcall FUN_101d7900(...);
void __fastcall FUN_101d83f0(int param_1);
extern void __fastcall FUN_101d83f0(...);
void __fastcall FUN_101d8490(int *param_1);
extern void __fastcall FUN_101d8490(...);
void __fastcall FUN_101d84c0(int *param_1);
extern void __fastcall FUN_101d84c0(...);
void __fastcall FUN_101d8e80(undefined4 *param_1);
extern void __fastcall FUN_101d8e80(...);
void __fastcall FUN_101d8ec0(undefined4 *param_1);
extern void __fastcall FUN_101d8ec0(...);
void __fastcall FUN_101d8f00(int *param_1);
extern void __fastcall FUN_101d8f00(...);
void __fastcall FUN_101d8f30(int *param_1);
extern void __fastcall FUN_101d8f30(...);
SCStr * __stdcall FUN_101d96d0(SCStr *param_1);
SCStr * __stdcall FUN_101d96d0(SCStr *param_1);
SCStr * __stdcall FUN_101d96f0(SCStr *param_1);
SCStr * __stdcall FUN_101d96f0(SCStr *param_1);
SCStr * __stdcall FUN_101d9d40(SCStr *param_1);
SCStr * __stdcall FUN_101d9d40(SCStr *param_1);
SCStr * __stdcall FUN_101d9fb0(SCStr *param_1);
SCStr * __stdcall FUN_101d9fb0(SCStr *param_1);
SCStr * __stdcall FUN_101d9fe0(SCStr *param_1);
SCStr * __stdcall FUN_101d9fe0(SCStr *param_1);
int __fastcall FUN_101dce30(int param_1);
extern int __fastcall FUN_101dce30(...);
undefined4 __fastcall FUN_101dcef0(int param_1);
extern undefined4 __fastcall FUN_101dcef0(...);
uint __fastcall FUN_101dcf50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
uint __fastcall FUN_101dcf50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_101dcf70(SCStr *param_1);
void __stdcall FUN_101dcf70(SCStr *param_1);
void __stdcall FUN_101dcf90(SCStr *param_1);
void __stdcall FUN_101dcf90(SCStr *param_1);
void __fastcall FUN_101dd0a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_101dd0a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_101de5f0(undefined4 *param_1);
extern void __fastcall FUN_101de5f0(...);
void __fastcall FUN_101dfd50(undefined4 *param_1);
extern void __fastcall FUN_101dfd50(...);
void __fastcall FUN_101e1260(int *param_1);
extern void __fastcall FUN_101e1260(...);
void __fastcall FUN_101e12c0(int *param_1);
extern void __fastcall FUN_101e12c0(...);
void __fastcall FUN_101e1320(int param_1);
extern void __fastcall FUN_101e1320(...);
void __fastcall FUN_101e13f0(int param_1);
extern void __fastcall FUN_101e13f0(...);
void __fastcall FUN_101e19d0(int param_1);
extern void __fastcall FUN_101e19d0(...);
int * FUN_101e22f0(int *param_1);
extern int * FUN_101e22f0(...);
void __fastcall FUN_101e2d10(int *param_1);
extern void __fastcall FUN_101e2d10(...);
void __fastcall FUN_101e2d40(int *param_1);
extern void __fastcall FUN_101e2d40(...);
bool __fastcall FUN_101e3570(int param_1);
extern bool __fastcall FUN_101e3570(...);
int __fastcall FUN_101e3a60(int *param_1);
extern int __fastcall FUN_101e3a60(...);
undefined4 __stdcall FUN_101e6c60(undefined4 param_1);
undefined4 __stdcall FUN_101e6c60(undefined4 param_1);
void __stdcall FUN_101e6c80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __stdcall FUN_101e6c80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __stdcall FUN_101e6cb0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_101e6cb0(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_101eabb0(undefined4 *param_1);
extern void __fastcall FUN_101eabb0(...);
void __fastcall FUN_101eabd0(undefined4 *param_1);
extern void __fastcall FUN_101eabd0(...);
void __fastcall FUN_101eae90(int *param_1);
extern void __fastcall FUN_101eae90(...);
void __fastcall FUN_101eaef0(int *param_1);
extern void __fastcall FUN_101eaef0(...);
void __fastcall FUN_101eaf50(int *param_1);
extern void __fastcall FUN_101eaf50(...);
void __fastcall FUN_101eafb0(int *param_1);
extern void __fastcall FUN_101eafb0(...);
void __fastcall FUN_101eb0f0(int *param_1);
extern void __fastcall FUN_101eb0f0(...);
void __fastcall FUN_101eb130(undefined4 *param_1);
extern void __fastcall FUN_101eb130(...);
void __fastcall FUN_101eb150(undefined4 *param_1);
extern void __fastcall FUN_101eb150(...);
void __fastcall FUN_101eb170(int *param_1);
extern void __fastcall FUN_101eb170(...);
void __fastcall FUN_101eb270(undefined4 *param_1);
extern void __fastcall FUN_101eb270(...);
void __fastcall FUN_101ec470(int *param_1);
extern void __fastcall FUN_101ec470(...);
void __fastcall FUN_101ed5b0(undefined4 *param_1);
extern void __fastcall FUN_101ed5b0(...);
void __fastcall FUN_101ed5d0(undefined4 *param_1);
extern void __fastcall FUN_101ed5d0(...);
void __stdcall FUN_101edd80(int param_1,int param_2);
void __stdcall FUN_101edd80(int param_1,int param_2);
void __stdcall FUN_101eddd0(int param_1,int param_2);
void __stdcall FUN_101eddd0(int param_1,int param_2);
void __fastcall FUN_101ee060(int *param_1);
extern void __fastcall FUN_101ee060(...);
// Reference entry 1019c9f0; body size 16 bytes.
#line 1 "ENTRY_1019c9f0"

void __stdcall FUN_1019c9f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ca10; body size 16 bytes.
#line 1 "ENTRY_1019ca10"

void __stdcall FUN_1019ca10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ca30; body size 16 bytes.
#line 1 "ENTRY_1019ca30"

void __stdcall FUN_1019ca30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ca50; body size 16 bytes.
#line 1 "ENTRY_1019ca50"

void __stdcall FUN_1019ca50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ca70; body size 16 bytes.
#line 1 "ENTRY_1019ca70"

void __stdcall FUN_1019ca70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ca90; body size 16 bytes.
#line 1 "ENTRY_1019ca90"

void __stdcall FUN_1019ca90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cab0; body size 16 bytes.
#line 1 "ENTRY_1019cab0"

void __stdcall FUN_1019cab0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cad0; body size 16 bytes.
#line 1 "ENTRY_1019cad0"

void __stdcall FUN_1019cad0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019caf0; body size 16 bytes.
#line 1 "ENTRY_1019caf0"

void __stdcall FUN_1019caf0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cb10; body size 16 bytes.
#line 1 "ENTRY_1019cb10"

void __stdcall FUN_1019cb10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cb30; body size 16 bytes.
#line 1 "ENTRY_1019cb30"

void __stdcall FUN_1019cb30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cb50; body size 16 bytes.
#line 1 "ENTRY_1019cb50"

void __stdcall FUN_1019cb50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cb70; body size 16 bytes.
#line 1 "ENTRY_1019cb70"

void __stdcall FUN_1019cb70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cb90; body size 16 bytes.
#line 1 "ENTRY_1019cb90"

void __stdcall FUN_1019cb90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cbb0; body size 16 bytes.
#line 1 "ENTRY_1019cbb0"

void __stdcall FUN_1019cbb0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cbd0; body size 16 bytes.
#line 1 "ENTRY_1019cbd0"

void __stdcall FUN_1019cbd0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cbf0; body size 16 bytes.
#line 1 "ENTRY_1019cbf0"

void __stdcall FUN_1019cbf0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cc10; body size 16 bytes.
#line 1 "ENTRY_1019cc10"

void __stdcall FUN_1019cc10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cc30; body size 16 bytes.
#line 1 "ENTRY_1019cc30"

void __stdcall FUN_1019cc30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cc50; body size 16 bytes.
#line 1 "ENTRY_1019cc50"

void __stdcall FUN_1019cc50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cc70; body size 16 bytes.
#line 1 "ENTRY_1019cc70"

void __stdcall FUN_1019cc70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cc90; body size 16 bytes.
#line 1 "ENTRY_1019cc90"

void __stdcall FUN_1019cc90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ccb0; body size 16 bytes.
#line 1 "ENTRY_1019ccb0"

void __stdcall FUN_1019ccb0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ccd0; body size 16 bytes.
#line 1 "ENTRY_1019ccd0"

void __stdcall FUN_1019ccd0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ccf0; body size 16 bytes.
#line 1 "ENTRY_1019ccf0"

void __stdcall FUN_1019ccf0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cd10; body size 16 bytes.
#line 1 "ENTRY_1019cd10"

void __stdcall FUN_1019cd10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cd30; body size 16 bytes.
#line 1 "ENTRY_1019cd30"

void __stdcall FUN_1019cd30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cd50; body size 16 bytes.
#line 1 "ENTRY_1019cd50"

void __stdcall FUN_1019cd50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cd70; body size 16 bytes.
#line 1 "ENTRY_1019cd70"

void __stdcall FUN_1019cd70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cd90; body size 16 bytes.
#line 1 "ENTRY_1019cd90"

void __stdcall FUN_1019cd90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cdb0; body size 16 bytes.
#line 1 "ENTRY_1019cdb0"

void __stdcall FUN_1019cdb0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cdd0; body size 16 bytes.
#line 1 "ENTRY_1019cdd0"

void __stdcall FUN_1019cdd0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cdf0; body size 16 bytes.
#line 1 "ENTRY_1019cdf0"

void __stdcall FUN_1019cdf0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ce10; body size 16 bytes.
#line 1 "ENTRY_1019ce10"

void __stdcall FUN_1019ce10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ce30; body size 16 bytes.
#line 1 "ENTRY_1019ce30"

void __stdcall FUN_1019ce30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ce50; body size 16 bytes.
#line 1 "ENTRY_1019ce50"

void __stdcall FUN_1019ce50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ce70; body size 16 bytes.
#line 1 "ENTRY_1019ce70"

void __stdcall FUN_1019ce70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ce90; body size 16 bytes.
#line 1 "ENTRY_1019ce90"

void __stdcall FUN_1019ce90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ceb0; body size 16 bytes.
#line 1 "ENTRY_1019ceb0"

void __stdcall FUN_1019ceb0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ced0; body size 16 bytes.
#line 1 "ENTRY_1019ced0"

void __stdcall FUN_1019ced0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cef0; body size 16 bytes.
#line 1 "ENTRY_1019cef0"

void __stdcall FUN_1019cef0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cf10; body size 16 bytes.
#line 1 "ENTRY_1019cf10"

void __stdcall FUN_1019cf10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cf30; body size 16 bytes.
#line 1 "ENTRY_1019cf30"

void __stdcall FUN_1019cf30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cf50; body size 16 bytes.
#line 1 "ENTRY_1019cf50"

void __stdcall FUN_1019cf50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cf70; body size 16 bytes.
#line 1 "ENTRY_1019cf70"

void __stdcall FUN_1019cf70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cf90; body size 16 bytes.
#line 1 "ENTRY_1019cf90"

void __stdcall FUN_1019cf90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cfb0; body size 16 bytes.
#line 1 "ENTRY_1019cfb0"

void __stdcall FUN_1019cfb0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cfd0; body size 16 bytes.
#line 1 "ENTRY_1019cfd0"

void __stdcall FUN_1019cfd0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019cff0; body size 16 bytes.
#line 1 "ENTRY_1019cff0"

void __stdcall FUN_1019cff0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d010; body size 16 bytes.
#line 1 "ENTRY_1019d010"

void __stdcall FUN_1019d010(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d030; body size 16 bytes.
#line 1 "ENTRY_1019d030"

void __stdcall FUN_1019d030(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d050; body size 16 bytes.
#line 1 "ENTRY_1019d050"

void __stdcall FUN_1019d050(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d070; body size 16 bytes.
#line 1 "ENTRY_1019d070"

void __stdcall FUN_1019d070(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d090; body size 16 bytes.
#line 1 "ENTRY_1019d090"

void __stdcall FUN_1019d090(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d0b0; body size 16 bytes.
#line 1 "ENTRY_1019d0b0"

void __stdcall FUN_1019d0b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d0d0; body size 16 bytes.
#line 1 "ENTRY_1019d0d0"

void __stdcall FUN_1019d0d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d0f0; body size 16 bytes.
#line 1 "ENTRY_1019d0f0"

void __stdcall FUN_1019d0f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d110; body size 16 bytes.
#line 1 "ENTRY_1019d110"

void __stdcall FUN_1019d110(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d130; body size 16 bytes.
#line 1 "ENTRY_1019d130"

void __stdcall FUN_1019d130(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d150; body size 16 bytes.
#line 1 "ENTRY_1019d150"

void __stdcall FUN_1019d150(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d170; body size 16 bytes.
#line 1 "ENTRY_1019d170"

void __stdcall FUN_1019d170(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d190; body size 16 bytes.
#line 1 "ENTRY_1019d190"

void __stdcall FUN_1019d190(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d1b0; body size 16 bytes.
#line 1 "ENTRY_1019d1b0"

void __stdcall FUN_1019d1b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d1d0; body size 16 bytes.
#line 1 "ENTRY_1019d1d0"

void __stdcall FUN_1019d1d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d1f0; body size 16 bytes.
#line 1 "ENTRY_1019d1f0"

void __stdcall FUN_1019d1f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d210; body size 16 bytes.
#line 1 "ENTRY_1019d210"

void __stdcall FUN_1019d210(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d230; body size 16 bytes.
#line 1 "ENTRY_1019d230"

void __stdcall FUN_1019d230(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d250; body size 16 bytes.
#line 1 "ENTRY_1019d250"

void __stdcall FUN_1019d250(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d270; body size 16 bytes.
#line 1 "ENTRY_1019d270"

void __stdcall FUN_1019d270(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d290; body size 16 bytes.
#line 1 "ENTRY_1019d290"

void __stdcall FUN_1019d290(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d2b0; body size 16 bytes.
#line 1 "ENTRY_1019d2b0"

void __stdcall FUN_1019d2b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d2d0; body size 16 bytes.
#line 1 "ENTRY_1019d2d0"

void __stdcall FUN_1019d2d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d2f0; body size 16 bytes.
#line 1 "ENTRY_1019d2f0"

void __stdcall FUN_1019d2f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d310; body size 16 bytes.
#line 1 "ENTRY_1019d310"

void __stdcall FUN_1019d310(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d330; body size 16 bytes.
#line 1 "ENTRY_1019d330"

void __stdcall FUN_1019d330(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d350; body size 16 bytes.
#line 1 "ENTRY_1019d350"

void __stdcall FUN_1019d350(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d370; body size 16 bytes.
#line 1 "ENTRY_1019d370"

void __stdcall FUN_1019d370(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d390; body size 16 bytes.
#line 1 "ENTRY_1019d390"

void __stdcall FUN_1019d390(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d3b0; body size 16 bytes.
#line 1 "ENTRY_1019d3b0"

void __stdcall FUN_1019d3b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d3d0; body size 16 bytes.
#line 1 "ENTRY_1019d3d0"

void __stdcall FUN_1019d3d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d3f0; body size 16 bytes.
#line 1 "ENTRY_1019d3f0"

void __stdcall FUN_1019d3f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d410; body size 16 bytes.
#line 1 "ENTRY_1019d410"

void __stdcall FUN_1019d410(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d430; body size 16 bytes.
#line 1 "ENTRY_1019d430"

void __stdcall FUN_1019d430(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d450; body size 16 bytes.
#line 1 "ENTRY_1019d450"

void __stdcall FUN_1019d450(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d470; body size 16 bytes.
#line 1 "ENTRY_1019d470"

void __stdcall FUN_1019d470(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d490; body size 16 bytes.
#line 1 "ENTRY_1019d490"

void __stdcall FUN_1019d490(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d4b0; body size 16 bytes.
#line 1 "ENTRY_1019d4b0"

void __stdcall FUN_1019d4b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d4d0; body size 16 bytes.
#line 1 "ENTRY_1019d4d0"

void __stdcall FUN_1019d4d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d4f0; body size 16 bytes.
#line 1 "ENTRY_1019d4f0"

void __stdcall FUN_1019d4f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d510; body size 16 bytes.
#line 1 "ENTRY_1019d510"

void __stdcall FUN_1019d510(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d530; body size 16 bytes.
#line 1 "ENTRY_1019d530"

void __stdcall FUN_1019d530(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d550; body size 16 bytes.
#line 1 "ENTRY_1019d550"

void __stdcall FUN_1019d550(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d570; body size 16 bytes.
#line 1 "ENTRY_1019d570"

void __stdcall FUN_1019d570(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d590; body size 16 bytes.
#line 1 "ENTRY_1019d590"

void __stdcall FUN_1019d590(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d5b0; body size 16 bytes.
#line 1 "ENTRY_1019d5b0"

void __stdcall FUN_1019d5b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d5d0; body size 16 bytes.
#line 1 "ENTRY_1019d5d0"

void __stdcall FUN_1019d5d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d5f0; body size 16 bytes.
#line 1 "ENTRY_1019d5f0"

void __stdcall FUN_1019d5f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d610; body size 16 bytes.
#line 1 "ENTRY_1019d610"

void __stdcall FUN_1019d610(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d630; body size 16 bytes.
#line 1 "ENTRY_1019d630"

void __stdcall FUN_1019d630(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d650; body size 16 bytes.
#line 1 "ENTRY_1019d650"

void __stdcall FUN_1019d650(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d670; body size 16 bytes.
#line 1 "ENTRY_1019d670"

void __stdcall FUN_1019d670(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d690; body size 16 bytes.
#line 1 "ENTRY_1019d690"

void __stdcall FUN_1019d690(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d6b0; body size 16 bytes.
#line 1 "ENTRY_1019d6b0"

void __stdcall FUN_1019d6b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d6d0; body size 16 bytes.
#line 1 "ENTRY_1019d6d0"

void __stdcall FUN_1019d6d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d6f0; body size 16 bytes.
#line 1 "ENTRY_1019d6f0"

void __stdcall FUN_1019d6f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d710; body size 16 bytes.
#line 1 "ENTRY_1019d710"

void __stdcall FUN_1019d710(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d730; body size 16 bytes.
#line 1 "ENTRY_1019d730"

void __stdcall FUN_1019d730(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d750; body size 16 bytes.
#line 1 "ENTRY_1019d750"

void __stdcall FUN_1019d750(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d770; body size 16 bytes.
#line 1 "ENTRY_1019d770"

void __stdcall FUN_1019d770(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d790; body size 16 bytes.
#line 1 "ENTRY_1019d790"

void __stdcall FUN_1019d790(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d7b0; body size 16 bytes.
#line 1 "ENTRY_1019d7b0"

void __stdcall FUN_1019d7b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d7d0; body size 16 bytes.
#line 1 "ENTRY_1019d7d0"

void __stdcall FUN_1019d7d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d7f0; body size 16 bytes.
#line 1 "ENTRY_1019d7f0"

void __stdcall FUN_1019d7f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d810; body size 16 bytes.
#line 1 "ENTRY_1019d810"

void __stdcall FUN_1019d810(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d830; body size 16 bytes.
#line 1 "ENTRY_1019d830"

void __stdcall FUN_1019d830(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d850; body size 16 bytes.
#line 1 "ENTRY_1019d850"

void __stdcall FUN_1019d850(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d870; body size 16 bytes.
#line 1 "ENTRY_1019d870"

void __stdcall FUN_1019d870(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d890; body size 16 bytes.
#line 1 "ENTRY_1019d890"

void __stdcall FUN_1019d890(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d8b0; body size 16 bytes.
#line 1 "ENTRY_1019d8b0"

void __stdcall FUN_1019d8b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d8d0; body size 16 bytes.
#line 1 "ENTRY_1019d8d0"

void __stdcall FUN_1019d8d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d8f0; body size 16 bytes.
#line 1 "ENTRY_1019d8f0"

void __stdcall FUN_1019d8f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d910; body size 16 bytes.
#line 1 "ENTRY_1019d910"

void __stdcall FUN_1019d910(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d930; body size 16 bytes.
#line 1 "ENTRY_1019d930"

void __stdcall FUN_1019d930(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d950; body size 16 bytes.
#line 1 "ENTRY_1019d950"

void __stdcall FUN_1019d950(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d970; body size 16 bytes.
#line 1 "ENTRY_1019d970"

void __stdcall FUN_1019d970(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d990; body size 16 bytes.
#line 1 "ENTRY_1019d990"

void __stdcall FUN_1019d990(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d9b0; body size 16 bytes.
#line 1 "ENTRY_1019d9b0"

void __stdcall FUN_1019d9b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d9d0; body size 16 bytes.
#line 1 "ENTRY_1019d9d0"

void __stdcall FUN_1019d9d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019d9f0; body size 16 bytes.
#line 1 "ENTRY_1019d9f0"

void __stdcall FUN_1019d9f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019da10; body size 16 bytes.
#line 1 "ENTRY_1019da10"

void __stdcall FUN_1019da10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019da30; body size 16 bytes.
#line 1 "ENTRY_1019da30"

void __stdcall FUN_1019da30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019da50; body size 16 bytes.
#line 1 "ENTRY_1019da50"

void __stdcall FUN_1019da50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019da70; body size 16 bytes.
#line 1 "ENTRY_1019da70"

void __stdcall FUN_1019da70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019da90; body size 16 bytes.
#line 1 "ENTRY_1019da90"

void __stdcall FUN_1019da90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dab0; body size 16 bytes.
#line 1 "ENTRY_1019dab0"

void __stdcall FUN_1019dab0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dad0; body size 16 bytes.
#line 1 "ENTRY_1019dad0"

void __stdcall FUN_1019dad0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019daf0; body size 16 bytes.
#line 1 "ENTRY_1019daf0"

void __stdcall FUN_1019daf0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019db10; body size 16 bytes.
#line 1 "ENTRY_1019db10"

void __stdcall FUN_1019db10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019db30; body size 16 bytes.
#line 1 "ENTRY_1019db30"

void __stdcall FUN_1019db30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019db50; body size 16 bytes.
#line 1 "ENTRY_1019db50"

void __stdcall FUN_1019db50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019db70; body size 16 bytes.
#line 1 "ENTRY_1019db70"

void __stdcall FUN_1019db70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019db90; body size 16 bytes.
#line 1 "ENTRY_1019db90"

void __stdcall FUN_1019db90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dbb0; body size 16 bytes.
#line 1 "ENTRY_1019dbb0"

void __stdcall FUN_1019dbb0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dbd0; body size 16 bytes.
#line 1 "ENTRY_1019dbd0"

void __stdcall FUN_1019dbd0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dbf0; body size 16 bytes.
#line 1 "ENTRY_1019dbf0"

void __stdcall FUN_1019dbf0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dc10; body size 16 bytes.
#line 1 "ENTRY_1019dc10"

void __stdcall FUN_1019dc10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dc30; body size 16 bytes.
#line 1 "ENTRY_1019dc30"

void __stdcall FUN_1019dc30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dc50; body size 16 bytes.
#line 1 "ENTRY_1019dc50"

void __stdcall FUN_1019dc50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dc70; body size 16 bytes.
#line 1 "ENTRY_1019dc70"

void __stdcall FUN_1019dc70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dc90; body size 16 bytes.
#line 1 "ENTRY_1019dc90"

void __stdcall FUN_1019dc90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dcb0; body size 16 bytes.
#line 1 "ENTRY_1019dcb0"

void __stdcall FUN_1019dcb0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dcd0; body size 16 bytes.
#line 1 "ENTRY_1019dcd0"

void __stdcall FUN_1019dcd0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dcf0; body size 16 bytes.
#line 1 "ENTRY_1019dcf0"

void __stdcall FUN_1019dcf0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dd10; body size 16 bytes.
#line 1 "ENTRY_1019dd10"

void __stdcall FUN_1019dd10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dd30; body size 16 bytes.
#line 1 "ENTRY_1019dd30"

void __stdcall FUN_1019dd30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dd50; body size 16 bytes.
#line 1 "ENTRY_1019dd50"

void __stdcall FUN_1019dd50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dd70; body size 16 bytes.
#line 1 "ENTRY_1019dd70"

void __stdcall FUN_1019dd70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dd90; body size 16 bytes.
#line 1 "ENTRY_1019dd90"

void __stdcall FUN_1019dd90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ddb0; body size 16 bytes.
#line 1 "ENTRY_1019ddb0"

void __stdcall FUN_1019ddb0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ddd0; body size 16 bytes.
#line 1 "ENTRY_1019ddd0"

void __stdcall FUN_1019ddd0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ddf0; body size 16 bytes.
#line 1 "ENTRY_1019ddf0"

void __stdcall FUN_1019ddf0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019de10; body size 16 bytes.
#line 1 "ENTRY_1019de10"

void __stdcall FUN_1019de10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019de30; body size 16 bytes.
#line 1 "ENTRY_1019de30"

void __stdcall FUN_1019de30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019de50; body size 16 bytes.
#line 1 "ENTRY_1019de50"

void __stdcall FUN_1019de50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019de70; body size 16 bytes.
#line 1 "ENTRY_1019de70"

void __stdcall FUN_1019de70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019de90; body size 16 bytes.
#line 1 "ENTRY_1019de90"

void __stdcall FUN_1019de90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019deb0; body size 16 bytes.
#line 1 "ENTRY_1019deb0"

void __stdcall FUN_1019deb0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ded0; body size 16 bytes.
#line 1 "ENTRY_1019ded0"

void __stdcall FUN_1019ded0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019def0; body size 24 bytes.
#line 1 "ENTRY_1019def0"

void __stdcall FUN_1019def0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
                    
                    
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}


// Reference entry 1019df10; body size 16 bytes.
#line 1 "ENTRY_1019df10"

void __stdcall FUN_1019df10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019df30; body size 16 bytes.
#line 1 "ENTRY_1019df30"

void __stdcall FUN_1019df30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019df50; body size 16 bytes.
#line 1 "ENTRY_1019df50"

void __stdcall FUN_1019df50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019df70; body size 16 bytes.
#line 1 "ENTRY_1019df70"

void __stdcall FUN_1019df70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019df90; body size 16 bytes.
#line 1 "ENTRY_1019df90"

void __stdcall FUN_1019df90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dfb0; body size 16 bytes.
#line 1 "ENTRY_1019dfb0"

void __stdcall FUN_1019dfb0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dfd0; body size 16 bytes.
#line 1 "ENTRY_1019dfd0"

void __stdcall FUN_1019dfd0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019dff0; body size 16 bytes.
#line 1 "ENTRY_1019dff0"

void __stdcall FUN_1019dff0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e010; body size 16 bytes.
#line 1 "ENTRY_1019e010"

void __stdcall FUN_1019e010(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e030; body size 16 bytes.
#line 1 "ENTRY_1019e030"

void __stdcall FUN_1019e030(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e050; body size 16 bytes.
#line 1 "ENTRY_1019e050"

void __stdcall FUN_1019e050(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e070; body size 16 bytes.
#line 1 "ENTRY_1019e070"

void __stdcall FUN_1019e070(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e090; body size 16 bytes.
#line 1 "ENTRY_1019e090"

void __stdcall FUN_1019e090(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e0b0; body size 16 bytes.
#line 1 "ENTRY_1019e0b0"

void __stdcall FUN_1019e0b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e0d0; body size 16 bytes.
#line 1 "ENTRY_1019e0d0"

void __stdcall FUN_1019e0d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e0f0; body size 16 bytes.
#line 1 "ENTRY_1019e0f0"

void __stdcall FUN_1019e0f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e110; body size 16 bytes.
#line 1 "ENTRY_1019e110"

void __stdcall FUN_1019e110(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e130; body size 16 bytes.
#line 1 "ENTRY_1019e130"

void __stdcall FUN_1019e130(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e150; body size 16 bytes.
#line 1 "ENTRY_1019e150"

void __stdcall FUN_1019e150(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e170; body size 16 bytes.
#line 1 "ENTRY_1019e170"

void __stdcall FUN_1019e170(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e190; body size 16 bytes.
#line 1 "ENTRY_1019e190"

void __stdcall FUN_1019e190(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e1b0; body size 16 bytes.
#line 1 "ENTRY_1019e1b0"

void __stdcall FUN_1019e1b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e1d0; body size 16 bytes.
#line 1 "ENTRY_1019e1d0"

void __stdcall FUN_1019e1d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e1f0; body size 16 bytes.
#line 1 "ENTRY_1019e1f0"

void __stdcall FUN_1019e1f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e210; body size 16 bytes.
#line 1 "ENTRY_1019e210"

void __stdcall FUN_1019e210(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e230; body size 16 bytes.
#line 1 "ENTRY_1019e230"

void __stdcall FUN_1019e230(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e250; body size 16 bytes.
#line 1 "ENTRY_1019e250"

void __stdcall FUN_1019e250(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e270; body size 16 bytes.
#line 1 "ENTRY_1019e270"

void __stdcall FUN_1019e270(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e290; body size 16 bytes.
#line 1 "ENTRY_1019e290"

void __stdcall FUN_1019e290(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e2b0; body size 16 bytes.
#line 1 "ENTRY_1019e2b0"

void __stdcall FUN_1019e2b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e2d0; body size 16 bytes.
#line 1 "ENTRY_1019e2d0"

void __stdcall FUN_1019e2d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e2f0; body size 16 bytes.
#line 1 "ENTRY_1019e2f0"

void __stdcall FUN_1019e2f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e310; body size 16 bytes.
#line 1 "ENTRY_1019e310"

void __stdcall FUN_1019e310(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e330; body size 16 bytes.
#line 1 "ENTRY_1019e330"

void __stdcall FUN_1019e330(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e350; body size 16 bytes.
#line 1 "ENTRY_1019e350"

void __stdcall FUN_1019e350(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e370; body size 16 bytes.
#line 1 "ENTRY_1019e370"

void __stdcall FUN_1019e370(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e390; body size 16 bytes.
#line 1 "ENTRY_1019e390"

void __stdcall FUN_1019e390(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e3b0; body size 16 bytes.
#line 1 "ENTRY_1019e3b0"

void __stdcall FUN_1019e3b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e3d0; body size 16 bytes.
#line 1 "ENTRY_1019e3d0"

void __stdcall FUN_1019e3d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e3f0; body size 16 bytes.
#line 1 "ENTRY_1019e3f0"

void __stdcall FUN_1019e3f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e410; body size 16 bytes.
#line 1 "ENTRY_1019e410"

void __stdcall FUN_1019e410(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e430; body size 16 bytes.
#line 1 "ENTRY_1019e430"

void __stdcall FUN_1019e430(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e450; body size 16 bytes.
#line 1 "ENTRY_1019e450"

void __stdcall FUN_1019e450(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e470; body size 16 bytes.
#line 1 "ENTRY_1019e470"

void __stdcall FUN_1019e470(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e490; body size 16 bytes.
#line 1 "ENTRY_1019e490"

void __stdcall FUN_1019e490(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e4b0; body size 16 bytes.
#line 1 "ENTRY_1019e4b0"

void __stdcall FUN_1019e4b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e4d0; body size 16 bytes.
#line 1 "ENTRY_1019e4d0"

void __stdcall FUN_1019e4d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e4f0; body size 16 bytes.
#line 1 "ENTRY_1019e4f0"

void __stdcall FUN_1019e4f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e510; body size 16 bytes.
#line 1 "ENTRY_1019e510"

void __stdcall FUN_1019e510(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e530; body size 16 bytes.
#line 1 "ENTRY_1019e530"

void __stdcall FUN_1019e530(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e550; body size 16 bytes.
#line 1 "ENTRY_1019e550"

void __stdcall FUN_1019e550(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e570; body size 16 bytes.
#line 1 "ENTRY_1019e570"

void __stdcall FUN_1019e570(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e590; body size 16 bytes.
#line 1 "ENTRY_1019e590"

void __stdcall FUN_1019e590(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e5b0; body size 16 bytes.
#line 1 "ENTRY_1019e5b0"

void __stdcall FUN_1019e5b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e5d0; body size 16 bytes.
#line 1 "ENTRY_1019e5d0"

void __stdcall FUN_1019e5d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e5f0; body size 16 bytes.
#line 1 "ENTRY_1019e5f0"

void __stdcall FUN_1019e5f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e610; body size 16 bytes.
#line 1 "ENTRY_1019e610"

void __stdcall FUN_1019e610(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e630; body size 16 bytes.
#line 1 "ENTRY_1019e630"

void __stdcall FUN_1019e630(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e650; body size 16 bytes.
#line 1 "ENTRY_1019e650"

void __stdcall FUN_1019e650(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e670; body size 16 bytes.
#line 1 "ENTRY_1019e670"

void __stdcall FUN_1019e670(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e690; body size 16 bytes.
#line 1 "ENTRY_1019e690"

void __stdcall FUN_1019e690(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e6b0; body size 16 bytes.
#line 1 "ENTRY_1019e6b0"

void __stdcall FUN_1019e6b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e6d0; body size 16 bytes.
#line 1 "ENTRY_1019e6d0"

void __stdcall FUN_1019e6d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e6f0; body size 16 bytes.
#line 1 "ENTRY_1019e6f0"

void __stdcall FUN_1019e6f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e710; body size 16 bytes.
#line 1 "ENTRY_1019e710"

void __stdcall FUN_1019e710(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e730; body size 16 bytes.
#line 1 "ENTRY_1019e730"

void __stdcall FUN_1019e730(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e750; body size 16 bytes.
#line 1 "ENTRY_1019e750"

void __stdcall FUN_1019e750(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e770; body size 16 bytes.
#line 1 "ENTRY_1019e770"

void __stdcall FUN_1019e770(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e790; body size 16 bytes.
#line 1 "ENTRY_1019e790"

void __stdcall FUN_1019e790(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e7b0; body size 16 bytes.
#line 1 "ENTRY_1019e7b0"

void __stdcall FUN_1019e7b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e7d0; body size 16 bytes.
#line 1 "ENTRY_1019e7d0"

void __stdcall FUN_1019e7d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e7f0; body size 16 bytes.
#line 1 "ENTRY_1019e7f0"

void __stdcall FUN_1019e7f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e810; body size 16 bytes.
#line 1 "ENTRY_1019e810"

void __stdcall FUN_1019e810(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e830; body size 24 bytes.
#line 1 "ENTRY_1019e830"

void __stdcall FUN_1019e830(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
                    
                    
    (**(code **)(*param_1 + 0xc))();
    return;
  }
  return;
}


// Reference entry 1019e850; body size 16 bytes.
#line 1 "ENTRY_1019e850"

void __stdcall FUN_1019e850(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e870; body size 16 bytes.
#line 1 "ENTRY_1019e870"

void __stdcall FUN_1019e870(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e890; body size 16 bytes.
#line 1 "ENTRY_1019e890"

void __stdcall FUN_1019e890(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e8b0; body size 16 bytes.
#line 1 "ENTRY_1019e8b0"

void __stdcall FUN_1019e8b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e8d0; body size 16 bytes.
#line 1 "ENTRY_1019e8d0"

void __stdcall FUN_1019e8d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e8f0; body size 16 bytes.
#line 1 "ENTRY_1019e8f0"

void __stdcall FUN_1019e8f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e910; body size 16 bytes.
#line 1 "ENTRY_1019e910"

void __stdcall FUN_1019e910(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e930; body size 16 bytes.
#line 1 "ENTRY_1019e930"

void __stdcall FUN_1019e930(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e950; body size 16 bytes.
#line 1 "ENTRY_1019e950"

void __stdcall FUN_1019e950(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e970; body size 16 bytes.
#line 1 "ENTRY_1019e970"

void __stdcall FUN_1019e970(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e990; body size 16 bytes.
#line 1 "ENTRY_1019e990"

void __stdcall FUN_1019e990(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e9b0; body size 16 bytes.
#line 1 "ENTRY_1019e9b0"

void __stdcall FUN_1019e9b0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e9d0; body size 16 bytes.
#line 1 "ENTRY_1019e9d0"

void __stdcall FUN_1019e9d0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019e9f0; body size 16 bytes.
#line 1 "ENTRY_1019e9f0"

void __stdcall FUN_1019e9f0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ea10; body size 16 bytes.
#line 1 "ENTRY_1019ea10"

void __stdcall FUN_1019ea10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ea30; body size 16 bytes.
#line 1 "ENTRY_1019ea30"

void __stdcall FUN_1019ea30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019eaf0; body size 16 bytes.
#line 1 "ENTRY_1019eaf0"

void __stdcall FUN_1019eaf0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019eb10; body size 16 bytes.
#line 1 "ENTRY_1019eb10"

void __stdcall FUN_1019eb10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019eb30; body size 16 bytes.
#line 1 "ENTRY_1019eb30"

void __stdcall FUN_1019eb30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019eb50; body size 16 bytes.
#line 1 "ENTRY_1019eb50"

void __stdcall FUN_1019eb50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ebf0; body size 16 bytes.
#line 1 "ENTRY_1019ebf0"

void __stdcall FUN_1019ebf0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ec10; body size 16 bytes.
#line 1 "ENTRY_1019ec10"

void __stdcall FUN_1019ec10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ec30; body size 16 bytes.
#line 1 "ENTRY_1019ec30"

void __stdcall FUN_1019ec30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ec50; body size 16 bytes.
#line 1 "ENTRY_1019ec50"

void __stdcall FUN_1019ec50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ec70; body size 16 bytes.
#line 1 "ENTRY_1019ec70"

void __stdcall FUN_1019ec70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ec90; body size 16 bytes.
#line 1 "ENTRY_1019ec90"

void __stdcall FUN_1019ec90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ecb0; body size 16 bytes.
#line 1 "ENTRY_1019ecb0"

void __stdcall FUN_1019ecb0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ecd0; body size 16 bytes.
#line 1 "ENTRY_1019ecd0"

void __stdcall FUN_1019ecd0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ecf0; body size 16 bytes.
#line 1 "ENTRY_1019ecf0"

void __stdcall FUN_1019ecf0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ed90; body size 22 bytes.
#line 1 "ENTRY_1019ed90"

void __stdcall FUN_1019ed90(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1019edb0; body size 24 bytes.
#line 1 "ENTRY_1019edb0"

void __stdcall FUN_1019edb0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019edd0; body size 24 bytes.
#line 1 "ENTRY_1019edd0"

void __stdcall FUN_1019edd0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019edf0; body size 24 bytes.
#line 1 "ENTRY_1019edf0"

void __stdcall FUN_1019edf0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019ee10; body size 24 bytes.
#line 1 "ENTRY_1019ee10"

void __stdcall FUN_1019ee10(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
                    
                    
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


// Reference entry 1019ee30; body size 24 bytes.
#line 1 "ENTRY_1019ee30"

void __stdcall FUN_1019ee30(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
                    
                    
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


// Reference entry 1019ee50; body size 24 bytes.
#line 1 "ENTRY_1019ee50"

void __stdcall FUN_1019ee50(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019ee70; body size 24 bytes.
#line 1 "ENTRY_1019ee70"

void __stdcall FUN_1019ee70(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019ee90; body size 24 bytes.
#line 1 "ENTRY_1019ee90"

void __stdcall FUN_1019ee90(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019eeb0; body size 34 bytes.
#line 1 "ENTRY_1019eeb0"

void __stdcall FUN_1019eeb0(SCLibParameters *param_1)

{
  if ((SCLibParameters *)(param_1) != (SCLibParameters *)0x0) {
    ((SCLibParameters *)(param_1))->op_dtor();
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return;
}


// Reference entry 1019eee0; body size 24 bytes.
#line 1 "ENTRY_1019eee0"

void __stdcall FUN_1019eee0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
                    
                    
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}


// Reference entry 1019ef00; body size 16 bytes.
#line 1 "ENTRY_1019ef00"

void __stdcall FUN_1019ef00(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ef20; body size 24 bytes.
#line 1 "ENTRY_1019ef20"

void __stdcall FUN_1019ef20(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
                    
                    
    (**(code **)(*param_1 + 0x54))();
    return;
  }
  return;
}


// Reference entry 1019ef40; body size 16 bytes.
#line 1 "ENTRY_1019ef40"

void __stdcall FUN_1019ef40(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ef60; body size 16 bytes.
#line 1 "ENTRY_1019ef60"

void __stdcall FUN_1019ef60(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019ef80; body size 16 bytes.
#line 1 "ENTRY_1019ef80"

void __stdcall FUN_1019ef80(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 1019efa0; body size 24 bytes.
#line 1 "ENTRY_1019efa0"

void __stdcall FUN_1019efa0(int *param_1)

{
  if ((int *)(param_1) != (int *)0x0) {
                    
                    
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


// Reference entry 1019fe40; body size 25 bytes.
#line 1 "ENTRY_1019fe40"

undefined8 * FUN_1019fe40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(operator_new(8));
  if ((undefined8 *)(puVar1) != (undefined8 *)0x0) {
    *puVar1 = (undefined8)(0);
    return (undefined8 *)(puVar1);
  }
  return (undefined8 *)((undefined8 *)0x0);
}


// Reference entry 1019fe60; body size 32 bytes.
#line 1 "ENTRY_1019fe60"

undefined8 * FUN_1019fe60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(operator_new(0xc));
  if ((undefined8 *)(puVar1) != (undefined8 *)0x0) {
    *puVar1 = (undefined8)(0);
    *(undefined4*)(puVar1 + 1) = (undefined4)(0);
    return (undefined8 *)(puVar1);
  }
  return (undefined8 *)((undefined8 *)0x0);
}


// Reference entry 1019ff40; body size 45 bytes.
#line 1 "ENTRY_1019ff40"

undefined4 * FUN_1019ff40(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a00b0; body size 45 bytes.
#line 1 "ENTRY_101a00b0"

undefined4 * FUN_101a00b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionFilterSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a00f0; body size 45 bytes.
#line 1 "ENTRY_101a00f0"

undefined4 * FUN_101a00f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0130; body size 52 bytes.
#line 1 "ENTRY_101a0130"

undefined4 * FUN_101a0130(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIAutomationDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0660; body size 52 bytes.
#line 1 "ENTRY_101a0660"

undefined4 * FUN_101a0660(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIClipboardDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a07c0; body size 52 bytes.
#line 1 "ENTRY_101a07c0"

undefined4 * FUN_101a07c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIEventSinkSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a08e0; body size 45 bytes.
#line 1 "ENTRY_101a08e0"

undefined4 * FUN_101a08e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIGetAboutSonosStringCBSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0920; body size 52 bytes.
#line 1 "ENTRY_101a0920"

undefined4 * FUN_101a0920(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIGetSonosPlaylistsCBSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0970; body size 52 bytes.
#line 1 "ENTRY_101a0970"

undefined4 * FUN_101a0970(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIHapticDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0aa0; body size 45 bytes.
#line 1 "ENTRY_101a0aa0"

undefined4 * FUN_101a0aa0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCILifecycleAppProviderSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0e60; body size 52 bytes.
#line 1 "ENTRY_101a0e60"

undefined4 * FUN_101a0e60(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCINetworkManagementDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0eb0; body size 45 bytes.
#line 1 "ENTRY_101a0eb0"

undefined4 * FUN_101a0eb0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCINewWizDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0f60; body size 45 bytes.
#line 1 "ENTRY_101a0f60"

undefined4 * FUN_101a0f60(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIOpCBSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0fa0; body size 59 bytes.
#line 1 "ENTRY_101a0fa0"

undefined4 * FUN_101a0fa0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x18));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIPlatformDateTimeProvider);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1190; body size 52 bytes.
#line 1 "ENTRY_101a1190"

undefined4 * FUN_101a1190(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIServiceAppInteropSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a11e0; body size 45 bytes.
#line 1 "ENTRY_101a11e0"

undefined4 * FUN_101a11e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIStackTraceCaptureDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1320; body size 52 bytes.
#line 1 "ENTRY_101a1320"

undefined4 * FUN_101a1320(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUINotificationsDelegate);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1440; body size 45 bytes.
#line 1 "ENTRY_101a1440"

undefined4 * FUN_101a1440(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIUrlSessionCallbackSwigBase);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1570; body size 38 bytes.
#line 1 "ENTRY_101a1570"

undefined4 * FUN_101a1570(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(0);
    puVar1[1] = (undefined4)(0);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1600; body size 59 bytes.
#line 1 "ENTRY_101a1600"

undefined4 * FUN_101a1600(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x18));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIVpnDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a16b0; body size 24 bytes.
#line 1 "ENTRY_101a16b0"

undefined4 * FUN_101a16b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(4));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1800; body size 24 bytes.
#line 1 "ENTRY_101a1800"

undefined4 FUN_101a1800(void)

{
  SCImageResource *this_;
  undefined4 uVar1;
  
  this_ = (SCImageResource *)(operator_new(8));
  if ((SCImageResource *)(this_) != (SCImageResource *)0x0) {
    uVar1 = (undefined4)(((SCImageResource *)(this_))->op_ctor());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 101a19a0; body size 35 bytes.
#line 1 "ENTRY_101a19a0"

undefined4 * FUN_101a19a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(8));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(param_1);
    puVar1[1] = (undefined4)(param_2);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1a30; body size 38 bytes.
#line 1 "ENTRY_101a1a30"

undefined4 * FUN_101a1a30(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibAssertionFailureCallback);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1a60; body size 38 bytes.
#line 1 "ENTRY_101a1a60"

undefined4 * FUN_101a1a60(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibCallUIThreadCallback);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1a90; body size 45 bytes.
#line 1 "ENTRY_101a1a90"

undefined4 * FUN_101a1a90(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibCustomSubWizardCallback);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1ad0; body size 45 bytes.
#line 1 "ENTRY_101a1ad0"

undefined4 * FUN_101a1ad0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibDelegateFactory);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1b10; body size 38 bytes.
#line 1 "ENTRY_101a1b10"

undefined4 * FUN_101a1b10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibDiagnosticConsoleLogCallback);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1b40; body size 38 bytes.
#line 1 "ENTRY_101a1b40"

undefined4 * FUN_101a1b40(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibDiagnosticExtraInfoCallback);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1b70; body size 38 bytes.
#line 1 "ENTRY_101a1b70"

undefined4 * FUN_101a1b70(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibLogCallback);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1ba0; body size 27 bytes.
#line 1 "ENTRY_101a1ba0"

undefined4 FUN_101a1ba0(void)

{
  SCLibParameters *this_;
  undefined4 uVar1;
  
  this_ = (SCLibParameters *)(operator_new(0x108));
  if ((SCLibParameters *)(this_) != (SCLibParameters *)0x0) {
    uVar1 = (undefined4)(((SCLibParameters *)(this_))->op_ctor());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 101a1bd0; body size 38 bytes.
#line 1 "ENTRY_101a1bd0"

undefined4 * FUN_101a1bd0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibPlatformStringCallback);
    puVar1[2] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1cf0; body size 45 bytes.
#line 1 "ENTRY_101a1cf0"

undefined4 * FUN_101a1cf0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibTruncatedStringsCallback);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1d30; body size 24 bytes.
#line 1 "ENTRY_101a1d30"

undefined4 FUN_101a1d30(void)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = (void *)(operator_new(0x48));
  if ((void *)(pvVar1) != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10222ce0());
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 101a1d50; body size 30 bytes.
#line 1 "ENTRY_101a1d50"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_101a1d50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_1211905c = (int)(param_1);
  DAT_12119064 = (int)(param_2);
  DAT_1211906c = (int)(param_3);
  return;
}


// Reference entry 101a1e00; body size 30 bytes.
#line 1 "ENTRY_101a1e00"

void __stdcall FUN_101a1e00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_121a06cc = (int)(param_1);
  DAT_121a06d0 = (int)(param_2);
  DAT_121a06d4 = (int)(param_3);
  return;
}


// Reference entry 101a1e50; body size 45 bytes.
#line 1 "ENTRY_101a1e50"

float10 FUN_101a1e50(float param_1)

{
  double dVar1;
  
  dVar1 = (double)(ceil((double)param_1));
  return (float10)((float10)(float)dVar1);
}


// Reference entry 101a2000; body size 18 bytes.
#line 1 "ENTRY_101a2000"

void __fastcall FUN_101a2000(int param_1)

{
  if (*(void **)(param_1 + 0x3fc) != (void *)((0x0))) {
    free(*(void **)(param_1 + 0x3fc));
  }
  return;
}


// Reference entry 101a2b10; body size 41 bytes.
#line 1 "ENTRY_101a2b10"

int * __thiscall Recovered_Bulk::FUN_101a2b10(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_1);
}


// Reference entry 101a2b50; body size 41 bytes.
#line 1 "ENTRY_101a2b50"

int * __thiscall Recovered_Bulk::FUN_101a2b50(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_1);
}


// Reference entry 101a2b90; body size 41 bytes.
#line 1 "ENTRY_101a2b90"

int * __thiscall Recovered_Bulk::FUN_101a2b90(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_1);
}


// Reference entry 101a2bd0; body size 17 bytes.
#line 1 "ENTRY_101a2bd0"

void __fastcall FUN_101a2bd0(undefined4 *param_1)

{
  thunk_FUN_101a2210(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 101a3370; body size 20 bytes.
#line 1 "ENTRY_101a3370"

void __thiscall Recovered_Bulk::FUN_101a3370(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101a2210(param_2,param_3,param_1);
  return;
}


// Reference entry 101a3710; body size 32 bytes.
#line 1 "ENTRY_101a3710"

void __fastcall FUN_101a3710(undefined4 *param_1)

{
  if ((char *)*param_1 != (char *)((0x0))) {
    _strdup((char *)*param_1);
    return;
  }
  _strdup("");
  return;
}


// Reference entry 101a3cc0; body size 60 bytes.
#line 1 "ENTRY_101a3cc0"

void __stdcall FUN_101a3cc0(int param_1,int param_2)

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


// Reference entry 101a4420; body size 47 bytes.
#line 1 "ENTRY_101a4420"

bool __thiscall Recovered_Bulk::FUN_101a4420(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)((0x0))) {
    puVar3 = (undefined1 *)((undefined1 *)*param_1);
  }
  iVar1 = (int)(thunk_FUN_1106a250(puVar3,puVar2,0));
  return (bool)(iVar1 == 0);
}


// Reference entry 101a4460; body size 43 bytes.
#line 1 "ENTRY_101a4460"

bool __thiscall Recovered_Bulk::FUN_101a4460(undefined1 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_1);
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(param_2) != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(param_2);
  }
  iVar1 = (int)(thunk_FUN_1106a250(puVar2,puVar3,0));
  return (bool)(iVar1 == 0);
}


// Reference entry 101a45a0; body size 19 bytes.
#line 1 "ENTRY_101a45a0"

void FUN_101a45a0(SCStr *param_1,char *param_2)

{
 try {
  ((SCStr *)(param_1))->int_formatv(param_2,&stack0x0000000c);
  return;

 } catch (...) { }
}


// Reference entry 101a4870; body size 25 bytes.
#line 1 "ENTRY_101a4870"

void __fastcall FUN_101a4870(int *param_1)

{
  int *piVar1;
  
  if ((*param_1 != 0) && (piVar1 = (int *)(*param_1 + -0x10), *piVar1 < 0xffff)) {
    thunk_FUN_1123fce0(piVar1);
  }
  return;
}


// Reference entry 101a4bf0; body size 60 bytes.
#line 1 "ENTRY_101a4bf0"

void __fastcall FUN_101a4bf0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*param_1);
  if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
     (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
    *(undefined4*)(iVar1 + -8) = (undefined4)(0);
    *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
    thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
    free((void *)(iVar1 + -0x10));
  }
  return;
}


// Reference entry 101a4ca0; body size 38 bytes.
#line 1 "ENTRY_101a4ca0"

int __fastcall FUN_101a4ca0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = (char *)((char *)*param_1);
  if ((char *)(pcVar2) != (char *)0x0) {
    iVar4 = (int)(*(int *)(pcVar2 + -0xc));
    if (iVar4 == 0) {
      pcVar3 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar3);
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      iVar4 = (int)((int)pcVar3 - (int)(pcVar2 + 1));
      *(int*)(pcVar2 + -0xc) = (int)(iVar4);
    }
    return (int)(iVar4);
  }
  return (int)(0);
}


// Reference entry 101a4cd0; body size 38 bytes.
#line 1 "ENTRY_101a4cd0"

int __fastcall FUN_101a4cd0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = (char *)((char *)*param_1);
  if ((char *)(pcVar2) != (char *)0x0) {
    iVar4 = (int)(*(int *)(pcVar2 + -0xc));
    if (iVar4 == 0) {
      pcVar3 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar3);
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      iVar4 = (int)((int)pcVar3 - (int)(pcVar2 + 1));
      *(int*)(pcVar2 + -0xc) = (int)(iVar4);
    }
    return (int)(iVar4);
  }
  return (int)(0);
}


// Reference entry 101a4d40; body size 47 bytes.
#line 1 "ENTRY_101a4d40"

bool __thiscall Recovered_Bulk::FUN_101a4d40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)((0x0))) {
    puVar3 = (undefined1 *)((undefined1 *)*param_1);
  }
  iVar1 = (int)(thunk_FUN_1106a250(puVar3,puVar2,0));
  return (bool)(iVar1 < 0);
}


// Reference entry 101a4d80; body size 43 bytes.
#line 1 "ENTRY_101a4d80"

bool __thiscall Recovered_Bulk::FUN_101a4d80(undefined1 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_1);
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(param_2) != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(param_2);
  }
  iVar1 = (int)(thunk_FUN_1106a250(puVar2,puVar3,0));
  return (bool)(iVar1 < 0);
}


// Reference entry 101a4fe0; body size 62 bytes.
#line 1 "ENTRY_101a4fe0"

int __fastcall FUN_101a4fe0(int *param_1)

{
  int iVar1;
  
  if (0xfffe < *param_1) {
    return (int)(0xffff);
  }
  iVar1 = (int)(thunk_FUN_1123fcd0(param_1));
  if (iVar1 == 0) {
    param_1[2] = (int)(0);
    param_1[1] = (int)(0);
    thunk_FUN_113cfb70(param_1 + 4,param_1[3]);
    free(param_1);
    iVar1 = (int)(0);
  }
  return (int)(iVar1);
}


// Reference entry 101a5590; body size 38 bytes.
#line 1 "ENTRY_101a5590"

void __thiscall Recovered_Bulk::FUN_101a5590(ushort *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (uint)(0);
  if ((ushort *)(param_2) != (ushort *)0x0) {
    uVar1 = (ushort)(*param_2);
    while (uVar1 != 0) {
      uVar2 = (uint)(uVar2 + 1);
      uVar1 = (ushort)(param_2[uVar2]);
    }
  }
  ((SCStr *)(param_1))->setFromUTF16(param_2,uVar2);
  return;
}


// Reference entry 101a6af0; body size 32 bytes.
#line 1 "ENTRY_101a6af0"

int __fastcall FUN_101a6af0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*param_1);
  if (iVar1 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(*(int *)(iVar1 + -8));
    if (iVar2 == 0) {
      iVar2 = (int)(thunk_FUN_11069bc0(iVar1));
      *(int*)(iVar1 + -8) = (int)(iVar2);
      return (int)(iVar2);
    }
  }
  return (int)(iVar2);
}


// Reference entry 101a6b20; body size 27 bytes.
#line 1 "ENTRY_101a6b20"

void __fastcall FUN_101a6b20(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = (undefined4)(thunk_FUN_11069bc0(param_1 + 0x10));
    *(undefined4*)(param_1 + 8) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 101a8d90; body size 41 bytes.
#line 1 "ENTRY_101a8d90"

undefined4 * __thiscall Recovered_Bulk::FUN_101a8d90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101a8dd0; body size 24 bytes.
#line 1 "ENTRY_101a8dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_101a8dd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101a8df0; body size 24 bytes.
#line 1 "ENTRY_101a8df0"

undefined4 * __thiscall Recovered_Bulk::FUN_101a8df0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101a8fe0; body size 19 bytes.
#line 1 "ENTRY_101a8fe0"

void __fastcall FUN_101a8fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101a90e0; body size 60 bytes.
#line 1 "ENTRY_101a90e0"

void __fastcall FUN_101a90e0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101a9140; body size 60 bytes.
#line 1 "ENTRY_101a9140"

void __fastcall FUN_101a9140(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101a93e0; body size 32 bytes.
#line 1 "ENTRY_101a93e0"

undefined4 __thiscall Recovered_Bulk::FUN_101a93e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101a8f30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4)(param_1);
}


// Reference entry 101a9410; body size 45 bytes.
#line 1 "ENTRY_101a9410"

undefined4 * __thiscall Recovered_Bulk::FUN_101a9410(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101a9450; body size 45 bytes.
#line 1 "ENTRY_101a9450"

undefined4 * __thiscall Recovered_Bulk::FUN_101a9450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101a9490; body size 33 bytes.
#line 1 "ENTRY_101a9490"

undefined4 * __thiscall Recovered_Bulk::FUN_101a9490(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101a9d20; body size 38 bytes.
#line 1 "ENTRY_101a9d20"

void __thiscall Recovered_Bulk::FUN_101a9d20(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = (undefined4)(param_2);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 4);
    return;
  }
  thunk_FUN_101a6f70(puVar1,&param_2);
  return;
}


// Reference entry 101aa430; body size 49 bytes.
#line 1 "ENTRY_101aa430"

void __thiscall Recovered_Bulk::FUN_101aa430(uint param_2)
{
  int *param_1 = (int *)this;
  void *_Src;
  void *_Dst;
  uint uVar1;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x14))());
  if (param_2 < uVar1) {
    _Dst = (void *)((void *)(param_1[2] + param_2 * 4));
    _Src = (void *)((void *)((int)_Dst + 4));
    memmove(_Dst,_Src,param_1[3] - (int)_Src);
    param_1[3] = (int)(param_1[3] + -4);
  }
  return;
}


// Reference entry 101aa540; body size 30 bytes.
#line 1 "ENTRY_101aa540"

void __fastcall FUN_101aa540(int param_1)

{
  thunk_FUN_101a83f0(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),
                     *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2,LAB_101aa510);
  return;
}


// Reference entry 101aa570; body size 33 bytes.
#line 1 "ENTRY_101aa570"

void __fastcall FUN_101aa570(uint param_1)

{
  undefined4 local_4;
  
  local_4 = (undefined4)(param_1 & 0xffffff00);
  thunk_FUN_101a8700(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),
                     *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2,local_4);
  return;
}


// Reference entry 101ab320; body size 55 bytes.
#line 1 "ENTRY_101ab320"

void __thiscall Recovered_Bulk::FUN_101ab320(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  iVar2 = (int)(*param_2);
  if (iVar1 != 0) {
    iVar3 = (int)(*(int *)(param_1 + 0xc));
    piVar4 = (int *)(*(int **)(iVar2 + 4));
    piVar5 = (int *)(*(int **)(param_1 + 8));
    *(int**)(iVar3 + 4) = (int *)(piVar4);
    *piVar4 = (int)(iVar3);
    *piVar5 = (int)(iVar2);
    *(int**)(iVar2 + 4) = (int *)(piVar5);
    param_2[1] = (int)(param_2[1] + iVar1);
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
  }
  return;
}


// Reference entry 101ab9e0; body size 30 bytes.
#line 1 "ENTRY_101ab9e0"

void __thiscall Recovered_Bulk::FUN_101ab9e0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101ac3a0; body size 21 bytes.
#line 1 "ENTRY_101ac3a0"

undefined4 * __thiscall Recovered_Bulk::FUN_101ac3a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (undefined4 *)(param_1);
}


// Reference entry 101ac3c0; body size 27 bytes.
#line 1 "ENTRY_101ac3c0"

undefined4 * __fastcall FUN_101ac3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101ac420; body size 41 bytes.
#line 1 "ENTRY_101ac420"

undefined4 * __thiscall Recovered_Bulk::FUN_101ac420(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ac990; body size 24 bytes.
#line 1 "ENTRY_101ac990"

undefined4 * __thiscall Recovered_Bulk::FUN_101ac990(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101acad0; body size 39 bytes.
#line 1 "ENTRY_101acad0"

undefined4 * __fastcall FUN_101acad0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101aced0; body size 46 bytes.
#line 1 "ENTRY_101aced0"

undefined4 * __thiscall Recovered_Bulk::FUN_101aced0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHouseholdEventSink);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  piVar1 = (int *)(*(int **)(param_2 + 8));
  param_1[2] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ada20; body size 19 bytes.
#line 1 "ENTRY_101ada20"

void __fastcall FUN_101ada20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101ada40; body size 19 bytes.
#line 1 "ENTRY_101ada40"

void __fastcall FUN_101ada40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101ada60; body size 19 bytes.
#line 1 "ENTRY_101ada60"

void __fastcall FUN_101ada60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101ae8e0; body size 60 bytes.
#line 1 "ENTRY_101ae8e0"

void __fastcall FUN_101ae8e0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101ae940; body size 19 bytes.
#line 1 "ENTRY_101ae940"

void __fastcall FUN_101ae940(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 101aebf0; body size 25 bytes.
#line 1 "ENTRY_101aebf0"

void __fastcall FUN_101aebf0(undefined4 *param_1)

{
  thunk_FUN_101ab700(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 101b1580; body size 45 bytes.
#line 1 "ENTRY_101b1580"

undefined4 * __thiscall Recovered_Bulk::FUN_101b1580(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b15c0; body size 45 bytes.
#line 1 "ENTRY_101b15c0"

undefined4 * __thiscall Recovered_Bulk::FUN_101b15c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1600; body size 45 bytes.
#line 1 "ENTRY_101b1600"

undefined4 * __thiscall Recovered_Bulk::FUN_101b1600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1640; body size 45 bytes.
#line 1 "ENTRY_101b1640"

undefined4 * __thiscall Recovered_Bulk::FUN_101b1640(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1730; body size 33 bytes.
#line 1 "ENTRY_101b1730"

undefined4 * __thiscall Recovered_Bulk::FUN_101b1730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_AnacapaLauncherCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1760; body size 33 bytes.
#line 1 "ENTRY_101b1760"

undefined4 * __thiscall Recovered_Bulk::FUN_101b1760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b19d0; body size 32 bytes.
#line 1 "ENTRY_101b19d0"

undefined4 __thiscall Recovered_Bulk::FUN_101b19d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103026f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4)(param_1);
}


// Reference entry 101b1aa0; body size 45 bytes.
#line 1 "ENTRY_101b1aa0"

undefined4 * __thiscall Recovered_Bulk::FUN_101b1aa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1ae0; body size 33 bytes.
#line 1 "ENTRY_101b1ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_101b1ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1b10; body size 33 bytes.
#line 1 "ENTRY_101b1b10"

undefined4 * __thiscall Recovered_Bulk::FUN_101b1b10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1b40; body size 33 bytes.
#line 1 "ENTRY_101b1b40"

undefined4 * __thiscall Recovered_Bulk::FUN_101b1b40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1b70; body size 33 bytes.
#line 1 "ENTRY_101b1b70"

undefined4 * __thiscall Recovered_Bulk::FUN_101b1b70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1ba0; body size 35 bytes.
#line 1 "ENTRY_101b1ba0"

SCLibrary * __thiscall Recovered_Bulk::FUN_101b1ba0(byte param_2)
{
  SCLibrary *param_1 = (SCLibrary *)this;
  ((SCLibrary *)(param_1))->op_dtor();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1b8);
  }
  return (SCLibrary *)(param_1);
}


// Reference entry 101b1bd0; body size 33 bytes.
#line 1 "ENTRY_101b1bd0"

undefined4 * __thiscall Recovered_Bulk::FUN_101b1bd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b1cc0; body size 25 bytes.
#line 1 "ENTRY_101b1cc0"

void __fastcall FUN_101b1cc0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 101b2450; body size 31 bytes.
#line 1 "ENTRY_101b2450"

int * FUN_101b2450(int *param_1)

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


// Reference entry 101b2520; body size 23 bytes.
#line 1 "ENTRY_101b2520"

void __fastcall FUN_101b2520(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_101b1fc0(*(int *)(param_1 + 0x10) + 1));
  thunk_FUN_101b2090(uVar1);
  return;
}


// Reference entry 101b2540; body size 21 bytes.
#line 1 "ENTRY_101b2540"

void __fastcall FUN_101b2540(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_101b1fc0(*(undefined4 *)(param_1 + 0x10)));
  thunk_FUN_101b2090(uVar1);
  return;
}


// Reference entry 101b25f0; body size 25 bytes.
#line 1 "ENTRY_101b25f0"

void __fastcall FUN_101b25f0(undefined4 *param_1)

{
  thunk_FUN_101ab700(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 101b2980; body size 61 bytes.
#line 1 "ENTRY_101b2980"

void __thiscall Recovered_Bulk::FUN_101b2980(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101b29d0; body size 61 bytes.
#line 1 "ENTRY_101b29d0"

void __thiscall Recovered_Bulk::FUN_101b29d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101b2a20; body size 61 bytes.
#line 1 "ENTRY_101b2a20"

void __thiscall Recovered_Bulk::FUN_101b2a20(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101b2a70; body size 61 bytes.
#line 1 "ENTRY_101b2a70"

void __thiscall Recovered_Bulk::FUN_101b2a70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101b2ac0; body size 30 bytes.
#line 1 "ENTRY_101b2ac0"

void __thiscall Recovered_Bulk::FUN_101b2ac0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101b2d50; body size 42 bytes.
#line 1 "ENTRY_101b2d50"

undefined4 __thiscall Recovered_Bulk::FUN_101b2d50(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((*(int **)(param_1 + 0x70) != (int *)((0x0))) && (*(int *)(param_1 + 0x38 + param_2 * 4) == 2)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x28))(param_2));
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 101b2d90; body size 42 bytes.
#line 1 "ENTRY_101b2d90"

undefined4 __thiscall Recovered_Bulk::FUN_101b2d90(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((*(int **)(param_1 + 0x70) != (int *)((0x0))) && (*(int *)(param_1 + 0x38 + param_2 * 4) == 2)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x24))(param_2));
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 101b2dd0; body size 42 bytes.
#line 1 "ENTRY_101b2dd0"

undefined4 __thiscall Recovered_Bulk::FUN_101b2dd0(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((*(int **)(param_1 + 0x70) != (int *)((0x0))) && (*(int *)(param_1 + 0x38 + param_2 * 4) != 1)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x20))(param_2));
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 101b2e80; body size 32 bytes.
#line 1 "ENTRY_101b2e80"

void __fastcall FUN_101b2e80(int *param_1)

{
  thunk_FUN_101ab700(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 101b4d40; body size 28 bytes.
#line 1 "ENTRY_101b4d40"

void __fastcall FUN_101b4d40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 101b4d70; body size 63 bytes.
#line 1 "ENTRY_101b4d70"

undefined4 __thiscall Recovered_Bulk::FUN_101b4d70(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((*(int **)(param_1 + 0x70) != (int *)((0x0))) && (*(int *)(param_1 + 0x38 + param_2 * 4) == 2)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x28))(param_2));
    if (cVar1 != '\0') {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x34))(param_2));
      if (cVar1 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 101b5270; body size 21 bytes.
#line 1 "ENTRY_101b5270"

SCStr * __stdcall FUN_101b5270(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ability_manager");
  return (SCStr *)(param_1);
}


// Reference entry 101b5290; body size 28 bytes.
#line 1 "ENTRY_101b5290"

int * __thiscall Recovered_Bulk::FUN_101b5290(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x158));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 101b5e00; body size 52 bytes.
#line 1 "ENTRY_101b5e00"

undefined4 __thiscall Recovered_Bulk::FUN_101b5e00(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (*(int **)(param_1 + 0x70) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x1c))(param_3,param_2));
    if ((cVar1 != '\0') && (*(int *)(param_1 + 0x38 + param_3 * 4) != 3)) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 101b5e50; body size 27 bytes.
#line 1 "ENTRY_101b5e50"

int __thiscall Recovered_Bulk::FUN_101b5e50(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10 + param_2 * 4));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 101b5ef0; body size 19 bytes.
#line 1 "ENTRY_101b5ef0"

uint __fastcall FUN_101b5ef0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x50))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 101b7cd0; body size 62 bytes.
#line 1 "ENTRY_101b7cd0"

uint __thiscall Recovered_Bulk::FUN_101b7cd0(int param_2)
{
  int param_1 = (int )this;
  uint in_EAX;
  uint uVar1;
  
  if ((*(int **)(param_1 + 0x70) != (int *)((0x0))) && (*(int *)(param_1 + 0x38 + param_2 * 4) == 2)) {
    in_EAX = (uint)((**(code **)(**(int **)(param_1 + 0x70) + 0x24))(param_2));
    if ((char)in_EAX != '\0') {
      *(undefined1*)(param_2 + 100 + param_1) = (undefined1)(1);
      uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x70) + 0x30))(param_2));
      return (uint)(uVar1);
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 101b7d20; body size 17 bytes.
#line 1 "ENTRY_101b7d20"

uint __fastcall FUN_101b7d20(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x70) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x70) + 0x3c))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 101b7f90; body size 24 bytes.
#line 1 "ENTRY_101b7f90"

void __thiscall Recovered_Bulk::FUN_101b7f90(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0xc4))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 101b7fb0; body size 24 bytes.
#line 1 "ENTRY_101b7fb0"

void __thiscall Recovered_Bulk::FUN_101b7fb0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 200))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 101b7fd0; body size 63 bytes.
#line 1 "ENTRY_101b7fd0"

undefined4 __thiscall Recovered_Bulk::FUN_101b7fd0(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((*(int **)(param_1 + 0x70) != (int *)((0x0))) && (*(int *)(param_1 + 0x38 + param_2 * 4) != 1)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x20))(param_2));
    if (cVar1 != '\0') {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x2c))(param_2));
      if (cVar1 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 101b8080; body size 24 bytes.
#line 1 "ENTRY_101b8080"

void __thiscall Recovered_Bulk::FUN_101b8080(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0xcc))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 101b80e0; body size 41 bytes.
#line 1 "ENTRY_101b80e0"

undefined4 * __thiscall Recovered_Bulk::FUN_101b80e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b8120; body size 24 bytes.
#line 1 "ENTRY_101b8120"

undefined4 * __thiscall Recovered_Bulk::FUN_101b8120(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b8260; body size 19 bytes.
#line 1 "ENTRY_101b8260"

void __fastcall FUN_101b8260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101b83f0; body size 45 bytes.
#line 1 "ENTRY_101b83f0"

undefined4 * __thiscall Recovered_Bulk::FUN_101b83f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b8430; body size 33 bytes.
#line 1 "ENTRY_101b8430"

undefined4 * __thiscall Recovered_Bulk::FUN_101b8430(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b8530; body size 47 bytes.
#line 1 "ENTRY_101b8530"

char * __thiscall Recovered_Bulk::FUN_101b8530(char *param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x18));
  }
  ((SCStr *)(param_2))->stringWithFormat("%d.%d-%05d%s",*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_1 + 0x10),puVar1);
  return (char *)(param_2);
}


// Reference entry 101b8720; body size 21 bytes.
#line 1 "ENTRY_101b8720"

SCStr * __stdcall FUN_101b8720(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCVersion");
  return (SCStr *)(param_1);
}


// Reference entry 101b8740; body size 62 bytes.
#line 1 "ENTRY_101b8740"

bool __thiscall Recovered_Bulk::FUN_101b8740(char *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  int iVar1;
  
  if ((char *)(param_2) != (char *)0x0) {
    iVar1 = (int)(((SCStr *)(param_1))->format(param_2));
    return (bool)(-1 < iVar1);
  }
  return (bool)(false);
}


// Reference entry 101b87d0; body size 20 bytes.
#line 1 "ENTRY_101b87d0"

SCStr * __thiscall Recovered_Bulk::FUN_101b87d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x18));
  return (SCStr *)(param_2);
}


// Reference entry 101b8f90; body size 34 bytes.
#line 1 "ENTRY_101b8f90"

void __thiscall Recovered_Bulk::FUN_101b8f90(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(param_2);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_3);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(param_4);
  *(undefined2*)(param_1 + 0x14) = (undefined2)(0);
  *(undefined1*)(param_1 + 0x16) = (undefined1)(0);
  return;
}


// Reference entry 101b9160; body size 37 bytes.
#line 1 "ENTRY_101b9160"

void FUN_101b9160(undefined4 param_1,undefined4 param_2)

{
 try {
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_101b9120(param_1,0xffffffff,param_2,0,&stack0x0000000c));
  __stdio_common_vsscanf(*puVar1,puVar1[1]);
  return;

 } catch (...) { }
}


// Reference entry 101b9190; body size 43 bytes.
#line 1 "ENTRY_101b9190"

undefined4 * __thiscall Recovered_Bulk::FUN_101b9190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  *param_1 = (undefined4)(param_2);
  iVar1 = (int)(thunk_FUN_103134f0());
  if (iVar1 != 0) {
    thunk_FUN_10313720(param_2,param_1 + 1);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b9240; body size 27 bytes.
#line 1 "ENTRY_101b9240"

void __fastcall FUN_101b9240(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_103134f0());
  if (iVar1 != 0) {
    thunk_FUN_103138c0(*param_1,param_1 + 1);
  }
  return;
}


// Reference entry 101b9650; body size 41 bytes.
#line 1 "ENTRY_101b9650"

undefined4 * __thiscall Recovered_Bulk::FUN_101b9650(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b9700; body size 24 bytes.
#line 1 "ENTRY_101b9700"

undefined4 * __thiscall Recovered_Bulk::FUN_101b9700(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b9890; body size 46 bytes.
#line 1 "ENTRY_101b9890"

undefined4 * __thiscall Recovered_Bulk::FUN_101b9890(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemEventSink);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  piVar1 = (int *)(*(int **)(param_2 + 8));
  param_1[2] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101b9b80; body size 19 bytes.
#line 1 "ENTRY_101b9b80"

void __fastcall FUN_101b9b80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101b9f90; body size 60 bytes.
#line 1 "ENTRY_101b9f90"

void __fastcall FUN_101b9f90(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101b9ff0; body size 60 bytes.
#line 1 "ENTRY_101b9ff0"

void __fastcall FUN_101b9ff0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101ba050; body size 60 bytes.
#line 1 "ENTRY_101ba050"

void __fastcall FUN_101ba050(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101ba220; body size 19 bytes.
#line 1 "ENTRY_101ba220"

void __fastcall FUN_101ba220(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101ba7d0; body size 38 bytes.
#line 1 "ENTRY_101ba7d0"

undefined4 * __thiscall Recovered_Bulk::FUN_101ba7d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ba800; body size 45 bytes.
#line 1 "ENTRY_101ba800"

undefined4 * __thiscall Recovered_Bulk::FUN_101ba800(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ba840; body size 45 bytes.
#line 1 "ENTRY_101ba840"

undefined4 * __thiscall Recovered_Bulk::FUN_101ba840(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ba880; body size 32 bytes.
#line 1 "ENTRY_101ba880"

undefined4 __thiscall Recovered_Bulk::FUN_101ba880(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101b9ba0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 101ba8b0; body size 38 bytes.
#line 1 "ENTRY_101ba8b0"

undefined4 * __thiscall Recovered_Bulk::FUN_101ba8b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ba8e0; body size 32 bytes.
#line 1 "ENTRY_101ba8e0"

undefined4 __thiscall Recovered_Bulk::FUN_101ba8e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 101ba910; body size 45 bytes.
#line 1 "ENTRY_101ba910"

undefined4 * __thiscall Recovered_Bulk::FUN_101ba910(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ba950; body size 33 bytes.
#line 1 "ENTRY_101ba950"

undefined4 * __thiscall Recovered_Bulk::FUN_101ba950(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ba980; body size 33 bytes.
#line 1 "ENTRY_101ba980"

undefined4 * __thiscall Recovered_Bulk::FUN_101ba980(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101baa50; body size 45 bytes.
#line 1 "ENTRY_101baa50"

undefined4 * __thiscall Recovered_Bulk::FUN_101baa50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101bac00; body size 61 bytes.
#line 1 "ENTRY_101bac00"

void __thiscall Recovered_Bulk::FUN_101bac00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101bac50; body size 61 bytes.
#line 1 "ENTRY_101bac50"

void __thiscall Recovered_Bulk::FUN_101bac50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101bad20; body size 59 bytes.
#line 1 "ENTRY_101bad20"

void __thiscall Recovered_Bulk::FUN_101bad20(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 101bad70; body size 59 bytes.
#line 1 "ENTRY_101bad70"

void __thiscall Recovered_Bulk::FUN_101bad70(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 101bb0e0; body size 21 bytes.
#line 1 "ENTRY_101bb0e0"

SCStr * __stdcall FUN_101bb0e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCElapsedTimeMeasurement");
  return (SCStr *)(param_1);
}


// Reference entry 101bb100; body size 43 bytes.
#line 1 "ENTRY_101bb100"

void __fastcall FUN_101bb100(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 101bb140; body size 43 bytes.
#line 1 "ENTRY_101bb140"

void __fastcall FUN_101bb140(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 101bb180; body size 43 bytes.
#line 1 "ENTRY_101bb180"

void __fastcall FUN_101bb180(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 101bb870; body size 21 bytes.
#line 1 "ENTRY_101bb870"

SCStr * __stdcall FUN_101bb870(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 101bbbe0; body size 19 bytes.
#line 1 "ENTRY_101bbbe0"

uint __fastcall FUN_101bbbe0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x14))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 101bc2d0; body size 39 bytes.
#line 1 "ENTRY_101bc2d0"

int __fastcall FUN_101bc2d0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1123fcd0(param_1 + 1));
  if ((iVar1 == 0) && ((undefined4 *)(param_1) != (undefined4 *)0x0)) {
    (**(code **)*param_1)(1);
  }
  return (int)(iVar1);
}


// Reference entry 101bc330; body size 60 bytes.
#line 1 "ENTRY_101bc330"

void __fastcall FUN_101bc330(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*param_1);
  if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
     (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
    *(undefined4*)(iVar1 + -8) = (undefined4)(0);
    *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
    thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
    free((void *)(iVar1 + -0x10));
  }
  return;
}


// Reference entry 101bc3e0; body size 35 bytes.
#line 1 "ENTRY_101bc3e0"

undefined4 __fastcall FUN_101bc3e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 4) + 0xc))());
    if (cVar1 != '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 8))());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 101bc430; body size 30 bytes.
#line 1 "ENTRY_101bc430"

void __thiscall Recovered_Bulk::FUN_101bc430(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 4))(param_2,param_3));
    *(undefined4*)(param_1 + 8) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 101bc460; body size 21 bytes.
#line 1 "ENTRY_101bc460"

void __thiscall Recovered_Bulk::FUN_101bc460(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x24))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 101bc480; body size 21 bytes.
#line 1 "ENTRY_101bc480"

void __thiscall Recovered_Bulk::FUN_101bc480(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x28))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 101bdfa0; body size 24 bytes.
#line 1 "ENTRY_101bdfa0"

undefined4 * __thiscall Recovered_Bulk::FUN_101bdfa0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101be0d0; body size 60 bytes.
#line 1 "ENTRY_101be0d0"

void __fastcall FUN_101be0d0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101be1b0; body size 47 bytes.
#line 1 "ENTRY_101be1b0"

void __fastcall FUN_101be1b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringArray);
  thunk_FUN_101be460();
  thunk_FUN_101a2bf0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101be2b0; body size 45 bytes.
#line 1 "ENTRY_101be2b0"

undefined4 * __thiscall Recovered_Bulk::FUN_101be2b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101be2f0; body size 33 bytes.
#line 1 "ENTRY_101be2f0"

undefined4 * __thiscall Recovered_Bulk::FUN_101be2f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101be3c0; body size 61 bytes.
#line 1 "ENTRY_101be3c0"

void __thiscall Recovered_Bulk::FUN_101be3c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101be410; body size 43 bytes.
#line 1 "ENTRY_101be410"

void __thiscall Recovered_Bulk::FUN_101be410(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 0xc));
  if ((SCStr *)(this_) != *(SCStr **)(param_1 + 0x10)) {
    ((SCStr *)(this_))->op_ctor(param_2);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 4);
    return;
  }
  thunk_FUN_101a2390(this_,param_2);
  return;
}


// Reference entry 101bef40; body size 40 bytes.
#line 1 "ENTRY_101bef40"

void __thiscall Recovered_Bulk::FUN_101bef40(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4));
  if ((SCStr *)(this_) != *(SCStr **)(param_1 + 8)) {
    ((SCStr *)(this_))->op_ctor(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_101bc5e0(this_,param_2);
  return;
}


// Reference entry 101bf1c0; body size 30 bytes.
#line 1 "ENTRY_101bf1c0"

void __fastcall FUN_101bf1c0(int param_1)

{
  thunk_FUN_101bda70(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),
                     *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2,LAB_1001b7c5);
  return;
}


// Reference entry 101c35c0; body size 61 bytes.
#line 1 "ENTRY_101c35c0"

void __thiscall Recovered_Bulk::FUN_101c35c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101c3610; body size 17 bytes.
#line 1 "ENTRY_101c3610"

undefined4 FUN_101c3610(undefined4 param_1)

{
  createSCStringArray();
  return (undefined4)(param_1);
}


// Reference entry 101c4700; body size 40 bytes.
#line 1 "ENTRY_101c4700"

int __thiscall Recovered_Bulk::FUN_101c4700(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_101c4740(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 101c4ee0; body size 30 bytes.
#line 1 "ENTRY_101c4ee0"

void __thiscall Recovered_Bulk::FUN_101c4ee0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101c4f10; body size 40 bytes.
#line 1 "ENTRY_101c4f10"

void __stdcall FUN_101c4f10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 101c5120; body size 59 bytes.
#line 1 "ENTRY_101c5120"

void __thiscall Recovered_Bulk::FUN_101c5120(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_101c4440(puVar1,param_2);
  return;
}


// Reference entry 101c5210; body size 55 bytes.
#line 1 "ENTRY_101c5210"

void __thiscall Recovered_Bulk::FUN_101c5210(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = (undefined4)(thunk_FUN_101c3fc0(param_3));
  iVar2 = (int)(thunk_FUN_101c4740(local_8,param_3,uVar1));
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 101c55c0; body size 41 bytes.
#line 1 "ENTRY_101c55c0"

undefined4 * __thiscall Recovered_Bulk::FUN_101c55c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c5640; body size 24 bytes.
#line 1 "ENTRY_101c5640"

undefined4 * __thiscall Recovered_Bulk::FUN_101c5640(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c5660; body size 24 bytes.
#line 1 "ENTRY_101c5660"

undefined4 * __thiscall Recovered_Bulk::FUN_101c5660(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c5680; body size 24 bytes.
#line 1 "ENTRY_101c5680"

undefined4 * __thiscall Recovered_Bulk::FUN_101c5680(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c58b0; body size 39 bytes.
#line 1 "ENTRY_101c58b0"

undefined4 * __fastcall FUN_101c58b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101c62f0; body size 41 bytes.
#line 1 "ENTRY_101c62f0"

int * __thiscall Recovered_Bulk::FUN_101c62f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_1);
}


// Reference entry 101c6350; body size 19 bytes.
#line 1 "ENTRY_101c6350"

void __fastcall FUN_101c6350(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101c6370; body size 19 bytes.
#line 1 "ENTRY_101c6370"

void __fastcall FUN_101c6370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101c6790; body size 60 bytes.
#line 1 "ENTRY_101c6790"

void __fastcall FUN_101c6790(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101c67f0; body size 19 bytes.
#line 1 "ENTRY_101c67f0"

void __fastcall FUN_101c67f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 101c69e0; body size 17 bytes.
#line 1 "ENTRY_101c69e0"

void __fastcall FUN_101c69e0(undefined4 *param_1)

{
  thunk_FUN_101c42f0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 101c6a00; body size 25 bytes.
#line 1 "ENTRY_101c6a00"

void __fastcall FUN_101c6a00(undefined4 *param_1)

{
  thunk_FUN_101c4810(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 101c7440; body size 27 bytes.
#line 1 "ENTRY_101c7440"

int __stdcall FUN_101c7440(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_101c4a90(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 101c77c0; body size 45 bytes.
#line 1 "ENTRY_101c77c0"

undefined4 * __thiscall Recovered_Bulk::FUN_101c77c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c7800; body size 45 bytes.
#line 1 "ENTRY_101c7800"

undefined4 * __thiscall Recovered_Bulk::FUN_101c7800(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c7840; body size 45 bytes.
#line 1 "ENTRY_101c7840"

undefined4 * __thiscall Recovered_Bulk::FUN_101c7840(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c7a70; body size 45 bytes.
#line 1 "ENTRY_101c7a70"

undefined4 * __thiscall Recovered_Bulk::FUN_101c7a70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c7ab0; body size 45 bytes.
#line 1 "ENTRY_101c7ab0"

undefined4 * __thiscall Recovered_Bulk::FUN_101c7ab0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c7ea0; body size 33 bytes.
#line 1 "ENTRY_101c7ea0"

undefined4 * __thiscall Recovered_Bulk::FUN_101c7ea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101c83f0; body size 25 bytes.
#line 1 "ENTRY_101c83f0"

void __fastcall FUN_101c83f0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 101c8730; body size 20 bytes.
#line 1 "ENTRY_101c8730"

void __thiscall Recovered_Bulk::FUN_101c8730(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101c42f0(param_2,param_3,param_1);
  return;
}


// Reference entry 101c8da0; body size 25 bytes.
#line 1 "ENTRY_101c8da0"

void __fastcall FUN_101c8da0(undefined4 *param_1)

{
  thunk_FUN_101c4810(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 101c97f0; body size 61 bytes.
#line 1 "ENTRY_101c97f0"

void __thiscall Recovered_Bulk::FUN_101c97f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101c9840; body size 61 bytes.
#line 1 "ENTRY_101c9840"

void __thiscall Recovered_Bulk::FUN_101c9840(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101c9890; body size 61 bytes.
#line 1 "ENTRY_101c9890"

void __thiscall Recovered_Bulk::FUN_101c9890(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101c98e0; body size 61 bytes.
#line 1 "ENTRY_101c98e0"

void __thiscall Recovered_Bulk::FUN_101c98e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101c9930; body size 30 bytes.
#line 1 "ENTRY_101c9930"

void __thiscall Recovered_Bulk::FUN_101c9930(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101c9af0; body size 32 bytes.
#line 1 "ENTRY_101c9af0"

void __fastcall FUN_101c9af0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(**(int **)(param_1 + 0x14) + 0x18))();
      return;
    }
  }
  return;
}


// Reference entry 101c9b90; body size 32 bytes.
#line 1 "ENTRY_101c9b90"

void __fastcall FUN_101c9b90(int *param_1)

{
  thunk_FUN_101c4810(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 101ca860; body size 60 bytes.
#line 1 "ENTRY_101ca860"

void __stdcall FUN_101ca860(int param_1,int param_2)

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


// Reference entry 101ca950; body size 21 bytes.
#line 1 "ENTRY_101ca950"

SCStr * __stdcall FUN_101ca950(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCFetchTokenAction");
  return (SCStr *)(param_1);
}


// Reference entry 101ca970; body size 28 bytes.
#line 1 "ENTRY_101ca970"

void __fastcall FUN_101ca970(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 101cb160; body size 59 bytes.
#line 1 "ENTRY_101cb160"

void __thiscall Recovered_Bulk::FUN_101cb160(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_101c4440(puVar1,param_2);
  return;
}


// Reference entry 101cc2c0; body size 35 bytes.
#line 1 "ENTRY_101cc2c0"

undefined4 * __fastcall FUN_101cc2c0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(1);
  param_1[2] = (undefined4)(1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Ref_count_obj2);
  thunk_FUN_103d5ff0();
  return (undefined4 *)(param_1);
}


// Reference entry 101cdd70; body size 33 bytes.
#line 1 "ENTRY_101cdd70"

void __thiscall Recovered_Bulk::FUN_101cdd70(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_101cde00(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 101cdee0; body size 57 bytes.
#line 1 "ENTRY_101cdee0"

void __stdcall FUN_101cdee0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_101cdee0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x30);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 101ce970; body size 30 bytes.
#line 1 "ENTRY_101ce970"

void __thiscall Recovered_Bulk::FUN_101ce970(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101ce9a0; body size 30 bytes.
#line 1 "ENTRY_101ce9a0"

void __thiscall Recovered_Bulk::FUN_101ce9a0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101cf880; body size 21 bytes.
#line 1 "ENTRY_101cf880"

undefined4 * __thiscall Recovered_Bulk::FUN_101cf880(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (undefined4 *)(param_1);
}


// Reference entry 101cf8a0; body size 27 bytes.
#line 1 "ENTRY_101cf8a0"

undefined4 * __fastcall FUN_101cf8a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101cf8d0; body size 21 bytes.
#line 1 "ENTRY_101cf8d0"

undefined4 * __thiscall Recovered_Bulk::FUN_101cf8d0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (undefined4 *)(param_1);
}


// Reference entry 101cf8f0; body size 27 bytes.
#line 1 "ENTRY_101cf8f0"

undefined4 * __fastcall FUN_101cf8f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 101cf920; body size 42 bytes.
#line 1 "ENTRY_101cf920"

undefined4 * __thiscall Recovered_Bulk::FUN_101cf920(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 101cf960; body size 40 bytes.
#line 1 "ENTRY_101cf960"

undefined4 * __fastcall FUN_101cf960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101cf9a0; body size 33 bytes.
#line 1 "ENTRY_101cf9a0"

undefined4 * __thiscall Recovered_Bulk::FUN_101cf9a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  return (undefined4 *)(param_1);
}


// Reference entry 101cf9d0; body size 42 bytes.
#line 1 "ENTRY_101cf9d0"

undefined4 * __thiscall Recovered_Bulk::FUN_101cf9d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfa10; body size 40 bytes.
#line 1 "ENTRY_101cfa10"

undefined4 * __fastcall FUN_101cfa10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfa50; body size 39 bytes.
#line 1 "ENTRY_101cfa50"

undefined4 * __thiscall Recovered_Bulk::FUN_101cfa50(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (undefined4 *)(param_1);
}


// Reference entry 101cfae0; body size 41 bytes.
#line 1 "ENTRY_101cfae0"

undefined4 * __thiscall Recovered_Bulk::FUN_101cfae0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfb80; body size 41 bytes.
#line 1 "ENTRY_101cfb80"

undefined4 * __thiscall Recovered_Bulk::FUN_101cfb80(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfbc0; body size 41 bytes.
#line 1 "ENTRY_101cfbc0"

undefined4 * __thiscall Recovered_Bulk::FUN_101cfbc0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfc00; body size 41 bytes.
#line 1 "ENTRY_101cfc00"

undefined4 * __thiscall Recovered_Bulk::FUN_101cfc00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfc70; body size 41 bytes.
#line 1 "ENTRY_101cfc70"

undefined4 * __thiscall Recovered_Bulk::FUN_101cfc70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfcf0; body size 41 bytes.
#line 1 "ENTRY_101cfcf0"

undefined4 * __thiscall Recovered_Bulk::FUN_101cfcf0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfd30; body size 41 bytes.
#line 1 "ENTRY_101cfd30"

undefined4 * __thiscall Recovered_Bulk::FUN_101cfd30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfdc0; body size 41 bytes.
#line 1 "ENTRY_101cfdc0"

undefined4 * __thiscall Recovered_Bulk::FUN_101cfdc0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfe30; body size 41 bytes.
#line 1 "ENTRY_101cfe30"

undefined4 * __thiscall Recovered_Bulk::FUN_101cfe30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfe90; body size 24 bytes.
#line 1 "ENTRY_101cfe90"

undefined4 * __thiscall Recovered_Bulk::FUN_101cfe90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101cfeb0; body size 24 bytes.
#line 1 "ENTRY_101cfeb0"

undefined4 * __thiscall Recovered_Bulk::FUN_101cfeb0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d0020; body size 48 bytes.
#line 1 "ENTRY_101d0020"

undefined4 * __fastcall FUN_101d0020(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101d0060; body size 48 bytes.
#line 1 "ENTRY_101d0060"

undefined4 * __fastcall FUN_101d0060(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 101d0480; body size 37 bytes.
#line 1 "ENTRY_101d0480"

undefined4 * __fastcall FUN_101d0480(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 101d18a0; body size 19 bytes.
#line 1 "ENTRY_101d18a0"

void __fastcall FUN_101d18a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d18c0; body size 19 bytes.
#line 1 "ENTRY_101d18c0"

void __fastcall FUN_101d18c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d1920; body size 19 bytes.
#line 1 "ENTRY_101d1920"

void __fastcall FUN_101d1920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d1940; body size 19 bytes.
#line 1 "ENTRY_101d1940"

void __fastcall FUN_101d1940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d1960; body size 26 bytes.
#line 1 "ENTRY_101d1960"

void __fastcall FUN_101d1960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d1980; body size 26 bytes.
#line 1 "ENTRY_101d1980"

void __fastcall FUN_101d1980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d2630; body size 60 bytes.
#line 1 "ENTRY_101d2630"

void __fastcall FUN_101d2630(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101d2690; body size 60 bytes.
#line 1 "ENTRY_101d2690"

void __fastcall FUN_101d2690(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101d26f0; body size 60 bytes.
#line 1 "ENTRY_101d26f0"

void __fastcall FUN_101d26f0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101d2750; body size 60 bytes.
#line 1 "ENTRY_101d2750"

void __fastcall FUN_101d2750(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101d27b0; body size 60 bytes.
#line 1 "ENTRY_101d27b0"

void __fastcall FUN_101d27b0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101d2810; body size 60 bytes.
#line 1 "ENTRY_101d2810"

void __fastcall FUN_101d2810(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101d2870; body size 60 bytes.
#line 1 "ENTRY_101d2870"

void __fastcall FUN_101d2870(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101d28d0; body size 60 bytes.
#line 1 "ENTRY_101d28d0"

void __fastcall FUN_101d28d0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101d2930; body size 19 bytes.
#line 1 "ENTRY_101d2930"

void __fastcall FUN_101d2930(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 101d2950; body size 19 bytes.
#line 1 "ENTRY_101d2950"

void __fastcall FUN_101d2950(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 101d2970; body size 33 bytes.
#line 1 "ENTRY_101d2970"

void __fastcall FUN_101d2970(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d29a0; body size 33 bytes.
#line 1 "ENTRY_101d29a0"

void __fastcall FUN_101d29a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d29d0; body size 33 bytes.
#line 1 "ENTRY_101d29d0"

void __fastcall FUN_101d29d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2a00; body size 33 bytes.
#line 1 "ENTRY_101d2a00"

void __fastcall FUN_101d2a00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2a30; body size 33 bytes.
#line 1 "ENTRY_101d2a30"

void __fastcall FUN_101d2a30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2a60; body size 33 bytes.
#line 1 "ENTRY_101d2a60"

void __fastcall FUN_101d2a60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2a90; body size 33 bytes.
#line 1 "ENTRY_101d2a90"

void __fastcall FUN_101d2a90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2bf0; body size 28 bytes.
#line 1 "ENTRY_101d2bf0"

void __fastcall FUN_101d2bf0(int *param_1)

{
  thunk_FUN_101cde00(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 101d2c40; body size 19 bytes.
#line 1 "ENTRY_101d2c40"

void __fastcall FUN_101d2c40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 101d2c60; body size 33 bytes.
#line 1 "ENTRY_101d2c60"

void __fastcall FUN_101d2c60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2c90; body size 33 bytes.
#line 1 "ENTRY_101d2c90"

void __fastcall FUN_101d2c90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2cc0; body size 33 bytes.
#line 1 "ENTRY_101d2cc0"

void __fastcall FUN_101d2cc0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2cf0; body size 33 bytes.
#line 1 "ENTRY_101d2cf0"

void __fastcall FUN_101d2cf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2d20; body size 33 bytes.
#line 1 "ENTRY_101d2d20"

void __fastcall FUN_101d2d20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2d50; body size 33 bytes.
#line 1 "ENTRY_101d2d50"

void __fastcall FUN_101d2d50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2d80; body size 33 bytes.
#line 1 "ENTRY_101d2d80"

void __fastcall FUN_101d2d80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d2db0; body size 25 bytes.
#line 1 "ENTRY_101d2db0"

void __fastcall FUN_101d2db0(undefined4 *param_1)

{
  thunk_FUN_101cdf90(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 101d2de0; body size 28 bytes.
#line 1 "ENTRY_101d2de0"

void __fastcall FUN_101d2de0(int *param_1)

{
  thunk_FUN_101cde00(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 101d2ea0; body size 47 bytes.
#line 1 "ENTRY_101d2ea0"

void __fastcall FUN_101d2ea0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(*(int **)(param_1 + 4));
  if ((int *)(piVar2) != (int *)0x0) {
    LOCK();
    iVar3 = (int)(piVar2[1] + -1);
    piVar2[1] = (int)(iVar3);
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = (int *)(piVar2 + 2);
      iVar3 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar3 == 1) {
                    
                    
        (**(code **)(*piVar2 + 4))();
        return;
      }
    }
  }
  return;
}


// Reference entry 101d2ee0; body size 23 bytes.
#line 1 "ENTRY_101d2ee0"

void __fastcall FUN_101d2ee0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if ((int *)(piVar1) != (int *)0x0) {
    LOCK();
    iVar2 = (int)(piVar1[2] + -1);
    piVar1[2] = (int)(iVar2);
    UNLOCK();
    if (iVar2 == 0) {
                    
                    
      (**(code **)(*piVar1 + 4))();
      return;
    }
  }
  return;
}


// Reference entry 101d33f0; body size 19 bytes.
#line 1 "ENTRY_101d33f0"

void __fastcall FUN_101d33f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d3410; body size 19 bytes.
#line 1 "ENTRY_101d3410"

void __fastcall FUN_101d3410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101d3a30; body size 18 bytes.
#line 1 "ENTRY_101d3a30"

void __fastcall FUN_101d3a30(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 101d3b70; body size 21 bytes.
#line 1 "ENTRY_101d3b70"

int __thiscall Recovered_Bulk::FUN_101d3b70(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  return (int)(param_1);
}


// Reference entry 101d3b90; body size 21 bytes.
#line 1 "ENTRY_101d3b90"

int __thiscall Recovered_Bulk::FUN_101d3b90(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  return (int)(param_1);
}


// Reference entry 101d4050; body size 37 bytes.
#line 1 "ENTRY_101d4050"

int * __fastcall FUN_101d4050(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 101d4080; body size 37 bytes.
#line 1 "ENTRY_101d4080"

int * __fastcall FUN_101d4080(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 101d5520; body size 45 bytes.
#line 1 "ENTRY_101d5520"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5520(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5560; body size 45 bytes.
#line 1 "ENTRY_101d5560"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5560(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d55a0; body size 45 bytes.
#line 1 "ENTRY_101d55a0"

undefined4 * __thiscall Recovered_Bulk::FUN_101d55a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d55e0; body size 45 bytes.
#line 1 "ENTRY_101d55e0"

undefined4 * __thiscall Recovered_Bulk::FUN_101d55e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5620; body size 45 bytes.
#line 1 "ENTRY_101d5620"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5620(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5660; body size 45 bytes.
#line 1 "ENTRY_101d5660"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d56a0; body size 52 bytes.
#line 1 "ENTRY_101d56a0"

undefined4 * __thiscall Recovered_Bulk::FUN_101d56a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d56f0; body size 52 bytes.
#line 1 "ENTRY_101d56f0"

undefined4 * __thiscall Recovered_Bulk::FUN_101d56f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5740; body size 32 bytes.
#line 1 "ENTRY_101d5740"

undefined4 __thiscall Recovered_Bulk::FUN_101d5740(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101d19a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 101d5800; body size 60 bytes.
#line 1 "ENTRY_101d5800"

int __thiscall Recovered_Bulk::FUN_101d5800(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
}


// Reference entry 101d5850; body size 33 bytes.
#line 1 "ENTRY_101d5850"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5850(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Ref_count_obj2);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5930; body size 45 bytes.
#line 1 "ENTRY_101d5930"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5930(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5970; body size 35 bytes.
#line 1 "ENTRY_101d5970"

undefined4 __thiscall Recovered_Bulk::FUN_101d5970(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101d2f40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x180);
  }
  return (undefined4)(param_1);
}


// Reference entry 101d59a0; body size 45 bytes.
#line 1 "ENTRY_101d59a0"

undefined4 * __thiscall Recovered_Bulk::FUN_101d59a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d59e0; body size 45 bytes.
#line 1 "ENTRY_101d59e0"

undefined4 * __thiscall Recovered_Bulk::FUN_101d59e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5a20; body size 45 bytes.
#line 1 "ENTRY_101d5a20"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5a20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5b00; body size 33 bytes.
#line 1 "ENTRY_101d5b00"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5b00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5bd0; body size 33 bytes.
#line 1 "ENTRY_101d5bd0"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5bd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5c00; body size 33 bytes.
#line 1 "ENTRY_101d5c00"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5c30; body size 33 bytes.
#line 1 "ENTRY_101d5c30"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5c30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5c60; body size 33 bytes.
#line 1 "ENTRY_101d5c60"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5c60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5d30; body size 45 bytes.
#line 1 "ENTRY_101d5d30"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5d30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d5d70; body size 32 bytes.
#line 1 "ENTRY_101d5d70"

undefined4 __thiscall Recovered_Bulk::FUN_101d5d70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101d3630();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 101d5da0; body size 32 bytes.
#line 1 "ENTRY_101d5da0"

SCProperty * __thiscall Recovered_Bulk::FUN_101d5da0(byte param_2)
{
  SCProperty *param_1 = (SCProperty *)this;
  ((SCProperty *)(param_1))->op_dtor();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (SCProperty *)(param_1);
}


// Reference entry 101d5dd0; body size 32 bytes.
#line 1 "ENTRY_101d5dd0"

SCPropertyBag * __thiscall Recovered_Bulk::FUN_101d5dd0(byte param_2)
{
  SCPropertyBag *param_1 = (SCPropertyBag *)this;
  ((SCPropertyBag *)(param_1))->op_dtor();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (SCPropertyBag *)(param_1);
}


// Reference entry 101d5ea0; body size 45 bytes.
#line 1 "ENTRY_101d5ea0"

undefined4 * __thiscall Recovered_Bulk::FUN_101d5ea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101d6000; body size 25 bytes.
#line 1 "ENTRY_101d6000"

void __fastcall FUN_101d6000(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10));
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 101d6020; body size 25 bytes.
#line 1 "ENTRY_101d6020"

void __fastcall FUN_101d6020(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 101d6060; body size 19 bytes.
#line 1 "ENTRY_101d6060"

void __thiscall Recovered_Bulk::FUN_101d6060(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101d6080; body size 19 bytes.
#line 1 "ENTRY_101d6080"

void __thiscall Recovered_Bulk::FUN_101d6080(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101d6200; body size 21 bytes.
#line 1 "ENTRY_101d6200"

void __thiscall Recovered_Bulk::FUN_101d6200(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 101d6220; body size 21 bytes.
#line 1 "ENTRY_101d6220"

void __thiscall Recovered_Bulk::FUN_101d6220(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 101d6240; body size 58 bytes.
#line 1 "ENTRY_101d6240"

void __thiscall Recovered_Bulk::FUN_101d6240(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return;
}


// Reference entry 101d6440; body size 39 bytes.
#line 1 "ENTRY_101d6440"

void __thiscall Recovered_Bulk::FUN_101d6440(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 101d6f20; body size 31 bytes.
#line 1 "ENTRY_101d6f20"

int * FUN_101d6f20(int *param_1)

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


// Reference entry 101d6f50; body size 31 bytes.
#line 1 "ENTRY_101d6f50"

int * FUN_101d6f50(int *param_1)

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


// Reference entry 101d6f80; body size 19 bytes.
#line 1 "ENTRY_101d6f80"

void __thiscall Recovered_Bulk::FUN_101d6f80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101d6fa0; body size 19 bytes.
#line 1 "ENTRY_101d6fa0"

void __thiscall Recovered_Bulk::FUN_101d6fa0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 101d7230; body size 33 bytes.
#line 1 "ENTRY_101d7230"

void __fastcall FUN_101d7230(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d7260; body size 33 bytes.
#line 1 "ENTRY_101d7260"

void __fastcall FUN_101d7260(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d7290; body size 33 bytes.
#line 1 "ENTRY_101d7290"

void __fastcall FUN_101d7290(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d72c0; body size 33 bytes.
#line 1 "ENTRY_101d72c0"

void __fastcall FUN_101d72c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d72f0; body size 33 bytes.
#line 1 "ENTRY_101d72f0"

void __fastcall FUN_101d72f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d7320; body size 33 bytes.
#line 1 "ENTRY_101d7320"

void __fastcall FUN_101d7320(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d7350; body size 33 bytes.
#line 1 "ENTRY_101d7350"

void __fastcall FUN_101d7350(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101d7380; body size 25 bytes.
#line 1 "ENTRY_101d7380"

void __fastcall FUN_101d7380(undefined4 *param_1)

{
  thunk_FUN_101cdf90(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 101d78c0; body size 51 bytes.
#line 1 "ENTRY_101d78c0"

int __fastcall FUN_101d78c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xa4))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 101d7900; body size 51 bytes.
#line 1 "ENTRY_101d7900"

int __fastcall FUN_101d7900(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xa4))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 101d7950; body size 61 bytes.
#line 1 "ENTRY_101d7950"

void __thiscall Recovered_Bulk::FUN_101d7950(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d79a0; body size 61 bytes.
#line 1 "ENTRY_101d79a0"

void __thiscall Recovered_Bulk::FUN_101d79a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d79f0; body size 61 bytes.
#line 1 "ENTRY_101d79f0"

void __thiscall Recovered_Bulk::FUN_101d79f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d7a40; body size 61 bytes.
#line 1 "ENTRY_101d7a40"

void __thiscall Recovered_Bulk::FUN_101d7a40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d7a90; body size 61 bytes.
#line 1 "ENTRY_101d7a90"

void __thiscall Recovered_Bulk::FUN_101d7a90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d7ae0; body size 61 bytes.
#line 1 "ENTRY_101d7ae0"

void __thiscall Recovered_Bulk::FUN_101d7ae0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d7b30; body size 61 bytes.
#line 1 "ENTRY_101d7b30"

void __thiscall Recovered_Bulk::FUN_101d7b30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d7b80; body size 61 bytes.
#line 1 "ENTRY_101d7b80"

void __thiscall Recovered_Bulk::FUN_101d7b80(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d7bd0; body size 61 bytes.
#line 1 "ENTRY_101d7bd0"

void __thiscall Recovered_Bulk::FUN_101d7bd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d7c20; body size 61 bytes.
#line 1 "ENTRY_101d7c20"

void __thiscall Recovered_Bulk::FUN_101d7c20(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d7c70; body size 61 bytes.
#line 1 "ENTRY_101d7c70"

void __thiscall Recovered_Bulk::FUN_101d7c70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d7cc0; body size 61 bytes.
#line 1 "ENTRY_101d7cc0"

void __thiscall Recovered_Bulk::FUN_101d7cc0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d7d10; body size 61 bytes.
#line 1 "ENTRY_101d7d10"

void __thiscall Recovered_Bulk::FUN_101d7d10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d7d60; body size 61 bytes.
#line 1 "ENTRY_101d7d60"

void __thiscall Recovered_Bulk::FUN_101d7d60(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101d7db0; body size 30 bytes.
#line 1 "ENTRY_101d7db0"

void __thiscall Recovered_Bulk::FUN_101d7db0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101d7de0; body size 30 bytes.
#line 1 "ENTRY_101d7de0"

void __thiscall Recovered_Bulk::FUN_101d7de0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101d83f0; body size 41 bytes.
#line 1 "ENTRY_101d83f0"

void __fastcall FUN_101d83f0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 100) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 100) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 100) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x60) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 101d8490; body size 33 bytes.
#line 1 "ENTRY_101d8490"

void __fastcall FUN_101d8490(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_101cde00(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 101d84c0; body size 32 bytes.
#line 1 "ENTRY_101d84c0"

void __fastcall FUN_101d84c0(int *param_1)

{
  thunk_FUN_101cdf90(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 101d8b20; body size 43 bytes.
#line 1 "ENTRY_101d8b20"

int * __thiscall Recovered_Bulk::FUN_101d8b20(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xfc));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 101d8db0; body size 35 bytes.
#line 1 "ENTRY_101d8db0"

void __thiscall Recovered_Bulk::FUN_101d8db0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 101d8e80; body size 43 bytes.
#line 1 "ENTRY_101d8e80"

void __fastcall FUN_101d8e80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 101d8ec0; body size 43 bytes.
#line 1 "ENTRY_101d8ec0"

void __fastcall FUN_101d8ec0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 101d8f00; body size 28 bytes.
#line 1 "ENTRY_101d8f00"

void __fastcall FUN_101d8f00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 101d8f30; body size 28 bytes.
#line 1 "ENTRY_101d8f30"

void __fastcall FUN_101d8f30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 101d96d0; body size 21 bytes.
#line 1 "ENTRY_101d96d0"

SCStr * __stdcall FUN_101d96d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("Fetc\x14hToken");
  return (SCStr *)(param_1);
}


// Reference entry 101d96f0; body size 21 bytes.
#line 1 "ENTRY_101d96f0"

SCStr * __stdcall FUN_101d96f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 101d9d40; body size 21 bytes.
#line 1 "ENTRY_101d9d40"

SCStr * __stdcall FUN_101d9d40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 101d9fb0; body size 32 bytes.
#line 1 "ENTRY_101d9fb0"

SCStr * __stdcall FUN_101d9fb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 101d9fe0; body size 21 bytes.
#line 1 "ENTRY_101d9fe0"

SCStr * __stdcall FUN_101d9fe0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionNoArgDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 101da020; body size 20 bytes.
#line 1 "ENTRY_101da020"

SCStr * __thiscall Recovered_Bulk::FUN_101da020(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 101da040; body size 20 bytes.
#line 1 "ENTRY_101da040"

SCStr * __thiscall Recovered_Bulk::FUN_101da040(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 101dce30; body size 19 bytes.
#line 1 "ENTRY_101dce30"

int __fastcall FUN_101dce30(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 2) && (iVar1 != 1)) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 101dcef0; body size 24 bytes.
#line 1 "ENTRY_101dcef0"

undefined4 __fastcall FUN_101dcef0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 4) + 0x1c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 101dcf50; body size 19 bytes.
#line 1 "ENTRY_101dcf50"

uint __fastcall FUN_101dcf50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x10))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 101dcf70; body size 17 bytes.
#line 1 "ENTRY_101dcf70"

void __stdcall FUN_101dcf70(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onSettingsChanged");
  return;
}


// Reference entry 101dcf90; body size 17 bytes.
#line 1 "ENTRY_101dcf90"

void __stdcall FUN_101dcf90(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCISystemStatusManager:onUserDismissedSystemStatus");
  return;
}


// Reference entry 101dd0a0; body size 35 bytes.
#line 1 "ENTRY_101dd0a0"

void __fastcall FUN_101dd0a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if ((*(char *)(param_1 + 0x48) != '\0') && (*(int *)(param_1 + 0x34) == 0)) {
    thunk_FUN_101db840();
  }
  thunk_FUN_101df120();
  return;
}


// Reference entry 101de5f0; body size 24 bytes.
#line 1 "ENTRY_101de5f0"

void __fastcall FUN_101de5f0(undefined4 *param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 1) == '\0') {
    uVar1 = (undefined1)(thunk_FUN_112a7f50(*param_1));
    *(undefined1*)(param_1 + 1) = (undefined1)(uVar1);
  }
  return;
}


// Reference entry 101dfc00; body size 54 bytes.
#line 1 "ENTRY_101dfc00"

void __thiscall Recovered_Bulk::FUN_101dfc00(int param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  if (*(char *)((int)param_1 + 0xc2) == '\0') {
    bVar1 = (bool)(((SCLibrary *)(0))->isShuttingDown());
    if (!bVar1) {
      (**(code **)(*param_1 + 0x5c))();
    }
  }
  if (param_2 != 0) {
    thunk_FUN_103d61d0(param_2,0);
  }
  return;
}


// Reference entry 101dfd50; body size 25 bytes.
#line 1 "ENTRY_101dfd50"

void __fastcall FUN_101dfd50(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_112a8010(*param_1);
    *(undefined1*)(param_1 + 1) = (undefined1)(0);
  }
  return;
}


// Reference entry 101e0b40; body size 60 bytes.
#line 1 "ENTRY_101e0b40"

int __thiscall Recovered_Bulk::FUN_101e0b40(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_101e0b90(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 101e0dc0; body size 30 bytes.
#line 1 "ENTRY_101e0dc0"

void __thiscall Recovered_Bulk::FUN_101e0dc0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101e0df0; body size 30 bytes.
#line 1 "ENTRY_101e0df0"

void __thiscall Recovered_Bulk::FUN_101e0df0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101e0f70; body size 41 bytes.
#line 1 "ENTRY_101e0f70"

undefined4 * __thiscall Recovered_Bulk::FUN_101e0f70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e1000; body size 24 bytes.
#line 1 "ENTRY_101e1000"

undefined4 * __thiscall Recovered_Bulk::FUN_101e1000(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e1020; body size 24 bytes.
#line 1 "ENTRY_101e1020"

undefined4 * __thiscall Recovered_Bulk::FUN_101e1020(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e1040; body size 24 bytes.
#line 1 "ENTRY_101e1040"

undefined4 * __thiscall Recovered_Bulk::FUN_101e1040(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e1060; body size 24 bytes.
#line 1 "ENTRY_101e1060"

undefined4 * __thiscall Recovered_Bulk::FUN_101e1060(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e1080; body size 24 bytes.
#line 1 "ENTRY_101e1080"

undefined4 * __thiscall Recovered_Bulk::FUN_101e1080(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e10a0; body size 24 bytes.
#line 1 "ENTRY_101e10a0"

undefined4 * __thiscall Recovered_Bulk::FUN_101e10a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e1260; body size 60 bytes.
#line 1 "ENTRY_101e1260"

void __fastcall FUN_101e1260(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101e12c0; body size 60 bytes.
#line 1 "ENTRY_101e12c0"

void __fastcall FUN_101e12c0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101e1320; body size 19 bytes.
#line 1 "ENTRY_101e1320"

void __fastcall FUN_101e1320(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 101e13f0; body size 19 bytes.
#line 1 "ENTRY_101e13f0"

void __fastcall FUN_101e13f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 101e19d0; body size 25 bytes.
#line 1 "ENTRY_101e19d0"

void __fastcall FUN_101e19d0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 101e22f0; body size 31 bytes.
#line 1 "ENTRY_101e22f0"

int * FUN_101e22f0(int *param_1)

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


// Reference entry 101e23d0; body size 61 bytes.
#line 1 "ENTRY_101e23d0"

void __thiscall Recovered_Bulk::FUN_101e23d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101e2420; body size 61 bytes.
#line 1 "ENTRY_101e2420"

void __thiscall Recovered_Bulk::FUN_101e2420(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101e2470; body size 30 bytes.
#line 1 "ENTRY_101e2470"

void __thiscall Recovered_Bulk::FUN_101e2470(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101e24a0; body size 30 bytes.
#line 1 "ENTRY_101e24a0"

void __thiscall Recovered_Bulk::FUN_101e24a0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 101e2d10; body size 28 bytes.
#line 1 "ENTRY_101e2d10"

void __fastcall FUN_101e2d10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 101e2d40; body size 28 bytes.
#line 1 "ENTRY_101e2d40"

void __fastcall FUN_101e2d40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 101e3570; body size 23 bytes.
#line 1 "ENTRY_101e3570"

bool __fastcall FUN_101e3570(int param_1)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    bVar1 = (bool)(((SCStr *)((SCStr *)(param_1 + 0x10)))->op_eq("T"));
    return (bool)(bVar1);
  }
  return (bool)(false);
}


// Reference entry 101e3a60; body size 22 bytes.
#line 1 "ENTRY_101e3a60"

int __fastcall FUN_101e3a60(int *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)((float10)(**(code **)(*param_1 + 0x2c))());
  return (int)((int)fVar1);
}


// Reference entry 101e3f40; body size 44 bytes.
#line 1 "ENTRY_101e3f40"

int * __thiscall Recovered_Bulk::FUN_101e3f40(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (*(int *)(param_1 + 8) == 7) {
    piVar1 = (int *)(*(int **)(param_1 + 0x14));
    *param_2 = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 101e6b50; body size 62 bytes.
#line 1 "ENTRY_101e6b50"

int __thiscall Recovered_Bulk::FUN_101e6b50(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  undefined1 *puVar1;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 4));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)param_2 != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)param_2);
  }
  thunk_FUN_101e76a0(puVar1);
  return (int)(param_1);
}


// Reference entry 101e6c60; body size 16 bytes.
#line 1 "ENTRY_101e6c60"

undefined4 __stdcall FUN_101e6c60(undefined4 param_1)

{
  thunk_FUN_101e7240(param_1);
  return (undefined4)(param_1);
}


// Reference entry 101e6c80; body size 38 bytes.
#line 1 "ENTRY_101e6c80"

void __stdcall FUN_101e6c80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_101e6ce0(param_1);
  thunk_FUN_101e6ce0(param_2);
  thunk_FUN_101e6ce0(param_3);
  return;
}


// Reference entry 101e6cb0; body size 27 bytes.
#line 1 "ENTRY_101e6cb0"

void __stdcall FUN_101e6cb0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_101e6ce0(param_1);
  thunk_FUN_101e6ce0(param_2);
  return;
}


// Reference entry 101e6e10; body size 20 bytes.
#line 1 "ENTRY_101e6e10"

SCStr * __thiscall Recovered_Bulk::FUN_101e6e10(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 101e71e0; body size 25 bytes.
#line 1 "ENTRY_101e71e0"

int * __thiscall Recovered_Bulk::FUN_101e71e0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x1c));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 101e7200; body size 23 bytes.
#line 1 "ENTRY_101e7200"

undefined4 __thiscall Recovered_Bulk::FUN_101e7200(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 101e7220; body size 20 bytes.
#line 1 "ENTRY_101e7220"

SCStr * __thiscall Recovered_Bulk::FUN_101e7220(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 101e9b50; body size 59 bytes.
#line 1 "ENTRY_101e9b50"

void __thiscall Recovered_Bulk::FUN_101e9b50(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_101e8900(puVar1,param_2);
  return;
}


// Reference entry 101e9ba0; body size 59 bytes.
#line 1 "ENTRY_101e9ba0"

void __thiscall Recovered_Bulk::FUN_101e9ba0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_101e8ca0(puVar1,param_2);
  return;
}


// Reference entry 101e9e00; body size 41 bytes.
#line 1 "ENTRY_101e9e00"

undefined4 * __thiscall Recovered_Bulk::FUN_101e9e00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e9e90; body size 41 bytes.
#line 1 "ENTRY_101e9e90"

undefined4 * __thiscall Recovered_Bulk::FUN_101e9e90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e9ed0; body size 24 bytes.
#line 1 "ENTRY_101e9ed0"

undefined4 * __thiscall Recovered_Bulk::FUN_101e9ed0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e9ef0; body size 24 bytes.
#line 1 "ENTRY_101e9ef0"

undefined4 * __thiscall Recovered_Bulk::FUN_101e9ef0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e9f10; body size 24 bytes.
#line 1 "ENTRY_101e9f10"

undefined4 * __thiscall Recovered_Bulk::FUN_101e9f10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101e9f30; body size 24 bytes.
#line 1 "ENTRY_101e9f30"

undefined4 * __thiscall Recovered_Bulk::FUN_101e9f30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101eabb0; body size 19 bytes.
#line 1 "ENTRY_101eabb0"

void __fastcall FUN_101eabb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101eabd0; body size 19 bytes.
#line 1 "ENTRY_101eabd0"

void __fastcall FUN_101eabd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 101eae90; body size 60 bytes.
#line 1 "ENTRY_101eae90"

void __fastcall FUN_101eae90(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101eaef0; body size 60 bytes.
#line 1 "ENTRY_101eaef0"

void __fastcall FUN_101eaef0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101eaf50; body size 60 bytes.
#line 1 "ENTRY_101eaf50"

void __fastcall FUN_101eaf50(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101eafb0; body size 60 bytes.
#line 1 "ENTRY_101eafb0"

void __fastcall FUN_101eafb0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 101eb0f0; body size 33 bytes.
#line 1 "ENTRY_101eb0f0"

void __fastcall FUN_101eb0f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101eb130; body size 17 bytes.
#line 1 "ENTRY_101eb130"

void __fastcall FUN_101eb130(undefined4 *param_1)

{
  thunk_FUN_101e8670(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 101eb150; body size 17 bytes.
#line 1 "ENTRY_101eb150"

void __fastcall FUN_101eb150(undefined4 *param_1)

{
  thunk_FUN_101e8710(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 101eb170; body size 33 bytes.
#line 1 "ENTRY_101eb170"

void __fastcall FUN_101eb170(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101eb270; body size 25 bytes.
#line 1 "ENTRY_101eb270"

void __fastcall FUN_101eb270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  thunk_FUN_101eb2b0();
  return;
}


// Reference entry 101ebc60; body size 45 bytes.
#line 1 "ENTRY_101ebc60"

undefined4 * __thiscall Recovered_Bulk::FUN_101ebc60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ebca0; body size 45 bytes.
#line 1 "ENTRY_101ebca0"

undefined4 * __thiscall Recovered_Bulk::FUN_101ebca0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ebe00; body size 45 bytes.
#line 1 "ENTRY_101ebe00"

undefined4 * __thiscall Recovered_Bulk::FUN_101ebe00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ebe40; body size 33 bytes.
#line 1 "ENTRY_101ebe40"

undefined4 * __thiscall Recovered_Bulk::FUN_101ebe40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ebe70; body size 33 bytes.
#line 1 "ENTRY_101ebe70"

undefined4 * __thiscall Recovered_Bulk::FUN_101ebe70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ebea0; body size 55 bytes.
#line 1 "ENTRY_101ebea0"

undefined4 * __thiscall Recovered_Bulk::FUN_101ebea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x90);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ebef0; body size 45 bytes.
#line 1 "ENTRY_101ebef0"

undefined4 * __thiscall Recovered_Bulk::FUN_101ebef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ebf30; body size 35 bytes.
#line 1 "ENTRY_101ebf30"

undefined4 __thiscall Recovered_Bulk::FUN_101ebf30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x90);
  }
  return (undefined4)(param_1);
}


// Reference entry 101ebf60; body size 55 bytes.
#line 1 "ENTRY_101ebf60"

undefined4 * __thiscall Recovered_Bulk::FUN_101ebf60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x90);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101ebfb0; body size 32 bytes.
#line 1 "ENTRY_101ebfb0"

undefined4 __thiscall Recovered_Bulk::FUN_101ebfb0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101eb3f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4)(param_1);
}


// Reference entry 101ec310; body size 20 bytes.
#line 1 "ENTRY_101ec310"

void __thiscall Recovered_Bulk::FUN_101ec310(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101e8670(param_2,param_3,param_1);
  return;
}


// Reference entry 101ec330; body size 20 bytes.
#line 1 "ENTRY_101ec330"

void __thiscall Recovered_Bulk::FUN_101ec330(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101e8710(param_2,param_3,param_1);
  return;
}


// Reference entry 101ec470; body size 33 bytes.
#line 1 "ENTRY_101ec470"

void __fastcall FUN_101ec470(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 101ec720; body size 24 bytes.
#line 1 "ENTRY_101ec720"

void __thiscall Recovered_Bulk::FUN_101ec720(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101e90e0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 101ec800; body size 61 bytes.
#line 1 "ENTRY_101ec800"

void __thiscall Recovered_Bulk::FUN_101ec800(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101ec850; body size 61 bytes.
#line 1 "ENTRY_101ec850"

void __thiscall Recovered_Bulk::FUN_101ec850(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101ec8a0; body size 61 bytes.
#line 1 "ENTRY_101ec8a0"

void __thiscall Recovered_Bulk::FUN_101ec8a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101ec8f0; body size 61 bytes.
#line 1 "ENTRY_101ec8f0"

void __thiscall Recovered_Bulk::FUN_101ec8f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 101ed5b0; body size 24 bytes.
#line 1 "ENTRY_101ed5b0"

void __fastcall FUN_101ed5b0(undefined4 *param_1)

{
  thunk_FUN_101e8670(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 101ed5d0; body size 24 bytes.
#line 1 "ENTRY_101ed5d0"

void __fastcall FUN_101ed5d0(undefined4 *param_1)

{
  thunk_FUN_101e8710(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 101edd80; body size 60 bytes.
#line 1 "ENTRY_101edd80"

void __stdcall FUN_101edd80(int param_1,int param_2)

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


// Reference entry 101eddd0; body size 60 bytes.
#line 1 "ENTRY_101eddd0"

void __stdcall FUN_101eddd0(int param_1,int param_2)

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


// Reference entry 101ee060; body size 28 bytes.
#line 1 "ENTRY_101ee060"

void __fastcall FUN_101ee060(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


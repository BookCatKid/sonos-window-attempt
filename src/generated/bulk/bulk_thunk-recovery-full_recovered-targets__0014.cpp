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
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef unsigned char uchar;
typedef int BOOL;
typedef void *HANDLE;
typedef struct HINSTANCE__ { char _pad; } HINSTANCE__;
typedef HINSTANCE__ *HINSTANCE;
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
typedef signed char sbyte;
typedef unsigned long long uint5;
typedef long long int5;
typedef unsigned long long uint6;
typedef long long int6;
typedef unsigned long long uint7;
typedef long long int7;
typedef unsigned int uintptr_t;
typedef int intptr_t;
typedef struct { char _p[10]; } unkuint10;
static float _fzero;
static int _izero;
#define NAN 0.0f/_fzero
#define INFINITY 1.0f/_fzero
struct tm { int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon;
  int tm_year; int tm_wday; int tm_yday; int tm_isdst; };
struct SYSTEMTIME { WORD wYear; WORD wMonth; WORD wDayOfWeek; WORD wDay;
  WORD wHour; WORD wMinute; WORD wSecond; WORD wMilliseconds; };
struct _jmp_buf { int _p[16]; };
extern "C" void longjmp(void *, int);
typedef struct { char _p[256]; } _wfinddata64i32_t;
extern int vftable;
typedef struct { char *_ptr; int _cnt; char *_base; int _flag;
  int _file; int _charbuf; int _bufsiz; char *_tmpfname; char *ptr;
  int cnt; void *base; int file; } _FILE_stub;
typedef _FILE_stub FILE;
typedef _FILE_stub _iobuf;
struct facet { char _pad; };
struct id { char _pad; };
typedef long fpos_t;
typedef struct { char _p; } _Mbstatet;
struct GUID { char _pad; };
struct exception { char _pad; };
struct type_info { char _pad; };
extern "C" void *memcpy(void *, const void *, size_t);
extern "C" void *memset(void *, ...);
extern "C" int memcmp(const void *, const void *, ...);
extern "C" size_t strlen(const char *);
extern "C" size_t wcslen(const wchar_t *);
extern "C" size_t fread(void *, ...);
extern "C" size_t fwrite(const void *, ...);
extern "C" void *malloc(...);
extern "C" void free(void *);
extern "C" void *calloc(...);
extern "C" void *realloc(...);
extern "C" char *strcpy(char *, const char *);
extern "C" wchar_t *wcscpy(wchar_t *, const wchar_t *);
extern "C" char *strstr(...);
extern "C" int strcmp(const char *, const char *);
extern "C" int wcscmp(const wchar_t *, const wchar_t *);
extern "C" char *strchr(const void *, int);
extern "C" char *strrchr(const void *, int);
extern "C" char *strncpy(char *, const char *, size_t);
extern "C" char *strcat(char *, const char *);
extern "C" int strncmp(const char *, const char *, size_t);
extern "C" int atoi(const char *);
extern "C" int sprintf(char *, const char *, ...);
extern "C" int snprintf(char *, size_t, const char *, ...);
extern "C" int sscanf(const char *, const char *, ...);
extern "C" long strtol(const char *, char **, int);
extern "C" int fclose(void *);
typedef struct { char _p[64]; } _stat64i32;
typedef void (*_purecall_handler)(void);
extern "C" _purecall_handler _set_purecall_handler(_purecall_handler);
typedef _Mbstatet mbstate_t;
extern "C" size_t _Mbrtowc(wchar_t *, const char *, size_t, mbstate_t *,
                           void *);
extern "C" int feof(void *);
extern "C" int fflush(void *);
extern "C" unsigned long __readfsdword(unsigned long);
#pragma intrinsic(__readfsdword)
extern "C" int __except_handler4(void);
extern "C" int __except_handler3(void);
extern "C" void __security_check_cookie(size_t);
extern "C" int __security_cookie;
namespace std { template<class... A> int _Xlength_error(A...); typedef int _Iterator_base0; }
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_addref(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct BecomeCoordinatorOfStandaloneGroup { char _pad; BecomeCoordinatorOfStandaloneGroup(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDevicePost { char _pad; SCIOpDevicePost(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; void __thiscall m_FUN_108b4560(undefined1 param_2); template<class... A> int m_FUN_108b4560(A...); void __thiscall m_FUN_108b4570(undefined1 param_2); template<class... A> int m_FUN_108b4570(A...); void __thiscall m_FUN_108b4580(undefined1 param_2); template<class... A> int m_FUN_108b4580(A...); undefined4 * __thiscall m_FUN_108b47b0(undefined4 param_2); template<class... A> int m_FUN_108b47b0(A...); undefined4 * __thiscall m_FUN_108b4bc0(undefined4 param_2); template<class... A> int m_FUN_108b4bc0(A...); undefined4 * __thiscall m_FUN_108b4d10(undefined4 param_2); template<class... A> int m_FUN_108b4d10(A...); undefined4 * __thiscall m_FUN_108b4e60(undefined4 param_2); template<class... A> int m_FUN_108b4e60(A...); undefined4 * __thiscall m_FUN_108b4fc0(undefined4 param_2); template<class... A> int m_FUN_108b4fc0(A...); undefined4 * __thiscall m_FUN_108bcad0(undefined4 param_2); template<class... A> int m_FUN_108bcad0(A...); undefined4 * __thiscall m_FUN_108bd3b0(undefined4 param_2); template<class... A> int m_FUN_108bd3b0(A...); undefined4 * __thiscall m_FUN_108bd5b0(undefined4 param_2); template<class... A> int m_FUN_108bd5b0(A...); undefined4 * __thiscall m_FUN_108bd910(undefined4 param_2); template<class... A> int m_FUN_108bd910(A...); undefined4 * __thiscall m_FUN_108bda70(undefined4 param_2); template<class... A> int m_FUN_108bda70(A...); undefined4 * __thiscall m_FUN_108bdbd0(undefined4 param_2); template<class... A> int m_FUN_108bdbd0(A...); undefined4 * __thiscall m_FUN_108bdd20(undefined4 param_2); template<class... A> int m_FUN_108bdd20(A...); undefined4 * __thiscall m_FUN_108bde80(undefined4 param_2); template<class... A> int m_FUN_108bde80(A...); SCStr * __thiscall m_FUN_108c3ef0(SCStr *param_2); template<class... A> int m_FUN_108c3ef0(A...); int * __thiscall m_FUN_108c41d0(int *param_2); template<class... A> int m_FUN_108c41d0(A...); void __thiscall m_FUN_108c7420(undefined1 param_2); template<class... A> int m_FUN_108c7420(A...); void __thiscall m_FUN_108c7430(undefined1 param_2); template<class... A> int m_FUN_108c7430(A...); undefined4 * __thiscall m_FUN_108c7920(undefined4 param_2); template<class... A> int m_FUN_108c7920(A...); undefined4 * __thiscall m_FUN_108c85a0(undefined4 param_2); template<class... A> int m_FUN_108c85a0(A...); undefined4 * __thiscall m_FUN_108c86f0(undefined4 param_2); template<class... A> int m_FUN_108c86f0(A...); undefined4 * __thiscall m_FUN_108c8840(undefined4 param_2); template<class... A> int m_FUN_108c8840(A...); undefined4 * __thiscall m_FUN_108c8990(undefined4 param_2); template<class... A> int m_FUN_108c8990(A...); undefined4 * __thiscall m_FUN_108c8ae0(undefined4 param_2); template<class... A> int m_FUN_108c8ae0(A...); undefined4 * __thiscall m_FUN_108c8c30(undefined4 param_2); template<class... A> int m_FUN_108c8c30(A...); undefined4 * __thiscall m_FUN_108c8d90(undefined4 param_2); template<class... A> int m_FUN_108c8d90(A...); undefined4 * __thiscall m_FUN_108c8ee0(undefined4 param_2); template<class... A> int m_FUN_108c8ee0(A...); undefined4 * __thiscall m_FUN_108c9030(undefined4 param_2); template<class... A> int m_FUN_108c9030(A...); undefined4 * __thiscall m_FUN_108c9320(undefined4 param_2); template<class... A> int m_FUN_108c9320(A...); undefined4 * __thiscall m_FUN_108c9470(undefined4 param_2); template<class... A> int m_FUN_108c9470(A...); undefined4 * __thiscall m_FUN_108ca2d0(undefined4 param_2); template<class... A> int m_FUN_108ca2d0(A...); void __thiscall m_FUN_108cabb0(int *param_2,int param_3); template<class... A> int m_FUN_108cabb0(A...); int * __thiscall m_FUN_108cabd0(int param_2); template<class... A> int m_FUN_108cabd0(A...); int * __thiscall m_FUN_108cabe0(int param_2); template<class... A> int m_FUN_108cabe0(A...); void __thiscall m_FUN_108cbbb0(undefined4 param_2); template<class... A> int m_FUN_108cbbb0(A...); void __thiscall m_FUN_108df810(undefined1 param_2); template<class... A> int m_FUN_108df810(A...); undefined4 * __thiscall m_FUN_108dfd30(undefined4 param_2); template<class... A> int m_FUN_108dfd30(A...); undefined4 * __thiscall m_FUN_108e0d90(undefined4 param_2); template<class... A> int m_FUN_108e0d90(A...); undefined4 * __thiscall m_FUN_108e0ee0(undefined4 param_2); template<class... A> int m_FUN_108e0ee0(A...); undefined4 * __thiscall m_FUN_108e1030(undefined4 param_2); template<class... A> int m_FUN_108e1030(A...); undefined4 * __thiscall m_FUN_108e1180(undefined4 param_2); template<class... A> int m_FUN_108e1180(A...); undefined4 * __thiscall m_FUN_108e12d0(undefined4 param_2); template<class... A> int m_FUN_108e12d0(A...); undefined4 * __thiscall m_FUN_108e1420(undefined4 param_2); template<class... A> int m_FUN_108e1420(A...); undefined4 * __thiscall m_FUN_108e1600(undefined4 param_2); template<class... A> int m_FUN_108e1600(A...); undefined4 * __thiscall m_FUN_108e1750(undefined4 param_2); template<class... A> int m_FUN_108e1750(A...); undefined4 * __thiscall m_FUN_108e18a0(undefined4 param_2); template<class... A> int m_FUN_108e18a0(A...); undefined4 * __thiscall m_FUN_108e19f0(undefined4 param_2); template<class... A> int m_FUN_108e19f0(A...); undefined4 * __thiscall m_FUN_108e1b40(undefined4 param_2); template<class... A> int m_FUN_108e1b40(A...); undefined4 * __thiscall m_FUN_108e1c90(undefined4 param_2); template<class... A> int m_FUN_108e1c90(A...); undefined4 * __thiscall m_FUN_108e1de0(undefined4 param_2); template<class... A> int m_FUN_108e1de0(A...); undefined4 * __thiscall m_FUN_108e2140(undefined4 param_2); template<class... A> int m_FUN_108e2140(A...); undefined4 * __thiscall m_FUN_108e2290(undefined4 param_2); template<class... A> int m_FUN_108e2290(A...); SCStr * __thiscall m_FUN_108e33e0(SCStr *param_2); template<class... A> int m_FUN_108e33e0(A...); SCStr * __thiscall m_FUN_108ee760(SCStr *param_2); template<class... A> int m_FUN_108ee760(A...); SCStr * __thiscall m_FUN_108ee780(SCStr *param_2); template<class... A> int m_FUN_108ee780(A...); SCStr * __thiscall m_FUN_108eeaf0(SCStr *param_2); template<class... A> int m_FUN_108eeaf0(A...); SCStr * __thiscall m_FUN_108eeb10(SCStr *param_2); template<class... A> int m_FUN_108eeb10(A...); int * __thiscall m_FUN_108eeb30(int *param_2); template<class... A> int m_FUN_108eeb30(A...); int * __thiscall m_FUN_108eeb80(int *param_2); template<class... A> int m_FUN_108eeb80(A...); void __thiscall m_FUN_108f7ff0(undefined1 param_2); template<class... A> int m_FUN_108f7ff0(A...); void __thiscall m_FUN_108f8000(undefined1 param_2); template<class... A> int m_FUN_108f8000(A...); void __thiscall m_FUN_108f8010(undefined1 param_2); template<class... A> int m_FUN_108f8010(A...); void __thiscall m_FUN_108f8020(undefined4 param_2); template<class... A> int m_FUN_108f8020(A...); void __thiscall m_FUN_108f8030(undefined4 param_2); template<class... A> int m_FUN_108f8030(A...); void __thiscall m_FUN_108f8040(SCStr *param_2); template<class... A> int m_FUN_108f8040(A...); void __thiscall m_FUN_108f8070(SCStr *param_2); template<class... A> int m_FUN_108f8070(A...); void __thiscall m_FUN_108f8660(undefined1 param_2); template<class... A> int m_FUN_108f8660(A...); void __thiscall m_FUN_108f8670(undefined1 param_2); template<class... A> int m_FUN_108f8670(A...); void __thiscall m_FUN_108f8830(undefined1 param_2); template<class... A> int m_FUN_108f8830(A...); undefined4 * __thiscall m_FUN_108f8860(undefined4 param_2); template<class... A> int m_FUN_108f8860(A...); undefined4 * __thiscall m_FUN_108f89a0(undefined4 param_2); template<class... A> int m_FUN_108f89a0(A...); int * __thiscall m_FUN_108fb140(int *param_2); template<class... A> int m_FUN_108fb140(A...); int * __thiscall m_FUN_108fb320(int *param_2); template<class... A> int m_FUN_108fb320(A...); int * __thiscall m_FUN_108fb5b0(int *param_2); template<class... A> int m_FUN_108fb5b0(A...); void __thiscall m_FUN_108fb620(undefined4 *param_2); template<class... A> int m_FUN_108fb620(A...); undefined4 * __thiscall m_FUN_108fb860(undefined4 param_2); template<class... A> int m_FUN_108fb860(A...); undefined4 * __thiscall m_FUN_108fbcb0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_108fbcb0(A...); undefined4 * __thiscall m_FUN_108fbe40(undefined4 param_2); template<class... A> int m_FUN_108fbe40(A...); undefined4 * __thiscall m_FUN_108fc140(undefined4 param_2); template<class... A> int m_FUN_108fc140(A...); undefined4 * __thiscall m_FUN_108fc290(undefined4 param_2); template<class... A> int m_FUN_108fc290(A...); void __thiscall m_FUN_108fd6b0(uint param_2); template<class... A> int m_FUN_108fd6b0(A...); void __thiscall m_FUN_109054c0(undefined1 param_2); template<class... A> int m_FUN_109054c0(A...); undefined4 * __thiscall m_FUN_10905590(undefined4 param_2); template<class... A> int m_FUN_10905590(A...); undefined4 * __thiscall m_FUN_10906250(undefined4 param_2); template<class... A> int m_FUN_10906250(A...); undefined4 * __thiscall m_FUN_109063a0(undefined4 param_2); template<class... A> int m_FUN_109063a0(A...); undefined4 * __thiscall m_FUN_10906500(undefined4 param_2); template<class... A> int m_FUN_10906500(A...); undefined4 * __thiscall m_FUN_10906860(undefined4 param_2); template<class... A> int m_FUN_10906860(A...); undefined4 * __thiscall m_FUN_109069b0(undefined4 param_2); template<class... A> int m_FUN_109069b0(A...); undefined4 * __thiscall m_FUN_10906d10(undefined4 param_2); template<class... A> int m_FUN_10906d10(A...); undefined4 * __thiscall m_FUN_10906e60(undefined4 param_2); template<class... A> int m_FUN_10906e60(A...); undefined4 * __thiscall m_FUN_10906fb0(undefined4 param_2); template<class... A> int m_FUN_10906fb0(A...); undefined4 * __thiscall m_FUN_10907110(undefined4 param_2); template<class... A> int m_FUN_10907110(A...); void __thiscall m_FUN_10916a40(undefined1 param_2); template<class... A> int m_FUN_10916a40(A...); void __thiscall m_FUN_10916a50(undefined1 param_2); template<class... A> int m_FUN_10916a50(A...); void __thiscall m_FUN_10916a60(undefined1 param_2); template<class... A> int m_FUN_10916a60(A...); void __thiscall m_FUN_10916a70(undefined1 param_2); template<class... A> int m_FUN_10916a70(A...); void __thiscall m_FUN_10916a80(undefined1 param_2); template<class... A> int m_FUN_10916a80(A...); undefined4 * __thiscall m_FUN_10916c80(undefined4 param_2); template<class... A> int m_FUN_10916c80(A...); undefined4 * __thiscall m_FUN_10918160(undefined4 *param_2); template<class... A> int m_FUN_10918160(A...); undefined4 * __thiscall m_FUN_109185e0(undefined4 param_2); template<class... A> int m_FUN_109185e0(A...); undefined4 * __thiscall m_FUN_10918730(undefined4 param_2); template<class... A> int m_FUN_10918730(A...); undefined4 * __thiscall m_FUN_10918880(undefined4 param_2); template<class... A> int m_FUN_10918880(A...); undefined4 * __thiscall m_FUN_109189d0(undefined4 param_2); template<class... A> int m_FUN_109189d0(A...); undefined4 * __thiscall m_FUN_10918b20(undefined4 param_2); template<class... A> int m_FUN_10918b20(A...); undefined4 * __thiscall m_FUN_10918c70(undefined4 param_2); template<class... A> int m_FUN_10918c70(A...); undefined4 * __thiscall m_FUN_10918fd0(undefined4 param_2); template<class... A> int m_FUN_10918fd0(A...); undefined4 * __thiscall m_FUN_10919120(undefined4 param_2); template<class... A> int m_FUN_10919120(A...); undefined4 * __thiscall m_FUN_10919280(undefined4 param_2); template<class... A> int m_FUN_10919280(A...); undefined4 * __thiscall m_FUN_10919400(undefined4 param_2); template<class... A> int m_FUN_10919400(A...); undefined4 * __thiscall m_FUN_10919550(undefined4 param_2); template<class... A> int m_FUN_10919550(A...); undefined4 * __thiscall m_FUN_109198b0(undefined4 param_2); template<class... A> int m_FUN_109198b0(A...); undefined4 * __thiscall m_FUN_10919a00(undefined4 param_2); template<class... A> int m_FUN_10919a00(A...); void __thiscall m_FUN_1091caf0(undefined4 *param_2); template<class... A> int m_FUN_1091caf0(A...); undefined4 * __thiscall m_FUN_1092b820(undefined4 param_2); template<class... A> int m_FUN_1092b820(A...); undefined4 * __thiscall m_FUN_1092c770(undefined4 param_2); template<class... A> int m_FUN_1092c770(A...); undefined4 * __thiscall m_FUN_1092c8c0(undefined4 param_2); template<class... A> int m_FUN_1092c8c0(A...); undefined4 * __thiscall m_FUN_1092ca10(undefined4 param_2); template<class... A> int m_FUN_1092ca10(A...); undefined4 * __thiscall m_FUN_1092cb60(undefined4 param_2); template<class... A> int m_FUN_1092cb60(A...); undefined4 * __thiscall m_FUN_1092ccb0(undefined4 param_2); template<class... A> int m_FUN_1092ccb0(A...); undefined4 * __thiscall m_FUN_1092ce00(undefined4 param_2); template<class... A> int m_FUN_1092ce00(A...); undefined4 * __thiscall m_FUN_1092cf50(undefined4 param_2); template<class... A> int m_FUN_1092cf50(A...); undefined4 * __thiscall m_FUN_1092d0a0(undefined4 param_2); template<class... A> int m_FUN_1092d0a0(A...); undefined4 * __thiscall m_FUN_1092d1f0(undefined4 param_2); template<class... A> int m_FUN_1092d1f0(A...); undefined4 * __thiscall m_FUN_1092d340(undefined4 param_2); template<class... A> int m_FUN_1092d340(A...); undefined4 * __thiscall m_FUN_1092d490(undefined4 param_2); template<class... A> int m_FUN_1092d490(A...); undefined4 * __thiscall m_FUN_1092d5e0(undefined4 param_2); template<class... A> int m_FUN_1092d5e0(A...); undefined4 * __thiscall m_FUN_1092d730(undefined4 param_2); template<class... A> int m_FUN_1092d730(A...); undefined4 * __thiscall m_FUN_1092d880(undefined4 param_2); template<class... A> int m_FUN_1092d880(A...); undefined4 * __thiscall m_FUN_1092d9d0(undefined4 param_2); template<class... A> int m_FUN_1092d9d0(A...); undefined4 * __thiscall m_FUN_1092db20(undefined4 param_2); template<class... A> int m_FUN_1092db20(A...); void __thiscall m_FUN_10948c60(undefined1 param_2); template<class... A> int m_FUN_10948c60(A...); void __thiscall m_FUN_10948e90(undefined4 param_2); template<class... A> int m_FUN_10948e90(A...); void __thiscall m_FUN_10948ea0(undefined1 param_2); template<class... A> int m_FUN_10948ea0(A...); void __thiscall m_FUN_10948eb0(int param_2); template<class... A> int m_FUN_10948eb0(A...); undefined4 * __thiscall m_FUN_10948f70(undefined4 param_2); template<class... A> int m_FUN_10948f70(A...); undefined4 * __thiscall m_FUN_10949560(undefined4 param_2); template<class... A> int m_FUN_10949560(A...); undefined4 * __thiscall m_FUN_109496f0(undefined4 param_2); template<class... A> int m_FUN_109496f0(A...); undefined4 * __thiscall m_FUN_10949850(undefined4 param_2); template<class... A> int m_FUN_10949850(A...); undefined4 * __thiscall m_FUN_109499a0(undefined4 param_2); template<class... A> int m_FUN_109499a0(A...); undefined4 * __thiscall m_FUN_10949af0(undefined4 param_2); template<class... A> int m_FUN_10949af0(A...); undefined4 * __thiscall m_FUN_10949c40(undefined4 param_2); template<class... A> int m_FUN_10949c40(A...); undefined4 * __thiscall m_FUN_109543f0(undefined4 param_2); template<class... A> int m_FUN_109543f0(A...); undefined4 * __thiscall m_FUN_10954620(undefined4 param_2); template<class... A> int m_FUN_10954620(A...); undefined4 * __thiscall m_FUN_10954770(undefined4 param_2); template<class... A> int m_FUN_10954770(A...); undefined4 * __thiscall m_FUN_10957d00(undefined4 param_2); template<class... A> int m_FUN_10957d00(A...); undefined4 * __thiscall m_FUN_10958040(undefined4 param_2); template<class... A> int m_FUN_10958040(A...); undefined4 * __thiscall m_FUN_1095b3d0(undefined4 param_2); template<class... A> int m_FUN_1095b3d0(A...); undefined4 * __thiscall m_FUN_1095b820(undefined4 param_2); template<class... A> int m_FUN_1095b820(A...); undefined4 * __thiscall m_FUN_1095b990(undefined4 param_2); template<class... A> int m_FUN_1095b990(A...); undefined4 * __thiscall m_FUN_1095bb30(undefined4 param_2); template<class... A> int m_FUN_1095bb30(A...); undefined4 * __thiscall m_FUN_1095bc80(undefined4 param_2); template<class... A> int m_FUN_1095bc80(A...); void __thiscall m_FUN_1095d030(undefined4 *param_2); template<class... A> int m_FUN_1095d030(A...); void __thiscall m_FUN_1095da90(int *param_2); template<class... A> int m_FUN_1095da90(A...); undefined4 * __thiscall m_FUN_10961ae0(undefined4 param_2); template<class... A> int m_FUN_10961ae0(A...); undefined4 * __thiscall m_FUN_10961e00(undefined4 param_2); template<class... A> int m_FUN_10961e00(A...); undefined4 * __thiscall m_FUN_10961e30(undefined4 param_2); template<class... A> int m_FUN_10961e30(A...); undefined4 * __thiscall m_FUN_10961f80(undefined4 param_2); template<class... A> int m_FUN_10961f80(A...); undefined4 * __thiscall m_FUN_109620d0(undefined4 param_2); template<class... A> int m_FUN_109620d0(A...); SCStr * __thiscall m_FUN_10962630(SCStr *param_2); template<class... A> int m_FUN_10962630(A...); undefined4 * __thiscall m_FUN_10970550(undefined4 param_2); template<class... A> int m_FUN_10970550(A...); undefined4 * __thiscall m_FUN_10970780(undefined4 param_2); template<class... A> int m_FUN_10970780(A...); undefined4 * __thiscall m_FUN_109708d0(undefined4 param_2); template<class... A> int m_FUN_109708d0(A...); int __thiscall m_FUN_10970ef0(int param_2); template<class... A> int m_FUN_10970ef0(A...); undefined4 * __thiscall m_FUN_10973090(undefined4 param_2); template<class... A> int m_FUN_10973090(A...); undefined4 * __thiscall m_FUN_10973d50(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10973d50(A...); undefined4 * __thiscall m_FUN_10973e00(undefined4 param_2); template<class... A> int m_FUN_10973e00(A...); undefined4 * __thiscall m_FUN_10973f50(undefined4 param_2); template<class... A> int m_FUN_10973f50(A...); undefined4 * __thiscall m_FUN_109740a0(undefined4 param_2); template<class... A> int m_FUN_109740a0(A...); undefined4 * __thiscall m_FUN_109741f0(undefined4 param_2); template<class... A> int m_FUN_109741f0(A...); undefined4 * __thiscall m_FUN_10974340(undefined4 param_2); template<class... A> int m_FUN_10974340(A...); undefined4 * __thiscall m_FUN_10974490(undefined4 param_2); template<class... A> int m_FUN_10974490(A...); undefined4 * __thiscall m_FUN_10974a00(undefined4 param_2); template<class... A> int m_FUN_10974a00(A...); undefined4 * __thiscall m_FUN_10974b60(undefined4 param_2); template<class... A> int m_FUN_10974b60(A...); undefined4 * __thiscall m_FUN_10974cb0(undefined4 param_2); template<class... A> int m_FUN_10974cb0(A...); void __thiscall m_FUN_1097fa80(undefined4 param_2); template<class... A> int m_FUN_1097fa80(A...); undefined4 * __thiscall m_FUN_109809d0(undefined4 param_2); template<class... A> int m_FUN_109809d0(A...); undefined4 * __thiscall m_FUN_109813e0(undefined4 param_2); template<class... A> int m_FUN_109813e0(A...); undefined4 * __thiscall m_FUN_10981530(undefined4 param_2); template<class... A> int m_FUN_10981530(A...); undefined4 * __thiscall m_FUN_10981680(undefined4 param_2); template<class... A> int m_FUN_10981680(A...); undefined4 * __thiscall m_FUN_10981e10(undefined4 param_2); template<class... A> int m_FUN_10981e10(A...); int * __thiscall m_FUN_10988900(int *param_2); template<class... A> int m_FUN_10988900(A...); int * __thiscall m_FUN_10988980(int *param_2); template<class... A> int m_FUN_10988980(A...); int * __thiscall m_FUN_109889a0(int *param_2); template<class... A> int m_FUN_109889a0(A...); undefined4 * __thiscall m_FUN_10988dd0(undefined4 param_2); template<class... A> int m_FUN_10988dd0(A...); undefined4 * __thiscall m_FUN_10989020(undefined4 param_2); template<class... A> int m_FUN_10989020(A...); undefined4 * __thiscall m_FUN_10989170(undefined4 param_2); template<class... A> int m_FUN_10989170(A...); SCStr * __thiscall m_FUN_1098b380(SCStr *param_2); template<class... A> int m_FUN_1098b380(A...); undefined4 * __thiscall m_FUN_1098d680(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1098d680(A...); undefined4 * __thiscall m_FUN_1098d6c0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1098d6c0(A...); undefined4 * __thiscall m_FUN_1098d7f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1098d7f0(A...); int * __thiscall m_FUN_1098d950(int *param_2); template<class... A> int m_FUN_1098d950(A...); void __thiscall m_FUN_1098dc20(int *param_2,undefined4 param_3); template<class... A> int m_FUN_1098dc20(A...); int * __thiscall m_FUN_1098e2e0(int *param_2,SCStr *param_3); template<class... A> int m_FUN_1098e2e0(A...); undefined4 * __thiscall m_FUN_1098e860(undefined4 param_2); template<class... A> int m_FUN_1098e860(A...); undefined4 * __thiscall m_FUN_1098ed60(undefined4 *param_2); template<class... A> int m_FUN_1098ed60(A...); undefined4 * __thiscall m_FUN_1098eea0(undefined4 param_2); template<class... A> int m_FUN_1098eea0(A...); undefined4 * __thiscall m_FUN_1098ef00(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1098ef00(A...); undefined4 * __thiscall m_FUN_1098ef10(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1098ef10(A...); undefined4 * __thiscall m_FUN_1098ef50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1098ef50(A...); undefined4 * __thiscall m_FUN_1098efe0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1098efe0(A...); undefined4 * __thiscall m_FUN_1098eff0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1098eff0(A...); undefined4 * __thiscall m_FUN_1098f4b0(undefined4 param_2); template<class... A> int m_FUN_1098f4b0(A...); undefined4 * __thiscall m_FUN_1098f820(undefined4 param_2); template<class... A> int m_FUN_1098f820(A...); undefined4 * __thiscall m_FUN_1098f970(undefined4 param_2); template<class... A> int m_FUN_1098f970(A...); bool __thiscall m_FUN_10990780(int *param_2); template<class... A> int m_FUN_10990780(A...); bool __thiscall m_FUN_109907a0(int *param_2); template<class... A> int m_FUN_109907a0(A...); undefined4 * __thiscall m_FUN_10990820(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10990820(A...); void __thiscall m_FUN_10991ac0(undefined4 *param_2); template<class... A> int m_FUN_10991ac0(A...); void __thiscall m_FUN_10991fb0(undefined4 *param_2); template<class... A> int m_FUN_10991fb0(A...); void __thiscall m_FUN_109927d0(undefined4 *param_2); template<class... A> int m_FUN_109927d0(A...); void __thiscall m_FUN_10999120(undefined1 param_2); template<class... A> int m_FUN_10999120(A...); undefined4 * __thiscall m_FUN_10999170(undefined4 param_2); template<class... A> int m_FUN_10999170(A...); undefined4 * __thiscall m_FUN_10999770(undefined4 param_2); template<class... A> int m_FUN_10999770(A...); void __thiscall m_FUN_1099d8f0(SCStr *param_2); template<class... A> int m_FUN_1099d8f0(A...); undefined4 * __thiscall m_FUN_1099d9f0(undefined4 param_2); template<class... A> int m_FUN_1099d9f0(A...); undefined4 * __thiscall m_FUN_1099de00(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1099de00(A...); undefined4 * __thiscall m_FUN_1099de20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1099de20(A...); undefined4 * __thiscall m_FUN_1099de30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1099de30(A...); SCStr * __thiscall m_FUN_1099de90(SCStr *param_2); template<class... A> int m_FUN_1099de90(A...); undefined4 * __thiscall m_FUN_1099e060(undefined4 param_2); template<class... A> int m_FUN_1099e060(A...); undefined4 * __thiscall m_FUN_1099e1b0(undefined4 param_2); template<class... A> int m_FUN_1099e1b0(A...); undefined4 * __thiscall m_FUN_1099e300(undefined4 param_2); template<class... A> int m_FUN_1099e300(A...); undefined4 * __thiscall m_FUN_1099e450(undefined4 param_2); template<class... A> int m_FUN_1099e450(A...); bool __thiscall m_FUN_1099ef90(int *param_2); template<class... A> int m_FUN_1099ef90(A...); bool __thiscall m_FUN_1099efb0(int *param_2); template<class... A> int m_FUN_1099efb0(A...); int __thiscall m_FUN_1099efd0(int param_2); template<class... A> int m_FUN_1099efd0(A...); int __thiscall m_FUN_1099efe0(int param_2); template<class... A> int m_FUN_1099efe0(A...); void __thiscall m_FUN_1099f040(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1099f040(A...); uint __thiscall m_FUN_1099f6f0(uint param_2); template<class... A> int m_FUN_1099f6f0(A...); void __thiscall m_FUN_1099fbb0(undefined4 *param_2); template<class... A> int m_FUN_1099fbb0(A...); void __thiscall m_FUN_109a09c0(undefined4 *param_2); template<class... A> int m_FUN_109a09c0(A...); undefined4 __thiscall m_FUN_109a2d60(undefined4 param_2); template<class... A> int m_FUN_109a2d60(A...); void __thiscall m_FUN_109a6580(SCStr *param_2); template<class... A> int m_FUN_109a6580(A...); undefined4 * __thiscall m_FUN_109a67a0(undefined4 param_2); template<class... A> int m_FUN_109a67a0(A...); undefined4 * __thiscall m_FUN_109a77e0(undefined4 param_2); template<class... A> int m_FUN_109a77e0(A...); undefined4 * __thiscall m_FUN_109a7b40(undefined4 param_2); template<class... A> int m_FUN_109a7b40(A...); undefined4 * __thiscall m_FUN_109a7ea0(undefined4 param_2); template<class... A> int m_FUN_109a7ea0(A...); undefined4 * __thiscall m_FUN_109a84a0(undefined4 param_2); template<class... A> int m_FUN_109a84a0(A...); void __thiscall m_FUN_109b6ad0(undefined1 param_2); template<class... A> int m_FUN_109b6ad0(A...); void __thiscall m_FUN_109b6ae0(undefined1 param_2); template<class... A> int m_FUN_109b6ae0(A...); void __thiscall m_FUN_109b6af0(undefined1 param_2); template<class... A> int m_FUN_109b6af0(A...); void __thiscall m_FUN_109b6b00(undefined1 param_2); template<class... A> int m_FUN_109b6b00(A...); undefined4 * __thiscall m_FUN_109b6c40(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_109b6c40(A...); undefined4 * __thiscall m_FUN_109b6f20(undefined4 param_2); template<class... A> int m_FUN_109b6f20(A...); undefined4 * __thiscall m_FUN_109b7330(undefined4 param_2); template<class... A> int m_FUN_109b7330(A...); undefined4 * __thiscall m_FUN_109b74a0(undefined4 param_2); template<class... A> int m_FUN_109b74a0(A...); undefined4 * __thiscall m_FUN_109b75f0(undefined4 param_2); template<class... A> int m_FUN_109b75f0(A...); undefined4 * __thiscall m_FUN_109b7740(undefined4 param_2); template<class... A> int m_FUN_109b7740(A...); SCStr * __thiscall m_FUN_109bbed0(SCStr *param_2); template<class... A> int m_FUN_109bbed0(A...); undefined4 * __thiscall m_FUN_109bf2d0(undefined4 param_2); template<class... A> int m_FUN_109bf2d0(A...); undefined4 * __thiscall m_FUN_109bf900(undefined4 param_2); template<class... A> int m_FUN_109bf900(A...); undefined4 * __thiscall m_FUN_109bfc60(undefined4 param_2); template<class... A> int m_FUN_109bfc60(A...); undefined4 * __thiscall m_FUN_109c3ad0(undefined4 param_2); template<class... A> int m_FUN_109c3ad0(A...); undefined4 * __thiscall m_FUN_109c4010(undefined4 param_2); template<class... A> int m_FUN_109c4010(A...); undefined4 * __thiscall m_FUN_109c41a0(undefined4 param_2); template<class... A> int m_FUN_109c41a0(A...); undefined4 * __thiscall m_FUN_109c4500(undefined4 param_2); template<class... A> int m_FUN_109c4500(A...); undefined4 * __thiscall m_FUN_109cb880(undefined4 param_2); template<class... A> int m_FUN_109cb880(A...); undefined4 * __thiscall m_FUN_109cbba0(undefined4 param_2); template<class... A> int m_FUN_109cbba0(A...); undefined4 * __thiscall m_FUN_109cbcf0(undefined4 param_2); template<class... A> int m_FUN_109cbcf0(A...); undefined4 * __thiscall m_FUN_109cbe40(undefined4 param_2); template<class... A> int m_FUN_109cbe40(A...); SCStr * __thiscall m_FUN_109d0450(SCStr *param_2); template<class... A> int m_FUN_109d0450(A...); undefined4 * __thiscall m_FUN_109d8950(undefined4 param_2); template<class... A> int m_FUN_109d8950(A...); };

extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int operator_new(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101b92f0(...);
template<class... A> int __stdcall thunk_FUN_1064d7a0(A...);
extern int thunk_FUN_106dbf00(...);
template<class... A> int __stdcall thunk_FUN_108bd500(A...);
extern int thunk_FUN_108be910(...);
template<class... A> int __stdcall thunk_FUN_108e1570(A...);
extern int thunk_FUN_108e3730(...);
extern int thunk_FUN_10929d00(...);
template<class... A> int __stdcall thunk_FUN_1098dcb0(A...);
extern int thunk_FUN_1099d300(...);
template<class... A> int __stdcall thunk_FUN_10bcef80(A...);
extern int thunk_FUN_10c97610(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10eac8c0(...);
extern int thunk_FUN_10eacd20(...);
extern int thunk_FUN_10eacd60(...);
extern int thunk_FUN_10eacdd0(...);
extern int thunk_FUN_10eace90(...);
extern int thunk_FUN_10eb4020(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
template<class... A> int __stdcall thunk_FUN_10eb4cc0(A...);
template<class... A> int __stdcall thunk_FUN_10eb4d80(A...);
extern int thunk_FUN_10eb4e80(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ebc1e0(...);
template<class... A> int __stdcall thunk_FUN_10ec06d0(A...);
extern int thunk_FUN_10ee2db0(...);
extern int thunk_FUN_10ee48c0(...);
template<class... A> int __stdcall thunk_FUN_111c0760(A...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11248b40(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_12126b84;
extern int DAT_121a35b0;
extern int DAT_121a35b4;
extern int DAT_121a35b8;
extern int DAT_121a35bc;
extern int DAT_121a35c0;
extern int DAT_121a35c4;
extern int DAT_121a35c8;
extern int DAT_121a35cc;
extern int DAT_121a35d0;
extern int DAT_121a35d4;
extern int DAT_121a35d8;
extern int DAT_121a35dc;
extern int DAT_121a35e0;
extern int DAT_121a35e4;
extern int DAT_121a35e8;
extern int DAT_121a363c;
extern int DAT_121a3640;
extern int DAT_121a3644;
extern int DAT_121a3648;
extern int DAT_121a364c;
extern int DAT_121a3694;
extern int DAT_121a3698;
extern int DAT_121a369c;
extern int DAT_121a36a0;
extern int DAT_121a36a4;
extern int DAT_121a36a8;
extern int DAT_121a36ac;
extern int DAT_121a36b0;
extern int DAT_121a36b4;
extern int DAT_121a3704;
extern int DAT_121a3708;
extern int DAT_121a370c;
extern int DAT_121a3710;
extern int DAT_121a3714;
extern int DAT_121a3718;
extern int DAT_121a371c;
extern int DAT_121a3720;
extern int DAT_121a3724;
extern int DAT_121a3728;
extern int DAT_121a372c;
extern int DAT_121a3730;
extern int DAT_121a3734;
extern int DAT_121a3738;
extern int DAT_121a378c;
extern int DAT_121a3790;
extern int DAT_121a3794;
extern int DAT_121a3798;
extern int DAT_121a379c;
extern int DAT_121a37a0;
extern int DAT_121a37a4;
extern int DAT_121a37a8;
extern int DAT_121a37ac;
extern int DAT_121a37b0;
extern int DAT_121a37b4;
extern int DAT_121a37b8;
extern int DAT_121a37bc;
extern int DAT_121a37c0;
extern int DAT_121a37c4;
extern int DAT_121a37c8;
extern int DAT_121a37cc;
extern int DAT_121a3820;
extern int DAT_121a3824;
extern int DAT_121a386c;
extern int DAT_121a3870;
extern int DAT_121a3874;
extern int DAT_121a3878;
extern int DAT_121a387c;
extern int DAT_121a38c8;
extern int DAT_121a38cc;
extern int DAT_121a38d0;
extern int DAT_121a38d4;
extern int DAT_121a38d8;
extern int DAT_121a38dc;
extern int DAT_121a38e0;
extern int DAT_121a38e4;
extern int DAT_121a38e8;
extern int DAT_121a38ec;
extern int DAT_121a38f0;
extern int DAT_121a38f4;
extern int DAT_121a3944;
extern int DAT_121a3948;
extern int DAT_121a394c;
extern int DAT_121a3950;
extern int DAT_121a3954;
extern int DAT_121a3958;
extern int DAT_121a395c;
extern int DAT_121a3960;
extern int DAT_121a3964;
extern int DAT_121a3968;
extern int DAT_121a396c;
extern int DAT_121a3970;
extern int DAT_121a3974;
extern int DAT_121a3978;
extern int DAT_121a397c;
extern int DAT_121a3980;
extern int DAT_121a3984;
extern int DAT_121a3988;
extern int DAT_121a39e0;
extern int DAT_121a39e4;
extern int DAT_121a39e8;
extern int DAT_121a39ec;
extern int DAT_121a39f0;
extern int DAT_121a39f4;
extern int DAT_121a39f8;
extern int DAT_121a39fc;
extern int DAT_121a3a00;
extern int DAT_121a3a04;
extern int DAT_121a3a08;
extern int DAT_121a3a0c;
extern int DAT_121a3a10;
extern int DAT_121a3a14;
extern int DAT_121a3a18;
extern int DAT_121a3a1c;
extern int DAT_121a3a20;
extern int DAT_121a3a74;
extern int DAT_121a3a78;
extern int DAT_121a3a7c;
extern int DAT_121a3a80;
extern int DAT_121a3a84;
extern int DAT_121a3a88;
extern int DAT_121a3a8c;
extern int DAT_121a3ad8;
extern int DAT_121a3adc;
extern int DAT_121a3ae0;
extern int DAT_121a3b2c;
extern int DAT_121a3b30;
extern int DAT_121a3b34;
extern int DAT_121a3b80;
extern int DAT_121a3b84;
extern int DAT_121a3b88;
extern int DAT_121a3b8c;
extern int DAT_121a3b90;
extern int DAT_121a3bd8;
extern int DAT_121a3bdc;
extern int DAT_121a3be0;
extern int DAT_121a3be4;
extern int DAT_121a3c30;
extern int DAT_121a3c34;
extern int DAT_121a3c38;
extern int DAT_121a3c7c;
extern int DAT_121a3c80;
extern int DAT_121a3c84;
extern int DAT_121a3c88;
extern int DAT_121a3c8c;
extern int DAT_121a3c90;
extern int DAT_121a3c94;
extern int DAT_121a3c98;
extern int DAT_121a3c9c;
extern int DAT_121a3ca0;
extern int DAT_121a3ca4;
extern int DAT_121a3ca8;
extern int DAT_121a3cf8;
extern int DAT_121a3cfc;
extern int DAT_121a3d00;
extern int DAT_121a3d04;
extern int DAT_121a3d08;
extern int DAT_121a3d0c;
extern int DAT_121a3d10;
extern int DAT_121a3d14;
extern int DAT_121a3d64;
extern int DAT_121a3d68;
extern int DAT_121a3d6c;
extern int DAT_121a3db8;
extern int DAT_121a3dbc;
extern int DAT_121a3dc0;
extern int DAT_121a3dc4;
extern int DAT_121a3dc8;
extern int DAT_121a3dcc;
extern int DAT_121a3e14;
extern int DAT_121a3e18;
extern int DAT_121a3e1c;
extern int DAT_121a3e68;
extern int DAT_121a3e6c;
extern int DAT_121a3e70;
extern int DAT_121a3e74;
extern int DAT_121a3e78;
extern int DAT_121a3ec4;
extern int DAT_121a3ec8;
extern int DAT_121a3ecc;
extern int DAT_121a3ed0;
extern int DAT_121a3ed4;
extern int DAT_121a3ed8;
extern int DAT_121a3edc;
extern int DAT_121a3ee0;
extern int DAT_121a3ee4;
extern int DAT_121a3ee8;
extern int DAT_121a3f38;
extern int DAT_121a3f3c;
extern int DAT_121a3f40;
extern int DAT_121a3f44;
extern int DAT_121a3f48;
extern int DAT_121a3f90;
extern int DAT_121a3f94;
extern int DAT_121a3f98;
extern int DAT_121a3f9c;
extern int DAT_121a3fa0;
extern int DAT_121a3fe8;
extern int DAT_121a3fec;
extern int DAT_121a3ff0;
extern int DAT_121a3ff4;
extern int DAT_121a3ff8;
extern int DAT_121a4040;
extern int DAT_121a4044;
extern int DAT_121a4048;
extern int DAT_121a404c;
extern int DAT_121a409c;
extern int DAT_121a40a0;
extern int DAT_121a40a4;
extern int DAT_121a40a8;
extern int DAT_121a40ac;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RUpnpAVTBecomeCoordinatorOfStandaloneGroupAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_SCLegacyAuthenticationButtonPressPage;
extern int ghidra_vftable_SCLegacyAuthenticationTimeoutPage;
extern int ghidra_vftable_SCLegacyAuthenticationVerifyProductPage;
extern int ghidra_vftable_SCLegacyAuthenticationWaitingPage;
extern int ghidra_vftable_SCLegacyTVSetupIntroPage;
extern int ghidra_vftable_SCLegacyTVSetupOpticalCheckPage;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPage;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPage;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkConnectionErrorPage;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkSilenceAutoPlaySetPage;
extern int ghidra_vftable_SCLegacyTVSetupTOSLinkSuccessPage;
extern int ghidra_vftable_SCManualPinAuthenticationAuthRetryPage;
extern int ghidra_vftable_SCManualPinAuthenticationButtonPressFailedPage;
extern int ghidra_vftable_SCManualPinAuthenticationButtonPressWaitingPage;
extern int ghidra_vftable_SCManualPinAuthenticationChimingButtonPressFailedPage;
extern int ghidra_vftable_SCManualPinAuthenticationChimingButtonPressWaitingPage;
extern int ghidra_vftable_SCManualPinAuthenticationConnectingProductPage;
extern int ghidra_vftable_SCManualPinAuthenticationIdentifyProductPage;
extern int ghidra_vftable_SCManualPinAuthenticationLocatePinPage;
extern int ghidra_vftable_SCManualPinAuthenticationLocatePinRetryPage;
extern int ghidra_vftable_SCManualPinAuthenticationRetryHandshakePage;
extern int ghidra_vftable_SCManualPinAuthenticationTimedOutAuthRetryPage;
extern int ghidra_vftable_SCManualPinAuthenticationWrongPinAuthRetryPage;
extern int ghidra_vftable_SCModernTVSetupARCErrorPage;
extern int ghidra_vftable_SCModernTVSetupCECErrorPage;
extern int ghidra_vftable_SCModernTVSetupCheckAndContinuePage;
extern int ghidra_vftable_SCModernTVSetupEntryPage;
extern int ghidra_vftable_SCModernTVSetupHdmiCheckPage;
extern int ghidra_vftable_SCModernTVSetupHdmiConnectionErrorPage;
extern int ghidra_vftable_SCModernTVSetupHdmiTestSuccessPage;
extern int ghidra_vftable_SCModernTVSetupHdmiTestingPage;
extern int ghidra_vftable_SCModernTVSetupHomeIntroPage;
extern int ghidra_vftable_SCModernTVSetupIntroPage;
extern int ghidra_vftable_SCModernTVSetupNeedOpticalAdapterPage;
extern int ghidra_vftable_SCModernTVSetupOpticalAdapterPage;
extern int ghidra_vftable_SCModernTVSetupOpticalAdatperConnectErrorPage;
extern int ghidra_vftable_SCModernTVSetupPurchaseAdapterPage;
extern int ghidra_vftable_SCModernTVSetupTryAgainPage;
extern int ghidra_vftable_SCNamePortableSetNamePage;
extern int ghidra_vftable_SCNetworkCredentialPropagationAuthErrorPage;
extern int ghidra_vftable_SCNetworkCredentialPropagationChangeNetworkPage;
extern int ghidra_vftable_SCNetworkCredentialPropagationConnectionErrorPage;
extern int ghidra_vftable_SCNetworkCredentialPropagationPlayerConnectedPage;
extern int ghidra_vftable_SCNetworkCredentialPropagationRouterErrorPage;
extern int ghidra_vftable_SCNetworkCredentialPropagationSsidMismatchErrorPage;
extern int ghidra_vftable_SCNetworkCredentialPropagationSystemErrorPage;
extern int ghidra_vftable_SCNetworkCredentialPropagationUpdatePlayerPage;
extern int ghidra_vftable_SCNetworkCredentialPropagationUpdateSystemPage;
extern int ghidra_vftable_SCNetworkCredentialsCustomNetworkPage;
extern int ghidra_vftable_SCNetworkCredentialsNetworkSelectionPage;
extern int ghidra_vftable_SCNetworkCredentialsPasswordEntryPage;
extern int ghidra_vftable_SCNetworkTroubleshootAppleLocalNetworkPermsPage;
extern int ghidra_vftable_SCNetworkTroubleshootAskNotSurePage;
extern int ghidra_vftable_SCNetworkTroubleshootAskTurnOffDevicesPage;
extern int ghidra_vftable_SCNetworkTroubleshootAskTurnOffRouterPage;
extern int ghidra_vftable_SCNetworkTroubleshootAskWiredDevicesPage;
extern int ghidra_vftable_SCNetworkTroubleshootCheckingDevicesPage;
extern int ghidra_vftable_SCNetworkTroubleshootFailConnectPage;
extern int ghidra_vftable_SCNetworkTroubleshootInformDevicesPage;
extern int ghidra_vftable_SCNetworkTroubleshootIntroPage;
extern int ghidra_vftable_SCNetworkTroubleshootReminderContextPage;
extern int ghidra_vftable_SCNetworkTroubleshootSuccessfulPage;
extern int ghidra_vftable_SCNetworkTroubleshootWifiSettingDisabledPage;
extern int ghidra_vftable_SCNetworkTroubleshootWiredLearnMorePage;
extern int ghidra_vftable_SCNewWizFlare;
extern int ghidra_vftable_SCNewWizPage;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizStateType;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCNfcAuthenticationAcrIntroPage;
extern int ghidra_vftable_SCNfcAuthenticationAcrPreemptiveScanPage;
extern int ghidra_vftable_SCNfcAuthenticationAcrScanPage;
extern int ghidra_vftable_SCNfcAuthenticationAcrScanSuccessPage;
extern int ghidra_vftable_SCNfcAuthenticationAudioModulationRetryPage;
extern int ghidra_vftable_SCNfcAuthenticationCancelScanPage;
extern int ghidra_vftable_SCNfcAuthenticationChimeCapableAuthRetryPage;
extern int ghidra_vftable_SCNfcAuthenticationConnectingProductPage;
extern int ghidra_vftable_SCNfcAuthenticationEducationPage;
extern int ghidra_vftable_SCNfcAuthenticationErrorAuthRetryPage;
extern int ghidra_vftable_SCNfcAuthenticationFailedScanPage;
extern int ghidra_vftable_SCNfcAuthenticationIcrIntroPage;
extern int ghidra_vftable_SCNfcAuthenticationIcrScanPage;
extern int ghidra_vftable_SCNfcAuthenticationLedStateAuthRetryPage;
extern int ghidra_vftable_SCNfcAuthenticationManualPinRetryPage;
extern int ghidra_vftable_SCNfcAuthenticationScanErrorPage;
extern int ghidra_vftable_SCPlayerSelectionCarouselPage;
extern int ghidra_vftable_SCPlayerSelectionErrorPage;
extern int ghidra_vftable_SCPlayerSelectionRemainingPlayers2Page;
extern int ghidra_vftable_SCPlayerSelectionRemainingPlayersFinalPage;
extern int ghidra_vftable_SCPlayerSelectionRemainingPlayersPage;
extern int ghidra_vftable_SCPlayerSelectionSettingsLaterPage;
extern int ghidra_vftable_SCPortablePreparationChargeToContinuePage;
extern int ghidra_vftable_SCPortablePreparationMustChargeFirstPage;
extern int ghidra_vftable_SCPortableStatusIntroPage;
extern int ghidra_vftable_SCProductMicrophoneCheckPage;
extern int ghidra_vftable_SCProductMicrophoneSwitchCheckPage;
extern int ghidra_vftable_SCProductMicrophoneSwitchTogglePage;
extern int ghidra_vftable_SCProductMicrophoneTogglePage;
extern int ghidra_vftable_SCProductOnboardingCarouselPage;
extern int ghidra_vftable_SCProductOnboardingIntroPage;
extern int ghidra_vftable_SCProductOnboardingMissingAssetsErrorPage;
extern int ghidra_vftable_SCProductPlacementEmptyPage;
extern int ghidra_vftable_SCProductPlacementOrientationIssuePage;
extern int ghidra_vftable_SCQuickTuneChoosePage;
extern int ghidra_vftable_SCQuickTuneDonePage;
extern int ghidra_vftable_SCQuickTuneErrorPage;
extern int ghidra_vftable_SCQuickTuneIntroPage;
extern int ghidra_vftable_SCQuickTunePlacementPage;
extern int ghidra_vftable_SCQuickTunePopupPage;
extern int ghidra_vftable_SCQuickTuneStartPage;
extern int ghidra_vftable_SCQuickTuneSuccessPage;
extern int ghidra_vftable_SCQuickTuneTuningPage;
extern int ghidra_vftable_SCReconfirmProductFatalVerificationErrorPage;
extern int ghidra_vftable_SCReconfirmProductIntroPage;
extern int ghidra_vftable_SCReconfirmProductLookUpV1CertPage;
extern int ghidra_vftable_SCReconfirmProductVanishedProductErrorPage;
extern int ghidra_vftable_SCRegisterProductSecureRegistrationErrorPage;
extern int ghidra_vftable_SCRegisterProductSecureRegistrationPage;
extern int ghidra_vftable_SCRegisterSystemSecureRegistrationErrorPage;
extern int ghidra_vftable_SCRegisterSystemUnconfirmedProductsPage;
extern int ghidra_vftable_SCRegisterSystemUnregisteredProductsPage;
extern int ghidra_vftable_SCRenameWizardPage;
extern int ghidra_vftable_SCRoomAllocationConfirmationPage;
extern int ghidra_vftable_SCRoomAllocationNewRoomPage;
extern int ghidra_vftable_SCRoomAllocationRoomSelectionPage;
extern int ghidra_vftable_SCRoomAllocationSetRoomPage;
extern int ghidra_vftable_SCSecureAuthenticationChirpLastChancePage;
extern int ghidra_vftable_SCSecureAuthenticationConfirmWrongDevicePage;
extern int ghidra_vftable_SCSecureAuthenticationHandshakePage;
extern int ghidra_vftable_SCSecureAuthenticationNfcLastChancePage;
extern int ghidra_vftable_SCSonosVoiceConfigCarouselPage;
extern int ghidra_vftable_SCSonosVoiceConfigErrorPage;
extern int ghidra_vftable_SCSonosVoiceConfigIntroPage;
extern int ghidra_vftable_SCSonosVoiceConfigOutroPage;
extern int ghidra_vftable_SCSonosVoiceOnboardingCarouselPage;
extern int ghidra_vftable_SCSonosVoiceOnboardingIntroPage;
extern int ghidra_vftable_SCSonosVoiceOnboardingMissingAssetsErrorPage;
extern int ghidra_vftable_SCSonosVoicePreviewIntroPage;
extern int ghidra_vftable_SCSonosVoicePreviewTermsOfUsePage;
extern int ghidra_vftable_SCSonosVoiceSetupEnablementPage;
extern int ghidra_vftable_SCSonosVoiceSetupErrorPage;
extern int ghidra_vftable_SCSonosVoiceSetupSuccessPage;
extern int ghidra_vftable_SCSubwizState;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCSwfObjHTListener;
extern int uStack_8;
extern undefined1 LAB_115e0ff0[];
extern undefined1 LAB_11639400[];
extern undefined1 LAB_116401c0[];
extern undefined1 LAB_11753f9d[];
extern void *ExceptionList;
extern int FUN_10ebc110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108a2350(undefined4 *param_1);
template<class... A> int FUN_108a2350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_108a2360(int *param_1);
template<class... A> int FUN_108a2360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108a2370(undefined4 *param_1);
template<class... A> int FUN_108a2370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108a2380(undefined4 *param_1);
template<class... A> int FUN_108a2380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108a4ed0(undefined4 *param_1);
template<class... A> int FUN_108a4ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108a4ee0(undefined4 *param_1);
template<class... A> int FUN_108a4ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_108a9ea0(int param_1);
template<class... A> int FUN_108a9ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0bd0(void);
template<class... A> int FUN_108b0bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0be0(void);
template<class... A> int FUN_108b0be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0bf0(void);
template<class... A> int FUN_108b0bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0c00(void);
template<class... A> int FUN_108b0c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0c10(void);
template<class... A> int FUN_108b0c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0c20(void);
template<class... A> int FUN_108b0c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0c30(void);
template<class... A> int FUN_108b0c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0c40(void);
template<class... A> int FUN_108b0c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0c50(void);
template<class... A> int FUN_108b0c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0c60(void);
template<class... A> int FUN_108b0c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0c70(void);
template<class... A> int FUN_108b0c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0c80(void);
template<class... A> int FUN_108b0c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0c90(void);
template<class... A> int FUN_108b0c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0ca0(void);
template<class... A> int FUN_108b0ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b0cb0(void);
template<class... A> int FUN_108b0cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108b0cc0(int param_1);
template<class... A> int FUN_108b0cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108b0cd0(int param_1);
template<class... A> int FUN_108b0cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108b0ce0(int param_1);
template<class... A> int FUN_108b0ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108b0cf0(int param_1);
template<class... A> int FUN_108b0cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108b0dc0(int param_1);
template<class... A> int FUN_108b0dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108b0dd0(int param_1);
template<class... A> int FUN_108b0dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108b0de0(int param_1);
template<class... A> int FUN_108b0de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108b0df0(int param_1);
template<class... A> int FUN_108b0df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108b0e00(int param_1);
template<class... A> int FUN_108b0e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b17d0(void);
template<class... A> int FUN_108b17d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108b44e0(undefined4 *param_1);
template<class... A> int FUN_108b44e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108b44f0(undefined4 *param_1);
template<class... A> int FUN_108b44f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108b4500(undefined4 *param_1);
template<class... A> int FUN_108b4500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108b4530(undefined4 *param_1);
template<class... A> int FUN_108b4530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b4760(void);
template<class... A> int FUN_108b4760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b4770(void);
template<class... A> int FUN_108b4770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b4780(void);
template<class... A> int FUN_108b4780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108b4790(void);
template<class... A> int FUN_108b4790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108b5660(undefined4 *param_1);
template<class... A> int FUN_108b5660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108b5690(undefined4 *param_1);
template<class... A> int FUN_108b5690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108b56a0(undefined4 *param_1);
template<class... A> int FUN_108b56a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108b56b0(undefined4 *param_1);
template<class... A> int FUN_108b56b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108b56c0(undefined4 *param_1);
template<class... A> int FUN_108b56c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108b56d0(undefined4 *param_1);
template<class... A> int FUN_108b56d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108b5700(undefined4 *param_1);
template<class... A> int FUN_108b5700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108b5720(undefined4 *param_1);
template<class... A> int FUN_108b5720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108b5750(undefined4 *param_1);
template<class... A> int FUN_108b5750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108b5820(undefined4 *param_1);
template<class... A> int FUN_108b5820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108b58f0(undefined4 *param_1);
template<class... A> int FUN_108b58f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108b88f0(int param_1);
template<class... A> int FUN_108b88f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108bba80(void);
template<class... A> int FUN_108bba80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108bba90(void);
template<class... A> int FUN_108bba90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108bbaa0(void);
template<class... A> int FUN_108bbaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108bbab0(void);
template<class... A> int FUN_108bbab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108bbac0(void);
template<class... A> int FUN_108bbac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108bbae0(int param_1);
template<class... A> int FUN_108bbae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108bbaf0(int param_1);
template<class... A> int FUN_108bbaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108bca40(void);
template<class... A> int FUN_108bca40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108bca50(void);
template<class... A> int FUN_108bca50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108bca60(void);
template<class... A> int FUN_108bca60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108bca70(void);
template<class... A> int FUN_108bca70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108bca80(void);
template<class... A> int FUN_108bca80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108bca90(void);
template<class... A> int FUN_108bca90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108bcaa0(void);
template<class... A> int FUN_108bcaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108bcab0(void);
template<class... A> int FUN_108bcab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108be7e0(undefined4 *param_1);
template<class... A> int FUN_108be7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108be810(undefined4 *param_1);
template<class... A> int FUN_108be810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108be820(undefined4 *param_1);
template<class... A> int FUN_108be820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108be830(undefined4 *param_1);
template<class... A> int FUN_108be830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108be840(undefined4 *param_1);
template<class... A> int FUN_108be840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108be850(undefined4 *param_1);
template<class... A> int FUN_108be850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108be860(undefined4 *param_1);
template<class... A> int FUN_108be860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108be870(undefined4 *param_1);
template<class... A> int FUN_108be870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108be880(undefined4 *param_1);
template<class... A> int FUN_108be880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108be890(undefined4 *param_1);
template<class... A> int FUN_108be890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108be8c0(undefined4 *param_1);
template<class... A> int FUN_108be8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108be8f0(undefined4 *param_1);
template<class... A> int FUN_108be8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108bea00(undefined4 *param_1);
template<class... A> int FUN_108bea00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108bea30(undefined4 *param_1);
template<class... A> int FUN_108bea30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108bea50(undefined4 *param_1);
template<class... A> int FUN_108bea50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108bea80(undefined4 *param_1);
template<class... A> int FUN_108bea80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108beaa0(undefined4 *param_1);
template<class... A> int FUN_108beaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108beab0(undefined4 *param_1);
template<class... A> int FUN_108beab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108bead0(undefined4 *param_1);
template<class... A> int FUN_108bead0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108beae0(undefined4 *param_1);
template<class... A> int FUN_108beae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108beb00(undefined4 *param_1);
template<class... A> int FUN_108beb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108beb30(undefined4 *param_1);
template<class... A> int FUN_108beb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108beb50(undefined4 *param_1);
template<class... A> int FUN_108beb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108beb60(undefined4 *param_1);
template<class... A> int FUN_108beb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108beb80(undefined4 *param_1);
template<class... A> int FUN_108beb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108bebb0(undefined4 *param_1);
template<class... A> int FUN_108bebb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_108c41b0(int param_1);
template<class... A> int FUN_108c41b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c6060(void);
template<class... A> int FUN_108c6060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c6070(void);
template<class... A> int FUN_108c6070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c6080(void);
template<class... A> int FUN_108c6080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c6090(void);
template<class... A> int FUN_108c6090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c60a0(void);
template<class... A> int FUN_108c60a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c60b0(void);
template<class... A> int FUN_108c60b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c60c0(void);
template<class... A> int FUN_108c60c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c60d0(void);
template<class... A> int FUN_108c60d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c60e0(void);
template<class... A> int FUN_108c60e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108c60f0(int param_1);
template<class... A> int FUN_108c60f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_108c6110(int param_1);
template<class... A> int FUN_108c6110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108c6120(int param_1);
template<class... A> int FUN_108c6120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108c6130(int param_1);
template<class... A> int FUN_108c6130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108c6140(int param_1);
template<class... A> int FUN_108c6140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_108c7670(void);
template<class... A> int FUN_108c7670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_108c7680(void);
template<class... A> int FUN_108c7680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_108c7690(void);
template<class... A> int FUN_108c7690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c76a0(undefined4 *param_1);
template<class... A> int FUN_108c76a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c76b0(undefined4 *param_1);
template<class... A> int FUN_108c76b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c76c0(undefined4 *param_1);
template<class... A> int FUN_108c76c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c76d0(undefined4 *param_1);
template<class... A> int FUN_108c76d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c76f0(undefined4 param_1);
template<class... A> int FUN_108c76f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_108c7700(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_108c7700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_108c7710(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_108c7710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c7720(undefined4 param_1);
template<class... A> int FUN_108c7720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c7730(char *param_1,char *param_2,code *param_3);
template<class... A> int FUN_108c7730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c77b0(undefined4 param_1);
template<class... A> int FUN_108c77b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c77c0(void);
template<class... A> int FUN_108c77c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c77d0(void);
template<class... A> int FUN_108c77d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c77e0(void);
template<class... A> int FUN_108c77e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c77f0(void);
template<class... A> int FUN_108c77f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c7800(void);
template<class... A> int FUN_108c7800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c7810(void);
template<class... A> int FUN_108c7810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c7820(void);
template<class... A> int FUN_108c7820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c7830(void);
template<class... A> int FUN_108c7830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c7840(void);
template<class... A> int FUN_108c7840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c7850(void);
template<class... A> int FUN_108c7850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c7860(void);
template<class... A> int FUN_108c7860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c7870(void);
template<class... A> int FUN_108c7870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108c7890(void);
template<class... A> int FUN_108c7890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca450(undefined4 *param_1);
template<class... A> int FUN_108ca450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca460(undefined4 *param_1);
template<class... A> int FUN_108ca460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca470(undefined4 *param_1);
template<class... A> int FUN_108ca470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca480(undefined4 *param_1);
template<class... A> int FUN_108ca480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca490(undefined4 *param_1);
template<class... A> int FUN_108ca490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca4a0(undefined4 *param_1);
template<class... A> int FUN_108ca4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca4b0(undefined4 *param_1);
template<class... A> int FUN_108ca4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca4c0(undefined4 *param_1);
template<class... A> int FUN_108ca4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca4d0(undefined4 *param_1);
template<class... A> int FUN_108ca4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca4e0(undefined4 *param_1);
template<class... A> int FUN_108ca4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca4f0(undefined4 *param_1);
template<class... A> int FUN_108ca4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca500(undefined4 *param_1);
template<class... A> int FUN_108ca500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca510(undefined4 *param_1);
template<class... A> int FUN_108ca510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca520(undefined4 *param_1);
template<class... A> int FUN_108ca520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca550(undefined4 *param_1);
template<class... A> int FUN_108ca550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca570(undefined4 *param_1);
template<class... A> int FUN_108ca570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca5a0(undefined4 *param_1);
template<class... A> int FUN_108ca5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca5c0(undefined4 *param_1);
template<class... A> int FUN_108ca5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca5f0(undefined4 *param_1);
template<class... A> int FUN_108ca5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca610(undefined4 *param_1);
template<class... A> int FUN_108ca610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca640(undefined4 *param_1);
template<class... A> int FUN_108ca640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca660(undefined4 *param_1);
template<class... A> int FUN_108ca660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca690(undefined4 *param_1);
template<class... A> int FUN_108ca690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca6b0(undefined4 *param_1);
template<class... A> int FUN_108ca6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca6e0(undefined4 *param_1);
template<class... A> int FUN_108ca6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca700(undefined4 *param_1);
template<class... A> int FUN_108ca700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca730(undefined4 *param_1);
template<class... A> int FUN_108ca730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca750(undefined4 *param_1);
template<class... A> int FUN_108ca750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca780(undefined4 *param_1);
template<class... A> int FUN_108ca780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca7a0(undefined4 *param_1);
template<class... A> int FUN_108ca7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca7d0(undefined4 *param_1);
template<class... A> int FUN_108ca7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca890(undefined4 *param_1);
template<class... A> int FUN_108ca890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca8b0(undefined4 *param_1);
template<class... A> int FUN_108ca8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca8e0(undefined4 *param_1);
template<class... A> int FUN_108ca8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca900(undefined4 *param_1);
template<class... A> int FUN_108ca900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108ca930(undefined4 *param_1);
template<class... A> int FUN_108ca930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108cab60(undefined4 *param_1);
template<class... A> int FUN_108cab60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108cab90(undefined4 *param_1);
template<class... A> int FUN_108cab90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108cbbc0(undefined4 *param_1);
template<class... A> int FUN_108cbbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd5b0(void);
template<class... A> int FUN_108dd5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd5c0(void);
template<class... A> int FUN_108dd5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd5d0(void);
template<class... A> int FUN_108dd5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd5e0(void);
template<class... A> int FUN_108dd5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd5f0(void);
template<class... A> int FUN_108dd5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd600(void);
template<class... A> int FUN_108dd600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd610(void);
template<class... A> int FUN_108dd610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd620(void);
template<class... A> int FUN_108dd620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd630(void);
template<class... A> int FUN_108dd630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd640(void);
template<class... A> int FUN_108dd640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd650(void);
template<class... A> int FUN_108dd650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd660(void);
template<class... A> int FUN_108dd660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd670(void);
template<class... A> int FUN_108dd670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dd680(void);
template<class... A> int FUN_108dd680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108dd9a0(int param_1);
template<class... A> int FUN_108dd9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108dd9b0(int param_1);
template<class... A> int FUN_108dd9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfc20(void);
template<class... A> int FUN_108dfc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfc30(void);
template<class... A> int FUN_108dfc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfc40(void);
template<class... A> int FUN_108dfc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfc50(void);
template<class... A> int FUN_108dfc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfc60(void);
template<class... A> int FUN_108dfc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfc70(void);
template<class... A> int FUN_108dfc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfc80(void);
template<class... A> int FUN_108dfc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfc90(void);
template<class... A> int FUN_108dfc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfca0(void);
template<class... A> int FUN_108dfca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfcb0(void);
template<class... A> int FUN_108dfcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfcc0(void);
template<class... A> int FUN_108dfcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfcd0(void);
template<class... A> int FUN_108dfcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfce0(void);
template<class... A> int FUN_108dfce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfcf0(void);
template<class... A> int FUN_108dfcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfd00(void);
template<class... A> int FUN_108dfd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108dfd10(void);
template<class... A> int FUN_108dfd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3410(undefined4 *param_1);
template<class... A> int FUN_108e3410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3440(undefined4 *param_1);
template<class... A> int FUN_108e3440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3450(undefined4 *param_1);
template<class... A> int FUN_108e3450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3460(undefined4 *param_1);
template<class... A> int FUN_108e3460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3470(undefined4 *param_1);
template<class... A> int FUN_108e3470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3480(undefined4 *param_1);
template<class... A> int FUN_108e3480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3490(undefined4 *param_1);
template<class... A> int FUN_108e3490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e34a0(undefined4 *param_1);
template<class... A> int FUN_108e34a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e34b0(undefined4 *param_1);
template<class... A> int FUN_108e34b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e34c0(undefined4 *param_1);
template<class... A> int FUN_108e34c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e34d0(undefined4 *param_1);
template<class... A> int FUN_108e34d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e34e0(undefined4 *param_1);
template<class... A> int FUN_108e34e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e34f0(undefined4 *param_1);
template<class... A> int FUN_108e34f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3500(undefined4 *param_1);
template<class... A> int FUN_108e3500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3510(undefined4 *param_1);
template<class... A> int FUN_108e3510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3520(undefined4 *param_1);
template<class... A> int FUN_108e3520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3530(undefined4 *param_1);
template<class... A> int FUN_108e3530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3540(undefined4 *param_1);
template<class... A> int FUN_108e3540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3570(undefined4 *param_1);
template<class... A> int FUN_108e3570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e35a0(undefined4 *param_1);
template<class... A> int FUN_108e35a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e35c0(undefined4 *param_1);
template<class... A> int FUN_108e35c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e35f0(undefined4 *param_1);
template<class... A> int FUN_108e35f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3610(undefined4 *param_1);
template<class... A> int FUN_108e3610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3640(undefined4 *param_1);
template<class... A> int FUN_108e3640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3660(undefined4 *param_1);
template<class... A> int FUN_108e3660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3690(undefined4 *param_1);
template<class... A> int FUN_108e3690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e36b0(undefined4 *param_1);
template<class... A> int FUN_108e36b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e36c0(undefined4 *param_1);
template<class... A> int FUN_108e36c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e36e0(undefined4 *param_1);
template<class... A> int FUN_108e36e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3710(undefined4 *param_1);
template<class... A> int FUN_108e3710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e37e0(undefined4 *param_1);
template<class... A> int FUN_108e37e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3810(undefined4 *param_1);
template<class... A> int FUN_108e3810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3830(undefined4 *param_1);
template<class... A> int FUN_108e3830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3840(undefined4 *param_1);
template<class... A> int FUN_108e3840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3860(undefined4 *param_1);
template<class... A> int FUN_108e3860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3870(undefined4 *param_1);
template<class... A> int FUN_108e3870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3890(undefined4 *param_1);
template<class... A> int FUN_108e3890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e38a0(undefined4 *param_1);
template<class... A> int FUN_108e38a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e38c0(undefined4 *param_1);
template<class... A> int FUN_108e38c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e38f0(undefined4 *param_1);
template<class... A> int FUN_108e38f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3910(undefined4 *param_1);
template<class... A> int FUN_108e3910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3920(undefined4 *param_1);
template<class... A> int FUN_108e3920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3940(undefined4 *param_1);
template<class... A> int FUN_108e3940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3970(undefined4 *param_1);
template<class... A> int FUN_108e3970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3990(undefined4 *param_1);
template<class... A> int FUN_108e3990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e39c0(undefined4 *param_1);
template<class... A> int FUN_108e39c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e39e0(undefined4 *param_1);
template<class... A> int FUN_108e39e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3a10(undefined4 *param_1);
template<class... A> int FUN_108e3a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3a30(undefined4 *param_1);
template<class... A> int FUN_108e3a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108e3a60(undefined4 *param_1);
template<class... A> int FUN_108e3a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_108eea50(int param_1);
template<class... A> int FUN_108eea50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_108eeab0(int param_1);
template<class... A> int FUN_108eeab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_108eeac0(int param_1);
template<class... A> int FUN_108eeac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108eead0(int param_1);
template<class... A> int FUN_108eead0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108eeae0(int param_1);
template<class... A> int FUN_108eeae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_108eeb70(int param_1);
template<class... A> int FUN_108eeb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4b50(void);
template<class... A> int FUN_108f4b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4b60(void);
template<class... A> int FUN_108f4b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4b70(void);
template<class... A> int FUN_108f4b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4b80(void);
template<class... A> int FUN_108f4b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4b90(void);
template<class... A> int FUN_108f4b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4ba0(void);
template<class... A> int FUN_108f4ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4bb0(void);
template<class... A> int FUN_108f4bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4bc0(void);
template<class... A> int FUN_108f4bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4bd0(void);
template<class... A> int FUN_108f4bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4be0(void);
template<class... A> int FUN_108f4be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4bf0(void);
template<class... A> int FUN_108f4bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4c00(void);
template<class... A> int FUN_108f4c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4c10(void);
template<class... A> int FUN_108f4c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4c20(void);
template<class... A> int FUN_108f4c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4c30(void);
template<class... A> int FUN_108f4c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4c40(void);
template<class... A> int FUN_108f4c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f4c50(void);
template<class... A> int FUN_108f4c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108f4c60(int param_1);
template<class... A> int FUN_108f4c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_108f4c80(int param_1);
template<class... A> int FUN_108f4c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108f4c90(int param_1);
template<class... A> int FUN_108f4c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108f4ca0(int param_1);
template<class... A> int FUN_108f4ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108f4cb0(int param_1);
template<class... A> int FUN_108f4cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108f8840(void);
template<class... A> int FUN_108f8840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108f8d80(undefined4 *param_1);
template<class... A> int FUN_108f8d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108f8db0(undefined4 *param_1);
template<class... A> int FUN_108f8db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108f8dc0(undefined4 *param_1);
template<class... A> int FUN_108f8dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108f8df0(undefined4 *param_1);
template<class... A> int FUN_108f8df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108fab10(void);
template<class... A> int FUN_108fab10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108fab20(void);
template<class... A> int FUN_108fab20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108fabf0(int param_1);
template<class... A> int FUN_108fabf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108fac00(int param_1);
template<class... A> int FUN_108fac00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_108fb1c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_108fb1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108fb650(undefined4 *param_1);
template<class... A> int FUN_108fb650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_108fb7d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_108fb7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108fb800(undefined4 param_1);
template<class... A> int FUN_108fb800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108fb810(void);
template<class... A> int FUN_108fb810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108fb820(void);
template<class... A> int FUN_108fb820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108fb830(void);
template<class... A> int FUN_108fb830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_108fb840(void);
template<class... A> int FUN_108fb840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108fcb00(undefined4 *param_1);
template<class... A> int FUN_108fcb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108fcb10(undefined4 *param_1);
template<class... A> int FUN_108fcb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108fcb20(undefined4 *param_1);
template<class... A> int FUN_108fcb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108fcb30(undefined4 *param_1);
template<class... A> int FUN_108fcb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108fcc40(undefined4 *param_1);
template<class... A> int FUN_108fcc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108fcc70(undefined4 *param_1);
template<class... A> int FUN_108fcc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108fcd40(undefined4 *param_1);
template<class... A> int FUN_108fcd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108fcd60(undefined4 *param_1);
template<class... A> int FUN_108fcd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108fcd90(undefined4 *param_1);
template<class... A> int FUN_108fcd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108fcdb0(undefined4 *param_1);
template<class... A> int FUN_108fcdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108fcde0(undefined4 *param_1);
template<class... A> int FUN_108fcde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108fcfc0(undefined4 *param_1);
template<class... A> int FUN_108fcfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108fcfd0(undefined4 *param_1);
template<class... A> int FUN_108fcfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108fcfe0(undefined4 *param_1);
template<class... A> int FUN_108fcfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108fd760(undefined4 param_1);
template<class... A> int FUN_108fd760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108fd770(undefined4 param_1);
template<class... A> int FUN_108fd770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_108fd780(undefined4 *param_1);
template<class... A> int FUN_108fd780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_108fdec0(undefined4 *param_1);
template<class... A> int FUN_108fdec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10900010(int param_1);
template<class... A> int FUN_10900010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10903c90(void);
template<class... A> int FUN_10903c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10903ca0(void);
template<class... A> int FUN_10903ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10903cb0(void);
template<class... A> int FUN_10903cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10903cc0(void);
template<class... A> int FUN_10903cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10903cd0(void);
template<class... A> int FUN_10903cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10903cf0(int param_1);
template<class... A> int FUN_10903cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10904070(int param_1);
template<class... A> int FUN_10904070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10904080(int param_1);
template<class... A> int FUN_10904080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10905450(undefined4 *param_1);
template<class... A> int FUN_10905450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10905460(undefined4 *param_1);
template<class... A> int FUN_10905460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10905490(int *param_1);
template<class... A> int FUN_10905490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109054b0(undefined4 param_1);
template<class... A> int FUN_109054b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109054d0(void);
template<class... A> int FUN_109054d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109054e0(void);
template<class... A> int FUN_109054e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109054f0(void);
template<class... A> int FUN_109054f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10905500(void);
template<class... A> int FUN_10905500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10905510(void);
template<class... A> int FUN_10905510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10905520(void);
template<class... A> int FUN_10905520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10905530(void);
template<class... A> int FUN_10905530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10905540(void);
template<class... A> int FUN_10905540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10905550(void);
template<class... A> int FUN_10905550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10905560(void);
template<class... A> int FUN_10905560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10905570(void);
template<class... A> int FUN_10905570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907dd0(undefined4 *param_1);
template<class... A> int FUN_10907dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907e00(undefined4 *param_1);
template<class... A> int FUN_10907e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907e10(undefined4 *param_1);
template<class... A> int FUN_10907e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907e20(undefined4 *param_1);
template<class... A> int FUN_10907e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907e30(undefined4 *param_1);
template<class... A> int FUN_10907e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907e40(undefined4 *param_1);
template<class... A> int FUN_10907e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907e50(undefined4 *param_1);
template<class... A> int FUN_10907e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907e60(undefined4 *param_1);
template<class... A> int FUN_10907e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907e70(undefined4 *param_1);
template<class... A> int FUN_10907e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907e80(undefined4 *param_1);
template<class... A> int FUN_10907e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907e90(undefined4 *param_1);
template<class... A> int FUN_10907e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907ea0(undefined4 *param_1);
template<class... A> int FUN_10907ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907eb0(undefined4 *param_1);
template<class... A> int FUN_10907eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907ee0(undefined4 *param_1);
template<class... A> int FUN_10907ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907f10(undefined4 *param_1);
template<class... A> int FUN_10907f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10907f40(undefined4 *param_1);
template<class... A> int FUN_10907f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10908000(undefined4 *param_1);
template<class... A> int FUN_10908000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10908020(undefined4 *param_1);
template<class... A> int FUN_10908020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10908050(undefined4 *param_1);
template<class... A> int FUN_10908050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10908070(undefined4 *param_1);
template<class... A> int FUN_10908070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109080a0(undefined4 *param_1);
template<class... A> int FUN_109080a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109080c0(undefined4 *param_1);
template<class... A> int FUN_109080c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109080f0(undefined4 *param_1);
template<class... A> int FUN_109080f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10908110(undefined4 *param_1);
template<class... A> int FUN_10908110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10908140(undefined4 *param_1);
template<class... A> int FUN_10908140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10908160(undefined4 *param_1);
template<class... A> int FUN_10908160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10908190(undefined4 *param_1);
template<class... A> int FUN_10908190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109081b0(undefined4 *param_1);
template<class... A> int FUN_109081b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109081e0(undefined4 *param_1);
template<class... A> int FUN_109081e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10908200(undefined4 *param_1);
template<class... A> int FUN_10908200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10908230(undefined4 *param_1);
template<class... A> int FUN_10908230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10908250(undefined4 *param_1);
template<class... A> int FUN_10908250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10908280(undefined4 *param_1);
template<class... A> int FUN_10908280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109082a0(undefined4 *param_1);
template<class... A> int FUN_109082a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109082d0(undefined4 *param_1);
template<class... A> int FUN_109082d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1090f0b0(int param_1);
template<class... A> int FUN_1090f0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1090f120(int param_1);
template<class... A> int FUN_1090f120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109141d0(void);
template<class... A> int FUN_109141d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109141e0(void);
template<class... A> int FUN_109141e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109141f0(void);
template<class... A> int FUN_109141f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10914200(void);
template<class... A> int FUN_10914200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10914210(void);
template<class... A> int FUN_10914210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10914220(void);
template<class... A> int FUN_10914220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10914230(void);
template<class... A> int FUN_10914230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10914240(void);
template<class... A> int FUN_10914240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10914250(void);
template<class... A> int FUN_10914250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10914260(void);
template<class... A> int FUN_10914260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10914270(void);
template<class... A> int FUN_10914270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10914280(void);
template<class... A> int FUN_10914280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10914290(int param_1);
template<class... A> int FUN_10914290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109142a0(int param_1);
template<class... A> int FUN_109142a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109142b0(int param_1);
template<class... A> int FUN_109142b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109142c0(int param_1);
template<class... A> int FUN_109142c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109142e0(int param_1);
template<class... A> int FUN_109142e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109142f0(int param_1);
template<class... A> int FUN_109142f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10914300(int param_1);
template<class... A> int FUN_10914300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10914310(int param_1);
template<class... A> int FUN_10914310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10914320(int param_1);
template<class... A> int FUN_10914320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10914330(int param_1);
template<class... A> int FUN_10914330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10914340(void);
template<class... A> int FUN_10914340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10914380(int param_1);
template<class... A> int FUN_10914380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10916aa0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_10916aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10916ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10916ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10916ae0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10916ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916b00(undefined4 param_1);
template<class... A> int FUN_10916b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916b10(void);
template<class... A> int FUN_10916b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916b20(void);
template<class... A> int FUN_10916b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916b30(void);
template<class... A> int FUN_10916b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916b40(void);
template<class... A> int FUN_10916b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916b50(void);
template<class... A> int FUN_10916b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916b60(void);
template<class... A> int FUN_10916b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916b70(void);
template<class... A> int FUN_10916b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916b80(void);
template<class... A> int FUN_10916b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916b90(void);
template<class... A> int FUN_10916b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916ba0(void);
template<class... A> int FUN_10916ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916bb0(void);
template<class... A> int FUN_10916bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916bc0(void);
template<class... A> int FUN_10916bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916bd0(void);
template<class... A> int FUN_10916bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916be0(void);
template<class... A> int FUN_10916be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916bf0(void);
template<class... A> int FUN_10916bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916c00(void);
template<class... A> int FUN_10916c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916c10(void);
template<class... A> int FUN_10916c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916c30(undefined4 param_1);
template<class... A> int FUN_10916c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916c40(undefined4 param_1);
template<class... A> int FUN_10916c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10916c50(undefined4 param_1);
template<class... A> int FUN_10916c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10916c60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10916c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091aba0(undefined4 *param_1);
template<class... A> int FUN_1091aba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091abd0(undefined4 *param_1);
template<class... A> int FUN_1091abd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091abe0(undefined4 *param_1);
template<class... A> int FUN_1091abe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091abf0(undefined4 *param_1);
template<class... A> int FUN_1091abf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ac00(undefined4 *param_1);
template<class... A> int FUN_1091ac00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ac10(undefined4 *param_1);
template<class... A> int FUN_1091ac10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ac20(undefined4 *param_1);
template<class... A> int FUN_1091ac20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ac30(undefined4 *param_1);
template<class... A> int FUN_1091ac30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ac40(undefined4 *param_1);
template<class... A> int FUN_1091ac40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ac50(undefined4 *param_1);
template<class... A> int FUN_1091ac50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ac60(undefined4 *param_1);
template<class... A> int FUN_1091ac60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ac70(undefined4 *param_1);
template<class... A> int FUN_1091ac70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ac80(undefined4 *param_1);
template<class... A> int FUN_1091ac80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ac90(undefined4 *param_1);
template<class... A> int FUN_1091ac90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091aca0(undefined4 *param_1);
template<class... A> int FUN_1091aca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091acb0(undefined4 *param_1);
template<class... A> int FUN_1091acb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091acc0(undefined4 *param_1);
template<class... A> int FUN_1091acc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091acd0(undefined4 *param_1);
template<class... A> int FUN_1091acd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ace0(undefined4 *param_1);
template<class... A> int FUN_1091ace0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ad10(undefined4 *param_1);
template<class... A> int FUN_1091ad10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ad40(undefined4 *param_1);
template<class... A> int FUN_1091ad40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ad70(undefined4 *param_1);
template<class... A> int FUN_1091ad70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ada0(undefined4 *param_1);
template<class... A> int FUN_1091ada0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091add0(undefined4 *param_1);
template<class... A> int FUN_1091add0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091adf0(undefined4 *param_1);
template<class... A> int FUN_1091adf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ae20(undefined4 *param_1);
template<class... A> int FUN_1091ae20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ae40(undefined4 *param_1);
template<class... A> int FUN_1091ae40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ae70(undefined4 *param_1);
template<class... A> int FUN_1091ae70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091ae90(undefined4 *param_1);
template<class... A> int FUN_1091ae90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091aec0(undefined4 *param_1);
template<class... A> int FUN_1091aec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091aee0(undefined4 *param_1);
template<class... A> int FUN_1091aee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091af10(undefined4 *param_1);
template<class... A> int FUN_1091af10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091af30(undefined4 *param_1);
template<class... A> int FUN_1091af30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091af60(undefined4 *param_1);
template<class... A> int FUN_1091af60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091af80(undefined4 *param_1);
template<class... A> int FUN_1091af80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091afb0(undefined4 *param_1);
template<class... A> int FUN_1091afb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091afd0(undefined4 *param_1);
template<class... A> int FUN_1091afd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b000(undefined4 *param_1);
template<class... A> int FUN_1091b000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b020(undefined4 *param_1);
template<class... A> int FUN_1091b020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b050(undefined4 *param_1);
template<class... A> int FUN_1091b050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b070(undefined4 *param_1);
template<class... A> int FUN_1091b070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b0a0(undefined4 *param_1);
template<class... A> int FUN_1091b0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b0c0(undefined4 *param_1);
template<class... A> int FUN_1091b0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b0f0(undefined4 *param_1);
template<class... A> int FUN_1091b0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b1c0(undefined4 *param_1);
template<class... A> int FUN_1091b1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b1e0(undefined4 *param_1);
template<class... A> int FUN_1091b1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b210(undefined4 *param_1);
template<class... A> int FUN_1091b210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b230(undefined4 *param_1);
template<class... A> int FUN_1091b230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b260(undefined4 *param_1);
template<class... A> int FUN_1091b260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b280(undefined4 *param_1);
template<class... A> int FUN_1091b280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b2b0(undefined4 *param_1);
template<class... A> int FUN_1091b2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b2d0(undefined4 *param_1);
template<class... A> int FUN_1091b2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b300(undefined4 *param_1);
template<class... A> int FUN_1091b300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b320(undefined4 *param_1);
template<class... A> int FUN_1091b320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1091b350(undefined4 *param_1);
template<class... A> int FUN_1091b350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929b70(void);
template<class... A> int FUN_10929b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929b80(void);
template<class... A> int FUN_10929b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929b90(void);
template<class... A> int FUN_10929b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929ba0(void);
template<class... A> int FUN_10929ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929bb0(void);
template<class... A> int FUN_10929bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929bc0(void);
template<class... A> int FUN_10929bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929bd0(void);
template<class... A> int FUN_10929bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929be0(void);
template<class... A> int FUN_10929be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929bf0(void);
template<class... A> int FUN_10929bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929c00(void);
template<class... A> int FUN_10929c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929c10(void);
template<class... A> int FUN_10929c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929c20(void);
template<class... A> int FUN_10929c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929c30(void);
template<class... A> int FUN_10929c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929c40(void);
template<class... A> int FUN_10929c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929c50(void);
template<class... A> int FUN_10929c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929c60(void);
template<class... A> int FUN_10929c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929c70(void);
template<class... A> int FUN_10929c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10929c80(void);
template<class... A> int FUN_10929c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10929c90(int param_1);
template<class... A> int FUN_10929c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10929ca0(int param_1);
template<class... A> int FUN_10929ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10929cb0(int param_1);
template<class... A> int FUN_10929cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10929cc0(int param_1);
template<class... A> int FUN_10929cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10929cd0(int param_1);
template<class... A> int FUN_10929cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10929ce0(int param_1);
template<class... A> int FUN_10929ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10929e00(int param_1);
template<class... A> int FUN_10929e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10929e10(int param_1);
template<class... A> int FUN_10929e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10929e20(int param_1);
template<class... A> int FUN_10929e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10929e30(int param_1);
template<class... A> int FUN_10929e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10929e40(int param_1);
template<class... A> int FUN_10929e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10929e50(int param_1);
template<class... A> int FUN_10929e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10929e60(int param_1);
template<class... A> int FUN_10929e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10929e70(int param_1);
template<class... A> int FUN_10929e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10929e80(void);
template<class... A> int FUN_10929e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10929f50(void);
template<class... A> int FUN_10929f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1092a180(undefined4 param_1);
template<class... A> int __stdcall FUN_1092a180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b710(void);
template<class... A> int FUN_1092b710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b720(void);
template<class... A> int FUN_1092b720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b730(void);
template<class... A> int FUN_1092b730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b740(void);
template<class... A> int FUN_1092b740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b750(void);
template<class... A> int FUN_1092b750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b760(void);
template<class... A> int FUN_1092b760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b770(void);
template<class... A> int FUN_1092b770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b780(void);
template<class... A> int FUN_1092b780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b790(void);
template<class... A> int FUN_1092b790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b7a0(void);
template<class... A> int FUN_1092b7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b7b0(void);
template<class... A> int FUN_1092b7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b7c0(void);
template<class... A> int FUN_1092b7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b7d0(void);
template<class... A> int FUN_1092b7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b7e0(void);
template<class... A> int FUN_1092b7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b7f0(void);
template<class... A> int FUN_1092b7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1092b800(void);
template<class... A> int FUN_1092b800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ec30(undefined4 *param_1);
template<class... A> int FUN_1092ec30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ec60(undefined4 *param_1);
template<class... A> int FUN_1092ec60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ec70(undefined4 *param_1);
template<class... A> int FUN_1092ec70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ec80(undefined4 *param_1);
template<class... A> int FUN_1092ec80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ec90(undefined4 *param_1);
template<class... A> int FUN_1092ec90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092eca0(undefined4 *param_1);
template<class... A> int FUN_1092eca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ecb0(undefined4 *param_1);
template<class... A> int FUN_1092ecb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ecc0(undefined4 *param_1);
template<class... A> int FUN_1092ecc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ecd0(undefined4 *param_1);
template<class... A> int FUN_1092ecd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ece0(undefined4 *param_1);
template<class... A> int FUN_1092ece0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ecf0(undefined4 *param_1);
template<class... A> int FUN_1092ecf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ed00(undefined4 *param_1);
template<class... A> int FUN_1092ed00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ed10(undefined4 *param_1);
template<class... A> int FUN_1092ed10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ed20(undefined4 *param_1);
template<class... A> int FUN_1092ed20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ed30(undefined4 *param_1);
template<class... A> int FUN_1092ed30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ed40(undefined4 *param_1);
template<class... A> int FUN_1092ed40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ed50(undefined4 *param_1);
template<class... A> int FUN_1092ed50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092eda0(undefined4 *param_1);
template<class... A> int FUN_1092eda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092edd0(undefined4 *param_1);
template<class... A> int FUN_1092edd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092edf0(undefined4 *param_1);
template<class... A> int FUN_1092edf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ee20(undefined4 *param_1);
template<class... A> int FUN_1092ee20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ee40(undefined4 *param_1);
template<class... A> int FUN_1092ee40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ee70(undefined4 *param_1);
template<class... A> int FUN_1092ee70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ee90(undefined4 *param_1);
template<class... A> int FUN_1092ee90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092eec0(undefined4 *param_1);
template<class... A> int FUN_1092eec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092eee0(undefined4 *param_1);
template<class... A> int FUN_1092eee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ef10(undefined4 *param_1);
template<class... A> int FUN_1092ef10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ef30(undefined4 *param_1);
template<class... A> int FUN_1092ef30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ef60(undefined4 *param_1);
template<class... A> int FUN_1092ef60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092ef80(undefined4 *param_1);
template<class... A> int FUN_1092ef80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092efb0(undefined4 *param_1);
template<class... A> int FUN_1092efb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092efd0(undefined4 *param_1);
template<class... A> int FUN_1092efd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f000(undefined4 *param_1);
template<class... A> int FUN_1092f000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f020(undefined4 *param_1);
template<class... A> int FUN_1092f020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f050(undefined4 *param_1);
template<class... A> int FUN_1092f050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f070(undefined4 *param_1);
template<class... A> int FUN_1092f070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f0a0(undefined4 *param_1);
template<class... A> int FUN_1092f0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f0c0(undefined4 *param_1);
template<class... A> int FUN_1092f0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f0f0(undefined4 *param_1);
template<class... A> int FUN_1092f0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f110(undefined4 *param_1);
template<class... A> int FUN_1092f110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f140(undefined4 *param_1);
template<class... A> int FUN_1092f140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f160(undefined4 *param_1);
template<class... A> int FUN_1092f160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f190(undefined4 *param_1);
template<class... A> int FUN_1092f190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f1b0(undefined4 *param_1);
template<class... A> int FUN_1092f1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f1e0(undefined4 *param_1);
template<class... A> int FUN_1092f1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f200(undefined4 *param_1);
template<class... A> int FUN_1092f200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f230(undefined4 *param_1);
template<class... A> int FUN_1092f230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f250(undefined4 *param_1);
template<class... A> int FUN_1092f250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1092f280(undefined4 *param_1);
template<class... A> int FUN_1092f280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10930760(void);
template<class... A> int FUN_10930760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10939500(int param_1);
template<class... A> int FUN_10939500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10944190(int param_1);
template<class... A> int FUN_10944190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109441a0(void);
template<class... A> int FUN_109441a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109441b0(void);
template<class... A> int FUN_109441b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109441c0(void);
template<class... A> int FUN_109441c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109441d0(void);
template<class... A> int FUN_109441d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109441e0(void);
template<class... A> int FUN_109441e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109441f0(void);
template<class... A> int FUN_109441f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10944200(void);
template<class... A> int FUN_10944200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10944210(void);
template<class... A> int FUN_10944210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10944220(void);
template<class... A> int FUN_10944220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10944230(void);
template<class... A> int FUN_10944230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10944240(void);
template<class... A> int FUN_10944240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10944250(void);
template<class... A> int FUN_10944250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10944260(void);
template<class... A> int FUN_10944260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10944270(void);
template<class... A> int FUN_10944270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10944280(void);
template<class... A> int FUN_10944280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10944290(void);
template<class... A> int FUN_10944290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109442a0(void);
template<class... A> int FUN_109442a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109442b0(int param_1);
template<class... A> int FUN_109442b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109442d0(int param_1);
template<class... A> int FUN_109442d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109442e0(int param_1);
template<class... A> int FUN_109442e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10948f00(void);
template<class... A> int FUN_10948f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10948f10(void);
template<class... A> int FUN_10948f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10948f20(void);
template<class... A> int FUN_10948f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10948f30(void);
template<class... A> int FUN_10948f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10948f40(void);
template<class... A> int FUN_10948f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10948f50(void);
template<class... A> int FUN_10948f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a4a0(undefined4 *param_1);
template<class... A> int FUN_1094a4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a4d0(undefined4 *param_1);
template<class... A> int FUN_1094a4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a4e0(undefined4 *param_1);
template<class... A> int FUN_1094a4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a4f0(undefined4 *param_1);
template<class... A> int FUN_1094a4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a500(undefined4 *param_1);
template<class... A> int FUN_1094a500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a510(undefined4 *param_1);
template<class... A> int FUN_1094a510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a520(undefined4 *param_1);
template<class... A> int FUN_1094a520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a5e0(undefined4 *param_1);
template<class... A> int FUN_1094a5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a600(undefined4 *param_1);
template<class... A> int FUN_1094a600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a630(undefined4 *param_1);
template<class... A> int FUN_1094a630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a650(undefined4 *param_1);
template<class... A> int FUN_1094a650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a680(undefined4 *param_1);
template<class... A> int FUN_1094a680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a6a0(undefined4 *param_1);
template<class... A> int FUN_1094a6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a6d0(undefined4 *param_1);
template<class... A> int FUN_1094a6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a6f0(undefined4 *param_1);
template<class... A> int FUN_1094a6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a720(undefined4 *param_1);
template<class... A> int FUN_1094a720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a740(undefined4 *param_1);
template<class... A> int FUN_1094a740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1094a770(undefined4 *param_1);
template<class... A> int FUN_1094a770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10952d20(int param_1);
template<class... A> int FUN_10952d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10952d30(void);
template<class... A> int FUN_10952d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10952d40(void);
template<class... A> int FUN_10952d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10952d50(void);
template<class... A> int FUN_10952d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10952d60(void);
template<class... A> int FUN_10952d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10952d70(void);
template<class... A> int FUN_10952d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10952d80(void);
template<class... A> int FUN_10952d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10952d90(void);
template<class... A> int FUN_10952d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10952db0(int param_1);
template<class... A> int FUN_10952db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10952dc0(int param_1);
template<class... A> int FUN_10952dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109543c0(void);
template<class... A> int FUN_109543c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109543d0(void);
template<class... A> int FUN_109543d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10954c30(undefined4 *param_1);
template<class... A> int FUN_10954c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10954c60(undefined4 *param_1);
template<class... A> int FUN_10954c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10954c70(undefined4 *param_1);
template<class... A> int FUN_10954c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10954c90(undefined4 *param_1);
template<class... A> int FUN_10954c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10954cc0(undefined4 *param_1);
template<class... A> int FUN_10954cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10954ce0(undefined4 *param_1);
template<class... A> int FUN_10954ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10954d10(undefined4 *param_1);
template<class... A> int FUN_10954d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109577a0(void);
template<class... A> int FUN_109577a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109577b0(void);
template<class... A> int FUN_109577b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109577c0(void);
template<class... A> int FUN_109577c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109577e0(int param_1);
template<class... A> int FUN_109577e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109577f0(int param_1);
template<class... A> int FUN_109577f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10957cd0(void);
template<class... A> int FUN_10957cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10957ce0(void);
template<class... A> int FUN_10957ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109586c0(undefined4 *param_1);
template<class... A> int FUN_109586c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109586f0(undefined4 *param_1);
template<class... A> int FUN_109586f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10958700(undefined4 *param_1);
template<class... A> int FUN_10958700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10958710(undefined4 *param_1);
template<class... A> int FUN_10958710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10958740(undefined4 *param_1);
template<class... A> int FUN_10958740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10958770(undefined4 *param_1);
template<class... A> int FUN_10958770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10958790(undefined4 *param_1);
template<class... A> int FUN_10958790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109587c0(undefined4 *param_1);
template<class... A> int FUN_109587c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1095af40(void);
template<class... A> int FUN_1095af40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1095af50(void);
template<class... A> int FUN_1095af50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1095af60(void);
template<class... A> int FUN_1095af60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1095af70(int param_1);
template<class... A> int FUN_1095af70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1095af90(int param_1);
template<class... A> int FUN_1095af90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1095afa0(int param_1);
template<class... A> int FUN_1095afa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1095b1f0(void);
template<class... A> int FUN_1095b1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1095b200(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,
                 char *param_6);
template<class... A> int FUN_1095b200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1095b270(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,
                 char *param_6);
template<class... A> int FUN_1095b270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1095b2d0(undefined4 param_1);
template<class... A> int FUN_1095b2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1095b2e0(undefined4 param_1);
template<class... A> int FUN_1095b2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_1095b2f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1095b2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1095b310(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,
                 char *param_6);
template<class... A> int FUN_1095b310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1095b370(undefined4 param_1);
template<class... A> int FUN_1095b370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1095b380(void);
template<class... A> int FUN_1095b380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1095b390(void);
template<class... A> int FUN_1095b390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1095b3a0(void);
template<class... A> int FUN_1095b3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1095b3b0(void);
template<class... A> int FUN_1095b3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1095b7e0(undefined4 *param_1);
template<class... A> int FUN_1095b7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1095c360(undefined4 *param_1);
template<class... A> int FUN_1095c360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1095c390(undefined4 *param_1);
template<class... A> int FUN_1095c390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1095c3a0(undefined4 *param_1);
template<class... A> int FUN_1095c3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1095c3b0(undefined4 *param_1);
template<class... A> int FUN_1095c3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1095c3c0(undefined4 *param_1);
template<class... A> int FUN_1095c3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1095c4e0(undefined4 *param_1);
template<class... A> int FUN_1095c4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1095c5c0(undefined4 *param_1);
template<class... A> int FUN_1095c5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1095c5e0(undefined4 *param_1);
template<class... A> int FUN_1095c5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1095c610(undefined4 *param_1);
template<class... A> int FUN_1095c610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1095c6e0(undefined4 *param_1);
template<class... A> int FUN_1095c6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1095c800(undefined4 *param_1);
template<class... A> int FUN_1095c800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1095c810(undefined4 *param_1);
template<class... A> int FUN_1095c810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1095c820(undefined4 *param_1);
template<class... A> int FUN_1095c820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1095d050(undefined4 *param_1);
template<class... A> int FUN_1095d050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1095da70(undefined4 *param_1);
template<class... A> int FUN_1095da70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1095da80(undefined4 *param_1);
template<class... A> int FUN_1095da80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10960d90(void);
template<class... A> int FUN_10960d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10960da0(void);
template<class... A> int FUN_10960da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10960db0(void);
template<class... A> int FUN_10960db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10960dc0(void);
template<class... A> int FUN_10960dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10960dd0(void);
template<class... A> int FUN_10960dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10960de0(int param_1);
template<class... A> int FUN_10960de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10960e00(int param_1);
template<class... A> int FUN_10960e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10960e10(int param_1);
template<class... A> int FUN_10960e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10961a90(undefined4 *param_1);
template<class... A> int FUN_10961a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10961aa0(void);
template<class... A> int FUN_10961aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10961ab0(void);
template<class... A> int FUN_10961ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10961ac0(void);
template<class... A> int FUN_10961ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10962660(undefined4 *param_1);
template<class... A> int FUN_10962660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10962690(undefined4 *param_1);
template<class... A> int FUN_10962690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109626a0(undefined4 *param_1);
template<class... A> int FUN_109626a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109626b0(undefined4 *param_1);
template<class... A> int FUN_109626b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10962750(undefined4 *param_1);
template<class... A> int FUN_10962750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10962780(undefined4 *param_1);
template<class... A> int FUN_10962780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109627a0(undefined4 *param_1);
template<class... A> int FUN_109627a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109627d0(undefined4 *param_1);
template<class... A> int FUN_109627d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109627f0(undefined4 *param_1);
template<class... A> int FUN_109627f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10962820(undefined4 *param_1);
template<class... A> int FUN_10962820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10966380(void);
template<class... A> int FUN_10966380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10966390(void);
template<class... A> int FUN_10966390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109663a0(void);
template<class... A> int FUN_109663a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109663b0(void);
template<class... A> int FUN_109663b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109663d0(int param_1);
template<class... A> int FUN_109663d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109663e0(int param_1);
template<class... A> int FUN_109663e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10970520(void);
template<class... A> int FUN_10970520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10970530(void);
template<class... A> int FUN_10970530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10970d20(undefined4 *param_1);
template<class... A> int FUN_10970d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10970d50(undefined4 *param_1);
template<class... A> int FUN_10970d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10970d60(undefined4 *param_1);
template<class... A> int FUN_10970d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10970d70(undefined4 *param_1);
template<class... A> int FUN_10970d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10970da0(undefined4 *param_1);
template<class... A> int FUN_10970da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10970e70(undefined4 *param_1);
template<class... A> int FUN_10970e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10972850(void);
template<class... A> int FUN_10972850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10972860(void);
template<class... A> int FUN_10972860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10972870(void);
template<class... A> int FUN_10972870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10972880(int param_1);
template<class... A> int FUN_10972880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109728a0(int param_1);
template<class... A> int FUN_109728a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109728b0(int param_1);
template<class... A> int FUN_109728b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10972fd0(void);
template<class... A> int FUN_10972fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10972fe0(void);
template<class... A> int FUN_10972fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10972ff0(void);
template<class... A> int FUN_10972ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10973000(void);
template<class... A> int FUN_10973000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10973010(void);
template<class... A> int FUN_10973010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10973020(void);
template<class... A> int FUN_10973020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10973030(void);
template<class... A> int FUN_10973030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10973040(void);
template<class... A> int FUN_10973040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10973050(void);
template<class... A> int FUN_10973050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10973060(void);
template<class... A> int FUN_10973060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10973070(void);
template<class... A> int FUN_10973070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975910(undefined4 *param_1);
template<class... A> int FUN_10975910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975940(undefined4 *param_1);
template<class... A> int FUN_10975940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975950(undefined4 *param_1);
template<class... A> int FUN_10975950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975960(undefined4 *param_1);
template<class... A> int FUN_10975960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975970(undefined4 *param_1);
template<class... A> int FUN_10975970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975980(undefined4 *param_1);
template<class... A> int FUN_10975980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975990(undefined4 *param_1);
template<class... A> int FUN_10975990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109759a0(undefined4 *param_1);
template<class... A> int FUN_109759a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109759b0(undefined4 *param_1);
template<class... A> int FUN_109759b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109759c0(undefined4 *param_1);
template<class... A> int FUN_109759c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109759d0(undefined4 *param_1);
template<class... A> int FUN_109759d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109759e0(undefined4 *param_1);
template<class... A> int FUN_109759e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109759f0(undefined4 *param_1);
template<class... A> int FUN_109759f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975a20(undefined4 *param_1);
template<class... A> int FUN_10975a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975a50(undefined4 *param_1);
template<class... A> int FUN_10975a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975a80(undefined4 *param_1);
template<class... A> int FUN_10975a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975ab0(undefined4 *param_1);
template<class... A> int FUN_10975ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975ad0(undefined4 *param_1);
template<class... A> int FUN_10975ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975b00(undefined4 *param_1);
template<class... A> int FUN_10975b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975b20(undefined4 *param_1);
template<class... A> int FUN_10975b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975b50(undefined4 *param_1);
template<class... A> int FUN_10975b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975b70(undefined4 *param_1);
template<class... A> int FUN_10975b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975ba0(undefined4 *param_1);
template<class... A> int FUN_10975ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975bc0(undefined4 *param_1);
template<class... A> int FUN_10975bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975bf0(undefined4 *param_1);
template<class... A> int FUN_10975bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975c10(undefined4 *param_1);
template<class... A> int FUN_10975c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975c40(undefined4 *param_1);
template<class... A> int FUN_10975c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975c60(undefined4 *param_1);
template<class... A> int FUN_10975c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975c90(undefined4 *param_1);
template<class... A> int FUN_10975c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975cb0(undefined4 *param_1);
template<class... A> int FUN_10975cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975ce0(undefined4 *param_1);
template<class... A> int FUN_10975ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975d00(undefined4 *param_1);
template<class... A> int FUN_10975d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975d30(undefined4 *param_1);
template<class... A> int FUN_10975d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975d50(undefined4 *param_1);
template<class... A> int FUN_10975d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975d80(undefined4 *param_1);
template<class... A> int FUN_10975d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975da0(undefined4 *param_1);
template<class... A> int FUN_10975da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10975dd0(undefined4 *param_1);
template<class... A> int FUN_10975dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10977980(void);
template<class... A> int FUN_10977980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1097ba80(int param_1);
template<class... A> int FUN_1097ba80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1097e360(void);
template<class... A> int FUN_1097e360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1097e370(void);
template<class... A> int FUN_1097e370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1097e380(void);
template<class... A> int FUN_1097e380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1097e390(void);
template<class... A> int FUN_1097e390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1097e3a0(void);
template<class... A> int FUN_1097e3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1097e3b0(void);
template<class... A> int FUN_1097e3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1097e3c0(void);
template<class... A> int FUN_1097e3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1097e3d0(void);
template<class... A> int FUN_1097e3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1097e3e0(void);
template<class... A> int FUN_1097e3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1097e3f0(void);
template<class... A> int FUN_1097e3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1097e400(void);
template<class... A> int FUN_1097e400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1097e410(void);
template<class... A> int FUN_1097e410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1097e420(int param_1);
template<class... A> int FUN_1097e420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1097e430(int param_1);
template<class... A> int FUN_1097e430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1097e440(int param_1);
template<class... A> int FUN_1097e440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1097e460(int param_1);
template<class... A> int FUN_1097e460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1097e470(int param_1);
template<class... A> int FUN_1097e470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1097e480(int param_1);
template<class... A> int FUN_1097e480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1097e490(int param_1);
template<class... A> int FUN_1097e490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10980950(void);
template<class... A> int FUN_10980950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10980960(void);
template<class... A> int FUN_10980960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10980970(void);
template<class... A> int FUN_10980970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10980980(void);
template<class... A> int FUN_10980980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10980990(void);
template<class... A> int FUN_10980990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109809a0(void);
template<class... A> int FUN_109809a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109809b0(void);
template<class... A> int FUN_109809b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109826f0(undefined4 *param_1);
template<class... A> int FUN_109826f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982720(undefined4 *param_1);
template<class... A> int FUN_10982720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982730(undefined4 *param_1);
template<class... A> int FUN_10982730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982740(undefined4 *param_1);
template<class... A> int FUN_10982740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982750(undefined4 *param_1);
template<class... A> int FUN_10982750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982760(undefined4 *param_1);
template<class... A> int FUN_10982760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982770(undefined4 *param_1);
template<class... A> int FUN_10982770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982780(undefined4 *param_1);
template<class... A> int FUN_10982780(A...);

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982800(undefined4 *param_1);
template<class... A> int FUN_10982800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982830(undefined4 *param_1);
template<class... A> int FUN_10982830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982860(undefined4 *param_1);
template<class... A> int FUN_10982860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982900(undefined4 *param_1);
template<class... A> int FUN_10982900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982930(undefined4 *param_1);
template<class... A> int FUN_10982930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982950(undefined4 *param_1);
template<class... A> int FUN_10982950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982980(undefined4 *param_1);
template<class... A> int FUN_10982980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982a50(undefined4 *param_1);
template<class... A> int FUN_10982a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982a70(undefined4 *param_1);
template<class... A> int FUN_10982a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982aa0(undefined4 *param_1);
template<class... A> int FUN_10982aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982ac0(undefined4 *param_1);
template<class... A> int FUN_10982ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982af0(undefined4 *param_1);
template<class... A> int FUN_10982af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982b10(undefined4 *param_1);
template<class... A> int FUN_10982b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ template<class... A> int FUN_10982b40(A...);
template<class... A> int FUN_10982b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982b60(undefined4 *param_1);
template<class... A> int FUN_10982b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10982b90(undefined4 *param_1);
template<class... A> int FUN_10982b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10987e90(void);
template<class... A> int FUN_10987e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10987ea0(void);
template<class... A> int FUN_10987ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10987eb0(void);
template<class... A> int FUN_10987eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10987ec0(void);
template<class... A> int FUN_10987ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10987ed0(void);
template<class... A> int FUN_10987ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10987ee0(void);
template<class... A> int FUN_10987ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10987ef0(void);
template<class... A> int FUN_10987ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10987f00(void);
template<class... A> int FUN_10987f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987f10(int param_1);
template<class... A> int FUN_10987f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987f20(int param_1);
template<class... A> int FUN_10987f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987f30(int param_1);
template<class... A> int FUN_10987f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987f40(int param_1);
template<class... A> int FUN_10987f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987f50(int param_1);
template<class... A> int FUN_10987f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987f60(int param_1);
template<class... A> int FUN_10987f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987f80(int param_1);
template<class... A> int FUN_10987f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987f90(int param_1);
template<class... A> int FUN_10987f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987fa0(int param_1);
template<class... A> int FUN_10987fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987fb0(int param_1);
template<class... A> int FUN_10987fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987fc0(int param_1);
template<class... A> int FUN_10987fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987fd0(int param_1);
template<class... A> int FUN_10987fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987fe0(int param_1);
template<class... A> int FUN_10987fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10987ff0(int param_1);
template<class... A> int FUN_10987ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109887f0(undefined4 *param_1);
template<class... A> int FUN_109887f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10988b40(void);
template<class... A> int FUN_10988b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10988b50(void);
template<class... A> int FUN_10988b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10989640(undefined4 *param_1);
template<class... A> int FUN_10989640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10989670(undefined4 *param_1);
template<class... A> int FUN_10989670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10989680(undefined4 *param_1);
template<class... A> int FUN_10989680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109897c0(undefined4 *param_1);
template<class... A> int FUN_109897c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109897f0(undefined4 *param_1);
template<class... A> int FUN_109897f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10989810(undefined4 *param_1);
template<class... A> int FUN_10989810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10989840(undefined4 *param_1);
template<class... A> int FUN_10989840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10989980(int *param_1);
template<class... A> int FUN_10989980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10989990(undefined4 *param_1);
template<class... A> int FUN_10989990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109899a0(undefined4 *param_1);
template<class... A> int FUN_109899a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1098a120(undefined4 *param_1);
template<class... A> int FUN_1098a120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1098a130(undefined4 *param_1);
template<class... A> int FUN_1098a130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098c920(void);
template<class... A> int FUN_1098c920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098c930(void);
template<class... A> int FUN_1098c930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098c940(void);
template<class... A> int FUN_1098c940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1098c960(int param_1);
template<class... A> int FUN_1098c960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1098c970(int param_1);
template<class... A> int FUN_1098c970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1098d600(undefined4 *param_1);
template<class... A> int FUN_1098d600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1098d610(undefined4 *param_1);
template<class... A> int FUN_1098d610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1098d640(int *param_1);
template<class... A> int FUN_1098d640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1098d660(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1098d660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1098d6a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_1098d6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1098d6e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_1098d6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1098d810(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1098d810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1098da50(void);
template<class... A> int FUN_1098da50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1098dc00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1098dc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1098dc10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1098dc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1098dee0(void);
template<class... A> int FUN_1098dee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1098e350(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1098e350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e410(undefined4 param_1);
template<class... A> int FUN_1098e410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1098e420(int param_1,SCStr *param_2);
template<class... A> int FUN_1098e420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e450(undefined4 param_1);
template<class... A> int FUN_1098e450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e460(undefined4 param_1);
template<class... A> int FUN_1098e460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e470(undefined4 param_1);
template<class... A> int FUN_1098e470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e480(undefined4 param_1);
template<class... A> int FUN_1098e480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e490(undefined4 param_1);
template<class... A> int FUN_1098e490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e700(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1098e700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e720(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1098e720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e740(undefined4 param_1);
template<class... A> int FUN_1098e740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e750(undefined4 param_1);
template<class... A> int FUN_1098e750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e760(undefined4 param_1);
template<class... A> int FUN_1098e760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e770(undefined4 param_1);
template<class... A> int FUN_1098e770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e780(undefined4 param_1);
template<class... A> int FUN_1098e780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e790(undefined4 param_1);
template<class... A> int FUN_1098e790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e7a0(undefined4 param_1);
template<class... A> int FUN_1098e7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e7b0(undefined4 param_1);
template<class... A> int FUN_1098e7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e7c0(void);
template<class... A> int FUN_1098e7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e7d0(void);
template<class... A> int FUN_1098e7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e7e0(void);
template<class... A> int FUN_1098e7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e7f0(void);
template<class... A> int FUN_1098e7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e800(void);
template<class... A> int FUN_1098e800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1098e850(undefined4 param_1);
template<class... A> int FUN_1098e850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1098f000(undefined4 *param_1);
template<class... A> int FUN_1098f000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1098f020(undefined4 param_1);
template<class... A> int FUN_1098f020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1098f150(undefined4 *param_1);
template<class... A> int FUN_1098f150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109900e0(undefined4 *param_1);
template<class... A> int FUN_109900e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109900f0(undefined4 *param_1);
template<class... A> int FUN_109900f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10990100(undefined4 *param_1);
template<class... A> int FUN_10990100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10990110(undefined4 *param_1);
template<class... A> int FUN_10990110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10990120(undefined4 *param_1);
template<class... A> int FUN_10990120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109901a0(undefined4 *param_1);
template<class... A> int FUN_109901a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109903e0(undefined4 *param_1);
template<class... A> int FUN_109903e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10990410(undefined4 *param_1);
template<class... A> int FUN_10990410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10990430(undefined4 *param_1);
template<class... A> int FUN_10990430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10990460(undefined4 *param_1);
template<class... A> int FUN_10990460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10990570(undefined4 *param_1);
template<class... A> int FUN_10990570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10990590(undefined4 *param_1);
template<class... A> int FUN_10990590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109905c0(undefined4 *param_1);
template<class... A> int FUN_109905c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109905e0(undefined4 *param_1);
template<class... A> int FUN_109905e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10990610(undefined4 *param_1);
template<class... A> int FUN_10990610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_109907c0(int *param_1);
template<class... A> int FUN_109907c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109907d0(undefined4 *param_1);
template<class... A> int FUN_109907d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_109907e0(int *param_1);
template<class... A> int FUN_109907e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_109907f0(int *param_1);
template<class... A> int FUN_109907f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10990800(int *param_1);
template<class... A> int FUN_10990800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109911b0(undefined4 *param_1);
template<class... A> int FUN_109911b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10991200(int param_1);
template<class... A> int FUN_10991200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10991640(undefined4 param_1);
template<class... A> int FUN_10991640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10991650(undefined4 param_1);
template<class... A> int FUN_10991650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10991660(undefined4 param_1);
template<class... A> int FUN_10991660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10991670(undefined4 param_1);
template<class... A> int FUN_10991670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10991680(undefined4 param_1);
template<class... A> int FUN_10991680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109916a0(undefined4 param_1);
template<class... A> int FUN_109916a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109916b0(undefined4 param_1);
template<class... A> int FUN_109916b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10991a20(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10991a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10991a30(int param_1);
template<class... A> int FUN_10991a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10991a40(int param_1);
template<class... A> int FUN_10991a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10991f30(uint param_1);
template<class... A> int FUN_10991f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10992720(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10992720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10992770(int param_1,int param_2);
template<class... A> int FUN_10992770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109943f0(int param_1);
template<class... A> int FUN_109943f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10996bd0(void);
template<class... A> int FUN_10996bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10996be0(void);
template<class... A> int FUN_10996be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10996bf0(void);
template<class... A> int FUN_10996bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10996c00(void);
template<class... A> int FUN_10996c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10996c10(void);
template<class... A> int FUN_10996c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10996c20(void);
template<class... A> int FUN_10996c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10996c30(int param_1);
template<class... A> int FUN_10996c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109981e0(int param_1);
template<class... A> int FUN_109981e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109981f0(int param_1);
template<class... A> int FUN_109981f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10998200(int param_1);
template<class... A> int FUN_10998200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10998210(int param_1);
template<class... A> int FUN_10998210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10998280(undefined4 param_1);
template<class... A> int __stdcall FUN_10998280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10998290(void);
template<class... A> int FUN_10998290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109982a0(void);
template<class... A> int FUN_109982a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109990d0(undefined4 param_1);
template<class... A> int FUN_109990d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109990e0(undefined4 *param_1);
template<class... A> int FUN_109990e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10999110(undefined4 param_1);
template<class... A> int FUN_10999110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10999130(int param_1);
template<class... A> int FUN_10999130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10999140(void);
template<class... A> int FUN_10999140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10999160(void);
template<class... A> int FUN_10999160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10999b30(undefined4 *param_1);
template<class... A> int FUN_10999b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10999b60(undefined4 *param_1);
template<class... A> int FUN_10999b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10999b70(undefined4 *param_1);
template<class... A> int FUN_10999b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10999b80(undefined4 *param_1);
template<class... A> int FUN_10999b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10999bb0(undefined4 *param_1);
template<class... A> int FUN_10999bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10999be0(undefined4 *param_1);
template<class... A> int FUN_10999be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10999c90(undefined4 *param_1);
template<class... A> int FUN_10999c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10999cc0(undefined4 *param_1);
template<class... A> int FUN_10999cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099c670(void);
template<class... A> int FUN_1099c670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099c680(void);
template<class... A> int FUN_1099c680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099c690(void);
template<class... A> int FUN_1099c690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1099c6a0(int param_1);
template<class... A> int FUN_1099c6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1099c6c0(int param_1);
template<class... A> int FUN_1099c6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1099c6d0(int param_1);
template<class... A> int FUN_1099c6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1099c6e0(int param_1);
template<class... A> int FUN_1099c6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1099cb90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1099cb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099d4c0(undefined4 *param_1);
template<class... A> int FUN_1099d4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099d4d0(undefined4 param_1);
template<class... A> int FUN_1099d4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099d660(undefined4 param_1);
template<class... A> int FUN_1099d660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1099d780(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_1099d780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099d960(undefined4 param_1);
template<class... A> int FUN_1099d960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099d970(undefined4 param_1);
template<class... A> int FUN_1099d970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099d980(undefined4 param_1);
template<class... A> int FUN_1099d980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099d990(void);
template<class... A> int FUN_1099d990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099d9a0(void);
template<class... A> int FUN_1099d9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099d9b0(void);
template<class... A> int FUN_1099d9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099d9c0(void);
template<class... A> int FUN_1099d9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1099d9e0(undefined4 param_1);
template<class... A> int FUN_1099d9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1099de40(undefined4 *param_1);
template<class... A> int FUN_1099de40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1099de60(undefined4 param_1);
template<class... A> int FUN_1099de60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1099de70(undefined4 *param_1);
template<class... A> int FUN_1099de70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099eb20(undefined4 *param_1);
template<class... A> int FUN_1099eb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099eb50(undefined4 *param_1);
template<class... A> int FUN_1099eb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099eb60(undefined4 *param_1);
template<class... A> int FUN_1099eb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099eb70(undefined4 *param_1);
template<class... A> int FUN_1099eb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099eb80(undefined4 *param_1);
template<class... A> int FUN_1099eb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099ed00(undefined4 *param_1);
template<class... A> int FUN_1099ed00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099ed30(undefined4 *param_1);
template<class... A> int FUN_1099ed30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099ed50(undefined4 *param_1);
template<class... A> int FUN_1099ed50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099ed80(undefined4 *param_1);
template<class... A> int FUN_1099ed80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099eda0(undefined4 *param_1);
template<class... A> int FUN_1099eda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099edd0(undefined4 *param_1);
template<class... A> int FUN_1099edd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099edf0(undefined4 *param_1);
template<class... A> int FUN_1099edf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099ee20(undefined4 *param_1);
template<class... A> int FUN_1099ee20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1099eff0(int *param_1);
template<class... A> int FUN_1099eff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1099f000(undefined4 *param_1);
template<class... A> int FUN_1099f000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1099f010(undefined4 *param_1);
template<class... A> int FUN_1099f010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1099f020(undefined4 *param_1);
template<class... A> int FUN_1099f020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_1099f030(int *param_1);
template<class... A> int FUN_1099f030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void  __stdcall FUN_1099f7c0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1099f7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1099f7f0(undefined4 param_1);
template<class... A> int FUN_1099f7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1099f800(undefined4 param_1);
template<class... A> int FUN_1099f800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1099f810(undefined4 param_1);
template<class... A> int FUN_1099f810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1099f820(undefined4 param_1);
template<class... A> int FUN_1099f820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1099f830(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1099f830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1099f840(undefined4 *param_1);
template<class... A> int FUN_1099f840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1099fbc0(int *param_1);
template<class... A> int FUN_1099fbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_109a29e0(int param_1);
template<class... A> int FUN_109a29e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a4670(void);
template<class... A> int FUN_109a4670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a4680(void);
template<class... A> int FUN_109a4680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a4690(void);
template<class... A> int FUN_109a4690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a46a0(void);
template<class... A> int FUN_109a46a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a46b0(void);
template<class... A> int FUN_109a46b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109a4af0(int param_1);
template<class... A> int FUN_109a4af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109a4b00(int param_1);
template<class... A> int FUN_109a4b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a5600(void);
template<class... A> int FUN_109a5600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a5610(void);
template<class... A> int FUN_109a5610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a66a0(int *param_1);
template<class... A> int FUN_109a66a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_109a66f0(int *param_1);
template<class... A> int FUN_109a66f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a6700(void);
template<class... A> int FUN_109a6700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a6710(void);
template<class... A> int FUN_109a6710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a6720(void);
template<class... A> int FUN_109a6720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a6730(void);
template<class... A> int FUN_109a6730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a6740(void);
template<class... A> int FUN_109a6740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a6750(void);
template<class... A> int FUN_109a6750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a6760(void);
template<class... A> int FUN_109a6760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a6770(void);
template<class... A> int FUN_109a6770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109a6780(void);
template<class... A> int FUN_109a6780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_109a7060(undefined4 *param_1);
template<class... A> int FUN_109a7060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a8f40(undefined4 *param_1);
template<class... A> int FUN_109a8f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a8f70(undefined4 *param_1);
template<class... A> int FUN_109a8f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a8f80(undefined4 *param_1);
template<class... A> int FUN_109a8f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a8f90(undefined4 *param_1);
template<class... A> int FUN_109a8f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a8fa0(undefined4 *param_1);
template<class... A> int FUN_109a8fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a8fb0(undefined4 *param_1);
template<class... A> int FUN_109a8fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a8fc0(undefined4 *param_1);
template<class... A> int FUN_109a8fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a8fd0(undefined4 *param_1);
template<class... A> int FUN_109a8fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a8fe0(undefined4 *param_1);
template<class... A> int FUN_109a8fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a8ff0(undefined4 *param_1);
template<class... A> int FUN_109a8ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a9070(undefined4 *param_1);
template<class... A> int FUN_109a9070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a90a0(undefined4 *param_1);
template<class... A> int FUN_109a90a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a90d0(undefined4 *param_1);
template<class... A> int FUN_109a90d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a9100(undefined4 *param_1);
template<class... A> int FUN_109a9100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a9130(undefined4 *param_1);
template<class... A> int FUN_109a9130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a9160(undefined4 *param_1);
template<class... A> int FUN_109a9160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a9190(undefined4 *param_1);
template<class... A> int FUN_109a9190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a91b0(undefined4 *param_1);
template<class... A> int FUN_109a91b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a91e0(undefined4 *param_1);
template<class... A> int FUN_109a91e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a9200(undefined4 *param_1);
template<class... A> int FUN_109a9200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a9230(undefined4 *param_1);
template<class... A> int FUN_109a9230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a9250(undefined4 *param_1);
template<class... A> int FUN_109a9250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a9280(undefined4 *param_1);
template<class... A> int FUN_109a9280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a92a0(undefined4 *param_1);
template<class... A> int FUN_109a92a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a92d0(undefined4 *param_1);
template<class... A> int FUN_109a92d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a93a0(undefined4 *param_1);
template<class... A> int FUN_109a93a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a93c0(undefined4 *param_1);
template<class... A> int FUN_109a93c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a93f0(undefined4 *param_1);
template<class... A> int FUN_109a93f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a9410(undefined4 *param_1);
template<class... A> int FUN_109a9410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a9440(undefined4 *param_1);
template<class... A> int FUN_109a9440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a9460(undefined4 *param_1);
template<class... A> int FUN_109a9460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109a9490(undefined4 *param_1);
template<class... A> int FUN_109a9490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109a9720(undefined4 *param_1);
template<class... A> int FUN_109a9720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_109a9730(int *param_1);
template<class... A> int FUN_109a9730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109af340(int param_1);
template<class... A> int FUN_109af340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109af350(int param_1);
template<class... A> int FUN_109af350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109af360(int param_1);
template<class... A> int FUN_109af360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109af370(int param_1);
template<class... A> int FUN_109af370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109af380(int param_1);
template<class... A> int FUN_109af380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109af500(int param_1);
template<class... A> int FUN_109af500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b4090(void);
template<class... A> int FUN_109b4090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b40a0(void);
template<class... A> int FUN_109b40a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b40b0(void);
template<class... A> int FUN_109b40b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b40c0(void);
template<class... A> int FUN_109b40c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b40d0(void);
template<class... A> int FUN_109b40d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b40e0(void);
template<class... A> int FUN_109b40e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b40f0(void);
template<class... A> int FUN_109b40f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b4100(void);
template<class... A> int FUN_109b4100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b4110(void);
template<class... A> int FUN_109b4110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b4120(void);
template<class... A> int FUN_109b4120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4130(int param_1);
template<class... A> int FUN_109b4130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4140(int param_1);
template<class... A> int FUN_109b4140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4150(int param_1);
template<class... A> int FUN_109b4150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4160(int param_1);
template<class... A> int FUN_109b4160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4170(int param_1);
template<class... A> int FUN_109b4170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4180(int param_1);
template<class... A> int FUN_109b4180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4190(int param_1);
template<class... A> int FUN_109b4190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b41a0(int param_1);
template<class... A> int FUN_109b41a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b41b0(int param_1);
template<class... A> int FUN_109b41b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_109b41d0(int param_1);
template<class... A> int FUN_109b41d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b41e0(int param_1);
template<class... A> int FUN_109b41e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b41f0(int param_1);
template<class... A> int FUN_109b41f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4200(int param_1);
template<class... A> int FUN_109b4200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4210(int param_1);
template<class... A> int FUN_109b4210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4220(int param_1);
template<class... A> int FUN_109b4220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4230(int param_1);
template<class... A> int FUN_109b4230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4240(int param_1);
template<class... A> int FUN_109b4240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4250(int param_1);
template<class... A> int FUN_109b4250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4260(int param_1);
template<class... A> int FUN_109b4260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4270(int param_1);
template<class... A> int FUN_109b4270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4280(int param_1);
template<class... A> int FUN_109b4280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b4290(int param_1);
template<class... A> int FUN_109b4290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109b69f0(undefined4 *param_1);
template<class... A> int FUN_109b69f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109b6a00(undefined4 *param_1);
template<class... A> int FUN_109b6a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b6e20(undefined4 param_1);
template<class... A> int FUN_109b6e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b6e30(undefined4 param_1);
template<class... A> int FUN_109b6e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b6e40(void);
template<class... A> int FUN_109b6e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b6e50(void);
template<class... A> int FUN_109b6e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b6e60(void);
template<class... A> int FUN_109b6e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109b6e70(void);
template<class... A> int FUN_109b6e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_109b6f00(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_109b6f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109b7dd0(undefined4 *param_1);
template<class... A> int FUN_109b7dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109b7e00(undefined4 *param_1);
template<class... A> int FUN_109b7e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109b7e10(undefined4 *param_1);
template<class... A> int FUN_109b7e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109b7e20(undefined4 *param_1);
template<class... A> int FUN_109b7e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109b7e30(undefined4 *param_1);
template<class... A> int FUN_109b7e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109b7f20(undefined4 *param_1);
template<class... A> int FUN_109b7f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109b7f40(undefined4 *param_1);
template<class... A> int FUN_109b7f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109b7f70(undefined4 *param_1);
template<class... A> int FUN_109b7f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109b7f90(undefined4 *param_1);
template<class... A> int FUN_109b7f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109b7fc0(undefined4 *param_1);
template<class... A> int FUN_109b7fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109b7fe0(undefined4 *param_1);
template<class... A> int FUN_109b7fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109b8010(undefined4 *param_1);
template<class... A> int FUN_109b8010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109bd150(void);
template<class... A> int FUN_109bd150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109bd160(void);
template<class... A> int FUN_109bd160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109bd170(void);
template<class... A> int FUN_109bd170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109bd180(void);
template<class... A> int FUN_109bd180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109bd190(void);
template<class... A> int FUN_109bd190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109bd2b0(int param_1);
template<class... A> int FUN_109bd2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109bd2c0(int param_1);
template<class... A> int FUN_109bd2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109bf260(undefined4 *param_1);
template<class... A> int FUN_109bf260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109bf280(void);
template<class... A> int FUN_109bf280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109bf290(void);
template<class... A> int FUN_109bf290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109bf2a0(void);
template<class... A> int FUN_109bf2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109bf2b0(void);
template<class... A> int FUN_109bf2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c04c0(undefined4 *param_1);
template<class... A> int FUN_109c04c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c04f0(undefined4 *param_1);
template<class... A> int FUN_109c04f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c0500(undefined4 *param_1);
template<class... A> int FUN_109c0500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c0510(undefined4 *param_1);
template<class... A> int FUN_109c0510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c0520(undefined4 *param_1);
template<class... A> int FUN_109c0520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c0530(undefined4 *param_1);
template<class... A> int FUN_109c0530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c0560(undefined4 *param_1);
template<class... A> int FUN_109c0560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c0590(undefined4 *param_1);
template<class... A> int FUN_109c0590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c05c0(undefined4 *param_1);
template<class... A> int FUN_109c05c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c05e0(undefined4 *param_1);
template<class... A> int FUN_109c05e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c0610(undefined4 *param_1);
template<class... A> int FUN_109c0610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c0630(undefined4 *param_1);
template<class... A> int FUN_109c0630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c0660(undefined4 *param_1);
template<class... A> int FUN_109c0660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c0680(undefined4 *param_1);
template<class... A> int FUN_109c0680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c06b0(undefined4 *param_1);
template<class... A> int FUN_109c06b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c3810(void);
template<class... A> int FUN_109c3810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c3820(void);
template<class... A> int FUN_109c3820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c3830(void);
template<class... A> int FUN_109c3830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c3840(void);
template<class... A> int FUN_109c3840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c3850(void);
template<class... A> int FUN_109c3850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109c3860(int param_1);
template<class... A> int FUN_109c3860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109c3870(int param_1);
template<class... A> int FUN_109c3870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109c3890(int param_1);
template<class... A> int FUN_109c3890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109c38a0(int param_1);
template<class... A> int FUN_109c38a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c3a80(void);
template<class... A> int FUN_109c3a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c3a90(void);
template<class... A> int FUN_109c3a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c3aa0(void);
template<class... A> int FUN_109c3aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c3ab0(void);
template<class... A> int FUN_109c3ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c4b60(undefined4 *param_1);
template<class... A> int FUN_109c4b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c4b90(undefined4 *param_1);
template<class... A> int FUN_109c4b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c4ba0(undefined4 *param_1);
template<class... A> int FUN_109c4ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c4bb0(undefined4 *param_1);
template<class... A> int FUN_109c4bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c4bc0(undefined4 *param_1);
template<class... A> int FUN_109c4bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c4bd0(undefined4 *param_1);
template<class... A> int FUN_109c4bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c4d10(undefined4 *param_1);
template<class... A> int FUN_109c4d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c4d30(undefined4 *param_1);
template<class... A> int FUN_109c4d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c4d60(undefined4 *param_1);
template<class... A> int FUN_109c4d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c4d80(undefined4 *param_1);
template<class... A> int FUN_109c4d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c4db0(undefined4 *param_1);
template<class... A> int FUN_109c4db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c4dd0(undefined4 *param_1);
template<class... A> int FUN_109c4dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109c4e00(undefined4 *param_1);
template<class... A> int FUN_109c4e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c9330(void);
template<class... A> int FUN_109c9330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c9340(void);
template<class... A> int FUN_109c9340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c9350(void);
template<class... A> int FUN_109c9350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c9360(void);
template<class... A> int FUN_109c9360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109c9370(void);
template<class... A> int FUN_109c9370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109c9380(int param_1);
template<class... A> int FUN_109c9380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109c94a0(int param_1);
template<class... A> int FUN_109c94a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109c94b0(int param_1);
template<class... A> int FUN_109c94b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109c94c0(int param_1);
template<class... A> int FUN_109c94c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109cb770(void);
template<class... A> int FUN_109cb770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109cb780(void);
template<class... A> int FUN_109cb780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109cb790(void);
template<class... A> int FUN_109cb790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109cc420(undefined4 *param_1);
template<class... A> int FUN_109cc420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109cc450(undefined4 *param_1);
template<class... A> int FUN_109cc450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109cc460(undefined4 *param_1);
template<class... A> int FUN_109cc460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109cc470(undefined4 *param_1);
template<class... A> int FUN_109cc470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109cc4f0(undefined4 *param_1);
template<class... A> int FUN_109cc4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109cc520(undefined4 *param_1);
template<class... A> int FUN_109cc520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109cc540(undefined4 *param_1);
template<class... A> int FUN_109cc540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109cc570(undefined4 *param_1);
template<class... A> int FUN_109cc570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109cc590(undefined4 *param_1);
template<class... A> int FUN_109cc590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_109cc5c0(undefined4 *param_1);
template<class... A> int FUN_109cc5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109d0300(void);
template<class... A> int FUN_109d0300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109d0310(void);
template<class... A> int FUN_109d0310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109d0320(void);
template<class... A> int FUN_109d0320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109d0330(void);
template<class... A> int FUN_109d0330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109d0470(int param_1);
template<class... A> int FUN_109d0470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_109d0480(int param_1);
template<class... A> int FUN_109d0480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109d88e0(void);
template<class... A> int FUN_109d88e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109d88f0(void);
template<class... A> int FUN_109d88f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109d8900(void);
template<class... A> int FUN_109d8900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109d8910(void);
template<class... A> int FUN_109d8910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_109d8920(void);
template<class... A> int FUN_109d8920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_109d8940(void);
template<class... A> int FUN_109d8940(A...);
extern void __fastcall FUN_106de7d0(void *param_1);

extern int ghidra_vftable_SCNewWizPageFor_SCLegacyAuthenticationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCLegacyTVSetupWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCModernTVSetupWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNamePortableWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialPropagationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialsWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCPlayerSelectionWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCPortablePreparationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCPortableStatusWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCProductMicrophoneWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCProductOnboardingWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCProductPlacementWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCQuickTuneWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCReconfirmProductWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCRegisterProductWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCRegisterSystemWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCRenameWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCRoomAllocationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSecureAuthenticationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSonosVoiceConfigWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSonosVoiceOnboardingWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSonosVoicePreviewWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSonosVoiceSetupWizard_;

extern int ghidra_vftable_SCNewWizPageFor_SCLegacyAuthenticationWizard__SCLegacyAuthenticationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCLegacyTVSetupWizard__SCLegacyTVSetupWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard__SCManualPinAuthenticationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCModernTVSetupWizard__SCModernTVSetupWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNamePortableWizard__SCNamePortableWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialPropagationWizard__SCNetworkCredentialPropagationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialsWizard__SCNetworkCredentialsWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCPlayerSelectionWizard__SCPlayerSelectionWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCPortablePreparationWizard__SCPortablePreparationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCPortableStatusWizard__SCPortableStatusWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCProductMicrophoneWizard__SCProductMicrophoneWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCProductOnboardingWizard__SCProductOnboardingWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCProductPlacementWizard__SCProductPlacementWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCQuickTuneWizard__SCQuickTuneWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCReconfirmProductWizard__SCReconfirmProductWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCRegisterProductWizard__SCRegisterProductWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCRegisterSystemWizard__SCRegisterSystemWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCRenameWizard__SCRenameWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCRoomAllocationWizard__SCRoomAllocationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSecureAuthenticationWizard__SCSecureAuthenticationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSonosVoiceConfigWizard__SCSonosVoiceConfigWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSonosVoiceOnboardingWizard__SCSonosVoiceOnboardingWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSonosVoicePreviewWizard__SCSonosVoicePreviewWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSonosVoiceSetupWizard__SCSonosVoiceSetupWizard_;

// Reference entry 108a2350; body size 3 bytes.
extern int __stdcall thunk_FUN_101b92f0(int a1);
extern int __stdcall thunk_FUN_106dbf00(int a1);
extern int __stdcall thunk_FUN_10929d00(int a1);
extern int __stdcall thunk_FUN_1098dcb0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10bcef80(int a1,int a2);
extern int __stdcall thunk_FUN_10c97610(int a1);
extern int __stdcall thunk_FUN_10cf34e0(int a1);
extern int __stdcall thunk_FUN_10eb4cc0(int a1,int a2);
extern int __stdcall thunk_FUN_10eb4d80(int a1,int a2);
extern int __stdcall thunk_FUN_10eb4e80(int a1,int a2);
extern int __stdcall thunk_FUN_10eb64f0(int a1);
extern int __stdcall thunk_FUN_10ee2db0(int a1,int a2,int a3,int a4);
extern int __stdcall thunk_FUN_111c0760(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8);
extern int __stdcall thunk_FUN_11248b40(int a1);
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_3_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(int a1); };
struct SCVtbl_20_4 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
#line 1 "ENTRY_108a2350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108a2350(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108a2360; body size 7 bytes.
#line 1 "ENTRY_108a2360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_108a2360(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 108a2370; body size 3 bytes.
#line 1 "ENTRY_108a2370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108a2370(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108a2380; body size 3 bytes.
#line 1 "ENTRY_108a2380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108a2380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108a4ed0; body size 9 bytes.
#line 1 "ENTRY_108a4ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108a4ed0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 108a4ee0; body size 9 bytes.
#line 1 "ENTRY_108a4ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108a4ee0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 108a9ea0; body size 7 bytes.
#line 1 "ENTRY_108a9ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_108a9ea0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x118));
}


// Reference entry 108b0bd0; body size 6 bytes.
#line 1 "ENTRY_108b0bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0bd0(void)

{
  return (undefined4)(DAT_121a35b4);
}


// Reference entry 108b0be0; body size 6 bytes.
#line 1 "ENTRY_108b0be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0be0(void)

{
  return (undefined4)(DAT_121a35e0);
}


// Reference entry 108b0bf0; body size 6 bytes.
#line 1 "ENTRY_108b0bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0bf0(void)

{
  return (undefined4)(DAT_121a35dc);
}


// Reference entry 108b0c00; body size 6 bytes.
#line 1 "ENTRY_108b0c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0c00(void)

{
  return (undefined4)(DAT_121a35d0);
}


// Reference entry 108b0c10; body size 6 bytes.
#line 1 "ENTRY_108b0c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0c10(void)

{
  return (undefined4)(DAT_121a35d4);
}


// Reference entry 108b0c20; body size 6 bytes.
#line 1 "ENTRY_108b0c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0c20(void)

{
  return (undefined4)(DAT_121a35e4);
}


// Reference entry 108b0c30; body size 6 bytes.
#line 1 "ENTRY_108b0c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0c30(void)

{
  return (undefined4)(DAT_121a35d8);
}


// Reference entry 108b0c40; body size 6 bytes.
#line 1 "ENTRY_108b0c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0c40(void)

{
  return (undefined4)(DAT_121a35cc);
}


// Reference entry 108b0c50; body size 6 bytes.
#line 1 "ENTRY_108b0c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0c50(void)

{
  return (undefined4)(DAT_121a35c4);
}


// Reference entry 108b0c60; body size 6 bytes.
#line 1 "ENTRY_108b0c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0c60(void)

{
  return (undefined4)(DAT_121a35c8);
}


// Reference entry 108b0c70; body size 6 bytes.
#line 1 "ENTRY_108b0c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0c70(void)

{
  return (undefined4)(DAT_121a35c0);
}


// Reference entry 108b0c80; body size 6 bytes.
#line 1 "ENTRY_108b0c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0c80(void)

{
  return (undefined4)(DAT_121a35bc);
}


// Reference entry 108b0c90; body size 6 bytes.
#line 1 "ENTRY_108b0c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0c90(void)

{
  return (undefined4)(DAT_121a35b0);
}


// Reference entry 108b0ca0; body size 6 bytes.
#line 1 "ENTRY_108b0ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0ca0(void)

{
  return (undefined4)(DAT_121a35b8);
}


// Reference entry 108b0cb0; body size 6 bytes.
#line 1 "ENTRY_108b0cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b0cb0(void)

{
  return (undefined4)(DAT_121a35e8);
}


// Reference entry 108b0cc0; body size 4 bytes.
#line 1 "ENTRY_108b0cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108b0cc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x20));
}


// Reference entry 108b0cd0; body size 5 bytes.
#line 1 "ENTRY_108b0cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108b0cd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 108b0ce0; body size 5 bytes.
#line 1 "ENTRY_108b0ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108b0ce0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 108b0cf0; body size 5 bytes.
#line 1 "ENTRY_108b0cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108b0cf0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 108b0dc0; body size 5 bytes.
#line 1 "ENTRY_108b0dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108b0dc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108b0dd0; body size 5 bytes.
#line 1 "ENTRY_108b0dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108b0dd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108b0de0; body size 5 bytes.
#line 1 "ENTRY_108b0de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108b0de0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108b0df0; body size 5 bytes.
#line 1 "ENTRY_108b0df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108b0df0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108b0e00; body size 5 bytes.
#line 1 "ENTRY_108b0e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108b0e00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108b17d0; body size 69 bytes.
#line 1 "ENTRY_108b17d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b17d0(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_10eac8c0(), 0);
  cVar1 = (char)(thunk_FUN_10eacd20(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10eacd60(), 0);
    if ((((cVar1 == '\0') && (iVar2 != 6)) && (iVar2 != 4)) && ((iVar2 != 5 && (iVar2 != 3)))) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 108b44e0; body size 3 bytes.
#line 1 "ENTRY_108b44e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108b44e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108b44f0; body size 3 bytes.
#line 1 "ENTRY_108b44f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108b44f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108b4500; body size 28 bytes.
#line 1 "ENTRY_108b4500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108b4500(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    ((SCVtbl_2_0*)(piVar1))->v();
    return;
  }
  return;
}


// Reference entry 108b4530; body size 28 bytes.
#line 1 "ENTRY_108b4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108b4530(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    ((SCVtbl_2_0*)(piVar1))->v();
    return;
  }
  return;
}


// Reference entry 108b4560; body size 13 bytes.
#line 1 "ENTRY_108b4560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108b4560(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x118) = (undefined1)(param_2);
  return;
}


// Reference entry 108b4570; body size 13 bytes.
#line 1 "ENTRY_108b4570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108b4570(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x119) = (undefined1)(param_2);
  return;
}


// Reference entry 108b4580; body size 13 bytes.
#line 1 "ENTRY_108b4580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108b4580(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x119) = (undefined1)(param_2);
  return;
}


// Reference entry 108b4760; body size 6 bytes.
#line 1 "ENTRY_108b4760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b4760(void)

{
  return (undefined4)(DAT_121a363c);
}


// Reference entry 108b4770; body size 6 bytes.
#line 1 "ENTRY_108b4770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b4770(void)

{
  return (undefined4)(DAT_121a3644);
}


// Reference entry 108b4780; body size 6 bytes.
#line 1 "ENTRY_108b4780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b4780(void)

{
  return (undefined4)(DAT_121a3648);
}


// Reference entry 108b4790; body size 6 bytes.
#line 1 "ENTRY_108b4790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108b4790(void)

{
  return (undefined4)(DAT_121a3640);
}


// Reference entry 108b47b0; body size 57 bytes.
#line 1 "ENTRY_108b47b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108b47b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 108b4bc0; body size 64 bytes.
#line 1 "ENTRY_108b4bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108b4bc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationButtonPressPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationButtonPressPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationButtonPressPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationButtonPressPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 108b4d10; body size 64 bytes.
#line 1 "ENTRY_108b4d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108b4d10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationTimeoutPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationTimeoutPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationTimeoutPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationTimeoutPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 108b4e60; body size 77 bytes.
#line 1 "ENTRY_108b4e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108b4e60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationVerifyProductPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationVerifyProductPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationVerifyProductPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationVerifyProductPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 108b4fc0; body size 87 bytes.
#line 1 "ENTRY_108b4fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108b4fc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationWaitingPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationWaitingPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationWaitingPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLegacyAuthenticationWaitingPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 108b5660; body size 38 bytes.
#line 1 "ENTRY_108b5660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108b5660(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCLegacyAuthenticationWizard__SCLegacyAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108b5690; body size 11 bytes.
#line 1 "ENTRY_108b5690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108b5690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108b56a0; body size 11 bytes.
#line 1 "ENTRY_108b56a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108b56a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108b56b0; body size 11 bytes.
#line 1 "ENTRY_108b56b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108b56b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108b56c0; body size 11 bytes.
#line 1 "ENTRY_108b56c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108b56c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108b56d0; body size 38 bytes.
#line 1 "ENTRY_108b56d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108b56d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCLegacyAuthenticationWizard__SCLegacyAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108b5700; body size 21 bytes.
#line 1 "ENTRY_108b5700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108b5700(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a363c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108b5720; body size 38 bytes.
#line 1 "ENTRY_108b5720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108b5720(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCLegacyAuthenticationWizard__SCLegacyAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108b5750; body size 21 bytes.
#line 1 "ENTRY_108b5750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108b5750(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3644 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108b5820; body size 21 bytes.
#line 1 "ENTRY_108b5820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108b5820(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3648 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108b58f0; body size 21 bytes.
#line 1 "ENTRY_108b58f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108b58f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3640 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108b88f0; body size 33 bytes.
#line 1 "ENTRY_108b88f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108b88f0(int param_1)

{
 try {
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piStack_1c;
  int iStack_18;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  cVar3 = (char)(thunk_FUN_10eacd20(), 0);
  if (cVar3 != '\0') {
    return (undefined4)(0x14);
  }


  uVar4 = (uint)(DAT_12126b84);

  piVar5 = (int *)((int *)thunk_FUN_10cf34e0((int)(&piStack_14)), 0);
  piVar1 = (int *)((int *)*piVar5);

  *piVar5 = (int)(0);
  if ((int *)(piVar1) == (int *)(0x0)) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)((SCVtbl_3_1*)(piVar1))->v((int)(uVar4)), 0);
  }
  *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(3);
  if ((int *)(piStack_14) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_14))->v();
  }
  *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(2);
  uVar6 = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    uVar6 = (undefined4)(thunk_FUN_10c97610((int)(&piStack_1c)), 0);
    *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(5);
    thunk_FUN_101b92f0((int)(uVar6));
    *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(6);
    if ((int *)(piStack_1c) != (int *)(0x0)) {
      ((SCVtbl_2_0*)(piStack_1c))->v();
    }
    if (iStack_18 == 0) {
      uVar6 = (undefined4)(0);
    }
    else {
      iVar2 = (int)(*(int *)(*(int *)(param_1 + 0x100) + 0x10));
      if (iVar2 == 1) {
        uVar6 = (undefined4)(2);
      }
      else {
        uVar6 = (undefined4)(1);
        if (iVar2 != 2) {
          uVar6 = (undefined4)(0x14);
        }
      }
    }
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(10)));
    if ((int *)(piStack_14) != (int *)(0x0)) {
      ((SCVtbl_2_0*)(piStack_14))->v();
    }
  }

  if ((int *)(piVar5) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar5))->v();
  }

  return (undefined4)(uVar6);

 } catch (...) { }
}


// Reference entry 108bba80; body size 6 bytes.
#line 1 "ENTRY_108bba80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108bba80(void)

{
  return (undefined4)(DAT_121a363c);
}


// Reference entry 108bba90; body size 6 bytes.
#line 1 "ENTRY_108bba90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108bba90(void)

{
  return (undefined4)(DAT_121a3644);
}


// Reference entry 108bbaa0; body size 6 bytes.
#line 1 "ENTRY_108bbaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108bbaa0(void)

{
  return (undefined4)(DAT_121a3648);
}


// Reference entry 108bbab0; body size 6 bytes.
#line 1 "ENTRY_108bbab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108bbab0(void)

{
  return (undefined4)(DAT_121a3640);
}


// Reference entry 108bbac0; body size 6 bytes.
#line 1 "ENTRY_108bbac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108bbac0(void)

{
  return (undefined4)(DAT_121a364c);
}


// Reference entry 108bbae0; body size 5 bytes.
#line 1 "ENTRY_108bbae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108bbae0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108bbaf0; body size 5 bytes.
#line 1 "ENTRY_108bbaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108bbaf0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108bca40; body size 6 bytes.
#line 1 "ENTRY_108bca40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108bca40(void)

{
  return (undefined4)(DAT_121a3694);
}


// Reference entry 108bca50; body size 6 bytes.
#line 1 "ENTRY_108bca50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108bca50(void)

{
  return (undefined4)(DAT_121a3698);
}


// Reference entry 108bca60; body size 6 bytes.
#line 1 "ENTRY_108bca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108bca60(void)

{
  return (undefined4)(DAT_121a36b0);
}


// Reference entry 108bca70; body size 6 bytes.
#line 1 "ENTRY_108bca70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108bca70(void)

{
  return (undefined4)(DAT_121a36a8);
}


// Reference entry 108bca80; body size 6 bytes.
#line 1 "ENTRY_108bca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108bca80(void)

{
  return (undefined4)(DAT_121a369c);
}


// Reference entry 108bca90; body size 6 bytes.
#line 1 "ENTRY_108bca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108bca90(void)

{
  return (undefined4)(DAT_121a36a0);
}


// Reference entry 108bcaa0; body size 6 bytes.
#line 1 "ENTRY_108bcaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108bcaa0(void)

{
  return (undefined4)(DAT_121a36ac);
}


// Reference entry 108bcab0; body size 6 bytes.
#line 1 "ENTRY_108bcab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108bcab0(void)

{
  return (undefined4)(DAT_121a36a4);
}


// Reference entry 108bcad0; body size 57 bytes.
#line 1 "ENTRY_108bcad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108bcad0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 108bd3b0; body size 57 bytes.
#line 1 "ENTRY_108bd3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108bd3b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108bd5b0; body size 57 bytes.
#line 1 "ENTRY_108bd5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108bd5b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupOpticalCheckPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupOpticalCheckPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupOpticalCheckPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupOpticalCheckPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108bd910; body size 67 bytes.
#line 1 "ENTRY_108bd910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108bd910(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_108bd500((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPage);
  param_1[0x38] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkAutoPlaySetPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108bda70; body size 74 bytes.
#line 1 "ENTRY_108bda70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108bda70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_108bd500((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPage);
  param_1[0x38] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkCheckingPage);
  *(undefined1*)((int)param_1 + 0xfa) = (undefined1)(1);
  return (undefined4 *)(param_1);
}


// Reference entry 108bdbd0; body size 57 bytes.
#line 1 "ENTRY_108bdbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108bdbd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkConnectionErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkConnectionErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkConnectionErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkConnectionErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108bdd20; body size 67 bytes.
#line 1 "ENTRY_108bdd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108bdd20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_108bd500((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSilenceAutoPlaySetPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSilenceAutoPlaySetPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSilenceAutoPlaySetPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSilenceAutoPlaySetPage);
  param_1[0x38] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSilenceAutoPlaySetPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108bde80; body size 57 bytes.
#line 1 "ENTRY_108bde80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108bde80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSuccessPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSuccessPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSuccessPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLegacyTVSetupTOSLinkSuccessPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108be7e0; body size 38 bytes.
#line 1 "ENTRY_108be7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108be7e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCLegacyTVSetupWizard__SCLegacyTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108be810; body size 11 bytes.
#line 1 "ENTRY_108be810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108be810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108be820; body size 11 bytes.
#line 1 "ENTRY_108be820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108be820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108be830; body size 11 bytes.
#line 1 "ENTRY_108be830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108be830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108be840; body size 11 bytes.
#line 1 "ENTRY_108be840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108be840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108be850; body size 11 bytes.
#line 1 "ENTRY_108be850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108be850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108be860; body size 11 bytes.
#line 1 "ENTRY_108be860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108be860(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108be870; body size 11 bytes.
#line 1 "ENTRY_108be870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108be870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108be880; body size 11 bytes.
#line 1 "ENTRY_108be880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108be880(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108be890; body size 38 bytes.
#line 1 "ENTRY_108be890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108be890(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


// Reference entry 108be8c0; body size 38 bytes.
#line 1 "ENTRY_108be8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108be8c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCLegacyTVSetupWizard__SCLegacyTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108be8f0; body size 21 bytes.
#line 1 "ENTRY_108be8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108be8f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3694 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108bea00; body size 38 bytes.
#line 1 "ENTRY_108bea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108bea00(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCLegacyTVSetupWizard__SCLegacyTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108bea30; body size 21 bytes.
#line 1 "ENTRY_108bea30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108bea30(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3698 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108bea50; body size 38 bytes.
#line 1 "ENTRY_108bea50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108bea50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


// Reference entry 108bea80; body size 21 bytes.
#line 1 "ENTRY_108bea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108bea80(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a36b0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108beaa0; body size 5 bytes.
#line 1 "ENTRY_108beaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108beaa0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[0x3c]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x3b] = (undefined4)(0);
    param_1[0x3c] = (undefined4)(0);
    ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
  }
  piVar1 = (int *)((int *)param_1[0x3a]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x39] = (undefined4)(0);
    param_1[0x3a] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  param_1[0x38] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHTListener);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();

  return;

 } catch (...) { }
}


// Reference entry 108beab0; body size 21 bytes.
#line 1 "ENTRY_108beab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108beab0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a36a8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108bead0; body size 5 bytes.
#line 1 "ENTRY_108bead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108bead0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[0x3c]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x3b] = (undefined4)(0);
    param_1[0x3c] = (undefined4)(0);
    ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
  }
  piVar1 = (int *)((int *)param_1[0x3a]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x39] = (undefined4)(0);
    param_1[0x3a] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  param_1[0x38] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHTListener);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();

  return;

 } catch (...) { }
}


// Reference entry 108beae0; body size 21 bytes.
#line 1 "ENTRY_108beae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108beae0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a369c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108beb00; body size 38 bytes.
#line 1 "ENTRY_108beb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108beb00(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCLegacyTVSetupWizard__SCLegacyTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108beb30; body size 21 bytes.
#line 1 "ENTRY_108beb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108beb30(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a36a0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108beb50; body size 5 bytes.
#line 1 "ENTRY_108beb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108beb50(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[0x3c]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x3b] = (undefined4)(0);
    param_1[0x3c] = (undefined4)(0);
    ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
  }
  piVar1 = (int *)((int *)param_1[0x3a]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x39] = (undefined4)(0);
    param_1[0x3a] = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  param_1[0x38] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHTListener);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();

  return;

 } catch (...) { }
}


// Reference entry 108beb60; body size 21 bytes.
#line 1 "ENTRY_108beb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108beb60(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a36ac = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108beb80; body size 38 bytes.
#line 1 "ENTRY_108beb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108beb80(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCLegacyTVSetupWizard__SCLegacyTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108bebb0; body size 21 bytes.
#line 1 "ENTRY_108bebb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108bebb0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a36a4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108c3ef0; body size 23 bytes.
#line 1 "ENTRY_108c3ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_108c3ef0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf0));
  return (SCStr *)(param_2);
}


// Reference entry 108c41b0; body size 7 bytes.
#line 1 "ENTRY_108c41b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_108c41b0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf5));
}


// Reference entry 108c41d0; body size 28 bytes.
#line 1 "ENTRY_108c41d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_108c41d0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xe8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (int *)(param_2);
}


// Reference entry 108c6060; body size 6 bytes.
#line 1 "ENTRY_108c6060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c6060(void)

{
  return (undefined4)(DAT_121a3694);
}


// Reference entry 108c6070; body size 6 bytes.
#line 1 "ENTRY_108c6070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c6070(void)

{
  return (undefined4)(DAT_121a3698);
}


// Reference entry 108c6080; body size 6 bytes.
#line 1 "ENTRY_108c6080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c6080(void)

{
  return (undefined4)(DAT_121a36b0);
}


// Reference entry 108c6090; body size 6 bytes.
#line 1 "ENTRY_108c6090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c6090(void)

{
  return (undefined4)(DAT_121a36a8);
}


// Reference entry 108c60a0; body size 6 bytes.
#line 1 "ENTRY_108c60a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c60a0(void)

{
  return (undefined4)(DAT_121a369c);
}


// Reference entry 108c60b0; body size 6 bytes.
#line 1 "ENTRY_108c60b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c60b0(void)

{
  return (undefined4)(DAT_121a36a0);
}


// Reference entry 108c60c0; body size 6 bytes.
#line 1 "ENTRY_108c60c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c60c0(void)

{
  return (undefined4)(DAT_121a36ac);
}


// Reference entry 108c60d0; body size 6 bytes.
#line 1 "ENTRY_108c60d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c60d0(void)

{
  return (undefined4)(DAT_121a36a4);
}


// Reference entry 108c60e0; body size 6 bytes.
#line 1 "ENTRY_108c60e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c60e0(void)

{
  return (undefined4)(DAT_121a36b4);
}


// Reference entry 108c60f0; body size 5 bytes.
#line 1 "ENTRY_108c60f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108c60f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 108c6110; body size 7 bytes.
#line 1 "ENTRY_108c6110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_108c6110(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf6));
}


// Reference entry 108c6120; body size 5 bytes.
#line 1 "ENTRY_108c6120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108c6120(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108c6130; body size 5 bytes.
#line 1 "ENTRY_108c6130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108c6130(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108c6140; body size 5 bytes.
#line 1 "ENTRY_108c6140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108c6140(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108c7420; body size 13 bytes.
#line 1 "ENTRY_108c7420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108c7420(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xf5) = (undefined1)(param_2);
  return;
}


// Reference entry 108c7430; body size 13 bytes.
#line 1 "ENTRY_108c7430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108c7430(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xf4) = (undefined1)(param_2);
  return;
}


// Reference entry 108c7670; body size 3 bytes.
#line 1 "ENTRY_108c7670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_108c7670(void)

{
  return;
}


// Reference entry 108c7680; body size 3 bytes.
#line 1 "ENTRY_108c7680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_108c7680(void)

{
  return;
}


// Reference entry 108c7690; body size 3 bytes.
#line 1 "ENTRY_108c7690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_108c7690(void)

{
  return;
}


// Reference entry 108c76a0; body size 7 bytes.
#line 1 "ENTRY_108c76a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c76a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108c76b0; body size 7 bytes.
#line 1 "ENTRY_108c76b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c76b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108c76c0; body size 7 bytes.
#line 1 "ENTRY_108c76c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c76c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108c76d0; body size 7 bytes.
#line 1 "ENTRY_108c76d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c76d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108c76f0; body size 5 bytes.
#line 1 "ENTRY_108c76f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c76f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 108c7700; body size 13 bytes.
#line 1 "ENTRY_108c7700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_108c7700(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 108c7710; body size 13 bytes.
#line 1 "ENTRY_108c7710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_108c7710(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 108c7720; body size 5 bytes.
#line 1 "ENTRY_108c7720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c7720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 108c7730; body size 49 bytes.
#line 1 "ENTRY_108c7730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c7730(char *param_1,char *param_2,code *param_3)

{
  int iVar1;
  
  while( true ) {
    if ((char *)(param_1) == (char *)(param_2)) {
      return (undefined4)(1);
    }
    iVar1 = (int)((*param_3)((int)*param_1), 0);
    if (iVar1 == 0) break;
    param_1 = (char *)(param_1 + 1);
  }
  return (undefined4)(0);
}


// Reference entry 108c77b0; body size 5 bytes.
#line 1 "ENTRY_108c77b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c77b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 108c77c0; body size 6 bytes.
#line 1 "ENTRY_108c77c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c77c0(void)

{
  return (undefined4)(DAT_121a3730);
}


// Reference entry 108c77d0; body size 6 bytes.
#line 1 "ENTRY_108c77d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c77d0(void)

{
  return (undefined4)(DAT_121a3720);
}


// Reference entry 108c77e0; body size 6 bytes.
#line 1 "ENTRY_108c77e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c77e0(void)

{
  return (undefined4)(DAT_121a371c);
}


// Reference entry 108c77f0; body size 6 bytes.
#line 1 "ENTRY_108c77f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c77f0(void)

{
  return (undefined4)(DAT_121a3718);
}


// Reference entry 108c7800; body size 6 bytes.
#line 1 "ENTRY_108c7800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c7800(void)

{
  return (undefined4)(DAT_121a3714);
}


// Reference entry 108c7810; body size 6 bytes.
#line 1 "ENTRY_108c7810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c7810(void)

{
  return (undefined4)(DAT_121a3724);
}


// Reference entry 108c7820; body size 6 bytes.
#line 1 "ENTRY_108c7820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c7820(void)

{
  return (undefined4)(DAT_121a370c);
}


// Reference entry 108c7830; body size 6 bytes.
#line 1 "ENTRY_108c7830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c7830(void)

{
  return (undefined4)(DAT_121a3704);
}


// Reference entry 108c7840; body size 6 bytes.
#line 1 "ENTRY_108c7840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c7840(void)

{
  return (undefined4)(DAT_121a3708);
}


// Reference entry 108c7850; body size 6 bytes.
#line 1 "ENTRY_108c7850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c7850(void)

{
  return (undefined4)(DAT_121a3710);
}


// Reference entry 108c7860; body size 6 bytes.
#line 1 "ENTRY_108c7860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c7860(void)

{
  return (undefined4)(DAT_121a3734);
}


// Reference entry 108c7870; body size 6 bytes.
#line 1 "ENTRY_108c7870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c7870(void)

{
  return (undefined4)(DAT_121a3728);
}


// Reference entry 108c7890; body size 6 bytes.
#line 1 "ENTRY_108c7890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108c7890(void)

{
  return (undefined4)(DAT_121a372c);
}


// Reference entry 108c7920; body size 57 bytes.
#line 1 "ENTRY_108c7920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108c7920(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 108c85a0; body size 57 bytes.
#line 1 "ENTRY_108c85a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108c85a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationAuthRetryPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationAuthRetryPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationAuthRetryPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationAuthRetryPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108c86f0; body size 57 bytes.
#line 1 "ENTRY_108c86f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108c86f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressFailedPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressFailedPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressFailedPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressFailedPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108c8840; body size 57 bytes.
#line 1 "ENTRY_108c8840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108c8840(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressWaitingPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressWaitingPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressWaitingPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationButtonPressWaitingPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108c8990; body size 57 bytes.
#line 1 "ENTRY_108c8990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108c8990(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressFailedPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressFailedPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressFailedPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressFailedPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108c8ae0; body size 57 bytes.
#line 1 "ENTRY_108c8ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108c8ae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressWaitingPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressWaitingPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressWaitingPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationChimingButtonPressWaitingPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108c8c30; body size 67 bytes.
#line 1 "ENTRY_108c8c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108c8c30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationConnectingProductPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationConnectingProductPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationConnectingProductPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationConnectingProductPage);
  param_1[0x38] = (undefined4)(0x3eb);
  return (undefined4 *)(param_1);
}


// Reference entry 108c8d90; body size 57 bytes.
#line 1 "ENTRY_108c8d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108c8d90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationIdentifyProductPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationIdentifyProductPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationIdentifyProductPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationIdentifyProductPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108c8ee0; body size 57 bytes.
#line 1 "ENTRY_108c8ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108c8ee0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108c9030; body size 57 bytes.
#line 1 "ENTRY_108c9030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108c9030(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinRetryPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinRetryPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinRetryPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationLocatePinRetryPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108c9320; body size 57 bytes.
#line 1 "ENTRY_108c9320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108c9320(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationRetryHandshakePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationRetryHandshakePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationRetryHandshakePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationRetryHandshakePage);
  return (undefined4 *)(param_1);
}


// Reference entry 108c9470; body size 57 bytes.
#line 1 "ENTRY_108c9470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108c9470(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationTimedOutAuthRetryPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationTimedOutAuthRetryPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationTimedOutAuthRetryPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationTimedOutAuthRetryPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108ca2d0; body size 57 bytes.
#line 1 "ENTRY_108ca2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108ca2d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationWrongPinAuthRetryPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationWrongPinAuthRetryPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationWrongPinAuthRetryPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCManualPinAuthenticationWrongPinAuthRetryPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108ca450; body size 11 bytes.
#line 1 "ENTRY_108ca450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108ca460; body size 11 bytes.
#line 1 "ENTRY_108ca460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca460(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108ca470; body size 11 bytes.
#line 1 "ENTRY_108ca470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108ca480; body size 11 bytes.
#line 1 "ENTRY_108ca480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca480(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108ca490; body size 11 bytes.
#line 1 "ENTRY_108ca490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca490(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108ca4a0; body size 11 bytes.
#line 1 "ENTRY_108ca4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca4a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108ca4b0; body size 11 bytes.
#line 1 "ENTRY_108ca4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca4b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108ca4c0; body size 11 bytes.
#line 1 "ENTRY_108ca4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca4c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108ca4d0; body size 11 bytes.
#line 1 "ENTRY_108ca4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca4d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108ca4e0; body size 11 bytes.
#line 1 "ENTRY_108ca4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca4e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108ca4f0; body size 11 bytes.
#line 1 "ENTRY_108ca4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca4f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108ca500; body size 11 bytes.
#line 1 "ENTRY_108ca500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108ca510; body size 11 bytes.
#line 1 "ENTRY_108ca510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca510(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108ca520; body size 38 bytes.
#line 1 "ENTRY_108ca520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca520(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard__SCManualPinAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108ca550; body size 21 bytes.
#line 1 "ENTRY_108ca550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca550(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3730 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108ca570; body size 38 bytes.
#line 1 "ENTRY_108ca570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca570(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard__SCManualPinAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108ca5a0; body size 21 bytes.
#line 1 "ENTRY_108ca5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca5a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3720 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108ca5c0; body size 38 bytes.
#line 1 "ENTRY_108ca5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca5c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard__SCManualPinAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108ca5f0; body size 21 bytes.
#line 1 "ENTRY_108ca5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca5f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a371c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108ca610; body size 38 bytes.
#line 1 "ENTRY_108ca610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca610(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard__SCManualPinAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108ca640; body size 21 bytes.
#line 1 "ENTRY_108ca640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca640(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3718 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108ca660; body size 38 bytes.
#line 1 "ENTRY_108ca660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca660(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard__SCManualPinAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108ca690; body size 21 bytes.
#line 1 "ENTRY_108ca690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca690(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3714 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108ca6b0; body size 38 bytes.
#line 1 "ENTRY_108ca6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca6b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard__SCManualPinAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108ca6e0; body size 21 bytes.
#line 1 "ENTRY_108ca6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca6e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3724 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108ca700; body size 38 bytes.
#line 1 "ENTRY_108ca700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca700(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard__SCManualPinAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108ca730; body size 21 bytes.
#line 1 "ENTRY_108ca730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca730(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a370c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108ca750; body size 38 bytes.
#line 1 "ENTRY_108ca750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca750(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard__SCManualPinAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108ca780; body size 21 bytes.
#line 1 "ENTRY_108ca780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca780(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3704 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108ca7a0; body size 38 bytes.
#line 1 "ENTRY_108ca7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca7a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard__SCManualPinAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108ca7d0; body size 21 bytes.
#line 1 "ENTRY_108ca7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca7d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3708 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108ca890; body size 21 bytes.
#line 1 "ENTRY_108ca890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca890(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3710 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108ca8b0; body size 38 bytes.
#line 1 "ENTRY_108ca8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca8b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard__SCManualPinAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108ca8e0; body size 21 bytes.
#line 1 "ENTRY_108ca8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca8e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3734 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108ca900; body size 38 bytes.
#line 1 "ENTRY_108ca900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca900(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard__SCManualPinAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108ca930; body size 21 bytes.
#line 1 "ENTRY_108ca930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108ca930(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3728 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108cab60; body size 38 bytes.
#line 1 "ENTRY_108cab60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108cab60(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCManualPinAuthenticationWizard__SCManualPinAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108cab90; body size 21 bytes.
#line 1 "ENTRY_108cab90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108cab90(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a372c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108cabb0; body size 15 bytes.
#line 1 "ENTRY_108cabb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108cabb0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3);
  return;
}


// Reference entry 108cabd0; body size 11 bytes.
#line 1 "ENTRY_108cabd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_108cabd0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2);
  return (int *)(param_1);
}


// Reference entry 108cabe0; body size 11 bytes.
#line 1 "ENTRY_108cabe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_108cabe0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2);
  return (int *)(param_1);
}


// Reference entry 108cbbb0; body size 9 bytes.
#line 1 "ENTRY_108cbbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108cbbb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 108cbbc0; body size 3 bytes.
#line 1 "ENTRY_108cbbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108cbbc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108dd5b0; body size 6 bytes.
#line 1 "ENTRY_108dd5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd5b0(void)

{
  return (undefined4)(DAT_121a3730);
}


// Reference entry 108dd5c0; body size 6 bytes.
#line 1 "ENTRY_108dd5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd5c0(void)

{
  return (undefined4)(DAT_121a3720);
}


// Reference entry 108dd5d0; body size 6 bytes.
#line 1 "ENTRY_108dd5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd5d0(void)

{
  return (undefined4)(DAT_121a371c);
}


// Reference entry 108dd5e0; body size 6 bytes.
#line 1 "ENTRY_108dd5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd5e0(void)

{
  return (undefined4)(DAT_121a3718);
}


// Reference entry 108dd5f0; body size 6 bytes.
#line 1 "ENTRY_108dd5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd5f0(void)

{
  return (undefined4)(DAT_121a3714);
}


// Reference entry 108dd600; body size 6 bytes.
#line 1 "ENTRY_108dd600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd600(void)

{
  return (undefined4)(DAT_121a3724);
}


// Reference entry 108dd610; body size 6 bytes.
#line 1 "ENTRY_108dd610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd610(void)

{
  return (undefined4)(DAT_121a370c);
}


// Reference entry 108dd620; body size 6 bytes.
#line 1 "ENTRY_108dd620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd620(void)

{
  return (undefined4)(DAT_121a3704);
}


// Reference entry 108dd630; body size 6 bytes.
#line 1 "ENTRY_108dd630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd630(void)

{
  return (undefined4)(DAT_121a3708);
}


// Reference entry 108dd640; body size 6 bytes.
#line 1 "ENTRY_108dd640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd640(void)

{
  return (undefined4)(DAT_121a3710);
}


// Reference entry 108dd650; body size 6 bytes.
#line 1 "ENTRY_108dd650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd650(void)

{
  return (undefined4)(DAT_121a3734);
}


// Reference entry 108dd660; body size 6 bytes.
#line 1 "ENTRY_108dd660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd660(void)

{
  return (undefined4)(DAT_121a3728);
}


// Reference entry 108dd670; body size 6 bytes.
#line 1 "ENTRY_108dd670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd670(void)

{
  return (undefined4)(DAT_121a3738);
}


// Reference entry 108dd680; body size 6 bytes.
#line 1 "ENTRY_108dd680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dd680(void)

{
  return (undefined4)(DAT_121a372c);
}


// Reference entry 108dd9a0; body size 5 bytes.
#line 1 "ENTRY_108dd9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108dd9a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108dd9b0; body size 5 bytes.
#line 1 "ENTRY_108dd9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108dd9b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108df810; body size 13 bytes.
#line 1 "ENTRY_108df810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108df810(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x10c) = (undefined1)(param_2);
  return;
}


// Reference entry 108dfc20; body size 6 bytes.
#line 1 "ENTRY_108dfc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfc20(void)

{
  return (undefined4)(DAT_121a37b4);
}


// Reference entry 108dfc30; body size 6 bytes.
#line 1 "ENTRY_108dfc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfc30(void)

{
  return (undefined4)(DAT_121a37b0);
}


// Reference entry 108dfc40; body size 6 bytes.
#line 1 "ENTRY_108dfc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfc40(void)

{
  return (undefined4)(DAT_121a37b8);
}


// Reference entry 108dfc50; body size 6 bytes.
#line 1 "ENTRY_108dfc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfc50(void)

{
  return (undefined4)(DAT_121a37a4);
}


// Reference entry 108dfc60; body size 6 bytes.
#line 1 "ENTRY_108dfc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfc60(void)

{
  return (undefined4)(DAT_121a37a8);
}


// Reference entry 108dfc70; body size 6 bytes.
#line 1 "ENTRY_108dfc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfc70(void)

{
  return (undefined4)(DAT_121a37ac);
}


// Reference entry 108dfc80; body size 6 bytes.
#line 1 "ENTRY_108dfc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfc80(void)

{
  return (undefined4)(DAT_121a37c8);
}


// Reference entry 108dfc90; body size 6 bytes.
#line 1 "ENTRY_108dfc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfc90(void)

{
  return (undefined4)(DAT_121a37c4);
}


// Reference entry 108dfca0; body size 6 bytes.
#line 1 "ENTRY_108dfca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfca0(void)

{
  return (undefined4)(DAT_121a37a0);
}


// Reference entry 108dfcb0; body size 6 bytes.
#line 1 "ENTRY_108dfcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfcb0(void)

{
  return (undefined4)(DAT_121a379c);
}


// Reference entry 108dfcc0; body size 6 bytes.
#line 1 "ENTRY_108dfcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfcc0(void)

{
  return (undefined4)(DAT_121a378c);
}


// Reference entry 108dfcd0; body size 6 bytes.
#line 1 "ENTRY_108dfcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfcd0(void)

{
  return (undefined4)(DAT_121a37cc);
}


// Reference entry 108dfce0; body size 6 bytes.
#line 1 "ENTRY_108dfce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfce0(void)

{
  return (undefined4)(DAT_121a3794);
}


// Reference entry 108dfcf0; body size 6 bytes.
#line 1 "ENTRY_108dfcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfcf0(void)

{
  return (undefined4)(DAT_121a3798);
}


// Reference entry 108dfd00; body size 6 bytes.
#line 1 "ENTRY_108dfd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfd00(void)

{
  return (undefined4)(DAT_121a3790);
}


// Reference entry 108dfd10; body size 6 bytes.
#line 1 "ENTRY_108dfd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108dfd10(void)

{
  return (undefined4)(DAT_121a37bc);
}


// Reference entry 108dfd30; body size 57 bytes.
#line 1 "ENTRY_108dfd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108dfd30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 108e0d90; body size 57 bytes.
#line 1 "ENTRY_108e0d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e0d90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupARCErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupARCErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupARCErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupARCErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e0ee0; body size 57 bytes.
#line 1 "ENTRY_108e0ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e0ee0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupCECErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupCECErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupCECErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupCECErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1030; body size 57 bytes.
#line 1 "ENTRY_108e1030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e1030(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupCheckAndContinuePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupCheckAndContinuePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupCheckAndContinuePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupCheckAndContinuePage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1180; body size 57 bytes.
#line 1 "ENTRY_108e1180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e1180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupEntryPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupEntryPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupEntryPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupEntryPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e12d0; body size 57 bytes.
#line 1 "ENTRY_108e12d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e12d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_108e1570((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiCheckPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiCheckPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiCheckPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiCheckPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1420; body size 57 bytes.
#line 1 "ENTRY_108e1420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e1420(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiConnectionErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiConnectionErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiConnectionErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiConnectionErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1600; body size 57 bytes.
#line 1 "ENTRY_108e1600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e1600(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiTestSuccessPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiTestSuccessPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiTestSuccessPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiTestSuccessPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1750; body size 64 bytes.
#line 1 "ENTRY_108e1750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e1750(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_108e1570((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiTestingPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiTestingPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiTestingPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHdmiTestingPage);
  *(undefined1*)((int)param_1 + 0xea) = (undefined1)(1);
  return (undefined4 *)(param_1);
}


// Reference entry 108e18a0; body size 57 bytes.
#line 1 "ENTRY_108e18a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e18a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_108e1570((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHomeIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHomeIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHomeIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupHomeIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e19f0; body size 57 bytes.
#line 1 "ENTRY_108e19f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e19f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_108e1570((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1b40; body size 57 bytes.
#line 1 "ENTRY_108e1b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e1b40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupNeedOpticalAdapterPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupNeedOpticalAdapterPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupNeedOpticalAdapterPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupNeedOpticalAdapterPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1c90; body size 57 bytes.
#line 1 "ENTRY_108e1c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e1c90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_108e1570((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupOpticalAdapterPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupOpticalAdapterPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupOpticalAdapterPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupOpticalAdapterPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e1de0; body size 57 bytes.
#line 1 "ENTRY_108e1de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e1de0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupOpticalAdatperConnectErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupOpticalAdatperConnectErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupOpticalAdatperConnectErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupOpticalAdatperConnectErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e2140; body size 57 bytes.
#line 1 "ENTRY_108e2140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e2140(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupPurchaseAdapterPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupPurchaseAdapterPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupPurchaseAdapterPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupPurchaseAdapterPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e2290; body size 57 bytes.
#line 1 "ENTRY_108e2290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108e2290(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupTryAgainPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupTryAgainPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupTryAgainPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCModernTVSetupTryAgainPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108e33e0; body size 39 bytes.
#line 1 "ENTRY_108e33e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_108e33e0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  return (SCStr *)(param_1);
}


// Reference entry 108e3410; body size 38 bytes.
#line 1 "ENTRY_108e3410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3410(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCModernTVSetupWizard__SCModernTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108e3440; body size 11 bytes.
#line 1 "ENTRY_108e3440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e3450; body size 11 bytes.
#line 1 "ENTRY_108e3450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e3460; body size 11 bytes.
#line 1 "ENTRY_108e3460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3460(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e3470; body size 11 bytes.
#line 1 "ENTRY_108e3470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e3480; body size 11 bytes.
#line 1 "ENTRY_108e3480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3480(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e3490; body size 11 bytes.
#line 1 "ENTRY_108e3490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3490(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e34a0; body size 11 bytes.
#line 1 "ENTRY_108e34a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e34a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e34b0; body size 11 bytes.
#line 1 "ENTRY_108e34b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e34b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e34c0; body size 11 bytes.
#line 1 "ENTRY_108e34c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e34c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e34d0; body size 11 bytes.
#line 1 "ENTRY_108e34d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e34d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e34e0; body size 11 bytes.
#line 1 "ENTRY_108e34e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e34e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e34f0; body size 11 bytes.
#line 1 "ENTRY_108e34f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e34f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e3500; body size 11 bytes.
#line 1 "ENTRY_108e3500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e3510; body size 11 bytes.
#line 1 "ENTRY_108e3510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3510(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e3520; body size 11 bytes.
#line 1 "ENTRY_108e3520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e3530; body size 11 bytes.
#line 1 "ENTRY_108e3530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108e3540; body size 38 bytes.
#line 1 "ENTRY_108e3540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3540(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


// Reference entry 108e3570; body size 38 bytes.
#line 1 "ENTRY_108e3570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3570(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCModernTVSetupWizard__SCModernTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108e35a0; body size 21 bytes.
#line 1 "ENTRY_108e35a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e35a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a37b4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e35c0; body size 38 bytes.
#line 1 "ENTRY_108e35c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e35c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCModernTVSetupWizard__SCModernTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108e35f0; body size 21 bytes.
#line 1 "ENTRY_108e35f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e35f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a37b0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e3610; body size 38 bytes.
#line 1 "ENTRY_108e3610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3610(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCModernTVSetupWizard__SCModernTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108e3640; body size 21 bytes.
#line 1 "ENTRY_108e3640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3640(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a37b8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e3660; body size 38 bytes.
#line 1 "ENTRY_108e3660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3660(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCModernTVSetupWizard__SCModernTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108e3690; body size 21 bytes.
#line 1 "ENTRY_108e3690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3690(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a37a4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e36b0; body size 5 bytes.
#line 1 "ENTRY_108e36b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e36b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[0x39]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x38] = (undefined4)(0);
    param_1[0x39] = (undefined4)(0);
    ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();

  return;

 } catch (...) { }
}


// Reference entry 108e36c0; body size 21 bytes.
#line 1 "ENTRY_108e36c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e36c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a37a8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e36e0; body size 38 bytes.
#line 1 "ENTRY_108e36e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e36e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCModernTVSetupWizard__SCModernTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108e3710; body size 21 bytes.
#line 1 "ENTRY_108e3710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3710(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a37ac = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e37e0; body size 38 bytes.
#line 1 "ENTRY_108e37e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e37e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCModernTVSetupWizard__SCModernTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108e3810; body size 21 bytes.
#line 1 "ENTRY_108e3810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3810(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a37c8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e3830; body size 5 bytes.
#line 1 "ENTRY_108e3830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3830(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[0x39]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x38] = (undefined4)(0);
    param_1[0x39] = (undefined4)(0);
    ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();

  return;

 } catch (...) { }
}


// Reference entry 108e3840; body size 21 bytes.
#line 1 "ENTRY_108e3840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3840(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a37c4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e3860; body size 5 bytes.
#line 1 "ENTRY_108e3860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3860(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[0x39]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x38] = (undefined4)(0);
    param_1[0x39] = (undefined4)(0);
    ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();

  return;

 } catch (...) { }
}


// Reference entry 108e3870; body size 21 bytes.
#line 1 "ENTRY_108e3870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3870(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a37a0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e3890; body size 5 bytes.
#line 1 "ENTRY_108e3890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3890(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[0x39]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x38] = (undefined4)(0);
    param_1[0x39] = (undefined4)(0);
    ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();

  return;

 } catch (...) { }
}


// Reference entry 108e38a0; body size 21 bytes.
#line 1 "ENTRY_108e38a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e38a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a379c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e38c0; body size 38 bytes.
#line 1 "ENTRY_108e38c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e38c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCModernTVSetupWizard__SCModernTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108e38f0; body size 21 bytes.
#line 1 "ENTRY_108e38f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e38f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a378c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e3910; body size 5 bytes.
#line 1 "ENTRY_108e3910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3910(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[0x39]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x38] = (undefined4)(0);
    param_1[0x39] = (undefined4)(0);
    ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();

  return;

 } catch (...) { }
}


// Reference entry 108e3920; body size 21 bytes.
#line 1 "ENTRY_108e3920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3920(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a37cc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e3940; body size 38 bytes.
#line 1 "ENTRY_108e3940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3940(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCModernTVSetupWizard__SCModernTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108e3970; body size 21 bytes.
#line 1 "ENTRY_108e3970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3970(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3794 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e3990; body size 38 bytes.
#line 1 "ENTRY_108e3990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


// Reference entry 108e39c0; body size 21 bytes.
#line 1 "ENTRY_108e39c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e39c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3798 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e39e0; body size 38 bytes.
#line 1 "ENTRY_108e39e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e39e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCModernTVSetupWizard__SCModernTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108e3a10; body size 21 bytes.
#line 1 "ENTRY_108e3a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3a10(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3790 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108e3a30; body size 38 bytes.
#line 1 "ENTRY_108e3a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3a30(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCModernTVSetupWizard__SCModernTVSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108e3a60; body size 21 bytes.
#line 1 "ENTRY_108e3a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108e3a60(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a37bc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108ee760; body size 23 bytes.
#line 1 "ENTRY_108ee760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_108ee760(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf8));
  return (SCStr *)(param_2);
}


// Reference entry 108ee780; body size 39 bytes.
#line 1 "ENTRY_108ee780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_108ee780(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x118));
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0x11c));
  *(undefined4*)(param_2 + 8) = (undefined4)(*(undefined4 *)(param_1 + 0x120));
  return (SCStr *)(param_2);
}


// Reference entry 108eea50; body size 7 bytes.
#line 1 "ENTRY_108eea50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_108eea50(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x115));
}


// Reference entry 108eeab0; body size 7 bytes.
#line 1 "ENTRY_108eeab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_108eeab0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x113));
}


// Reference entry 108eeac0; body size 7 bytes.
#line 1 "ENTRY_108eeac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_108eeac0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x112));
}


// Reference entry 108eead0; body size 7 bytes.
#line 1 "ENTRY_108eead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108eead0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10c));
}


// Reference entry 108eeae0; body size 7 bytes.
#line 1 "ENTRY_108eeae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108eeae0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x108));
}


// Reference entry 108eeaf0; body size 23 bytes.
#line 1 "ENTRY_108eeaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_108eeaf0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xfc));
  return (SCStr *)(param_2);
}


// Reference entry 108eeb10; body size 23 bytes.
#line 1 "ENTRY_108eeb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_108eeb10(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x100));
  return (SCStr *)(param_2);
}


// Reference entry 108eeb30; body size 28 bytes.
#line 1 "ENTRY_108eeb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_108eeb30(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xf0), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (int *)(param_2);
}


// Reference entry 108eeb70; body size 7 bytes.
#line 1 "ENTRY_108eeb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_108eeb70(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x114));
}


// Reference entry 108eeb80; body size 28 bytes.
#line 1 "ENTRY_108eeb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_108eeb80(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xe8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (int *)(param_2);
}


// Reference entry 108f4b50; body size 6 bytes.
#line 1 "ENTRY_108f4b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4b50(void)

{
  return (undefined4)(DAT_121a37b4);
}


// Reference entry 108f4b60; body size 6 bytes.
#line 1 "ENTRY_108f4b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4b60(void)

{
  return (undefined4)(DAT_121a37b0);
}


// Reference entry 108f4b70; body size 6 bytes.
#line 1 "ENTRY_108f4b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4b70(void)

{
  return (undefined4)(DAT_121a37b8);
}


// Reference entry 108f4b80; body size 6 bytes.
#line 1 "ENTRY_108f4b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4b80(void)

{
  return (undefined4)(DAT_121a37a4);
}


// Reference entry 108f4b90; body size 6 bytes.
#line 1 "ENTRY_108f4b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4b90(void)

{
  return (undefined4)(DAT_121a37a8);
}


// Reference entry 108f4ba0; body size 6 bytes.
#line 1 "ENTRY_108f4ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4ba0(void)

{
  return (undefined4)(DAT_121a37ac);
}


// Reference entry 108f4bb0; body size 6 bytes.
#line 1 "ENTRY_108f4bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4bb0(void)

{
  return (undefined4)(DAT_121a37c8);
}


// Reference entry 108f4bc0; body size 6 bytes.
#line 1 "ENTRY_108f4bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4bc0(void)

{
  return (undefined4)(DAT_121a37c4);
}


// Reference entry 108f4bd0; body size 6 bytes.
#line 1 "ENTRY_108f4bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4bd0(void)

{
  return (undefined4)(DAT_121a37a0);
}


// Reference entry 108f4be0; body size 6 bytes.
#line 1 "ENTRY_108f4be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4be0(void)

{
  return (undefined4)(DAT_121a379c);
}


// Reference entry 108f4bf0; body size 6 bytes.
#line 1 "ENTRY_108f4bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4bf0(void)

{
  return (undefined4)(DAT_121a378c);
}


// Reference entry 108f4c00; body size 6 bytes.
#line 1 "ENTRY_108f4c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4c00(void)

{
  return (undefined4)(DAT_121a37cc);
}


// Reference entry 108f4c10; body size 6 bytes.
#line 1 "ENTRY_108f4c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4c10(void)

{
  return (undefined4)(DAT_121a3794);
}


// Reference entry 108f4c20; body size 6 bytes.
#line 1 "ENTRY_108f4c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4c20(void)

{
  return (undefined4)(DAT_121a3798);
}


// Reference entry 108f4c30; body size 6 bytes.
#line 1 "ENTRY_108f4c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4c30(void)

{
  return (undefined4)(DAT_121a3790);
}


// Reference entry 108f4c40; body size 6 bytes.
#line 1 "ENTRY_108f4c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4c40(void)

{
  return (undefined4)(DAT_121a37bc);
}


// Reference entry 108f4c50; body size 6 bytes.
#line 1 "ENTRY_108f4c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f4c50(void)

{
  return (undefined4)(DAT_121a37c0);
}


// Reference entry 108f4c60; body size 5 bytes.
#line 1 "ENTRY_108f4c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108f4c60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 108f4c80; body size 7 bytes.
#line 1 "ENTRY_108f4c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_108f4c80(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x111));
}


// Reference entry 108f4c90; body size 5 bytes.
#line 1 "ENTRY_108f4c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108f4c90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108f4ca0; body size 5 bytes.
#line 1 "ENTRY_108f4ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108f4ca0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108f4cb0; body size 5 bytes.
#line 1 "ENTRY_108f4cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108f4cb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108f7ff0; body size 13 bytes.
#line 1 "ENTRY_108f7ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108f7ff0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x115) = (undefined1)(param_2);
  return;
}


// Reference entry 108f8000; body size 13 bytes.
#line 1 "ENTRY_108f8000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108f8000(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x113) = (undefined1)(param_2);
  return;
}


// Reference entry 108f8010; body size 13 bytes.
#line 1 "ENTRY_108f8010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108f8010(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x112) = (undefined1)(param_2);
  return;
}


// Reference entry 108f8020; body size 13 bytes.
#line 1 "ENTRY_108f8020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108f8020(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x10c) = (undefined4)(param_2);
  return;
}


// Reference entry 108f8030; body size 13 bytes.
#line 1 "ENTRY_108f8030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108f8030(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x108) = (undefined4)(param_2);
  return;
}


// Reference entry 108f8040; body size 39 bytes.
#line 1 "ENTRY_108f8040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108f8040(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xfc));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 108f8070; body size 119 bytes.
#line 1 "ENTRY_108f8070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108f8070(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  int *piVar1;
  bool bVar2;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x100));
  bVar2 = (bool)(((SCStr *)(this_))->op_eq(param_2), 0);
  if ((!bVar2) && (*(int *)(param_1 + 0xf0) != 0)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xf4), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 0xf0) = (undefined4)(0);
      *(undefined4*)(param_1 + 0xf4) = (undefined4)(0);
      ((SCVtbl_2_0*)(piVar1))->v();
    }
    *(undefined4*)(param_1 + 0xf0) = (undefined4)(0);
    *(undefined4*)(param_1 + 0xf4) = (undefined4)(0);
  }
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 108f8660; body size 13 bytes.
#line 1 "ENTRY_108f8660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108f8660(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x110) = (undefined1)(param_2);
  return;
}


// Reference entry 108f8670; body size 13 bytes.
#line 1 "ENTRY_108f8670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108f8670(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x114) = (undefined1)(param_2);
  return;
}


// Reference entry 108f8830; body size 13 bytes.
#line 1 "ENTRY_108f8830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108f8830(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x111) = (undefined1)(param_2);
  return;
}


// Reference entry 108f8840; body size 6 bytes.
#line 1 "ENTRY_108f8840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108f8840(void)

{
  return (undefined4)(DAT_121a3824);
}


// Reference entry 108f8860; body size 57 bytes.
#line 1 "ENTRY_108f8860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108f8860(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 108f89a0; body size 57 bytes.
#line 1 "ENTRY_108f89a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108f89a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNamePortableSetNamePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNamePortableSetNamePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNamePortableSetNamePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNamePortableSetNamePage);
  return (undefined4 *)(param_1);
}


// Reference entry 108f8d80; body size 38 bytes.
#line 1 "ENTRY_108f8d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108f8d80(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNamePortableWizard__SCNamePortableWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108f8db0; body size 11 bytes.
#line 1 "ENTRY_108f8db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108f8db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108f8dc0; body size 38 bytes.
#line 1 "ENTRY_108f8dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108f8dc0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNamePortableWizard__SCNamePortableWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108f8df0; body size 21 bytes.
#line 1 "ENTRY_108f8df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108f8df0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3824 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108fab10; body size 6 bytes.
#line 1 "ENTRY_108fab10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108fab10(void)

{
  return (undefined4)(DAT_121a3824);
}


// Reference entry 108fab20; body size 6 bytes.
#line 1 "ENTRY_108fab20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108fab20(void)

{
  return (undefined4)(DAT_121a3820);
}


// Reference entry 108fabf0; body size 5 bytes.
#line 1 "ENTRY_108fabf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108fabf0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108fac00; body size 5 bytes.
#line 1 "ENTRY_108fac00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108fac00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 108fb140; body size 91 bytes.
#line 1 "ENTRY_108fb140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_108fb140(int *param_2)
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
  if ((int *)(piVar2) != (int *)(0x0)) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    ((SCVtbl_2_0*)(piVar2))->v();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)(((SCVtbl_3_0*)(piVar1))->v(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 108fb1c0; body size 25 bytes.
#line 1 "ENTRY_108fb1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_108fb1c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 108fb320; body size 78 bytes.
#line 1 "ENTRY_108fb320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_108fb320(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)(0x0)) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    ((SCVtbl_2_0*)(piVar2))->v();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)(((SCVtbl_3_0*)(piVar1))->v(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 108fb5b0; body size 78 bytes.
#line 1 "ENTRY_108fb5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_108fb5b0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)(0x0)) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    ((SCVtbl_2_0*)(piVar2))->v();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)(((SCVtbl_3_0*)(piVar1))->v(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 108fb620; body size 39 bytes.
#line 1 "ENTRY_108fb620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108fb620(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar2))->v();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 108fb650; body size 7 bytes.
#line 1 "ENTRY_108fb650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108fb650(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108fb7d0; body size 28 bytes.
#line 1 "ENTRY_108fb7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_108fb7d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
    ((SCVtbl_1_0*)(piVar1))->v();
    return;
  }
  return;
}


// Reference entry 108fb800; body size 5 bytes.
#line 1 "ENTRY_108fb800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108fb800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 108fb810; body size 6 bytes.
#line 1 "ENTRY_108fb810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108fb810(void)

{
  return (undefined4)(DAT_121a387c);
}


// Reference entry 108fb820; body size 6 bytes.
#line 1 "ENTRY_108fb820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108fb820(void)

{
  return (undefined4)(DAT_121a3870);
}


// Reference entry 108fb830; body size 6 bytes.
#line 1 "ENTRY_108fb830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108fb830(void)

{
  return (undefined4)(DAT_121a3878);
}


// Reference entry 108fb840; body size 6 bytes.
#line 1 "ENTRY_108fb840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_108fb840(void)

{
  return (undefined4)(DAT_121a3874);
}


// Reference entry 108fb860; body size 57 bytes.
#line 1 "ENTRY_108fb860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108fb860(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 108fbcb0; body size 21 bytes.
#line 1 "ENTRY_108fbcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108fbcb0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 108fbe40; body size 57 bytes.
#line 1 "ENTRY_108fbe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108fbe40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialsCustomNetworkPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialsCustomNetworkPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialsCustomNetworkPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialsCustomNetworkPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108fc140; body size 57 bytes.
#line 1 "ENTRY_108fc140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108fc140(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialsNetworkSelectionPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialsNetworkSelectionPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialsNetworkSelectionPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialsNetworkSelectionPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108fc290; body size 57 bytes.
#line 1 "ENTRY_108fc290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_108fc290(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialsPasswordEntryPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialsPasswordEntryPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialsPasswordEntryPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialsPasswordEntryPage);
  return (undefined4 *)(param_1);
}


// Reference entry 108fcb00; body size 11 bytes.
#line 1 "ENTRY_108fcb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108fcb00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108fcb10; body size 11 bytes.
#line 1 "ENTRY_108fcb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108fcb10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108fcb20; body size 11 bytes.
#line 1 "ENTRY_108fcb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108fcb20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108fcb30; body size 11 bytes.
#line 1 "ENTRY_108fcb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108fcb30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 108fcc40; body size 38 bytes.
#line 1 "ENTRY_108fcc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108fcc40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialsWizard__SCNetworkCredentialsWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108fcc70; body size 21 bytes.
#line 1 "ENTRY_108fcc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108fcc70(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a387c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108fcd40; body size 21 bytes.
#line 1 "ENTRY_108fcd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108fcd40(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3870 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108fcd60; body size 38 bytes.
#line 1 "ENTRY_108fcd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108fcd60(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialsWizard__SCNetworkCredentialsWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108fcd90; body size 21 bytes.
#line 1 "ENTRY_108fcd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108fcd90(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3878 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108fcdb0; body size 38 bytes.
#line 1 "ENTRY_108fcdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108fcdb0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialsWizard__SCNetworkCredentialsWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 108fcde0; body size 21 bytes.
#line 1 "ENTRY_108fcde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108fcde0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3874 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 108fcfc0; body size 3 bytes.
#line 1 "ENTRY_108fcfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108fcfc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108fcfd0; body size 3 bytes.
#line 1 "ENTRY_108fcfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108fcfd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108fcfe0; body size 3 bytes.
#line 1 "ENTRY_108fcfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108fcfe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 108fd6b0; body size 129 bytes.
#line 1 "ENTRY_108fd6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_108fd6b0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x20000000) {
    param_2 = (uint)(param_2 * 8);
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        pvVar1 = (void *)(operator_new(param_2), 0);
        *param_1 = (uint)((uint)pvVar1);
        param_1[1] = (uint)((uint)pvVar1);
        param_1[2] = (uint)((uint)((int)pvVar1 + param_2));
        return;
      }
      *param_1 = (uint)(0);
      param_1[1] = (uint)(0);
      param_1[2] = (uint)(0);
      return;
    }
    if (param_2 < param_2 + 0x23) {
      pvVar1 = (char *)(operator_new(param_2 + 0x23), 0);
      if ((void *)(pvVar1) != (void *)(0x0)) {
        uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void**)(uVar2 - 4) = (void *)(pvVar1);
        *param_1 = (uint)(uVar2);
        param_1[1] = (uint)(uVar2);
        param_1[2] = (uint)(uVar2 + param_2);
        return;
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 108fd760; body size 3 bytes.
#line 1 "ENTRY_108fd760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108fd760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 108fd770; body size 3 bytes.
#line 1 "ENTRY_108fd770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108fd770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 108fd780; body size 6 bytes.
#line 1 "ENTRY_108fd780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_108fd780(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 108fdec0; body size 9 bytes.
#line 1 "ENTRY_108fdec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_108fdec0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10900010; body size 7 bytes.
#line 1 "ENTRY_10900010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10900010(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x119));
}


// Reference entry 10903c90; body size 6 bytes.
#line 1 "ENTRY_10903c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10903c90(void)

{
  return (undefined4)(DAT_121a387c);
}


// Reference entry 10903ca0; body size 6 bytes.
#line 1 "ENTRY_10903ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10903ca0(void)

{
  return (undefined4)(DAT_121a3870);
}


// Reference entry 10903cb0; body size 6 bytes.
#line 1 "ENTRY_10903cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10903cb0(void)

{
  return (undefined4)(DAT_121a3878);
}


// Reference entry 10903cc0; body size 6 bytes.
#line 1 "ENTRY_10903cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10903cc0(void)

{
  return (undefined4)(DAT_121a3874);
}


// Reference entry 10903cd0; body size 6 bytes.
#line 1 "ENTRY_10903cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10903cd0(void)

{
  return (undefined4)(DAT_121a386c);
}


// Reference entry 10903cf0; body size 7 bytes.
#line 1 "ENTRY_10903cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10903cf0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x11a));
}


// Reference entry 10904070; body size 5 bytes.
#line 1 "ENTRY_10904070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10904070(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10904080; body size 5 bytes.
#line 1 "ENTRY_10904080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10904080(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10905450; body size 3 bytes.
#line 1 "ENTRY_10905450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10905450(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10905460; body size 28 bytes.
#line 1 "ENTRY_10905460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10905460(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    ((SCVtbl_2_0*)(piVar1))->v();
    return;
  }
  return;
}


// Reference entry 10905490; body size 20 bytes.
#line 1 "ENTRY_10905490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10905490(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
                    
                    
    ((SCVtbl_2_0*)(piVar1))->v();
    return;
  }
  return;
}


// Reference entry 109054b0; body size 5 bytes.
#line 1 "ENTRY_109054b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109054b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 109054c0; body size 13 bytes.
#line 1 "ENTRY_109054c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_109054c0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x11a) = (undefined1)(param_2);
  return;
}


// Reference entry 109054d0; body size 6 bytes.
#line 1 "ENTRY_109054d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109054d0(void)

{
  return (undefined4)(DAT_121a38d0);
}


// Reference entry 109054e0; body size 6 bytes.
#line 1 "ENTRY_109054e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109054e0(void)

{
  return (undefined4)(DAT_121a38e4);
}


// Reference entry 109054f0; body size 6 bytes.
#line 1 "ENTRY_109054f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109054f0(void)

{
  return (undefined4)(DAT_121a38d8);
}


// Reference entry 10905500; body size 6 bytes.
#line 1 "ENTRY_10905500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10905500(void)

{
  return (undefined4)(DAT_121a38ec);
}


// Reference entry 10905510; body size 6 bytes.
#line 1 "ENTRY_10905510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10905510(void)

{
  return (undefined4)(DAT_121a38c8);
}


// Reference entry 10905520; body size 6 bytes.
#line 1 "ENTRY_10905520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10905520(void)

{
  return (undefined4)(DAT_121a38d4);
}


// Reference entry 10905530; body size 6 bytes.
#line 1 "ENTRY_10905530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10905530(void)

{
  return (undefined4)(DAT_121a38e8);
}


// Reference entry 10905540; body size 6 bytes.
#line 1 "ENTRY_10905540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10905540(void)

{
  return (undefined4)(DAT_121a38e0);
}


// Reference entry 10905550; body size 6 bytes.
#line 1 "ENTRY_10905550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10905550(void)

{
  return (undefined4)(DAT_121a38dc);
}


// Reference entry 10905560; body size 6 bytes.
#line 1 "ENTRY_10905560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10905560(void)

{
  return (undefined4)(DAT_121a38f4);
}


// Reference entry 10905570; body size 6 bytes.
#line 1 "ENTRY_10905570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10905570(void)

{
  return (undefined4)(DAT_121a38cc);
}


// Reference entry 10905590; body size 57 bytes.
#line 1 "ENTRY_10905590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10905590(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10906250; body size 57 bytes.
#line 1 "ENTRY_10906250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10906250(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationAuthErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationAuthErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationAuthErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationAuthErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109063a0; body size 74 bytes.
#line 1 "ENTRY_109063a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109063a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationChangeNetworkPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationChangeNetworkPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationChangeNetworkPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationChangeNetworkPage);
  param_1[0x38] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x39) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10906500; body size 57 bytes.
#line 1 "ENTRY_10906500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10906500(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationConnectionErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationConnectionErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationConnectionErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationConnectionErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10906860; body size 57 bytes.
#line 1 "ENTRY_10906860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10906860(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationPlayerConnectedPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationPlayerConnectedPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationPlayerConnectedPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationPlayerConnectedPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109069b0; body size 57 bytes.
#line 1 "ENTRY_109069b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109069b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationRouterErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationRouterErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationRouterErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationRouterErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10906d10; body size 57 bytes.
#line 1 "ENTRY_10906d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10906d10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationSsidMismatchErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationSsidMismatchErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationSsidMismatchErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationSsidMismatchErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10906e60; body size 57 bytes.
#line 1 "ENTRY_10906e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10906e60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationSystemErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationSystemErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationSystemErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationSystemErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10906fb0; body size 77 bytes.
#line 1 "ENTRY_10906fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10906fb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationUpdatePlayerPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationUpdatePlayerPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationUpdatePlayerPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationUpdatePlayerPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(7);
  return (undefined4 *)(param_1);
}


// Reference entry 10907110; body size 64 bytes.
#line 1 "ENTRY_10907110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10907110(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationUpdateSystemPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationUpdateSystemPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationUpdateSystemPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkCredentialPropagationUpdateSystemPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10907dd0; body size 38 bytes.
#line 1 "ENTRY_10907dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907dd0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialPropagationWizard__SCNetworkCredentialPropagationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10907e00; body size 11 bytes.
#line 1 "ENTRY_10907e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10907e10; body size 11 bytes.
#line 1 "ENTRY_10907e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907e10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10907e20; body size 11 bytes.
#line 1 "ENTRY_10907e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10907e30; body size 11 bytes.
#line 1 "ENTRY_10907e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907e30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10907e40; body size 11 bytes.
#line 1 "ENTRY_10907e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10907e50; body size 11 bytes.
#line 1 "ENTRY_10907e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907e50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10907e60; body size 11 bytes.
#line 1 "ENTRY_10907e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907e60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10907e70; body size 11 bytes.
#line 1 "ENTRY_10907e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907e70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10907e80; body size 11 bytes.
#line 1 "ENTRY_10907e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907e80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10907e90; body size 11 bytes.
#line 1 "ENTRY_10907e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907e90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10907ea0; body size 11 bytes.
#line 1 "ENTRY_10907ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10907eb0; body size 38 bytes.
#line 1 "ENTRY_10907eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


// Reference entry 10907ee0; body size 38 bytes.
#line 1 "ENTRY_10907ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907ee0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


// Reference entry 10907f10; body size 38 bytes.
#line 1 "ENTRY_10907f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907f10(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialPropagationWizard__SCNetworkCredentialPropagationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10907f40; body size 21 bytes.
#line 1 "ENTRY_10907f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10907f40(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a38d0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10908000; body size 21 bytes.
#line 1 "ENTRY_10908000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10908000(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a38e4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10908020; body size 38 bytes.
#line 1 "ENTRY_10908020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10908020(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialPropagationWizard__SCNetworkCredentialPropagationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10908050; body size 21 bytes.
#line 1 "ENTRY_10908050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10908050(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a38d8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10908070; body size 38 bytes.
#line 1 "ENTRY_10908070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10908070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


// Reference entry 109080a0; body size 21 bytes.
#line 1 "ENTRY_109080a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109080a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a38ec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109080c0; body size 38 bytes.
#line 1 "ENTRY_109080c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109080c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialPropagationWizard__SCNetworkCredentialPropagationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109080f0; body size 21 bytes.
#line 1 "ENTRY_109080f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109080f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a38c8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10908110; body size 38 bytes.
#line 1 "ENTRY_10908110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10908110(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialPropagationWizard__SCNetworkCredentialPropagationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10908140; body size 21 bytes.
#line 1 "ENTRY_10908140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10908140(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a38d4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10908160; body size 38 bytes.
#line 1 "ENTRY_10908160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10908160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


#line 1 "ENTRY_10908190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10908190(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a38e8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109081b0; body size 38 bytes.
#line 1 "ENTRY_109081b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109081b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialPropagationWizard__SCNetworkCredentialPropagationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109081e0; body size 21 bytes.
#line 1 "ENTRY_109081e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109081e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a38e0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10908200; body size 38 bytes.
#line 1 "ENTRY_10908200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10908200(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialPropagationWizard__SCNetworkCredentialPropagationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10908230; body size 21 bytes.
#line 1 "ENTRY_10908230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10908230(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a38dc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10908250; body size 38 bytes.
#line 1 "ENTRY_10908250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10908250(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialPropagationWizard__SCNetworkCredentialPropagationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10908280; body size 21 bytes.
#line 1 "ENTRY_10908280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10908280(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a38f4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109082a0; body size 38 bytes.
#line 1 "ENTRY_109082a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109082a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkCredentialPropagationWizard__SCNetworkCredentialPropagationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109082d0; body size 21 bytes.
#line 1 "ENTRY_109082d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109082d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a38cc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1090f0b0; body size 7 bytes.
#line 1 "ENTRY_1090f0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1090f0b0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x11a));
}


// Reference entry 1090f120; body size 7 bytes.
#line 1 "ENTRY_1090f120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1090f120(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x120));
}


// Reference entry 109141d0; body size 6 bytes.
#line 1 "ENTRY_109141d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109141d0(void)

{
  return (undefined4)(DAT_121a38d0);
}


// Reference entry 109141e0; body size 6 bytes.
#line 1 "ENTRY_109141e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109141e0(void)

{
  return (undefined4)(DAT_121a38e4);
}


// Reference entry 109141f0; body size 6 bytes.
#line 1 "ENTRY_109141f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109141f0(void)

{
  return (undefined4)(DAT_121a38d8);
}


// Reference entry 10914200; body size 6 bytes.
#line 1 "ENTRY_10914200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10914200(void)

{
  return (undefined4)(DAT_121a38ec);
}


// Reference entry 10914210; body size 6 bytes.
#line 1 "ENTRY_10914210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10914210(void)

{
  return (undefined4)(DAT_121a38c8);
}


// Reference entry 10914220; body size 6 bytes.
#line 1 "ENTRY_10914220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10914220(void)

{
  return (undefined4)(DAT_121a38d4);
}


// Reference entry 10914230; body size 6 bytes.
#line 1 "ENTRY_10914230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10914230(void)

{
  return (undefined4)(DAT_121a38e8);
}


// Reference entry 10914240; body size 6 bytes.
#line 1 "ENTRY_10914240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10914240(void)

{
  return (undefined4)(DAT_121a38e0);
}


// Reference entry 10914250; body size 6 bytes.
#line 1 "ENTRY_10914250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10914250(void)

{
  return (undefined4)(DAT_121a38dc);
}


// Reference entry 10914260; body size 6 bytes.
#line 1 "ENTRY_10914260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10914260(void)

{
  return (undefined4)(DAT_121a38f4);
}


// Reference entry 10914270; body size 6 bytes.
#line 1 "ENTRY_10914270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10914270(void)

{
  return (undefined4)(DAT_121a38cc);
}


// Reference entry 10914280; body size 6 bytes.
#line 1 "ENTRY_10914280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10914280(void)

{
  return (undefined4)(DAT_121a38f0);
}


// Reference entry 10914290; body size 7 bytes.
#line 1 "ENTRY_10914290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10914290(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x11c));
}


// Reference entry 109142a0; body size 5 bytes.
#line 1 "ENTRY_109142a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109142a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109142b0; body size 5 bytes.
#line 1 "ENTRY_109142b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109142b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109142c0; body size 5 bytes.
#line 1 "ENTRY_109142c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109142c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109142e0; body size 5 bytes.
#line 1 "ENTRY_109142e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109142e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109142f0; body size 5 bytes.
#line 1 "ENTRY_109142f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109142f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10914300; body size 5 bytes.
#line 1 "ENTRY_10914300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10914300(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10914310; body size 5 bytes.
#line 1 "ENTRY_10914310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10914310(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10914320; body size 5 bytes.
#line 1 "ENTRY_10914320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10914320(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10914330; body size 5 bytes.
#line 1 "ENTRY_10914330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10914330(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10914340; body size 45 bytes.
#line 1 "ENTRY_10914340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10914340(void)

{
  uint uVar1;
  int *piVar2;
  
  thunk_FUN_10eb41c0();
  piVar2 = (int *)((int *)thunk_FUN_10eace90(), 0);
  uVar1 = (uint)((piVar2[1] - *piVar2) / 0x4c);
  return (undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1 < uVar1)));
}


// Reference entry 10914380; body size 7 bytes.
#line 1 "ENTRY_10914380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10914380(int param_1)

{
  *(int*)(param_1 + 0x120) = (int)(*(int *)(param_1 + 0x120) + 1);
  return;
}


// Reference entry 10916a40; body size 13 bytes.
#line 1 "ENTRY_10916a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10916a40(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x119) = (undefined1)(param_2);
  return;
}


// Reference entry 10916a50; body size 13 bytes.
#line 1 "ENTRY_10916a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10916a50(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x11b) = (undefined1)(param_2);
  return;
}


// Reference entry 10916a60; body size 13 bytes.
#line 1 "ENTRY_10916a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10916a60(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x118) = (undefined1)(param_2);
  return;
}


// Reference entry 10916a70; body size 13 bytes.
#line 1 "ENTRY_10916a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10916a70(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x11a) = (undefined1)(param_2);
  return;
}


// Reference entry 10916a80; body size 13 bytes.
#line 1 "ENTRY_10916a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10916a80(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x11b) = (undefined1)(param_2);
  return;
}


// Reference entry 10916aa0; body size 18 bytes.
#line 1 "ENTRY_10916aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10916aa0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10916ac0; body size 18 bytes.
#line 1 "ENTRY_10916ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10916ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10916ae0; body size 19 bytes.
#line 1 "ENTRY_10916ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10916ae0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10916b00; body size 5 bytes.
#line 1 "ENTRY_10916b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916b00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10916b10; body size 6 bytes.
#line 1 "ENTRY_10916b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916b10(void)

{
  return (undefined4)(DAT_121a3950);
}


// Reference entry 10916b20; body size 6 bytes.
#line 1 "ENTRY_10916b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916b20(void)

{
  return (undefined4)(DAT_121a3954);
}


// Reference entry 10916b30; body size 6 bytes.
#line 1 "ENTRY_10916b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916b30(void)

{
  return (undefined4)(DAT_121a3944);
}


// Reference entry 10916b40; body size 6 bytes.
#line 1 "ENTRY_10916b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916b40(void)

{
  return (undefined4)(DAT_121a3964);
}


// Reference entry 10916b50; body size 6 bytes.
#line 1 "ENTRY_10916b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916b50(void)

{
  return (undefined4)(DAT_121a3970);
}


// Reference entry 10916b60; body size 6 bytes.
#line 1 "ENTRY_10916b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916b60(void)

{
  return (undefined4)(DAT_121a3974);
}


// Reference entry 10916b70; body size 6 bytes.
#line 1 "ENTRY_10916b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916b70(void)

{
  return (undefined4)(DAT_121a3968);
}


// Reference entry 10916b80; body size 6 bytes.
#line 1 "ENTRY_10916b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916b80(void)

{
  return (undefined4)(DAT_121a3978);
}


// Reference entry 10916b90; body size 6 bytes.
#line 1 "ENTRY_10916b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916b90(void)

{
  return (undefined4)(DAT_121a3958);
}


// Reference entry 10916ba0; body size 6 bytes.
#line 1 "ENTRY_10916ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916ba0(void)

{
  return (undefined4)(DAT_121a3984);
}


// Reference entry 10916bb0; body size 6 bytes.
#line 1 "ENTRY_10916bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916bb0(void)

{
  return (undefined4)(DAT_121a3960);
}


// Reference entry 10916bc0; body size 6 bytes.
#line 1 "ENTRY_10916bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916bc0(void)

{
  return (undefined4)(DAT_121a394c);
}


// Reference entry 10916bd0; body size 6 bytes.
#line 1 "ENTRY_10916bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916bd0(void)

{
  return (undefined4)(DAT_121a397c);
}


// Reference entry 10916be0; body size 6 bytes.
#line 1 "ENTRY_10916be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916be0(void)

{
  return (undefined4)(DAT_121a3980);
}


// Reference entry 10916bf0; body size 6 bytes.
#line 1 "ENTRY_10916bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916bf0(void)

{
  return (undefined4)(DAT_121a395c);
}


// Reference entry 10916c00; body size 6 bytes.
#line 1 "ENTRY_10916c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916c00(void)

{
  return (undefined4)(DAT_121a3948);
}


// Reference entry 10916c10; body size 6 bytes.
#line 1 "ENTRY_10916c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916c10(void)

{
  return (undefined4)(DAT_121a396c);
}


// Reference entry 10916c30; body size 5 bytes.
#line 1 "ENTRY_10916c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10916c40; body size 5 bytes.
#line 1 "ENTRY_10916c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10916c50; body size 5 bytes.
#line 1 "ENTRY_10916c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10916c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10916c60; body size 19 bytes.
#line 1 "ENTRY_10916c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10916c60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10916c80; body size 57 bytes.
#line 1 "ENTRY_10916c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10916c80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10918160; body size 76 bytes.
#line 1 "ENTRY_10918160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10918160(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x14), 0);
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


// Reference entry 109185e0; body size 64 bytes.
#line 1 "ENTRY_109185e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109185e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAppleLocalNetworkPermsPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAppleLocalNetworkPermsPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAppleLocalNetworkPermsPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAppleLocalNetworkPermsPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10918730; body size 57 bytes.
#line 1 "ENTRY_10918730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10918730(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskNotSurePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskNotSurePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskNotSurePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskNotSurePage);
  return (undefined4 *)(param_1);
}


// Reference entry 10918880; body size 57 bytes.
#line 1 "ENTRY_10918880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10918880(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskTurnOffDevicesPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskTurnOffDevicesPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskTurnOffDevicesPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskTurnOffDevicesPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109189d0; body size 57 bytes.
#line 1 "ENTRY_109189d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109189d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskTurnOffRouterPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskTurnOffRouterPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskTurnOffRouterPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskTurnOffRouterPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10918b20; body size 57 bytes.
#line 1 "ENTRY_10918b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10918b20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskWiredDevicesPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskWiredDevicesPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskWiredDevicesPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootAskWiredDevicesPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10918c70; body size 64 bytes.
#line 1 "ENTRY_10918c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10918c70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootCheckingDevicesPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootCheckingDevicesPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootCheckingDevicesPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootCheckingDevicesPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10918fd0; body size 57 bytes.
#line 1 "ENTRY_10918fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10918fd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootFailConnectPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootFailConnectPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootFailConnectPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootFailConnectPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10919120; body size 76 bytes.
#line 1 "ENTRY_10919120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10919120(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootInformDevicesPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootInformDevicesPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootInformDevicesPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootInformDevicesPage);
  *(undefined2*)(param_1 + 0x38) = (undefined2)(0x101);
  param_1[0x39] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10919280; body size 96 bytes.
#line 1 "ENTRY_10919280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10919280(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootIntroPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x3a) = (undefined2)(0);
  param_1[0x3b] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10919400; body size 57 bytes.
#line 1 "ENTRY_10919400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10919400(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootReminderContextPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootReminderContextPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootReminderContextPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootReminderContextPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10919550; body size 57 bytes.
#line 1 "ENTRY_10919550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10919550(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootSuccessfulPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootSuccessfulPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootSuccessfulPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootSuccessfulPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109198b0; body size 57 bytes.
#line 1 "ENTRY_109198b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109198b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootWifiSettingDisabledPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootWifiSettingDisabledPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootWifiSettingDisabledPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootWifiSettingDisabledPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10919a00; body size 57 bytes.
#line 1 "ENTRY_10919a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10919a00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootWiredLearnMorePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootWiredLearnMorePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootWiredLearnMorePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNetworkTroubleshootWiredLearnMorePage);
  return (undefined4 *)(param_1);
}


// Reference entry 1091aba0; body size 38 bytes.
#line 1 "ENTRY_1091aba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091aba0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1091abd0; body size 11 bytes.
#line 1 "ENTRY_1091abd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091abd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091abe0; body size 11 bytes.
#line 1 "ENTRY_1091abe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091abe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091abf0; body size 11 bytes.
#line 1 "ENTRY_1091abf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091abf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091ac00; body size 11 bytes.
#line 1 "ENTRY_1091ac00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ac00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091ac10; body size 11 bytes.
#line 1 "ENTRY_1091ac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ac10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091ac20; body size 11 bytes.
#line 1 "ENTRY_1091ac20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ac20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091ac30; body size 11 bytes.
#line 1 "ENTRY_1091ac30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ac30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091ac40; body size 11 bytes.
#line 1 "ENTRY_1091ac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ac40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091ac50; body size 11 bytes.
#line 1 "ENTRY_1091ac50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ac50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091ac60; body size 11 bytes.
#line 1 "ENTRY_1091ac60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ac60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091ac70; body size 11 bytes.
#line 1 "ENTRY_1091ac70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ac70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091ac80; body size 11 bytes.
#line 1 "ENTRY_1091ac80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ac80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091ac90; body size 11 bytes.
#line 1 "ENTRY_1091ac90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ac90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091aca0; body size 11 bytes.
#line 1 "ENTRY_1091aca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091aca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091acb0; body size 11 bytes.
#line 1 "ENTRY_1091acb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091acb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091acc0; body size 11 bytes.
#line 1 "ENTRY_1091acc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091acc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091acd0; body size 11 bytes.
#line 1 "ENTRY_1091acd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091acd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1091ace0; body size 38 bytes.
#line 1 "ENTRY_1091ace0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ace0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



#line 1 "ENTRY_1091ad10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ad10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ad40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ad70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ada0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091add0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3950 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091adf0; body size 38 bytes.
#line 1 "ENTRY_1091adf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091adf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_1091ae20(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3954 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091ae40; body size 38 bytes.
#line 1 "ENTRY_1091ae40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ae40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1091ae70; body size 21 bytes.
#line 1 "ENTRY_1091ae70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ae70(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3944 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091ae90; body size 38 bytes.
#line 1 "ENTRY_1091ae90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091ae90(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1091aec0; body size 21 bytes.
#line 1 "ENTRY_1091aec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091aec0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3964 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091aee0; body size 38 bytes.
#line 1 "ENTRY_1091aee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091aee0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1091af10; body size 21 bytes.
#line 1 "ENTRY_1091af10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091af10(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3970 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091af30; body size 38 bytes.
#line 1 "ENTRY_1091af30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091af30(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1091af60; body size 21 bytes.
#line 1 "ENTRY_1091af60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091af60(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3974 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091af80; body size 38 bytes.
#line 1 "ENTRY_1091af80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091af80(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1091afb0; body size 21 bytes.
#line 1 "ENTRY_1091afb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091afb0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3968 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091afd0; body size 38 bytes.
#line 1 "ENTRY_1091afd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091afd0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1091b000; body size 21 bytes.
#line 1 "ENTRY_1091b000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b000(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3978 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091b020; body size 38 bytes.
#line 1 "ENTRY_1091b020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b020(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_1091b050(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3958 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091b070; body size 38 bytes.
#line 1 "ENTRY_1091b070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b070(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1091b0a0; body size 21 bytes.
#line 1 "ENTRY_1091b0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b0a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3984 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091b0c0; body size 38 bytes.
#line 1 "ENTRY_1091b0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b0c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1091b0f0; body size 21 bytes.
#line 1 "ENTRY_1091b0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b0f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3960 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091b1c0; body size 21 bytes.
#line 1 "ENTRY_1091b1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b1c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a394c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091b1e0; body size 38 bytes.
#line 1 "ENTRY_1091b1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b1e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1091b210; body size 21 bytes.
#line 1 "ENTRY_1091b210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b210(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a397c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091b230; body size 38 bytes.
#line 1 "ENTRY_1091b230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b230(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1091b260; body size 21 bytes.
#line 1 "ENTRY_1091b260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b260(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3980 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091b280; body size 38 bytes.
#line 1 "ENTRY_1091b280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_1091b2b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a395c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091b2d0; body size 38 bytes.
#line 1 "ENTRY_1091b2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b2d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1091b300; body size 21 bytes.
#line 1 "ENTRY_1091b300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b300(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3948 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091b320; body size 38 bytes.
#line 1 "ENTRY_1091b320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b320(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNetworkTroubleshootWizard__SCNetworkTroubleshootWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1091b350; body size 21 bytes.
#line 1 "ENTRY_1091b350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1091b350(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a396c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1091caf0; body size 33 bytes.
#line 1 "ENTRY_1091caf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1091caf0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 10929b70; body size 6 bytes.
#line 1 "ENTRY_10929b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929b70(void)

{
  return (undefined4)(DAT_121a3950);
}


// Reference entry 10929b80; body size 6 bytes.
#line 1 "ENTRY_10929b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929b80(void)

{
  return (undefined4)(DAT_121a3954);
}


// Reference entry 10929b90; body size 6 bytes.
#line 1 "ENTRY_10929b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929b90(void)

{
  return (undefined4)(DAT_121a3944);
}


// Reference entry 10929ba0; body size 6 bytes.
#line 1 "ENTRY_10929ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929ba0(void)

{
  return (undefined4)(DAT_121a3964);
}


// Reference entry 10929bb0; body size 6 bytes.
#line 1 "ENTRY_10929bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929bb0(void)

{
  return (undefined4)(DAT_121a3970);
}


// Reference entry 10929bc0; body size 6 bytes.
#line 1 "ENTRY_10929bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929bc0(void)

{
  return (undefined4)(DAT_121a3974);
}


// Reference entry 10929bd0; body size 6 bytes.
#line 1 "ENTRY_10929bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929bd0(void)

{
  return (undefined4)(DAT_121a3968);
}


// Reference entry 10929be0; body size 6 bytes.
#line 1 "ENTRY_10929be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929be0(void)

{
  return (undefined4)(DAT_121a3978);
}


// Reference entry 10929bf0; body size 6 bytes.
#line 1 "ENTRY_10929bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929bf0(void)

{
  return (undefined4)(DAT_121a3958);
}


// Reference entry 10929c00; body size 6 bytes.
#line 1 "ENTRY_10929c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929c00(void)

{
  return (undefined4)(DAT_121a3984);
}


// Reference entry 10929c10; body size 6 bytes.
#line 1 "ENTRY_10929c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929c10(void)

{
  return (undefined4)(DAT_121a3960);
}


// Reference entry 10929c20; body size 6 bytes.
#line 1 "ENTRY_10929c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929c20(void)

{
  return (undefined4)(DAT_121a394c);
}


// Reference entry 10929c30; body size 6 bytes.
#line 1 "ENTRY_10929c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929c30(void)

{
  return (undefined4)(DAT_121a397c);
}


// Reference entry 10929c40; body size 6 bytes.
#line 1 "ENTRY_10929c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929c40(void)

{
  return (undefined4)(DAT_121a3980);
}


// Reference entry 10929c50; body size 6 bytes.
#line 1 "ENTRY_10929c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929c50(void)

{
  return (undefined4)(DAT_121a395c);
}


// Reference entry 10929c60; body size 6 bytes.
#line 1 "ENTRY_10929c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929c60(void)

{
  return (undefined4)(DAT_121a3948);
}


// Reference entry 10929c70; body size 6 bytes.
#line 1 "ENTRY_10929c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929c70(void)

{
  return (undefined4)(DAT_121a396c);
}


// Reference entry 10929c80; body size 6 bytes.
#line 1 "ENTRY_10929c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10929c80(void)

{
  return (undefined4)(DAT_121a3988);
}


// Reference entry 10929c90; body size 7 bytes.
#line 1 "ENTRY_10929c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10929c90(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x118));
}


// Reference entry 10929ca0; body size 5 bytes.
#line 1 "ENTRY_10929ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10929ca0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10929cb0; body size 5 bytes.
#line 1 "ENTRY_10929cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10929cb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10929cc0; body size 5 bytes.
#line 1 "ENTRY_10929cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10929cc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10929cd0; body size 5 bytes.
#line 1 "ENTRY_10929cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10929cd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10929ce0; body size 5 bytes.
#line 1 "ENTRY_10929ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10929ce0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10929e00; body size 5 bytes.
#line 1 "ENTRY_10929e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10929e00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10929e10; body size 5 bytes.
#line 1 "ENTRY_10929e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10929e10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10929e20; body size 5 bytes.
#line 1 "ENTRY_10929e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10929e20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10929e30; body size 5 bytes.
#line 1 "ENTRY_10929e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10929e30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10929e40; body size 5 bytes.
#line 1 "ENTRY_10929e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10929e40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10929e50; body size 5 bytes.
#line 1 "ENTRY_10929e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10929e50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10929e60; body size 5 bytes.
#line 1 "ENTRY_10929e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10929e60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10929e70; body size 5 bytes.
#line 1 "ENTRY_10929e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10929e70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10929e80; body size 13 bytes.
#line 1 "ENTRY_10929e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10929e80(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10929d00((int)(0)), 0);
  return (bool)(iVar1 == 0);
}


// Reference entry 10929f50; body size 14 bytes.
#line 1 "ENTRY_10929f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10929f50(void)

{
  thunk_FUN_11248b40((int)(0x15));
  return;
}


// Reference entry 1092a180; body size 7 bytes.
#line 1 "ENTRY_1092a180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1092a180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1092b710; body size 6 bytes.
#line 1 "ENTRY_1092b710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b710(void)

{
  return (undefined4)(DAT_121a39e8);
}


// Reference entry 1092b720; body size 6 bytes.
#line 1 "ENTRY_1092b720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b720(void)

{
  return (undefined4)(DAT_121a39f4);
}


// Reference entry 1092b730; body size 6 bytes.
#line 1 "ENTRY_1092b730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b730(void)

{
  return (undefined4)(DAT_121a39ec);
}


// Reference entry 1092b740; body size 6 bytes.
#line 1 "ENTRY_1092b740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b740(void)

{
  return (undefined4)(DAT_121a39f0);
}


// Reference entry 1092b750; body size 6 bytes.
#line 1 "ENTRY_1092b750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b750(void)

{
  return (undefined4)(DAT_121a3a18);
}


// Reference entry 1092b760; body size 6 bytes.
#line 1 "ENTRY_1092b760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b760(void)

{
  return (undefined4)(DAT_121a39f8);
}


// Reference entry 1092b770; body size 6 bytes.
#line 1 "ENTRY_1092b770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b770(void)

{
  return (undefined4)(DAT_121a3a0c);
}


// Reference entry 1092b780; body size 6 bytes.
#line 1 "ENTRY_1092b780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b780(void)

{
  return (undefined4)(DAT_121a3a08);
}


// Reference entry 1092b790; body size 6 bytes.
#line 1 "ENTRY_1092b790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b790(void)

{
  return (undefined4)(DAT_121a3a00);
}


// Reference entry 1092b7a0; body size 6 bytes.
#line 1 "ENTRY_1092b7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b7a0(void)

{
  return (undefined4)(DAT_121a3a14);
}


// Reference entry 1092b7b0; body size 6 bytes.
#line 1 "ENTRY_1092b7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b7b0(void)

{
  return (undefined4)(DAT_121a3a04);
}


// Reference entry 1092b7c0; body size 6 bytes.
#line 1 "ENTRY_1092b7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b7c0(void)

{
  return (undefined4)(DAT_121a39e0);
}


// Reference entry 1092b7d0; body size 6 bytes.
#line 1 "ENTRY_1092b7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b7d0(void)

{
  return (undefined4)(DAT_121a39e4);
}


// Reference entry 1092b7e0; body size 6 bytes.
#line 1 "ENTRY_1092b7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b7e0(void)

{
  return (undefined4)(DAT_121a3a10);
}


// Reference entry 1092b7f0; body size 6 bytes.
#line 1 "ENTRY_1092b7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b7f0(void)

{
  return (undefined4)(DAT_121a3a1c);
}


// Reference entry 1092b800; body size 6 bytes.
#line 1 "ENTRY_1092b800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1092b800(void)

{
  return (undefined4)(DAT_121a39fc);
}


// Reference entry 1092b820; body size 57 bytes.
#line 1 "ENTRY_1092b820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092b820(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1092c770; body size 57 bytes.
#line 1 "ENTRY_1092c770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092c770(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092c8c0; body size 57 bytes.
#line 1 "ENTRY_1092c8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092c8c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrPreemptiveScanPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrPreemptiveScanPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrPreemptiveScanPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrPreemptiveScanPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092ca10; body size 57 bytes.
#line 1 "ENTRY_1092ca10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092ca10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrScanPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrScanPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrScanPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrScanPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092cb60; body size 57 bytes.
#line 1 "ENTRY_1092cb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092cb60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrScanSuccessPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrScanSuccessPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrScanSuccessPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAcrScanSuccessPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092ccb0; body size 57 bytes.
#line 1 "ENTRY_1092ccb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092ccb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAudioModulationRetryPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAudioModulationRetryPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAudioModulationRetryPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationAudioModulationRetryPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092ce00; body size 57 bytes.
#line 1 "ENTRY_1092ce00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092ce00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationCancelScanPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationCancelScanPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationCancelScanPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationCancelScanPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092cf50; body size 57 bytes.
#line 1 "ENTRY_1092cf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092cf50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationChimeCapableAuthRetryPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationChimeCapableAuthRetryPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationChimeCapableAuthRetryPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationChimeCapableAuthRetryPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092d0a0; body size 57 bytes.
#line 1 "ENTRY_1092d0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092d0a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationConnectingProductPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationConnectingProductPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationConnectingProductPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationConnectingProductPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092d1f0; body size 57 bytes.
#line 1 "ENTRY_1092d1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092d1f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationEducationPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationEducationPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationEducationPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationEducationPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092d340; body size 57 bytes.
#line 1 "ENTRY_1092d340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092d340(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationErrorAuthRetryPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationErrorAuthRetryPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationErrorAuthRetryPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationErrorAuthRetryPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092d490; body size 57 bytes.
#line 1 "ENTRY_1092d490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092d490(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationFailedScanPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationFailedScanPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationFailedScanPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationFailedScanPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092d5e0; body size 57 bytes.
#line 1 "ENTRY_1092d5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092d5e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationIcrIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationIcrIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationIcrIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationIcrIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092d730; body size 57 bytes.
#line 1 "ENTRY_1092d730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092d730(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationIcrScanPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationIcrScanPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationIcrScanPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationIcrScanPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092d880; body size 57 bytes.
#line 1 "ENTRY_1092d880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092d880(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationLedStateAuthRetryPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationLedStateAuthRetryPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationLedStateAuthRetryPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationLedStateAuthRetryPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092d9d0; body size 57 bytes.
#line 1 "ENTRY_1092d9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092d9d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationManualPinRetryPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationManualPinRetryPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationManualPinRetryPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationManualPinRetryPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092db20; body size 57 bytes.
#line 1 "ENTRY_1092db20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1092db20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationScanErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationScanErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationScanErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNfcAuthenticationScanErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1092ec30; body size 38 bytes.
#line 1 "ENTRY_1092ec30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ec30(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092ec60; body size 11 bytes.
#line 1 "ENTRY_1092ec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ec60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ec70; body size 11 bytes.
#line 1 "ENTRY_1092ec70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ec70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ec80; body size 11 bytes.
#line 1 "ENTRY_1092ec80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ec80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ec90; body size 11 bytes.
#line 1 "ENTRY_1092ec90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ec90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092eca0; body size 11 bytes.
#line 1 "ENTRY_1092eca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092eca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ecb0; body size 11 bytes.
#line 1 "ENTRY_1092ecb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ecb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ecc0; body size 11 bytes.
#line 1 "ENTRY_1092ecc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ecc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ecd0; body size 11 bytes.
#line 1 "ENTRY_1092ecd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ecd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ece0; body size 11 bytes.
#line 1 "ENTRY_1092ece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ece0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ecf0; body size 11 bytes.
#line 1 "ENTRY_1092ecf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ecf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ed00; body size 11 bytes.
#line 1 "ENTRY_1092ed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ed00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ed10; body size 11 bytes.
#line 1 "ENTRY_1092ed10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ed10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ed20; body size 11 bytes.
#line 1 "ENTRY_1092ed20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ed20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ed30; body size 11 bytes.
#line 1 "ENTRY_1092ed30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ed30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ed40; body size 11 bytes.
#line 1 "ENTRY_1092ed40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ed40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092ed50; body size 11 bytes.
#line 1 "ENTRY_1092ed50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ed50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1092eda0; body size 38 bytes.
#line 1 "ENTRY_1092eda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092eda0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092edd0; body size 21 bytes.
#line 1 "ENTRY_1092edd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092edd0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a39e8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092edf0; body size 38 bytes.
#line 1 "ENTRY_1092edf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092edf0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092ee20; body size 21 bytes.
#line 1 "ENTRY_1092ee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ee20(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a39f4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092ee40; body size 38 bytes.
#line 1 "ENTRY_1092ee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ee40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092ee70; body size 21 bytes.
#line 1 "ENTRY_1092ee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ee70(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a39ec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092ee90; body size 38 bytes.
#line 1 "ENTRY_1092ee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ee90(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092eec0; body size 21 bytes.
#line 1 "ENTRY_1092eec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092eec0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a39f0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092eee0; body size 38 bytes.
#line 1 "ENTRY_1092eee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092eee0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092ef10; body size 21 bytes.
#line 1 "ENTRY_1092ef10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ef10(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a18 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092ef30; body size 38 bytes.
#line 1 "ENTRY_1092ef30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ef30(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092ef60; body size 21 bytes.
#line 1 "ENTRY_1092ef60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ef60(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a39f8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092ef80; body size 38 bytes.
#line 1 "ENTRY_1092ef80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092ef80(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092efb0; body size 21 bytes.
#line 1 "ENTRY_1092efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092efb0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a0c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092efd0; body size 38 bytes.
#line 1 "ENTRY_1092efd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092efd0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092f000; body size 21 bytes.
#line 1 "ENTRY_1092f000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f000(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a08 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092f020; body size 38 bytes.
#line 1 "ENTRY_1092f020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f020(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092f050; body size 21 bytes.
#line 1 "ENTRY_1092f050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f050(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a00 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092f070; body size 38 bytes.
#line 1 "ENTRY_1092f070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f070(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092f0a0; body size 21 bytes.
#line 1 "ENTRY_1092f0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f0a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a14 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092f0c0; body size 38 bytes.
#line 1 "ENTRY_1092f0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f0c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092f0f0; body size 21 bytes.
#line 1 "ENTRY_1092f0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f0f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a04 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092f110; body size 38 bytes.
#line 1 "ENTRY_1092f110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f110(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092f140; body size 21 bytes.
#line 1 "ENTRY_1092f140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f140(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a39e0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092f160; body size 38 bytes.
#line 1 "ENTRY_1092f160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f160(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092f190; body size 21 bytes.
#line 1 "ENTRY_1092f190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f190(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a39e4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092f1b0; body size 38 bytes.
#line 1 "ENTRY_1092f1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f1b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092f1e0; body size 21 bytes.
#line 1 "ENTRY_1092f1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f1e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a10 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092f200; body size 38 bytes.
#line 1 "ENTRY_1092f200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f200(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092f230; body size 21 bytes.
#line 1 "ENTRY_1092f230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f230(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a1c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1092f250; body size 38 bytes.
#line 1 "ENTRY_1092f250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f250(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCNfcAuthenticationWizard__SCNfcAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1092f280; body size 21 bytes.
#line 1 "ENTRY_1092f280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1092f280(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a39fc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10930760; body size 71 bytes.
#line 1 "ENTRY_10930760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10930760(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)(thunk_FUN_106dbf00((int)(DAT_121a39ec)), 0);
  iVar2 = (int)(thunk_FUN_106dbf00((int)(DAT_121a39e4)), 0);
  iVar3 = (int)(thunk_FUN_106dbf00((int)(DAT_121a3a10)), 0);
  iVar4 = (int)(thunk_FUN_106dbf00((int)(DAT_121a3a0c)), 0);
  return (bool)(((iVar1 + iVar2) - iVar3) - iVar4 < 2);
}


// Reference entry 10939500; body size 7 bytes.
#line 1 "ENTRY_10939500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10939500(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x112));
}


// Reference entry 10944190; body size 7 bytes.
#line 1 "ENTRY_10944190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10944190(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10c));
}


// Reference entry 109441a0; body size 6 bytes.
#line 1 "ENTRY_109441a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109441a0(void)

{
  return (undefined4)(DAT_121a39e8);
}


// Reference entry 109441b0; body size 6 bytes.
#line 1 "ENTRY_109441b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109441b0(void)

{
  return (undefined4)(DAT_121a39f4);
}


// Reference entry 109441c0; body size 6 bytes.
#line 1 "ENTRY_109441c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109441c0(void)

{
  return (undefined4)(DAT_121a39ec);
}


// Reference entry 109441d0; body size 6 bytes.
#line 1 "ENTRY_109441d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109441d0(void)

{
  return (undefined4)(DAT_121a39f0);
}


// Reference entry 109441e0; body size 6 bytes.
#line 1 "ENTRY_109441e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109441e0(void)

{
  return (undefined4)(DAT_121a3a18);
}


// Reference entry 109441f0; body size 6 bytes.
#line 1 "ENTRY_109441f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109441f0(void)

{
  return (undefined4)(DAT_121a39f8);
}


// Reference entry 10944200; body size 6 bytes.
#line 1 "ENTRY_10944200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10944200(void)

{
  return (undefined4)(DAT_121a3a0c);
}


// Reference entry 10944210; body size 6 bytes.
#line 1 "ENTRY_10944210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10944210(void)

{
  return (undefined4)(DAT_121a3a08);
}


// Reference entry 10944220; body size 6 bytes.
#line 1 "ENTRY_10944220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10944220(void)

{
  return (undefined4)(DAT_121a3a00);
}


// Reference entry 10944230; body size 6 bytes.
#line 1 "ENTRY_10944230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10944230(void)

{
  return (undefined4)(DAT_121a3a14);
}


// Reference entry 10944240; body size 6 bytes.
#line 1 "ENTRY_10944240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10944240(void)

{
  return (undefined4)(DAT_121a3a04);
}


// Reference entry 10944250; body size 6 bytes.
#line 1 "ENTRY_10944250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10944250(void)

{
  return (undefined4)(DAT_121a39e0);
}


// Reference entry 10944260; body size 6 bytes.
#line 1 "ENTRY_10944260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10944260(void)

{
  return (undefined4)(DAT_121a39e4);
}


// Reference entry 10944270; body size 6 bytes.
#line 1 "ENTRY_10944270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10944270(void)

{
  return (undefined4)(DAT_121a3a10);
}


// Reference entry 10944280; body size 6 bytes.
#line 1 "ENTRY_10944280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10944280(void)

{
  return (undefined4)(DAT_121a3a1c);
}


// Reference entry 10944290; body size 6 bytes.
#line 1 "ENTRY_10944290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10944290(void)

{
  return (undefined4)(DAT_121a39fc);
}


// Reference entry 109442a0; body size 6 bytes.
#line 1 "ENTRY_109442a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109442a0(void)

{
  return (undefined4)(DAT_121a3a20);
}


// Reference entry 109442b0; body size 7 bytes.
#line 1 "ENTRY_109442b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109442b0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x111));
}


// Reference entry 109442d0; body size 5 bytes.
#line 1 "ENTRY_109442d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109442d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109442e0; body size 5 bytes.
#line 1 "ENTRY_109442e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109442e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10948c60; body size 13 bytes.
#line 1 "ENTRY_10948c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10948c60(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x110) = (undefined1)(param_2);
  return;
}


// Reference entry 10948e90; body size 13 bytes.
#line 1 "ENTRY_10948e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10948e90(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x10c) = (undefined4)(param_2);
  return;
}


// Reference entry 10948ea0; body size 13 bytes.
#line 1 "ENTRY_10948ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10948ea0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x111) = (undefined1)(param_2);
  return;
}


// Reference entry 10948eb0; body size 60 bytes.
#line 1 "ENTRY_10948eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10948eb0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x112) == '\0') {
    uVar3 = (undefined4)(0x2d);
    param_2 = (int)(param_2 / 1000);
    uVar2 = (undefined4)(0x14);
    uVar1 = (undefined4)(thunk_FUN_10eacdd0(param_2,0x14,0x2d), 0);
    thunk_FUN_10ee48c0(uVar1);
    thunk_FUN_10ee2db0((int)(uVar1),(int)(param_2),(int)(uVar2),(int)(uVar3));
  }
  return;
}


// Reference entry 10948f00; body size 6 bytes.
#line 1 "ENTRY_10948f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10948f00(void)

{
  return (undefined4)(DAT_121a3a78);
}


// Reference entry 10948f10; body size 6 bytes.
#line 1 "ENTRY_10948f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10948f10(void)

{
  return (undefined4)(DAT_121a3a7c);
}


// Reference entry 10948f20; body size 6 bytes.
#line 1 "ENTRY_10948f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10948f20(void)

{
  return (undefined4)(DAT_121a3a84);
}


// Reference entry 10948f30; body size 6 bytes.
#line 1 "ENTRY_10948f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10948f30(void)

{
  return (undefined4)(DAT_121a3a88);
}


// Reference entry 10948f40; body size 6 bytes.
#line 1 "ENTRY_10948f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10948f40(void)

{
  return (undefined4)(DAT_121a3a80);
}


// Reference entry 10948f50; body size 6 bytes.
#line 1 "ENTRY_10948f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10948f50(void)

{
  return (undefined4)(DAT_121a3a74);
}


// Reference entry 10948f70; body size 57 bytes.
#line 1 "ENTRY_10948f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10948f70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10949560; body size 104 bytes.
#line 1 "ENTRY_10949560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10949560(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionCarouselPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionCarouselPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionCarouselPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionCarouselPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  param_1[0x39] = (undefined4)(3);
  param_1[0x3a] = (undefined4)(3);
  param_1[0x3b] = (undefined4)(0);
  param_1[0x3c] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 109496f0; body size 67 bytes.
#line 1 "ENTRY_109496f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109496f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionErrorPage);
  param_1[0x38] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10949850; body size 57 bytes.
#line 1 "ENTRY_10949850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10949850(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionRemainingPlayers2Page);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionRemainingPlayers2Page);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionRemainingPlayers2Page);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionRemainingPlayers2Page);
  return (undefined4 *)(param_1);
}


// Reference entry 109499a0; body size 57 bytes.
#line 1 "ENTRY_109499a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109499a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionRemainingPlayersFinalPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionRemainingPlayersFinalPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionRemainingPlayersFinalPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionRemainingPlayersFinalPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10949af0; body size 57 bytes.
#line 1 "ENTRY_10949af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10949af0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionRemainingPlayersPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionRemainingPlayersPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionRemainingPlayersPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionRemainingPlayersPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10949c40; body size 57 bytes.
#line 1 "ENTRY_10949c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10949c40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionSettingsLaterPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionSettingsLaterPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionSettingsLaterPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCPlayerSelectionSettingsLaterPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1094a4a0; body size 38 bytes.
#line 1 "ENTRY_1094a4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a4a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCPlayerSelectionWizard__SCPlayerSelectionWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1094a4d0; body size 11 bytes.
#line 1 "ENTRY_1094a4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a4d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1094a4e0; body size 11 bytes.
#line 1 "ENTRY_1094a4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a4e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1094a4f0; body size 11 bytes.
#line 1 "ENTRY_1094a4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a4f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1094a500; body size 11 bytes.
#line 1 "ENTRY_1094a500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1094a510; body size 11 bytes.
#line 1 "ENTRY_1094a510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a510(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1094a520; body size 11 bytes.
#line 1 "ENTRY_1094a520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1094a5e0; body size 21 bytes.
#line 1 "ENTRY_1094a5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a5e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a78 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1094a600; body size 38 bytes.
#line 1 "ENTRY_1094a600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a600(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCPlayerSelectionWizard__SCPlayerSelectionWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1094a630; body size 21 bytes.
#line 1 "ENTRY_1094a630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a630(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a7c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1094a650; body size 38 bytes.
#line 1 "ENTRY_1094a650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a650(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCPlayerSelectionWizard__SCPlayerSelectionWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1094a680; body size 21 bytes.
#line 1 "ENTRY_1094a680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a680(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a84 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1094a6a0; body size 38 bytes.
#line 1 "ENTRY_1094a6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a6a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCPlayerSelectionWizard__SCPlayerSelectionWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1094a6d0; body size 21 bytes.
#line 1 "ENTRY_1094a6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a6d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a88 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1094a6f0; body size 38 bytes.
#line 1 "ENTRY_1094a6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a6f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCPlayerSelectionWizard__SCPlayerSelectionWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1094a720; body size 21 bytes.
#line 1 "ENTRY_1094a720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a720(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a80 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1094a740; body size 38 bytes.
#line 1 "ENTRY_1094a740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a740(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCPlayerSelectionWizard__SCPlayerSelectionWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1094a770; body size 21 bytes.
#line 1 "ENTRY_1094a770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1094a770(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3a74 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10952d20; body size 7 bytes.
#line 1 "ENTRY_10952d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10952d20(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x118));
}


// Reference entry 10952d30; body size 6 bytes.
#line 1 "ENTRY_10952d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10952d30(void)

{
  return (undefined4)(DAT_121a3a78);
}


// Reference entry 10952d40; body size 6 bytes.
#line 1 "ENTRY_10952d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10952d40(void)

{
  return (undefined4)(DAT_121a3a7c);
}


// Reference entry 10952d50; body size 6 bytes.
#line 1 "ENTRY_10952d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10952d50(void)

{
  return (undefined4)(DAT_121a3a84);
}


// Reference entry 10952d60; body size 6 bytes.
#line 1 "ENTRY_10952d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10952d60(void)

{
  return (undefined4)(DAT_121a3a88);
}


// Reference entry 10952d70; body size 6 bytes.
#line 1 "ENTRY_10952d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10952d70(void)

{
  return (undefined4)(DAT_121a3a80);
}


// Reference entry 10952d80; body size 6 bytes.
#line 1 "ENTRY_10952d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10952d80(void)

{
  return (undefined4)(DAT_121a3a74);
}


// Reference entry 10952d90; body size 6 bytes.
#line 1 "ENTRY_10952d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10952d90(void)

{
  return (undefined4)(DAT_121a3a8c);
}


// Reference entry 10952db0; body size 5 bytes.
#line 1 "ENTRY_10952db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10952db0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10952dc0; body size 5 bytes.
#line 1 "ENTRY_10952dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10952dc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109543c0; body size 6 bytes.
#line 1 "ENTRY_109543c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109543c0(void)

{
  return (undefined4)(DAT_121a3ae0);
}


// Reference entry 109543d0; body size 6 bytes.
#line 1 "ENTRY_109543d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109543d0(void)

{
  return (undefined4)(DAT_121a3adc);
}


// Reference entry 109543f0; body size 57 bytes.
#line 1 "ENTRY_109543f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109543f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10954620; body size 57 bytes.
#line 1 "ENTRY_10954620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10954620(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPortablePreparationChargeToContinuePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCPortablePreparationChargeToContinuePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCPortablePreparationChargeToContinuePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCPortablePreparationChargeToContinuePage);
  return (undefined4 *)(param_1);
}


// Reference entry 10954770; body size 57 bytes.
#line 1 "ENTRY_10954770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10954770(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPortablePreparationMustChargeFirstPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCPortablePreparationMustChargeFirstPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCPortablePreparationMustChargeFirstPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCPortablePreparationMustChargeFirstPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10954c30; body size 38 bytes.
#line 1 "ENTRY_10954c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10954c30(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCPortablePreparationWizard__SCPortablePreparationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10954c60; body size 11 bytes.
#line 1 "ENTRY_10954c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10954c60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10954c70; body size 11 bytes.
#line 1 "ENTRY_10954c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10954c70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10954c90; body size 38 bytes.
#line 1 "ENTRY_10954c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10954c90(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCPortablePreparationWizard__SCPortablePreparationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10954cc0; body size 21 bytes.
#line 1 "ENTRY_10954cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10954cc0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3ae0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10954ce0; body size 38 bytes.
#line 1 "ENTRY_10954ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10954ce0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCPortablePreparationWizard__SCPortablePreparationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10954d10; body size 21 bytes.
#line 1 "ENTRY_10954d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10954d10(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3adc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109577a0; body size 6 bytes.
#line 1 "ENTRY_109577a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109577a0(void)

{
  return (undefined4)(DAT_121a3ae0);
}


// Reference entry 109577b0; body size 6 bytes.
#line 1 "ENTRY_109577b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109577b0(void)

{
  return (undefined4)(DAT_121a3adc);
}


// Reference entry 109577c0; body size 6 bytes.
#line 1 "ENTRY_109577c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109577c0(void)

{
  return (undefined4)(DAT_121a3ad8);
}


// Reference entry 109577e0; body size 5 bytes.
#line 1 "ENTRY_109577e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109577e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109577f0; body size 5 bytes.
#line 1 "ENTRY_109577f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109577f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10957cd0; body size 6 bytes.
#line 1 "ENTRY_10957cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10957cd0(void)

{
  return (undefined4)(DAT_121a3b30);
}


// Reference entry 10957ce0; body size 6 bytes.
#line 1 "ENTRY_10957ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10957ce0(void)

{
  return (undefined4)(DAT_121a3b34);
}


// Reference entry 10957d00; body size 57 bytes.
#line 1 "ENTRY_10957d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10957d00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10958040; body size 57 bytes.
#line 1 "ENTRY_10958040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10958040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPortableStatusIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCPortableStatusIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCPortableStatusIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCPortableStatusIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109586c0; body size 38 bytes.
#line 1 "ENTRY_109586c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109586c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCPortableStatusWizard__SCPortableStatusWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109586f0; body size 11 bytes.
#line 1 "ENTRY_109586f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109586f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10958700; body size 11 bytes.
#line 1 "ENTRY_10958700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10958700(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10958710; body size 38 bytes.
#line 1 "ENTRY_10958710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10958710(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_10958740(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80<>(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0<>(param_1 + 0x34,*(undefined4 *)(param_1[0x34] + 4));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80(param_1 + 0x32,*(undefined4 *)(param_1[0x32] + 4));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80<>(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10958770; body size 21 bytes.
#line 1 "ENTRY_10958770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10958770(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3b30 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10958790; body size 38 bytes.
#line 1 "ENTRY_10958790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10958790(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_109587c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3b34 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1095af40; body size 6 bytes.
#line 1 "ENTRY_1095af40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1095af40(void)

{
  return (undefined4)(DAT_121a3b30);
}


// Reference entry 1095af50; body size 6 bytes.
#line 1 "ENTRY_1095af50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1095af50(void)

{
  return (undefined4)(DAT_121a3b34);
}


// Reference entry 1095af60; body size 6 bytes.
#line 1 "ENTRY_1095af60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1095af60(void)

{
  return (undefined4)(DAT_121a3b2c);
}


// Reference entry 1095af70; body size 5 bytes.
#line 1 "ENTRY_1095af70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1095af70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 1095af90; body size 5 bytes.
#line 1 "ENTRY_1095af90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1095af90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1095afa0; body size 5 bytes.
#line 1 "ENTRY_1095afa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1095afa0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1095b1f0; body size 3 bytes.
#line 1 "ENTRY_1095b1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1095b1f0(void)

{
  return;
}


// Reference entry 1095b200; body size 87 bytes.
#line 1 "ENTRY_1095b200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1095b200(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,
                 char *param_6)

{
  while ((((uint *)(param_2) != (uint *)(param_4) || (param_3 != param_5)) &&
         (((*param_2 & 1 << ((byte)param_3 & 0x1f)) != 0) != (bool)*param_6))) {
    if (param_3 < 0x1f) {
      param_3 = (uint)(param_3 + 1);
    }
    else {
      param_3 = (uint)(0);
      param_2 = (uint *)(param_2 + 1);
    }
  }
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return;
}


// Reference entry 1095b270; body size 75 bytes.
#line 1 "ENTRY_1095b270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1095b270(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,
                 char *param_6)

{
  while ((((uint *)(param_2) != (uint *)(param_4) || (param_3 != param_5)) &&
         (((*param_2 & 1 << ((byte)param_3 & 0x1f)) != 0) != (bool)*param_6))) {
    if (param_3 < 0x1f) {
      param_3 = (uint)(param_3 + 1);
    }
    else {
      param_3 = (uint)(0);
      param_2 = (uint *)(param_2 + 1);
    }
  }
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return;
}


// Reference entry 1095b2d0; body size 5 bytes.
#line 1 "ENTRY_1095b2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1095b2d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1095b2e0; body size 5 bytes.
#line 1 "ENTRY_1095b2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1095b2e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1095b2f0; body size 19 bytes.
#line 1 "ENTRY_1095b2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_1095b2f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2[1]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1095b310; body size 75 bytes.
#line 1 "ENTRY_1095b310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1095b310(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,
                 char *param_6)

{
  while ((((uint *)(param_2) != (uint *)(param_4) || (param_3 != param_5)) &&
         (((*param_2 & 1 << ((byte)param_3 & 0x1f)) != 0) != (bool)*param_6))) {
    if (param_3 < 0x1f) {
      param_3 = (uint)(param_3 + 1);
    }
    else {
      param_3 = (uint)(0);
      param_2 = (uint *)(param_2 + 1);
    }
  }
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return;
}


// Reference entry 1095b370; body size 5 bytes.
#line 1 "ENTRY_1095b370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1095b370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1095b380; body size 6 bytes.
#line 1 "ENTRY_1095b380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1095b380(void)

{
  return (undefined4)(DAT_121a3b80);
}


// Reference entry 1095b390; body size 6 bytes.
#line 1 "ENTRY_1095b390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1095b390(void)

{
  return (undefined4)(DAT_121a3b88);
}


// Reference entry 1095b3a0; body size 6 bytes.
#line 1 "ENTRY_1095b3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1095b3a0(void)

{
  return (undefined4)(DAT_121a3b8c);
}


// Reference entry 1095b3b0; body size 6 bytes.
#line 1 "ENTRY_1095b3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1095b3b0(void)

{
  return (undefined4)(DAT_121a3b84);
}


// Reference entry 1095b3d0; body size 57 bytes.
#line 1 "ENTRY_1095b3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1095b3d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1095b7e0; body size 16 bytes.
#line 1 "ENTRY_1095b7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1095b7e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1095b820; body size 84 bytes.
#line 1 "ENTRY_1095b820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1095b820(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneCheckPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneCheckPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneCheckPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneCheckPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1095b990; body size 127 bytes.
#line 1 "ENTRY_1095b990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1095b990(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneSwitchCheckPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneSwitchCheckPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneSwitchCheckPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneSwitchCheckPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  param_1[0x3b] = (undefined4)(0);
  param_1[0x3c] = (undefined4)(0);
  param_1[0x3d] = (undefined4)(0);
  param_1[0x3e] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1095bb30; body size 57 bytes.
#line 1 "ENTRY_1095bb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1095bb30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneSwitchTogglePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneSwitchTogglePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneSwitchTogglePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneSwitchTogglePage);
  return (undefined4 *)(param_1);
}


// Reference entry 1095bc80; body size 84 bytes.
#line 1 "ENTRY_1095bc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1095bc80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneTogglePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneTogglePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneTogglePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCProductMicrophoneTogglePage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1095c360; body size 38 bytes.
#line 1 "ENTRY_1095c360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1095c360(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCProductMicrophoneWizard__SCProductMicrophoneWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1095c390; body size 11 bytes.
#line 1 "ENTRY_1095c390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1095c390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1095c3a0; body size 11 bytes.
#line 1 "ENTRY_1095c3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1095c3a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1095c3b0; body size 11 bytes.
#line 1 "ENTRY_1095c3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1095c3b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1095c3c0; body size 11 bytes.
#line 1 "ENTRY_1095c3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1095c3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1095c4e0; body size 21 bytes.
#line 1 "ENTRY_1095c4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1095c4e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3b80 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1095c5c0; body size 21 bytes.
#line 1 "ENTRY_1095c5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1095c5c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3b88 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1095c5e0; body size 38 bytes.
#line 1 "ENTRY_1095c5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1095c5e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCProductMicrophoneWizard__SCProductMicrophoneWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1095c610; body size 21 bytes.
#line 1 "ENTRY_1095c610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1095c610(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3b8c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1095c6e0; body size 21 bytes.
#line 1 "ENTRY_1095c6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1095c6e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3b84 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1095c800; body size 3 bytes.
#line 1 "ENTRY_1095c800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1095c800(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1095c810; body size 3 bytes.
#line 1 "ENTRY_1095c810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1095c810(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1095c820; body size 20 bytes.
#line 1 "ENTRY_1095c820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1095c820(undefined4 *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)((*(uint *)*param_1 & 1 << ((byte)param_1[1] & 0x1f)) != 0)));
}


// Reference entry 1095d030; body size 18 bytes.
#line 1 "ENTRY_1095d030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1095d030(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 1095d050; body size 13 bytes.
#line 1 "ENTRY_1095d050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1095d050(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  param_1[3] = (undefined4)(0);
  return;
}


// Reference entry 1095da70; body size 3 bytes.
#line 1 "ENTRY_1095da70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1095da70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1095da80; body size 9 bytes.
#line 1 "ENTRY_1095da80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1095da80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1095da90; body size 69 bytes.
#line 1 "ENTRY_1095da90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1095da90(int *param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[3]);
  if (((int)uVar1 < 0) && (uVar1 != 0)) {
    *param_2 = (int)(*param_1 - ((~uVar1 >> 5) * 4 + 4));
    param_2[1] = (int)(uVar1 & 0x1f);
    return;
  }
  *param_2 = (int)(*param_1 + (uVar1 >> 5) * 4);
  param_2[1] = (int)(uVar1 & 0x1f);
  return;
}


// Reference entry 10960d90; body size 6 bytes.
#line 1 "ENTRY_10960d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10960d90(void)

{
  return (undefined4)(DAT_121a3b80);
}


// Reference entry 10960da0; body size 6 bytes.
#line 1 "ENTRY_10960da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10960da0(void)

{
  return (undefined4)(DAT_121a3b88);
}


// Reference entry 10960db0; body size 6 bytes.
#line 1 "ENTRY_10960db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10960db0(void)

{
  return (undefined4)(DAT_121a3b8c);
}


// Reference entry 10960dc0; body size 6 bytes.
#line 1 "ENTRY_10960dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10960dc0(void)

{
  return (undefined4)(DAT_121a3b84);
}


// Reference entry 10960dd0; body size 6 bytes.
#line 1 "ENTRY_10960dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10960dd0(void)

{
  return (undefined4)(DAT_121a3b90);
}


// Reference entry 10960de0; body size 7 bytes.
#line 1 "ENTRY_10960de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10960de0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xf4));
}


// Reference entry 10960e00; body size 5 bytes.
#line 1 "ENTRY_10960e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10960e00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10960e10; body size 5 bytes.
#line 1 "ENTRY_10960e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10960e10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10961a90; body size 3 bytes.
#line 1 "ENTRY_10961a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10961a90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10961aa0; body size 6 bytes.
#line 1 "ENTRY_10961aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10961aa0(void)

{
  return (undefined4)(DAT_121a3be0);
}


// Reference entry 10961ab0; body size 6 bytes.
#line 1 "ENTRY_10961ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10961ab0(void)

{
  return (undefined4)(DAT_121a3bd8);
}


// Reference entry 10961ac0; body size 6 bytes.
#line 1 "ENTRY_10961ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10961ac0(void)

{
  return (undefined4)(DAT_121a3bdc);
}


// Reference entry 10961ae0; body size 57 bytes.
#line 1 "ENTRY_10961ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10961ae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10961e00; body size 30 bytes.
#line 1 "ENTRY_10961e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10961e00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10ec06d0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizFlare);
  return (undefined4 *)(param_1);
}


// Reference entry 10961e30; body size 57 bytes.
#line 1 "ENTRY_10961e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10961e30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductOnboardingCarouselPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCProductOnboardingCarouselPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCProductOnboardingCarouselPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCProductOnboardingCarouselPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10961f80; body size 64 bytes.
#line 1 "ENTRY_10961f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10961f80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductOnboardingIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCProductOnboardingIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCProductOnboardingIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCProductOnboardingIntroPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 109620d0; body size 57 bytes.
#line 1 "ENTRY_109620d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109620d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductOnboardingMissingAssetsErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCProductOnboardingMissingAssetsErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCProductOnboardingMissingAssetsErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCProductOnboardingMissingAssetsErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10962630; body size 33 bytes.
#line 1 "ENTRY_10962630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10962630(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 10962660; body size 38 bytes.
#line 1 "ENTRY_10962660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10962660(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCProductOnboardingWizard__SCProductOnboardingWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10962690; body size 11 bytes.
#line 1 "ENTRY_10962690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10962690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109626a0; body size 11 bytes.
#line 1 "ENTRY_109626a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109626a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109626b0; body size 11 bytes.
#line 1 "ENTRY_109626b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109626b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10962750; body size 38 bytes.
#line 1 "ENTRY_10962750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10962750(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCProductOnboardingWizard__SCProductOnboardingWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10962780; body size 21 bytes.
#line 1 "ENTRY_10962780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10962780(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3be0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109627a0; body size 38 bytes.
#line 1 "ENTRY_109627a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109627a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCProductOnboardingWizard__SCProductOnboardingWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109627d0; body size 21 bytes.
#line 1 "ENTRY_109627d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109627d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3bd8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109627f0; body size 38 bytes.
#line 1 "ENTRY_109627f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109627f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCProductOnboardingWizard__SCProductOnboardingWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10962820; body size 21 bytes.
#line 1 "ENTRY_10962820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10962820(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3bdc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10966380; body size 6 bytes.
#line 1 "ENTRY_10966380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10966380(void)

{
  return (undefined4)(DAT_121a3be0);
}


// Reference entry 10966390; body size 6 bytes.
#line 1 "ENTRY_10966390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10966390(void)

{
  return (undefined4)(DAT_121a3bd8);
}


// Reference entry 109663a0; body size 6 bytes.
#line 1 "ENTRY_109663a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109663a0(void)

{
  return (undefined4)(DAT_121a3bdc);
}


// Reference entry 109663b0; body size 6 bytes.
#line 1 "ENTRY_109663b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109663b0(void)

{
  return (undefined4)(DAT_121a3be4);
}


// Reference entry 109663d0; body size 5 bytes.
#line 1 "ENTRY_109663d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109663d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109663e0; body size 5 bytes.
#line 1 "ENTRY_109663e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109663e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10970520; body size 6 bytes.
#line 1 "ENTRY_10970520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10970520(void)

{
  return (undefined4)(DAT_121a3c38);
}


// Reference entry 10970530; body size 6 bytes.
#line 1 "ENTRY_10970530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10970530(void)

{
  return (undefined4)(DAT_121a3c34);
}


// Reference entry 10970550; body size 57 bytes.
#line 1 "ENTRY_10970550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10970550(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10970780; body size 57 bytes.
#line 1 "ENTRY_10970780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10970780(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductPlacementEmptyPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCProductPlacementEmptyPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCProductPlacementEmptyPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCProductPlacementEmptyPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109708d0; body size 77 bytes.
#line 1 "ENTRY_109708d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109708d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductPlacementOrientationIssuePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCProductPlacementOrientationIssuePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCProductPlacementOrientationIssuePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCProductPlacementOrientationIssuePage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10970d20; body size 38 bytes.
#line 1 "ENTRY_10970d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10970d20(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCProductPlacementWizard__SCProductPlacementWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10970d50; body size 11 bytes.
#line 1 "ENTRY_10970d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10970d50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10970d60; body size 11 bytes.
#line 1 "ENTRY_10970d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10970d60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10970d70; body size 38 bytes.
#line 1 "ENTRY_10970d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10970d70(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCProductPlacementWizard__SCProductPlacementWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10970da0; body size 21 bytes.
#line 1 "ENTRY_10970da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10970da0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3c38 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10970e70; body size 21 bytes.
#line 1 "ENTRY_10970e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10970e70(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3c34 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10970ef0; body size 12 bytes.
#line 1 "ENTRY_10970ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10970ef0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10972850; body size 6 bytes.
#line 1 "ENTRY_10972850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10972850(void)

{
  return (undefined4)(DAT_121a3c38);
}


// Reference entry 10972860; body size 6 bytes.
#line 1 "ENTRY_10972860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10972860(void)

{
  return (undefined4)(DAT_121a3c34);
}


// Reference entry 10972870; body size 6 bytes.
#line 1 "ENTRY_10972870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10972870(void)

{
  return (undefined4)(DAT_121a3c30);
}


// Reference entry 10972880; body size 7 bytes.
#line 1 "ENTRY_10972880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10972880(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xf4));
}


// Reference entry 109728a0; body size 5 bytes.
#line 1 "ENTRY_109728a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109728a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109728b0; body size 5 bytes.
#line 1 "ENTRY_109728b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109728b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10972fd0; body size 6 bytes.
#line 1 "ENTRY_10972fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10972fd0(void)

{
  return (undefined4)(DAT_121a3c84);
}


// Reference entry 10972fe0; body size 6 bytes.
#line 1 "ENTRY_10972fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10972fe0(void)

{
  return (undefined4)(DAT_121a3ca4);
}


// Reference entry 10972ff0; body size 6 bytes.
#line 1 "ENTRY_10972ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10972ff0(void)

{
  return (undefined4)(DAT_121a3c9c);
}


// Reference entry 10973000; body size 6 bytes.
#line 1 "ENTRY_10973000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10973000(void)

{
  return (undefined4)(DAT_121a3c80);
}


// Reference entry 10973010; body size 6 bytes.
#line 1 "ENTRY_10973010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10973010(void)

{
  return (undefined4)(DAT_121a3c88);
}


// Reference entry 10973020; body size 6 bytes.
#line 1 "ENTRY_10973020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10973020(void)

{
  return (undefined4)(DAT_121a3c7c);
}


// Reference entry 10973030; body size 6 bytes.
#line 1 "ENTRY_10973030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10973030(void)

{
  return (undefined4)(DAT_121a3c94);
}


// Reference entry 10973040; body size 6 bytes.
#line 1 "ENTRY_10973040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10973040(void)

{
  return (undefined4)(DAT_121a3c98);
}


// Reference entry 10973050; body size 6 bytes.
#line 1 "ENTRY_10973050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10973050(void)

{
  return (undefined4)(DAT_121a3c8c);
}


// Reference entry 10973060; body size 6 bytes.
#line 1 "ENTRY_10973060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10973060(void)

{
  return (undefined4)(DAT_121a3ca0);
}


// Reference entry 10973070; body size 6 bytes.
#line 1 "ENTRY_10973070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10973070(void)

{
  return (undefined4)(DAT_121a3c90);
}


// Reference entry 10973090; body size 57 bytes.
#line 1 "ENTRY_10973090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10973090(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10973d50; body size 141 bytes.
#line 1 "ENTRY_10973d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10973d50(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))(), 0);
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))(), 0);
  }
  uVar3 = (undefined4)(((SCVtbl_20_4*)((int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4))))->v((int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6)), 0);
  thunk_FUN_111c0760((int)(uVar2),(int)("urn:schemas-upnp-org:service:AVTransport:1"),(int)("BecomeCoordinatorOfStandaloneGroup"),(int)(uVar3),(int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTBecomeCoordinatorOfStandaloneGroupAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTBecomeCoordinatorOfStandaloneGroupAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTBecomeCoordinatorOfStandaloneGroupAIOOp);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x36f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10973e00; body size 64 bytes.
#line 1 "ENTRY_10973e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10973e00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCQuickTuneChoosePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneChoosePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneChoosePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneChoosePage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10973f50; body size 57 bytes.
#line 1 "ENTRY_10973f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10973f50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCQuickTuneDonePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneDonePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneDonePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneDonePage);
  return (undefined4 *)(param_1);
}


// Reference entry 109740a0; body size 57 bytes.
#line 1 "ENTRY_109740a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109740a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCQuickTuneErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109741f0; body size 57 bytes.
#line 1 "ENTRY_109741f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109741f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCQuickTuneIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10974340; body size 57 bytes.
#line 1 "ENTRY_10974340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10974340(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCQuickTunePlacementPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCQuickTunePlacementPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCQuickTunePlacementPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCQuickTunePlacementPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10974490; body size 57 bytes.
#line 1 "ENTRY_10974490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10974490(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCQuickTunePopupPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCQuickTunePopupPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCQuickTunePopupPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCQuickTunePopupPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10974a00; body size 66 bytes.
#line 1 "ENTRY_10974a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10974a00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCQuickTuneStartPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneStartPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneStartPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneStartPage);
  *(undefined2*)(param_1 + 0x38) = (undefined2)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10974b60; body size 57 bytes.
#line 1 "ENTRY_10974b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10974b60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCQuickTuneSuccessPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneSuccessPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneSuccessPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneSuccessPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10974cb0; body size 66 bytes.
#line 1 "ENTRY_10974cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10974cb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCQuickTuneTuningPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneTuningPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneTuningPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCQuickTuneTuningPage);
  *(undefined2*)(param_1 + 0x38) = (undefined2)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10975910; body size 38 bytes.
#line 1 "ENTRY_10975910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975910(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCQuickTuneWizard__SCQuickTuneWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10975940; body size 11 bytes.
#line 1 "ENTRY_10975940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10975950; body size 11 bytes.
#line 1 "ENTRY_10975950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10975960; body size 11 bytes.
#line 1 "ENTRY_10975960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10975970; body size 11 bytes.
#line 1 "ENTRY_10975970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10975980; body size 11 bytes.
#line 1 "ENTRY_10975980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10975990; body size 11 bytes.
#line 1 "ENTRY_10975990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109759a0; body size 11 bytes.
#line 1 "ENTRY_109759a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109759a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109759b0; body size 11 bytes.
#line 1 "ENTRY_109759b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109759b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109759c0; body size 11 bytes.
#line 1 "ENTRY_109759c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109759c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109759d0; body size 11 bytes.
#line 1 "ENTRY_109759d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109759d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109759e0; body size 11 bytes.
#line 1 "ENTRY_109759e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109759e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109759f0; body size 38 bytes.
#line 1 "ENTRY_109759f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109759f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975a20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_10975a50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTBecomeCoordinatorOfStandaloneGroupAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTBecomeCoordinatorOfStandaloneGroupAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTBecomeCoordinatorOfStandaloneGroupAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)(((0x0)))) {
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


// Reference entry 10975a80; body size 38 bytes.
#line 1 "ENTRY_10975a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975a80(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCQuickTuneWizard__SCQuickTuneWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10975ab0; body size 21 bytes.
#line 1 "ENTRY_10975ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975ab0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3c84 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10975ad0; body size 38 bytes.
#line 1 "ENTRY_10975ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975ad0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCQuickTuneWizard__SCQuickTuneWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10975b00; body size 21 bytes.
#line 1 "ENTRY_10975b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975b00(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3ca4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10975b20; body size 38 bytes.
#line 1 "ENTRY_10975b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975b20(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCQuickTuneWizard__SCQuickTuneWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10975b50; body size 21 bytes.
#line 1 "ENTRY_10975b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975b50(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3c9c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10975b70; body size 38 bytes.
#line 1 "ENTRY_10975b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975b70(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCQuickTuneWizard__SCQuickTuneWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10975ba0; body size 21 bytes.
#line 1 "ENTRY_10975ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975ba0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3c80 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10975bc0; body size 38 bytes.
#line 1 "ENTRY_10975bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975bc0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCQuickTuneWizard__SCQuickTuneWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10975bf0; body size 21 bytes.
#line 1 "ENTRY_10975bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975bf0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3c88 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10975c10; body size 38 bytes.
#line 1 "ENTRY_10975c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975c10(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCQuickTuneWizard__SCQuickTuneWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10975c40; body size 21 bytes.
#line 1 "ENTRY_10975c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975c40(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3c7c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10975c60; body size 38 bytes.
#line 1 "ENTRY_10975c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975c60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_10975c90(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3c94 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10975cb0; body size 38 bytes.
#line 1 "ENTRY_10975cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975cb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_10975ce0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3c98 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10975d00; body size 38 bytes.
#line 1 "ENTRY_10975d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975d00(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCQuickTuneWizard__SCQuickTuneWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10975d30; body size 21 bytes.
#line 1 "ENTRY_10975d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975d30(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3c8c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10975d50; body size 38 bytes.
#line 1 "ENTRY_10975d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975d50(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCQuickTuneWizard__SCQuickTuneWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10975d80; body size 21 bytes.
#line 1 "ENTRY_10975d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975d80(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3ca0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10975da0; body size 38 bytes.
#line 1 "ENTRY_10975da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975da0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCQuickTuneWizard__SCQuickTuneWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10975dd0; body size 21 bytes.
#line 1 "ENTRY_10975dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10975dd0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3c90 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10977980; body size 3 bytes.
#line 1 "ENTRY_10977980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10977980(void)

{
  return;
}


// Reference entry 1097ba80; body size 7 bytes.
#line 1 "ENTRY_1097ba80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1097ba80(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf4));
}


// Reference entry 1097e360; body size 6 bytes.
#line 1 "ENTRY_1097e360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1097e360(void)

{
  return (undefined4)(DAT_121a3c84);
}


// Reference entry 1097e370; body size 6 bytes.
#line 1 "ENTRY_1097e370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1097e370(void)

{
  return (undefined4)(DAT_121a3ca4);
}


// Reference entry 1097e380; body size 6 bytes.
#line 1 "ENTRY_1097e380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1097e380(void)

{
  return (undefined4)(DAT_121a3c9c);
}


// Reference entry 1097e390; body size 6 bytes.
#line 1 "ENTRY_1097e390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1097e390(void)

{
  return (undefined4)(DAT_121a3c80);
}


// Reference entry 1097e3a0; body size 6 bytes.
#line 1 "ENTRY_1097e3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1097e3a0(void)

{
  return (undefined4)(DAT_121a3c88);
}


// Reference entry 1097e3b0; body size 6 bytes.
#line 1 "ENTRY_1097e3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1097e3b0(void)

{
  return (undefined4)(DAT_121a3c7c);
}


// Reference entry 1097e3c0; body size 6 bytes.
#line 1 "ENTRY_1097e3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1097e3c0(void)

{
  return (undefined4)(DAT_121a3c94);
}


// Reference entry 1097e3d0; body size 6 bytes.
#line 1 "ENTRY_1097e3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1097e3d0(void)

{
  return (undefined4)(DAT_121a3c98);
}


// Reference entry 1097e3e0; body size 6 bytes.
#line 1 "ENTRY_1097e3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1097e3e0(void)

{
  return (undefined4)(DAT_121a3c8c);
}


// Reference entry 1097e3f0; body size 6 bytes.
#line 1 "ENTRY_1097e3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1097e3f0(void)

{
  return (undefined4)(DAT_121a3ca0);
}


// Reference entry 1097e400; body size 6 bytes.
#line 1 "ENTRY_1097e400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1097e400(void)

{
  return (undefined4)(DAT_121a3c90);
}


// Reference entry 1097e410; body size 6 bytes.
#line 1 "ENTRY_1097e410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1097e410(void)

{
  return (undefined4)(DAT_121a3ca8);
}


// Reference entry 1097e420; body size 5 bytes.
#line 1 "ENTRY_1097e420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1097e420(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 1097e430; body size 5 bytes.
#line 1 "ENTRY_1097e430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1097e430(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 1097e440; body size 5 bytes.
#line 1 "ENTRY_1097e440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1097e440(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 1097e460; body size 5 bytes.
#line 1 "ENTRY_1097e460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1097e460(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1097e470; body size 5 bytes.
#line 1 "ENTRY_1097e470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1097e470(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1097e480; body size 5 bytes.
#line 1 "ENTRY_1097e480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1097e480(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1097e490; body size 5 bytes.
#line 1 "ENTRY_1097e490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1097e490(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1097fa80; body size 13 bytes.
#line 1 "ENTRY_1097fa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1097fa80(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xf4) = (undefined4)(param_2);
  return;
}


// Reference entry 10980950; body size 6 bytes.
#line 1 "ENTRY_10980950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10980950(void)

{
  return (undefined4)(DAT_121a3d10);
}


// Reference entry 10980960; body size 6 bytes.
#line 1 "ENTRY_10980960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10980960(void)

{
  return (undefined4)(DAT_121a3cfc);
}


// Reference entry 10980970; body size 6 bytes.
#line 1 "ENTRY_10980970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10980970(void)

{
  return (undefined4)(DAT_121a3d00);
}


// Reference entry 10980980; body size 6 bytes.
#line 1 "ENTRY_10980980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10980980(void)

{
  return (undefined4)(DAT_121a3d0c);
}


// Reference entry 10980990; body size 6 bytes.
#line 1 "ENTRY_10980990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10980990(void)

{
  return (undefined4)(DAT_121a3d08);
}


// Reference entry 109809a0; body size 6 bytes.
#line 1 "ENTRY_109809a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109809a0(void)

{
  return (undefined4)(DAT_121a3d04);
}


// Reference entry 109809b0; body size 6 bytes.
#line 1 "ENTRY_109809b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109809b0(void)

{
  return (undefined4)(DAT_121a3d14);
}


// Reference entry 109809d0; body size 57 bytes.
#line 1 "ENTRY_109809d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109809d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 109813e0; body size 57 bytes.
#line 1 "ENTRY_109813e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109813e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductFatalVerificationErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductFatalVerificationErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductFatalVerificationErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductFatalVerificationErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10981530; body size 57 bytes.
#line 1 "ENTRY_10981530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10981530(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10981680; body size 77 bytes.
#line 1 "ENTRY_10981680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10981680(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductLookUpV1CertPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductLookUpV1CertPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductLookUpV1CertPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductLookUpV1CertPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10981e10; body size 57 bytes.
#line 1 "ENTRY_10981e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10981e10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductVanishedProductErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductVanishedProductErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductVanishedProductErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCReconfirmProductVanishedProductErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109826f0; body size 38 bytes.
#line 1 "ENTRY_109826f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109826f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCReconfirmProductWizard__SCReconfirmProductWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10982720; body size 11 bytes.
#line 1 "ENTRY_10982720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10982730; body size 11 bytes.
#line 1 "ENTRY_10982730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982730(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10982740; body size 11 bytes.
#line 1 "ENTRY_10982740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10982750; body size 11 bytes.
#line 1 "ENTRY_10982750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982750(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10982760; body size 11 bytes.
#line 1 "ENTRY_10982760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982760(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10982770; body size 11 bytes.
#line 1 "ENTRY_10982770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982770(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10982780; body size 11 bytes.
#line 1 "ENTRY_10982780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982780(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10982800; body size 38 bytes.
#line 1 "ENTRY_10982800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */




void __fastcall FUN_10982830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_10982860(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_10982900(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10982930; body size 21 bytes.
#line 1 "ENTRY_10982930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982930(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3d10 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10982950; body size 38 bytes.
#line 1 "ENTRY_10982950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982950(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCReconfirmProductWizard__SCReconfirmProductWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10982980; body size 21 bytes.
#line 1 "ENTRY_10982980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982980(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3cfc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10982a50; body size 21 bytes.
#line 1 "ENTRY_10982a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982a50(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3d00 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10982a70; body size 38 bytes.
#line 1 "ENTRY_10982a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982a70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_10982aa0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3d0c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10982ac0; body size 38 bytes.
#line 1 "ENTRY_10982ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982ac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


void __fastcall FUN_10982af0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3d08 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10982b10; body size 38 bytes.
#line 1 "ENTRY_10982b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982b10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


template<class... A> int FUN_10982b40(A...)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3d04 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10982b60; body size 38 bytes.
#line 1 "ENTRY_10982b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982b60(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCReconfirmProductWizard__SCReconfirmProductWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10982b90; body size 21 bytes.
#line 1 "ENTRY_10982b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10982b90(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3d14 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10987e90; body size 6 bytes.
#line 1 "ENTRY_10987e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10987e90(void)

{
  return (undefined4)(DAT_121a3d10);
}


// Reference entry 10987ea0; body size 6 bytes.
#line 1 "ENTRY_10987ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10987ea0(void)

{
  return (undefined4)(DAT_121a3cfc);
}


// Reference entry 10987eb0; body size 6 bytes.
#line 1 "ENTRY_10987eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10987eb0(void)

{
  return (undefined4)(DAT_121a3d00);
}


// Reference entry 10987ec0; body size 6 bytes.
#line 1 "ENTRY_10987ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10987ec0(void)

{
  return (undefined4)(DAT_121a3d0c);
}


// Reference entry 10987ed0; body size 6 bytes.
#line 1 "ENTRY_10987ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10987ed0(void)

{
  return (undefined4)(DAT_121a3d08);
}


// Reference entry 10987ee0; body size 6 bytes.
#line 1 "ENTRY_10987ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10987ee0(void)

{
  return (undefined4)(DAT_121a3d04);
}


// Reference entry 10987ef0; body size 6 bytes.
#line 1 "ENTRY_10987ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10987ef0(void)

{
  return (undefined4)(DAT_121a3d14);
}


// Reference entry 10987f00; body size 6 bytes.
#line 1 "ENTRY_10987f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10987f00(void)

{
  return (undefined4)(DAT_121a3cf8);
}


// Reference entry 10987f10; body size 5 bytes.
#line 1 "ENTRY_10987f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987f10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10987f20; body size 5 bytes.
#line 1 "ENTRY_10987f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987f20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10987f30; body size 5 bytes.
#line 1 "ENTRY_10987f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987f30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10987f40; body size 5 bytes.
#line 1 "ENTRY_10987f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987f40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10987f50; body size 5 bytes.
#line 1 "ENTRY_10987f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987f50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10987f60; body size 5 bytes.
#line 1 "ENTRY_10987f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987f60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 10987f80; body size 5 bytes.
#line 1 "ENTRY_10987f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987f80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10987f90; body size 5 bytes.
#line 1 "ENTRY_10987f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987f90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10987fa0; body size 5 bytes.
#line 1 "ENTRY_10987fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987fa0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10987fb0; body size 5 bytes.
#line 1 "ENTRY_10987fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987fb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10987fc0; body size 5 bytes.
#line 1 "ENTRY_10987fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987fc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10987fd0; body size 5 bytes.
#line 1 "ENTRY_10987fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987fd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10987fe0; body size 5 bytes.
#line 1 "ENTRY_10987fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987fe0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10987ff0; body size 5 bytes.
#line 1 "ENTRY_10987ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10987ff0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109887f0; body size 28 bytes.
#line 1 "ENTRY_109887f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109887f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    ((SCVtbl_2_0*)(piVar1))->v();
    return;
  }
  return;
}


// Reference entry 10988900; body size 91 bytes.
#line 1 "ENTRY_10988900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10988900(int *param_2)
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
  if ((int *)(piVar2) != (int *)(0x0)) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    ((SCVtbl_2_0*)(piVar2))->v();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)(((SCVtbl_3_0*)(piVar1))->v(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10988980; body size 26 bytes.
#line 1 "ENTRY_10988980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10988980(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 109889a0; body size 91 bytes.
#line 1 "ENTRY_109889a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_109889a0(int *param_2)
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
  if ((int *)(piVar2) != (int *)(0x0)) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    ((SCVtbl_2_0*)(piVar2))->v();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)(((SCVtbl_3_0*)(piVar1))->v(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10988b40; body size 6 bytes.
#line 1 "ENTRY_10988b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10988b40(void)

{
  return (undefined4)(DAT_121a3d6c);
}


// Reference entry 10988b50; body size 6 bytes.
#line 1 "ENTRY_10988b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10988b50(void)

{
  return (undefined4)(DAT_121a3d68);
}


// Reference entry 10988dd0; body size 57 bytes.
#line 1 "ENTRY_10988dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10988dd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10989020; body size 57 bytes.
#line 1 "ENTRY_10989020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10989020(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRegisterProductSecureRegistrationErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCRegisterProductSecureRegistrationErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCRegisterProductSecureRegistrationErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCRegisterProductSecureRegistrationErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10989170; body size 57 bytes.
#line 1 "ENTRY_10989170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10989170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRegisterProductSecureRegistrationPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCRegisterProductSecureRegistrationPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCRegisterProductSecureRegistrationPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCRegisterProductSecureRegistrationPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10989640; body size 38 bytes.
#line 1 "ENTRY_10989640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10989640(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCRegisterProductWizard__SCRegisterProductWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10989670; body size 11 bytes.
#line 1 "ENTRY_10989670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10989670(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10989680; body size 11 bytes.
#line 1 "ENTRY_10989680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10989680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109897c0; body size 38 bytes.
#line 1 "ENTRY_109897c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109897c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCRegisterProductWizard__SCRegisterProductWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109897f0; body size 21 bytes.
#line 1 "ENTRY_109897f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109897f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3d6c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10989810; body size 38 bytes.
#line 1 "ENTRY_10989810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10989810(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCRegisterProductWizard__SCRegisterProductWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10989840; body size 21 bytes.
#line 1 "ENTRY_10989840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10989840(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3d68 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10989980; body size 7 bytes.
#line 1 "ENTRY_10989980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10989980(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10989990; body size 3 bytes.
#line 1 "ENTRY_10989990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10989990(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 109899a0; body size 3 bytes.
#line 1 "ENTRY_109899a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109899a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1098a120; body size 9 bytes.
#line 1 "ENTRY_1098a120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1098a120(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1098a130; body size 9 bytes.
#line 1 "ENTRY_1098a130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1098a130(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1098b380; body size 23 bytes.
#line 1 "ENTRY_1098b380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1098b380(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x100));
  return (SCStr *)(param_2);
}


// Reference entry 1098c920; body size 6 bytes.
#line 1 "ENTRY_1098c920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098c920(void)

{
  return (undefined4)(DAT_121a3d6c);
}


// Reference entry 1098c930; body size 6 bytes.
#line 1 "ENTRY_1098c930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098c930(void)

{
  return (undefined4)(DAT_121a3d68);
}


// Reference entry 1098c940; body size 6 bytes.
#line 1 "ENTRY_1098c940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098c940(void)

{
  return (undefined4)(DAT_121a3d64);
}


// Reference entry 1098c960; body size 5 bytes.
#line 1 "ENTRY_1098c960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1098c960(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1098c970; body size 5 bytes.
#line 1 "ENTRY_1098c970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1098c970(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1098d600; body size 3 bytes.
#line 1 "ENTRY_1098d600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1098d600(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1098d610; body size 28 bytes.
#line 1 "ENTRY_1098d610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1098d610(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    ((SCVtbl_2_0*)(piVar1))->v();
    return;
  }
  return;
}


// Reference entry 1098d640; body size 20 bytes.
#line 1 "ENTRY_1098d640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1098d640(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
                    
                    
    ((SCVtbl_2_0*)(piVar1))->v();
    return;
  }
  return;
}


// Reference entry 1098d660; body size 18 bytes.
#line 1 "ENTRY_1098d660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1098d660(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1098d680; body size 22 bytes.
#line 1 "ENTRY_1098d680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098d680(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1098d6a0; body size 18 bytes.
#line 1 "ENTRY_1098d6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1098d6a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1098d6c0; body size 22 bytes.
#line 1 "ENTRY_1098d6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098d6c0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1098d6e0; body size 18 bytes.
#line 1 "ENTRY_1098d6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1098d6e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1098d7f0; body size 22 bytes.
#line 1 "ENTRY_1098d7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098d7f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1098d810; body size 18 bytes.
#line 1 "ENTRY_1098d810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1098d810(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1098d950; body size 91 bytes.
#line 1 "ENTRY_1098d950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1098d950(int *param_2)
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
  if ((int *)(piVar2) != (int *)(0x0)) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    ((SCVtbl_2_0*)(piVar2))->v();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)(((SCVtbl_3_0*)(piVar1))->v(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 1098da50; body size 25 bytes.
#line 1 "ENTRY_1098da50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1098da50(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 1098dc00; body size 13 bytes.
#line 1 "ENTRY_1098dc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1098dc00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1098dc10; body size 13 bytes.
#line 1 "ENTRY_1098dc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1098dc10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1098dc20; body size 113 bytes.
#line 1 "ENTRY_1098dc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1098dc20(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_1098dcb0((int)(*(undefined4 *)(*param_2 + 4)),(int)(*param_1),(int)(param_3)), 0);
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


// Reference entry 1098dee0; body size 3 bytes.
#line 1 "ENTRY_1098dee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1098dee0(void)

{
  return;
}


// Reference entry 1098e2e0; body size 83 bytes.
#line 1 "ENTRY_1098e2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1098e2e0(int *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  
  iVar2 = (int)(*param_1);
  puVar4 = (undefined4 *)(*(undefined4 **)(iVar2 + 4), 0);
  *param_2 = (int)((int)puVar4);
  cVar1 = (char)(*(char *)((int)puVar4 + 0xd));
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar2);
  while (cVar1 == '\0') {
    *param_2 = (int)((int)puVar4);
    bVar3 = (bool)(((SCStr *)((SCStr *)(puVar4 + 4)))->op_lt(param_3), 0);
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


// Reference entry 1098e350; body size 15 bytes.
#line 1 "ENTRY_1098e350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1098e350(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 1098e410; body size 5 bytes.
#line 1 "ENTRY_1098e410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e420; body size 37 bytes.
#line 1 "ENTRY_1098e420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1098e420(int param_1,SCStr *param_2){
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1098e450; body size 5 bytes.
#line 1 "ENTRY_1098e450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e460; body size 5 bytes.
#line 1 "ENTRY_1098e460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e470; body size 5 bytes.
#line 1 "ENTRY_1098e470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e480; body size 5 bytes.
#line 1 "ENTRY_1098e480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e480(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e490; body size 5 bytes.
#line 1 "ENTRY_1098e490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e700; body size 15 bytes.
#line 1 "ENTRY_1098e700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e700(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1098e720; body size 15 bytes.
#line 1 "ENTRY_1098e720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e720(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1098e740; body size 5 bytes.
#line 1 "ENTRY_1098e740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e750; body size 5 bytes.
#line 1 "ENTRY_1098e750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e760; body size 5 bytes.
#line 1 "ENTRY_1098e760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e770; body size 5 bytes.
#line 1 "ENTRY_1098e770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e780; body size 5 bytes.
#line 1 "ENTRY_1098e780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e790; body size 5 bytes.
#line 1 "ENTRY_1098e790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e7a0; body size 5 bytes.
#line 1 "ENTRY_1098e7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e7a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e7b0; body size 5 bytes.
#line 1 "ENTRY_1098e7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e7b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e7c0; body size 6 bytes.
#line 1 "ENTRY_1098e7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e7c0(void)

{
  return (undefined4)(DAT_121a3db8);
}


// Reference entry 1098e7d0; body size 6 bytes.
#line 1 "ENTRY_1098e7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e7d0(void)

{
  return (undefined4)(DAT_121a3dc8);
}


// Reference entry 1098e7e0; body size 6 bytes.
#line 1 "ENTRY_1098e7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e7e0(void)

{
  return (undefined4)(DAT_121a3dc4);
}


// Reference entry 1098e7f0; body size 6 bytes.
#line 1 "ENTRY_1098e7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e7f0(void)

{
  return (undefined4)(DAT_121a3dbc);
}


// Reference entry 1098e800; body size 6 bytes.
#line 1 "ENTRY_1098e800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e800(void)

{
  return (undefined4)(DAT_121a3dc0);
}


// Reference entry 1098e850; body size 5 bytes.
#line 1 "ENTRY_1098e850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1098e850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098e860; body size 57 bytes.
#line 1 "ENTRY_1098e860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098e860(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1098ed60; body size 32 bytes.
#line 1 "ENTRY_1098ed60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098ed60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1098eea0; body size 18 bytes.
#line 1 "ENTRY_1098eea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098eea0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1098ef00; body size 11 bytes.
#line 1 "ENTRY_1098ef00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098ef00(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1098ef10; body size 51 bytes.
#line 1 "ENTRY_1098ef10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098ef10(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 1098ef50; body size 11 bytes.
#line 1 "ENTRY_1098ef50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098ef50(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1098efe0; body size 11 bytes.
#line 1 "ENTRY_1098efe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098efe0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1098eff0; body size 11 bytes.
#line 1 "ENTRY_1098eff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098eff0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1098f000; body size 16 bytes.
#line 1 "ENTRY_1098f000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1098f000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1098f020; body size 3 bytes.
#line 1 "ENTRY_1098f020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1098f020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1098f150; body size 52 bytes.
#line 1 "ENTRY_1098f150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1098f150(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1098f4b0; body size 57 bytes.
#line 1 "ENTRY_1098f4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098f4b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRegisterSystemSecureRegistrationErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCRegisterSystemSecureRegistrationErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCRegisterSystemSecureRegistrationErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCRegisterSystemSecureRegistrationErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1098f820; body size 57 bytes.
#line 1 "ENTRY_1098f820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098f820(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRegisterSystemUnconfirmedProductsPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCRegisterSystemUnconfirmedProductsPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCRegisterSystemUnconfirmedProductsPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCRegisterSystemUnconfirmedProductsPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1098f970; body size 57 bytes.
#line 1 "ENTRY_1098f970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1098f970(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRegisterSystemUnregisteredProductsPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCRegisterSystemUnregisteredProductsPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCRegisterSystemUnregisteredProductsPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCRegisterSystemUnregisteredProductsPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109900e0; body size 11 bytes.
#line 1 "ENTRY_109900e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109900e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109900f0; body size 11 bytes.
#line 1 "ENTRY_109900f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109900f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10990100; body size 11 bytes.
#line 1 "ENTRY_10990100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10990100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10990110; body size 11 bytes.
#line 1 "ENTRY_10990110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10990110(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10990120; body size 11 bytes.
#line 1 "ENTRY_10990120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10990120(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109901a0; body size 38 bytes.
#line 1 "ENTRY_109901a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109901a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


void __fastcall FUN_109903e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


void __fastcall FUN_10990410(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3db8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10990430; body size 38 bytes.
#line 1 "ENTRY_10990430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10990430(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCRegisterSystemWizard__SCRegisterSystemWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10990460; body size 21 bytes.
#line 1 "ENTRY_10990460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10990460(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3dc8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10990570; body size 21 bytes.
#line 1 "ENTRY_10990570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10990570(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3dc4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10990590; body size 38 bytes.
#line 1 "ENTRY_10990590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10990590(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCRegisterSystemWizard__SCRegisterSystemWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109905c0; body size 21 bytes.
#line 1 "ENTRY_109905c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109905c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3dbc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109905e0; body size 38 bytes.
#line 1 "ENTRY_109905e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109905e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCRegisterSystemWizard__SCRegisterSystemWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10990610; body size 21 bytes.
#line 1 "ENTRY_10990610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10990610(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3dc0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10990780; body size 14 bytes.
#line 1 "ENTRY_10990780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10990780(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 109907a0; body size 14 bytes.
#line 1 "ENTRY_109907a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_109907a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 109907c0; body size 7 bytes.
#line 1 "ENTRY_109907c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_109907c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 109907d0; body size 3 bytes.
#line 1 "ENTRY_109907d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109907d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 109907e0; body size 6 bytes.
#line 1 "ENTRY_109907e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_109907e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 109907f0; body size 6 bytes.
#line 1 "ENTRY_109907f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_109907f0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10990800; body size 6 bytes.
#line 1 "ENTRY_10990800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10990800(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10990820; body size 20 bytes.
#line 1 "ENTRY_10990820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10990820(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 109911b0; body size 31 bytes.
#line 1 "ENTRY_109911b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109911b0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10991200; body size 14 bytes.
#line 1 "ENTRY_10991200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10991200(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10991640; body size 3 bytes.
#line 1 "ENTRY_10991640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10991640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10991650; body size 3 bytes.
#line 1 "ENTRY_10991650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10991650(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10991660; body size 3 bytes.
#line 1 "ENTRY_10991660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10991660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10991670; body size 3 bytes.
#line 1 "ENTRY_10991670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10991670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10991680; body size 3 bytes.
#line 1 "ENTRY_10991680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10991680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 109916a0; body size 3 bytes.
#line 1 "ENTRY_109916a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109916a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 109916b0; body size 3 bytes.
#line 1 "ENTRY_109916b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109916b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10991a20; body size 3 bytes.
#line 1 "ENTRY_10991a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10991a20(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10991a30; body size 11 bytes.
#line 1 "ENTRY_10991a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10991a30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10991a40; body size 8 bytes.
#line 1 "ENTRY_10991a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10991a40(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10991ac0; body size 11 bytes.
#line 1 "ENTRY_10991ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10991ac0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10991f30; body size 97 bytes.
#line 1 "ENTRY_10991f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10991f30(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x924924a) {
    param_1 = (uint)(param_1 * 0x1c);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1), 0);
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (char *)(operator_new(param_1 + 0x23), 0);
      if ((void *)(pvVar1) != (void *)(0x0)) {
        pvVar2 = (char *)((char *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10991fb0; body size 13 bytes.
#line 1 "ENTRY_10991fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10991fb0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10992720; body size 63 bytes.
#line 1 "ENTRY_10992720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10992720(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10992770; body size 66 bytes.
#line 1 "ENTRY_10992770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10992770(int param_1,int param_2)

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


// Reference entry 109927d0; body size 11 bytes.
#line 1 "ENTRY_109927d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_109927d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 109943f0; body size 7 bytes.
#line 1 "ENTRY_109943f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109943f0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x100));
}


// Reference entry 10996bd0; body size 6 bytes.
#line 1 "ENTRY_10996bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10996bd0(void)

{
  return (undefined4)(DAT_121a3db8);
}


// Reference entry 10996be0; body size 6 bytes.
#line 1 "ENTRY_10996be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10996be0(void)

{
  return (undefined4)(DAT_121a3dc8);
}


// Reference entry 10996bf0; body size 6 bytes.
#line 1 "ENTRY_10996bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10996bf0(void)

{
  return (undefined4)(DAT_121a3dc4);
}


// Reference entry 10996c00; body size 6 bytes.
#line 1 "ENTRY_10996c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10996c00(void)

{
  return (undefined4)(DAT_121a3dbc);
}


// Reference entry 10996c10; body size 6 bytes.
#line 1 "ENTRY_10996c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10996c10(void)

{
  return (undefined4)(DAT_121a3dc0);
}


// Reference entry 10996c20; body size 6 bytes.
#line 1 "ENTRY_10996c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10996c20(void)

{
  return (undefined4)(DAT_121a3dcc);
}


// Reference entry 10996c30; body size 5 bytes.
#line 1 "ENTRY_10996c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10996c30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109981e0; body size 5 bytes.
#line 1 "ENTRY_109981e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109981e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109981f0; body size 5 bytes.
#line 1 "ENTRY_109981f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109981f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10998200; body size 5 bytes.
#line 1 "ENTRY_10998200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10998200(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10998210; body size 5 bytes.
#line 1 "ENTRY_10998210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10998210(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 10998280; body size 7 bytes.
#line 1 "ENTRY_10998280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10998280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10998290; body size 6 bytes.
#line 1 "ENTRY_10998290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10998290(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 109982a0; body size 6 bytes.
#line 1 "ENTRY_109982a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109982a0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 109990d0; body size 5 bytes.
#line 1 "ENTRY_109990d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109990d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 109990e0; body size 28 bytes.
#line 1 "ENTRY_109990e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109990e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    ((SCVtbl_2_0*)(piVar1))->v();
    return;
  }
  return;
}


// Reference entry 10999110; body size 5 bytes.
#line 1 "ENTRY_10999110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10999110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10999120; body size 13 bytes.
#line 1 "ENTRY_10999120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10999120(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x100) = (undefined1)(param_2);
  return;
}


// Reference entry 10999130; body size 4 bytes.
#line 1 "ENTRY_10999130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10999130(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10999140; body size 6 bytes.
#line 1 "ENTRY_10999140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10999140(void)

{
  return (undefined4)(DAT_121a3e1c);
}


// Reference entry 10999160; body size 6 bytes.
#line 1 "ENTRY_10999160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10999160(void)

{
  return (undefined4)(DAT_121a3e18);
}


// Reference entry 10999170; body size 57 bytes.
#line 1 "ENTRY_10999170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10999170(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10999770; body size 57 bytes.
#line 1 "ENTRY_10999770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10999770(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRenameWizardPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCRenameWizardPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCRenameWizardPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCRenameWizardPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10999b30; body size 38 bytes.
#line 1 "ENTRY_10999b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10999b30(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCRenameWizard__SCRenameWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10999b60; body size 11 bytes.
#line 1 "ENTRY_10999b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10999b60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10999b70; body size 11 bytes.
#line 1 "ENTRY_10999b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10999b70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10999b80; body size 38 bytes.
#line 1 "ENTRY_10999b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10999bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


void __fastcall FUN_10999b80(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3e1c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 10999c90; body size 38 bytes.
#line 1 "ENTRY_10999c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10999c90(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCRenameWizard__SCRenameWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 10999cc0; body size 21 bytes.
#line 1 "ENTRY_10999cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10999cc0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3e18 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1099c670; body size 6 bytes.
#line 1 "ENTRY_1099c670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099c670(void)

{
  return (undefined4)(DAT_121a3e1c);
}


// Reference entry 1099c680; body size 6 bytes.
#line 1 "ENTRY_1099c680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099c680(void)

{
  return (undefined4)(DAT_121a3e18);
}


// Reference entry 1099c690; body size 6 bytes.
#line 1 "ENTRY_1099c690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099c690(void)

{
  return (undefined4)(DAT_121a3e14);
}


// Reference entry 1099c6a0; body size 5 bytes.
#line 1 "ENTRY_1099c6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1099c6a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 1099c6c0; body size 5 bytes.
#line 1 "ENTRY_1099c6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1099c6c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1099c6d0; body size 5 bytes.
#line 1 "ENTRY_1099c6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1099c6d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1099c6e0; body size 5 bytes.
#line 1 "ENTRY_1099c6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1099c6e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 1099cb90; body size 25 bytes.
#line 1 "ENTRY_1099cb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1099cb90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1099d4c0; body size 7 bytes.
#line 1 "ENTRY_1099d4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099d4c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1099d4d0; body size 5 bytes.
#line 1 "ENTRY_1099d4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099d4d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1099d660; body size 5 bytes.
#line 1 "ENTRY_1099d660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099d660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1099d780; body size 60 bytes.
#line 1 "ENTRY_1099d780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1099d780(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 8));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 4));
  *(undefined4*)(param_3 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_3 + 8) = (undefined4)(0);
  *(undefined4*)(param_3 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 4) = (undefined4)(uVar3);
  *(undefined4*)(param_2 + 8) = (undefined4)(uVar2);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(uVar1);
  return;
}


// Reference entry 1099d8f0; body size 89 bytes.
#line 1 "ENTRY_1099d8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1099d8f0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4), 0);
  if ((SCStr *)(this_) != *(SCStr **)(param_1 + 8)) {
    ((SCStr *)(this_))->m_op_ctor(param_2);
    uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
    uVar2 = (undefined4)(*(undefined4 *)(param_2 + 8));
    uVar3 = (undefined4)(*(undefined4 *)(param_2 + 4));
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    *(undefined4*)(param_2 + 4) = (undefined4)(0);
    *(undefined4*)(this_ + 4) = (undefined4)(uVar3);
    *(undefined4*)(this_ + 8) = (undefined4)(uVar2);
    *(undefined4*)(this_ + 0xc) = (undefined4)(uVar1);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x10);
    return;
  }
  thunk_FUN_1099d300(this_,param_2);
  return;
}


// Reference entry 1099d960; body size 5 bytes.
#line 1 "ENTRY_1099d960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099d960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1099d970; body size 5 bytes.
#line 1 "ENTRY_1099d970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099d970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1099d980; body size 5 bytes.
#line 1 "ENTRY_1099d980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099d980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1099d990; body size 6 bytes.
#line 1 "ENTRY_1099d990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099d990(void)

{
  return (undefined4)(DAT_121a3e70);
}


// Reference entry 1099d9a0; body size 6 bytes.
#line 1 "ENTRY_1099d9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099d9a0(void)

{
  return (undefined4)(DAT_121a3e6c);
}


// Reference entry 1099d9b0; body size 6 bytes.
#line 1 "ENTRY_1099d9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099d9b0(void)

{
  return (undefined4)(DAT_121a3e68);
}


// Reference entry 1099d9c0; body size 6 bytes.
#line 1 "ENTRY_1099d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099d9c0(void)

{
  return (undefined4)(DAT_121a3e74);
}


// Reference entry 1099d9e0; body size 5 bytes.
#line 1 "ENTRY_1099d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1099d9e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1099d9f0; body size 57 bytes.
#line 1 "ENTRY_1099d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1099d9f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1099de00; body size 21 bytes.
#line 1 "ENTRY_1099de00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1099de00(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1099de20; body size 11 bytes.
#line 1 "ENTRY_1099de20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1099de20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1099de30; body size 11 bytes.
#line 1 "ENTRY_1099de30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1099de30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1099de40; body size 23 bytes.
#line 1 "ENTRY_1099de40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1099de40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1099de60; body size 3 bytes.
#line 1 "ENTRY_1099de60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1099de60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1099de70; body size 23 bytes.
#line 1 "ENTRY_1099de70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1099de70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1099de90; body size 66 bytes.
#line 1 "ENTRY_1099de90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1099de90(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 4));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 8) = (undefined4)(uVar3);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(uVar2);
  return (SCStr *)(param_1);
}


// Reference entry 1099e060; body size 57 bytes.
#line 1 "ENTRY_1099e060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1099e060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationConfirmationPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationConfirmationPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationConfirmationPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationConfirmationPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1099e1b0; body size 57 bytes.
#line 1 "ENTRY_1099e1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1099e1b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationNewRoomPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationNewRoomPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationNewRoomPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationNewRoomPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1099e300; body size 57 bytes.
#line 1 "ENTRY_1099e300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1099e300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationRoomSelectionPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationRoomSelectionPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationRoomSelectionPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationRoomSelectionPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1099e450; body size 57 bytes.
#line 1 "ENTRY_1099e450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1099e450(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationSetRoomPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationSetRoomPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationSetRoomPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCRoomAllocationSetRoomPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1099eb20; body size 38 bytes.
#line 1 "ENTRY_1099eb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099eb20(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCRoomAllocationWizard__SCRoomAllocationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1099eb50; body size 11 bytes.
#line 1 "ENTRY_1099eb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099eb50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1099eb60; body size 11 bytes.
#line 1 "ENTRY_1099eb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099eb60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1099eb70; body size 11 bytes.
#line 1 "ENTRY_1099eb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099eb70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1099eb80; body size 11 bytes.
#line 1 "ENTRY_1099eb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099eb80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1099ed00; body size 38 bytes.
#line 1 "ENTRY_1099ed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099ed00(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCRoomAllocationWizard__SCRoomAllocationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1099ed30; body size 21 bytes.
#line 1 "ENTRY_1099ed30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099ed30(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3e70 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1099ed50; body size 38 bytes.
#line 1 "ENTRY_1099ed50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099ed50(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCRoomAllocationWizard__SCRoomAllocationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1099ed80; body size 21 bytes.
#line 1 "ENTRY_1099ed80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099ed80(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3e6c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1099eda0; body size 38 bytes.
#line 1 "ENTRY_1099eda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099eda0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCRoomAllocationWizard__SCRoomAllocationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1099edd0; body size 21 bytes.
#line 1 "ENTRY_1099edd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099edd0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3e68 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1099edf0; body size 38 bytes.
#line 1 "ENTRY_1099edf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099edf0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCRoomAllocationWizard__SCRoomAllocationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 1099ee20; body size 21 bytes.
#line 1 "ENTRY_1099ee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099ee20(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3e74 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1099ef90; body size 14 bytes.
#line 1 "ENTRY_1099ef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1099ef90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1099efb0; body size 14 bytes.
#line 1 "ENTRY_1099efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1099efb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1099efd0; body size 12 bytes.
#line 1 "ENTRY_1099efd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_1099efd0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x10 + *param_1);
}


// Reference entry 1099efe0; body size 12 bytes.
#line 1 "ENTRY_1099efe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_1099efe0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x10 + *param_1);
}


// Reference entry 1099eff0; body size 7 bytes.
#line 1 "ENTRY_1099eff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1099eff0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1099f000; body size 3 bytes.
#line 1 "ENTRY_1099f000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1099f000(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1099f010; body size 3 bytes.
#line 1 "ENTRY_1099f010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1099f010(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1099f020; body size 3 bytes.
#line 1 "ENTRY_1099f020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1099f020(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1099f030; body size 6 bytes.
#line 1 "ENTRY_1099f030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_1099f030(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 1099f040; body size 16 bytes.
#line 1 "ENTRY_1099f040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1099f040(int *param_2, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 1099f6f0; body size 49 bytes.
#line 1 "ENTRY_1099f6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_1099f6f0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 4);
  if (0xfffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0xfffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 1099f7c0; body size 3 bytes.
#line 1 "ENTRY_1099f7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void  __stdcall FUN_1099f7c0(unsigned int recovered_unused_stack_0)

{
}


// Reference entry 1099f7f0; body size 3 bytes.
#line 1 "ENTRY_1099f7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1099f7f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1099f800; body size 3 bytes.
#line 1 "ENTRY_1099f800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1099f800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1099f810; body size 3 bytes.
#line 1 "ENTRY_1099f810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1099f810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1099f820; body size 3 bytes.
#line 1 "ENTRY_1099f820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1099f820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1099f830; body size 3 bytes.
#line 1 "ENTRY_1099f830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1099f830(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 1099f840; body size 6 bytes.
#line 1 "ENTRY_1099f840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1099f840(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1099fbb0; body size 11 bytes.
#line 1 "ENTRY_1099fbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1099fbb0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1099fbc0; body size 9 bytes.
#line 1 "ENTRY_1099fbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1099fbc0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 4);
}


// Reference entry 109a09c0; body size 12 bytes.
#line 1 "ENTRY_109a09c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_109a09c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 109a29e0; body size 7 bytes.
#line 1 "ENTRY_109a29e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_109a29e0(int param_1)

{
  return (int)(param_1 + 0x100);
}


// Reference entry 109a2d60; body size 23 bytes.
#line 1 "ENTRY_109a2d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_109a2d60(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1064d7a0((int)(param_1 + 0x10c));
  return (undefined4)(param_2);
}


// Reference entry 109a4670; body size 6 bytes.
#line 1 "ENTRY_109a4670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a4670(void)

{
  return (undefined4)(DAT_121a3e70);
}


// Reference entry 109a4680; body size 6 bytes.
#line 1 "ENTRY_109a4680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a4680(void)

{
  return (undefined4)(DAT_121a3e6c);
}


// Reference entry 109a4690; body size 6 bytes.
#line 1 "ENTRY_109a4690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a4690(void)

{
  return (undefined4)(DAT_121a3e68);
}


// Reference entry 109a46a0; body size 6 bytes.
#line 1 "ENTRY_109a46a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a46a0(void)

{
  return (undefined4)(DAT_121a3e74);
}


// Reference entry 109a46b0; body size 6 bytes.
#line 1 "ENTRY_109a46b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a46b0(void)

{
  return (undefined4)(DAT_121a3e78);
}


// Reference entry 109a4af0; body size 5 bytes.
#line 1 "ENTRY_109a4af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109a4af0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109a4b00; body size 5 bytes.
#line 1 "ENTRY_109a4b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109a4b00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109a5600; body size 6 bytes.
#line 1 "ENTRY_109a5600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a5600(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 109a5610; body size 6 bytes.
#line 1 "ENTRY_109a5610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a5610(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 109a6580; body size 89 bytes.
#line 1 "ENTRY_109a6580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_109a6580(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4), 0);
  if ((SCStr *)(this_) != *(SCStr **)(param_1 + 8)) {
    ((SCStr *)(this_))->m_op_ctor(param_2);
    uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
    uVar2 = (undefined4)(*(undefined4 *)(param_2 + 8));
    uVar3 = (undefined4)(*(undefined4 *)(param_2 + 4));
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    *(undefined4*)(param_2 + 4) = (undefined4)(0);
    *(undefined4*)(this_ + 4) = (undefined4)(uVar3);
    *(undefined4*)(this_ + 8) = (undefined4)(uVar2);
    *(undefined4*)(this_ + 0xc) = (undefined4)(uVar1);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x10);
    return;
  }
  thunk_FUN_1099d300(this_,param_2);
  return;
}


// Reference entry 109a66a0; body size 20 bytes.
#line 1 "ENTRY_109a66a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a66a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
                    
                    
    ((SCVtbl_2_0*)(piVar1))->v();
    return;
  }
  return;
}


// Reference entry 109a66f0; body size 9 bytes.
#line 1 "ENTRY_109a66f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_109a66f0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 4);
}


// Reference entry 109a6700; body size 6 bytes.
#line 1 "ENTRY_109a6700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a6700(void)

{
  return (undefined4)(DAT_121a3ed4);
}


// Reference entry 109a6710; body size 6 bytes.
#line 1 "ENTRY_109a6710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a6710(void)

{
  return (undefined4)(DAT_121a3ecc);
}


// Reference entry 109a6720; body size 6 bytes.
#line 1 "ENTRY_109a6720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a6720(void)

{
  return (undefined4)(DAT_121a3ee0);
}


// Reference entry 109a6730; body size 6 bytes.
#line 1 "ENTRY_109a6730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a6730(void)

{
  return (undefined4)(DAT_121a3ed0);
}


// Reference entry 109a6740; body size 6 bytes.
#line 1 "ENTRY_109a6740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a6740(void)

{
  return (undefined4)(DAT_121a3ee4);
}


// Reference entry 109a6750; body size 6 bytes.
#line 1 "ENTRY_109a6750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a6750(void)

{
  return (undefined4)(DAT_121a3ec4);
}


// Reference entry 109a6760; body size 6 bytes.
#line 1 "ENTRY_109a6760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a6760(void)

{
  return (undefined4)(DAT_121a3edc);
}


// Reference entry 109a6770; body size 6 bytes.
#line 1 "ENTRY_109a6770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a6770(void)

{
  return (undefined4)(DAT_121a3ed8);
}


// Reference entry 109a6780; body size 6 bytes.
#line 1 "ENTRY_109a6780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109a6780(void)

{
  return (undefined4)(DAT_121a3ec8);
}


// Reference entry 109a67a0; body size 57 bytes.
#line 1 "ENTRY_109a67a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109a67a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 109a7060; body size 16 bytes.
#line 1 "ENTRY_109a7060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_109a7060(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 109a77e0; body size 57 bytes.
#line 1 "ENTRY_109a77e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109a77e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationChirpLastChancePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationChirpLastChancePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationChirpLastChancePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationChirpLastChancePage);
  return (undefined4 *)(param_1);
}


// Reference entry 109a7b40; body size 57 bytes.
#line 1 "ENTRY_109a7b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109a7b40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationConfirmWrongDevicePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationConfirmWrongDevicePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationConfirmWrongDevicePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationConfirmWrongDevicePage);
  return (undefined4 *)(param_1);
}


// Reference entry 109a7ea0; body size 173 bytes.
#line 1 "ENTRY_109a7ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109a7ea0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationHandshakePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationHandshakePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationHandshakePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationHandshakePage);
  *(undefined2*)(param_1 + 0x38) = (undefined2)(0);
  param_1[0x39] = (undefined4)(0x3eb);
  param_1[0x3a] = (undefined4)(0);
  param_1[0x3b] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3c) = (undefined1)(0);
  param_1[0x45] = (undefined4)(0);
  param_1[0x66] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x67) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0x19e) = (undefined1)(0);
  thunk_FUN_113cfb70((int)param_1 + 0xf1,0x20);
  thunk_FUN_113cfb70(param_1 + 0x46,0x80);
  return (undefined4 *)(param_1);
}


// Reference entry 109a84a0; body size 57 bytes.
#line 1 "ENTRY_109a84a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109a84a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationNfcLastChancePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationNfcLastChancePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationNfcLastChancePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSecureAuthenticationNfcLastChancePage);
  return (undefined4 *)(param_1);
}


// Reference entry 109a8f40; body size 38 bytes.
#line 1 "ENTRY_109a8f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a8f40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSecureAuthenticationWizard__SCSecureAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109a8f70; body size 11 bytes.
#line 1 "ENTRY_109a8f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a8f70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109a8f80; body size 11 bytes.
#line 1 "ENTRY_109a8f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a8f80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109a8f90; body size 11 bytes.
#line 1 "ENTRY_109a8f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a8f90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109a8fa0; body size 11 bytes.
#line 1 "ENTRY_109a8fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a8fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109a8fb0; body size 11 bytes.
#line 1 "ENTRY_109a8fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a8fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109a8fc0; body size 11 bytes.
#line 1 "ENTRY_109a8fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a8fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109a8fd0; body size 11 bytes.
#line 1 "ENTRY_109a8fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a8fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109a8fe0; body size 11 bytes.
#line 1 "ENTRY_109a8fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a8fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109a8ff0; body size 11 bytes.
#line 1 "ENTRY_109a8ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a8ff0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109a9070; body size 38 bytes.
#line 1 "ENTRY_109a9070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 109a93a0; body size 21 bytes.
#line 1 "ENTRY_109a93a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a93a0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3ec4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109a93c0; body size 38 bytes.
#line 1 "ENTRY_109a93c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 109a9410; body size 38 bytes.
#line 1 "ENTRY_109a9410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 109a9460; body size 38 bytes.
#line 1 "ENTRY_109a9460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a9460(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSecureAuthenticationWizard__SCSecureAuthenticationWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109a9490; body size 21 bytes.
#line 1 "ENTRY_109a9490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109a9490(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3ec8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109a9720; body size 3 bytes.
#line 1 "ENTRY_109a9720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109a9720(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 109a9730; body size 7 bytes.
#line 1 "ENTRY_109a9730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_109a9730(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 109af340; body size 7 bytes.
#line 1 "ENTRY_109af340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109af340(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x10c));
}


// Reference entry 109af350; body size 7 bytes.
#line 1 "ENTRY_109af350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109af350(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x10c));
}


// Reference entry 109af360; body size 7 bytes.
#line 1 "ENTRY_109af360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109af360(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x10c));
}


// Reference entry 109af370; body size 7 bytes.
#line 1 "ENTRY_109af370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109af370(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x110));
}


// Reference entry 109af380; body size 7 bytes.
#line 1 "ENTRY_109af380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109af380(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x11b));
}


// Reference entry 109af500; body size 7 bytes.
#line 1 "ENTRY_109af500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109af500(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x11d));
}


// Reference entry 109b4090; body size 6 bytes.
#line 1 "ENTRY_109b4090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b4090(void)

{
  return (undefined4)(DAT_121a3ed4);
}


// Reference entry 109b40a0; body size 6 bytes.
#line 1 "ENTRY_109b40a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b40a0(void)

{
  return (undefined4)(DAT_121a3ecc);
}


// Reference entry 109b40b0; body size 6 bytes.
#line 1 "ENTRY_109b40b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b40b0(void)

{
  return (undefined4)(DAT_121a3ee0);
}


// Reference entry 109b40c0; body size 6 bytes.
#line 1 "ENTRY_109b40c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b40c0(void)

{
  return (undefined4)(DAT_121a3ed0);
}


// Reference entry 109b40d0; body size 6 bytes.
#line 1 "ENTRY_109b40d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b40d0(void)

{
  return (undefined4)(DAT_121a3ee4);
}


// Reference entry 109b40e0; body size 6 bytes.
#line 1 "ENTRY_109b40e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b40e0(void)

{
  return (undefined4)(DAT_121a3ec4);
}


// Reference entry 109b40f0; body size 6 bytes.
#line 1 "ENTRY_109b40f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b40f0(void)

{
  return (undefined4)(DAT_121a3edc);
}


// Reference entry 109b4100; body size 6 bytes.
#line 1 "ENTRY_109b4100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b4100(void)

{
  return (undefined4)(DAT_121a3ed8);
}


// Reference entry 109b4110; body size 6 bytes.
#line 1 "ENTRY_109b4110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b4110(void)

{
  return (undefined4)(DAT_121a3ec8);
}


// Reference entry 109b4120; body size 6 bytes.
#line 1 "ENTRY_109b4120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b4120(void)

{
  return (undefined4)(DAT_121a3ee8);
}


// Reference entry 109b4130; body size 5 bytes.
#line 1 "ENTRY_109b4130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4130(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109b4140; body size 5 bytes.
#line 1 "ENTRY_109b4140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4140(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109b4150; body size 5 bytes.
#line 1 "ENTRY_109b4150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4150(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109b4160; body size 5 bytes.
#line 1 "ENTRY_109b4160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4160(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109b4170; body size 5 bytes.
#line 1 "ENTRY_109b4170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4170(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109b4180; body size 5 bytes.
#line 1 "ENTRY_109b4180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4180(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109b4190; body size 5 bytes.
#line 1 "ENTRY_109b4190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4190(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109b41a0; body size 5 bytes.
#line 1 "ENTRY_109b41a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b41a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109b41b0; body size 5 bytes.
#line 1 "ENTRY_109b41b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b41b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109b41d0; body size 7 bytes.
#line 1 "ENTRY_109b41d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_109b41d0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x119));
}


// Reference entry 109b41e0; body size 5 bytes.
#line 1 "ENTRY_109b41e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b41e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109b41f0; body size 5 bytes.
#line 1 "ENTRY_109b41f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b41f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109b4200; body size 5 bytes.
#line 1 "ENTRY_109b4200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4200(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109b4210; body size 5 bytes.
#line 1 "ENTRY_109b4210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4210(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109b4220; body size 5 bytes.
#line 1 "ENTRY_109b4220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4220(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109b4230; body size 5 bytes.
#line 1 "ENTRY_109b4230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4230(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109b4240; body size 5 bytes.
#line 1 "ENTRY_109b4240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4240(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109b4250; body size 5 bytes.
#line 1 "ENTRY_109b4250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4250(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109b4260; body size 5 bytes.
#line 1 "ENTRY_109b4260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4260(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109b4270; body size 5 bytes.
#line 1 "ENTRY_109b4270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4270(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109b4280; body size 5 bytes.
#line 1 "ENTRY_109b4280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4280(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109b4290; body size 5 bytes.
#line 1 "ENTRY_109b4290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b4290(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109b69f0; body size 3 bytes.
#line 1 "ENTRY_109b69f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109b69f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 109b6a00; body size 28 bytes.
#line 1 "ENTRY_109b6a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109b6a00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    ((SCVtbl_2_0*)(piVar1))->v();
    return;
  }
  return;
}


// Reference entry 109b6ad0; body size 13 bytes.
#line 1 "ENTRY_109b6ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_109b6ad0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x11c) = (undefined1)(param_2);
  return;
}


// Reference entry 109b6ae0; body size 13 bytes.
#line 1 "ENTRY_109b6ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_109b6ae0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x118) = (undefined1)(param_2);
  return;
}


// Reference entry 109b6af0; body size 13 bytes.
#line 1 "ENTRY_109b6af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_109b6af0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x118) = (undefined1)(param_2);
  return;
}


// Reference entry 109b6b00; body size 13 bytes.
#line 1 "ENTRY_109b6b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_109b6b00(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x11d) = (undefined1)(param_2);
  return;
}


// Reference entry 109b6c40; body size 22 bytes.
#line 1 "ENTRY_109b6c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109b6c40(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 109b6e20; body size 5 bytes.
#line 1 "ENTRY_109b6e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b6e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 109b6e30; body size 5 bytes.
#line 1 "ENTRY_109b6e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b6e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 109b6e40; body size 6 bytes.
#line 1 "ENTRY_109b6e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b6e40(void)

{
  return (undefined4)(DAT_121a3f40);
}


// Reference entry 109b6e50; body size 6 bytes.
#line 1 "ENTRY_109b6e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b6e50(void)

{
  return (undefined4)(DAT_121a3f44);
}


// Reference entry 109b6e60; body size 6 bytes.
#line 1 "ENTRY_109b6e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b6e60(void)

{
  return (undefined4)(DAT_121a3f3c);
}


// Reference entry 109b6e70; body size 6 bytes.
#line 1 "ENTRY_109b6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109b6e70(void)

{
  return (undefined4)(DAT_121a3f48);
}


// Reference entry 109b6f00; body size 18 bytes.
#line 1 "ENTRY_109b6f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_109b6f00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 109b6f20; body size 57 bytes.
#line 1 "ENTRY_109b6f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109b6f20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 109b7330; body size 87 bytes.
#line 1 "ENTRY_109b7330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109b7330(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigCarouselPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigCarouselPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigCarouselPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigCarouselPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 109b74a0; body size 57 bytes.
#line 1 "ENTRY_109b74a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109b74a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109b75f0; body size 57 bytes.
#line 1 "ENTRY_109b75f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109b75f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109b7740; body size 57 bytes.
#line 1 "ENTRY_109b7740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109b7740(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigOutroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigOutroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigOutroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceConfigOutroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109b7dd0; body size 38 bytes.
#line 1 "ENTRY_109b7dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109b7dd0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSonosVoiceConfigWizard__SCSonosVoiceConfigWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109b7e00; body size 11 bytes.
#line 1 "ENTRY_109b7e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109b7e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109b7e10; body size 11 bytes.
#line 1 "ENTRY_109b7e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109b7e10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109b7e20; body size 11 bytes.
#line 1 "ENTRY_109b7e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109b7e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109b7e30; body size 11 bytes.
#line 1 "ENTRY_109b7e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109b7e30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109b7f20; body size 21 bytes.
#line 1 "ENTRY_109b7f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109b7f20(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3f40 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109b7f40; body size 38 bytes.
#line 1 "ENTRY_109b7f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109b7f40(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSonosVoiceConfigWizard__SCSonosVoiceConfigWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109b7f70; body size 21 bytes.
#line 1 "ENTRY_109b7f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109b7f70(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3f44 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109b7f90; body size 38 bytes.
#line 1 "ENTRY_109b7f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109b7f90(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSonosVoiceConfigWizard__SCSonosVoiceConfigWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109b7fc0; body size 21 bytes.
#line 1 "ENTRY_109b7fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109b7fc0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3f3c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109b7fe0; body size 38 bytes.
#line 1 "ENTRY_109b7fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109b7fe0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSonosVoiceConfigWizard__SCSonosVoiceConfigWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109b8010; body size 21 bytes.
#line 1 "ENTRY_109b8010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109b8010(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3f48 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109bbed0; body size 23 bytes.
#line 1 "ENTRY_109bbed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_109bbed0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x100));
  return (SCStr *)(param_2);
}


// Reference entry 109bd150; body size 6 bytes.
#line 1 "ENTRY_109bd150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109bd150(void)

{
  return (undefined4)(DAT_121a3f40);
}


// Reference entry 109bd160; body size 6 bytes.
#line 1 "ENTRY_109bd160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109bd160(void)

{
  return (undefined4)(DAT_121a3f44);
}


// Reference entry 109bd170; body size 6 bytes.
#line 1 "ENTRY_109bd170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109bd170(void)

{
  return (undefined4)(DAT_121a3f3c);
}


// Reference entry 109bd180; body size 6 bytes.
#line 1 "ENTRY_109bd180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109bd180(void)

{
  return (undefined4)(DAT_121a3f48);
}


// Reference entry 109bd190; body size 6 bytes.
#line 1 "ENTRY_109bd190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109bd190(void)

{
  return (undefined4)(DAT_121a3f38);
}


// Reference entry 109bd2b0; body size 5 bytes.
#line 1 "ENTRY_109bd2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109bd2b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109bd2c0; body size 5 bytes.
#line 1 "ENTRY_109bd2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109bd2c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109bf260; body size 3 bytes.
#line 1 "ENTRY_109bf260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109bf260(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 109bf280; body size 6 bytes.
#line 1 "ENTRY_109bf280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109bf280(void)

{
  return (undefined4)(DAT_121a3f94);
}


// Reference entry 109bf290; body size 6 bytes.
#line 1 "ENTRY_109bf290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109bf290(void)

{
  return (undefined4)(DAT_121a3f98);
}


// Reference entry 109bf2a0; body size 6 bytes.
#line 1 "ENTRY_109bf2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109bf2a0(void)

{
  return (undefined4)(DAT_121a3fa0);
}


// Reference entry 109bf2b0; body size 6 bytes.
#line 1 "ENTRY_109bf2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109bf2b0(void)

{
  return (undefined4)(DAT_121a3f9c);
}


// Reference entry 109bf2d0; body size 57 bytes.
#line 1 "ENTRY_109bf2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109bf2d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 109bf900; body size 57 bytes.
#line 1 "ENTRY_109bf900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109bf900(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosVoicePreviewIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSonosVoicePreviewIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonosVoicePreviewIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonosVoicePreviewIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109bfc60; body size 57 bytes.
#line 1 "ENTRY_109bfc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109bfc60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosVoicePreviewTermsOfUsePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSonosVoicePreviewTermsOfUsePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonosVoicePreviewTermsOfUsePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonosVoicePreviewTermsOfUsePage);
  return (undefined4 *)(param_1);
}


// Reference entry 109c04c0; body size 38 bytes.
#line 1 "ENTRY_109c04c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c04c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSonosVoicePreviewWizard__SCSonosVoicePreviewWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109c04f0; body size 11 bytes.
#line 1 "ENTRY_109c04f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c04f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109c0500; body size 11 bytes.
#line 1 "ENTRY_109c0500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c0500(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109c0510; body size 11 bytes.
#line 1 "ENTRY_109c0510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c0510(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109c0520; body size 11 bytes.
#line 1 "ENTRY_109c0520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c0520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109c0530; body size 38 bytes.
#line 1 "ENTRY_109c0530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 109c05c0; body size 21 bytes.
#line 1 "ENTRY_109c05c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c05c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3f94 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109c05e0; body size 38 bytes.
#line 1 "ENTRY_109c05e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 109c0630; body size 38 bytes.
#line 1 "ENTRY_109c0630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c0630(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSonosVoicePreviewWizard__SCSonosVoicePreviewWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109c0660; body size 21 bytes.
#line 1 "ENTRY_109c0660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c0660(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3fa0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109c0680; body size 38 bytes.
#line 1 "ENTRY_109c0680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 109c3810; body size 6 bytes.
#line 1 "ENTRY_109c3810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c3810(void)

{
  return (undefined4)(DAT_121a3f94);
}


// Reference entry 109c3820; body size 6 bytes.
#line 1 "ENTRY_109c3820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c3820(void)

{
  return (undefined4)(DAT_121a3f98);
}


// Reference entry 109c3830; body size 6 bytes.
#line 1 "ENTRY_109c3830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c3830(void)

{
  return (undefined4)(DAT_121a3fa0);
}


// Reference entry 109c3840; body size 6 bytes.
#line 1 "ENTRY_109c3840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c3840(void)

{
  return (undefined4)(DAT_121a3f9c);
}


// Reference entry 109c3850; body size 6 bytes.
#line 1 "ENTRY_109c3850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c3850(void)

{
  return (undefined4)(DAT_121a3f90);
}


// Reference entry 109c3860; body size 5 bytes.
#line 1 "ENTRY_109c3860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109c3860(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109c3870; body size 5 bytes.
#line 1 "ENTRY_109c3870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109c3870(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109c3890; body size 5 bytes.
#line 1 "ENTRY_109c3890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109c3890(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109c38a0; body size 5 bytes.
#line 1 "ENTRY_109c38a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109c38a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109c3a80; body size 6 bytes.
#line 1 "ENTRY_109c3a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c3a80(void)

{
  return (undefined4)(DAT_121a3fe8);
}


// Reference entry 109c3a90; body size 6 bytes.
#line 1 "ENTRY_109c3a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c3a90(void)

{
  return (undefined4)(DAT_121a3fec);
}


// Reference entry 109c3aa0; body size 6 bytes.
#line 1 "ENTRY_109c3aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c3aa0(void)

{
  return (undefined4)(DAT_121a3ff8);
}


// Reference entry 109c3ab0; body size 6 bytes.
#line 1 "ENTRY_109c3ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c3ab0(void)

{
  return (undefined4)(DAT_121a3ff0);
}


// Reference entry 109c3ad0; body size 57 bytes.
#line 1 "ENTRY_109c3ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109c3ad0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 109c4010; body size 107 bytes.
#line 1 "ENTRY_109c4010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109c4010(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceSetupEnablementPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceSetupEnablementPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceSetupEnablementPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceSetupEnablementPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  param_1[0x3a] = (undefined4)(0);
  param_1[0x3b] = (undefined4)(0);
  param_1[0x3c] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 109c41a0; body size 57 bytes.
#line 1 "ENTRY_109c41a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109c41a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceSetupErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceSetupErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceSetupErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceSetupErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109c4500; body size 57 bytes.
#line 1 "ENTRY_109c4500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109c4500(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceSetupSuccessPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceSetupSuccessPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceSetupSuccessPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceSetupSuccessPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109c4b60; body size 38 bytes.
#line 1 "ENTRY_109c4b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c4b60(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSonosVoiceSetupWizard__SCSonosVoiceSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109c4b90; body size 11 bytes.
#line 1 "ENTRY_109c4b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c4b90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109c4ba0; body size 11 bytes.
#line 1 "ENTRY_109c4ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c4ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109c4bb0; body size 11 bytes.
#line 1 "ENTRY_109c4bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c4bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109c4bc0; body size 11 bytes.
#line 1 "ENTRY_109c4bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c4bc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109c4bd0; body size 38 bytes.
#line 1 "ENTRY_109c4bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 109c4d30; body size 38 bytes.
#line 1 "ENTRY_109c4d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c4d30(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSonosVoiceSetupWizard__SCSonosVoiceSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109c4d60; body size 21 bytes.
#line 1 "ENTRY_109c4d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c4d60(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3fec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109c4d80; body size 38 bytes.
#line 1 "ENTRY_109c4d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */



// Reference entry 109c4dd0; body size 38 bytes.
#line 1 "ENTRY_109c4dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c4dd0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSonosVoiceSetupWizard__SCSonosVoiceSetupWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109c4e00; body size 21 bytes.
#line 1 "ENTRY_109c4e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109c4e00(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a3ff0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109c9330; body size 6 bytes.
#line 1 "ENTRY_109c9330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c9330(void)

{
  return (undefined4)(DAT_121a3fe8);
}


// Reference entry 109c9340; body size 6 bytes.
#line 1 "ENTRY_109c9340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c9340(void)

{
  return (undefined4)(DAT_121a3fec);
}


// Reference entry 109c9350; body size 6 bytes.
#line 1 "ENTRY_109c9350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c9350(void)

{
  return (undefined4)(DAT_121a3ff8);
}


// Reference entry 109c9360; body size 6 bytes.
#line 1 "ENTRY_109c9360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c9360(void)

{
  return (undefined4)(DAT_121a3ff0);
}


// Reference entry 109c9370; body size 6 bytes.
#line 1 "ENTRY_109c9370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109c9370(void)

{
  return (undefined4)(DAT_121a3ff4);
}


// Reference entry 109c9380; body size 5 bytes.
#line 1 "ENTRY_109c9380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109c9380(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 109c94a0; body size 5 bytes.
#line 1 "ENTRY_109c94a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109c94a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109c94b0; body size 5 bytes.
#line 1 "ENTRY_109c94b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109c94b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109c94c0; body size 5 bytes.
#line 1 "ENTRY_109c94c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109c94c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109cb770; body size 6 bytes.
#line 1 "ENTRY_109cb770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109cb770(void)

{
  return (undefined4)(DAT_121a4048);
}


// Reference entry 109cb780; body size 6 bytes.
#line 1 "ENTRY_109cb780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109cb780(void)

{
  return (undefined4)(DAT_121a4040);
}


// Reference entry 109cb790; body size 6 bytes.
#line 1 "ENTRY_109cb790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109cb790(void)

{
  return (undefined4)(DAT_121a4044);
}


// Reference entry 109cb880; body size 57 bytes.
#line 1 "ENTRY_109cb880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109cb880(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 109cbba0; body size 64 bytes.
#line 1 "ENTRY_109cbba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109cbba0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceOnboardingCarouselPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceOnboardingCarouselPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceOnboardingCarouselPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceOnboardingCarouselPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 109cbcf0; body size 64 bytes.
#line 1 "ENTRY_109cbcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109cbcf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceOnboardingIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceOnboardingIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceOnboardingIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceOnboardingIntroPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 109cbe40; body size 57 bytes.
#line 1 "ENTRY_109cbe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109cbe40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceOnboardingMissingAssetsErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceOnboardingMissingAssetsErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceOnboardingMissingAssetsErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSonosVoiceOnboardingMissingAssetsErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 109cc420; body size 38 bytes.
#line 1 "ENTRY_109cc420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109cc420(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSonosVoiceOnboardingWizard__SCSonosVoiceOnboardingWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109cc450; body size 11 bytes.
#line 1 "ENTRY_109cc450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109cc450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109cc460; body size 11 bytes.
#line 1 "ENTRY_109cc460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109cc460(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109cc470; body size 11 bytes.
#line 1 "ENTRY_109cc470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109cc470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 109cc4f0; body size 38 bytes.
#line 1 "ENTRY_109cc4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109cc4f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSonosVoiceOnboardingWizard__SCSonosVoiceOnboardingWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109cc520; body size 21 bytes.
#line 1 "ENTRY_109cc520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109cc520(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4048 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109cc540; body size 38 bytes.
#line 1 "ENTRY_109cc540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109cc540(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSonosVoiceOnboardingWizard__SCSonosVoiceOnboardingWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109cc570; body size 21 bytes.
#line 1 "ENTRY_109cc570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109cc570(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4040 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109cc590; body size 38 bytes.
#line 1 "ENTRY_109cc590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109cc590(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCSonosVoiceOnboardingWizard__SCSonosVoiceOnboardingWizard_);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  piVar1 = (int *)(param_1 + 0x36);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb4d80((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x20);
  thunk_FUN_10eb4cc0((int)(param_1 + 0x34),(int)(*(undefined4 *)(param_1[0x34] + 4)));
  thunk_FUN_1148a50e(param_1[0x34],0x18);
  thunk_FUN_10eb4e80((int)(param_1 + 0x32),(int)(*(undefined4 *)(param_1[0x32] + 4)));
  thunk_FUN_1148a50e(param_1[0x32],0x1c);
  thunk_FUN_10bcef80((int)(param_1 + 0x30),(int)(*(undefined4 *)(param_1[0x30] + 4)));
  thunk_FUN_1148a50e(param_1[0x30],0x18);
  thunk_FUN_10eb4020();
  return;
}


// Reference entry 109cc5c0; body size 21 bytes.
#line 1 "ENTRY_109cc5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_109cc5c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a4044 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 109d0300; body size 6 bytes.
#line 1 "ENTRY_109d0300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109d0300(void)

{
  return (undefined4)(DAT_121a4048);
}


// Reference entry 109d0310; body size 6 bytes.
#line 1 "ENTRY_109d0310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109d0310(void)

{
  return (undefined4)(DAT_121a4040);
}


// Reference entry 109d0320; body size 6 bytes.
#line 1 "ENTRY_109d0320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109d0320(void)

{
  return (undefined4)(DAT_121a4044);
}


// Reference entry 109d0330; body size 6 bytes.
#line 1 "ENTRY_109d0330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109d0330(void)

{
  return (undefined4)(DAT_121a404c);
}


// Reference entry 109d0450; body size 23 bytes.
#line 1 "ENTRY_109d0450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_109d0450(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf4));
  return (SCStr *)(param_2);
}


// Reference entry 109d0470; body size 5 bytes.
#line 1 "ENTRY_109d0470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109d0470(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109d0480; body size 5 bytes.
#line 1 "ENTRY_109d0480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_109d0480(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 109d88e0; body size 6 bytes.
#line 1 "ENTRY_109d88e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109d88e0(void)

{
  return (undefined4)(DAT_121a40a0);
}


// Reference entry 109d88f0; body size 6 bytes.
#line 1 "ENTRY_109d88f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109d88f0(void)

{
  return (undefined4)(DAT_121a40ac);
}


// Reference entry 109d8900; body size 6 bytes.
#line 1 "ENTRY_109d8900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109d8900(void)

{
  return (undefined4)(DAT_121a409c);
}


// Reference entry 109d8910; body size 6 bytes.
#line 1 "ENTRY_109d8910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109d8910(void)

{
  return (undefined4)(DAT_121a40a4);
}


// Reference entry 109d8920; body size 6 bytes.
#line 1 "ENTRY_109d8920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_109d8920(void)

{
  return (undefined4)(DAT_121a40a8);
}


// Reference entry 109d8940; body size 6 bytes.
#line 1 "ENTRY_109d8940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_109d8940(void)

{
  return (char *)("SCIOpDevicePost");
}


// Reference entry 109d8950; body size 57 bytes.
#line 1 "ENTRY_109d8950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_109d8950(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


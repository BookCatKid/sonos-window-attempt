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
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_lt(...) { return 0; } };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; void __thiscall m_FUN_106bd1b0(undefined4 *param_2); template<class... A> int m_FUN_106bd1b0(A...); void __thiscall m_FUN_106bd1c0(undefined4 *param_2); template<class... A> int m_FUN_106bd1c0(A...); void __thiscall m_FUN_106bd1d0(undefined4 *param_2); template<class... A> int m_FUN_106bd1d0(A...); void __thiscall m_FUN_106bd1e0(undefined4 *param_2); template<class... A> int m_FUN_106bd1e0(A...); void __thiscall m_FUN_106bd1f0(undefined4 *param_2); template<class... A> int m_FUN_106bd1f0(A...); void __thiscall m_FUN_106bd200(undefined4 *param_2); template<class... A> int m_FUN_106bd200(A...); void __thiscall m_FUN_106bd290(undefined4 *param_2); template<class... A> int m_FUN_106bd290(A...); void __thiscall m_FUN_106bd2a0(undefined4 *param_2); template<class... A> int m_FUN_106bd2a0(A...); undefined4 __thiscall m_FUN_106bde00(int *param_2); template<class... A> int m_FUN_106bde00(A...); undefined4 __thiscall m_FUN_106be5f0(int param_2); template<class... A> int m_FUN_106be5f0(A...); void __thiscall m_FUN_106be730(undefined4 *param_2); template<class... A> int m_FUN_106be730(A...); void __thiscall m_FUN_106be740(undefined4 *param_2); template<class... A> int m_FUN_106be740(A...); void __thiscall m_FUN_106be750(undefined4 *param_2); template<class... A> int m_FUN_106be750(A...); void __thiscall m_FUN_106be760(undefined4 *param_2); template<class... A> int m_FUN_106be760(A...); void __thiscall m_FUN_106be770(undefined4 *param_2); template<class... A> int m_FUN_106be770(A...); void __thiscall m_FUN_106be780(undefined4 *param_2); template<class... A> int m_FUN_106be780(A...); void __thiscall m_FUN_106be790(undefined4 *param_2); template<class... A> int m_FUN_106be790(A...); void __thiscall m_FUN_106be7a0(undefined4 *param_2); template<class... A> int m_FUN_106be7a0(A...); void __thiscall m_FUN_106be7b0(undefined4 *param_2); template<class... A> int m_FUN_106be7b0(A...); void __thiscall m_FUN_106beb80(int *param_2,int param_3,int param_4); template<class... A> int m_FUN_106beb80(A...); SCStr * __thiscall m_FUN_106c5370(SCStr *param_2); template<class... A> int m_FUN_106c5370(A...); int __thiscall m_FUN_106c8570(int param_2); template<class... A> int m_FUN_106c8570(A...); int __thiscall m_FUN_106c85a0(int param_2); template<class... A> int m_FUN_106c85a0(A...); void __thiscall m_FUN_106cc840(undefined4 param_2); template<class... A> int m_FUN_106cc840(A...); void __thiscall m_FUN_106ce9b0(byte param_2); template<class... A> int m_FUN_106ce9b0(A...); int __thiscall m_FUN_106cfd10(int *param_2,undefined4 param_3); template<class... A> int m_FUN_106cfd10(A...); void __thiscall m_FUN_106d0430(int param_2); template<class... A> int m_FUN_106d0430(A...); void __thiscall m_FUN_106d0450(undefined4 param_2); template<class... A> int m_FUN_106d0450(A...); SCStr * __thiscall m_FUN_106d1220(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106d1220(A...); undefined4 * __thiscall m_FUN_106d1270(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_106d1270(A...); undefined4 * __thiscall m_FUN_106d1290(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106d1290(A...); undefined4 * __thiscall m_FUN_106d1450(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106d1450(A...); SCStr * __thiscall m_FUN_106d1680(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_106d1680(A...); int * __thiscall m_FUN_106d16c0(int *param_2); template<class... A> int m_FUN_106d16c0(A...); int * __thiscall m_FUN_106d1740(int *param_2); template<class... A> int m_FUN_106d1740(A...); undefined4 * __thiscall m_FUN_106d2450(undefined4 *param_2); template<class... A> int m_FUN_106d2450(A...); undefined4 * __thiscall m_FUN_106d2500(undefined4 param_2); template<class... A> int m_FUN_106d2500(A...); undefined4 * __thiscall m_FUN_106d2560(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106d2560(A...); undefined4 * __thiscall m_FUN_106d2570(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106d2570(A...); undefined4 * __thiscall m_FUN_106d2600(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106d2600(A...); undefined4 * __thiscall m_FUN_106d2610(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106d2610(A...); int * __thiscall m_FUN_106d3000(int *param_2); template<class... A> int m_FUN_106d3000(A...); bool __thiscall m_FUN_106d3060(int *param_2); template<class... A> int m_FUN_106d3060(A...); bool __thiscall m_FUN_106d3080(int *param_2); template<class... A> int m_FUN_106d3080(A...); bool __thiscall m_FUN_106d30a0(int *param_2); template<class... A> int m_FUN_106d30a0(A...); bool __thiscall m_FUN_106d30c0(int *param_2); template<class... A> int m_FUN_106d30c0(A...); undefined4 * __thiscall m_FUN_106d3270(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106d3270(A...); undefined4 * __thiscall m_FUN_106d3290(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106d3290(A...); void __thiscall m_FUN_106d43f0(undefined4 *param_2); template<class... A> int m_FUN_106d43f0(A...); void __thiscall m_FUN_106d4d60(undefined4 *param_2); template<class... A> int m_FUN_106d4d60(A...); void __thiscall m_FUN_106d51a0(undefined4 *param_2); template<class... A> int m_FUN_106d51a0(A...); void __thiscall m_FUN_106d51b0(undefined4 *param_2); template<class... A> int m_FUN_106d51b0(A...); SCStr * __thiscall m_FUN_106d5ad0(SCStr *param_2); template<class... A> int m_FUN_106d5ad0(A...); SCStr * __thiscall m_FUN_106d5cc0(SCStr *param_2); template<class... A> int m_FUN_106d5cc0(A...); undefined4 * __thiscall m_FUN_106d8970(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106d8970(A...); undefined4 * __thiscall m_FUN_106d8990(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106d8990(A...); undefined4 * __thiscall m_FUN_106d89b0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106d89b0(A...); undefined4 * __thiscall m_FUN_106d89d0(undefined4 param_2); template<class... A> int m_FUN_106d89d0(A...); undefined4 * __thiscall m_FUN_106d89e0(undefined4 param_2); template<class... A> int m_FUN_106d89e0(A...); undefined4 * __thiscall m_FUN_106d89f0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106d89f0(A...); undefined4 * __thiscall m_FUN_106d8a10(undefined4 param_2); template<class... A> int m_FUN_106d8a10(A...); undefined4 * __thiscall m_FUN_106d8a20(undefined4 param_2); template<class... A> int m_FUN_106d8a20(A...); undefined4 * __thiscall m_FUN_106d8c10(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106d8c10(A...); undefined4 * __thiscall m_FUN_106d8c30(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106d8c30(A...); undefined4 * __thiscall m_FUN_106d8c50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_106d8c50(A...); undefined4 * __thiscall m_FUN_106d8c60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_106d8c60(A...); undefined4 * __thiscall m_FUN_106d8c70(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_106d8c70(A...); undefined4 * __thiscall m_FUN_106d8c90(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_106d8c90(A...); void __thiscall m_FUN_106d8df0(undefined8 *param_2); template<class... A> int m_FUN_106d8df0(A...); void __thiscall m_FUN_106d8e20(undefined8 *param_2); template<class... A> int m_FUN_106d8e20(A...); void __thiscall m_FUN_106d99e0(undefined8 *param_2); template<class... A> int m_FUN_106d99e0(A...); undefined4 * __thiscall m_FUN_106d9be0(undefined4 param_2); template<class... A> int m_FUN_106d9be0(A...); undefined4 * __thiscall m_FUN_106d9c00(undefined4 param_2); template<class... A> int m_FUN_106d9c00(A...); undefined4 * __thiscall m_FUN_106d9ce0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106d9ce0(A...); undefined4 * __thiscall m_FUN_106d9cf0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106d9cf0(A...); undefined4 * __thiscall m_FUN_106d9e00(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106d9e00(A...); undefined4 * __thiscall m_FUN_106d9e10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106d9e10(A...); undefined4 * __thiscall m_FUN_106d9e80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_106d9e80(A...); undefined4 * __thiscall m_FUN_106d9ff0(undefined4 *param_2); template<class... A> int m_FUN_106d9ff0(A...); undefined4 * __thiscall m_FUN_106da000(undefined4 *param_2); template<class... A> int m_FUN_106da000(A...); undefined4 * __thiscall m_FUN_106da290(int param_2); template<class... A> int m_FUN_106da290(A...); undefined4 * __thiscall m_FUN_106da2c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_106da2c0(A...); bool __thiscall m_FUN_106da990(int *param_2); template<class... A> int m_FUN_106da990(A...); bool __thiscall m_FUN_106da9b0(int *param_2); template<class... A> int m_FUN_106da9b0(A...); bool __thiscall m_FUN_106da9d0(int *param_2); template<class... A> int m_FUN_106da9d0(A...); bool __thiscall m_FUN_106da9f0(int *param_2); template<class... A> int m_FUN_106da9f0(A...); int __thiscall m_FUN_106dabf0(int param_2); template<class... A> int m_FUN_106dabf0(A...); int __thiscall m_FUN_106dac10(int param_2); template<class... A> int m_FUN_106dac10(A...); uint __thiscall m_FUN_106db010(uint param_2); template<class... A> int m_FUN_106db010(A...); void __thiscall m_FUN_106db880(int param_2); template<class... A> int m_FUN_106db880(A...); void __thiscall m_FUN_106db8f0(int param_2); template<class... A> int m_FUN_106db8f0(A...); void __thiscall m_FUN_106db9a0(int *param_2); template<class... A> int m_FUN_106db9a0(A...); void __thiscall m_FUN_106dba10(int *param_2); template<class... A> int m_FUN_106dba10(A...); void __thiscall m_FUN_106dba80(undefined4 param_2); template<class... A> int m_FUN_106dba80(A...); void __thiscall m_FUN_106dc1f0(undefined4 *param_2); template<class... A> int m_FUN_106dc1f0(A...); void __thiscall m_FUN_106dc200(undefined4 *param_2); template<class... A> int m_FUN_106dc200(A...); void __thiscall m_FUN_106dc720(undefined4 param_2); template<class... A> int m_FUN_106dc720(A...); void __thiscall m_FUN_106dcd10(undefined8 *param_2); template<class... A> int m_FUN_106dcd10(A...); SCStr * __thiscall m_FUN_106dcd70(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106dcd70(A...); undefined4 * __thiscall m_FUN_106dcde0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106dcde0(A...); undefined4 * __thiscall m_FUN_106dce00(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106dce00(A...); SCStr * __thiscall m_FUN_106dd0d0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106dd0d0(A...); SCStr * __thiscall m_FUN_106dd100(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106dd100(A...); undefined4 * __thiscall m_FUN_106dd130(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106dd130(A...); undefined4 * __thiscall m_FUN_106dd150(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106dd150(A...); SCStr * __thiscall m_FUN_106dd170(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_106dd170(A...); SCStr * __thiscall m_FUN_106dd1a0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_106dd1a0(A...); SCStr * __thiscall m_FUN_106dd1d0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_106dd1d0(A...); int * __thiscall m_FUN_106dd4f0(int *param_2,SCStr *param_3); template<class... A> int m_FUN_106dd4f0(A...); undefined4 * __thiscall m_FUN_106dde00(undefined4 param_2); template<class... A> int m_FUN_106dde00(A...); undefined4 * __thiscall m_FUN_106dde20(undefined4 param_2); template<class... A> int m_FUN_106dde20(A...); void __thiscall m_FUN_106df5c0(int param_2); template<class... A> int m_FUN_106df5c0(A...); void __thiscall m_FUN_106df630(int param_2); template<class... A> int m_FUN_106df630(A...); void __thiscall m_FUN_106df6c0(int *param_2); template<class... A> int m_FUN_106df6c0(A...); void __thiscall m_FUN_106df730(int *param_2); template<class... A> int m_FUN_106df730(A...); undefined4 * __thiscall m_FUN_106dff30(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106dff30(A...); undefined4 * __thiscall m_FUN_106dff70(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106dff70(A...); undefined4 * __thiscall m_FUN_106dff90(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_106dff90(A...); undefined4 * __thiscall m_FUN_106dffd0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_106dffd0(A...); undefined4 * __thiscall m_FUN_106e0020(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_106e0020(A...); int * __thiscall m_FUN_106e0100(int *param_2); template<class... A> int m_FUN_106e0100(A...); int * __thiscall m_FUN_106e0170(int *param_2); template<class... A> int m_FUN_106e0170(A...); void __thiscall m_FUN_106e0440(undefined4 param_2); template<class... A> int m_FUN_106e0440(A...); void __thiscall m_FUN_106e0460(undefined4 *param_2); template<class... A> int m_FUN_106e0460(A...); void __thiscall m_FUN_106e0520(undefined4 *param_2); template<class... A> int m_FUN_106e0520(A...); void __thiscall m_FUN_106e0550(undefined4 param_2); template<class... A> int m_FUN_106e0550(A...); void __thiscall m_FUN_106e0570(undefined4 *param_2); template<class... A> int m_FUN_106e0570(A...); void __thiscall m_FUN_106e0bc0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106e0bc0(A...); void __thiscall m_FUN_106e10c0(undefined4 param_2); template<class... A> int m_FUN_106e10c0(A...); undefined4 * __thiscall m_FUN_106e1510(undefined4 param_2); template<class... A> int m_FUN_106e1510(A...); undefined4 * __thiscall m_FUN_106e1570(int param_2); template<class... A> int m_FUN_106e1570(A...); undefined4 * __thiscall m_FUN_106e1910(undefined4 param_2); template<class... A> int m_FUN_106e1910(A...); undefined4 * __thiscall m_FUN_106e2780(undefined4 param_2); template<class... A> int m_FUN_106e2780(A...); undefined4 * __thiscall m_FUN_106e27e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106e27e0(A...); undefined4 * __thiscall m_FUN_106e2890(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_106e2890(A...); undefined4 * __thiscall m_FUN_106e28b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_106e28b0(A...); undefined4 * __thiscall m_FUN_106e28d0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106e28d0(A...); undefined4 * __thiscall m_FUN_106e2910(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106e2910(A...); undefined4 * __thiscall m_FUN_106e29d0(undefined4 *param_2); template<class... A> int m_FUN_106e29d0(A...); undefined4 * __thiscall m_FUN_106e2b30(undefined4 *param_2); template<class... A> int m_FUN_106e2b30(A...); undefined4 * __thiscall m_FUN_106e2c50(undefined4 param_2); template<class... A> int m_FUN_106e2c50(A...); undefined4 * __thiscall m_FUN_106e2da0(undefined4 param_2); template<class... A> int m_FUN_106e2da0(A...); undefined4 * __thiscall m_FUN_106e34e0(undefined4 param_2); template<class... A> int m_FUN_106e34e0(A...); undefined4 * __thiscall m_FUN_106e3630(undefined4 param_2); template<class... A> int m_FUN_106e3630(A...); undefined4 * __thiscall m_FUN_106e3780(undefined4 param_2); template<class... A> int m_FUN_106e3780(A...); undefined4 * __thiscall m_FUN_106e3cf0(undefined4 param_2); template<class... A> int m_FUN_106e3cf0(A...); undefined4 * __thiscall m_FUN_106e4950(undefined4 *param_2); template<class... A> int m_FUN_106e4950(A...); undefined4 * __thiscall m_FUN_106e4980(undefined4 *param_2); template<class... A> int m_FUN_106e4980(A...); void __thiscall m_FUN_106e6f00(int param_2); template<class... A> int m_FUN_106e6f00(A...); void __thiscall m_FUN_106e6f30(int param_2); template<class... A> int m_FUN_106e6f30(A...); uint __thiscall m_FUN_106e6f60(uint param_2); template<class... A> int m_FUN_106e6f60(A...); uint __thiscall m_FUN_106e6fa0(uint param_2); template<class... A> int m_FUN_106e6fa0(A...); void __thiscall m_FUN_106e7760(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106e7760(A...); void __thiscall m_FUN_106e7820(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106e7820(A...); void __thiscall m_FUN_106e7840(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_106e7840(A...); void __thiscall m_FUN_106e7860(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106e7860(A...); void __thiscall m_FUN_106e7880(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_106e7880(A...); undefined4 * __thiscall m_FUN_106e8c80(undefined4 *param_2); template<class... A> int m_FUN_106e8c80(A...); undefined4 * __thiscall m_FUN_106e8cb0(undefined4 *param_2); template<class... A> int m_FUN_106e8cb0(A...); SCStr * __thiscall m_FUN_106ed330(SCStr *param_2); template<class... A> int m_FUN_106ed330(A...); void __thiscall m_FUN_106f2550(undefined4 param_2,char param_3); template<class... A> int m_FUN_106f2550(A...); void __thiscall m_FUN_106f4a20(undefined4 param_2); template<class... A> int m_FUN_106f4a20(A...); void __thiscall m_FUN_106f6b60(undefined4 param_2); template<class... A> int m_FUN_106f6b60(A...); void __thiscall m_FUN_106f6e40(SCStr *param_2); template<class... A> int m_FUN_106f6e40(A...); void __thiscall m_FUN_106f6e70(SCStr *param_2); template<class... A> int m_FUN_106f6e70(A...); undefined4 * __thiscall m_FUN_106f7160(undefined4 param_2); template<class... A> int m_FUN_106f7160(A...); undefined4 * __thiscall m_FUN_106f76c0(undefined4 param_2); template<class... A> int m_FUN_106f76c0(A...); undefined4 * __thiscall m_FUN_106f7ae0(undefined4 param_2); template<class... A> int m_FUN_106f7ae0(A...); undefined4 * __thiscall m_FUN_106f9b30(undefined4 *param_2); template<class... A> int m_FUN_106f9b30(A...); SCStr * __thiscall m_FUN_106fb500(SCStr *param_2); template<class... A> int m_FUN_106fb500(A...); void __thiscall m_FUN_106fd6e0(SCStr *param_2); template<class... A> int m_FUN_106fd6e0(A...); void __thiscall m_FUN_106fd710(SCStr *param_2); template<class... A> int m_FUN_106fd710(A...); int * __thiscall m_FUN_106fd740(int *param_2); template<class... A> int m_FUN_106fd740(A...); undefined4 * __thiscall m_FUN_106fd800(undefined4 param_2); template<class... A> int m_FUN_106fd800(A...); undefined4 * __thiscall m_FUN_106fdc50(undefined4 param_2); template<class... A> int m_FUN_106fdc50(A...); undefined4 * __thiscall m_FUN_106fdda0(undefined4 param_2); template<class... A> int m_FUN_106fdda0(A...); undefined4 * __thiscall m_FUN_106fdef0(undefined4 param_2); template<class... A> int m_FUN_106fdef0(A...); undefined4 * __thiscall m_FUN_106fe040(undefined4 param_2); template<class... A> int m_FUN_106fe040(A...); undefined4 * __thiscall m_FUN_106fe1a0(undefined4 param_2); template<class... A> int m_FUN_106fe1a0(A...); void __thiscall m_FUN_10702af0(undefined4 param_2); template<class... A> int m_FUN_10702af0(A...); int * __thiscall m_FUN_10702b00(int *param_2); template<class... A> int m_FUN_10702b00(A...); undefined4 * __thiscall m_FUN_10702bb0(undefined4 param_2); template<class... A> int m_FUN_10702bb0(A...); undefined4 * __thiscall m_FUN_10702f10(undefined4 param_2); template<class... A> int m_FUN_10702f10(A...); undefined4 * __thiscall m_FUN_10703060(undefined4 param_2); template<class... A> int m_FUN_10703060(A...); undefined4 * __thiscall m_FUN_10703220(undefined4 param_2); template<class... A> int m_FUN_10703220(A...); undefined4 * __thiscall m_FUN_10704b80(undefined4 *param_2); template<class... A> int m_FUN_10704b80(A...); SCStr * __thiscall m_FUN_10706810(SCStr *param_2); template<class... A> int m_FUN_10706810(A...); int * __thiscall m_FUN_10708c60(int *param_2); template<class... A> int m_FUN_10708c60(A...); undefined4 * __thiscall m_FUN_10708e00(undefined4 param_2); template<class... A> int m_FUN_10708e00(A...); undefined4 * __thiscall m_FUN_107095f0(undefined4 param_2); template<class... A> int m_FUN_107095f0(A...); undefined4 * __thiscall m_FUN_107099d0(undefined4 param_2); template<class... A> int m_FUN_107099d0(A...); SCStr * __thiscall m_FUN_1070dc00(SCStr *param_2); template<class... A> int m_FUN_1070dc00(A...); SCStr * __thiscall m_FUN_1070dc40(SCStr *param_2); template<class... A> int m_FUN_1070dc40(A...); SCStr * __thiscall m_FUN_1070dc60(SCStr *param_2); template<class... A> int m_FUN_1070dc60(A...); SCStr * __thiscall m_FUN_1070dc80(SCStr *param_2); template<class... A> int m_FUN_1070dc80(A...); void __thiscall m_FUN_10711ce0(undefined1 param_2); template<class... A> int m_FUN_10711ce0(A...); undefined4 * __thiscall m_FUN_107123c0(undefined4 param_2); template<class... A> int m_FUN_107123c0(A...); undefined4 * __thiscall m_FUN_10712720(undefined4 param_2); template<class... A> int m_FUN_10712720(A...); undefined4 * __thiscall m_FUN_107128e0(undefined4 param_2); template<class... A> int m_FUN_107128e0(A...); undefined4 * __thiscall m_FUN_10712a60(undefined4 param_2); template<class... A> int m_FUN_10712a60(A...); int * __thiscall m_FUN_10718190(int *param_2); template<class... A> int m_FUN_10718190(A...); int * __thiscall m_FUN_10718210(int *param_2); template<class... A> int m_FUN_10718210(A...); undefined4 * __thiscall m_FUN_107183e0(undefined4 param_2); template<class... A> int m_FUN_107183e0(A...); undefined4 * __thiscall m_FUN_10718900(undefined4 param_2); template<class... A> int m_FUN_10718900(A...); undefined4 * __thiscall m_FUN_10718a50(undefined4 param_2); template<class... A> int m_FUN_10718a50(A...); undefined4 * __thiscall m_FUN_10718bc0(undefined4 param_2); template<class... A> int m_FUN_10718bc0(A...); undefined4 * __thiscall m_FUN_10718d40(undefined4 param_2); template<class... A> int m_FUN_10718d40(A...); undefined4 * __thiscall m_FUN_10718e90(undefined4 param_2); template<class... A> int m_FUN_10718e90(A...); SCStr * __thiscall m_FUN_1071e340(SCStr *param_2); template<class... A> int m_FUN_1071e340(A...); SCStr * __thiscall m_FUN_1071e610(SCStr *param_2); template<class... A> int m_FUN_1071e610(A...); SCStr * __thiscall m_FUN_1071e630(SCStr *param_2); template<class... A> int m_FUN_1071e630(A...); SCStr * __thiscall m_FUN_1071ea60(SCStr *param_2); template<class... A> int m_FUN_1071ea60(A...); void __thiscall m_FUN_10722fc0(SCStr *param_2); template<class... A> int m_FUN_10722fc0(A...); void __thiscall m_FUN_10722ff0(SCStr *param_2); template<class... A> int m_FUN_10722ff0(A...); void __thiscall m_FUN_10723020(undefined1 *param_2); template<class... A> int m_FUN_10723020(A...); undefined4 * __thiscall m_FUN_10723080(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10723080(A...); undefined4 * __thiscall m_FUN_10723320(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10723320(A...); undefined4 * __thiscall m_FUN_10723340(undefined4 param_2); template<class... A> int m_FUN_10723340(A...); undefined4 * __thiscall m_FUN_10723350(undefined4 param_2); template<class... A> int m_FUN_10723350(A...); undefined4 * __thiscall m_FUN_10723360(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10723360(A...); undefined4 * __thiscall m_FUN_10723420(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10723420(A...); undefined4 * __thiscall m_FUN_107236e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_107236e0(A...); undefined4 * __thiscall m_FUN_10723700(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10723700(A...); undefined4 * __thiscall m_FUN_10724e30(undefined4 param_2); template<class... A> int m_FUN_10724e30(A...); undefined4 * __thiscall m_FUN_10726c00(undefined4 param_2); template<class... A> int m_FUN_10726c00(A...); undefined4 * __thiscall m_FUN_10726d20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10726d20(A...); undefined4 * __thiscall m_FUN_10726d90(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10726d90(A...); undefined4 * __thiscall m_FUN_10726f60(undefined4 *param_2); template<class... A> int m_FUN_10726f60(A...); undefined4 * __thiscall m_FUN_107275a0(undefined4 param_2); template<class... A> int m_FUN_107275a0(A...); undefined4 * __thiscall m_FUN_107276f0(undefined4 param_2); template<class... A> int m_FUN_107276f0(A...); undefined4 * __thiscall m_FUN_10727840(undefined4 param_2); template<class... A> int m_FUN_10727840(A...); undefined4 * __thiscall m_FUN_10727990(undefined4 param_2); template<class... A> int m_FUN_10727990(A...); undefined4 * __thiscall m_FUN_10727f00(undefined4 param_2); template<class... A> int m_FUN_10727f00(A...); undefined4 * __thiscall m_FUN_10728050(undefined4 param_2); template<class... A> int m_FUN_10728050(A...); undefined4 * __thiscall m_FUN_107281a0(undefined4 param_2); template<class... A> int m_FUN_107281a0(A...); undefined4 * __thiscall m_FUN_107282f0(undefined4 param_2); template<class... A> int m_FUN_107282f0(A...); undefined4 * __thiscall m_FUN_10728440(undefined4 param_2); template<class... A> int m_FUN_10728440(A...); undefined4 * __thiscall m_FUN_107287a0(undefined4 param_2); template<class... A> int m_FUN_107287a0(A...); undefined4 * __thiscall m_FUN_107291a0(undefined4 param_2); template<class... A> int m_FUN_107291a0(A...); undefined4 * __thiscall m_FUN_1072a750(undefined4 *param_2); template<class... A> int m_FUN_1072a750(A...); undefined4 * __thiscall m_FUN_1072a780(undefined4 *param_2); template<class... A> int m_FUN_1072a780(A...); undefined4 * __thiscall m_FUN_1072a7b0(undefined4 *param_2); template<class... A> int m_FUN_1072a7b0(A...); int * __thiscall m_FUN_1072bd10(int *param_2); template<class... A> int m_FUN_1072bd10(A...); int * __thiscall m_FUN_1072bd70(int *param_2); template<class... A> int m_FUN_1072bd70(A...); int __thiscall m_FUN_1072beb0(int param_2); template<class... A> int m_FUN_1072beb0(A...); void __thiscall m_FUN_1072e550(int param_2); template<class... A> int m_FUN_1072e550(A...); void __thiscall m_FUN_1072e650(int *param_2); template<class... A> int m_FUN_1072e650(A...); SCStr * __thiscall m_FUN_10743050(SCStr *param_2); template<class... A> int m_FUN_10743050(A...); undefined4 * __thiscall m_FUN_1074b0f0(undefined4 param_2); template<class... A> int m_FUN_1074b0f0(A...); undefined4 * __thiscall m_FUN_1074b230(undefined4 param_2); template<class... A> int m_FUN_1074b230(A...); undefined4 * __thiscall m_FUN_1074ca30(undefined4 param_2); template<class... A> int m_FUN_1074ca30(A...); undefined4 * __thiscall m_FUN_1074cb70(undefined4 param_2); template<class... A> int m_FUN_1074cb70(A...); undefined4 * __thiscall m_FUN_1074ed40(undefined4 param_2); template<class... A> int m_FUN_1074ed40(A...); undefined4 * __thiscall m_FUN_1074fa60(undefined4 param_2); template<class... A> int m_FUN_1074fa60(A...); undefined4 * __thiscall m_FUN_1074fbb0(undefined4 param_2); template<class... A> int m_FUN_1074fbb0(A...); undefined4 * __thiscall m_FUN_1074fd10(undefined4 param_2); template<class... A> int m_FUN_1074fd10(A...); undefined4 * __thiscall m_FUN_1074fe60(undefined4 param_2); template<class... A> int m_FUN_1074fe60(A...); undefined4 * __thiscall m_FUN_1074ffb0(undefined4 param_2); template<class... A> int m_FUN_1074ffb0(A...); undefined4 * __thiscall m_FUN_10750100(undefined4 param_2); template<class... A> int m_FUN_10750100(A...); void __thiscall m_FUN_107581c0(undefined4 param_2); template<class... A> int m_FUN_107581c0(A...); void __thiscall m_FUN_107581d0(undefined1 param_2); template<class... A> int m_FUN_107581d0(A...); int * __thiscall m_FUN_10758260(int *param_2); template<class... A> int m_FUN_10758260(A...); undefined4 * __thiscall m_FUN_10758350(undefined4 param_2); template<class... A> int m_FUN_10758350(A...); undefined4 * __thiscall m_FUN_10758a30(undefined4 param_2); template<class... A> int m_FUN_10758a30(A...); undefined4 * __thiscall m_FUN_10758b90(undefined4 param_2); template<class... A> int m_FUN_10758b90(A...); undefined4 * __thiscall m_FUN_10758ce0(undefined4 param_2); template<class... A> int m_FUN_10758ce0(A...); undefined4 * __thiscall m_FUN_10758e30(undefined4 param_2); template<class... A> int m_FUN_10758e30(A...); undefined4 * __thiscall m_FUN_10758fb0(undefined4 param_2); template<class... A> int m_FUN_10758fb0(A...); undefined4 * __thiscall m_FUN_10759100(undefined4 param_2); template<class... A> int m_FUN_10759100(A...); undefined4 * __thiscall m_FUN_10759250(undefined4 param_2); template<class... A> int m_FUN_10759250(A...); void __thiscall m_FUN_10762610(undefined1 param_2); template<class... A> int m_FUN_10762610(A...); void __thiscall m_FUN_10762620(undefined4 param_2); template<class... A> int m_FUN_10762620(A...); undefined4 * __thiscall m_FUN_107626e0(undefined4 param_2); template<class... A> int m_FUN_107626e0(A...); undefined4 * __thiscall m_FUN_10762a20(undefined4 param_2); template<class... A> int m_FUN_10762a20(A...); undefined4 * __thiscall m_FUN_10762b80(undefined4 param_2); template<class... A> int m_FUN_10762b80(A...); undefined4 * __thiscall m_FUN_10762cd0(undefined4 param_2); template<class... A> int m_FUN_10762cd0(A...); void __thiscall m_FUN_10767680(undefined1 param_2); template<class... A> int m_FUN_10767680(A...); undefined4 * __thiscall m_FUN_10767870(undefined4 param_2); template<class... A> int m_FUN_10767870(A...); undefined4 * __thiscall m_FUN_10767aa0(undefined4 param_2); template<class... A> int m_FUN_10767aa0(A...); undefined4 * __thiscall m_FUN_10767bf0(undefined4 param_2); template<class... A> int m_FUN_10767bf0(A...); undefined4 * __thiscall m_FUN_1076c000(undefined4 param_2); template<class... A> int m_FUN_1076c000(A...); undefined4 * __thiscall m_FUN_1076c610(undefined4 param_2); template<class... A> int m_FUN_1076c610(A...); undefined4 * __thiscall m_FUN_1076c770(undefined4 param_2); template<class... A> int m_FUN_1076c770(A...); undefined4 * __thiscall m_FUN_1076c8c0(undefined4 param_2); template<class... A> int m_FUN_1076c8c0(A...); undefined4 * __thiscall m_FUN_1076ca10(undefined4 param_2); template<class... A> int m_FUN_1076ca10(A...); void __thiscall m_FUN_10772ea0(undefined4 param_2); template<class... A> int m_FUN_10772ea0(A...); undefined4 * __thiscall m_FUN_10772f80(undefined4 param_2); template<class... A> int m_FUN_10772f80(A...); undefined4 * __thiscall m_FUN_107733d0(undefined4 param_2); template<class... A> int m_FUN_107733d0(A...); undefined4 * __thiscall m_FUN_10773540(undefined4 param_2); template<class... A> int m_FUN_10773540(A...); undefined4 * __thiscall m_FUN_10773690(undefined4 param_2); template<class... A> int m_FUN_10773690(A...); undefined4 * __thiscall m_FUN_10773800(undefined4 param_2); template<class... A> int m_FUN_10773800(A...); };

extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int isalnum(...);
extern int operator_new(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101b2c50(...);
extern int thunk_FUN_101b5540(...);
template<class... A> int __stdcall thunk_FUN_102460b0(A...);
template<class... A> int __stdcall thunk_FUN_10246170(A...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10304120(...);
extern int thunk_FUN_10304a70(...);
extern int thunk_FUN_103d0730(...);
template<class... A> int __stdcall thunk_FUN_103d3340(A...);
extern int thunk_FUN_10478ea0(...);
extern int thunk_FUN_105a05f0(...);
extern int thunk_FUN_105a0660(...);
extern int thunk_FUN_105a3010(...);
extern int thunk_FUN_105ad8f0(...);
extern int thunk_FUN_105ad900(...);
template<class... A> int __stdcall thunk_FUN_106aaa10(A...);
extern int thunk_FUN_106ac6f0(...);
template<class... A> int __stdcall thunk_FUN_106b1900(A...);
extern int thunk_FUN_106d6de0(...);
template<class... A> int __stdcall thunk_FUN_106d8e50(A...);
extern int thunk_FUN_106d91c0(...);
extern int thunk_FUN_106d9220(...);
template<class... A> int __stdcall thunk_FUN_106da030(A...);
extern int thunk_FUN_106da540(...);
extern int thunk_FUN_106da680(...);
extern int thunk_FUN_106da820(...);
extern int thunk_FUN_106dbf00(...);
template<class... A> int __stdcall thunk_FUN_106e05a0(A...);
extern int thunk_FUN_106e0c90(...);
extern int thunk_FUN_106e0d30(...);
template<class... A> int __stdcall thunk_FUN_106e1600(A...);
extern int thunk_FUN_106e79e0(...);
extern int thunk_FUN_106e7a50(...);
template<class... A> int __stdcall thunk_FUN_10bcef80(A...);
extern int thunk_FUN_10dec580(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10df39a0(...);
extern int thunk_FUN_10eb4020(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
template<class... A> int __stdcall thunk_FUN_10eb4cc0(A...);
template<class... A> int __stdcall thunk_FUN_10eb4d80(A...);
extern int thunk_FUN_10eb4e80(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ebc1e0(...);
template<class... A> int __stdcall thunk_FUN_10f19cf0(A...);
extern int thunk_FUN_1106b190(...);
template<class... A> int __stdcall thunk_FUN_1126a120(A...);
extern int thunk_FUN_112a7c30(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1145ad70(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_11d330dc;
extern int DAT_12126b84;
extern int DAT_121a2764;
extern int DAT_121a279c;
extern int DAT_121a27a8;
extern int DAT_121a27ac;
extern int DAT_121a27b0;
extern int DAT_121a27b4;
extern int DAT_121a27b8;
extern int DAT_121a27bc;
extern int DAT_121a27c0;
extern int DAT_121a27c4;
extern int DAT_121a27c8;
extern int DAT_121a27cc;
extern int DAT_121a27d0;
extern int DAT_121a27d4;
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
extern int g_lSCObjCount;
extern int ghidra_vftable_SCAccountBluetoothPermissionsPage;
extern int ghidra_vftable_SCAccountBluetoothServicesPage;
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
extern int ghidra_vftable_SCAccountGeneralNetworkErrorPage;
extern int ghidra_vftable_SCAccountLocationPermissionsPage;
extern int ghidra_vftable_SCAccountLocationServicesPage;
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
extern int ghidra_vftable_SCAccountWelcomePage;
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
extern int ghidra_vftable_SCConditionalElementTree;
extern int ghidra_vftable_SCConditionalElementTreeIfChainInterface;
extern int ghidra_vftable_SCConditionalElementTreeNoAppendInterface;
extern int ghidra_vftable_SCDiagnostics;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCNewWiz;
extern int ghidra_vftable_SCNewWizPage;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizParams;
extern int ghidra_vftable_SCNewWizStateType;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCSubwizState;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCTestPoint;
extern int ghidra_vftable_SCTestPointCollection;
extern int ghidra_vftable_SCTestPointManager;
extern int ghidra_vftable_SwfUpnpClientInterface;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack_8;
extern undefined1 LAB_1154fc30[];
extern undefined1 LAB_1154fc60[];
extern undefined1 LAB_115e0920[];
extern undefined1 LAB_115e0ff0[];
extern undefined1 LAB_1172d640[];
extern void *ExceptionList;
extern int FUN_10ebc110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106bcd90(uint param_1);
template<class... A> int FUN_106bcd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106bd230(int param_1);
template<class... A> int FUN_106bd230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106bd240(int *param_1);
template<class... A> int FUN_106bd240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106bd250(int *param_1);
template<class... A> int FUN_106bd250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106bd260(int *param_1);
template<class... A> int FUN_106bd260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106bd270(int *param_1);
template<class... A> int FUN_106bd270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106bd3e0(int param_1);
template<class... A> int FUN_106bd3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106be140(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_106be140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106be190(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_106be190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106be1e0(int param_1,int param_2);
template<class... A> int FUN_106be1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106be230(int param_1,int param_2);
template<class... A> int FUN_106be230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106be370(undefined4 *param_1);
template<class... A> int FUN_106be370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106be380(undefined4 *param_1);
template<class... A> int FUN_106be380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106be390(undefined4 *param_1);
template<class... A> int FUN_106be390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106be720(int param_1);
template<class... A> int FUN_106be720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106bed40(undefined4 *param_1);
template<class... A> int FUN_106bed40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_106c1790(int param_1);
template<class... A> int FUN_106c1790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_106c4480(int param_1);
template<class... A> int FUN_106c4480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106c6c00(int param_1);
template<class... A> int FUN_106c6c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106c6c10(int param_1);
template<class... A> int FUN_106c6c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106c7450(int param_1);
template<class... A> int FUN_106c7450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_106c7460(int param_1);
template<class... A> int FUN_106c7460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_106c8810(char *param_1);
template<class... A> int __stdcall FUN_106c8810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106c9cd0(int *param_1);
template<class... A> int FUN_106c9cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106c9ce0(int *param_1);
template<class... A> int FUN_106c9ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106ca050(int *param_1);
template<class... A> int FUN_106ca050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_106ca060(undefined4 param_1);
template<class... A> int __stdcall FUN_106ca060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_106ca0a0(float *param_1);
template<class... A> int FUN_106ca0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ca0b0(void);
template<class... A> int FUN_106ca0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ca0c0(void);
template<class... A> int FUN_106ca0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ca0d0(void);
template<class... A> int FUN_106ca0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ca0e0(void);
template<class... A> int FUN_106ca0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ca0f0(void);
template<class... A> int FUN_106ca0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ca100(void);
template<class... A> int FUN_106ca100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ca110(void);
template<class... A> int FUN_106ca110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ca120(void);
template<class... A> int FUN_106ca120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ca130(void);
template<class... A> int FUN_106ca130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ca140(void);
template<class... A> int FUN_106ca140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ca150(void);
template<class... A> int FUN_106ca150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ca160(void);
template<class... A> int FUN_106ca160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106cc630(undefined4 param_1);
template<class... A> int FUN_106cc630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106cc640(undefined4 param_1);
template<class... A> int FUN_106cc640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106cc690(undefined4 *param_1);
template<class... A> int FUN_106cc690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106cc6a0(undefined4 *param_1);
template<class... A> int FUN_106cc6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106cc6b0(undefined4 *param_1);
template<class... A> int FUN_106cc6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106cca00(undefined4 *param_1);
template<class... A> int FUN_106cca00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106cca30(undefined4 *param_1);
template<class... A> int FUN_106cca30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106cca60(undefined4 *param_1);
template<class... A> int FUN_106cca60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106cca90(undefined4 *param_1);
template<class... A> int FUN_106cca90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ce7d0(undefined4 param_1);
template<class... A> int FUN_106ce7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ce7e0(undefined4 param_1);
template<class... A> int FUN_106ce7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ce7f0(undefined4 param_1);
template<class... A> int FUN_106ce7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106cef70(int param_1);
template<class... A> int FUN_106cef70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106cef80(int param_1);
template<class... A> int FUN_106cef80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106cef90(int *param_1);
template<class... A> int FUN_106cef90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106cefa0(int *param_1);
template<class... A> int FUN_106cefa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106cefd0(int *param_1);
template<class... A> int FUN_106cefd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106cefe0(int *param_1);
template<class... A> int FUN_106cefe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106cfdc0(undefined4 param_1);
template<class... A> int FUN_106cfdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106cfdd0(undefined4 *param_1);
template<class... A> int FUN_106cfdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106cfe70(int param_1);
template<class... A> int FUN_106cfe70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106cfe80(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106cfe80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106cff10(undefined4 *param_1);
template<class... A> int FUN_106cff10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d0200(undefined4 *param_1);
template<class... A> int FUN_106d0200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106d0210(int param_1);
template<class... A> int FUN_106d0210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d0220(int param_1);
template<class... A> int FUN_106d0220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106d0400(int param_1);
template<class... A> int FUN_106d0400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d0410(int param_1);
template<class... A> int FUN_106d0410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106d0420(int param_1);
template<class... A> int FUN_106d0420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d0aa0(undefined4 *param_1);
template<class... A> int FUN_106d0aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d0ac0(int param_1);
template<class... A> int FUN_106d0ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d0d50(undefined4 *param_1);
template<class... A> int FUN_106d0d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d1250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106d1250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d12b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_106d12b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d1760(void);
template<class... A> int FUN_106d1760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d1770(void);
template<class... A> int FUN_106d1770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d1810(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d1810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d1820(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d1820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d1830(void);
template<class... A> int FUN_106d1830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d1ae0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106d1ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d1ba0(undefined4 param_1);
template<class... A> int FUN_106d1ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d1cf0(undefined4 param_1);
template<class... A> int FUN_106d1cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_106d1d00(int param_1,SCStr *param_2);
template<class... A> int FUN_106d1d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d1fd0(undefined4 param_1);
template<class... A> int FUN_106d1fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d1fe0(undefined4 param_1);
template<class... A> int FUN_106d1fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d2030(undefined4 param_1);
template<class... A> int FUN_106d2030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d2040(undefined4 param_1);
template<class... A> int FUN_106d2040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d2050(undefined4 param_1);
template<class... A> int FUN_106d2050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d2060(undefined4 param_1);
template<class... A> int FUN_106d2060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d2070(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_106d2070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106d2130(int *param_1,int *param_2);
template<class... A> int FUN_106d2130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d21a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d21a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d21c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d21c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d21e0(undefined4 param_1);
template<class... A> int FUN_106d21e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d21f0(undefined4 param_1);
template<class... A> int FUN_106d21f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d2240(undefined4 param_1);
template<class... A> int FUN_106d2240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d24c0(undefined4 *param_1);
template<class... A> int FUN_106d24c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d2620(undefined4 *param_1);
template<class... A> int FUN_106d2620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d2640(undefined4 param_1);
template<class... A> int FUN_106d2640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d2650(undefined4 *param_1);
template<class... A> int FUN_106d2650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d29c0(undefined4 *param_1);
template<class... A> int FUN_106d29c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d31f0(undefined4 *param_1);
template<class... A> int FUN_106d31f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106d3200(int *param_1);
template<class... A> int FUN_106d3200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d3210(undefined4 *param_1);
template<class... A> int FUN_106d3210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106d3220(int *param_1);
template<class... A> int FUN_106d3220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106d3230(int *param_1);
template<class... A> int FUN_106d3230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106d3240(int *param_1);
template<class... A> int FUN_106d3240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106d3250(int *param_1);
template<class... A> int FUN_106d3250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106d3650(undefined4 *param_1);
template<class... A> int FUN_106d3650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106d36a0(int param_1);
template<class... A> int FUN_106d36a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d3ed0(undefined4 param_1);
template<class... A> int FUN_106d3ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d3ee0(undefined4 param_1);
template<class... A> int FUN_106d3ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d3ef0(undefined4 param_1);
template<class... A> int FUN_106d3ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d3f00(undefined4 param_1);
template<class... A> int FUN_106d3f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d3f10(undefined4 param_1);
template<class... A> int FUN_106d3f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d3f20(undefined4 param_1);
template<class... A> int FUN_106d3f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d3f30(undefined4 param_1);
template<class... A> int FUN_106d3f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d3f40(undefined4 param_1);
template<class... A> int FUN_106d3f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106d4250(int param_1);
template<class... A> int FUN_106d4250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106d4320(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_106d4320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d4330(int param_1);
template<class... A> int FUN_106d4330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106d4ce0(uint param_1);
template<class... A> int FUN_106d4ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106d4da0(int param_1);
template<class... A> int FUN_106d4da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d4dd0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_106d4dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106d4e20(int param_1,int param_2);
template<class... A> int FUN_106d4e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d4e80(undefined4 *param_1);
template<class... A> int FUN_106d4e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106d5a50(int param_1);
template<class... A> int FUN_106d5a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d5a80(int param_1);
template<class... A> int FUN_106d5a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_106d5cf0(undefined4 param_1);
template<class... A> int __stdcall FUN_106d5cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d5dd0(void);
template<class... A> int FUN_106d5dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_106d6730(void);
template<class... A> int FUN_106d6730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106d6750(int param_1);
template<class... A> int FUN_106d6750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d6890(void);
template<class... A> int FUN_106d6890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d68a0(void);
template<class... A> int FUN_106d68a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106d6b10(undefined4 param_1);
template<class... A> int __stdcall FUN_106d6b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d6b30(undefined4 param_1);
template<class... A> int FUN_106d6b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d6b40(undefined4 param_1);
template<class... A> int FUN_106d6b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d6d40(undefined4 *param_1);
template<class... A> int FUN_106d6d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d6d50(undefined4 *param_1);
template<class... A> int FUN_106d6d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106d6eb0(undefined4 *param_1);
template<class... A> int FUN_106d6eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d7660(void);
template<class... A> int FUN_106d7660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106d7ac0(undefined4 *param_1);
template<class... A> int FUN_106d7ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106d7ad0(undefined4 *param_1);
template<class... A> int FUN_106d7ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106d7ae0(undefined4 *param_1);
template<class... A> int FUN_106d7ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d82d0(void);
template<class... A> int FUN_106d82d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d82e0(void);
template<class... A> int FUN_106d82e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d88f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106d88f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d8910(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106d8910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d8930(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106d8930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d8950(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106d8950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d8a30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_106d8a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d8a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_106d8a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d8a70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_106d8a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d8cb0(void);
template<class... A> int FUN_106d8cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d8cd0(void);
template<class... A> int FUN_106d8cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d8cf0(void);
template<class... A> int FUN_106d8cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d8d10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d8d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d8d20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d8d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d8d30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d8d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d8d40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d8d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d8d50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d8d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d8d60(void);
template<class... A> int FUN_106d8d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d8d70(void);
template<class... A> int FUN_106d8d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d8d80(void);
template<class... A> int FUN_106d8d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d8d90(void);
template<class... A> int FUN_106d8d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d9400(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106d9400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d9420(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106d9420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d9440(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106d9440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d9460(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106d9460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d9480(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106d9480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d94a0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106d94a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_106d94c0(uint param_1);
template<class... A> int FUN_106d94c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d94e0(undefined4 *param_1);
template<class... A> int FUN_106d94e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d94f0(undefined4 param_1);
template<class... A> int FUN_106d94f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9500(undefined4 param_1);
template<class... A> int FUN_106d9500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_106d9510(int param_1,uint *param_2);
template<class... A> int FUN_106d9510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_106d9540(int param_1,uint *param_2);
template<class... A> int FUN_106d9540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9790(undefined4 *param_1);
template<class... A> int FUN_106d9790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d97a0(undefined4 *param_1);
template<class... A> int FUN_106d97a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d97b0(undefined4 param_1);
template<class... A> int FUN_106d97b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d97c0(undefined4 param_1);
template<class... A> int FUN_106d97c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d97d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
template<class... A> int FUN_106d97d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9810(undefined4 param_1);
template<class... A> int FUN_106d9810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9820(undefined4 param_1);
template<class... A> int FUN_106d9820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9830(undefined4 param_1);
template<class... A> int FUN_106d9830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9840(undefined4 param_1);
template<class... A> int FUN_106d9840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9850(undefined4 param_1);
template<class... A> int FUN_106d9850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9860(undefined4 param_1);
template<class... A> int FUN_106d9860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9870(undefined4 param_1);
template<class... A> int FUN_106d9870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9880(undefined4 param_1);
template<class... A> int FUN_106d9880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9890(undefined4 param_1);
template<class... A> int FUN_106d9890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d98a0(undefined4 param_1);
template<class... A> int FUN_106d98a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d98b0(undefined4 param_1);
template<class... A> int FUN_106d98b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d98c0(undefined4 param_1);
template<class... A> int FUN_106d98c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d98d0(undefined4 param_1);
template<class... A> int FUN_106d98d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d98e0(undefined4 param_1);
template<class... A> int FUN_106d98e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d98f0(undefined4 param_1);
template<class... A> int FUN_106d98f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9900(undefined4 param_1);
template<class... A> int FUN_106d9900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d9910(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_106d9910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d9930(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_106d9930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d9950(undefined4 param_1,undefined8 *param_2,undefined8 *param_3);
template<class... A> int FUN_106d9950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d9970(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_106d9970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d9980(void);
template<class... A> int FUN_106d9980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d9990(void);
template<class... A> int FUN_106d9990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d99a0(void);
template<class... A> int FUN_106d99a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d99b0(undefined4 param_1,int *param_2);
template<class... A> int FUN_106d99b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9a20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d9a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9a40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d9a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9a60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d9a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9a80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d9a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9aa0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106d9aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9ac0(undefined4 param_1);
template<class... A> int FUN_106d9ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9ad0(undefined4 param_1);
template<class... A> int FUN_106d9ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9ae0(undefined4 param_1);
template<class... A> int FUN_106d9ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9af0(undefined4 param_1);
template<class... A> int FUN_106d9af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9b00(undefined4 param_1);
template<class... A> int FUN_106d9b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9b10(undefined4 param_1);
template<class... A> int FUN_106d9b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9b20(undefined4 param_1);
template<class... A> int FUN_106d9b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9b30(undefined4 param_1);
template<class... A> int FUN_106d9b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9b40(undefined4 param_1);
template<class... A> int FUN_106d9b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9b50(undefined4 param_1);
template<class... A> int FUN_106d9b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9b60(undefined4 param_1);
template<class... A> int FUN_106d9b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9b70(undefined4 param_1);
template<class... A> int FUN_106d9b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9b80(undefined4 param_1);
template<class... A> int FUN_106d9b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d9b90(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_106d9b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106d9ba0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_106d9ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9bb0(undefined4 param_1);
template<class... A> int FUN_106d9bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9bc0(undefined4 param_1);
template<class... A> int FUN_106d9bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106d9bd0(undefined4 param_1);
template<class... A> int FUN_106d9bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d9e20(undefined4 *param_1);
template<class... A> int FUN_106d9e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d9e40(undefined4 *param_1);
template<class... A> int FUN_106d9e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d9e60(undefined4 *param_1);
template<class... A> int FUN_106d9e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d9ea0(undefined4 *param_1);
template<class... A> int FUN_106d9ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d9ec0(undefined4 param_1);
template<class... A> int FUN_106d9ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d9ed0(undefined4 param_1);
template<class... A> int FUN_106d9ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d9ee0(undefined4 param_1);
template<class... A> int FUN_106d9ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106d9ef0(undefined4 param_1);
template<class... A> int FUN_106d9ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d9f00(undefined4 *param_1);
template<class... A> int FUN_106d9f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d9f50(undefined4 *param_1);
template<class... A> int FUN_106d9f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106d9fa0(undefined4 *param_1);
template<class... A> int FUN_106d9fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106da010(undefined4 *param_1);
template<class... A> int FUN_106da010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106da240(undefined4 *param_1);
template<class... A> int FUN_106da240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106da420(int param_1);
template<class... A> int FUN_106da420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106da440(int param_1);
template<class... A> int FUN_106da440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106da460(int param_1);
template<class... A> int FUN_106da460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106da480(int param_1);
template<class... A> int FUN_106da480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106da4a0(void);
template<class... A> int FUN_106da4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */void __fastcall FUN_106da4e0(int *param_1);
template<class... A> int FUN_106da4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106da530(SCStr *param_1);
template<class... A> int FUN_106da530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106dac30(int *param_1);
template<class... A> int FUN_106dac30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106dac40(int *param_1);
template<class... A> int FUN_106dac40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106dac50(int *param_1);
template<class... A> int FUN_106dac50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106dac60(int *param_1);
template<class... A> int FUN_106dac60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_106dac70(uint *param_1,uint *param_2);
template<class... A> int FUN_106dac70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_106dac90(uint *param_1,uint *param_2);
template<class... A> int FUN_106dac90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106daf40(undefined4 *param_1);
template<class... A> int FUN_106daf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106daf70(undefined4 *param_1);
template<class... A> int FUN_106daf70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106dafa0(undefined4 *param_1);
template<class... A> int FUN_106dafa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106db100(int param_1);
template<class... A> int FUN_106db100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106db120(int param_1);
template<class... A> int FUN_106db120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106db140(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106db140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106db1a0(int param_1);
template<class... A> int FUN_106db1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db1b0(undefined4 param_1);
template<class... A> int FUN_106db1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db1c0(undefined4 param_1);
template<class... A> int FUN_106db1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db1d0(undefined4 param_1);
template<class... A> int FUN_106db1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db1e0(undefined4 param_1);
template<class... A> int FUN_106db1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db1f0(undefined4 param_1);
template<class... A> int FUN_106db1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db200(undefined4 param_1);
template<class... A> int FUN_106db200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db210(undefined4 param_1);
template<class... A> int FUN_106db210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db220(undefined4 param_1);
template<class... A> int FUN_106db220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db230(undefined4 param_1);
template<class... A> int FUN_106db230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db240(undefined4 param_1);
template<class... A> int FUN_106db240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db250(undefined4 param_1);
template<class... A> int FUN_106db250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db260(undefined4 param_1);
template<class... A> int FUN_106db260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db270(undefined4 param_1);
template<class... A> int FUN_106db270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db280(undefined4 param_1);
template<class... A> int FUN_106db280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db290(undefined4 param_1);
template<class... A> int FUN_106db290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db2a0(undefined4 param_1);
template<class... A> int FUN_106db2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db2b0(undefined4 param_1);
template<class... A> int FUN_106db2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db2c0(undefined4 param_1);
template<class... A> int FUN_106db2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db2d0(undefined4 param_1);
template<class... A> int FUN_106db2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db2e0(undefined4 param_1);
template<class... A> int FUN_106db2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db2f0(undefined4 param_1);
template<class... A> int FUN_106db2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db300(undefined4 param_1);
template<class... A> int FUN_106db300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db310(undefined4 param_1);
template<class... A> int FUN_106db310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db320(undefined4 param_1);
template<class... A> int FUN_106db320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db330(undefined4 param_1);
template<class... A> int FUN_106db330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db340(int param_1);
template<class... A> int FUN_106db340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106db870(int param_1);
template<class... A> int FUN_106db870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106db960(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106db960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db970(int param_1);
template<class... A> int FUN_106db970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106db980(int param_1);
template<class... A> int FUN_106db980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106db990(undefined4 *param_1);
template<class... A> int FUN_106db990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106dbc00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
template<class... A> int FUN_106dbc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106dbc40(undefined8 *param_1, undefined8 *param_2, int param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_106dbc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106dbc80(undefined8 *param_1,undefined8 *param_2,int param_3);
template<class... A> int FUN_106dbc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106dbcd0(uint param_1);
template<class... A> int FUN_106dbcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106dbd40(uint param_1);
template<class... A> int FUN_106dbd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106dbdc0(uint param_1);
template<class... A> int FUN_106dbdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106dbe40(uint param_1);
template<class... A> int FUN_106dbe40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106dbec0(int param_1);
template<class... A> int FUN_106dbec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106dbed0(int param_1);
template<class... A> int FUN_106dbed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106dbee0(int *param_1);
template<class... A> int FUN_106dbee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106dbfc0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_106dbfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106dc010(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_106dc010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106dc060(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_106dc060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106dc0b0(int param_1,int param_2);
template<class... A> int FUN_106dc0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106dc100(int param_1,int param_2);
template<class... A> int FUN_106dc100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106dc150(int param_1,int param_2);
template<class... A> int FUN_106dc150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dcc70(void);
template<class... A> int FUN_106dcc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dcc80(void);
template<class... A> int FUN_106dcc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dcc90(void);
template<class... A> int FUN_106dcc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dcca0(void);
template<class... A> int FUN_106dcca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dccb0(void);
template<class... A> int FUN_106dccb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dccc0(void);
template<class... A> int FUN_106dccc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dcce0(undefined4 param_1);
template<class... A> int FUN_106dcce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dccf0(undefined4 param_1);
template<class... A> int FUN_106dccf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106dcd00(int param_1);
template<class... A> int FUN_106dcd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106dcd50(int *param_1);
template<class... A> int FUN_106dcd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106dcda0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106dcda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106dcdc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106dcdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106dce20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_106dce20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106dce40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_106dce40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106dd200(void);
template<class... A> int FUN_106dd200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106dd220(void);
template<class... A> int FUN_106dd220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106dd240(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106dd240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106dd250(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106dd250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106dd260(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106dd260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106dd270(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106dd270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106dd280(void);
template<class... A> int FUN_106dd280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106dd290(void);
template<class... A> int FUN_106dd290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106dd560(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106dd560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106dd580(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106dd580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dd6a0(undefined4 param_1);
template<class... A> int FUN_106dd6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dd6b0(undefined4 param_1);
template<class... A> int FUN_106dd6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_106dd6c0(int param_1,SCStr *param_2);
template<class... A> int FUN_106dd6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_106dd6f0(int param_1,SCStr *param_2);
template<class... A> int FUN_106dd6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddb20(undefined4 param_1);
template<class... A> int FUN_106ddb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddb30(undefined4 param_1);
template<class... A> int FUN_106ddb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddb40(undefined4 param_1);
template<class... A> int FUN_106ddb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddb50(undefined4 param_1);
template<class... A> int FUN_106ddb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddb60(undefined4 param_1);
template<class... A> int FUN_106ddb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddb70(undefined4 param_1);
template<class... A> int FUN_106ddb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddb80(undefined4 param_1);
template<class... A> int FUN_106ddb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddb90(undefined4 param_1);
template<class... A> int FUN_106ddb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddba0(undefined4 param_1);
template<class... A> int FUN_106ddba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ddbb0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_106ddbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ddbe0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_106ddbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106ddc10(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_106ddc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddd20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106ddd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddd40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106ddd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddd60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106ddd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddd80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106ddd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddda0(undefined4 param_1);
template<class... A> int FUN_106ddda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dddb0(undefined4 param_1);
template<class... A> int FUN_106dddb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dddc0(undefined4 param_1);
template<class... A> int FUN_106dddc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dddd0(undefined4 param_1);
template<class... A> int FUN_106dddd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106ddde0(undefined4 param_1);
template<class... A> int FUN_106ddde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dddf0(undefined4 param_1);
template<class... A> int FUN_106dddf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106ddfc0(undefined4 *param_1);
template<class... A> int FUN_106ddfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106ddfe0(undefined4 *param_1);
template<class... A> int FUN_106ddfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106de000(undefined4 param_1);
template<class... A> int FUN_106de000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106de010(undefined4 param_1);
template<class... A> int FUN_106de010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106de020(undefined4 *param_1);
template<class... A> int FUN_106de020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106de070(undefined4 *param_1);
template<class... A> int FUN_106de070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106deed0(undefined4 *param_1);
template<class... A> int FUN_106deed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106def00(undefined4 *param_1);
template<class... A> int FUN_106def00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106def70(int param_1);
template<class... A> int FUN_106def70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106def90(int param_1);
template<class... A> int FUN_106def90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106defb0(undefined4 param_1);
template<class... A> int FUN_106defb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106defc0(undefined4 param_1);
template<class... A> int FUN_106defc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106defd0(undefined4 param_1);
template<class... A> int FUN_106defd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106defe0(undefined4 param_1);
template<class... A> int FUN_106defe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106deff0(undefined4 param_1);
template<class... A> int FUN_106deff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106df000(undefined4 param_1);
template<class... A> int FUN_106df000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106df010(undefined4 param_1);
template<class... A> int FUN_106df010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106df020(undefined4 param_1);
template<class... A> int FUN_106df020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106df030(undefined4 param_1);
template<class... A> int FUN_106df030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106df040(undefined4 param_1);
template<class... A> int FUN_106df040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106df050(undefined4 param_1);
template<class... A> int FUN_106df050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106df060(undefined4 param_1);
template<class... A> int FUN_106df060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106df070(undefined4 param_1);
template<class... A> int FUN_106df070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106df080(undefined4 param_1);
template<class... A> int FUN_106df080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106df090(undefined4 param_1);
template<class... A> int FUN_106df090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106df6a0(int param_1);
template<class... A> int FUN_106df6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106df6b0(int param_1);
template<class... A> int FUN_106df6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106df7a0(uint param_1);
template<class... A> int FUN_106df7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106df820(uint param_1);
template<class... A> int FUN_106df820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106df8a0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_106df8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106df8f0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_106df8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106df940(int param_1,int param_2);
template<class... A> int FUN_106df940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106df990(int param_1,int param_2);
template<class... A> int FUN_106df990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_106df9e0(void);
template<class... A> int FUN_106df9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106dfa40(int param_1);
template<class... A> int FUN_106dfa40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106dfb70(int param_1);
template<class... A> int FUN_106dfb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dfe50(void);
template<class... A> int FUN_106dfe50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dfe60(void);
template<class... A> int FUN_106dfe60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dfe70(void);
template<class... A> int FUN_106dfe70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106dfe80(void);
template<class... A> int FUN_106dfe80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106dfed0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106dfed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106dfef0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106dfef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106dff10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106dff10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106dff50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_106dff50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106dffb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_106dffb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e0000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_106e0000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e01e0(void);
template<class... A> int FUN_106e01e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e0200(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106e0200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e0210(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106e0210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e0220(void);
template<class... A> int FUN_106e0220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e0230(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106e0230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e0aa0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106e0aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e0ac0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_106e0ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e0ae0(undefined4 *param_1);
template<class... A> int FUN_106e0ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e0af0(undefined4 *param_1);
template<class... A> int FUN_106e0af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_106e0b00(int param_1,uint *param_2);
template<class... A> int FUN_106e0b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e0be0(undefined4 param_1);
template<class... A> int FUN_106e0be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e0bf0(undefined4 param_1);
template<class... A> int FUN_106e0bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e0e90(undefined4 param_1);
template<class... A> int FUN_106e0e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e0ea0(undefined4 param_1);
template<class... A> int FUN_106e0ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e0eb0(undefined4 param_1);
template<class... A> int FUN_106e0eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e0ec0(undefined4 param_1);
template<class... A> int FUN_106e0ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e0ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_106e0ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e0ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_106e0ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e0f10(undefined4 param_1,undefined4 *param_2,int param_3);
template<class... A> int FUN_106e0f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e0f90(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_106e0f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e0fc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_106e0fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e0ff0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_106e0ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e1020(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_106e1020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e1030(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_106e1030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e10b0(void);
template<class... A> int FUN_106e10b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1150(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106e1150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1170(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106e1170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1190(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106e1190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e11b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_106e11b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e11d0(undefined4 param_1);
template<class... A> int FUN_106e11d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e11e0(undefined4 param_1);
template<class... A> int FUN_106e11e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e11f0(undefined4 param_1);
template<class... A> int FUN_106e11f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1200(undefined4 param_1);
template<class... A> int FUN_106e1200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1210(undefined4 param_1);
template<class... A> int FUN_106e1210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1220(undefined4 param_1);
template<class... A> int FUN_106e1220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1230(undefined4 param_1);
template<class... A> int FUN_106e1230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1240(undefined4 param_1);
template<class... A> int FUN_106e1240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1250(undefined4 param_1);
template<class... A> int FUN_106e1250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1260(undefined4 param_1);
template<class... A> int FUN_106e1260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1270(undefined4 param_1);
template<class... A> int FUN_106e1270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1280(undefined4 param_1);
template<class... A> int FUN_106e1280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1290(undefined4 param_1);
template<class... A> int FUN_106e1290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e12a0(undefined4 param_1);
template<class... A> int FUN_106e12a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e12b0(undefined4 param_1);
template<class... A> int FUN_106e12b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e12c0(undefined4 param_1);
template<class... A> int FUN_106e12c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e12d0(void);
template<class... A> int FUN_106e12d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e12e0(void);
template<class... A> int FUN_106e12e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e12f0(void);
template<class... A> int FUN_106e12f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1300(void);
template<class... A> int FUN_106e1300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1310(void);
template<class... A> int FUN_106e1310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1320(void);
template<class... A> int FUN_106e1320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1330(void);
template<class... A> int FUN_106e1330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1340(void);
template<class... A> int FUN_106e1340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1350(void);
template<class... A> int FUN_106e1350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1360(void);
template<class... A> int FUN_106e1360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1370(void);
template<class... A> int FUN_106e1370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e14c0(undefined4 param_1);
template<class... A> int FUN_106e14c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e14d0(undefined4 param_1);
template<class... A> int FUN_106e14d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e14e0(undefined4 param_1);
template<class... A> int FUN_106e14e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e14f0(undefined4 param_1);
template<class... A> int FUN_106e14f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e1500(undefined4 param_1);
template<class... A> int FUN_106e1500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e1880(undefined4 *param_1);
template<class... A> int FUN_106e1880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e18d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106e18d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e18e0(undefined4 *param_1);
template<class... A> int FUN_106e18e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e18f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_106e18f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e1900(undefined4 *param_1);
template<class... A> int FUN_106e1900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e23b0(undefined4 *param_1);
template<class... A> int FUN_106e23b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e23d0(undefined4 *param_1);
template<class... A> int FUN_106e23d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e23f0(undefined4 *param_1);
template<class... A> int FUN_106e23f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e2870(undefined4 *param_1);
template<class... A> int FUN_106e2870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e28f0(undefined4 *param_1);
template<class... A> int FUN_106e28f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e2930(undefined4 *param_1);
template<class... A> int FUN_106e2930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e2950(undefined4 param_1);
template<class... A> int FUN_106e2950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e2960(undefined4 param_1);
template<class... A> int FUN_106e2960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e2970(undefined4 param_1);
template<class... A> int FUN_106e2970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e2980(undefined4 *param_1);
template<class... A> int FUN_106e2980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e2b10(undefined4 *param_1);
template<class... A> int FUN_106e2b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106e2c30(undefined4 *param_1);
template<class... A> int FUN_106e2c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4b60(undefined4 *param_1);
template<class... A> int FUN_106e4b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4c30(undefined4 *param_1);
template<class... A> int FUN_106e4c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4c40(undefined4 *param_1);
template<class... A> int FUN_106e4c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4c50(undefined4 *param_1);
template<class... A> int FUN_106e4c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4c60(undefined4 *param_1);
template<class... A> int FUN_106e4c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4c70(undefined4 *param_1);
template<class... A> int FUN_106e4c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4c80(undefined4 *param_1);
template<class... A> int FUN_106e4c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4c90(undefined4 *param_1);
template<class... A> int FUN_106e4c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4ca0(undefined4 *param_1);
template<class... A> int FUN_106e4ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4cb0(undefined4 *param_1);
template<class... A> int FUN_106e4cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4cc0(undefined4 *param_1);
template<class... A> int FUN_106e4cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4cd0(undefined4 *param_1);
template<class... A> int FUN_106e4cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4ef0(undefined4 *param_1);
template<class... A> int FUN_106e4ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4f20(undefined4 *param_1);
template<class... A> int FUN_106e4f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e4f50(undefined4 *param_1);
template<class... A> int FUN_106e4f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5010(int param_1);
template<class... A> int FUN_106e5010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5030(int param_1);
template<class... A> int FUN_106e5030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e50d0(undefined4 *param_1);
template<class... A> int FUN_106e50d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5100(undefined4 *param_1);
template<class... A> int FUN_106e5100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5120(undefined4 *param_1);
template<class... A> int FUN_106e5120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5150(undefined4 *param_1);
template<class... A> int FUN_106e5150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e52b0(undefined4 *param_1);
template<class... A> int FUN_106e52b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5320(undefined4 *param_1);
template<class... A> int FUN_106e5320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5340(undefined4 *param_1);
template<class... A> int FUN_106e5340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5370(undefined4 *param_1);
template<class... A> int FUN_106e5370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5390(undefined4 *param_1);
template<class... A> int FUN_106e5390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e53c0(undefined4 *param_1);
template<class... A> int FUN_106e53c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e53e0(undefined4 *param_1);
template<class... A> int FUN_106e53e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5410(undefined4 *param_1);
template<class... A> int FUN_106e5410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5430(undefined4 *param_1);
template<class... A> int FUN_106e5430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5460(undefined4 *param_1);
template<class... A> int FUN_106e5460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5480(undefined4 *param_1);
template<class... A> int FUN_106e5480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e54b0(undefined4 *param_1);
template<class... A> int FUN_106e54b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e54d0(undefined4 *param_1);
template<class... A> int FUN_106e54d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e5500(undefined4 *param_1);
template<class... A> int FUN_106e5500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e55d0(undefined4 *param_1);
template<class... A> int FUN_106e55d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e5b80(undefined4 *param_1);
template<class... A> int FUN_106e5b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e5b90(undefined4 *param_1);
template<class... A> int FUN_106e5b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e5ba0(undefined4 *param_1);
template<class... A> int FUN_106e5ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e5bb0(undefined4 *param_1);
template<class... A> int FUN_106e5bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e5bc0(undefined4 *param_1);
template<class... A> int FUN_106e5bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_106e5bd0(int *param_1,int *param_2);
template<class... A> int FUN_106e5bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e6eb0(undefined4 *param_1);
template<class... A> int FUN_106e6eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e7110(int param_1);
template<class... A> int FUN_106e7110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e7180(undefined4 param_1);
template<class... A> int FUN_106e7180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e7190(undefined4 param_1);
template<class... A> int FUN_106e7190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e71a0(undefined4 param_1);
template<class... A> int FUN_106e71a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e71b0(undefined4 param_1);
template<class... A> int FUN_106e71b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e71c0(undefined4 param_1);
template<class... A> int FUN_106e71c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e71d0(undefined4 param_1);
template<class... A> int FUN_106e71d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e71e0(undefined4 param_1);
template<class... A> int FUN_106e71e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e71f0(undefined4 param_1);
template<class... A> int FUN_106e71f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e7200(undefined4 param_1);
template<class... A> int FUN_106e7200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e7210(undefined4 param_1);
template<class... A> int FUN_106e7210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e7220(undefined4 param_1);
template<class... A> int FUN_106e7220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e7230(undefined4 param_1);
template<class... A> int FUN_106e7230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e7240(undefined4 param_1);
template<class... A> int FUN_106e7240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e7250(undefined4 param_1);
template<class... A> int FUN_106e7250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e7260(undefined4 param_1);
template<class... A> int FUN_106e7260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e7270(undefined4 param_1);
template<class... A> int FUN_106e7270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106e7510(undefined4 param_1);
template<class... A> int FUN_106e7510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106e7590(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106e7590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106e75a0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_106e75a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e75b0(int param_1);
template<class... A> int FUN_106e75b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e75c0(undefined4 *param_1);
template<class... A> int FUN_106e75c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e75d0(undefined4 *param_1);
template<class... A> int FUN_106e75d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_106e7960(uint param_1);
template<class... A> int FUN_106e7960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106e7b00(int param_1);
template<class... A> int FUN_106e7b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106e7b10(int *param_1);
template<class... A> int FUN_106e7b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_106e7b20(int *param_1);
template<class... A> int FUN_106e7b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106e7b30(int param_1);
template<class... A> int FUN_106e7b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_106e8a20(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_106e8a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_106e8a70(int param_1,int param_2);
template<class... A> int FUN_106e8a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e8b60(undefined4 *param_1);
template<class... A> int FUN_106e8b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106e8b70(undefined4 *param_1);
template<class... A> int FUN_106e8b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ee0a0(int param_1);
template<class... A> int FUN_106ee0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f1ed0(void);
template<class... A> int FUN_106f1ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f1ee0(void);
template<class... A> int FUN_106f1ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f1ef0(void);
template<class... A> int FUN_106f1ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f1f00(void);
template<class... A> int FUN_106f1f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f1f10(void);
template<class... A> int FUN_106f1f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f1f20(void);
template<class... A> int FUN_106f1f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f1f30(void);
template<class... A> int FUN_106f1f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f1f40(void);
template<class... A> int FUN_106f1f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f1f50(void);
template<class... A> int FUN_106f1f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f1f60(void);
template<class... A> int FUN_106f1f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f1f70(void);
template<class... A> int FUN_106f1f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f1f80(void);
template<class... A> int FUN_106f1f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f1fb0(int param_1);
template<class... A> int FUN_106f1fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f1fc0(int param_1);
template<class... A> int FUN_106f1fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f1fd0(int param_1);
template<class... A> int FUN_106f1fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f1fe0(int param_1);
template<class... A> int FUN_106f1fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f1ff0(int param_1);
template<class... A> int FUN_106f1ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f2000(int param_1);
template<class... A> int FUN_106f2000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_106f2120(int param_1);
template<class... A> int FUN_106f2120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f2130(int param_1);
template<class... A> int FUN_106f2130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f2140(int param_1);
template<class... A> int FUN_106f2140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f2150(int param_1);
template<class... A> int FUN_106f2150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f2160(int param_1);
template<class... A> int FUN_106f2160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f2170(int param_1);
template<class... A> int FUN_106f2170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f2180(int param_1);
template<class... A> int FUN_106f2180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f2190(int param_1);
template<class... A> int FUN_106f2190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106f2250(int param_1);
template<class... A> int FUN_106f2250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f2540(int param_1);
template<class... A> int FUN_106f2540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b30(void);
template<class... A> int FUN_106f4b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b40(void);
template<class... A> int FUN_106f4b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b50(void);
template<class... A> int FUN_106f4b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b60(void);
template<class... A> int FUN_106f4b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b70(void);
template<class... A> int FUN_106f4b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f4b80(void);
template<class... A> int FUN_106f4b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f6b40(undefined4 *param_1);
template<class... A> int FUN_106f6b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f6b50(undefined4 *param_1);
template<class... A> int FUN_106f6b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f6ca0(undefined4 *param_1);
template<class... A> int FUN_106f6ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f6cd0(undefined4 *param_1);
template<class... A> int FUN_106f6cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f6d00(undefined4 *param_1);
template<class... A> int FUN_106f6d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_106f6d30(int param_1);
template<class... A> int FUN_106f6d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f6e20(undefined4 param_1);
template<class... A> int FUN_106f6e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f6e30(undefined4 param_1);
template<class... A> int FUN_106f6e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f6ed0(int param_1);
template<class... A> int FUN_106f6ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f7110(void);
template<class... A> int FUN_106f7110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f7120(void);
template<class... A> int FUN_106f7120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f7130(void);
template<class... A> int FUN_106f7130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106f7140(void);
template<class... A> int FUN_106f7140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106f7570(undefined4 *param_1);
template<class... A> int FUN_106f7570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8450(undefined4 *param_1);
template<class... A> int FUN_106f8450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8460(undefined4 *param_1);
template<class... A> int FUN_106f8460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8470(undefined4 *param_1);
template<class... A> int FUN_106f8470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8480(undefined4 *param_1);
template<class... A> int FUN_106f8480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f84f0(undefined4 *param_1);
template<class... A> int FUN_106f84f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8520(undefined4 *param_1);
template<class... A> int FUN_106f8520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8550(undefined4 *param_1);
template<class... A> int FUN_106f8550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f86a0(undefined4 *param_1);
template<class... A> int FUN_106f86a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f86c0(undefined4 *param_1);
template<class... A> int FUN_106f86c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f86f0(undefined4 *param_1);
template<class... A> int FUN_106f86f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8710(undefined4 *param_1);
template<class... A> int FUN_106f8710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106f8740(undefined4 *param_1);
template<class... A> int FUN_106f8740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f8910(undefined4 *param_1);
template<class... A> int FUN_106f8910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f8920(undefined4 *param_1);
template<class... A> int FUN_106f8920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106f9b20(undefined4 *param_1);
template<class... A> int FUN_106f9b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fce60(void);
template<class... A> int FUN_106fce60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fce70(void);
template<class... A> int FUN_106fce70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fce80(void);
template<class... A> int FUN_106fce80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fce90(void);
template<class... A> int FUN_106fce90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fcea0(void);
template<class... A> int FUN_106fcea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fceb0(int param_1);
template<class... A> int FUN_106fceb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fcec0(int param_1);
template<class... A> int FUN_106fcec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fcee0(int param_1);
template<class... A> int FUN_106fcee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fcef0(int param_1);
template<class... A> int FUN_106fcef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fcf00(int param_1);
template<class... A> int FUN_106fcf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_106fcf10(void);
template<class... A> int FUN_106fcf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fd6d0(undefined4 *param_1);
template<class... A> int FUN_106fd6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fd7b0(void);
template<class... A> int FUN_106fd7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fd7c0(void);
template<class... A> int FUN_106fd7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fd7d0(void);
template<class... A> int FUN_106fd7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_106fd7e0(void);
template<class... A> int FUN_106fd7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_106fdc10(undefined4 *param_1);
template<class... A> int FUN_106fdc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe6c0(undefined4 *param_1);
template<class... A> int FUN_106fe6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe6f0(undefined4 *param_1);
template<class... A> int FUN_106fe6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe700(undefined4 *param_1);
template<class... A> int FUN_106fe700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe710(undefined4 *param_1);
template<class... A> int FUN_106fe710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe720(undefined4 *param_1);
template<class... A> int FUN_106fe720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe800(undefined4 *param_1);
template<class... A> int FUN_106fe800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe830(undefined4 *param_1);
template<class... A> int FUN_106fe830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe850(undefined4 *param_1);
template<class... A> int FUN_106fe850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe880(undefined4 *param_1);
template<class... A> int FUN_106fe880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe8a0(undefined4 *param_1);
template<class... A> int FUN_106fe8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe8d0(undefined4 *param_1);
template<class... A> int FUN_106fe8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe9a0(undefined4 *param_1);
template<class... A> int FUN_106fe9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_106fe9c0(undefined4 *param_1);
template<class... A> int FUN_106fe9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106fead0(undefined4 *param_1);
template<class... A> int FUN_106fead0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_106feae0(int *param_1);
template<class... A> int FUN_106feae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106feaf0(undefined4 *param_1);
template<class... A> int FUN_106feaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106feb00(undefined4 *param_1);
template<class... A> int FUN_106feb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ff620(undefined4 *param_1);
template<class... A> int FUN_106ff620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_106ff630(int param_1);
template<class... A> int FUN_106ff630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025b0(void);
template<class... A> int FUN_107025b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025c0(void);
template<class... A> int FUN_107025c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025d0(void);
template<class... A> int FUN_107025d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025e0(void);
template<class... A> int FUN_107025e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107025f0(void);
template<class... A> int FUN_107025f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10702610(int param_1);
template<class... A> int FUN_10702610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10702620(int param_1);
template<class... A> int FUN_10702620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10702ab0(undefined4 *param_1);
template<class... A> int FUN_10702ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10702ac0(undefined4 *param_1);
template<class... A> int FUN_10702ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10702b70(void);
template<class... A> int FUN_10702b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10702b80(void);
template<class... A> int FUN_10702b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10702b90(void);
template<class... A> int FUN_10702b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10702ed0(undefined4 *param_1);
template<class... A> int FUN_10702ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703870(undefined4 *param_1);
template<class... A> int FUN_10703870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107038a0(undefined4 *param_1);
template<class... A> int FUN_107038a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107038b0(undefined4 *param_1);
template<class... A> int FUN_107038b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107038c0(undefined4 *param_1);
template<class... A> int FUN_107038c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703930(undefined4 *param_1);
template<class... A> int FUN_10703930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703960(undefined4 *param_1);
template<class... A> int FUN_10703960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703ab0(undefined4 *param_1);
template<class... A> int FUN_10703ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703ad0(undefined4 *param_1);
template<class... A> int FUN_10703ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10703b00(undefined4 *param_1);
template<class... A> int FUN_10703b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10703d50(undefined4 *param_1);
template<class... A> int FUN_10703d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10703d60(undefined4 *param_1);
template<class... A> int FUN_10703d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10704b70(undefined4 *param_1);
template<class... A> int FUN_10704b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10707960(void);
template<class... A> int FUN_10707960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10707970(void);
template<class... A> int FUN_10707970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10707980(void);
template<class... A> int FUN_10707980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10707990(void);
template<class... A> int FUN_10707990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107079b0(int param_1);
template<class... A> int FUN_107079b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107079c0(int param_1);
template<class... A> int FUN_107079c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_107079d0(void);
template<class... A> int FUN_107079d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10708500(undefined4 *param_1);
template<class... A> int FUN_10708500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10708b90(int param_1);
template<class... A> int FUN_10708b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10708db0(void);
template<class... A> int FUN_10708db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10708dc0(void);
template<class... A> int FUN_10708dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10708dd0(void);
template<class... A> int FUN_10708dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10708de0(void);
template<class... A> int FUN_10708de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10709210(undefined4 *param_1);
template<class... A> int FUN_10709210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10709230(undefined4 *param_1);
template<class... A> int FUN_10709230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10709250(undefined4 *param_1);
template<class... A> int FUN_10709250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a0e0(undefined4 *param_1);
template<class... A> int FUN_1070a0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a0f0(undefined4 *param_1);
template<class... A> int FUN_1070a0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a100(undefined4 *param_1);
template<class... A> int FUN_1070a100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a110(undefined4 *param_1);
template<class... A> int FUN_1070a110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a390(undefined4 *param_1);
template<class... A> int FUN_1070a390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a3c0(undefined4 *param_1);
template<class... A> int FUN_1070a3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a3f0(undefined4 *param_1);
template<class... A> int FUN_1070a3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a500(undefined4 *param_1);
template<class... A> int FUN_1070a500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a6a0(undefined4 *param_1);
template<class... A> int FUN_1070a6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a6c0(undefined4 *param_1);
template<class... A> int FUN_1070a6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1070a6f0(undefined4 *param_1);
template<class... A> int FUN_1070a6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a920(undefined4 *param_1);
template<class... A> int FUN_1070a920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a930(undefined4 *param_1);
template<class... A> int FUN_1070a930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a940(undefined4 *param_1);
template<class... A> int FUN_1070a940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a950(undefined4 *param_1);
template<class... A> int FUN_1070a950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a960(undefined4 *param_1);
template<class... A> int FUN_1070a960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070a970(undefined4 *param_1);
template<class... A> int FUN_1070a970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070bdb0(undefined4 *param_1);
template<class... A> int FUN_1070bdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070bdc0(undefined4 *param_1);
template<class... A> int FUN_1070bdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1070bdd0(undefined4 *param_1);
template<class... A> int FUN_1070bdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10710280(void);
template<class... A> int FUN_10710280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10710290(void);
template<class... A> int FUN_10710290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107102a0(void);
template<class... A> int FUN_107102a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107102b0(void);
template<class... A> int FUN_107102b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107102c0(void);
template<class... A> int FUN_107102c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107102d0(int param_1);
template<class... A> int FUN_107102d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107102e0(int param_1);
template<class... A> int FUN_107102e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107104e0(int param_1);
template<class... A> int FUN_107104e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107104f0(int param_1);
template<class... A> int FUN_107104f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10710500(int param_1);
template<class... A> int FUN_10710500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_107105c0(void);
template<class... A> int FUN_107105c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_107105e0(int param_1);
template<class... A> int FUN_107105e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10711bf0(undefined4 *param_1);
template<class... A> int FUN_10711bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10711c00(undefined4 *param_1);
template<class... A> int FUN_10711c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10711c10(undefined4 *param_1);
template<class... A> int FUN_10711c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10711c20(undefined4 *param_1);
template<class... A> int FUN_10711c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10711c50(undefined4 *param_1);
template<class... A> int FUN_10711c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10711c80(undefined4 *param_1);
template<class... A> int FUN_10711c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10712380(void);
template<class... A> int FUN_10712380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10712390(void);
template<class... A> int FUN_10712390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107123a0(void);
template<class... A> int FUN_107123a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_107126e0(undefined4 *param_1);
template<class... A> int FUN_107126e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10712f60(undefined4 *param_1);
template<class... A> int FUN_10712f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10712f90(undefined4 *param_1);
template<class... A> int FUN_10712f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10712fa0(undefined4 *param_1);
template<class... A> int FUN_10712fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10712fb0(undefined4 *param_1);
template<class... A> int FUN_10712fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10713150(undefined4 *param_1);
template<class... A> int FUN_10713150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10713220(undefined4 *param_1);
template<class... A> int FUN_10713220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10713240(undefined4 *param_1);
template<class... A> int FUN_10713240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10713270(undefined4 *param_1);
template<class... A> int FUN_10713270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10713370(undefined4 *param_1);
template<class... A> int FUN_10713370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10713380(undefined4 *param_1);
template<class... A> int FUN_10713380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10714010(undefined4 *param_1);
template<class... A> int FUN_10714010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10717280(void);
template<class... A> int FUN_10717280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10717290(void);
template<class... A> int FUN_10717290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107172a0(void);
template<class... A> int FUN_107172a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107172b0(void);
template<class... A> int FUN_107172b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107172d0(int param_1);
template<class... A> int FUN_107172d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107172e0(int param_1);
template<class... A> int FUN_107172e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_107172f0(void);
template<class... A> int FUN_107172f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10717310(int *param_1);
template<class... A> int FUN_10717310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10718080(undefined4 *param_1);
template<class... A> int FUN_10718080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107180c0(int param_1);
template<class... A> int FUN_107180c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10718380(void);
template<class... A> int FUN_10718380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10718390(void);
template<class... A> int FUN_10718390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107183a0(void);
template<class... A> int FUN_107183a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107183b0(void);
template<class... A> int FUN_107183b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107183c0(void);
template<class... A> int FUN_107183c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_107188e0(undefined4 *param_1);
template<class... A> int FUN_107188e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719600(undefined4 *param_1);
template<class... A> int FUN_10719600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719630(undefined4 *param_1);
template<class... A> int FUN_10719630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719640(undefined4 *param_1);
template<class... A> int FUN_10719640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719650(undefined4 *param_1);
template<class... A> int FUN_10719650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719660(undefined4 *param_1);
template<class... A> int FUN_10719660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719670(undefined4 *param_1);
template<class... A> int FUN_10719670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719750(undefined4 *param_1);
template<class... A> int FUN_10719750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719780(undefined4 *param_1);
template<class... A> int FUN_10719780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719850(undefined4 *param_1);
template<class... A> int FUN_10719850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719920(undefined4 *param_1);
template<class... A> int FUN_10719920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719940(undefined4 *param_1);
template<class... A> int FUN_10719940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719970(undefined4 *param_1);
template<class... A> int FUN_10719970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10719990(undefined4 *param_1);
template<class... A> int FUN_10719990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107199c0(undefined4 *param_1);
template<class... A> int FUN_107199c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10719ba0(undefined4 *param_1);
template<class... A> int FUN_10719ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10719bb0(undefined4 *param_1);
template<class... A> int FUN_10719bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1071b280(undefined4 *param_1);
template<class... A> int FUN_1071b280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721a60(void);
template<class... A> int FUN_10721a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721a70(void);
template<class... A> int FUN_10721a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721a80(void);
template<class... A> int FUN_10721a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721a90(void);
template<class... A> int FUN_10721a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721aa0(void);
template<class... A> int FUN_10721aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10721ab0(void);
template<class... A> int FUN_10721ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10722000(int param_1);
template<class... A> int FUN_10722000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10722010(int param_1);
template<class... A> int FUN_10722010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10722020(void);
template<class... A> int FUN_10722020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10722de0(undefined4 *param_1);
template<class... A> int FUN_10722de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10722df0(undefined4 *param_1);
template<class... A> int FUN_10722df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10723040(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10723040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10723060(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10723060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_107230a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_107230a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_107230c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_107230c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723830(void);
template<class... A> int FUN_10723830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723840(void);
template<class... A> int FUN_10723840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723860(void);
template<class... A> int FUN_10723860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723920(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10723920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723930(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10723930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723940(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10723940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723950(void);
template<class... A> int FUN_10723950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723960(void);
template<class... A> int FUN_10723960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723f00(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10723f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723f20(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10723f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10723fc0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10723fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10723fe0(undefined4 *param_1);
template<class... A> int FUN_10723fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724270(undefined4 param_1);
template<class... A> int FUN_10724270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10724280(int param_1,uint *param_2);
template<class... A> int FUN_10724280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724530(undefined4 *param_1);
template<class... A> int FUN_10724530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724540(undefined4 param_1);
template<class... A> int FUN_10724540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724550(undefined4 param_1);
template<class... A> int FUN_10724550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724580(undefined4 param_1);
template<class... A> int FUN_10724580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724590(undefined4 param_1);
template<class... A> int FUN_10724590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245a0(undefined4 param_1);
template<class... A> int FUN_107245a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245b0(undefined4 param_1);
template<class... A> int FUN_107245b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245c0(undefined4 param_1);
template<class... A> int FUN_107245c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245d0(undefined4 param_1);
template<class... A> int FUN_107245d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107245e0(undefined4 param_1);
template<class... A> int FUN_107245e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_107245f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_107245f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10724610(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10724610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_107246a0(void);
template<class... A> int FUN_107246a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107246b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_107246b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107246d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_107246d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107246f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_107246f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724710(undefined4 param_1);
template<class... A> int FUN_10724710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724720(undefined4 param_1);
template<class... A> int FUN_10724720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724730(undefined4 param_1);
template<class... A> int FUN_10724730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724740(undefined4 param_1);
template<class... A> int FUN_10724740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724750(undefined4 param_1);
template<class... A> int FUN_10724750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724780(undefined4 param_1);
template<class... A> int FUN_10724780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107247b0(undefined4 param_1);
template<class... A> int FUN_107247b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107247c0(undefined4 param_1);
template<class... A> int FUN_107247c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_107247d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_107247d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107247e0(void);
template<class... A> int FUN_107247e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107247f0(void);
template<class... A> int FUN_107247f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724800(void);
template<class... A> int FUN_10724800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724810(void);
template<class... A> int FUN_10724810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724820(void);
template<class... A> int FUN_10724820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724830(void);
template<class... A> int FUN_10724830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724840(void);
template<class... A> int FUN_10724840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724850(void);
template<class... A> int FUN_10724850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724860(void);
template<class... A> int FUN_10724860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724870(void);
template<class... A> int FUN_10724870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724880(void);
template<class... A> int FUN_10724880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724890(void);
template<class... A> int FUN_10724890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248a0(void);
template<class... A> int FUN_107248a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248b0(void);
template<class... A> int FUN_107248b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248c0(void);
template<class... A> int FUN_107248c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248d0(void);
template<class... A> int FUN_107248d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248e0(void);
template<class... A> int FUN_107248e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107248f0(void);
template<class... A> int FUN_107248f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724900(void);
template<class... A> int FUN_10724900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724910(void);
template<class... A> int FUN_10724910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724920(void);
template<class... A> int FUN_10724920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10724b20(undefined4 param_1);
template<class... A> int FUN_10724b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10726d30(undefined4 *param_1);
template<class... A> int FUN_10726d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10726d50(undefined4 *param_1);
template<class... A> int FUN_10726d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10726d70(undefined4 param_1);
template<class... A> int FUN_10726d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10726d80(undefined4 param_1);
template<class... A> int FUN_10726d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10726db0(undefined4 *param_1);
template<class... A> int FUN_10726db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa20(undefined4 *param_1);
template<class... A> int FUN_1072aa20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa30(undefined4 *param_1);
template<class... A> int FUN_1072aa30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa40(undefined4 *param_1);
template<class... A> int FUN_1072aa40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa50(undefined4 *param_1);
template<class... A> int FUN_1072aa50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa60(undefined4 *param_1);
template<class... A> int FUN_1072aa60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa70(undefined4 *param_1);
template<class... A> int FUN_1072aa70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa80(undefined4 *param_1);
template<class... A> int FUN_1072aa80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aa90(undefined4 *param_1);
template<class... A> int FUN_1072aa90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aaa0(undefined4 *param_1);
template<class... A> int FUN_1072aaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aab0(undefined4 *param_1);
template<class... A> int FUN_1072aab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aac0(undefined4 *param_1);
template<class... A> int FUN_1072aac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aad0(undefined4 *param_1);
template<class... A> int FUN_1072aad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aae0(undefined4 *param_1);
template<class... A> int FUN_1072aae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072aaf0(undefined4 *param_1);
template<class... A> int FUN_1072aaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab00(undefined4 *param_1);
template<class... A> int FUN_1072ab00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab10(undefined4 *param_1);
template<class... A> int FUN_1072ab10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab20(undefined4 *param_1);
template<class... A> int FUN_1072ab20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab30(undefined4 *param_1);
template<class... A> int FUN_1072ab30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab40(undefined4 *param_1);
template<class... A> int FUN_1072ab40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab50(undefined4 *param_1);
template<class... A> int FUN_1072ab50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ab60(undefined4 *param_1);
template<class... A> int FUN_1072ab60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ac50(undefined4 *param_1);
template<class... A> int FUN_1072ac50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ac80(undefined4 *param_1);
template<class... A> int FUN_1072ac80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072acb0(undefined4 *param_1);
template<class... A> int FUN_1072acb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ace0(undefined4 *param_1);
template<class... A> int FUN_1072ace0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ad10(undefined4 *param_1);
template<class... A> int FUN_1072ad10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ad40(undefined4 *param_1);
template<class... A> int FUN_1072ad40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ad70(undefined4 *param_1);
template<class... A> int FUN_1072ad70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072ada0(undefined4 *param_1);
template<class... A> int FUN_1072ada0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072add0(undefined4 *param_1);
template<class... A> int FUN_1072add0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072afa0(int param_1);
template<class... A> int FUN_1072afa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072afc0(int param_1);
template<class... A> int FUN_1072afc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b080(undefined4 *param_1);
template<class... A> int FUN_1072b080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b0b0(undefined4 *param_1);
template<class... A> int FUN_1072b0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b0d0(undefined4 *param_1);
template<class... A> int FUN_1072b0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b100(undefined4 *param_1);
template<class... A> int FUN_1072b100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b120(undefined4 *param_1);
template<class... A> int FUN_1072b120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b150(undefined4 *param_1);
template<class... A> int FUN_1072b150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b170(undefined4 *param_1);
template<class... A> int FUN_1072b170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b1a0(undefined4 *param_1);
template<class... A> int FUN_1072b1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b1c0(undefined4 *param_1);
template<class... A> int FUN_1072b1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b1f0(undefined4 *param_1);
template<class... A> int FUN_1072b1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b210(undefined4 *param_1);
template<class... A> int FUN_1072b210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b240(undefined4 *param_1);
template<class... A> int FUN_1072b240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b260(undefined4 *param_1);
template<class... A> int FUN_1072b260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b290(undefined4 *param_1);
template<class... A> int FUN_1072b290(A...);

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b2b0(undefined4 *param_1);
template<class... A> int FUN_1072b2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b2e0(undefined4 *param_1);
template<class... A> int FUN_1072b2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b300(undefined4 *param_1);
template<class... A> int FUN_1072b300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b330(undefined4 *param_1);
template<class... A> int FUN_1072b330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b350(undefined4 *param_1);
template<class... A> int FUN_1072b350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b380(undefined4 *param_1);
template<class... A> int FUN_1072b380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b3a0(undefined4 *param_1);
template<class... A> int FUN_1072b3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b3d0(undefined4 *param_1);
template<class... A> int FUN_1072b3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b3f0(undefined4 *param_1);
template<class... A> int FUN_1072b3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b420(undefined4 *param_1);
template<class... A> int FUN_1072b420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b440(undefined4 *param_1);
template<class... A> int FUN_1072b440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b470(undefined4 *param_1);
template<class... A> int FUN_1072b470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b490(undefined4 *param_1);
template<class... A> int FUN_1072b490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b4c0(undefined4 *param_1);
template<class... A> int FUN_1072b4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b4e0(undefined4 *param_1);
template<class... A> int FUN_1072b4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b510(undefined4 *param_1);
template<class... A> int FUN_1072b510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b5e0(undefined4 *param_1);
template<class... A> int FUN_1072b5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b660(undefined4 *param_1);
template<class... A> int FUN_1072b660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b680(undefined4 *param_1);
template<class... A> int FUN_1072b680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b6b0(undefined4 *param_1);
template<class... A> int FUN_1072b6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b6d0(undefined4 *param_1);
template<class... A> int FUN_1072b6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b700(undefined4 *param_1);
template<class... A> int FUN_1072b700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b720(undefined4 *param_1);
template<class... A> int FUN_1072b720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ template<class... A> int FUN_1072b750(A...);
template<class... A> int FUN_1072b750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b770(undefined4 *param_1);
template<class... A> int FUN_1072b770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072b7a0(undefined4 *param_1);
template<class... A> int FUN_1072b7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072bed0(undefined4 *param_1);
template<class... A> int FUN_1072bed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_1072bff0(int *param_1,int *param_2);
template<class... A> int FUN_1072bff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072de30(undefined4 *param_1);
template<class... A> int FUN_1072de30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072de60(undefined4 *param_1);
template<class... A> int FUN_1072de60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1072deb0(int param_1);
template<class... A> int FUN_1072deb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1072e1e0(undefined4 param_1);
template<class... A> int FUN_1072e1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e210(undefined4 param_1);
template<class... A> int FUN_1072e210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e220(undefined4 param_1);
template<class... A> int FUN_1072e220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e230(undefined4 param_1);
template<class... A> int FUN_1072e230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e240(undefined4 param_1);
template<class... A> int FUN_1072e240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e250(undefined4 param_1);
template<class... A> int FUN_1072e250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e260(undefined4 param_1);
template<class... A> int FUN_1072e260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e270(undefined4 param_1);
template<class... A> int FUN_1072e270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e280(undefined4 param_1);
template<class... A> int FUN_1072e280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e290(undefined4 param_1);
template<class... A> int FUN_1072e290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e2a0(undefined4 param_1);
template<class... A> int FUN_1072e2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e2b0(undefined4 param_1);
template<class... A> int FUN_1072e2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1072e5c0(int param_1);
template<class... A> int FUN_1072e5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1072e5f0(int *param_1);
template<class... A> int FUN_1072e5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e640(int param_1);
template<class... A> int FUN_1072e640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1072e6e0(uint param_1);
template<class... A> int FUN_1072e6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1072e760(uint param_1);
template<class... A> int FUN_1072e760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1072e830(undefined4 *param_1);
template<class... A> int FUN_1072e830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10730870(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10730870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_107308c0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_107308c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10730910(int param_1,int param_2);
template<class... A> int FUN_10730910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10730960(int param_1);
template<class... A> int FUN_10730960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10730b90(int param_1);
template<class... A> int FUN_10730b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743070(void);
template<class... A> int FUN_10743070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743080(void);
template<class... A> int FUN_10743080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743090(void);
template<class... A> int FUN_10743090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430a0(void);
template<class... A> int FUN_107430a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430b0(void);
template<class... A> int FUN_107430b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430c0(void);
template<class... A> int FUN_107430c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430d0(void);
template<class... A> int FUN_107430d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430e0(void);
template<class... A> int FUN_107430e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107430f0(void);
template<class... A> int FUN_107430f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743100(void);
template<class... A> int FUN_10743100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743110(void);
template<class... A> int FUN_10743110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743120(void);
template<class... A> int FUN_10743120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743130(void);
template<class... A> int FUN_10743130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743140(void);
template<class... A> int FUN_10743140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743150(void);
template<class... A> int FUN_10743150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743160(void);
template<class... A> int FUN_10743160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743170(void);
template<class... A> int FUN_10743170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743180(void);
template<class... A> int FUN_10743180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10743190(void);
template<class... A> int FUN_10743190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107431a0(void);
template<class... A> int FUN_107431a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107431b0(void);
template<class... A> int FUN_107431b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107431c0(void);
template<class... A> int FUN_107431c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107431d0(int param_1);
template<class... A> int FUN_107431d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107431e0(int param_1);
template<class... A> int FUN_107431e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107431f0(int param_1);
template<class... A> int FUN_107431f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743200(int param_1);
template<class... A> int FUN_10743200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743210(int param_1);
template<class... A> int FUN_10743210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743220(int param_1);
template<class... A> int FUN_10743220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743230(int param_1);
template<class... A> int FUN_10743230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743240(int param_1);
template<class... A> int FUN_10743240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743250(int param_1);
template<class... A> int FUN_10743250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743370(int param_1);
template<class... A> int FUN_10743370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743380(int param_1);
template<class... A> int FUN_10743380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743390(int param_1);
template<class... A> int FUN_10743390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433a0(int param_1);
template<class... A> int FUN_107433a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433b0(int param_1);
template<class... A> int FUN_107433b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433c0(int param_1);
template<class... A> int FUN_107433c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433d0(int param_1);
template<class... A> int FUN_107433d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433e0(int param_1);
template<class... A> int FUN_107433e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107433f0(int param_1);
template<class... A> int FUN_107433f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743400(int param_1);
template<class... A> int FUN_10743400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743410(int param_1);
template<class... A> int FUN_10743410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743420(int param_1);
template<class... A> int FUN_10743420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743430(int param_1);
template<class... A> int FUN_10743430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743440(int param_1);
template<class... A> int FUN_10743440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10743450(int param_1);
template<class... A> int FUN_10743450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10748ac0(int *param_1);
template<class... A> int FUN_10748ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10748e90(void);
template<class... A> int FUN_10748e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10748ea0(void);
template<class... A> int FUN_10748ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1074af60(undefined4 *param_1);
template<class... A> int FUN_1074af60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074af70(undefined4 *param_1);
template<class... A> int FUN_1074af70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074afa0(undefined4 *param_1);
template<class... A> int FUN_1074afa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074b0d0(void);
template<class... A> int FUN_1074b0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074b5f0(undefined4 *param_1);
template<class... A> int FUN_1074b5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074b620(undefined4 *param_1);
template<class... A> int FUN_1074b620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074b630(undefined4 *param_1);
template<class... A> int FUN_1074b630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074b660(undefined4 *param_1);
template<class... A> int FUN_1074b660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074c9c0(void);
template<class... A> int FUN_1074c9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074c9d0(void);
template<class... A> int FUN_1074c9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ca10(void);
template<class... A> int FUN_1074ca10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074cf30(undefined4 *param_1);
template<class... A> int FUN_1074cf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074cf60(undefined4 *param_1);
template<class... A> int FUN_1074cf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074cf70(undefined4 *param_1);
template<class... A> int FUN_1074cf70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1074cfa0(undefined4 *param_1);
template<class... A> int FUN_1074cfa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074e940(void);
template<class... A> int FUN_1074e940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074e950(void);
template<class... A> int FUN_1074e950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1074e970(int param_1);
template<class... A> int FUN_1074e970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1074e980(int param_1);
template<class... A> int FUN_1074e980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ecc0(void);
template<class... A> int FUN_1074ecc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ecd0(void);
template<class... A> int FUN_1074ecd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ece0(void);
template<class... A> int FUN_1074ece0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ecf0(void);
template<class... A> int FUN_1074ecf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ed00(void);
template<class... A> int FUN_1074ed00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ed10(void);
template<class... A> int FUN_1074ed10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1074ed20(void);
template<class... A> int FUN_1074ed20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750810(undefined4 *param_1);
template<class... A> int FUN_10750810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750840(undefined4 *param_1);
template<class... A> int FUN_10750840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750850(undefined4 *param_1);
template<class... A> int FUN_10750850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750860(undefined4 *param_1);
template<class... A> int FUN_10750860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750870(undefined4 *param_1);
template<class... A> int FUN_10750870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750880(undefined4 *param_1);
template<class... A> int FUN_10750880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750890(undefined4 *param_1);
template<class... A> int FUN_10750890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107508a0(undefined4 *param_1);
template<class... A> int FUN_107508a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107508b0(undefined4 *param_1);
template<class... A> int FUN_107508b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107508e0(undefined4 *param_1);
template<class... A> int FUN_107508e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750910(undefined4 *param_1);
template<class... A> int FUN_10750910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750940(undefined4 *param_1);
template<class... A> int FUN_10750940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750960(undefined4 *param_1);
template<class... A> int FUN_10750960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750990(undefined4 *param_1);
template<class... A> int FUN_10750990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107509b0(undefined4 *param_1);
template<class... A> int FUN_107509b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107509e0(undefined4 *param_1);
template<class... A> int FUN_107509e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750aa0(undefined4 *param_1);
template<class... A> int FUN_10750aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750ac0(undefined4 *param_1);
template<class... A> int FUN_10750ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750af0(undefined4 *param_1);
template<class... A> int FUN_10750af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750b10(undefined4 *param_1);
template<class... A> int FUN_10750b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750b40(undefined4 *param_1);
template<class... A> int FUN_10750b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750b60(undefined4 *param_1);
template<class... A> int FUN_10750b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10750b90(undefined4 *param_1);
template<class... A> int FUN_10750b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10754d30(int param_1);
template<class... A> int FUN_10754d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10754d40(int param_1);
template<class... A> int FUN_10754d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756ef0(void);
template<class... A> int FUN_10756ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f00(void);
template<class... A> int FUN_10756f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f10(void);
template<class... A> int FUN_10756f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f20(void);
template<class... A> int FUN_10756f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f30(void);
template<class... A> int FUN_10756f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f40(void);
template<class... A> int FUN_10756f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f50(void);
template<class... A> int FUN_10756f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10756f60(void);
template<class... A> int FUN_10756f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757390(int param_1);
template<class... A> int FUN_10757390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107573a0(int param_1);
template<class... A> int FUN_107573a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107573b0(int param_1);
template<class... A> int FUN_107573b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_107573c0(int param_1);
template<class... A> int FUN_107573c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757800(int param_1);
template<class... A> int FUN_10757800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757810(int param_1);
template<class... A> int FUN_10757810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757820(int param_1);
template<class... A> int FUN_10757820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10757830(int param_1);
template<class... A> int FUN_10757830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107582d0(void);
template<class... A> int FUN_107582d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107582e0(void);
template<class... A> int FUN_107582e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107582f0(void);
template<class... A> int FUN_107582f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10758300(void);
template<class... A> int FUN_10758300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10758310(void);
template<class... A> int FUN_10758310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10758320(void);
template<class... A> int FUN_10758320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10758330(void);
template<class... A> int FUN_10758330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759bc0(undefined4 *param_1);
template<class... A> int FUN_10759bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759bf0(undefined4 *param_1);
template<class... A> int FUN_10759bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c00(undefined4 *param_1);
template<class... A> int FUN_10759c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c10(undefined4 *param_1);
template<class... A> int FUN_10759c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c20(undefined4 *param_1);
template<class... A> int FUN_10759c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c30(undefined4 *param_1);
template<class... A> int FUN_10759c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c40(undefined4 *param_1);
template<class... A> int FUN_10759c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759c50(undefined4 *param_1);
template<class... A> int FUN_10759c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759d00(undefined4 *param_1);
template<class... A> int FUN_10759d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759d20(undefined4 *param_1);
template<class... A> int FUN_10759d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759d50(undefined4 *param_1);
template<class... A> int FUN_10759d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759d70(undefined4 *param_1);
template<class... A> int FUN_10759d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759da0(undefined4 *param_1);
template<class... A> int FUN_10759da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759e70(undefined4 *param_1);
template<class... A> int FUN_10759e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759e90(undefined4 *param_1);
template<class... A> int FUN_10759e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759ec0(undefined4 *param_1);
template<class... A> int FUN_10759ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759ee0(undefined4 *param_1);
template<class... A> int FUN_10759ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10759f10(undefined4 *param_1);
template<class... A> int FUN_10759f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1075a040(undefined4 *param_1);
template<class... A> int FUN_1075a040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1075e550(int param_1);
template<class... A> int FUN_1075e550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760a90(void);
template<class... A> int FUN_10760a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760aa0(void);
template<class... A> int FUN_10760aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760ab0(void);
template<class... A> int FUN_10760ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760ac0(void);
template<class... A> int FUN_10760ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760ad0(void);
template<class... A> int FUN_10760ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760ae0(void);
template<class... A> int FUN_10760ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760af0(void);
template<class... A> int FUN_10760af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10760b00(void);
template<class... A> int FUN_10760b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10760b20(int param_1);
template<class... A> int FUN_10760b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10760ea0(int param_1);
template<class... A> int FUN_10760ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10760eb0(int param_1);
template<class... A> int FUN_10760eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107626a0(void);
template<class... A> int FUN_107626a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107626b0(void);
template<class... A> int FUN_107626b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_107626c0(void);
template<class... A> int FUN_107626c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10762a00(undefined4 *param_1);
template<class... A> int FUN_10762a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107632a0(undefined4 *param_1);
template<class... A> int FUN_107632a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107632d0(undefined4 *param_1);
template<class... A> int FUN_107632d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107632e0(undefined4 *param_1);
template<class... A> int FUN_107632e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107632f0(undefined4 *param_1);
template<class... A> int FUN_107632f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10763420(undefined4 *param_1);
template<class... A> int FUN_10763420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10763440(undefined4 *param_1);
template<class... A> int FUN_10763440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10763470(undefined4 *param_1);
template<class... A> int FUN_10763470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10763490(undefined4 *param_1);
template<class... A> int FUN_10763490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107634c0(undefined4 *param_1);
template<class... A> int FUN_107634c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10763670(undefined4 *param_1);
template<class... A> int FUN_10763670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10763680(int *param_1);
template<class... A> int FUN_10763680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10763690(undefined4 *param_1);
template<class... A> int FUN_10763690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10764560(undefined4 *param_1);
template<class... A> int FUN_10764560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10766ff0(void);
template<class... A> int FUN_10766ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767000(void);
template<class... A> int FUN_10767000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767010(void);
template<class... A> int FUN_10767010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767020(void);
template<class... A> int FUN_10767020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10767030(int param_1);
template<class... A> int FUN_10767030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10767040(int param_1);
template<class... A> int FUN_10767040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10767060(int param_1);
template<class... A> int FUN_10767060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10767070(int param_1);
template<class... A> int FUN_10767070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10767640(undefined4 *param_1);
template<class... A> int FUN_10767640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10767650(undefined4 *param_1);
template<class... A> int FUN_10767650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767840(void);
template<class... A> int FUN_10767840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10767850(void);
template<class... A> int FUN_10767850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107680e0(undefined4 *param_1);
template<class... A> int FUN_107680e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768110(undefined4 *param_1);
template<class... A> int FUN_10768110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768120(undefined4 *param_1);
template<class... A> int FUN_10768120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768130(undefined4 *param_1);
template<class... A> int FUN_10768130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768160(undefined4 *param_1);
template<class... A> int FUN_10768160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10768180(undefined4 *param_1);
template<class... A> int FUN_10768180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107681b0(undefined4 *param_1);
template<class... A> int FUN_107681b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10768780(undefined4 *param_1);
template<class... A> int FUN_10768780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10768790(int param_1);
template<class... A> int FUN_10768790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1076adf0(int param_1);
template<class... A> int FUN_1076adf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076b420(void);
template<class... A> int FUN_1076b420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076b430(void);
template<class... A> int FUN_1076b430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076b440(void);
template<class... A> int FUN_1076b440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1076beb0(int param_1);
template<class... A> int FUN_1076beb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfa0(void);
template<class... A> int FUN_1076bfa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfb0(void);
template<class... A> int FUN_1076bfb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfc0(void);
template<class... A> int FUN_1076bfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfd0(void);
template<class... A> int FUN_1076bfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1076bfe0(void);
template<class... A> int FUN_1076bfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d330(undefined4 *param_1);
template<class... A> int FUN_1076d330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d360(undefined4 *param_1);
template<class... A> int FUN_1076d360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d370(undefined4 *param_1);
template<class... A> int FUN_1076d370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d380(undefined4 *param_1);
template<class... A> int FUN_1076d380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d390(undefined4 *param_1);
template<class... A> int FUN_1076d390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d3a0(undefined4 *param_1);
template<class... A> int FUN_1076d3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d3b0(undefined4 *param_1);
template<class... A> int FUN_1076d3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d480(undefined4 *param_1);
template<class... A> int FUN_1076d480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d4a0(undefined4 *param_1);
template<class... A> int FUN_1076d4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d4d0(undefined4 *param_1);
template<class... A> int FUN_1076d4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d4f0(undefined4 *param_1);
template<class... A> int FUN_1076d4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d520(undefined4 *param_1);
template<class... A> int FUN_1076d520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d540(undefined4 *param_1);
template<class... A> int FUN_1076d540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d570(undefined4 *param_1);
template<class... A> int FUN_1076d570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d590(undefined4 *param_1);
template<class... A> int FUN_1076d590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1076d5c0(undefined4 *param_1);
template<class... A> int FUN_1076d5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_107706f0(int param_1);
template<class... A> int FUN_107706f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771c90(void);
template<class... A> int FUN_10771c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771ca0(void);
template<class... A> int FUN_10771ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771cb0(void);
template<class... A> int FUN_10771cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771cc0(void);
template<class... A> int FUN_10771cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771cd0(void);
template<class... A> int FUN_10771cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10771ce0(void);
template<class... A> int FUN_10771ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771cf0(int param_1);
template<class... A> int FUN_10771cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771d00(int param_1);
template<class... A> int FUN_10771d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771d20(int param_1);
template<class... A> int FUN_10771d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771d30(int param_1);
template<class... A> int FUN_10771d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10771d40(int param_1);
template<class... A> int FUN_10771d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10772f30(void);
template<class... A> int FUN_10772f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10772f40(void);
template<class... A> int FUN_10772f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10772f50(void);
template<class... A> int FUN_10772f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10772f60(void);
template<class... A> int FUN_10772f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10773390(undefined4 *param_1);
template<class... A> int FUN_10773390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773e90(undefined4 *param_1);
template<class... A> int FUN_10773e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773ec0(undefined4 *param_1);
template<class... A> int FUN_10773ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773ed0(undefined4 *param_1);
template<class... A> int FUN_10773ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773ee0(undefined4 *param_1);
template<class... A> int FUN_10773ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10773ef0(undefined4 *param_1);
template<class... A> int FUN_10773ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10774080(undefined4 *param_1);
template<class... A> int FUN_10774080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107740a0(undefined4 *param_1);
template<class... A> int FUN_107740a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_107740d0(undefined4 *param_1);
template<class... A> int FUN_107740d0(A...);
extern void __fastcall FUN_106de7d0(void *param_1);

extern int ghidra_vftable_SCNewWizPageFor_SCAccountChangeEmailWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountDeletionWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountEmailVerificationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountLoginWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountResetPasswordWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountUserDetailsWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAddVoiceServiceWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAmazonAlexaPreviewWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAmazonAlexaSetupWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAmpConfigurationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCApConnectWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCApInstructionsWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAppVersionCheckWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAuthPlusAuthenticationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAutoTrueplayWizard_;

extern int ghidra_vftable_SCNewWizPageFor_SCAccountChangeEmailWizard__SCAccountChangeEmailWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountDeletionWizard__SCAccountDeletionWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountEmailVerificationWizard__SCAccountEmailVerificationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountLoginWizard__SCAccountLoginWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountResetPasswordWizard__SCAccountResetPasswordWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountUserDetailsWizard__SCAccountUserDetailsWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAccountWizard__SCAccountWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAddVoiceServiceWizard__SCAddVoiceServiceWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAmazonAlexaPreviewWizard__SCAmazonAlexaPreviewWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAmazonAlexaSetupWizard__SCAmazonAlexaSetupWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAmpConfigurationWizard__SCAmpConfigurationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCApConnectWizard__SCApConnectWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCApInstructionsWizard__SCApInstructionsWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAppVersionCheckWizard__SCAppVersionCheckWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAuthPlusAuthenticationWizard__SCAuthPlusAuthenticationWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCAutoTrueplayWizard__SCAutoTrueplayWizard_;

// Reference entry 106bcd90; body size 87 bytes.
extern int __stdcall thunk_FUN_101b2c50(int a1,int a2);
extern int __stdcall thunk_FUN_102460b0(int a1,int a2);
extern int __stdcall thunk_FUN_10246170(int a1,int a2);
extern int __stdcall thunk_FUN_10246290(int a1,int a2);
extern int __stdcall thunk_FUN_105a3010(int a1);
extern int __stdcall thunk_FUN_106aaa10(int a1,int a2);
extern int __stdcall thunk_FUN_106d91c0(int a1,int a2);
extern int __stdcall thunk_FUN_106d9220(int a1,int a2);
extern int __stdcall thunk_FUN_106dbf00(int a1);
extern int __stdcall thunk_FUN_10bcef80(int a1,int a2);
extern int __stdcall thunk_FUN_10dec580(int a1,int a2);
extern int __stdcall thunk_FUN_10df39a0(int a1);
extern int __stdcall thunk_FUN_10eb4cc0(int a1,int a2);
extern int __stdcall thunk_FUN_10eb4d80(int a1,int a2);
extern int __stdcall thunk_FUN_10eb4e80(int a1,int a2);
extern int __stdcall thunk_FUN_10eb64f0(int a1);
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
struct SCVtbl_14_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual int v(void); };
#line 1 "ENTRY_106bcd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_106bcd90(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x20000000) {
    param_1 = (uint)(param_1 * 8);
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


// Reference entry 106bd1b0; body size 13 bytes.
#line 1 "ENTRY_106bd1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bd1b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 106bd1c0; body size 13 bytes.
#line 1 "ENTRY_106bd1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bd1c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 106bd1d0; body size 11 bytes.
#line 1 "ENTRY_106bd1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bd1d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106bd1e0; body size 11 bytes.
#line 1 "ENTRY_106bd1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bd1e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106bd1f0; body size 11 bytes.
#line 1 "ENTRY_106bd1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bd1f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106bd200; body size 11 bytes.
#line 1 "ENTRY_106bd200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bd200(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106bd230; body size 4 bytes.
#line 1 "ENTRY_106bd230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106bd230(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 106bd240; body size 9 bytes.
#line 1 "ENTRY_106bd240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106bd240(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 106bd250; body size 9 bytes.
#line 1 "ENTRY_106bd250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106bd250(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 106bd260; body size 9 bytes.
#line 1 "ENTRY_106bd260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106bd260(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 106bd270; body size 23 bytes.
#line 1 "ENTRY_106bd270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106bd270(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x14);
}


// Reference entry 106bd290; body size 13 bytes.
#line 1 "ENTRY_106bd290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bd290(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 106bd2a0; body size 11 bytes.
#line 1 "ENTRY_106bd2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106bd2a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106bd3e0; body size 68 bytes.
#line 1 "ENTRY_106bd3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106bd3e0(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_10304120(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10304a70(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 106bde00; body size 66 bytes.
#line 1 "ENTRY_106bde00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_106bde00(int *param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
    puVar1 = (undefined4 *)((undefined4 *)puVar3[1]);
    do {
      if ((int)puVar1[4] < *param_2) {
        puVar2 = (undefined4 *)((undefined4 *)puVar1[2]);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)*puVar1);
        puVar3 = (undefined4 *)(puVar1);
      }
      puVar1 = (undefined4 *)(puVar2);
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  if ((*(char *)((int)puVar3 + 0xd) == '\0') && ((int)puVar3[4] <= *param_2)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 106be140; body size 54 bytes.
#line 1 "ENTRY_106be140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106be140(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x20);
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


// Reference entry 106be190; body size 57 bytes.
#line 1 "ENTRY_106be190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106be190(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x28);
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


// Reference entry 106be1e0; body size 57 bytes.
#line 1 "ENTRY_106be1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106be1e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x20);
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


// Reference entry 106be230; body size 60 bytes.
#line 1 "ENTRY_106be230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106be230(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x28);
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


// Reference entry 106be370; body size 9 bytes.
#line 1 "ENTRY_106be370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106be370(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106be380; body size 9 bytes.
#line 1 "ENTRY_106be380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106be380(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106be390; body size 9 bytes.
#line 1 "ENTRY_106be390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106be390(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106be5f0; body size 58 bytes.
#line 1 "ENTRY_106be5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_106be5f0(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 *puStack_4;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc), 0);
  puStack_4 = (undefined4 *)((undefined4 *)*puVar1);
  while( true ) {
    if ((undefined4 *)((puStack_4)) == (undefined4 *)(puVar1)) {
      return (undefined4)(0);
    }
    if ((undefined4)((param_2)) == puStack_4[4]) break;
    ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                  *)&puStack_4))->op_inc();
  }
  return (undefined4)(1);
}


// Reference entry 106be720; body size 8 bytes.
#line 1 "ENTRY_106be720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106be720(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 106be730; body size 12 bytes.
#line 1 "ENTRY_106be730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106be730(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106be740; body size 11 bytes.
#line 1 "ENTRY_106be740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106be740(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106be750; body size 11 bytes.
#line 1 "ENTRY_106be750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106be750(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106be760; body size 11 bytes.
#line 1 "ENTRY_106be760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106be760(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106be770; body size 11 bytes.
#line 1 "ENTRY_106be770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106be770(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106be780; body size 12 bytes.
#line 1 "ENTRY_106be780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106be780(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106be790; body size 12 bytes.
#line 1 "ENTRY_106be790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106be790(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106be7a0; body size 12 bytes.
#line 1 "ENTRY_106be7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106be7a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106be7b0; body size 12 bytes.
#line 1 "ENTRY_106be7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106be7b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106beb80; body size 57 bytes.
#line 1 "ENTRY_106beb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106beb80(int *param_2,int param_3,int param_4)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (param_3 != param_4) {
    uVar1 = (undefined4)(thunk_FUN_106ac6f0(param_4,*(undefined4 *)(param_1 + 4),param_3), 0);
    thunk_FUN_10478ea0(uVar1,*(undefined4 *)(param_1 + 4),param_1);
    *(undefined4*)(param_1 + 4) = (undefined4)(uVar1);
  }
  *param_2 = (int)(param_3);
  return;
}


// Reference entry 106bed40; body size 3 bytes.
#line 1 "ENTRY_106bed40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106bed40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106c1790; body size 4 bytes.
#line 1 "ENTRY_106c1790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_106c1790(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x38));
}


// Reference entry 106c4480; body size 7 bytes.
#line 1 "ENTRY_106c4480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_106c4480(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x550));
}


// Reference entry 106c5370; body size 20 bytes.
#line 1 "ENTRY_106c5370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106c5370(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 4));
  return (SCStr *)(param_2);
}


// Reference entry 106c6c00; body size 5 bytes.
#line 1 "ENTRY_106c6c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106c6c00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 106c6c10; body size 5 bytes.
#line 1 "ENTRY_106c6c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106c6c10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 106c7450; body size 8 bytes.
#line 1 "ENTRY_106c7450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106c7450(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x1c) != 0);
}


// Reference entry 106c7460; body size 7 bytes.
#line 1 "ENTRY_106c7460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_106c7460(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x809));
}


// Reference entry 106c8570; body size 29 bytes.
#line 1 "ENTRY_106c8570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_106c8570(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if ((param_2 == 1) || (iVar1 = (int)(param_1 + 0x144), param_2 != 2)) {
    iVar1 = (int)(param_1 + 0x138);
  }
  return (int)(iVar1);
}


// Reference entry 106c85a0; body size 29 bytes.
#line 1 "ENTRY_106c85a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_106c85a0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if ((param_2 == 1) || (iVar1 = (int)(param_1 + 0x144), param_2 != 2)) {
    iVar1 = (int)(param_1 + 0x138);
  }
  return (int)(iVar1);
}


// Reference entry 106c8810; body size 88 bytes.
#line 1 "ENTRY_106c8810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_106c8810(char *param_1){
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  if ((uint)((int)strlen((const char *)param_1)) < 0x21) {
    uVar4 = (uint)(0);
    while( true ) {
      cVar1 = (char)(param_1[uVar4]);
      iVar2 = (int)(isalnum((int)cVar1), 0);
      if (((iVar2 == 0) && (cVar1 != '_')) && (cVar1 != '-')) break;
      uVar4 = (uint)(uVar4 + 1);
      if (0x1f < uVar4) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 106c9cd0; body size 7 bytes.
#line 1 "ENTRY_106c9cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106c9cd0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 106c9ce0; body size 7 bytes.
#line 1 "ENTRY_106c9ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106c9ce0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 106ca050; body size 7 bytes.
#line 1 "ENTRY_106ca050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106ca050(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 106ca060; body size 7 bytes.
#line 1 "ENTRY_106ca060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_106ca060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ca0a0; body size 3 bytes.
#line 1 "ENTRY_106ca0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_106ca0a0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 106ca0b0; body size 6 bytes.
#line 1 "ENTRY_106ca0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ca0b0(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 106ca0c0; body size 6 bytes.
#line 1 "ENTRY_106ca0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ca0c0(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 106ca0d0; body size 6 bytes.
#line 1 "ENTRY_106ca0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ca0d0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 106ca0e0; body size 6 bytes.
#line 1 "ENTRY_106ca0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ca0e0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 106ca0f0; body size 6 bytes.
#line 1 "ENTRY_106ca0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ca0f0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 106ca100; body size 6 bytes.
#line 1 "ENTRY_106ca100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ca100(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 106ca110; body size 6 bytes.
#line 1 "ENTRY_106ca110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ca110(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 106ca120; body size 6 bytes.
#line 1 "ENTRY_106ca120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ca120(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 106ca130; body size 6 bytes.
#line 1 "ENTRY_106ca130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ca130(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 106ca140; body size 6 bytes.
#line 1 "ENTRY_106ca140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ca140(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 106ca150; body size 6 bytes.
#line 1 "ENTRY_106ca150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ca150(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 106ca160; body size 6 bytes.
#line 1 "ENTRY_106ca160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ca160(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 106cc630; body size 5 bytes.
#line 1 "ENTRY_106cc630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106cc630(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106cc640; body size 5 bytes.
#line 1 "ENTRY_106cc640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106cc640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106cc690; body size 3 bytes.
#line 1 "ENTRY_106cc690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106cc690(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106cc6a0; body size 3 bytes.
#line 1 "ENTRY_106cc6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106cc6a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106cc6b0; body size 3 bytes.
#line 1 "ENTRY_106cc6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106cc6b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106cc840; body size 40 bytes.
#line 1 "ENTRY_106cc840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106cc840(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_106b1900((int)(param_2));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
    return;
  }
  thunk_FUN_106aaa10((int)(*(int *)(param_1 + 4)),(int)(param_2));
  return;
}


// Reference entry 106cca00; body size 28 bytes.
#line 1 "ENTRY_106cca00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106cca00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106cca30; body size 28 bytes.
#line 1 "ENTRY_106cca30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106cca30(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106cca60; body size 28 bytes.
#line 1 "ENTRY_106cca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106cca60(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106cca90; body size 28 bytes.
#line 1 "ENTRY_106cca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106cca90(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106ce7d0; body size 5 bytes.
#line 1 "ENTRY_106ce7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ce7d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ce7e0; body size 5 bytes.
#line 1 "ENTRY_106ce7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ce7e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ce7f0; body size 5 bytes.
#line 1 "ENTRY_106ce7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ce7f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ce9b0; body size 58 bytes.
#line 1 "ENTRY_106ce9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106ce9b0(byte param_2)
{
  int param_1 = (int )this;
  byte *pbVar1;
  
  pbVar1 = (byte *)(operator_new(1), 0);
  if ((byte *)(pbVar1) == (byte *)(0x0)) {
    pbVar1 = (byte *)((byte *)0x0);
  }
  else {
    *pbVar1 = (byte)(param_2 ^ 1);
  }
  thunk_FUN_1106b190(-(uint)(param_1 != 0) & param_1 + 0xa0U,pbVar1,0);
  return;
}


// Reference entry 106cef70; body size 4 bytes.
#line 1 "ENTRY_106cef70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106cef70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 106cef80; body size 4 bytes.
#line 1 "ENTRY_106cef80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106cef80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 106cef90; body size 9 bytes.
#line 1 "ENTRY_106cef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106cef90(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 106cefa0; body size 27 bytes.
#line 1 "ENTRY_106cefa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106cefa0(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x1c);
}


// Reference entry 106cefd0; body size 9 bytes.
#line 1 "ENTRY_106cefd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106cefd0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 106cefe0; body size 23 bytes.
#line 1 "ENTRY_106cefe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106cefe0(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x14);
}


// Reference entry 106cfd10; body size 130 bytes.
#line 1 "ENTRY_106cfd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_106cfd10(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  ((SCVtbl_1_0*)(param_1))->v();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    ((SCVtbl_2_0*)(piVar2))->v();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)(((SCVtbl_3_0*)(piVar1))->v(), 0);
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)(((0x0)))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 106cfdc0; body size 5 bytes.
#line 1 "ENTRY_106cfdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106cfdc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106cfdd0; body size 70 bytes.
#line 1 "ENTRY_106cfdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106cfdd0(undefined4 *param_1)

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


// Reference entry 106cfe70; body size 10 bytes.
#line 1 "ENTRY_106cfe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106cfe70(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 106cfe80; body size 12 bytes.
#line 1 "ENTRY_106cfe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106cfe80(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 106cff10; body size 127 bytes.
#line 1 "ENTRY_106cff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106cff10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDiagnostics);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCDiagnostics);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x15] = (undefined4)(0);
  param_1[0x1f] = (undefined4)(0);
  param_1[0x20] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d0200; body size 3 bytes.
#line 1 "ENTRY_106d0200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d0200(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106d0210; body size 8 bytes.
#line 1 "ENTRY_106d0210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106d0210(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 106d0220; body size 4 bytes.
#line 1 "ENTRY_106d0220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d0220(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 106d0400; body size 8 bytes.
#line 1 "ENTRY_106d0400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106d0400(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 106d0410; body size 4 bytes.
#line 1 "ENTRY_106d0410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d0410(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 106d0420; body size 7 bytes.
#line 1 "ENTRY_106d0420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106d0420(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 106d0430; body size 26 bytes.
#line 1 "ENTRY_106d0430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106d0430(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 106d0450; body size 10 bytes.
#line 1 "ENTRY_106d0450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106d0450(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 106d0aa0; body size 16 bytes.
#line 1 "ENTRY_106d0aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d0aa0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106d0ac0; body size 4 bytes.
#line 1 "ENTRY_106d0ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d0ac0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 106d0d50; body size 3 bytes.
#line 1 "ENTRY_106d0d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d0d50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106d1220; body size 38 bytes.
#line 1 "ENTRY_106d1220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106d1220(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 106d1250; body size 18 bytes.
#line 1 "ENTRY_106d1250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d1250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d1270; body size 22 bytes.
#line 1 "ENTRY_106d1270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d1270(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106d1290; body size 22 bytes.
#line 1 "ENTRY_106d1290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d1290(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106d12b0; body size 18 bytes.
#line 1 "ENTRY_106d12b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d12b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d1450; body size 22 bytes.
#line 1 "ENTRY_106d1450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d1450(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106d1680; body size 40 bytes.
#line 1 "ENTRY_106d1680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106d1680(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 106d16c0; body size 91 bytes.
#line 1 "ENTRY_106d16c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106d16c0(int *param_2)
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


// Reference entry 106d1740; body size 26 bytes.
#line 1 "ENTRY_106d1740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106d1740(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 106d1760; body size 3 bytes.
#line 1 "ENTRY_106d1760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d1760(void)

{
  return;
}


// Reference entry 106d1770; body size 25 bytes.
#line 1 "ENTRY_106d1770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d1770(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 106d1810; body size 13 bytes.
#line 1 "ENTRY_106d1810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d1810(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106d1820; body size 13 bytes.
#line 1 "ENTRY_106d1820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d1820(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106d1830; body size 3 bytes.
#line 1 "ENTRY_106d1830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d1830(void)

{
  return;
}


// Reference entry 106d1ae0; body size 15 bytes.
#line 1 "ENTRY_106d1ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d1ae0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 106d1ba0; body size 5 bytes.
#line 1 "ENTRY_106d1ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d1ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d1cf0; body size 5 bytes.
#line 1 "ENTRY_106d1cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d1cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d1d00; body size 37 bytes.
#line 1 "ENTRY_106d1d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_106d1d00(int param_1,SCStr *param_2){
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 106d1fd0; body size 5 bytes.
#line 1 "ENTRY_106d1fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d1fd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d1fe0; body size 5 bytes.
#line 1 "ENTRY_106d1fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d1fe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d2030; body size 5 bytes.
#line 1 "ENTRY_106d2030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d2030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d2040; body size 5 bytes.
#line 1 "ENTRY_106d2040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d2040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d2050; body size 5 bytes.
#line 1 "ENTRY_106d2050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d2050(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d2060; body size 5 bytes.
#line 1 "ENTRY_106d2060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d2060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d2070; body size 34 bytes.
#line 1 "ENTRY_106d2070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d2070(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 106d2130; body size 86 bytes.
#line 1 "ENTRY_106d2130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106d2130(int *param_1,int *param_2)

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
      while ((param_1 = (int *)(piVar3), cVar1 == '\0' && ((int *)(piVar2) == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (int)(iVar4);
}


// Reference entry 106d21a0; body size 15 bytes.
#line 1 "ENTRY_106d21a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d21a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106d21c0; body size 15 bytes.
#line 1 "ENTRY_106d21c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d21c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106d21e0; body size 5 bytes.
#line 1 "ENTRY_106d21e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d21e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d21f0; body size 5 bytes.
#line 1 "ENTRY_106d21f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d21f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d2240; body size 5 bytes.
#line 1 "ENTRY_106d2240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d2240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d2450; body size 32 bytes.
#line 1 "ENTRY_106d2450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d2450(undefined4 *param_2)
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


// Reference entry 106d24c0; body size 16 bytes.
#line 1 "ENTRY_106d24c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d24c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d2500; body size 18 bytes.
#line 1 "ENTRY_106d2500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d2500(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d2560; body size 11 bytes.
#line 1 "ENTRY_106d2560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d2560(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106d2570; body size 11 bytes.
#line 1 "ENTRY_106d2570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d2570(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106d2600; body size 11 bytes.
#line 1 "ENTRY_106d2600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d2600(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106d2610; body size 11 bytes.
#line 1 "ENTRY_106d2610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d2610(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106d2620; body size 16 bytes.
#line 1 "ENTRY_106d2620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d2620(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d2640; body size 3 bytes.
#line 1 "ENTRY_106d2640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d2640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d2650; body size 52 bytes.
#line 1 "ENTRY_106d2650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d2650(undefined4 *param_1)

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


// Reference entry 106d29c0; body size 9 bytes.
#line 1 "ENTRY_106d29c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d29c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfUpnpClientInterface);
  return (undefined4 *)(param_1);
}


// Reference entry 106d3000; body size 65 bytes.
#line 1 "ENTRY_106d3000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106d3000(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if ((int)(iVar2) != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      ((SCVtbl_2_0*)(piVar1))->v();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      ((SCVtbl_1_0*)(piVar1))->v();
    }
  }
  return (int *)(param_1);
}


// Reference entry 106d3060; body size 14 bytes.
#line 1 "ENTRY_106d3060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106d3060(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106d3080; body size 14 bytes.
#line 1 "ENTRY_106d3080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106d3080(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106d30a0; body size 14 bytes.
#line 1 "ENTRY_106d30a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106d30a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 106d30c0; body size 14 bytes.
#line 1 "ENTRY_106d30c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106d30c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 106d31f0; body size 3 bytes.
#line 1 "ENTRY_106d31f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d31f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106d3200; body size 7 bytes.
#line 1 "ENTRY_106d3200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106d3200(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 106d3210; body size 3 bytes.
#line 1 "ENTRY_106d3210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d3210(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106d3220; body size 6 bytes.
#line 1 "ENTRY_106d3220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106d3220(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106d3230; body size 6 bytes.
#line 1 "ENTRY_106d3230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106d3230(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106d3240; body size 6 bytes.
#line 1 "ENTRY_106d3240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106d3240(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106d3250; body size 6 bytes.
#line 1 "ENTRY_106d3250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106d3250(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106d3270; body size 20 bytes.
#line 1 "ENTRY_106d3270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d3270(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 106d3290; body size 20 bytes.
#line 1 "ENTRY_106d3290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d3290(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 106d3650; body size 31 bytes.
#line 1 "ENTRY_106d3650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106d3650(undefined4 *param_1)

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


// Reference entry 106d36a0; body size 14 bytes.
#line 1 "ENTRY_106d36a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106d36a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 106d3ed0; body size 3 bytes.
#line 1 "ENTRY_106d3ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d3ed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d3ee0; body size 3 bytes.
#line 1 "ENTRY_106d3ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d3ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d3ef0; body size 3 bytes.
#line 1 "ENTRY_106d3ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d3ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d3f00; body size 3 bytes.
#line 1 "ENTRY_106d3f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d3f00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d3f10; body size 3 bytes.
#line 1 "ENTRY_106d3f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d3f10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d3f20; body size 3 bytes.
#line 1 "ENTRY_106d3f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d3f20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d3f30; body size 3 bytes.
#line 1 "ENTRY_106d3f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d3f30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d3f40; body size 3 bytes.
#line 1 "ENTRY_106d3f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d3f40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d4250; body size 30 bytes.
#line 1 "ENTRY_106d4250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106d4250(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)(*(char *)(*(int *)(param_1 + 8) + 0xd));
  iVar2 = (int)(*(int *)(param_1 + 8));
  while (iVar3 = (int)(iVar2), cVar1 == '\0') {
    iVar2 = (int)(*(int *)(iVar3 + 8));
    cVar1 = (char)(*(char *)(iVar2 + 0xd));
    param_1 = (int)(iVar3);
  }
  return (int)(param_1);
}


// Reference entry 106d4320; body size 3 bytes.
#line 1 "ENTRY_106d4320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106d4320(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 106d4330; body size 11 bytes.
#line 1 "ENTRY_106d4330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d4330(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106d43f0; body size 13 bytes.
#line 1 "ENTRY_106d43f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106d43f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 106d4ce0; body size 97 bytes.
#line 1 "ENTRY_106d4ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_106d4ce0(uint param_1)

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


// Reference entry 106d4d60; body size 13 bytes.
#line 1 "ENTRY_106d4d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106d4d60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 106d4da0; body size 29 bytes.
#line 1 "ENTRY_106d4da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106d4da0(int param_1)

{
  int iStack_8;
  int iStack_4;
  
  iStack_8 = (int)(param_1);
  iStack_4 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_8))->m_op_ctor((SCStr *)(param_1 + 0x85a0));
  thunk_FUN_10f19cf0<>();
  return;
}


// Reference entry 106d4dd0; body size 63 bytes.
#line 1 "ENTRY_106d4dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d4dd0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 106d4e20; body size 66 bytes.
#line 1 "ENTRY_106d4e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106d4e20(int param_1,int param_2)

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


// Reference entry 106d4e80; body size 9 bytes.
#line 1 "ENTRY_106d4e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d4e80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106d51a0; body size 11 bytes.
#line 1 "ENTRY_106d51a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106d51a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106d51b0; body size 11 bytes.
#line 1 "ENTRY_106d51b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106d51b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106d5a50; body size 7 bytes.
#line 1 "ENTRY_106d5a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106d5a50(int param_1)

{
  return (int)(param_1 + 0x85a8);
}


// Reference entry 106d5a80; body size 7 bytes.
#line 1 "ENTRY_106d5a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d5a80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x8598));
}


// Reference entry 106d5ad0; body size 23 bytes.
#line 1 "ENTRY_106d5ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106d5ad0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x85a0));
  return (SCStr *)(param_2);
}


// Reference entry 106d5cc0; body size 23 bytes.
#line 1 "ENTRY_106d5cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106d5cc0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x859c));
  return (SCStr *)(param_2);
}


// Reference entry 106d5cf0; body size 33 bytes.
#line 1 "ENTRY_106d5cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_106d5cf0(undefined4 param_1)

{
  thunk_FUN_1145c930(param_1,0);
  thunk_FUN_1145ad70(param_1,4000);
  return (undefined4)(param_1);
}


// Reference entry 106d5dd0; body size 3 bytes.
#line 1 "ENTRY_106d5dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d5dd0(void)

{
  return;
}


// Reference entry 106d6730; body size 3 bytes.
#line 1 "ENTRY_106d6730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_106d6730(void)

{
  return (undefined1)(0);
}


// Reference entry 106d6750; body size 21 bytes.
#line 1 "ENTRY_106d6750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106d6750(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x859c), 0);
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 106d6890; body size 6 bytes.
#line 1 "ENTRY_106d6890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d6890(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 106d68a0; body size 6 bytes.
#line 1 "ENTRY_106d68a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d68a0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 106d6b10; body size 26 bytes.
#line 1 "ENTRY_106d6b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106d6b10(undefined4 param_1)

{
  thunk_FUN_1126a120<>(param_1,"http://",7,"https://",8);
  return;
}


// Reference entry 106d6b30; body size 5 bytes.
#line 1 "ENTRY_106d6b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d6b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d6b40; body size 5 bytes.
#line 1 "ENTRY_106d6b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d6b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d6d40; body size 3 bytes.
#line 1 "ENTRY_106d6d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d6d40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106d6d50; body size 3 bytes.
#line 1 "ENTRY_106d6d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d6d50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106d6eb0; body size 28 bytes.
#line 1 "ENTRY_106d6eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106d6eb0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 106d7660; body size 25 bytes.
#line 1 "ENTRY_106d7660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d7660(void)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)((undefined1 *)(uint)&appuStack_2c);
  appuStack_2c[0] = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  thunk_FUN_106d6de0();
  return;
}


// Reference entry 106d7ac0; body size 5 bytes.
#line 1 "ENTRY_106d7ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106d7ac0(undefined4 *param_1)

{
 try {
  uint uVar1;
  undefined4 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTestPoint);
  puStack_14 = (undefined4 *)(param_1);
  if (param_1[6] != 0) {
    ((SCStr *)((SCStr *)&puStack_14))->m_op_ctor((SCStr *)(param_1 + 1));
    thunk_FUN_103d3340((int)(&puStack_14));

    ((SCStr *)((SCStr *)&puStack_14))->int_release();
  }
  param_1[6] = (undefined4)(0);
  if ((undefined4 *)param_1[5] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[5])(1,uVar1);
  }
  param_1[5] = (undefined4)(0);
  thunk_FUN_112a7f20(param_1 + 0xb);
  thunk_FUN_112a7c30(param_1 + 0xd);
  thunk_FUN_10246170((int)(param_1 + 9),(int)(*(undefined4 *)(param_1[9] + 4)));
  thunk_FUN_1148a50e(param_1[9],0x28);
  thunk_FUN_10246290((int)(param_1 + 7),(int)(*(undefined4 *)(param_1[7] + 4)));
  thunk_FUN_1148a50e(param_1[7],0x18);

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106d7ad0; body size 5 bytes.
#line 1 "ENTRY_106d7ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106d7ad0(undefined4 *param_1)

{
 try {
  uint uVar1;
  undefined4 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTestPoint);
  puStack_14 = (undefined4 *)(param_1);
  if (param_1[6] != 0) {
    ((SCStr *)((SCStr *)&puStack_14))->m_op_ctor((SCStr *)(param_1 + 1));
    thunk_FUN_103d3340((int)(&puStack_14));

    ((SCStr *)((SCStr *)&puStack_14))->int_release();
  }
  param_1[6] = (undefined4)(0);
  if ((undefined4 *)param_1[5] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[5])(1,uVar1);
  }
  param_1[5] = (undefined4)(0);
  thunk_FUN_112a7f20(param_1 + 0xb);
  thunk_FUN_112a7c30(param_1 + 0xd);
  thunk_FUN_10246170((int)(param_1 + 9),(int)(*(undefined4 *)(param_1[9] + 4)));
  thunk_FUN_1148a50e(param_1[9],0x28);
  thunk_FUN_10246290((int)(param_1 + 7),(int)(*(undefined4 *)(param_1[7] + 4)));
  thunk_FUN_1148a50e(param_1[7],0x18);

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106d7ae0; body size 21 bytes.
#line 1 "ENTRY_106d7ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106d7ae0(undefined4 *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTestPointManager);
  DAT_121a2764 = (int)(0);


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTestPointCollection);
  if (param_1[6] != 0) {
    ((SCStr *)((SCStr *)&piStack_14))->m_op_ctor((SCStr *)(param_1 + 1));
    thunk_FUN_103d3340((int)(&piStack_14));

    ((SCStr *)((SCStr *)&piStack_14))->int_release();
  }
  piVar3 = (int *)((int *)param_1[0x18]);
  piVar1 = (int *)(param_1 + 0x18);
  piStack_14 = (int *)((int *)*piVar3);
  if ((int *)((piStack_14)) != (int *)(piVar3)) {
    do {
      *(undefined4*)(piStack_14[5] + 0x18) = (undefined4)(0);
      ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                    *)&piStack_14))->op_inc();
      piVar3 = (int *)((int *)*piVar1);
    } while ((int *)((piStack_14)) != (int *)(piVar3));
  }
  thunk_FUN_102460b0((int)(piVar1),(int)(piVar3[1]));
  piVar2 = (int *)(param_1 + 0x1a);
  piVar3[1] = (int)((int)piVar3);
  *piVar3 = (int)((int)piVar3);
  piVar3[2] = (int)((int)piVar3);
  param_1[0x19] = (undefined4)(0);
  piVar3 = (int *)((int *)*piVar2);
  piStack_14 = (int *)((int *)*piVar3);
  if ((int *)((piStack_14)) != (int *)(piVar3)) {
    do {
      *(undefined4*)(piStack_14[5] + 0x18) = (undefined4)(0);
      ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                    *)&piStack_14))->op_inc();
      piVar3 = (int *)((int *)*piVar2);
    } while ((int *)((piStack_14)) != (int *)(piVar3));
  }
  thunk_FUN_102460b0((int)(piVar2),(int)(piVar3[1]));
  piVar3[1] = (int)((int)piVar3);
  *piVar3 = (int)((int)piVar3);
  piVar3[2] = (int)((int)piVar3);
  param_1[0x1b] = (undefined4)(0);
  thunk_FUN_102460b0((int)(piVar2),(int)(*(undefined4 *)(*piVar2 + 4)));
  thunk_FUN_1148a50e(*piVar2,0x18);
  thunk_FUN_102460b0((int)(piVar1),(int)(*(undefined4 *)(*piVar1 + 4)));
  thunk_FUN_1148a50e(*piVar1,0x18);
  thunk_FUN_103d0730();

  return;

 } catch (...) { }
}


// Reference entry 106d82d0; body size 3 bytes.
#line 1 "ENTRY_106d82d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d82d0(void)

{
  return;
}


// Reference entry 106d82e0; body size 3 bytes.
#line 1 "ENTRY_106d82e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d82e0(void)

{
  return (undefined4)(0);
}


// Reference entry 106d88f0; body size 18 bytes.
#line 1 "ENTRY_106d88f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d88f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8910; body size 18 bytes.
#line 1 "ENTRY_106d8910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d8910(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8930; body size 18 bytes.
#line 1 "ENTRY_106d8930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d8930(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8950; body size 25 bytes.
#line 1 "ENTRY_106d8950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d8950(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8970; body size 22 bytes.
#line 1 "ENTRY_106d8970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d8970(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8990; body size 22 bytes.
#line 1 "ENTRY_106d8990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d8990(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106d89b0; body size 20 bytes.
#line 1 "ENTRY_106d89b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d89b0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d89d0; body size 11 bytes.
#line 1 "ENTRY_106d89d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d89d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106d89e0; body size 11 bytes.
#line 1 "ENTRY_106d89e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d89e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106d89f0; body size 20 bytes.
#line 1 "ENTRY_106d89f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d89f0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8a10; body size 11 bytes.
#line 1 "ENTRY_106d8a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d8a10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8a20; body size 11 bytes.
#line 1 "ENTRY_106d8a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d8a20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8a30; body size 18 bytes.
#line 1 "ENTRY_106d8a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d8a30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8a50; body size 18 bytes.
#line 1 "ENTRY_106d8a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d8a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8a70; body size 18 bytes.
#line 1 "ENTRY_106d8a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d8a70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8c10; body size 22 bytes.
#line 1 "ENTRY_106d8c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d8c10(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8c30; body size 22 bytes.
#line 1 "ENTRY_106d8c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d8c30(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8c50; body size 11 bytes.
#line 1 "ENTRY_106d8c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d8c50(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8c60; body size 11 bytes.
#line 1 "ENTRY_106d8c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d8c60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8c70; body size 22 bytes.
#line 1 "ENTRY_106d8c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d8c70(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8c90; body size 22 bytes.
#line 1 "ENTRY_106d8c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d8c90(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d8cb0; body size 25 bytes.
#line 1 "ENTRY_106d8cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d8cb0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x2c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 106d8cd0; body size 25 bytes.
#line 1 "ENTRY_106d8cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d8cd0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 106d8cf0; body size 25 bytes.
#line 1 "ENTRY_106d8cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d8cf0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 106d8d10; body size 13 bytes.
#line 1 "ENTRY_106d8d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d8d10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106d8d20; body size 13 bytes.
#line 1 "ENTRY_106d8d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d8d20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106d8d30; body size 13 bytes.
#line 1 "ENTRY_106d8d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d8d30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106d8d40; body size 13 bytes.
#line 1 "ENTRY_106d8d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d8d40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106d8d50; body size 13 bytes.
#line 1 "ENTRY_106d8d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d8d50(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106d8d60; body size 3 bytes.
#line 1 "ENTRY_106d8d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d8d60(void)

{
  return;
}


// Reference entry 106d8d70; body size 3 bytes.
#line 1 "ENTRY_106d8d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d8d70(void)

{
  return;
}


// Reference entry 106d8d80; body size 3 bytes.
#line 1 "ENTRY_106d8d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d8d80(void)

{
  return;
}


// Reference entry 106d8d90; body size 3 bytes.
#line 1 "ENTRY_106d8d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d8d90(void)

{
  return;
}


// Reference entry 106d8df0; body size 28 bytes.
#line 1 "ENTRY_106d8df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106d8df0(undefined8 *param_2)
{
  int param_1 = (int )this;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(undefined8 **)(param_1 + 4), 0);
  *puVar1 = (undefined8)(*param_2);
  *(undefined4*)(puVar1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0xc);
  return;
}


// Reference entry 106d8e20; body size 28 bytes.
#line 1 "ENTRY_106d8e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106d8e20(undefined8 *param_2)
{
  int param_1 = (int )this;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(undefined8 **)(param_1 + 4), 0);
  *puVar1 = (undefined8)(*param_2);
  *(undefined4*)(puVar1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0xc);
  return;
}


// Reference entry 106d9400; body size 15 bytes.
#line 1 "ENTRY_106d9400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d9400(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x2c);
  return;
}


// Reference entry 106d9420; body size 15 bytes.
#line 1 "ENTRY_106d9420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d9420(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 106d9440; body size 15 bytes.
#line 1 "ENTRY_106d9440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d9440(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 106d9460; body size 26 bytes.
#line 1 "ENTRY_106d9460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d9460(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10def0d0();
  thunk_FUN_1148a50e(param_2,0x2c);
  return;
}


// Reference entry 106d9480; body size 15 bytes.
#line 1 "ENTRY_106d9480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d9480(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 106d94a0; body size 15 bytes.
#line 1 "ENTRY_106d94a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d94a0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 106d94c0; body size 19 bytes.
#line 1 "ENTRY_106d94c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_106d94c0(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x5d1745e) {
    return (int)(param_1 * 0x2c);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException((uint)&auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 106d94e0; body size 7 bytes.
#line 1 "ENTRY_106d94e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d94e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106d94f0; body size 5 bytes.
#line 1 "ENTRY_106d94f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d94f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9500; body size 5 bytes.
#line 1 "ENTRY_106d9500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9510; body size 31 bytes.
#line 1 "ENTRY_106d9510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_106d9510(int param_1,uint *param_2){
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX)) ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 106d9540; body size 31 bytes.
#line 1 "ENTRY_106d9540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_106d9540(int param_1,uint *param_2){
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX)) ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 106d9790; body size 7 bytes.
#line 1 "ENTRY_106d9790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9790(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106d97a0; body size 7 bytes.
#line 1 "ENTRY_106d97a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d97a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106d97b0; body size 5 bytes.
#line 1 "ENTRY_106d97b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d97b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d97c0; body size 5 bytes.
#line 1 "ENTRY_106d97c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d97c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d97d0; body size 43 bytes.
#line 1 "ENTRY_106d97d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d97d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (;(undefined8 *)( param_1) != (undefined8 *)(param_2); param_1 = (undefined8 *)((int)param_1 + 0xc)) {
    *param_3 = (undefined8)(*param_1);
    *(undefined4*)(param_3 + 1) = (undefined4)(*(undefined4 *)(param_1 + 1));
    param_3 = (undefined8 *)((undefined8 *)((int)param_3 + 0xc));
  }
  return;
}


// Reference entry 106d9810; body size 5 bytes.
#line 1 "ENTRY_106d9810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9820; body size 5 bytes.
#line 1 "ENTRY_106d9820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9830; body size 5 bytes.
#line 1 "ENTRY_106d9830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9840; body size 5 bytes.
#line 1 "ENTRY_106d9840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9850; body size 5 bytes.
#line 1 "ENTRY_106d9850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9860; body size 5 bytes.
#line 1 "ENTRY_106d9860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9870; body size 5 bytes.
#line 1 "ENTRY_106d9870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9880; body size 5 bytes.
#line 1 "ENTRY_106d9880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9890; body size 5 bytes.
#line 1 "ENTRY_106d9890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d98a0; body size 5 bytes.
#line 1 "ENTRY_106d98a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d98a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d98b0; body size 5 bytes.
#line 1 "ENTRY_106d98b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d98b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d98c0; body size 5 bytes.
#line 1 "ENTRY_106d98c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d98c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d98d0; body size 5 bytes.
#line 1 "ENTRY_106d98d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d98d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d98e0; body size 5 bytes.
#line 1 "ENTRY_106d98e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d98e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d98f0; body size 5 bytes.
#line 1 "ENTRY_106d98f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d98f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9900; body size 5 bytes.
#line 1 "ENTRY_106d9900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9910; body size 22 bytes.
#line 1 "ENTRY_106d9910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d9910(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 106d9930; body size 22 bytes.
#line 1 "ENTRY_106d9930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d9930(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 106d9950; body size 23 bytes.
#line 1 "ENTRY_106d9950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d9950(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_2 = (undefined8)(*param_3);
  *(undefined4*)(param_2 + 1) = (undefined4)(*(undefined4 *)(param_3 + 1));
  return;
}


// Reference entry 106d9970; body size 9 bytes.
#line 1 "ENTRY_106d9970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d9970(undefined4 param_1,SCStr *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_10dec580((int)(param_2 + 0x10),(int)(*(undefined4 *)(*(int *)(param_2 + 0x10) + 4)));
  thunk_FUN_1148a50e(*(undefined4 *)(param_2 + 0x10),0x1c,uVar2);
  piVar1 = (int *)(*(int **)(param_2 + 0xc), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)(param_2))->int_release();
  *(undefined4*)param_2 = (undefined4)((SCStr *)(0));

  return;

 } catch (...) { }
}


// Reference entry 106d9980; body size 3 bytes.
#line 1 "ENTRY_106d9980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d9980(void)

{
  return;
}


// Reference entry 106d9990; body size 3 bytes.
#line 1 "ENTRY_106d9990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d9990(void)

{
  return;
}


// Reference entry 106d99a0; body size 3 bytes.
#line 1 "ENTRY_106d99a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d99a0(void)

{
  return;
}


// Reference entry 106d99b0; body size 35 bytes.
#line 1 "ENTRY_106d99b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d99b0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_4_1*)(piVar1))->v((int)((int *)(piVar1) != (int *)(param_2)));
    param_2[9] = (int)(0);
  }
  return;
}


// Reference entry 106d99e0; body size 46 bytes.
#line 1 "ENTRY_106d99e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106d99e0(undefined8 *param_2)
{
  int param_1 = (int )this;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(undefined8 **)(param_1 + 4), 0);
  if ((undefined8 *)(puVar1) != *(undefined8 **)(param_1 + 8)) {
    *puVar1 = (undefined8)(*param_2);
    *(undefined4*)(puVar1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0xc);
    return;
  }
  thunk_FUN_106d8e50<>(puVar1,param_2);
  return;
}


// Reference entry 106d9a20; body size 15 bytes.
#line 1 "ENTRY_106d9a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9a20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106d9a40; body size 15 bytes.
#line 1 "ENTRY_106d9a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9a40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106d9a60; body size 15 bytes.
#line 1 "ENTRY_106d9a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9a60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106d9a80; body size 15 bytes.
#line 1 "ENTRY_106d9a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9a80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106d9aa0; body size 15 bytes.
#line 1 "ENTRY_106d9aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9aa0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106d9ac0; body size 5 bytes.
#line 1 "ENTRY_106d9ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9ac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9ad0; body size 5 bytes.
#line 1 "ENTRY_106d9ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9ae0; body size 5 bytes.
#line 1 "ENTRY_106d9ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9ae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9af0; body size 5 bytes.
#line 1 "ENTRY_106d9af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9b00; body size 5 bytes.
#line 1 "ENTRY_106d9b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9b00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9b10; body size 5 bytes.
#line 1 "ENTRY_106d9b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9b10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9b20; body size 5 bytes.
#line 1 "ENTRY_106d9b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9b30; body size 5 bytes.
#line 1 "ENTRY_106d9b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9b40; body size 5 bytes.
#line 1 "ENTRY_106d9b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9b50; body size 5 bytes.
#line 1 "ENTRY_106d9b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9b60; body size 5 bytes.
#line 1 "ENTRY_106d9b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9b70; body size 5 bytes.
#line 1 "ENTRY_106d9b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9b80; body size 5 bytes.
#line 1 "ENTRY_106d9b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9b90; body size 11 bytes.
#line 1 "ENTRY_106d9b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d9b90(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 106d9ba0; body size 11 bytes.
#line 1 "ENTRY_106d9ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106d9ba0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 106d9bb0; body size 5 bytes.
#line 1 "ENTRY_106d9bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9bc0; body size 5 bytes.
#line 1 "ENTRY_106d9bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9bd0; body size 5 bytes.
#line 1 "ENTRY_106d9bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106d9bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9be0; body size 18 bytes.
#line 1 "ENTRY_106d9be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d9be0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9c00; body size 18 bytes.
#line 1 "ENTRY_106d9c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d9c00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9ce0; body size 11 bytes.
#line 1 "ENTRY_106d9ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d9ce0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9cf0; body size 11 bytes.
#line 1 "ENTRY_106d9cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d9cf0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9e00; body size 11 bytes.
#line 1 "ENTRY_106d9e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d9e00(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9e10; body size 11 bytes.
#line 1 "ENTRY_106d9e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d9e10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9e20; body size 16 bytes.
#line 1 "ENTRY_106d9e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d9e20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9e40; body size 16 bytes.
#line 1 "ENTRY_106d9e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d9e40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9e60; body size 16 bytes.
#line 1 "ENTRY_106d9e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d9e60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9e80; body size 21 bytes.
#line 1 "ENTRY_106d9e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d9e80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9ea0; body size 23 bytes.
#line 1 "ENTRY_106d9ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d9ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9ec0; body size 3 bytes.
#line 1 "ENTRY_106d9ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d9ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9ed0; body size 3 bytes.
#line 1 "ENTRY_106d9ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d9ed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9ee0; body size 3 bytes.
#line 1 "ENTRY_106d9ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d9ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9ef0; body size 3 bytes.
#line 1 "ENTRY_106d9ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106d9ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106d9f00; body size 52 bytes.
#line 1 "ENTRY_106d9f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d9f00(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9f50; body size 52 bytes.
#line 1 "ENTRY_106d9f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d9f50(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9fa0; body size 52 bytes.
#line 1 "ENTRY_106d9fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106d9fa0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x2c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106d9ff0; body size 13 bytes.
#line 1 "ENTRY_106d9ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106d9ff0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106da000; body size 13 bytes.
#line 1 "ENTRY_106da000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106da000(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106da010; body size 23 bytes.
#line 1 "ENTRY_106da010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106da010(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106da240; body size 52 bytes.
#line 1 "ENTRY_106da240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106da240(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x2c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106da290; body size 39 bytes.
#line 1 "ENTRY_106da290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106da290(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizParams);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  param_1[3] = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  param_1[4] = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  return (undefined4 *)(param_1);
}


// Reference entry 106da2c0; body size 25 bytes.
#line 1 "ENTRY_106da2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106da2c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106da420; body size 19 bytes.
#line 1 "ENTRY_106da420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106da420(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 106da440; body size 19 bytes.
#line 1 "ENTRY_106da440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106da440(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 106da460; body size 19 bytes.
#line 1 "ENTRY_106da460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106da460(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 106da480; body size 19 bytes.
#line 1 "ENTRY_106da480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106da480(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 106da4a0; body size 3 bytes.
#line 1 "ENTRY_106da4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106da4a0(void)

{
  return;
}


// Reference entry 106da4e0; body size 5 bytes.
#line 1 "ENTRY_106da4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */void __fastcall  FUN_106da4e0(int *param_1){
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4), 0);
  if (*(char *)((int)*(int **)(iVar2 + 4) + 0xd) == '\0') {
    do {
      thunk_FUN_106d9220((int)(param_1),(int)(piVar3[2]));
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x18);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x18);
  return;
}


// Reference entry 106da530; body size 5 bytes.
#line 1 "ENTRY_106da530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106da530(SCStr *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_10dec580((int)(param_1 + 0x10),(int)(*(undefined4 *)(*(int *)(param_1 + 0x10) + 4)));
  thunk_FUN_1148a50e(*(undefined4 *)(param_1 + 0x10),0x1c,uVar2);
  piVar1 = (int *)(*(int **)(param_1 + 0xc), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)(param_1))->int_release();
  *(undefined4*)param_1 = (undefined4)((SCStr *)(0));

  return;

 } catch (...) { }
}


// Reference entry 106da990; body size 14 bytes.
#line 1 "ENTRY_106da990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106da990(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106da9b0; body size 14 bytes.
#line 1 "ENTRY_106da9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106da9b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 106da9d0; body size 14 bytes.
#line 1 "ENTRY_106da9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106da9d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 106da9f0; body size 14 bytes.
#line 1 "ENTRY_106da9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_106da9f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 106dabf0; body size 15 bytes.
#line 1 "ENTRY_106dabf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_106dabf0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0xc);
}


// Reference entry 106dac10; body size 15 bytes.
#line 1 "ENTRY_106dac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_106dac10(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0xc);
}


// Reference entry 106dac30; body size 6 bytes.
#line 1 "ENTRY_106dac30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106dac30(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106dac40; body size 6 bytes.
#line 1 "ENTRY_106dac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106dac40(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106dac50; body size 6 bytes.
#line 1 "ENTRY_106dac50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106dac50(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106dac60; body size 6 bytes.
#line 1 "ENTRY_106dac60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106dac60(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 106dac70; body size 18 bytes.
#line 1 "ENTRY_106dac70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_106dac70(uint *param_1,uint *param_2)

{
  return (bool)(*param_1 < (uint)(*(param_2)));
}


// Reference entry 106dac90; body size 18 bytes.
#line 1 "ENTRY_106dac90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_106dac90(uint *param_1,uint *param_2)

{
  return (bool)(*param_1 < (uint)(*(param_2)));
}


// Reference entry 106daf40; body size 31 bytes.
#line 1 "ENTRY_106daf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106daf40(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 106daf70; body size 31 bytes.
#line 1 "ENTRY_106daf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106daf70(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 106dafa0; body size 31 bytes.
#line 1 "ENTRY_106dafa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106dafa0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x2c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 106db010; body size 62 bytes.
#line 1 "ENTRY_106db010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_106db010(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0xc);
  if (0x15555555 - (uVar1 >> 1) < uVar1) {
    return (uint)(0x15555555);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 106db100; body size 14 bytes.
#line 1 "ENTRY_106db100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106db100(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 106db120; body size 14 bytes.
#line 1 "ENTRY_106db120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106db120(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 106db140; body size 3 bytes.
#line 1 "ENTRY_106db140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106db140(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 106db1a0; body size 8 bytes.
#line 1 "ENTRY_106db1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106db1a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 106db1b0; body size 3 bytes.
#line 1 "ENTRY_106db1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db1b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db1c0; body size 3 bytes.
#line 1 "ENTRY_106db1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db1c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db1d0; body size 3 bytes.
#line 1 "ENTRY_106db1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db1d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db1e0; body size 3 bytes.
#line 1 "ENTRY_106db1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db1e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db1f0; body size 3 bytes.
#line 1 "ENTRY_106db1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db1f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db200; body size 3 bytes.
#line 1 "ENTRY_106db200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db210; body size 3 bytes.
#line 1 "ENTRY_106db210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db220; body size 3 bytes.
#line 1 "ENTRY_106db220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db230; body size 3 bytes.
#line 1 "ENTRY_106db230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db240; body size 3 bytes.
#line 1 "ENTRY_106db240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db250; body size 3 bytes.
#line 1 "ENTRY_106db250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db260; body size 3 bytes.
#line 1 "ENTRY_106db260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db270; body size 3 bytes.
#line 1 "ENTRY_106db270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db280; body size 3 bytes.
#line 1 "ENTRY_106db280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db290; body size 3 bytes.
#line 1 "ENTRY_106db290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db2a0; body size 3 bytes.
#line 1 "ENTRY_106db2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db2a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db2b0; body size 3 bytes.
#line 1 "ENTRY_106db2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db2b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db2c0; body size 3 bytes.
#line 1 "ENTRY_106db2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db2c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db2d0; body size 3 bytes.
#line 1 "ENTRY_106db2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db2d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db2e0; body size 3 bytes.
#line 1 "ENTRY_106db2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db2e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db2f0; body size 3 bytes.
#line 1 "ENTRY_106db2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db2f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db300; body size 3 bytes.
#line 1 "ENTRY_106db300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db310; body size 3 bytes.
#line 1 "ENTRY_106db310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db320; body size 3 bytes.
#line 1 "ENTRY_106db320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db330; body size 3 bytes.
#line 1 "ENTRY_106db330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106db340; body size 4 bytes.
#line 1 "ENTRY_106db340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db340(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 106db870; body size 7 bytes.
#line 1 "ENTRY_106db870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106db870(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 106db880; body size 79 bytes.
#line 1 "ENTRY_106db880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106db880(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8), 0);
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
  piVar2 = (int *)(*(int **)(param_2 + 4), 0);
  if ((int)(param_2) == *piVar2) {
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


// Reference entry 106db8f0; body size 79 bytes.
#line 1 "ENTRY_106db8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106db8f0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8), 0);
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
  piVar2 = (int *)(*(int **)(param_2 + 4), 0);
  if ((int)(param_2) == *piVar2) {
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


// Reference entry 106db960; body size 3 bytes.
#line 1 "ENTRY_106db960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106db960(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 106db970; body size 11 bytes.
#line 1 "ENTRY_106db970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db970(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106db980; body size 11 bytes.
#line 1 "ENTRY_106db980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106db980(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106db990; body size 6 bytes.
#line 1 "ENTRY_106db990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106db990(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106db9a0; body size 83 bytes.
#line 1 "ENTRY_106db9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106db9a0(int *param_2)
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


// Reference entry 106dba10; body size 83 bytes.
#line 1 "ENTRY_106dba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106dba10(int *param_2)
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


// Reference entry 106dba80; body size 10 bytes.
#line 1 "ENTRY_106dba80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106dba80(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 106dbc00; body size 45 bytes.
#line 1 "ENTRY_106dbc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106dbc00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (;(undefined8 *)( param_1) != (undefined8 *)(param_2); param_1 = (undefined8 *)((int)param_1 + 0xc)) {
    *param_3 = (undefined8)(*param_1);
    *(undefined4*)(param_3 + 1) = (undefined4)(*(undefined4 *)(param_1 + 1));
    param_3 = (undefined8 *)((undefined8 *)((int)param_3 + 0xc));
  }
  return;
}


// Reference entry 106dbc40; body size 46 bytes.
#line 1 "ENTRY_106dbc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106dbc40(undefined8 *param_1,undefined8 *param_2,int param_3,unsigned int recovered_unused_stack_0)

{
  if ((undefined8 *)(param_1) != (undefined8 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      *(undefined8*)(param_3 + (int)param_1) = (undefined8)(*param_1);
      *(undefined4*)(param_3 + 8 + (int)param_1) = (undefined4)(*(undefined4 *)(param_1 + 1));
      param_1 = (undefined8 *)((undefined8 *)((int)param_1 + 0xc));
    } while ((undefined8 *)(param_1) != (undefined8 *)(param_2));
  }
  return;
}


// Reference entry 106dbc80; body size 46 bytes.
#line 1 "ENTRY_106dbc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106dbc80(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  if ((undefined8 *)(param_1) != (undefined8 *)(param_2)) {
    param_3 = (int)(param_3 - (int)param_1);
    do {
      *(undefined8*)(param_3 + (int)param_1) = (undefined8)(*param_1);
      *(undefined4*)(param_3 + 8 + (int)param_1) = (undefined4)(*(undefined4 *)(param_1 + 1));
      param_1 = (undefined8 *)((undefined8 *)((int)param_1 + 0xc));
    } while ((undefined8 *)(param_1) != (undefined8 *)(param_2));
  }
  return;
}


// Reference entry 106dbcd0; body size 87 bytes.
#line 1 "ENTRY_106dbcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_106dbcd0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x5d1745e) {
    param_1 = (uint)(param_1 * 0x2c);
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


// Reference entry 106dbd40; body size 90 bytes.
#line 1 "ENTRY_106dbd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_106dbd40(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
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


// Reference entry 106dbdc0; body size 90 bytes.
#line 1 "ENTRY_106dbdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_106dbdc0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
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


// Reference entry 106dbe40; body size 90 bytes.
#line 1 "ENTRY_106dbe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_106dbe40(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x15555556) {
    param_1 = (uint)(param_1 * 0xc);
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


// Reference entry 106dbec0; body size 7 bytes.
#line 1 "ENTRY_106dbec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106dbec0(int param_1)

{
  return (int)(*(int *)(param_1 + 4) + -0xc);
}


// Reference entry 106dbed0; body size 7 bytes.
#line 1 "ENTRY_106dbed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106dbed0(int param_1)

{
  return (int)(*(int *)(param_1 + 4) + -0xc);
}


// Reference entry 106dbee0; body size 22 bytes.
#line 1 "ENTRY_106dbee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106dbee0(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0xc);
}


// Reference entry 106dbfc0; body size 52 bytes.
#line 1 "ENTRY_106dbfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106dbfc0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x2c);
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


// Reference entry 106dc010; body size 57 bytes.
#line 1 "ENTRY_106dc010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106dc010(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 106dc060; body size 57 bytes.
#line 1 "ENTRY_106dc060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106dc060(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 106dc0b0; body size 60 bytes.
#line 1 "ENTRY_106dc0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106dc0b0(int param_1,int param_2)

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


// Reference entry 106dc100; body size 60 bytes.
#line 1 "ENTRY_106dc100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106dc100(int param_1,int param_2)

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


// Reference entry 106dc150; body size 60 bytes.
#line 1 "ENTRY_106dc150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106dc150(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0xc);
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


// Reference entry 106dc1f0; body size 11 bytes.
#line 1 "ENTRY_106dc1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106dc1f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106dc200; body size 11 bytes.
#line 1 "ENTRY_106dc200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106dc200(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 106dc720; body size 46 bytes.
#line 1 "ENTRY_106dc720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106dc720(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a3010((int)(param_2));
  ((SCVtbl_14_0*)(param_1))->v();
  thunk_FUN_10df39a0((int)(param_1));
  param_1[0x32] = (int)(0);
  return;
}


// Reference entry 106dcc70; body size 6 bytes.
#line 1 "ENTRY_106dcc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dcc70(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 106dcc80; body size 6 bytes.
#line 1 "ENTRY_106dcc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dcc80(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 106dcc90; body size 6 bytes.
#line 1 "ENTRY_106dcc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dcc90(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 106dcca0; body size 6 bytes.
#line 1 "ENTRY_106dcca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dcca0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 106dccb0; body size 6 bytes.
#line 1 "ENTRY_106dccb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dccb0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 106dccc0; body size 6 bytes.
#line 1 "ENTRY_106dccc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dccc0(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 106dcce0; body size 5 bytes.
#line 1 "ENTRY_106dcce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dcce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106dccf0; body size 5 bytes.
#line 1 "ENTRY_106dccf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dccf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106dcd00; body size 5 bytes.
#line 1 "ENTRY_106dcd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106dcd00(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -0xc);
  return;
}


// Reference entry 106dcd10; body size 46 bytes.
#line 1 "ENTRY_106dcd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106dcd10(undefined8 *param_2)
{
  int param_1 = (int )this;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(undefined8 **)(param_1 + 4), 0);
  if ((undefined8 *)(puVar1) != *(undefined8 **)(param_1 + 8)) {
    *puVar1 = (undefined8)(*param_2);
    *(undefined4*)(puVar1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0xc);
    return;
  }
  thunk_FUN_106d8e50<>(puVar1,param_2);
  return;
}


// Reference entry 106dcd50; body size 22 bytes.
#line 1 "ENTRY_106dcd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106dcd50(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0xc);
}


// Reference entry 106dcd70; body size 31 bytes.
#line 1 "ENTRY_106dcd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106dcd70(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 106dcda0; body size 18 bytes.
#line 1 "ENTRY_106dcda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106dcda0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106dcdc0; body size 18 bytes.
#line 1 "ENTRY_106dcdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106dcdc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106dcde0; body size 22 bytes.
#line 1 "ENTRY_106dcde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106dcde0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106dce00; body size 22 bytes.
#line 1 "ENTRY_106dce00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106dce00(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106dce20; body size 18 bytes.
#line 1 "ENTRY_106dce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106dce20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106dce40; body size 18 bytes.
#line 1 "ENTRY_106dce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106dce40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106dd0d0; body size 31 bytes.
#line 1 "ENTRY_106dd0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106dd0d0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 106dd100; body size 31 bytes.
#line 1 "ENTRY_106dd100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106dd100(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 106dd130; body size 22 bytes.
#line 1 "ENTRY_106dd130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106dd130(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106dd150; body size 22 bytes.
#line 1 "ENTRY_106dd150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106dd150(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106dd170; body size 33 bytes.
#line 1 "ENTRY_106dd170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106dd170(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 106dd1a0; body size 33 bytes.
#line 1 "ENTRY_106dd1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106dd1a0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 106dd1d0; body size 33 bytes.
#line 1 "ENTRY_106dd1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106dd1d0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 106dd200; body size 25 bytes.
#line 1 "ENTRY_106dd200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106dd200(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 106dd220; body size 25 bytes.
#line 1 "ENTRY_106dd220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106dd220(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 106dd240; body size 13 bytes.
#line 1 "ENTRY_106dd240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106dd240(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106dd250; body size 13 bytes.
#line 1 "ENTRY_106dd250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106dd250(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106dd260; body size 13 bytes.
#line 1 "ENTRY_106dd260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106dd260(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106dd270; body size 13 bytes.
#line 1 "ENTRY_106dd270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106dd270(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106dd280; body size 3 bytes.
#line 1 "ENTRY_106dd280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106dd280(void)

{
  return;
}


// Reference entry 106dd290; body size 3 bytes.
#line 1 "ENTRY_106dd290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106dd290(void)

{
  return;
}


// Reference entry 106dd4f0; body size 83 bytes.
#line 1 "ENTRY_106dd4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106dd4f0(int *param_2,SCStr *param_3)
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


// Reference entry 106dd560; body size 15 bytes.
#line 1 "ENTRY_106dd560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106dd560(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 106dd580; body size 15 bytes.
#line 1 "ENTRY_106dd580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106dd580(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 106dd6a0; body size 5 bytes.
#line 1 "ENTRY_106dd6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dd6a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106dd6b0; body size 5 bytes.
#line 1 "ENTRY_106dd6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dd6b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106dd6c0; body size 37 bytes.
#line 1 "ENTRY_106dd6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_106dd6c0(int param_1,SCStr *param_2){
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 106dd6f0; body size 37 bytes.
#line 1 "ENTRY_106dd6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_106dd6f0(int param_1,SCStr *param_2){
  bool bVar1;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(param_1 + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 106ddb20; body size 5 bytes.
#line 1 "ENTRY_106ddb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddb20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ddb30; body size 5 bytes.
#line 1 "ENTRY_106ddb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddb30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ddb40; body size 5 bytes.
#line 1 "ENTRY_106ddb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddb40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ddb50; body size 5 bytes.
#line 1 "ENTRY_106ddb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddb50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ddb60; body size 5 bytes.
#line 1 "ENTRY_106ddb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddb60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ddb70; body size 5 bytes.
#line 1 "ENTRY_106ddb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddb70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ddb80; body size 5 bytes.
#line 1 "ENTRY_106ddb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddb80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ddb90; body size 5 bytes.
#line 1 "ENTRY_106ddb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddb90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ddba0; body size 5 bytes.
#line 1 "ENTRY_106ddba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ddbb0; body size 27 bytes.
#line 1 "ENTRY_106ddbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ddbb0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 106ddbe0; body size 27 bytes.
#line 1 "ENTRY_106ddbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ddbe0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 106ddc10; body size 27 bytes.
#line 1 "ENTRY_106ddc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106ddc10(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 106ddd20; body size 15 bytes.
#line 1 "ENTRY_106ddd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddd20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106ddd40; body size 15 bytes.
#line 1 "ENTRY_106ddd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddd40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106ddd60; body size 15 bytes.
#line 1 "ENTRY_106ddd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddd60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106ddd80; body size 15 bytes.
#line 1 "ENTRY_106ddd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddd80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106ddda0; body size 5 bytes.
#line 1 "ENTRY_106ddda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddda0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106dddb0; body size 5 bytes.
#line 1 "ENTRY_106dddb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dddb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106dddc0; body size 5 bytes.
#line 1 "ENTRY_106dddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dddc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106dddd0; body size 5 bytes.
#line 1 "ENTRY_106dddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dddd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106ddde0; body size 5 bytes.
#line 1 "ENTRY_106ddde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106ddde0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106dddf0; body size 5 bytes.
#line 1 "ENTRY_106dddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dddf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106dde00; body size 18 bytes.
#line 1 "ENTRY_106dde00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106dde00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106dde20; body size 18 bytes.
#line 1 "ENTRY_106dde20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106dde20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106ddfc0; body size 16 bytes.
#line 1 "ENTRY_106ddfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106ddfc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106ddfe0; body size 16 bytes.
#line 1 "ENTRY_106ddfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106ddfe0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106de000; body size 3 bytes.
#line 1 "ENTRY_106de000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106de000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106de010; body size 3 bytes.
#line 1 "ENTRY_106de010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106de010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106de020; body size 52 bytes.
#line 1 "ENTRY_106de020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106de020(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106de070; body size 52 bytes.
#line 1 "ENTRY_106de070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106de070(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106deed0; body size 31 bytes.
#line 1 "ENTRY_106deed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106deed0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 106def00; body size 31 bytes.
#line 1 "ENTRY_106def00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106def00(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 106def70; body size 14 bytes.
#line 1 "ENTRY_106def70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106def70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 106def90; body size 14 bytes.
#line 1 "ENTRY_106def90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106def90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 106defb0; body size 3 bytes.
#line 1 "ENTRY_106defb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106defb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106defc0; body size 3 bytes.
#line 1 "ENTRY_106defc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106defc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106defd0; body size 3 bytes.
#line 1 "ENTRY_106defd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106defd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106defe0; body size 3 bytes.
#line 1 "ENTRY_106defe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106defe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106deff0; body size 3 bytes.
#line 1 "ENTRY_106deff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106deff0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106df000; body size 3 bytes.
#line 1 "ENTRY_106df000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106df000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106df010; body size 3 bytes.
#line 1 "ENTRY_106df010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106df010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106df020; body size 3 bytes.
#line 1 "ENTRY_106df020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106df020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106df030; body size 3 bytes.
#line 1 "ENTRY_106df030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106df030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106df040; body size 3 bytes.
#line 1 "ENTRY_106df040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106df040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106df050; body size 3 bytes.
#line 1 "ENTRY_106df050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106df050(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106df060; body size 3 bytes.
#line 1 "ENTRY_106df060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106df060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106df070; body size 3 bytes.
#line 1 "ENTRY_106df070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106df070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106df080; body size 3 bytes.
#line 1 "ENTRY_106df080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106df080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106df090; body size 3 bytes.
#line 1 "ENTRY_106df090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106df090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106df5c0; body size 79 bytes.
#line 1 "ENTRY_106df5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106df5c0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8), 0);
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
  piVar2 = (int *)(*(int **)(param_2 + 4), 0);
  if ((int)(param_2) == *piVar2) {
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


// Reference entry 106df630; body size 79 bytes.
#line 1 "ENTRY_106df630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106df630(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8), 0);
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
  piVar2 = (int *)(*(int **)(param_2 + 4), 0);
  if ((int)(param_2) == *piVar2) {
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


// Reference entry 106df6a0; body size 11 bytes.
#line 1 "ENTRY_106df6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106df6a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106df6b0; body size 11 bytes.
#line 1 "ENTRY_106df6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106df6b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106df6c0; body size 83 bytes.
#line 1 "ENTRY_106df6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106df6c0(int *param_2)
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


// Reference entry 106df730; body size 83 bytes.
#line 1 "ENTRY_106df730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106df730(int *param_2)
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


// Reference entry 106df7a0; body size 90 bytes.
#line 1 "ENTRY_106df7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_106df7a0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
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


// Reference entry 106df820; body size 90 bytes.
#line 1 "ENTRY_106df820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_106df820(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
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


// Reference entry 106df8a0; body size 57 bytes.
#line 1 "ENTRY_106df8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106df8a0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 106df8f0; body size 57 bytes.
#line 1 "ENTRY_106df8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106df8f0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 106df940; body size 60 bytes.
#line 1 "ENTRY_106df940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106df940(int param_1,int param_2)

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


// Reference entry 106df990; body size 60 bytes.
#line 1 "ENTRY_106df990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106df990(int param_1,int param_2)

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


// Reference entry 106df9e0; body size 6 bytes.
#line 1 "ENTRY_106df9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * FUN_106df9e0(void)

{
  return (undefined4 *)(&DAT_121a279c);
}


// Reference entry 106dfa40; body size 4 bytes.
#line 1 "ENTRY_106dfa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106dfa40(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 106dfb70; body size 4 bytes.
#line 1 "ENTRY_106dfb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106dfb70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 106dfe50; body size 6 bytes.
#line 1 "ENTRY_106dfe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dfe50(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 106dfe60; body size 6 bytes.
#line 1 "ENTRY_106dfe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dfe60(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 106dfe70; body size 6 bytes.
#line 1 "ENTRY_106dfe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dfe70(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 106dfe80; body size 6 bytes.
#line 1 "ENTRY_106dfe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106dfe80(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 106dfed0; body size 18 bytes.
#line 1 "ENTRY_106dfed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106dfed0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106dfef0; body size 25 bytes.
#line 1 "ENTRY_106dfef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106dfef0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106dff10; body size 25 bytes.
#line 1 "ENTRY_106dff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106dff10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106dff30; body size 22 bytes.
#line 1 "ENTRY_106dff30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106dff30(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106dff50; body size 18 bytes.
#line 1 "ENTRY_106dff50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106dff50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106dff70; body size 22 bytes.
#line 1 "ENTRY_106dff70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106dff70(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106dff90; body size 22 bytes.
#line 1 "ENTRY_106dff90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106dff90(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106dffb0; body size 25 bytes.
#line 1 "ENTRY_106dffb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106dffb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106dffd0; body size 33 bytes.
#line 1 "ENTRY_106dffd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106dffd0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(*param_6);
  uVar2 = (undefined4)(*param_5);
  *param_1 = (undefined4)(*param_4);
  param_1[2] = (undefined4)(uVar1);
  param_1[1] = (undefined4)(uVar2);
  return (undefined4 *)(param_1);
}


// Reference entry 106e0000; body size 25 bytes.
#line 1 "ENTRY_106e0000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e0000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106e0020; body size 33 bytes.
#line 1 "ENTRY_106e0020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e0020(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(*param_6);
  uVar2 = (undefined4)(*param_5);
  *param_1 = (undefined4)(*param_4);
  param_1[2] = (undefined4)(uVar1);
  param_1[1] = (undefined4)(uVar2);
  return (undefined4 *)(param_1);
}


// Reference entry 106e0100; body size 78 bytes.
#line 1 "ENTRY_106e0100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106e0100(int *param_2)
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


// Reference entry 106e0170; body size 78 bytes.
#line 1 "ENTRY_106e0170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106e0170(int *param_2)
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


// Reference entry 106e01e0; body size 25 bytes.
#line 1 "ENTRY_106e01e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e01e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 106e0200; body size 13 bytes.
#line 1 "ENTRY_106e0200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e0200(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106e0210; body size 13 bytes.
#line 1 "ENTRY_106e0210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e0210(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 106e0220; body size 3 bytes.
#line 1 "ENTRY_106e0220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e0220(void)

{
  return;
}


// Reference entry 106e0230; body size 34 bytes.
#line 1 "ENTRY_106e0230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e0230(undefined4 *param_1,undefined4 *param_2)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 106e0440; body size 23 bytes.
#line 1 "ENTRY_106e0440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e0440(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106e1600((int)(param_2));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
  return;
}


// Reference entry 106e0460; body size 39 bytes.
#line 1 "ENTRY_106e0460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e0460(undefined4 *param_2)
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


// Reference entry 106e0520; body size 39 bytes.
#line 1 "ENTRY_106e0520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e0520(undefined4 *param_2)
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


// Reference entry 106e0550; body size 23 bytes.
#line 1 "ENTRY_106e0550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e0550(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106e1600((int)(param_2));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
  return;
}


// Reference entry 106e0570; body size 39 bytes.
#line 1 "ENTRY_106e0570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e0570(undefined4 *param_2)
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


// Reference entry 106e0aa0; body size 15 bytes.
#line 1 "ENTRY_106e0aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e0aa0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 106e0ac0; body size 15 bytes.
#line 1 "ENTRY_106e0ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e0ac0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 106e0ae0; body size 7 bytes.
#line 1 "ENTRY_106e0ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e0ae0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106e0af0; body size 7 bytes.
#line 1 "ENTRY_106e0af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e0af0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106e0b00; body size 31 bytes.
#line 1 "ENTRY_106e0b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_106e0b00(int param_1,uint *param_2){
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = (uint)(*param_2), *(int *)(param_1 + 0x10) <= (int)(in_EAX))) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 106e0bc0; body size 24 bytes.
#line 1 "ENTRY_106e0bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e0bc0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106e0c90(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106e0be0; body size 5 bytes.
#line 1 "ENTRY_106e0be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e0be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e0bf0; body size 5 bytes.
#line 1 "ENTRY_106e0bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e0bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e0e90; body size 5 bytes.
#line 1 "ENTRY_106e0e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e0e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e0ea0; body size 5 bytes.
#line 1 "ENTRY_106e0ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e0ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e0eb0; body size 5 bytes.
#line 1 "ENTRY_106e0eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e0eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e0ec0; body size 5 bytes.
#line 1 "ENTRY_106e0ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e0ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e0ed0; body size 14 bytes.
#line 1 "ENTRY_106e0ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e0ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_106e1600((int)(param_3));
  return;
}


// Reference entry 106e0ef0; body size 14 bytes.
#line 1 "ENTRY_106e0ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e0ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_106e1600((int)(param_3));
  return;
}


// Reference entry 106e0f10; body size 103 bytes.
#line 1 "ENTRY_106e0f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e0f10(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTree);
  param_2[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x10));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 8));
  *(undefined4*)(param_3 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_3 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_3 + 8) = (undefined4)(0);
  param_2[2] = (undefined4)(uVar3);
  param_2[3] = (undefined4)(uVar2);
  param_2[4] = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x1c));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x18));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x14));
  *(undefined4*)(param_3 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_3 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_3 + 0x14) = (undefined4)(0);
  param_2[5] = (undefined4)(uVar3);
  param_2[6] = (undefined4)(uVar2);
  param_2[7] = (undefined4)(uVar1);
  return;
}


// Reference entry 106e0f90; body size 28 bytes.
#line 1 "ENTRY_106e0f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e0f90(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 106e0fc0; body size 28 bytes.
#line 1 "ENTRY_106e0fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e0fc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 106e0ff0; body size 28 bytes.
#line 1 "ENTRY_106e0ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e0ff0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 106e1020; body size 13 bytes.
#line 1 "ENTRY_106e1020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e1020(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 106e1030; body size 11 bytes.
#line 1 "ENTRY_106e1030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e1030(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)(0);
  return;
}


// Reference entry 106e10b0; body size 3 bytes.
#line 1 "ENTRY_106e10b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e10b0(void)

{
  return;
}


// Reference entry 106e10c0; body size 40 bytes.
#line 1 "ENTRY_106e10c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e10c0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_106e1600((int)(param_2));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
    return;
  }
  thunk_FUN_106e05a0<>(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 106e1150; body size 15 bytes.
#line 1 "ENTRY_106e1150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1150(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106e1170; body size 15 bytes.
#line 1 "ENTRY_106e1170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1170(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106e1190; body size 15 bytes.
#line 1 "ENTRY_106e1190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1190(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106e11b0; body size 15 bytes.
#line 1 "ENTRY_106e11b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e11b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 106e11d0; body size 5 bytes.
#line 1 "ENTRY_106e11d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e11d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e11e0; body size 5 bytes.
#line 1 "ENTRY_106e11e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e11e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e11f0; body size 5 bytes.
#line 1 "ENTRY_106e11f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e11f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e1200; body size 5 bytes.
#line 1 "ENTRY_106e1200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e1210; body size 5 bytes.
#line 1 "ENTRY_106e1210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e1220; body size 5 bytes.
#line 1 "ENTRY_106e1220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e1230; body size 5 bytes.
#line 1 "ENTRY_106e1230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e1240; body size 5 bytes.
#line 1 "ENTRY_106e1240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e1250; body size 5 bytes.
#line 1 "ENTRY_106e1250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e1260; body size 5 bytes.
#line 1 "ENTRY_106e1260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e1270; body size 5 bytes.
#line 1 "ENTRY_106e1270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e1280; body size 5 bytes.
#line 1 "ENTRY_106e1280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e1290; body size 5 bytes.
#line 1 "ENTRY_106e1290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e12a0; body size 5 bytes.
#line 1 "ENTRY_106e12a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e12a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e12b0; body size 5 bytes.
#line 1 "ENTRY_106e12b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e12b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e12c0; body size 5 bytes.
#line 1 "ENTRY_106e12c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e12c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e12d0; body size 6 bytes.
#line 1 "ENTRY_106e12d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e12d0(void)

{
  return (undefined4)(DAT_121a27d0);
}


// Reference entry 106e12e0; body size 6 bytes.
#line 1 "ENTRY_106e12e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e12e0(void)

{
  return (undefined4)(DAT_121a27d4);
}


// Reference entry 106e12f0; body size 6 bytes.
#line 1 "ENTRY_106e12f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e12f0(void)

{
  return (undefined4)(DAT_121a27b8);
}


// Reference entry 106e1300; body size 6 bytes.
#line 1 "ENTRY_106e1300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1300(void)

{
  return (undefined4)(DAT_121a27c4);
}


// Reference entry 106e1310; body size 6 bytes.
#line 1 "ENTRY_106e1310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1310(void)

{
  return (undefined4)(DAT_121a27c0);
}


// Reference entry 106e1320; body size 6 bytes.
#line 1 "ENTRY_106e1320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1320(void)

{
  return (undefined4)(DAT_121a27b0);
}


// Reference entry 106e1330; body size 6 bytes.
#line 1 "ENTRY_106e1330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1330(void)

{
  return (undefined4)(DAT_121a27c8);
}


// Reference entry 106e1340; body size 6 bytes.
#line 1 "ENTRY_106e1340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1340(void)

{
  return (undefined4)(DAT_121a27cc);
}


// Reference entry 106e1350; body size 6 bytes.
#line 1 "ENTRY_106e1350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1350(void)

{
  return (undefined4)(DAT_121a27b4);
}


// Reference entry 106e1360; body size 6 bytes.
#line 1 "ENTRY_106e1360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1360(void)

{
  return (undefined4)(DAT_121a27bc);
}


// Reference entry 106e1370; body size 6 bytes.
#line 1 "ENTRY_106e1370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1370(void)

{
  return (undefined4)(DAT_121a27ac);
}


// Reference entry 106e14c0; body size 5 bytes.
#line 1 "ENTRY_106e14c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e14c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e14d0; body size 5 bytes.
#line 1 "ENTRY_106e14d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e14d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e14e0; body size 5 bytes.
#line 1 "ENTRY_106e14e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e14e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e14f0; body size 5 bytes.
#line 1 "ENTRY_106e14f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e14f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e1500; body size 5 bytes.
#line 1 "ENTRY_106e1500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e1500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e1510; body size 65 bytes.
#line 1 "ENTRY_106e1510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e1510(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTree);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106e1570; body size 105 bytes.
#line 1 "ENTRY_106e1570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e1570(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTree);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  param_1[2] = (undefined4)(uVar3);
  param_1[3] = (undefined4)(uVar2);
  param_1[4] = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  *(undefined4*)(param_2 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);
  param_1[5] = (undefined4)(uVar1);
  param_1[6] = (undefined4)(uVar3);
  param_1[7] = (undefined4)(uVar2);
  return (undefined4 *)(param_1);
}


// Reference entry 106e1880; body size 63 bytes.
#line 1 "ENTRY_106e1880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e1880(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTree);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106e18d0; body size 11 bytes.
#line 1 "ENTRY_106e18d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e18d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeIfChainInterface);
  return (undefined4 *)(param_1);
}


// Reference entry 106e18e0; body size 9 bytes.
#line 1 "ENTRY_106e18e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e18e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeIfChainInterface);
  return (undefined4 *)(param_1);
}


// Reference entry 106e18f0; body size 11 bytes.
#line 1 "ENTRY_106e18f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e18f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  return (undefined4 *)(param_1);
}


// Reference entry 106e1900; body size 9 bytes.
#line 1 "ENTRY_106e1900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e1900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  return (undefined4 *)(param_1);
}


// Reference entry 106e1910; body size 57 bytes.
#line 1 "ENTRY_106e1910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e1910(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 106e23b0; body size 16 bytes.
#line 1 "ENTRY_106e23b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e23b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106e23d0; body size 16 bytes.
#line 1 "ENTRY_106e23d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e23d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106e23f0; body size 16 bytes.
#line 1 "ENTRY_106e23f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e23f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106e2780; body size 18 bytes.
#line 1 "ENTRY_106e2780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e2780(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106e27e0; body size 11 bytes.
#line 1 "ENTRY_106e27e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e27e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 106e2870; body size 16 bytes.
#line 1 "ENTRY_106e2870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e2870(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106e2890; body size 21 bytes.
#line 1 "ENTRY_106e2890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e2890(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106e28b0; body size 21 bytes.
#line 1 "ENTRY_106e28b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e28b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 106e28d0; body size 25 bytes.
#line 1 "ENTRY_106e28d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e28d0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 106e28f0; body size 23 bytes.
#line 1 "ENTRY_106e28f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e28f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106e2910; body size 25 bytes.
#line 1 "ENTRY_106e2910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e2910(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 106e2930; body size 23 bytes.
#line 1 "ENTRY_106e2930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e2930(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106e2950; body size 3 bytes.
#line 1 "ENTRY_106e2950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e2950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e2960; body size 3 bytes.
#line 1 "ENTRY_106e2960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e2960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e2970; body size 3 bytes.
#line 1 "ENTRY_106e2970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e2970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e2980; body size 52 bytes.
#line 1 "ENTRY_106e2980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e2980(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106e29d0; body size 49 bytes.
#line 1 "ENTRY_106e29d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e29d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[2]);
  uVar2 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_2[1]);
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
}


// Reference entry 106e2b10; body size 23 bytes.
#line 1 "ENTRY_106e2b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e2b10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106e2b30; body size 49 bytes.
#line 1 "ENTRY_106e2b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e2b30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[2]);
  uVar2 = (undefined4)(*param_2);
  uVar3 = (undefined4)(param_2[1]);
  param_2[2] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  *param_2 = (undefined4)(0);
  param_1[2] = (undefined4)(uVar1);
  *param_1 = (undefined4)(uVar2);
  param_1[1] = (undefined4)(uVar3);
  return (undefined4 *)(param_1);
}


// Reference entry 106e2c30; body size 23 bytes.
#line 1 "ENTRY_106e2c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_106e2c30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106e2c50; body size 57 bytes.
#line 1 "ENTRY_106e2c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e2c50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountBluetoothPermissionsPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountBluetoothPermissionsPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountBluetoothPermissionsPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountBluetoothPermissionsPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106e2da0; body size 57 bytes.
#line 1 "ENTRY_106e2da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e2da0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountBluetoothServicesPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountBluetoothServicesPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountBluetoothServicesPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountBluetoothServicesPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106e34e0; body size 57 bytes.
#line 1 "ENTRY_106e34e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e34e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountGeneralNetworkErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountGeneralNetworkErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountGeneralNetworkErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountGeneralNetworkErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106e3630; body size 57 bytes.
#line 1 "ENTRY_106e3630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e3630(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountLocationPermissionsPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountLocationPermissionsPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountLocationPermissionsPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountLocationPermissionsPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106e3780; body size 57 bytes.
#line 1 "ENTRY_106e3780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e3780(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountLocationServicesPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountLocationServicesPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountLocationServicesPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountLocationServicesPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106e3cf0; body size 93 bytes.
#line 1 "ENTRY_106e3cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e3cf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountWelcomePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountWelcomePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountWelcomePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountWelcomePage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x3a) = (undefined2)(0x100);
  *(undefined1*)((int)param_1 + 0xea) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 106e4950; body size 38 bytes.
#line 1 "ENTRY_106e4950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e4950(undefined4 *param_2)
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


// Reference entry 106e4980; body size 38 bytes.
#line 1 "ENTRY_106e4980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e4980(undefined4 *param_2)
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


// Reference entry 106e4b60; body size 7 bytes.
#line 1 "ENTRY_106e4b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4b60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  return;
}


// Reference entry 106e4c30; body size 11 bytes.
#line 1 "ENTRY_106e4c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4c30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106e4c40; body size 11 bytes.
#line 1 "ENTRY_106e4c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4c40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106e4c50; body size 11 bytes.
#line 1 "ENTRY_106e4c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4c50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106e4c60; body size 11 bytes.
#line 1 "ENTRY_106e4c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4c60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106e4c70; body size 11 bytes.
#line 1 "ENTRY_106e4c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4c70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106e4c80; body size 11 bytes.
#line 1 "ENTRY_106e4c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4c80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106e4c90; body size 11 bytes.
#line 1 "ENTRY_106e4c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4c90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106e4ca0; body size 11 bytes.
#line 1 "ENTRY_106e4ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4ca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106e4cb0; body size 11 bytes.
#line 1 "ENTRY_106e4cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4cb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106e4cc0; body size 11 bytes.
#line 1 "ENTRY_106e4cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4cc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106e4cd0; body size 11 bytes.
#line 1 "ENTRY_106e4cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4cd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106e4ef0; body size 38 bytes.
#line 1 "ENTRY_106e4ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4ef0(undefined4 *param_1)

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


// Reference entry 106e4f20; body size 38 bytes.
#line 1 "ENTRY_106e4f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4f20(undefined4 *param_1)

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


// Reference entry 106e4f50; body size 38 bytes.
#line 1 "ENTRY_106e4f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e4f50(undefined4 *param_1)

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


// Reference entry 106e5010; body size 19 bytes.
#line 1 "ENTRY_106e5010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5010(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 106e5030; body size 19 bytes.
#line 1 "ENTRY_106e5030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5030(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 106e50d0; body size 38 bytes.
#line 1 "ENTRY_106e50d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e50d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountWizard__SCAccountWizard_);
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


// Reference entry 106e5100; body size 21 bytes.
#line 1 "ENTRY_106e5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5100(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a27d0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106e5120; body size 38 bytes.
#line 1 "ENTRY_106e5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5120(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountWizard__SCAccountWizard_);
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


// Reference entry 106e5150; body size 21 bytes.
#line 1 "ENTRY_106e5150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5150(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a27d4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106e52b0; body size 21 bytes.
#line 1 "ENTRY_106e52b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e52b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a27b8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106e5320; body size 21 bytes.
#line 1 "ENTRY_106e5320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5320(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a27c4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106e5340; body size 38 bytes.
#line 1 "ENTRY_106e5340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5340(undefined4 *param_1)

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


// Reference entry 106e5370; body size 21 bytes.
#line 1 "ENTRY_106e5370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5370(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a27c0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106e5390; body size 38 bytes.
#line 1 "ENTRY_106e5390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5390(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountWizard__SCAccountWizard_);
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


// Reference entry 106e53c0; body size 21 bytes.
#line 1 "ENTRY_106e53c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e53c0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a27b0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106e53e0; body size 38 bytes.
#line 1 "ENTRY_106e53e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e53e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountWizard__SCAccountWizard_);
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


// Reference entry 106e5410; body size 21 bytes.
#line 1 "ENTRY_106e5410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5410(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a27c8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106e5430; body size 38 bytes.
#line 1 "ENTRY_106e5430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5430(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountWizard__SCAccountWizard_);
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


// Reference entry 106e5460; body size 21 bytes.
#line 1 "ENTRY_106e5460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5460(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a27cc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106e5480; body size 38 bytes.
#line 1 "ENTRY_106e5480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5480(undefined4 *param_1)

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


// Reference entry 106e54b0; body size 21 bytes.
#line 1 "ENTRY_106e54b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e54b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a27b4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106e54d0; body size 38 bytes.
#line 1 "ENTRY_106e54d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e54d0(undefined4 *param_1)

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


// Reference entry 106e5500; body size 21 bytes.
#line 1 "ENTRY_106e5500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e5500(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a27bc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106e55d0; body size 21 bytes.
#line 1 "ENTRY_106e55d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e55d0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a27ac = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 106e5b80; body size 3 bytes.
#line 1 "ENTRY_106e5b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e5b80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106e5b90; body size 3 bytes.
#line 1 "ENTRY_106e5b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e5b90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106e5ba0; body size 3 bytes.
#line 1 "ENTRY_106e5ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e5ba0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106e5bb0; body size 3 bytes.
#line 1 "ENTRY_106e5bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e5bb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106e5bc0; body size 3 bytes.
#line 1 "ENTRY_106e5bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e5bc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 106e5bd0; body size 18 bytes.
#line 1 "ENTRY_106e5bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_106e5bd0(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 106e6eb0; body size 31 bytes.
#line 1 "ENTRY_106e6eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e6eb0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 106e6f00; body size 32 bytes.
#line 1 "ENTRY_106e6f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e6f00(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106e79e0(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(param_2 * 0x20 + iVar1);
  return;
}


// Reference entry 106e6f30; body size 30 bytes.
#line 1 "ENTRY_106e6f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e6f30(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106e7a50(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 106e6f60; body size 49 bytes.
#line 1 "ENTRY_106e6f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_106e6f60(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 5);
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x7ffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 106e6fa0; body size 49 bytes.
#line 1 "ENTRY_106e6fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_106e6fa0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 106e7110; body size 14 bytes.
#line 1 "ENTRY_106e7110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e7110(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 106e7180; body size 5 bytes.
#line 1 "ENTRY_106e7180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e7180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e7190; body size 3 bytes.
#line 1 "ENTRY_106e7190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e7190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e71a0; body size 3 bytes.
#line 1 "ENTRY_106e71a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e71a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e71b0; body size 3 bytes.
#line 1 "ENTRY_106e71b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e71b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e71c0; body size 3 bytes.
#line 1 "ENTRY_106e71c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e71c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e71d0; body size 3 bytes.
#line 1 "ENTRY_106e71d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e71d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e71e0; body size 3 bytes.
#line 1 "ENTRY_106e71e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e71e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e71f0; body size 3 bytes.
#line 1 "ENTRY_106e71f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e71f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e7200; body size 3 bytes.
#line 1 "ENTRY_106e7200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e7200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e7210; body size 3 bytes.
#line 1 "ENTRY_106e7210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e7210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e7220; body size 3 bytes.
#line 1 "ENTRY_106e7220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e7220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e7230; body size 3 bytes.
#line 1 "ENTRY_106e7230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e7230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e7240; body size 3 bytes.
#line 1 "ENTRY_106e7240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e7240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e7250; body size 3 bytes.
#line 1 "ENTRY_106e7250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e7250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e7260; body size 3 bytes.
#line 1 "ENTRY_106e7260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e7260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e7270; body size 3 bytes.
#line 1 "ENTRY_106e7270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e7270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e7510; body size 5 bytes.
#line 1 "ENTRY_106e7510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106e7510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 106e7590; body size 3 bytes.
#line 1 "ENTRY_106e7590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106e7590(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 106e75a0; body size 3 bytes.
#line 1 "ENTRY_106e75a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106e75a0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 106e75b0; body size 11 bytes.
#line 1 "ENTRY_106e75b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e75b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106e75c0; body size 6 bytes.
#line 1 "ENTRY_106e75c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e75c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106e75d0; body size 6 bytes.
#line 1 "ENTRY_106e75d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e75d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 106e7760; body size 24 bytes.
#line 1 "ENTRY_106e7760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e7760(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106e0d30(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106e7820; body size 24 bytes.
#line 1 "ENTRY_106e7820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e7820(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106e0d30(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106e7840; body size 24 bytes.
#line 1 "ENTRY_106e7840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e7840(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106e0c90(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106e7860; body size 24 bytes.
#line 1 "ENTRY_106e7860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e7860(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106e0d30(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106e7880; body size 24 bytes.
#line 1 "ENTRY_106e7880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106e7880(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106e0c90(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 106e7960; body size 90 bytes.
#line 1 "ENTRY_106e7960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_106e7960(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xccccccd) {
    param_1 = (uint)(param_1 * 0x14);
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


// Reference entry 106e7b00; body size 7 bytes.
#line 1 "ENTRY_106e7b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106e7b00(int param_1)

{
  return (int)(*(int *)(param_1 + 4) + -0x20);
}


// Reference entry 106e7b10; body size 9 bytes.
#line 1 "ENTRY_106e7b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106e7b10(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 5);
}


// Reference entry 106e7b20; body size 9 bytes.
#line 1 "ENTRY_106e7b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_106e7b20(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 106e7b30; body size 11 bytes.
#line 1 "ENTRY_106e7b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106e7b30(int param_1)

{
  *(undefined4*)(param_1 + 0xf0) = (undefined4)(0);
  return;
}


// Reference entry 106e8a20; body size 57 bytes.
#line 1 "ENTRY_106e8a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_106e8a20(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x14);
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


// Reference entry 106e8a70; body size 60 bytes.
#line 1 "ENTRY_106e8a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_106e8a70(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x14);
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


// Reference entry 106e8b60; body size 9 bytes.
#line 1 "ENTRY_106e8b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e8b60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106e8b70; body size 9 bytes.
#line 1 "ENTRY_106e8b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106e8b70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 106e8c80; body size 37 bytes.
#line 1 "ENTRY_106e8c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e8c80(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xe8));
  piVar1 = (int *)(*(int **)(param_1 + 0xec), 0);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 106e8cb0; body size 37 bytes.
#line 1 "ENTRY_106e8cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106e8cb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xe8));
  piVar1 = (int *)(*(int **)(param_1 + 0xec), 0);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 106ed330; body size 23 bytes.
#line 1 "ENTRY_106ed330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106ed330(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf4));
  return (SCStr *)(param_2);
}


// Reference entry 106ee0a0; body size 4 bytes.
#line 1 "ENTRY_106ee0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106ee0a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x28));
}


// Reference entry 106f1ed0; body size 6 bytes.
#line 1 "ENTRY_106f1ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f1ed0(void)

{
  return (undefined4)(DAT_121a27d0);
}


// Reference entry 106f1ee0; body size 6 bytes.
#line 1 "ENTRY_106f1ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f1ee0(void)

{
  return (undefined4)(DAT_121a27d4);
}


// Reference entry 106f1ef0; body size 6 bytes.
#line 1 "ENTRY_106f1ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f1ef0(void)

{
  return (undefined4)(DAT_121a27b8);
}


// Reference entry 106f1f00; body size 6 bytes.
#line 1 "ENTRY_106f1f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f1f00(void)

{
  return (undefined4)(DAT_121a27c4);
}


// Reference entry 106f1f10; body size 6 bytes.
#line 1 "ENTRY_106f1f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f1f10(void)

{
  return (undefined4)(DAT_121a27c0);
}


// Reference entry 106f1f20; body size 6 bytes.
#line 1 "ENTRY_106f1f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f1f20(void)

{
  return (undefined4)(DAT_121a27b0);
}


// Reference entry 106f1f30; body size 6 bytes.
#line 1 "ENTRY_106f1f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f1f30(void)

{
  return (undefined4)(DAT_121a27c8);
}


// Reference entry 106f1f40; body size 6 bytes.
#line 1 "ENTRY_106f1f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f1f40(void)

{
  return (undefined4)(DAT_121a27cc);
}


// Reference entry 106f1f50; body size 6 bytes.
#line 1 "ENTRY_106f1f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f1f50(void)

{
  return (undefined4)(DAT_121a27b4);
}


// Reference entry 106f1f60; body size 6 bytes.
#line 1 "ENTRY_106f1f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f1f60(void)

{
  return (undefined4)(DAT_121a27bc);
}


// Reference entry 106f1f70; body size 6 bytes.
#line 1 "ENTRY_106f1f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f1f70(void)

{
  return (undefined4)(DAT_121a27ac);
}


// Reference entry 106f1f80; body size 6 bytes.
#line 1 "ENTRY_106f1f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f1f80(void)

{
  return (undefined4)(DAT_121a27a8);
}


// Reference entry 106f1fb0; body size 5 bytes.
#line 1 "ENTRY_106f1fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f1fb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 106f1fc0; body size 5 bytes.
#line 1 "ENTRY_106f1fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f1fc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 106f1fd0; body size 5 bytes.
#line 1 "ENTRY_106f1fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f1fd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 106f1fe0; body size 5 bytes.
#line 1 "ENTRY_106f1fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f1fe0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 106f1ff0; body size 5 bytes.
#line 1 "ENTRY_106f1ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f1ff0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 106f2000; body size 5 bytes.
#line 1 "ENTRY_106f2000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f2000(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xbc));
}


// Reference entry 106f2120; body size 7 bytes.
#line 1 "ENTRY_106f2120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_106f2120(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x104));
}


// Reference entry 106f2130; body size 5 bytes.
#line 1 "ENTRY_106f2130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f2130(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106f2140; body size 5 bytes.
#line 1 "ENTRY_106f2140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f2140(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106f2150; body size 5 bytes.
#line 1 "ENTRY_106f2150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f2150(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106f2160; body size 5 bytes.
#line 1 "ENTRY_106f2160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f2160(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106f2170; body size 5 bytes.
#line 1 "ENTRY_106f2170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f2170(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106f2180; body size 5 bytes.
#line 1 "ENTRY_106f2180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f2180(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106f2190; body size 5 bytes.
#line 1 "ENTRY_106f2190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_106f2190(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb8));
}


// Reference entry 106f2250; body size 11 bytes.
#line 1 "ENTRY_106f2250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_106f2250(int param_1)

{
  return (bool)(1 < *(int *)(param_1 + 0xf0));
}


// Reference entry 106f2540; body size 7 bytes.
#line 1 "ENTRY_106f2540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f2540(int param_1)

{
  *(int*)(param_1 + 0xf0) = (int)(*(int *)(param_1 + 0xf0) + 1);
  return;
}


// Reference entry 106f2550; body size 82 bytes.
#line 1 "ENTRY_106f2550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106f2550(undefined4 param_2,char param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int *)((param_1 + 0x18)) == *(int *)((param_1 + 0x1c))) {
    thunk_FUN_106e05a0<>(*(int *)(param_1 + 0x18),param_2);
  }
  else {
    thunk_FUN_106e1600((int)(param_2));
    *(int*)(param_1 + 0x18) = (int)(*(int *)(param_1 + 0x18) + 0x20);
  }
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  if (param_3 == '\0') {
    if (*(int *)(iVar1 + -0x1c) == 4) {
      *(undefined4*)(iVar1 + -0x1c) = (undefined4)(5);
      return;
    }
    if (*(int *)(iVar1 + -0x1c) == 0) {
      *(undefined4*)(iVar1 + -0x1c) = (undefined4)(1);
    }
  }
  return;
}


// Reference entry 106f4a20; body size 26 bytes.
#line 1 "ENTRY_106f4a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106f4a20(undefined4 param_2)
{
  int param_1 = (int )this;
  param_1 = (int)(param_1 + 0xe0);
  thunk_FUN_101b5540(param_1,param_2);
  thunk_FUN_101b2c50((int)(param_1),(int)(param_2));
  return;
}


// Reference entry 106f4b30; body size 6 bytes.
#line 1 "ENTRY_106f4b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_106f4b30(void)

{
  return (undefined4)(0xccccccc);
}


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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106f6b60(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_106e1600((int)(param_2));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
    return;
  }
  thunk_FUN_106e05a0<>(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 106f6ca0; body size 28 bytes.
#line 1 "ENTRY_106f6ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f6ca0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
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
  if ((int *)(piVar1) != (int *)(0x0)) {
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
  if ((int *)(piVar1) != (int *)(0x0)) {
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106f6e40(SCStr *param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106f6e70(SCStr *param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106f7160(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106f76c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountChangeEmailExistingAccountPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountChangeEmailExistingAccountPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountChangeEmailExistingAccountPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountChangeEmailExistingAccountPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106f7ae0; body size 57 bytes.
#line 1 "ENTRY_106f7ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106f7ae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106f8460; body size 11 bytes.
#line 1 "ENTRY_106f8460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f8460(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106f8470; body size 11 bytes.
#line 1 "ENTRY_106f8470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f8470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106f8480; body size 11 bytes.
#line 1 "ENTRY_106f8480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f8480(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


// Reference entry 106f8520; body size 38 bytes.
#line 1 "ENTRY_106f8520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106f8520(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountChangeEmailWizard__SCAccountChangeEmailWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountChangeEmailWizard__SCAccountChangeEmailWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106f9b30(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xe8));
  piVar1 = (int *)(*(int **)(param_1 + 0xec), 0);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 106fb500; body size 23 bytes.
#line 1 "ENTRY_106fb500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_106fb500(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf4));
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
  
  iVar1 = (int)(thunk_FUN_106dbf00((int)(DAT_121a2830)), 0);
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106fd6e0(SCStr *param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_106fd710(SCStr *param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_106fd740(int *param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106fd800(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106fdc50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionConfirmationPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionConfirmationPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionConfirmationPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionConfirmationPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106fdda0; body size 57 bytes.
#line 1 "ENTRY_106fdda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106fdda0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106fdef0; body size 57 bytes.
#line 1 "ENTRY_106fdef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106fdef0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionOutroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionOutroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionOutroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountDeletionOutroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 106fe040; body size 77 bytes.
#line 1 "ENTRY_106fe040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106fe040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_106fe1a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_106da030((int)(param_2));
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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountDeletionWizard__SCAccountDeletionWizard_);
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


// Reference entry 106fe6f0; body size 11 bytes.
#line 1 "ENTRY_106fe6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe6f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106fe700; body size 11 bytes.
#line 1 "ENTRY_106fe700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe700(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106fe710; body size 11 bytes.
#line 1 "ENTRY_106fe710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe710(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106fe720; body size 11 bytes.
#line 1 "ENTRY_106fe720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 106fe800; body size 38 bytes.
#line 1 "ENTRY_106fe800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_106fe800(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountDeletionWizard__SCAccountDeletionWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountDeletionWizard__SCAccountDeletionWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountDeletionWizard__SCAccountDeletionWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  ((_Tree<> *)(0))->m_op_dtor();
  ((_Tree<> *)(0))->m_op_dtor();
  thunk_FUN_106da540();
  param_1[0x2d] = (undefined4)((uint)&ghidra_vftable_SCNewWizParams);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_106da820();
  thunk_FUN_105a0660();
  thunk_FUN_106d91c0((int)(param_1 + 0x2b),(int)(*(undefined4 *)(param_1[0x2b] + 4)));
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
  return (bool)(*param_1 != (int)((0)));
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
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10702af0; body size 13 bytes.
#line 1 "ENTRY_10702af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10702af0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xe8) = (undefined4)(param_2);
  return;
}


// Reference entry 10702b00; body size 78 bytes.
#line 1 "ENTRY_10702b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10702b00(int *param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10702bb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10702f10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationEmailVerifiedPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationEmailVerifiedPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationEmailVerifiedPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountEmailVerificationEmailVerifiedPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10703060; body size 146 bytes.
#line 1 "ENTRY_10703060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10703060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10703220(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountEmailVerificationWizard__SCAccountEmailVerificationWizard_);
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


// Reference entry 107038a0; body size 11 bytes.
#line 1 "ENTRY_107038a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107038a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 107038b0; body size 11 bytes.
#line 1 "ENTRY_107038b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107038b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 107038c0; body size 11 bytes.
#line 1 "ENTRY_107038c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107038c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10703930; body size 38 bytes.
#line 1 "ENTRY_10703930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10703930(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountEmailVerificationWizard__SCAccountEmailVerificationWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountEmailVerificationWizard__SCAccountEmailVerificationWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10704b80(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xec));
  piVar1 = (int *)(*(int **)(param_1 + 0xf0), 0);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10706810; body size 23 bytes.
#line 1 "ENTRY_10706810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10706810(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf8));
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
  
  iVar1 = (int)(thunk_FUN_106dbf00((int)(DAT_121a287c)), 0);
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10708c60(int *param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10708e00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107095f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107099d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1070a0f0; body size 11 bytes.
#line 1 "ENTRY_1070a0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a0f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1070a100; body size 11 bytes.
#line 1 "ENTRY_1070a100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1070a110; body size 11 bytes.
#line 1 "ENTRY_1070a110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a110(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



#line 1 "ENTRY_1070a3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1070a3c0(undefined4 *param_1)

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

void __fastcall FUN_1070a3f0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a28d4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountLoginWizard__SCAccountLoginWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1070dc00(SCStr *param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1070dc40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf8));
  return (SCStr *)(param_2);
}


// Reference entry 1070dc60; body size 23 bytes.
#line 1 "ENTRY_1070dc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1070dc60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf4));
  return (SCStr *)(param_2);
}


// Reference entry 1070dc80; body size 23 bytes.
#line 1 "ENTRY_1070dc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1070dc80(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xe8));
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
  
  iVar1 = (int)(thunk_FUN_106dbf00((int)(DAT_121a28c8)), 0);
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
  if ((int *)(piVar1) != (int *)(0x0)) {
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
  if ((int *)(piVar1) != (int *)(0x0)) {
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
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10711ce0; body size 13 bytes.
#line 1 "ENTRY_10711ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10711ce0(undefined1 param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107123c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10712720(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107128e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10712a60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountResetPasswordWizard__SCAccountResetPasswordWizard_);
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


// Reference entry 10712f90; body size 11 bytes.
#line 1 "ENTRY_10712f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10712f90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10712fa0; body size 11 bytes.
#line 1 "ENTRY_10712fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10712fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10712fb0; body size 11 bytes.
#line 1 "ENTRY_10712fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10712fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountResetPasswordWizard__SCAccountResetPasswordWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  iVar1 = (int)(thunk_FUN_106dbf00((int)(DAT_121a28f0)), 0);
  return (bool)(2 < iVar1);
}


// Reference entry 10717310; body size 19 bytes.
#line 1 "ENTRY_10717310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10717310(int *param_1)

{
  int iVar1;
  
  ((SCVtbl_2_0*)(param_1))->v();
  iVar1 = (int)(thunk_FUN_105ad8f0(), 0);
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10718190(int *param_2)
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


// Reference entry 10718210; body size 26 bytes.
#line 1 "ENTRY_10718210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10718210(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107183e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10718900(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsCountryCodePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsCountryCodePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsCountryCodePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsCountryCodePage);
  return (undefined4 *)(param_1);
}


// Reference entry 10718a50; body size 84 bytes.
#line 1 "ENTRY_10718a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10718a50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10718bc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10718d40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsNetworkErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsNetworkErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsNetworkErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAccountUserDetailsNetworkErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10718e90; body size 57 bytes.
#line 1 "ENTRY_10718e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10718e90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountUserDetailsWizard__SCAccountUserDetailsWizard_);
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


// Reference entry 10719630; body size 11 bytes.
#line 1 "ENTRY_10719630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10719640; body size 11 bytes.
#line 1 "ENTRY_10719640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10719650; body size 11 bytes.
#line 1 "ENTRY_10719650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10719660; body size 11 bytes.
#line 1 "ENTRY_10719660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10719670; body size 11 bytes.
#line 1 "ENTRY_10719670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719670(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10719750; body size 38 bytes.
#line 1 "ENTRY_10719750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10719750(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountUserDetailsWizard__SCAccountUserDetailsWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountUserDetailsWizard__SCAccountUserDetailsWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAccountUserDetailsWizard__SCAccountUserDetailsWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1071e340(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf0));
  return (SCStr *)(param_2);
}


// Reference entry 1071e610; body size 23 bytes.
#line 1 "ENTRY_1071e610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1071e610(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf8));
  return (SCStr *)(param_2);
}


// Reference entry 1071e630; body size 23 bytes.
#line 1 "ENTRY_1071e630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1071e630(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xfc));
  return (SCStr *)(param_2);
}


// Reference entry 1071ea60; body size 23 bytes.
#line 1 "ENTRY_1071ea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1071ea60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf4));
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
  
  iVar1 = (int)(thunk_FUN_106dbf00((int)(DAT_121a2954)), 0);
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
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10722fc0; body size 39 bytes.
#line 1 "ENTRY_10722fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10722fc0(SCStr *param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10722ff0(SCStr *param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10723020(undefined1 *param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10723080(undefined4 *param_2,undefined1 *param_3)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10723320(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10723340; body size 11 bytes.
#line 1 "ENTRY_10723340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10723340(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10723350; body size 11 bytes.
#line 1 "ENTRY_10723350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10723350(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10723360; body size 22 bytes.
#line 1 "ENTRY_10723360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10723360(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10723420; body size 11 bytes.
#line 1 "ENTRY_10723420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10723420(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 107236e0; body size 19 bytes.
#line 1 "ENTRY_107236e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107236e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10723700; body size 22 bytes.
#line 1 "ENTRY_10723700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10723700(undefined4 *param_2,undefined1 *param_3)
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
  
  pvVar1 = (void *)(operator_new(0x18), 0);
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
  
  pvVar1 = (void *)(operator_new(0x18), 0);
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

uint __stdcall FUN_10724280(int param_1,uint *param_2){
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = (uint)(*param_2), *(int *)(param_1 + 0x10) <= (int)(in_EAX))) {
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10724e30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10726c00; body size 18 bytes.
#line 1 "ENTRY_10726c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10726c00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10726d20; body size 11 bytes.
#line 1 "ENTRY_10726d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10726d20(undefined4 param_2, unsigned int recovered_unused_stack_0)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10726d90(undefined4 param_2,undefined4 param_3)
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
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10726f60; body size 13 bytes.
#line 1 "ENTRY_10726f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10726f60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 107275a0; body size 57 bytes.
#line 1 "ENTRY_107275a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107275a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAnotherProductSelectionPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAnotherProductSelectionPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAnotherProductSelectionPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAnotherProductSelectionPage);
  return (undefined4 *)(param_1);
}


// Reference entry 107276f0; body size 57 bytes.
#line 1 "ENTRY_107276f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107276f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAssetDownloadErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAssetDownloadErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAssetDownloadErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceAssetDownloadErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10727840; body size 57 bytes.
#line 1 "ENTRY_10727840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10727840(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceCountryCodeFetchErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceCountryCodeFetchErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceCountryCodeFetchErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceCountryCodeFetchErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10727990; body size 57 bytes.
#line 1 "ENTRY_10727990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10727990(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceDeviceIncompatiblePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceDeviceIncompatiblePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceDeviceIncompatiblePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceDeviceIncompatiblePage);
  return (undefined4 *)(param_1);
}


// Reference entry 10727f00; body size 57 bytes.
#line 1 "ENTRY_10727f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10727f00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNoCompatibleProductPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNoCompatibleProductPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNoCompatibleProductPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNoCompatibleProductPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10728050; body size 57 bytes.
#line 1 "ENTRY_10728050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10728050(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNotificationIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNotificationIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNotificationIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceNotificationIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 107281a0; body size 57 bytes.
#line 1 "ENTRY_107281a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107281a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOfflineProductsErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOfflineProductsErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOfflineProductsErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOfflineProductsErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 107282f0; body size 64 bytes.
#line 1 "ENTRY_107282f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107282f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOutroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOutroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOutroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceOutroPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10728440; body size 57 bytes.
#line 1 "ENTRY_10728440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10728440(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceProductConfirmationPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceProductConfirmationPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceProductConfirmationPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceProductConfirmationPage);
  return (undefined4 *)(param_1);
}


// Reference entry 107287a0; body size 84 bytes.
#line 1 "ENTRY_107287a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107287a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107291a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceWaitingPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceWaitingPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceWaitingPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAddVoiceServiceWaitingPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1072a750; body size 38 bytes.
#line 1 "ENTRY_1072a750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1072a750(undefined4 *param_2)
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


// Reference entry 1072a780; body size 38 bytes.
#line 1 "ENTRY_1072a780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1072a780(undefined4 *param_2)
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


// Reference entry 1072a7b0; body size 38 bytes.
#line 1 "ENTRY_1072a7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1072a7b0(undefined4 *param_2)
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


// Reference entry 1072aa20; body size 11 bytes.
#line 1 "ENTRY_1072aa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072aa30; body size 11 bytes.
#line 1 "ENTRY_1072aa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072aa40; body size 11 bytes.
#line 1 "ENTRY_1072aa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072aa50; body size 11 bytes.
#line 1 "ENTRY_1072aa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072aa60; body size 11 bytes.
#line 1 "ENTRY_1072aa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072aa70; body size 11 bytes.
#line 1 "ENTRY_1072aa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072aa80; body size 11 bytes.
#line 1 "ENTRY_1072aa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072aa90; body size 11 bytes.
#line 1 "ENTRY_1072aa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aa90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072aaa0; body size 11 bytes.
#line 1 "ENTRY_1072aaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aaa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072aab0; body size 11 bytes.
#line 1 "ENTRY_1072aab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aab0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072aac0; body size 11 bytes.
#line 1 "ENTRY_1072aac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072aad0; body size 11 bytes.
#line 1 "ENTRY_1072aad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072aae0; body size 11 bytes.
#line 1 "ENTRY_1072aae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aae0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072aaf0; body size 11 bytes.
#line 1 "ENTRY_1072aaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072aaf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072ab00; body size 11 bytes.
#line 1 "ENTRY_1072ab00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072ab10; body size 11 bytes.
#line 1 "ENTRY_1072ab10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072ab20; body size 11 bytes.
#line 1 "ENTRY_1072ab20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072ab30; body size 11 bytes.
#line 1 "ENTRY_1072ab30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072ab40; body size 11 bytes.
#line 1 "ENTRY_1072ab40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072ab50; body size 11 bytes.
#line 1 "ENTRY_1072ab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1072ab60; body size 11 bytes.
#line 1 "ENTRY_1072ab60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ab60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072ac80(undefined4 *param_1)

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

void __fastcall FUN_1072acb0(undefined4 *param_1)

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

void __fastcall FUN_1072ace0(undefined4 *param_1)

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

void __fastcall FUN_1072ad10(undefined4 *param_1)

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

void __fastcall FUN_1072ad40(undefined4 *param_1)

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

void __fastcall FUN_1072ad70(undefined4 *param_1)

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

void __fastcall FUN_1072ada0(undefined4 *param_1)

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

void __fastcall FUN_1072add0(undefined4 *param_1)

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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b080(undefined4 *param_1)

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



void __fastcall FUN_1072b0b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29ec = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b0d0; body size 38 bytes.
#line 1 "ENTRY_1072b0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b0d0(undefined4 *param_1)

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



void __fastcall FUN_1072b100(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29bc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b120; body size 38 bytes.
#line 1 "ENTRY_1072b120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072b120(undefined4 *param_1)

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



void __fastcall FUN_1072b150(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29e0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAddVoiceServiceWizard__SCAddVoiceServiceWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAddVoiceServiceWizard__SCAddVoiceServiceWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAddVoiceServiceWizard__SCAddVoiceServiceWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAddVoiceServiceWizard__SCAddVoiceServiceWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072b2b0; body size 38 bytes.
#line 1 "ENTRY_1072b2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */




void __fastcall FUN_1072b2e0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29c0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_1072b330(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29e4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAddVoiceServiceWizard__SCAddVoiceServiceWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAddVoiceServiceWizard__SCAddVoiceServiceWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAddVoiceServiceWizard__SCAddVoiceServiceWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAddVoiceServiceWizard__SCAddVoiceServiceWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAddVoiceServiceWizard__SCAddVoiceServiceWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_1072b510(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29dc = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}



void __fastcall FUN_1072b6b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29c4 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


void __fastcall FUN_1072b700(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29e8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


template<class... A> int FUN_1072b750(A...)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a29d8 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAddVoiceServiceWizard__SCAddVoiceServiceWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


// Reference entry 1072bd10; body size 65 bytes.
#line 1 "ENTRY_1072bd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1072bd10(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if ((int)(iVar2) != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      ((SCVtbl_2_0*)(piVar1))->v();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      ((SCVtbl_1_0*)(piVar1))->v();
    }
  }
  return (int *)(param_1);
}


// Reference entry 1072bd70; body size 65 bytes.
#line 1 "ENTRY_1072bd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1072bd70(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if ((int)(iVar2) != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      ((SCVtbl_2_0*)(piVar1))->v();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      ((SCVtbl_1_0*)(piVar1))->v();
    }
  }
  return (int *)(param_1);
}


// Reference entry 1072beb0; body size 21 bytes.
#line 1 "ENTRY_1072beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_1072beb0(int param_2)
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
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 1072de30; body size 31 bytes.
#line 1 "ENTRY_1072de30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1072de30(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
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
  
  pvVar1 = (void *)(operator_new(0x18), 0);
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1072e550(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8), 0);
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
  piVar2 = (int *)(*(int **)(param_2 + 4), 0);
  if ((int)(param_2) == *piVar2) {
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
  while (iVar3 = (int)(iVar2), cVar1 == '\0') {
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
  while (piVar3 = (int *)(piVar2), cVar1 == '\0') {
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1072e650(int *param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10743050(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x100));
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
  return (bool)(*param_1 != (int)((0)));
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
  if ((int *)(piVar1) != (int *)(0x0)) {
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
  if ((int *)(piVar1) != (int *)(0x0)) {
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1074b0f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1074b230; body size 57 bytes.
#line 1 "ENTRY_1074b230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1074b230(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAmazonAlexaPreviewWizard__SCAmazonAlexaPreviewWizard_);
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


// Reference entry 1074b620; body size 11 bytes.
#line 1 "ENTRY_1074b620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074b620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1074b630; body size 38 bytes.
#line 1 "ENTRY_1074b630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074b630(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAmazonAlexaPreviewWizard__SCAmazonAlexaPreviewWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1074ca30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1074cb70; body size 57 bytes.
#line 1 "ENTRY_1074cb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1074cb70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAmazonAlexaSetupWizard__SCAmazonAlexaSetupWizard_);
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


// Reference entry 1074cf60; body size 11 bytes.
#line 1 "ENTRY_1074cf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074cf60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1074cf70; body size 38 bytes.
#line 1 "ENTRY_1074cf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1074cf70(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAmazonAlexaSetupWizard__SCAmazonAlexaSetupWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1074ed40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1074fa60; body size 57 bytes.
#line 1 "ENTRY_1074fa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1074fa60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1074fbb0; body size 67 bytes.
#line 1 "ENTRY_1074fbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1074fbb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSelectPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSelectPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSelectPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSelectPage);
  param_1[0x38] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1074fd10; body size 57 bytes.
#line 1 "ENTRY_1074fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1074fd10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSetupHomeIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSetupHomeIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSetupHomeIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSetupHomeIntroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1074fe60; body size 57 bytes.
#line 1 "ENTRY_1074fe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1074fe60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSpeakerPlacementPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSpeakerPlacementPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSpeakerPlacementPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSpeakerPlacementPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1074ffb0; body size 57 bytes.
#line 1 "ENTRY_1074ffb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1074ffb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSuccessPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSuccessPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSuccessPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAmpConfigurationSuccessPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10750100; body size 87 bytes.
#line 1 "ENTRY_10750100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10750100(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_106da030((int)(param_2));
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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAmpConfigurationWizard__SCAmpConfigurationWizard_);
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


// Reference entry 10750840; body size 11 bytes.
#line 1 "ENTRY_10750840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10750850; body size 11 bytes.
#line 1 "ENTRY_10750850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10750860; body size 11 bytes.
#line 1 "ENTRY_10750860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750860(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10750870; body size 11 bytes.
#line 1 "ENTRY_10750870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10750880; body size 11 bytes.
#line 1 "ENTRY_10750880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750880(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10750890; body size 11 bytes.
#line 1 "ENTRY_10750890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10750890(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 107508a0; body size 11 bytes.
#line 1 "ENTRY_107508a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107508a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

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
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  FUN_10ebc110();
  return;
}


void __fastcall FUN_107508e0(undefined4 *param_1)

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


void __fastcall FUN_10750910(undefined4 *param_1)

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


void __fastcall FUN_10750940(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b20 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2b1c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAmpConfigurationWizard__SCAmpConfigurationWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAmpConfigurationWizard__SCAmpConfigurationWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAmpConfigurationWizard__SCAmpConfigurationWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAmpConfigurationWizard__SCAmpConfigurationWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_107581c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xf0) = (undefined4)(param_2);
  return;
}


// Reference entry 107581d0; body size 13 bytes.
#line 1 "ENTRY_107581d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_107581d0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xf4) = (undefined1)(param_2);
  return;
}


// Reference entry 10758260; body size 78 bytes.
#line 1 "ENTRY_10758260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10758260(int *param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10758350(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10758a30; body size 67 bytes.
#line 1 "ENTRY_10758a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10758a30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckBranchSelectPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckBranchSelectPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckBranchSelectPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckBranchSelectPage);
  param_1[0x38] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10758b90; body size 57 bytes.
#line 1 "ENTRY_10758b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10758b90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckCommunicationErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckCommunicationErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckCommunicationErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckCommunicationErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10758ce0; body size 57 bytes.
#line 1 "ENTRY_10758ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10758ce0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckErrorPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckErrorPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckErrorPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckErrorPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10758e30; body size 94 bytes.
#line 1 "ENTRY_10758e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10758e30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10758fb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckNotLivePage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckNotLivePage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckNotLivePage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckNotLivePage);
  return (undefined4 *)(param_1);
}


// Reference entry 10759100; body size 57 bytes.
#line 1 "ENTRY_10759100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10759100(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckOutroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckOutroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckOutroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAppVersionCheckOutroPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10759250; body size 124 bytes.
#line 1 "ENTRY_10759250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10759250(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAppVersionCheckWizard__SCAppVersionCheckWizard_);
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


// Reference entry 10759bf0; body size 11 bytes.
#line 1 "ENTRY_10759bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759bf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10759c00; body size 11 bytes.
#line 1 "ENTRY_10759c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759c00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10759c10; body size 11 bytes.
#line 1 "ENTRY_10759c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759c10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10759c20; body size 11 bytes.
#line 1 "ENTRY_10759c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759c20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10759c30; body size 11 bytes.
#line 1 "ENTRY_10759c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759c30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10759c40; body size 11 bytes.
#line 1 "ENTRY_10759c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759c40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10759c50; body size 11 bytes.
#line 1 "ENTRY_10759c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10759c50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAppVersionCheckWizard__SCAppVersionCheckWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAppVersionCheckWizard__SCAppVersionCheckWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAppVersionCheckWizard__SCAppVersionCheckWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAppVersionCheckWizard__SCAppVersionCheckWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10762610(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x100) = (undefined1)(param_2);
  return;
}


// Reference entry 10762620; body size 13 bytes.
#line 1 "ENTRY_10762620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10762620(undefined4 param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107626e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10762a20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10762b80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCApConnectDeniedPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCApConnectDeniedPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCApConnectDeniedPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCApConnectDeniedPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10762cd0; body size 57 bytes.
#line 1 "ENTRY_10762cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10762cd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCApConnectWizard__SCApConnectWizard_);
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


// Reference entry 107632d0; body size 11 bytes.
#line 1 "ENTRY_107632d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107632d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 107632e0; body size 11 bytes.
#line 1 "ENTRY_107632e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107632e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 107632f0; body size 11 bytes.
#line 1 "ENTRY_107632f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_107632f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCApConnectWizard__SCApConnectWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCApConnectWizard__SCApConnectWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  return (bool)(*param_1 != (int)((0)));
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
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10767680; body size 13 bytes.
#line 1 "ENTRY_10767680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10767680(undefined1 param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10767870(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10767aa0; body size 57 bytes.
#line 1 "ENTRY_10767aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10767aa0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCApInstructionsButtonPressPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCApInstructionsButtonPressPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCApInstructionsButtonPressPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCApInstructionsButtonPressPage);
  return (undefined4 *)(param_1);
}


// Reference entry 10767bf0; body size 57 bytes.
#line 1 "ENTRY_10767bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10767bf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCApInstructionsWizard__SCApInstructionsWizard_);
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


// Reference entry 10768110; body size 11 bytes.
#line 1 "ENTRY_10768110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10768110(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10768120; body size 11 bytes.
#line 1 "ENTRY_10768120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10768120(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10768130; body size 38 bytes.
#line 1 "ENTRY_10768130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10768130(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCApInstructionsWizard__SCApInstructionsWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCApInstructionsWizard__SCApInstructionsWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1076c000(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1076c610; body size 74 bytes.
#line 1 "ENTRY_1076c610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1076c610(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1076c770(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayEnabledPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayEnabledPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayEnabledPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayEnabledPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1076c8c0; body size 57 bytes.
#line 1 "ENTRY_1076c8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1076c8c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayFailedPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayFailedPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayFailedPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAutoTrueplayFailedPage);
  return (undefined4 *)(param_1);
}


// Reference entry 1076ca10; body size 57 bytes.
#line 1 "ENTRY_1076ca10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1076ca10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAutoTrueplayWizard__SCAutoTrueplayWizard_);
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


// Reference entry 1076d360; body size 11 bytes.
#line 1 "ENTRY_1076d360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d360(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1076d370; body size 11 bytes.
#line 1 "ENTRY_1076d370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1076d380; body size 11 bytes.
#line 1 "ENTRY_1076d380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1076d390; body size 11 bytes.
#line 1 "ENTRY_1076d390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1076d3a0; body size 11 bytes.
#line 1 "ENTRY_1076d3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d3a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 1076d3b0; body size 38 bytes.
#line 1 "ENTRY_1076d3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1076d3b0(undefined4 *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2c90 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAutoTrueplayWizard__SCAutoTrueplayWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAutoTrueplayWizard__SCAutoTrueplayWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAutoTrueplayWizard__SCAutoTrueplayWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  DAT_121a2c94 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10772ea0(undefined4 param_2)
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10772f80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_107733d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10773540(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCAuthPlusAuthenticationIntroPage);
  *(undefined1*)(param_1 + 0x38) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10773690; body size 84 bytes.
#line 1 "ENTRY_10773690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10773690(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10773800(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10eb64f0((int)(param_2));
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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAuthPlusAuthenticationWizard__SCAuthPlusAuthenticationWizard_);
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


// Reference entry 10773ec0; body size 11 bytes.
#line 1 "ENTRY_10773ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10773ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10773ed0; body size 11 bytes.
#line 1 "ENTRY_10773ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10773ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10773ee0; body size 11 bytes.
#line 1 "ENTRY_10773ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10773ee0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10773ef0; body size 11 bytes.
#line 1 "ENTRY_10773ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10773ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

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
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor_SCAuthPlusAuthenticationWizard__SCAuthPlusAuthenticationWizard_);
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = (undefined4)(0);

  return;

 } catch (...) { }
}


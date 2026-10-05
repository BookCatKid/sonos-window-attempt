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
struct ActionScriptTrace { char _pad; ActionScriptTrace(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct EnqueuedTransportURIMetaData { char _pad; EnqueuedTransportURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Hi { char _pad; Hi(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct InstanceID { char _pad; InstanceID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct MediaServer { char _pad; MediaServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Op { char _pad; Op(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct PostMessageA { char _pad; PostMessageA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct RDMValue { char _pad; RDMValue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct SetEvent { char _pad; SetEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); };
typedef void *H;
typedef void *HWND;
typedef void *R;
typedef void *URI;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; bool __thiscall m_FUN_110a1280(uint param_2); template<class... A> int m_FUN_110a1280(A...); undefined4 __thiscall m_FUN_110a3080(undefined4 param_2); template<class... A> int m_FUN_110a3080(A...); void __thiscall m_FUN_110a30b0(undefined4 param_2); template<class... A> int m_FUN_110a30b0(A...); void __thiscall m_FUN_110a30d0(char param_2); template<class... A> int m_FUN_110a30d0(A...); void __thiscall m_FUN_110a3240(char param_2); template<class... A> int m_FUN_110a3240(A...); void __thiscall m_FUN_110a3e60(char param_2); template<class... A> int m_FUN_110a3e60(A...); bool __thiscall m_FUN_110a5340(uint param_2); template<class... A> int m_FUN_110a5340(A...); int __thiscall m_FUN_110a6770(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110a6770(A...); int __thiscall m_FUN_110a67b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110a67b0(A...); undefined4 * __thiscall m_FUN_110aaa50(byte param_2); template<class... A> int m_FUN_110aaa50(A...); undefined4 __thiscall m_FUN_110aae10(byte param_2); template<class... A> int m_FUN_110aae10(A...); void __thiscall m_FUN_110ac250(undefined4 param_2); template<class... A> int m_FUN_110ac250(A...); void __thiscall m_FUN_110aea50(undefined4 param_2); template<class... A> int m_FUN_110aea50(A...); void __thiscall m_FUN_110b4850(int param_2); template<class... A> int m_FUN_110b4850(A...); undefined1 * __thiscall m_FUN_110b4ef0(uint param_2); template<class... A> int m_FUN_110b4ef0(A...); void __thiscall m_FUN_110b5240(int *param_2); template<class... A> int m_FUN_110b5240(A...); undefined4 * __thiscall m_FUN_110b5610(undefined4 param_2,int *param_3); template<class... A> int m_FUN_110b5610(A...); undefined4 * __thiscall m_FUN_110b5660(int param_2); template<class... A> int m_FUN_110b5660(A...); undefined4 * __thiscall m_FUN_110b5690(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_110b5690(A...); int __thiscall m_FUN_110b58d0(int param_2); template<class... A> int m_FUN_110b58d0(A...); undefined4 * __thiscall m_FUN_110b5900(byte param_2); template<class... A> int m_FUN_110b5900(A...); undefined4 * __thiscall m_FUN_110b5950(byte param_2); template<class... A> int m_FUN_110b5950(A...); void __thiscall m_FUN_110b60e0(void); template<class... A> int m_FUN_110b60e0(A...); undefined4 * __thiscall m_FUN_110b6d60(byte param_2); template<class... A> int m_FUN_110b6d60(A...); undefined4 * __thiscall m_FUN_110b6db0(byte param_2); template<class... A> int m_FUN_110b6db0(A...); undefined4 * __thiscall m_FUN_110b6e00(byte param_2); template<class... A> int m_FUN_110b6e00(A...); undefined4 * __thiscall m_FUN_110b6e50(byte param_2); template<class... A> int m_FUN_110b6e50(A...); undefined4 * __thiscall m_FUN_110b6ea0(byte param_2); template<class... A> int m_FUN_110b6ea0(A...); undefined4 * __thiscall m_FUN_110b6ef0(byte param_2); template<class... A> int m_FUN_110b6ef0(A...); undefined4 * __thiscall m_FUN_110b6f40(byte param_2); template<class... A> int m_FUN_110b6f40(A...); undefined4 * __thiscall m_FUN_110b6f90(byte param_2); template<class... A> int m_FUN_110b6f90(A...); undefined4 * __thiscall m_FUN_110b6fe0(byte param_2); template<class... A> int m_FUN_110b6fe0(A...); undefined4 * __thiscall m_FUN_110b7030(byte param_2); template<class... A> int m_FUN_110b7030(A...); undefined4 * __thiscall m_FUN_110b7080(byte param_2); template<class... A> int m_FUN_110b7080(A...); undefined4 * __thiscall m_FUN_110b70d0(byte param_2); template<class... A> int m_FUN_110b70d0(A...); undefined4 * __thiscall m_FUN_110b7120(byte param_2); template<class... A> int m_FUN_110b7120(A...); void __thiscall m_FUN_110bf210(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_110bf210(A...); undefined4 __thiscall m_FUN_110bf3e0(undefined4 param_2); template<class... A> int m_FUN_110bf3e0(A...); undefined4 __thiscall m_FUN_110bf600(undefined4 param_2); template<class... A> int m_FUN_110bf600(A...); undefined4 __thiscall m_FUN_110bf630(undefined4 param_2); template<class... A> int m_FUN_110bf630(A...); undefined4 __thiscall m_FUN_110bf660(undefined4 param_2); template<class... A> int m_FUN_110bf660(A...); undefined4 * __thiscall m_FUN_110c0cc0(byte param_2); template<class... A> int m_FUN_110c0cc0(A...); undefined4 * __thiscall m_FUN_110c0cf0(byte param_2); template<class... A> int m_FUN_110c0cf0(A...); undefined4 * __thiscall m_FUN_110c0d20(byte param_2); template<class... A> int m_FUN_110c0d20(A...); undefined4 __thiscall m_FUN_110c0df0(byte param_2); template<class... A> int m_FUN_110c0df0(A...); undefined4 * __thiscall m_FUN_110c0eb0(byte param_2); template<class... A> int m_FUN_110c0eb0(A...); undefined4 * __thiscall m_FUN_110c0ef0(byte param_2); template<class... A> int m_FUN_110c0ef0(A...); undefined4 * __thiscall m_FUN_110c0f40(byte param_2); template<class... A> int m_FUN_110c0f40(A...); undefined4 * __thiscall m_FUN_110c0f90(byte param_2); template<class... A> int m_FUN_110c0f90(A...); undefined4 * __thiscall m_FUN_110c1160(byte param_2); template<class... A> int m_FUN_110c1160(A...); void __thiscall m_FUN_110c1190(undefined4 param_2); template<class... A> int m_FUN_110c1190(A...); void __thiscall m_FUN_110c1920(int param_2); template<class... A> int m_FUN_110c1920(A...); void __thiscall m_FUN_110c1970(int param_2); template<class... A> int m_FUN_110c1970(A...); void __thiscall m_FUN_110c19c0(int param_2); template<class... A> int m_FUN_110c19c0(A...); void __thiscall m_FUN_110c1a10(int param_2); template<class... A> int m_FUN_110c1a10(A...); int __thiscall m_FUN_110c2570(int param_2); template<class... A> int m_FUN_110c2570(A...); void __thiscall m_FUN_110c4940(undefined4 param_2); template<class... A> int m_FUN_110c4940(A...); void __thiscall m_FUN_110c5640(undefined4 param_2); template<class... A> int m_FUN_110c5640(A...); int __thiscall m_FUN_110c5770(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110c5770(A...); int __thiscall m_FUN_110c57b0(undefined4 param_2); template<class... A> int m_FUN_110c57b0(A...); undefined4 __thiscall m_FUN_110c8ff0(byte param_2); template<class... A> int m_FUN_110c8ff0(A...); undefined4 * __thiscall m_FUN_110c9020(byte param_2); template<class... A> int m_FUN_110c9020(A...); undefined4 __thiscall m_FUN_110c9050(byte param_2); template<class... A> int m_FUN_110c9050(A...); undefined4 __thiscall m_FUN_110c9090(byte param_2); template<class... A> int m_FUN_110c9090(A...); void __thiscall m_FUN_110c9cb0(int param_2); template<class... A> int m_FUN_110c9cb0(A...); void __thiscall m_FUN_110c9cf0(int param_2); template<class... A> int m_FUN_110c9cf0(A...); void __thiscall m_FUN_110c9d30(int param_2); template<class... A> int m_FUN_110c9d30(A...); void __thiscall m_FUN_110c9d70(int param_2); template<class... A> int m_FUN_110c9d70(A...); void __thiscall m_FUN_110c9db0(int param_2); template<class... A> int m_FUN_110c9db0(A...); void __thiscall m_FUN_110c9df0(int param_2); template<class... A> int m_FUN_110c9df0(A...); void __thiscall m_FUN_110c9e30(int param_2); template<class... A> int m_FUN_110c9e30(A...); void __thiscall m_FUN_110c9e70(int param_2); template<class... A> int m_FUN_110c9e70(A...); void __thiscall m_FUN_110c9eb0(int param_2); template<class... A> int m_FUN_110c9eb0(A...); void __thiscall m_FUN_110c9ef0(int param_2); template<class... A> int m_FUN_110c9ef0(A...); void __thiscall m_FUN_110c9f30(int param_2); template<class... A> int m_FUN_110c9f30(A...); void __thiscall m_FUN_110c9f70(int param_2); template<class... A> int m_FUN_110c9f70(A...); void __thiscall m_FUN_110c9fb0(int param_2); template<class... A> int m_FUN_110c9fb0(A...); void __thiscall m_FUN_110c9ff0(int param_2); template<class... A> int m_FUN_110c9ff0(A...); void __thiscall m_FUN_110cad70(undefined4 param_2); template<class... A> int m_FUN_110cad70(A...); void __thiscall m_FUN_110d2ec0(undefined4 param_2); template<class... A> int m_FUN_110d2ec0(A...); void __thiscall m_FUN_110d3030(undefined4 param_2); template<class... A> int m_FUN_110d3030(A...); void __thiscall m_FUN_110d3070(undefined4 param_2); template<class... A> int m_FUN_110d3070(A...); void __thiscall m_FUN_110d7950(undefined4 param_2); template<class... A> int m_FUN_110d7950(A...); void __thiscall m_FUN_110d7a50(undefined4 param_2); template<class... A> int m_FUN_110d7a50(A...); void __thiscall m_FUN_110d7ad0(undefined4 param_2); template<class... A> int m_FUN_110d7ad0(A...); void __thiscall m_FUN_110d8470(undefined4 param_2); template<class... A> int m_FUN_110d8470(A...); undefined4 * __thiscall m_FUN_110d9bc0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110d9bc0(A...); int * __thiscall m_FUN_110db240(int *param_2); template<class... A> int m_FUN_110db240(A...); undefined4 __thiscall m_FUN_110dcb50(byte param_2); template<class... A> int m_FUN_110dcb50(A...); undefined4 * __thiscall m_FUN_110dcb80(byte param_2); template<class... A> int m_FUN_110dcb80(A...); undefined4 * __thiscall m_FUN_110dcbb0(byte param_2); template<class... A> int m_FUN_110dcbb0(A...); undefined4 * __thiscall m_FUN_110dcbe0(byte param_2); template<class... A> int m_FUN_110dcbe0(A...); undefined4 * __thiscall m_FUN_110dcd90(byte param_2); template<class... A> int m_FUN_110dcd90(A...); undefined4 * __thiscall m_FUN_110dcdd0(byte param_2); template<class... A> int m_FUN_110dcdd0(A...); undefined4 * __thiscall m_FUN_110dce20(byte param_2); template<class... A> int m_FUN_110dce20(A...); undefined4 * __thiscall m_FUN_110dce70(byte param_2); template<class... A> int m_FUN_110dce70(A...); int * __thiscall m_FUN_110df060(int *param_2); template<class... A> int m_FUN_110df060(A...); undefined4 __thiscall m_FUN_110e09c0(undefined4 param_2,short *param_3); template<class... A> int m_FUN_110e09c0(A...); void __thiscall m_FUN_110e20d0(undefined4 *param_2); template<class... A> int m_FUN_110e20d0(A...); void __thiscall m_FUN_110e3630(undefined4 param_2); template<class... A> int m_FUN_110e3630(A...); undefined4 * __thiscall m_FUN_110e43f0(byte param_2); template<class... A> int m_FUN_110e43f0(A...); undefined4 __thiscall m_FUN_110e4420(byte param_2); template<class... A> int m_FUN_110e4420(A...); undefined4 * __thiscall m_FUN_110e4450(byte param_2); template<class... A> int m_FUN_110e4450(A...); undefined4 * __thiscall m_FUN_110e9480(byte param_2); template<class... A> int m_FUN_110e9480(A...); undefined4 __thiscall m_FUN_110e94b0(byte param_2); template<class... A> int m_FUN_110e94b0(A...); undefined4 * __thiscall m_FUN_110e94e0(byte param_2); template<class... A> int m_FUN_110e94e0(A...); undefined4 * __thiscall m_FUN_110e9510(byte param_2); template<class... A> int m_FUN_110e9510(A...); void __thiscall m_FUN_110ed0b0(undefined4 param_2); template<class... A> int m_FUN_110ed0b0(A...); void __thiscall m_FUN_110ed2d0(undefined1 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_110ed2d0(A...); void __thiscall m_FUN_110ed5b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_110ed5b0(A...); void __thiscall m_FUN_110edc00(undefined4 param_2); template<class... A> int m_FUN_110edc00(A...); void __thiscall m_FUN_110ee040(undefined4 param_2); template<class... A> int m_FUN_110ee040(A...); int __thiscall m_FUN_110ee0d0(undefined4 param_2); template<class... A> int m_FUN_110ee0d0(A...); undefined4 * __thiscall m_FUN_110f0a60(byte param_2); template<class... A> int m_FUN_110f0a60(A...); void __thiscall m_FUN_110f1790(int param_2); template<class... A> int m_FUN_110f1790(A...); void __thiscall m_FUN_110f2ac0(undefined4 param_2); template<class... A> int m_FUN_110f2ac0(A...); void __thiscall m_FUN_110f2af0(char *param_2); template<class... A> int m_FUN_110f2af0(A...); void __thiscall m_FUN_110f2b40(char *param_2); template<class... A> int m_FUN_110f2b40(A...); undefined4 * __thiscall m_FUN_110f66a0(undefined4 param_2); template<class... A> int m_FUN_110f66a0(A...); int __thiscall m_FUN_110f6ac0(int param_2); template<class... A> int m_FUN_110f6ac0(A...); undefined4 * __thiscall m_FUN_110f6b60(byte param_2); template<class... A> int m_FUN_110f6b60(A...); undefined4 * __thiscall m_FUN_110f6bb0(byte param_2); template<class... A> int m_FUN_110f6bb0(A...); undefined4 * __thiscall m_FUN_110f6be0(byte param_2); template<class... A> int m_FUN_110f6be0(A...); undefined4 * __thiscall m_FUN_110f6c10(byte param_2); template<class... A> int m_FUN_110f6c10(A...); undefined4 * __thiscall m_FUN_110f6c60(byte param_2); template<class... A> int m_FUN_110f6c60(A...); undefined4 * __thiscall m_FUN_110f6cb0(byte param_2); template<class... A> int m_FUN_110f6cb0(A...); undefined4 * __thiscall m_FUN_110f6d00(byte param_2); template<class... A> int m_FUN_110f6d00(A...); undefined4 __thiscall m_FUN_110f6d40(byte param_2); template<class... A> int m_FUN_110f6d40(A...); undefined4 __thiscall m_FUN_110f6d70(byte param_2); template<class... A> int m_FUN_110f6d70(A...); };

extern int FUN_10002a68(...);
extern int FUN_1006adb1(...);
extern int FUN_1006f9dd(...);
extern int FUN_10070892(...);
extern int FUN_1009070f(...);
extern int FUN_1009a598(...);
extern int FUN_110b5990(...);
extern int FUN_110befd0(...);
extern int FUN_1122c9e0(...);
extern __declspec(dllimport) int PostMessageA(...);
extern __declspec(dllimport) int SetEvent(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_10bfa4b0(...);
extern int thunk_FUN_10bfb550(...);
extern int thunk_FUN_11069340(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1106d6f0(...);
extern int thunk_FUN_1106f140(...);
template<class... A> int __stdcall thunk_FUN_1107e1f0(A...);
extern int thunk_FUN_1107e550(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110944c0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a0140(...);
extern int thunk_FUN_110a67f0(...);
extern int thunk_FUN_110a68c0(...);
extern int thunk_FUN_110a69d0(...);
template<class... A> int __stdcall thunk_FUN_110a6d20(A...);
template<class... A> int __stdcall thunk_FUN_110a6fa0(A...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_110aa330(...);
extern int thunk_FUN_110ab530(...);
template<class... A> int __stdcall thunk_FUN_110acc40(A...);
extern int thunk_FUN_110adba0(...);
extern int thunk_FUN_110aeaa0(...);
template<class... A> int __stdcall thunk_FUN_110aeb40(A...);
template<class... A> int __stdcall thunk_FUN_110b2410(A...);
extern int thunk_FUN_110b3000(...);
template<class... A> int __stdcall thunk_FUN_110b3620(A...);
template<class... A> int __stdcall thunk_FUN_110b4400(A...);
extern int thunk_FUN_110b87c0(...);
template<class... A> int __stdcall thunk_FUN_110bcb10(A...);
extern int thunk_FUN_110c0690(...);
extern int thunk_FUN_110c20d0(...);
template<class... A> int __stdcall thunk_FUN_110c2160(A...);
extern int thunk_FUN_110c2bc0(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_110c3210(...);
extern int thunk_FUN_110c33f0(...);
extern int thunk_FUN_110c37b0(...);
extern int thunk_FUN_110c49a0(...);
template<class... A> int __stdcall thunk_FUN_110c4ef0(A...);
extern int thunk_FUN_110c5670(...);
extern int thunk_FUN_110c5800(...);
template<class... A> int __stdcall thunk_FUN_110c59b0(A...);
extern int thunk_FUN_110c7c10(...);
extern int thunk_FUN_110c7e70(...);
template<class... A> int __stdcall thunk_FUN_110cc7f0(A...);
extern int thunk_FUN_110dc560(...);
extern int thunk_FUN_110e4170(...);
extern int thunk_FUN_110ee070(...);
extern int thunk_FUN_110ee120(...);
extern int thunk_FUN_110f3120(...);
extern int thunk_FUN_110f69f0(...);
extern int thunk_FUN_110f8530(...);
extern int thunk_FUN_111392b0(...);
extern int thunk_FUN_1113e6f0(...);
extern int thunk_FUN_1113eb00(...);
extern int thunk_FUN_1114f320(...);
extern int thunk_FUN_11167180(...);
extern int thunk_FUN_11172910(...);
template<class... A> int __stdcall thunk_FUN_1118aa30(A...);
extern int thunk_FUN_1118adc0(...);
extern int thunk_FUN_1118d230(...);
extern int thunk_FUN_111a0940(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a4f00(...);
extern int thunk_FUN_111a7630(...);
extern int thunk_FUN_111a7be0(...);
template<class... A> int __stdcall thunk_FUN_111c0af0(A...);
extern int thunk_FUN_111d3d00(...);
extern int thunk_FUN_111f3f50(...);
extern int thunk_FUN_111f4c10(...);
extern int thunk_FUN_111f77e0(...);
extern int thunk_FUN_111f7800(...);
extern int thunk_FUN_111f7860(...);
extern int thunk_FUN_111feb20(...);
extern int thunk_FUN_111feb50(...);
extern int thunk_FUN_11202570(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11245a50(...);
extern int thunk_FUN_11245bb0(...);
extern int thunk_FUN_112462e0(...);
extern int thunk_FUN_11246be0(...);
extern int thunk_FUN_112470f0(...);
extern int thunk_FUN_112471a0(...);
extern int thunk_FUN_11247e90(...);
extern int thunk_FUN_1124f350(...);
template<class... A> int __stdcall thunk_FUN_1124f3c0(A...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_1127caf0(...);
extern int thunk_FUN_1127cb00(...);
extern int thunk_FUN_1127cc80(...);
extern int thunk_FUN_112818d0(...);
extern int thunk_FUN_11281950(...);
extern int thunk_FUN_11284360(...);
extern int thunk_FUN_112a7c30(...);
extern int thunk_FUN_112a7c70(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1138fad0(...);
extern int thunk_FUN_1138fd50(...);
extern int thunk_FUN_113d3650(...);
extern int thunk_FUN_11456830(...);
extern int thunk_FUN_11456fc0(...);
extern int thunk_FUN_11457040(...);
extern int thunk_FUN_114574f0(...);
extern int thunk_FUN_11457670(...);
extern int thunk_FUN_11458220(...);
extern int thunk_FUN_114586f0(...);
extern int thunk_FUN_11458720(...);
extern int thunk_FUN_11458820(...);
extern int thunk_FUN_11458830(...);
extern int thunk_FUN_11458870(...);
extern int thunk_FUN_11458880(...);
extern int thunk_FUN_114588c0(...);
extern int thunk_FUN_114588f0(...);
extern int thunk_FUN_11458910(...);
extern int thunk_FUN_11458940(...);
extern int thunk_FUN_11458970(...);
extern int thunk_FUN_114589e0(...);
extern int thunk_FUN_114589f0(...);
extern int thunk_FUN_11458a00(...);
extern int thunk_FUN_11458a30(...);
extern int thunk_FUN_11458a40(...);
extern int thunk_FUN_11458a50(...);
extern int thunk_FUN_11458a60(...);
extern int thunk_FUN_11458a90(...);
extern int thunk_FUN_11458e90(...);
extern int thunk_FUN_11458fa0(...);
extern int thunk_FUN_114595b0(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_1186d2ee;
extern int DAT_11881128;
extern int DAT_118872c0;
extern int DAT_119c41b0;
extern int ghidra_vftable_RAesDecoder;
extern int ghidra_vftable_RAllocationChunk;
extern int ghidra_vftable_RAsyncURITranslator;
extern int ghidra_vftable_RCPBrowseOperation;
extern int ghidra_vftable_RCPBrowseOperationCB;
extern int ghidra_vftable_RCPMetadataFormatter;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_REncryptedDataDecoder;
extern int ghidra_vftable_REncryptedStringDecoder;
extern int ghidra_vftable_RFlashPlayerLastChangeCallback;
extern int ghidra_vftable_RFlashPlayerMediaServerCallback;
extern int ghidra_vftable_RFlashPlayerNotifyBodyParserCallback;
extern int ghidra_vftable_RFlashPlayerZoneGroupStateCallback;
extern int ghidra_vftable_RGetFormattedMetadataOperation;
extern int ghidra_vftable_RIdPrefixerCB;
extern int ghidra_vftable_RLookupMetadataAIOOp;
extern int ghidra_vftable_RMSDListProcessorWithLogos;
extern int ghidra_vftable_RMSQuickSkip;
extern int ghidra_vftable_RPresentationMap;
extern int ghidra_vftable_RPresentationMapCB;
extern int ghidra_vftable_RRadioTimeContentProvider;
extern int ghidra_vftable_RSonosAAURITranslator;
extern int ghidra_vftable_RUpnpAVTAddURIToQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTConfigureSleepTimerAIOOp;
extern int ghidra_vftable_RUpnpAVTEndDirectControlSessionAIOOp;
extern int ghidra_vftable_RUpnpAVTGetPositionInfoAIOOp;
extern int ghidra_vftable_RUpnpAVTGetRemainingSleepTimerDurationAIOOp;
extern int ghidra_vftable_RUpnpAVTNextAIOOp;
extern int ghidra_vftable_RUpnpAVTPreviousAIOOp;
extern int ghidra_vftable_RUpnpAVTRemoveAllTracksFromQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTRemoveTrackFromQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTRemoveTrackRangeFromQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTReorderTracksInQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTSaveQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTSeekAIOOp;
extern int ghidra_vftable_RUpnpCDBrowseAIOOp;
extern int ghidra_vftable_RUpnpMSDListAvailableServicesAIOOp;
extern int ghidra_vftable_RUpnpMSDUpdateAvailableServicesAIOOp;
extern int ghidra_vftable_RWrapperBrowseOp;
extern int ghidra_vftable_RefCountBase;
extern int ghidra_vftable_SwfObjAvt;
extern int ghidra_vftable_SwfObjDBAdapter;
extern int ghidra_vftable_SwfObjMSD;
extern int ghidra_vftable_SwfObjMediaServer;
extern int ghidra_vftable_SwfObjRadioTimeCP;
extern int ghidra_vftable_SwfObjServiceDesc;
extern int ghidra_vftable_SwfObjZPCMR;
extern int in_EAX;
extern int in_stack_00000010;
extern undefined1 LAB_1003ddb6[];
extern int *PTR_s_A_ALBUMARTIST_1211dae0;
extern int *PTR_s_ServiceListVersion_119c37dc;
extern int *PTR_s_TransportState_119c29e8;
extern int FUN_112a9d40(...);
extern int FUN_112aa340(...);
undefined4 __fastcall FUN_110a1230(int param_1);
template<class... A> int FUN_110a1230(A...);
undefined4 __fastcall FUN_110a12a0(int param_1);
template<class... A> int FUN_110a12a0(A...);
void __fastcall FUN_110a3e40(undefined4 *param_1);
template<class... A> int FUN_110a3e40(A...);
void FUN_110a4fa0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_110a4fa0(A...);
undefined4 * __fastcall FUN_110a8600(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110a8600(A...);
undefined4 * __fastcall FUN_110a8630(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110a8630(A...);
undefined4 * __fastcall FUN_110a8660(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110a8660(A...);
undefined4 * __fastcall FUN_110a8690(undefined4 *param_1);
template<class... A> int FUN_110a8690(A...);
void __fastcall FUN_110a9630(int param_1);
template<class... A> int FUN_110a9630(A...);
void __fastcall FUN_110a9650(int param_1);
template<class... A> int FUN_110a9650(A...);
void __fastcall FUN_110a9670(int param_1);
template<class... A> int FUN_110a9670(A...);
void __fastcall FUN_110a9a80(int param_1);
template<class... A> int FUN_110a9a80(A...);
void __fastcall FUN_110a9af0(int *param_1);
template<class... A> int FUN_110a9af0(A...);
void __fastcall FUN_110a9b40(undefined4 *param_1);
template<class... A> int FUN_110a9b40(A...);
void __fastcall FUN_110a9b60(int *param_1);
template<class... A> int FUN_110a9b60(A...);
void __fastcall FUN_110a9bb0(int *param_1);
template<class... A> int FUN_110a9bb0(A...);
void __fastcall FUN_110a9d60(undefined4 *param_1);
template<class... A> int FUN_110a9d60(A...);
int __stdcall FUN_110aa6d0(undefined4 param_1);
template<class... A> int FUN_110aa6d0(A...);
int __stdcall FUN_110aa700(undefined4 param_1);
template<class... A> int FUN_110aa700(A...);
void __fastcall FUN_110ab120(int param_1);
template<class... A> int FUN_110ab120(A...);
void __fastcall FUN_110ab140(int param_1);
template<class... A> int FUN_110ab140(A...);
void __fastcall FUN_110ab160(int param_1);
template<class... A> int FUN_110ab160(A...);
void __fastcall FUN_110ac5f0(undefined4 *param_1);
template<class... A> int FUN_110ac5f0(A...);
bool __fastcall FUN_110add70(int param_1);
template<class... A> int FUN_110add70(A...);
void __fastcall FUN_110ae620(int *param_1);
template<class... A> int FUN_110ae620(A...);
bool __stdcall FUN_110b0c50(undefined4 param_1);
template<class... A> int FUN_110b0c50(A...);
bool FUN_110b23a0(int param_1,int param_2);
template<class... A> int FUN_110b23a0(A...);
undefined4 __stdcall FUN_110b43b0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_110b43b0(A...);
void __fastcall FUN_110b51f0(undefined4 *param_1);
template<class... A> int FUN_110b51f0(A...);
undefined4 * __fastcall FUN_110b56c0(undefined4 *param_1);
template<class... A> int FUN_110b56c0(A...);
void __fastcall FUN_110b5890(undefined4 *param_1);
template<class... A> int FUN_110b5890(A...);
undefined4 __stdcall FUN_110b5c70(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_110b5c70(A...);
undefined4 __stdcall FUN_110b5e60(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_110b5e60(A...);
undefined4 *  __fastcall FUN_110b5f20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110b5f20(A...);
undefined4 * FUN_110b7de0(undefined4 *param_1);
template<class... A> int FUN_110b7de0(A...);
undefined1 * FUN_110b89b0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_110b89b0(A...);
undefined4 FUN_110b8e40(undefined4 param_1);
template<class... A> int FUN_110b8e40(A...);
undefined4 FUN_110b8e90(undefined4 param_1);
template<class... A> int FUN_110b8e90(A...);
void FUN_110b8ef0(undefined4 param_1);
template<class... A> int FUN_110b8ef0(A...);
undefined4 FUN_110b8fc0(undefined4 param_1);
template<class... A> int FUN_110b8fc0(A...);
undefined4 FUN_110b9130(undefined4 param_1);
template<class... A> int FUN_110b9130(A...);
undefined4 FUN_110b9200(undefined4 *param_1);
template<class... A> int FUN_110b9200(A...);
undefined4 FUN_110b9230(undefined4 param_1);
template<class... A> int FUN_110b9230(A...);
undefined4 FUN_110b9280(undefined4 *param_1);
template<class... A> int FUN_110b9280(A...);
undefined4 FUN_110b92b0(undefined4 param_1);
template<class... A> int FUN_110b92b0(A...);
bool FUN_110b93b0(undefined4 param_1);
template<class... A> int FUN_110b93b0(A...);
bool FUN_110b9430(undefined4 param_1);
template<class... A> int FUN_110b9430(A...);
undefined4 FUN_110b9590(undefined4 param_1);
template<class... A> int FUN_110b9590(A...);
undefined4 FUN_110b9610(undefined4 param_1);
template<class... A> int FUN_110b9610(A...);
undefined4 FUN_110b9940(undefined4 *param_1);
template<class... A> int FUN_110b9940(A...);
void __stdcall FUN_110bc830(undefined4 param_1,undefined1 *param_2,undefined4 param_3);
template<class... A> int FUN_110bc830(A...);
undefined ** __stdcall FUN_110bc860(undefined4 *param_1);
template<class... A> int FUN_110bc860(A...);
bool FUN_110bf1b0(undefined4 *param_1);
template<class... A> int FUN_110bf1b0(A...);
void __fastcall FUN_110c0940(undefined4 *param_1);
template<class... A> int FUN_110c0940(A...);
void __stdcall FUN_110c1a60(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_110c1a60(A...);
undefined4 __fastcall FUN_110c1a90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_110c1a90(A...);
void __fastcall FUN_110c1e70(int *param_1);
template<class... A> int FUN_110c1e70(A...);
undefined4 FUN_110c20d0(undefined4 param_1);
template<class... A> int FUN_110c20d0(A...);
int __fastcall FUN_110c2590(int param_1);
template<class... A> int FUN_110c2590(A...);
undefined ** __stdcall FUN_110c25e0(undefined4 *param_1);
template<class... A> int FUN_110c25e0(A...);
undefined4 __fastcall FUN_110c35b0(int param_1);
template<class... A> int FUN_110c35b0(A...);
undefined4 __fastcall FUN_110c3e90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_110c3e90(A...);
bool __fastcall FUN_110c4a10(int *param_1);
template<class... A> int FUN_110c4a10(A...);
bool __fastcall FUN_110c4a40(int *param_1);
template<class... A> int FUN_110c4a40(A...);
bool __fastcall FUN_110c4a70(int *param_1);
template<class... A> int FUN_110c4a70(A...);
bool __fastcall FUN_110c4ac0(int *param_1);
template<class... A> int FUN_110c4ac0(A...);
bool __fastcall FUN_110c4ae0(int *param_1);
template<class... A> int FUN_110c4ae0(A...);
bool __fastcall FUN_110c4b00(int *param_1);
template<class... A> int FUN_110c4b00(A...);
undefined4 * __fastcall FUN_110c65a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110c65a0(A...);
void __fastcall FUN_110c79f0(int param_1);
template<class... A> int FUN_110c79f0(A...);
void __fastcall FUN_110c7a10(int *param_1);
template<class... A> int FUN_110c7a10(A...);
void __fastcall FUN_110c7b10(int param_1);
template<class... A> int FUN_110c7b10(A...);
void __fastcall FUN_110c7b30(int *param_1);
template<class... A> int FUN_110c7b30(A...);
void FUN_110c7e50(void);
template<class... A> int FUN_110c7e50(A...);
int __stdcall FUN_110c8bc0(undefined4 param_1);
template<class... A> int FUN_110c8bc0(A...);
void __fastcall FUN_110c9180(int param_1);
template<class... A> int FUN_110c9180(A...);
int * FUN_110c9910(int *param_1);
template<class... A> int FUN_110c9910(A...);
int * __stdcall FUN_110ca040(int *param_1, int *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110ca040(A...);
undefined1 __fastcall FUN_110ca230(int param_1);
template<class... A> int FUN_110ca230(A...);
void __fastcall FUN_110ca620(int *param_1);
template<class... A> int FUN_110ca620(A...);
undefined4 FUN_110ca780(undefined4 *param_1);
template<class... A> int FUN_110ca780(A...);
undefined4 __fastcall FUN_110cadc0(int param_1);
template<class... A> int FUN_110cadc0(A...);
void __fastcall FUN_110caef0(int *param_1);
template<class... A> int FUN_110caef0(A...);
void __fastcall FUN_110caf30(int *param_1);
template<class... A> int FUN_110caf30(A...);
void __fastcall FUN_110caf70(int *param_1);
template<class... A> int FUN_110caf70(A...);
void __fastcall FUN_110cafb0(int *param_1);
template<class... A> int FUN_110cafb0(A...);
void __fastcall FUN_110caff0(int *param_1);
template<class... A> int FUN_110caff0(A...);
void __fastcall FUN_110cb030(int *param_1);
template<class... A> int FUN_110cb030(A...);
void __fastcall FUN_110cb070(int *param_1);
template<class... A> int FUN_110cb070(A...);
void __fastcall FUN_110cb0b0(int *param_1);
template<class... A> int FUN_110cb0b0(A...);
void __fastcall FUN_110cb0f0(int *param_1);
template<class... A> int FUN_110cb0f0(A...);
void __fastcall FUN_110cb130(int *param_1);
template<class... A> int FUN_110cb130(A...);
void __fastcall FUN_110cb170(int *param_1);
template<class... A> int FUN_110cb170(A...);
void __fastcall FUN_110cb1b0(int *param_1);
template<class... A> int FUN_110cb1b0(A...);
void __fastcall FUN_110cb1f0(int *param_1);
template<class... A> int FUN_110cb1f0(A...);
void __fastcall FUN_110cb230(int *param_1);
template<class... A> int FUN_110cb230(A...);
void __fastcall FUN_110cb270(int *param_1);
template<class... A> int FUN_110cb270(A...);
undefined4 __stdcall FUN_110cc260(undefined4 param_1);
template<class... A> int FUN_110cc260(A...);
undefined4 __fastcall FUN_110cdca0(int param_1);
template<class... A> int FUN_110cdca0(A...);
undefined2 __fastcall FUN_110ce370(int param_1);
template<class... A> int FUN_110ce370(A...);
undefined4 __stdcall FUN_110ceab0(undefined4 param_1);
template<class... A> int FUN_110ceab0(A...);
char * __fastcall FUN_110cead0(int param_1);
template<class... A> int FUN_110cead0(A...);
undefined4 __stdcall FUN_110d1d10(undefined4 param_1);
template<class... A> int FUN_110d1d10(A...);
undefined1 __fastcall FUN_110d2700(int param_1);
template<class... A> int FUN_110d2700(A...);
bool __fastcall FUN_110d2720(int param_1);
template<class... A> int FUN_110d2720(A...);
undefined4
__stdcall FUN_110d2e80(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_110d2e80(A...);
undefined1 __fastcall FUN_110d3140(int param_1);
template<class... A> int FUN_110d3140(A...);
undefined1 __fastcall FUN_110d4080(int param_1);
template<class... A> int FUN_110d4080(A...);
undefined1 __fastcall FUN_110d55a0(int param_1);
template<class... A> int FUN_110d55a0(A...);
undefined1 __fastcall FUN_110d5760(int param_1);
template<class... A> int FUN_110d5760(A...);
bool __fastcall FUN_110d5780(int param_1);
template<class... A> int FUN_110d5780(A...);
void __stdcall FUN_110d67a0(int param_1,int param_2,int param_3,undefined4 param_4);
template<class... A> int FUN_110d67a0(A...);
void __stdcall FUN_110d6ed0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110d6ed0(A...);
undefined1 __fastcall FUN_110d88a0(int param_1);
template<class... A> int FUN_110d88a0(A...);
undefined1 __fastcall FUN_110d88c0(int param_1);
template<class... A> int FUN_110d88c0(A...);
undefined1 __fastcall FUN_110d88e0(int param_1);
template<class... A> int FUN_110d88e0(A...);
undefined1 __fastcall FUN_110d8900(int param_1);
template<class... A> int FUN_110d8900(A...);
undefined1 __fastcall FUN_110d8930(int param_1);
template<class... A> int FUN_110d8930(A...);
undefined1 __fastcall FUN_110d8950(int param_1);
template<class... A> int FUN_110d8950(A...);
undefined1 __fastcall FUN_110d8970(int param_1);
template<class... A> int FUN_110d8970(A...);
undefined1 __fastcall FUN_110d89b0(int param_1);
template<class... A> int FUN_110d89b0(A...);
undefined1 __fastcall FUN_110d89d0(int param_1);
template<class... A> int FUN_110d89d0(A...);
undefined1 __fastcall FUN_110d89f0(int param_1);
template<class... A> int FUN_110d89f0(A...);
undefined1 __fastcall FUN_110d8a30(int param_1);
template<class... A> int FUN_110d8a30(A...);
undefined1 __fastcall FUN_110d8a50(int param_1);
template<class... A> int FUN_110d8a50(A...);
undefined1 __fastcall FUN_110d8c40(int param_1);
template<class... A> int FUN_110d8c40(A...);
undefined1 __fastcall FUN_110d8c60(int param_1);
template<class... A> int FUN_110d8c60(A...);
undefined1 __fastcall FUN_110d8c80(int param_1);
template<class... A> int FUN_110d8c80(A...);
undefined1 __fastcall FUN_110d8cb0(int param_1);
template<class... A> int FUN_110d8cb0(A...);
undefined1 __fastcall FUN_110d8d00(int param_1);
template<class... A> int FUN_110d8d00(A...);
undefined1 __fastcall FUN_110d8d20(int param_1);
template<class... A> int FUN_110d8d20(A...);
undefined1 __fastcall FUN_110d8d40(int param_1);
template<class... A> int FUN_110d8d40(A...);
undefined1 __fastcall FUN_110d8d60(int param_1);
template<class... A> int FUN_110d8d60(A...);
undefined1 __fastcall FUN_110d8d80(int param_1);
template<class... A> int FUN_110d8d80(A...);
undefined1 __fastcall FUN_110d8dc0(int param_1);
template<class... A> int FUN_110d8dc0(A...);
bool __fastcall FUN_110d8de0(int param_1);
template<class... A> int FUN_110d8de0(A...);
undefined4 __fastcall FUN_110d8e10(int param_1);
template<class... A> int FUN_110d8e10(A...);
undefined4 __fastcall FUN_110d9b30(int param_1);
template<class... A> int FUN_110d9b30(A...);
int __fastcall FUN_110da760(int param_1);
template<class... A> int FUN_110da760(A...);
undefined4 __fastcall FUN_110db5c0(int *param_1);
template<class... A> int FUN_110db5c0(A...);
void __fastcall FUN_110dc6d0(int param_1);
template<class... A> int FUN_110dc6d0(A...);
void __fastcall FUN_110dc760(undefined4 *param_1);
template<class... A> int FUN_110dc760(A...);
void __fastcall FUN_110dc880(undefined4 *param_1);
template<class... A> int FUN_110dc880(A...);
void __fastcall FUN_110dc8a0(undefined4 *param_1);
template<class... A> int FUN_110dc8a0(A...);
uint __fastcall FUN_110de320(int param_1);
template<class... A> int FUN_110de320(A...);
int __fastcall FUN_110de640(int param_1);
template<class... A> int FUN_110de640(A...);
undefined4 __fastcall FUN_110def50(int param_1);
template<class... A> int FUN_110def50(A...);
void __fastcall FUN_110e1d30(int param_1);
template<class... A> int FUN_110e1d30(A...);
undefined4 __fastcall FUN_110e28d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_110e28d0(A...);
void __fastcall FUN_110e2c60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110e2c60(A...);
void __fastcall FUN_110e3660(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110e3660(A...);
int __fastcall FUN_110e3bf0(int param_1);
template<class... A> int FUN_110e3bf0(A...);
void __fastcall FUN_110e4390(undefined4 *param_1);
template<class... A> int FUN_110e4390(A...);
void __fastcall FUN_110e70a0(int param_1);
template<class... A> int FUN_110e70a0(A...);
undefined1 FUN_110e7d10(char param_1);
template<class... A> int FUN_110e7d10(A...);
void __fastcall FUN_110e9120(undefined4 *param_1);
template<class... A> int FUN_110e9120(A...);
void __fastcall FUN_110e9160(undefined4 *param_1);
template<class... A> int FUN_110e9160(A...);
void __fastcall FUN_110e9320(undefined4 *param_1);
template<class... A> int FUN_110e9320(A...);
void __fastcall FUN_110e9370(undefined4 *param_1);
template<class... A> int FUN_110e9370(A...);
void __fastcall FUN_110ea940(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110ea940(A...);
undefined4 __stdcall FUN_110eb700(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_110eb700(A...);
void __fastcall FUN_110ec740(int *param_1);
template<class... A> int FUN_110ec740(A...);
undefined4 __fastcall FUN_110ec780(int param_1);
template<class... A> int FUN_110ec780(A...);
int __fastcall FUN_110ec7a0(int param_1);
template<class... A> int FUN_110ec7a0(A...);
undefined4 __fastcall FUN_110ecc20(int *param_1);
template<class... A> int FUN_110ecc20(A...);
int __fastcall FUN_110ecd80(int *param_1);
template<class... A> int FUN_110ecd80(A...);
undefined4 __fastcall FUN_110ecda0(int param_1);
template<class... A> int FUN_110ecda0(A...);
int __fastcall FUN_110ecdc0(int param_1);
template<class... A> int FUN_110ecdc0(A...);
void __stdcall FUN_110ecde0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_110ecde0(A...);
undefined4 FUN_110ecfe0(char *param_1);
template<class... A> int FUN_110ecfe0(A...);
void __fastcall FUN_110ed320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_110ed320(A...);
undefined4 *  __stdcall FUN_110ed980(undefined1 *param_1,int param_2);
template<class... A> int FUN_110ed980(A...);
char * FUN_110ede50(char *param_1,char *param_2,undefined4 param_3);
template<class... A> int FUN_110ede50(A...);
undefined4 * __fastcall FUN_110ee540(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_110ee540(A...);
void __fastcall FUN_110f0440(int param_1);
template<class... A> int FUN_110f0440(A...);
void __fastcall FUN_110f0460(int *param_1);
template<class... A> int FUN_110f0460(A...);
void __fastcall FUN_110f0490(int param_1);
template<class... A> int FUN_110f0490(A...);
void __fastcall FUN_110f04c0(int param_1);
template<class... A> int FUN_110f04c0(A...);
void __fastcall FUN_110f04e0(int *param_1);
template<class... A> int FUN_110f04e0(A...);
void __fastcall FUN_110f0df0(int param_1);
template<class... A> int FUN_110f0df0(A...);
void __fastcall FUN_110f24b0(int *param_1);
template<class... A> int FUN_110f24b0(A...);
undefined4 __fastcall FUN_110f2960(int param_1);
template<class... A> int FUN_110f2960(A...);
undefined4 FUN_110f53b0(undefined4 param_1);
template<class... A> int FUN_110f53b0(A...);
void __fastcall FUN_110f6650(int param_1);
template<class... A> int FUN_110f6650(A...);
void __fastcall FUN_110f68d0(int param_1);
template<class... A> int FUN_110f68d0(A...);
void __fastcall FUN_110f68f0(undefined4 *param_1);
template<class... A> int FUN_110f68f0(A...);
void __fastcall FUN_110f6940(undefined4 *param_1);
template<class... A> int FUN_110f6940(A...);
void __fastcall FUN_110f6970(undefined4 *param_1);
template<class... A> int FUN_110f6970(A...);
void __fastcall FUN_110f69a0(undefined4 *param_1);
template<class... A> int FUN_110f69a0(A...);
void __fastcall FUN_110f69d0(undefined4 *param_1);
template<class... A> int FUN_110f69d0(A...);
// Reference entry 110a1230; body size 58 bytes.
#line 1 "ENTRY_110a1230"

undefined4 __fastcall FUN_110a1230(int param_1)

{
  char cVar1;
  char local_1c [28];
  
  thunk_FUN_11458fa0(*(undefined4 *)(param_1 + 0x20));
  cVar1 = (char)(thunk_FUN_114595b0("recentlyPlayed",(uint)&local_1c,2), 0);
  if ((cVar1 != '\0') && (local_1c[0] == '1')) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 110a1280; body size 17 bytes.
#line 1 "ENTRY_110a1280"

bool __thiscall Recovered_Bulk::m_FUN_110a1280(uint param_2)
{
  int param_1 = (int )this;
  return (bool)((*(uint *)(param_1 + 0x28) & param_2) == param_2);
}


// Reference entry 110a12a0; body size 58 bytes.
#line 1 "ENTRY_110a12a0"

undefined4 __fastcall FUN_110a12a0(int param_1)

{
  char cVar1;
  char local_1c [28];
  
  thunk_FUN_11458fa0(*(undefined4 *)(param_1 + 0x20));
  cVar1 = (char)(thunk_FUN_114595b0("hideTuneIn",(uint)&local_1c,2), 0);
  if ((cVar1 != '\0') && (local_1c[0] == '1')) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 110a3080; body size 38 bytes.
#line 1 "ENTRY_110a3080"

undefined4 __thiscall Recovered_Bulk::m_FUN_110a3080(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("RDMValue",0);
  thunk_FUN_1124f3c0<>(param_2);
  return (undefined4)(param_1);
}


// Reference entry 110a30b0; body size 16 bytes.
#line 1 "ENTRY_110a30b0"

void __thiscall Recovered_Bulk::m_FUN_110a30b0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x48) == -1) {
    *(undefined4*)(param_1 + 0x48) = (undefined4)(param_2);
  }
  return;
}


// Reference entry 110a30d0; body size 37 bytes.
#line 1 "ENTRY_110a30d0"

void __thiscall Recovered_Bulk::m_FUN_110a30d0(char param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_11881128);
  if (param_2 == '\0') {
    puVar1 = (undefined1 *)(&DAT_118872c0);
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x10))("userMetricsTracking",puVar1);
  return;
}


// Reference entry 110a3240; body size 37 bytes.
#line 1 "ENTRY_110a3240"

void __thiscall Recovered_Bulk::m_FUN_110a3240(char param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_11881128);
  if (param_2 == '\0') {
    puVar1 = (undefined1 *)(&DAT_118872c0);
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x10))("hideTuneIn",puVar1);
  return;
}


// Reference entry 110a3e40; body size 16 bytes.
#line 1 "ENTRY_110a3e40"

void __fastcall FUN_110a3e40(undefined4 *param_1)

{
  thunk_FUN_111a36f0();
  *param_1 = (undefined4)(1);
  return;
}


// Reference entry 110a3e60; body size 37 bytes.
#line 1 "ENTRY_110a3e60"

void __thiscall Recovered_Bulk::m_FUN_110a3e60(char param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_11881128);
  if (param_2 == '\0') {
    puVar1 = (undefined1 *)(&DAT_118872c0);
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x10))("recentlyPlayed",puVar1);
  return;
}


// Reference entry 110a4fa0; body size 25 bytes.
#line 1 "ENTRY_110a4fa0"

void FUN_110a4fa0(undefined4 param_1,undefined4 param_2)

{ int stack0x0000000c;
 try {
  thunk_FUN_111a7be0("ActionScriptTrace",10,param_2,&stack0x0000000c);
  return;

 } catch (...) { }
}


// Reference entry 110a5340; body size 59 bytes.
#line 1 "ENTRY_110a5340"

bool __thiscall Recovered_Bulk::m_FUN_110a5340(uint param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  uint in_EAX;
  char *pcVar3;
  uint uVar4;
  
  pcVar2 = (char *)((char *)*param_1);
  if ((char *)(pcVar2) != (char *)(0x0)) {
    uVar4 = (uint)(*(uint *)(pcVar2 + -0xc));
    if (uVar4 == 0) {
      pcVar3 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar3);
        in_EAX = (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(cVar1)));
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      uVar4 = (uint)((int)pcVar3 - (int)(pcVar2 + 1));
      *(uint*)(pcVar2 + -0xc) = (uint)(uVar4);
    }
    if (param_2 < uVar4) {
      return (uint)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(undefined1 *)(param_2 + *param_1))));
    }
  }
  return (bool)0;
}


// Reference entry 110a6770; body size 40 bytes.
#line 1 "ENTRY_110a6770"

int __thiscall Recovered_Bulk::m_FUN_110a6770(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_110a67f0((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
  }
  return (int)(iVar1);
}


// Reference entry 110a67b0; body size 40 bytes.
#line 1 "ENTRY_110a67b0"

int __thiscall Recovered_Bulk::m_FUN_110a67b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_110a68c0((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 110a8600; body size 39 bytes.
#line 1 "ENTRY_110a8600"

undefined4 * __fastcall FUN_110a8600(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 110a8630; body size 39 bytes.
#line 1 "ENTRY_110a8630"

undefined4 * __fastcall FUN_110a8630(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 110a8660; body size 39 bytes.
#line 1 "ENTRY_110a8660"

undefined4 * __fastcall FUN_110a8660(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 110a8690; body size 37 bytes.
#line 1 "ENTRY_110a8690"

undefined4 * __fastcall FUN_110a8690(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 110a9630; body size 19 bytes.
#line 1 "ENTRY_110a9630"

void __fastcall FUN_110a9630(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 110a9650; body size 19 bytes.
#line 1 "ENTRY_110a9650"

void __fastcall FUN_110a9650(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 110a9670; body size 19 bytes.
#line 1 "ENTRY_110a9670"

void __fastcall FUN_110a9670(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 110a9a80; body size 19 bytes.
#line 1 "ENTRY_110a9a80"

void __fastcall FUN_110a9a80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 110a9af0; body size 55 bytes.
#line 1 "ENTRY_110a9af0"

void __fastcall FUN_110a9af0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_1148a50e(puVar1,0x10);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 110a9b40; body size 25 bytes.
#line 1 "ENTRY_110a9b40"

void __fastcall FUN_110a9b40(undefined4 *param_1)

{
  thunk_FUN_110a69d0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 110a9b60; body size 55 bytes.
#line 1 "ENTRY_110a9b60"

void __fastcall FUN_110a9b60(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_1148a50e(puVar1,0x10);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 110a9bb0; body size 55 bytes.
#line 1 "ENTRY_110a9bb0"

void __fastcall FUN_110a9bb0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 110a9d60; body size 33 bytes.
#line 1 "ENTRY_110a9d60"

void __fastcall FUN_110a9d60(undefined4 *param_1)

{
  free((void *)*param_1);
  FUN_112aa340(param_1 + 9);
  FUN_112a9d40(param_1 + 7);
  return;
}


// Reference entry 110aa6d0; body size 27 bytes.
#line 1 "ENTRY_110aa6d0"

int __stdcall FUN_110aa6d0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_110a6fa0<>((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 110aa700; body size 27 bytes.
#line 1 "ENTRY_110aa700"

int __stdcall FUN_110aa700(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_110a6d20<>((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 110aaa50; body size 33 bytes.
#line 1 "ENTRY_110aaa50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110aaa50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAllocationChunk);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110aae10; body size 35 bytes.
#line 1 "ENTRY_110aae10"

undefined4 __thiscall Recovered_Bulk::m_FUN_110aae10(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110aa330();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x188);
  }
  return (undefined4)(param_1);
}


// Reference entry 110ab120; body size 25 bytes.
#line 1 "ENTRY_110ab120"

void __fastcall FUN_110ab120(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 110ab140; body size 25 bytes.
#line 1 "ENTRY_110ab140"

void __fastcall FUN_110ab140(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 110ab160; body size 25 bytes.
#line 1 "ENTRY_110ab160"

void __fastcall FUN_110ab160(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 110ac250; body size 63 bytes.
#line 1 "ENTRY_110ac250"

void __thiscall Recovered_Bulk::m_FUN_110ac250(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  _Dst = (void *)((void *)thunk_FUN_110acc40<>(param_2), 0);
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  thunk_FUN_110ab530(_Dst,iVar1 - iVar2 >> 2,param_2);
  return;
}


// Reference entry 110ac5f0; body size 25 bytes.
#line 1 "ENTRY_110ac5f0"

void __fastcall FUN_110ac5f0(undefined4 *param_1)

{
  thunk_FUN_110a69d0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 110add70; body size 49 bytes.
#line 1 "ENTRY_110add70"

bool __fastcall FUN_110add70(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x38));
  if (*(char *)(param_1 + 0x31) == '\0') {
    thunk_FUN_110aeb40<>(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),0x3ec,0,0);
    thunk_FUN_110adba0();
  }
  return (bool)(iVar1 != 0);
}


// Reference entry 110ae620; body size 32 bytes.
#line 1 "ENTRY_110ae620"

void __fastcall FUN_110ae620(int *param_1)

{
  thunk_FUN_110a69d0(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 110aea50; body size 52 bytes.
#line 1 "ENTRY_110aea50"

void __thiscall Recovered_Bulk::m_FUN_110aea50(undefined4 param_2)
{
  int param_1 = (int )this;
  int local_4;
  
  local_4 = (int)(param_1);
  thunk_FUN_112a7f50(param_1 + 0x1c);
  thunk_FUN_110aeaa0(param_2,&local_4);
  thunk_FUN_112a8010(param_1 + 0x1c);
  return;
}


// Reference entry 110b0c50; body size 29 bytes.
#line 1 "ENTRY_110b0c50"

bool __stdcall FUN_110b0c50(undefined4 param_1)

{
  int iVar1;
  undefined1 local_4 [4];
  
  iVar1 = (int)(thunk_FUN_110b3000(param_1,(uint)&local_4), 0);
  return (bool)(iVar1 != 0);
}


// Reference entry 110b23a0; body size 44 bytes.
#line 1 "ENTRY_110b23a0"

bool FUN_110b23a0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = (int)(thunk_FUN_110b3000(param_1,0), 0);
    return (bool)(param_2 == iVar1);
  }
  return (bool)(false);
}


// Reference entry 110b43b0; body size 52 bytes.
#line 1 "ENTRY_110b43b0"

undefined4 __stdcall FUN_110b43b0(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_110b2410<>(param_1,param_2), 0);
  if (*pcVar1 == (char)(('\0'))) {
    thunk_FUN_110b4400<>(param_1);
    *pcVar1 = (char)('\x01');
  }
  return (undefined4)(*(undefined4 *)(pcVar1 + 8));
}


// Reference entry 110b4850; body size 54 bytes.
#line 1 "ENTRY_110b4850"

void __thiscall Recovered_Bulk::m_FUN_110b4850(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x20));
  piVar2 = (int *)((int *)(param_1 + 0x20));
  if (iVar1 != 0) {
    while (iVar1 != param_2) {
      piVar2 = (int *)((int *)(iVar1 + 0x10));
      iVar1 = (int)(*piVar2);
      if (iVar1 == 0) {
        return;
      }
    }
    *piVar2 = (int)(*(int *)(param_2 + 0x10));
    *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  }
  return;
}


// Reference entry 110b4ef0; body size 49 bytes.
#line 1 "ENTRY_110b4ef0"

undefined1 * __thiscall Recovered_Bulk::m_FUN_110b4ef0(uint param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_2 < (uint)(*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8) >> 2)) {
    puVar1 = (undefined1 *)(*(undefined1 **)(*(int *)(*(int *)(param_1 + 0xb8) + param_2 * 4) + 4), 0);
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(puVar1) != (undefined1 *)(0x0)) {
      puVar2 = (undefined1 *)(puVar1);
    }
    return (undefined1 *)(puVar2);
  }
  return (undefined1 *)((undefined1 *)0x0);
}


// Reference entry 110b51f0; body size 55 bytes.
#line 1 "ENTRY_110b51f0"

void __fastcall FUN_110b51f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = (int *)((int *)param_1[6]);
  puVar1 = (undefined4 *)((undefined4 *)*piVar2);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    while ((undefined4 *)(puVar1) != (undefined4 *)(param_1)) {
      piVar2 = (int *)(puVar1 + 0xf);
      puVar1 = (undefined4 *)((undefined4 *)*piVar2);
      if ((undefined4 *)(puVar1) == (undefined4 *)(0x0)) {
        (**(code **)*param_1)(1);
        return;
      }
    }
    *piVar2 = (int)(param_1[0xf]);
    param_1[0xf] = (undefined4)(0);
  }
  (**(code **)*param_1)(1);
  return;
}


// Reference entry 110b5240; body size 30 bytes.
#line 1 "ENTRY_110b5240"

void __thiscall Recovered_Bulk::m_FUN_110b5240(int *param_2)
{
  int *param_1 = (int *)this;
  (*(code ***)param_2)[2]();
  thunk_FUN_112a7c70(*param_1 + 0x24);
  return;
}


// Reference entry 110b5610; body size 54 bytes.
#line 1 "ENTRY_110b5610"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b5610(undefined4 param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  
  *param_1 = (undefined4)(param_2);
  iVar1 = (int)(*param_3);
  param_1[1] = (undefined4)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b5660; body size 33 bytes.
#line 1 "ENTRY_110b5660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b5660(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSQuickSkip);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  param_1[3] = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  return (undefined4 *)(param_1);
}


// Reference entry 110b5690; body size 32 bytes.
#line 1 "ENTRY_110b5690"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b5690(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  param_1[3] = (undefined4)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSQuickSkip);
  return (undefined4 *)(param_1);
}


// Reference entry 110b56c0; body size 30 bytes.
#line 1 "ENTRY_110b56c0"

undefined4 * __fastcall FUN_110b56c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSQuickSkip);
  param_1[1] = (undefined4)(0xff);
  param_1[2] = (undefined4)(0xffffffff);
  param_1[3] = (undefined4)(0xffffffff);
  return (undefined4 *)(param_1);
}


// Reference entry 110b5890; body size 30 bytes.
#line 1 "ENTRY_110b5890"

void __fastcall FUN_110b5890(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMap);
  if ((undefined4 *)param_1[1] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMapCB);
  return;
}


// Reference entry 110b58d0; body size 27 bytes.
#line 1 "ENTRY_110b58d0"

int __thiscall Recovered_Bulk::m_FUN_110b58d0(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  return (int)(param_1);
}


// Reference entry 110b5900; body size 52 bytes.
#line 1 "ENTRY_110b5900"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b5900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMap);
  if ((undefined4 *)param_1[1] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMapCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b5950; body size 33 bytes.
#line 1 "ENTRY_110b5950"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b5950(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RPresentationMapCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b5c70; body size 27 bytes.
#line 1 "ENTRY_110b5c70"

undefined4 __stdcall FUN_110b5c70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1118aa30<>(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 110b5e60; body size 23 bytes.
#line 1 "ENTRY_110b5e60"

undefined4 __stdcall FUN_110b5e60(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1118adc0(param_1,param_2);
  return (undefined4)(param_1);
}


// Reference entry 110b5f20; body size 27 bytes.
#line 1 "ENTRY_110b5f20"

undefined4 *  __fastcall FUN_110b5f20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 8) + 4))(param_1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
  }
  return (undefined4 *)(recovered_unused_stack_1);
}


// Reference entry 110b60e0; body size 19 bytes.
#line 1 "ENTRY_110b60e0"

void __thiscall Recovered_Bulk::m_FUN_110b60e0(void)
{
  int param_1 = (int )this;
  undefined4 in_stack_00000010;
  
  *(undefined4*)(param_1 + 8) = (undefined4)(in_stack_00000010);
  thunk_FUN_1118d230();
  return;
}


// Reference entry 110b6d60; body size 58 bytes.
#line 1 "ENTRY_110b6d60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6d60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTConfigureSleepTimerAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTConfigureSleepTimerAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTConfigureSleepTimerAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6db0; body size 58 bytes.
#line 1 "ENTRY_110b6db0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6db0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTEndDirectControlSessionAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTEndDirectControlSessionAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTEndDirectControlSessionAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6e00; body size 58 bytes.
#line 1 "ENTRY_110b6e00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6e00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetPositionInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetPositionInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetPositionInfoAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6e50; body size 58 bytes.
#line 1 "ENTRY_110b6e50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6e50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetRemainingSleepTimerDurationAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetRemainingSleepTimerDurationAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetRemainingSleepTimerDurationAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdbd8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6ea0; body size 58 bytes.
#line 1 "ENTRY_110b6ea0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6ea0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTNextAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTNextAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTNextAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6ef0; body size 58 bytes.
#line 1 "ENTRY_110b6ef0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6ef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPreviousAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPreviousAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPreviousAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6f40; body size 58 bytes.
#line 1 "ENTRY_110b6f40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6f40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveAllTracksFromQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveAllTracksFromQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveAllTracksFromQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6f90; body size 58 bytes.
#line 1 "ENTRY_110b6f90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6f90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveTrackFromQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveTrackFromQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveTrackFromQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b6fe0; body size 58 bytes.
#line 1 "ENTRY_110b6fe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b6fe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveTrackRangeFromQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveTrackRangeFromQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTRemoveTrackRangeFromQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b7030; body size 58 bytes.
#line 1 "ENTRY_110b7030"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b7030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTReorderTracksInQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTReorderTracksInQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTReorderTracksInQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b7080; body size 58 bytes.
#line 1 "ENTRY_110b7080"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b7080(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSaveQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSaveQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSaveQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdbd0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b70d0; body size 58 bytes.
#line 1 "ENTRY_110b70d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b70d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSeekAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSeekAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSeekAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b7120; body size 38 bytes.
#line 1 "ENTRY_110b7120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110b7120(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjAvt);
  thunk_FUN_1113e6f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110b7de0; body size 40 bytes.
#line 1 "ENTRY_110b7de0"

undefined4 * FUN_110b7de0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1113eb00("r:streamInfo"), 0);
  if ((ushort)uVar1 < 0x44) {
    *param_1 = (undefined4)(uVar1);
    return (undefined4 *)(param_1);
  }
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 110b89b0; body size 33 bytes.
#line 1 "ENTRY_110b89b0"

undefined1 * FUN_110b89b0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_110b87c0(param_1,param_2), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
    puVar2 = (undefined1 *)((undefined1 *)(**(code **)(*piVar1 + 0x24))(), 0);
    return (undefined1 *)(puVar2);
  }
  return (undefined1 *)(&DAT_1186d2ee);
}


// Reference entry 110b8e40; body size 62 bytes.
#line 1 "ENTRY_110b8e40"

undefined4 FUN_110b8e40(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0xf) {
    iVar1 = (int)(strncmp(local_28,"x-rincon-stream",0xf), 0);
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b8e90; body size 62 bytes.
#line 1 "ENTRY_110b8e90"

undefined4 FUN_110b8e90(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0xf) {
    iVar1 = (int)(strncmp(local_28,"x-rincon-buzzer",0xf), 0);
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b8ef0; body size 30 bytes.
#line 1 "ENTRY_110b8ef0"

void FUN_110b8ef0(undefined4 param_1)

{
  undefined1 local_28 [40];
  
  thunk_FUN_11245a50(param_1,(uint)&local_28);
  FUN_110befd0((uint)&local_28);
  return;
}


// Reference entry 110b8fc0; body size 62 bytes.
#line 1 "ENTRY_110b8fc0"

undefined4 FUN_110b8fc0(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0x11) {
    iVar1 = (int)(strncmp(local_28,"x-sonos-htastream",0x11), 0);
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b9130; body size 62 bytes.
#line 1 "ENTRY_110b9130"

undefined4 FUN_110b9130(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0xe) {
    iVar1 = (int)(strncmp(local_28,"x-rincon-queue",0xe), 0);
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b9200; body size 38 bytes.
#line 1 "ENTRY_110b9200"

undefined4 FUN_110b9200(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0x13) {
    iVar1 = (int)(strncmp((char *)*param_1,"x-sonosapi-rtrecent",0x13), 0);
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b9230; body size 62 bytes.
#line 1 "ENTRY_110b9230"

undefined4 FUN_110b9230(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0x13) {
    iVar1 = (int)(strncmp(local_28,"x-sonosapi-rtrecent",0x13), 0);
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b9280; body size 38 bytes.
#line 1 "ENTRY_110b9280"

undefined4 FUN_110b9280(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0x11) {
    iVar1 = (int)(strncmp((char *)*param_1,"x-sonosapi-stream",0x11), 0);
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b92b0; body size 62 bytes.
#line 1 "ENTRY_110b92b0"

undefined4 FUN_110b92b0(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0x11) {
    iVar1 = (int)(strncmp(local_28,"x-sonosapi-stream",0x11), 0);
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b93b0; body size 59 bytes.
#line 1 "ENTRY_110b93b0"

bool FUN_110b93b0(undefined4 param_1)

{
  int iVar1;
  char *local_28 [10];
  
  thunk_FUN_11245a50(param_1,(uint)&local_28);
  if ((char *)(local_28[0]) == (char *)(0x0)) {
    return (bool)(false);
  }
  iVar1 = (int)(strncmp(local_28[0],"x-sonosapi-radio",0x10), 0);
  return (bool)(iVar1 == 0);
}


// Reference entry 110b9430; body size 59 bytes.
#line 1 "ENTRY_110b9430"

bool FUN_110b9430(undefined4 param_1)

{
  int iVar1;
  char *local_28 [10];
  
  thunk_FUN_11245a50(param_1,(uint)&local_28);
  if ((char *)(local_28[0]) == (char *)(0x0)) {
    return (bool)(false);
  }
  iVar1 = (int)(strncmp(local_28[0],"x-sonosprog",0xb), 0);
  return (bool)(iVar1 == 0);
}


// Reference entry 110b9590; body size 62 bytes.
#line 1 "ENTRY_110b9590"

undefined4 FUN_110b9590(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 0xb) {
    iVar1 = (int)(strncmp(local_28,"x-sonos-vli",0xb), 0);
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b9610; body size 62 bytes.
#line 1 "ENTRY_110b9610"

undefined4 FUN_110b9610(undefined4 param_1)

{
  int iVar1;
  char *local_28;
  int local_24;
  
  thunk_FUN_11245a50(param_1,&local_28);
  if (local_24 == 8) {
    iVar1 = (int)(strncmp(local_28,"x-rincon",8), 0);
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110b9940; body size 43 bytes.
#line 1 "ENTRY_110b9940"

undefined4 FUN_110b9940(undefined4 *param_1)

{
  int iVar1;
  
  if (((char *)*param_1 != (char *)((0x0))) && (6 < (uint)param_1[1])) {
    iVar1 = (int)(strncmp((char *)*param_1,"x-sonos",7), 0);
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110bc830; body size 34 bytes.
#line 1 "ENTRY_110bc830"

void __stdcall FUN_110bc830(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  *param_2 = (undefined1)(0);
  thunk_FUN_110bcb10<>("r:EnqueuedTransportURIMetaData","dc:title",param_1,param_2,param_3);
  return;
}


// Reference entry 110bc860; body size 18 bytes.
#line 1 "ENTRY_110bc860"

undefined ** __stdcall FUN_110bc860(undefined4 *param_1)

{
  *param_1 = (undefined4)(0x1c);
  return (undefined **)(&PTR_s_TransportState_119c29e8);
}


// Reference entry 110bf1b0; body size 36 bytes.
#line 1 "ENTRY_110bf1b0"

bool FUN_110bf1b0(undefined4 *param_1)

{
  int iVar1;
  
  if ((char *)*param_1 == (char *)((0x0))) {
    return (bool)(false);
  }
  iVar1 = (int)(strncmp((char *)*param_1,"x-sonosapi-radio",0x10), 0);
  return (bool)(iVar1 == 0);
}


// Reference entry 110bf210; body size 42 bytes.
#line 1 "ENTRY_110bf210"

void __thiscall Recovered_Bulk::m_FUN_110bf210(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20), 0);
  }
  thunk_FUN_1145c720(param_3,param_4,"x-rincon-queue:%s#%d",puVar1,param_2);
  return;
}


// Reference entry 110bf3e0; body size 38 bytes.
#line 1 "ENTRY_110bf3e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_110bf3e0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  return (undefined4)(param_1);
}


// Reference entry 110bf600; body size 38 bytes.
#line 1 "ENTRY_110bf600"

undefined4 __thiscall Recovered_Bulk::m_FUN_110bf600(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  return (undefined4)(param_1);
}


// Reference entry 110bf630; body size 38 bytes.
#line 1 "ENTRY_110bf630"

undefined4 __thiscall Recovered_Bulk::m_FUN_110bf630(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  return (undefined4)(param_1);
}


// Reference entry 110bf660; body size 38 bytes.
#line 1 "ENTRY_110bf660"

undefined4 __thiscall Recovered_Bulk::m_FUN_110bf660(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  return (undefined4)(param_1);
}


// Reference entry 110c0940; body size 25 bytes.
#line 1 "ENTRY_110c0940"

void __fastcall FUN_110c0940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSDListProcessorWithLogos);
  thunk_FUN_112818d0();
  thunk_FUN_11281950();
  return;
}


// Reference entry 110c0cc0; body size 38 bytes.
#line 1 "ENTRY_110c0cc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c0cc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c0cf0; body size 38 bytes.
#line 1 "ENTRY_110c0cf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c0cf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c0d20; body size 38 bytes.
#line 1 "ENTRY_110c0d20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c0d20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c0df0; body size 32 bytes.
#line 1 "ENTRY_110c0df0"

undefined4 __thiscall Recovered_Bulk::m_FUN_110c0df0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110c0690();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return (undefined4)(param_1);
}


// Reference entry 110c0eb0; body size 51 bytes.
#line 1 "ENTRY_110c0eb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c0eb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSDListProcessorWithLogos);
  thunk_FUN_112818d0();
  thunk_FUN_11281950();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x150);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c0ef0; body size 58 bytes.
#line 1 "ENTRY_110c0ef0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c0ef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpMSDListAvailableServicesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpMSDListAvailableServicesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpMSDListAvailableServicesAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe3d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c0f40; body size 58 bytes.
#line 1 "ENTRY_110c0f40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c0f40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpMSDUpdateAvailableServicesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpMSDUpdateAvailableServicesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpMSDUpdateAvailableServicesAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c0f90; body size 38 bytes.
#line 1 "ENTRY_110c0f90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c0f90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjMSD);
  thunk_FUN_1113e6f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c1160; body size 38 bytes.
#line 1 "ENTRY_110c1160"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c1160(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjServiceDesc);
  thunk_FUN_111a4f00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c1190; body size 50 bytes.
#line 1 "ENTRY_110c1190"

void __thiscall Recovered_Bulk::m_FUN_110c1190(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x20) == 0) {
    thunk_FUN_110c49a0();
    thunk_FUN_1107e550(param_1);
    thunk_FUN_1107e1f0<>(param_1);
  }
  FUN_10070892(param_2);
  return;
}


// Reference entry 110c1920; body size 59 bytes.
#line 1 "ENTRY_110c1920"

void __thiscall Recovered_Bulk::m_FUN_110c1920(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
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


// Reference entry 110c1970; body size 59 bytes.
#line 1 "ENTRY_110c1970"

void __thiscall Recovered_Bulk::m_FUN_110c1970(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
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


// Reference entry 110c19c0; body size 59 bytes.
#line 1 "ENTRY_110c19c0"

void __thiscall Recovered_Bulk::m_FUN_110c19c0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
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


// Reference entry 110c1a10; body size 45 bytes.
#line 1 "ENTRY_110c1a10"

void __thiscall Recovered_Bulk::m_FUN_110c1a10(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c1a60; body size 24 bytes.
#line 1 "ENTRY_110c1a60"

void __stdcall FUN_110c1a60(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  thunk_FUN_11284360();
  thunk_FUN_111f3f50();
  return;
}


// Reference entry 110c1a90; body size 16 bytes.
#line 1 "ENTRY_110c1a90"

undefined4 __fastcall FUN_110c1a90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(FUN_10002a68(), 0);
  return (undefined4)(uVar1);
}


// Reference entry 110c1e70; body size 43 bytes.
#line 1 "ENTRY_110c1e70"

void __fastcall FUN_110c1e70(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110c20d0; body size 24 bytes.
#line 1 "ENTRY_110c20d0"

undefined4 FUN_110c20d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_110c33f0(param_1), 0);
  if (iVar1 != 0) {
    return (undefined4)(*(undefined4 *)(iVar1 + 4));
  }
  return (undefined4)(0);
}


// Reference entry 110c2570; body size 18 bytes.
#line 1 "ENTRY_110c2570"

int __thiscall Recovered_Bulk::m_FUN_110c2570(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_2 * 0x10 + param_1 + 0x28874);
}


// Reference entry 110c2590; body size 33 bytes.
#line 1 "ENTRY_110c2590"

int __fastcall FUN_110c2590(int param_1)

{
  if (*(char *)(param_1 + 0x29a9c) != '\0') {
    thunk_FUN_110c2160<>(0,2000,0,0);
  }
  return (int)(param_1 + 0x6c);
}


// Reference entry 110c25e0; body size 18 bytes.
#line 1 "ENTRY_110c25e0"

undefined ** __stdcall FUN_110c25e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(1);
  return (undefined **)(&PTR_s_ServiceListVersion_119c37dc);
}


// Reference entry 110c35b0; body size 30 bytes.
#line 1 "ENTRY_110c35b0"

undefined4 __fastcall FUN_110c35b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = (undefined4)((*(code *)**(undefined4 **)(*(int *)(param_1 + 0x28) + 0x1c))(), 0);
    thunk_FUN_110c4ef0<>(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 110c3e90; body size 32 bytes.
#line 1 "ENTRY_110c3e90"

undefined4 __fastcall FUN_110c3e90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = (undefined4)((*(code *)**(undefined4 **)(*(int *)(param_1 + 0x28) + 0x1c))(), 0);
    thunk_FUN_110c4ef0<>(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 110c4940; body size 55 bytes.
#line 1 "ENTRY_110c4940"

void __thiscall Recovered_Bulk::m_FUN_110c4940(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c) + 4))(param_1 + 8,param_2), 0);
    *(undefined4*)(param_1 + 0x30) = (undefined4)(uVar1);
    return;
  }
  thunk_FUN_110c3210();
  thunk_FUN_110c37b0(param_2,*(undefined4 *)(param_1 + 0x3c));
  return;
}


// Reference entry 110c4a10; body size 27 bytes.
#line 1 "ENTRY_110c4a10"

bool __fastcall FUN_110c4a10(int *param_1)

{
  uint in_EAX;
  
  if (((*param_1 == (int)((0))) && (in_EAX = (uint)(param_1[1]), in_EAX != 0)) && (*(char *)(in_EAX + 300) == '\x02') ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (bool)0;
}


// Reference entry 110c4a40; body size 27 bytes.
#line 1 "ENTRY_110c4a40"

bool __fastcall FUN_110c4a40(int *param_1)

{
  uint in_EAX;
  
  if (((*param_1 == (int)((0))) && (in_EAX = (uint)(param_1[1]), in_EAX != 0)) && (*(char *)(in_EAX + 300) == '\x04') ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (bool)0;
}


// Reference entry 110c4a70; body size 27 bytes.
#line 1 "ENTRY_110c4a70"

bool __fastcall FUN_110c4a70(int *param_1)

{
  uint in_EAX;
  
  if (((*param_1 == (int)((0))) && (in_EAX = (uint)(param_1[1]), in_EAX != 0)) && (*(char *)(in_EAX + 300) == '\x03') ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (bool)0;
}


// Reference entry 110c4ac0; body size 20 bytes.
#line 1 "ENTRY_110c4ac0"

bool __fastcall FUN_110c4ac0(int *param_1)

{
  int iVar1;
  
  if (*param_1 == (int)((1))) {
    iVar1 = (int)(thunk_FUN_110c2bc0(), 0);
    return (bool)(iVar1 == 0xb);
  }
  return (bool)(false);
}


// Reference entry 110c4ae0; body size 23 bytes.
#line 1 "ENTRY_110c4ae0"

bool __fastcall FUN_110c4ae0(int *param_1)

{
  uint in_EAX;
  
  if (*param_1 == (int)((1))) {
    return (bool)0;
  }
  return (bool)((*(uint *)(param_1[1] + 0x130) >> 8) & 1);
}


// Reference entry 110c4b00; body size 27 bytes.
#line 1 "ENTRY_110c4b00"

bool __fastcall FUN_110c4b00(int *param_1)

{
  uint in_EAX;
  
  if (((*param_1 == (int)((0))) && (in_EAX = (uint)(param_1[1]), in_EAX != 0)) && (*(char *)(in_EAX + 300) == '\0')) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (bool)0;
}


// Reference entry 110c5640; body size 33 bytes.
#line 1 "ENTRY_110c5640"

void __thiscall Recovered_Bulk::m_FUN_110c5640(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_110c5670(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x50);
  return;
}


// Reference entry 110c5770; body size 40 bytes.
#line 1 "ENTRY_110c5770"

int __thiscall Recovered_Bulk::m_FUN_110c5770(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10bfa4b0((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 110c57b0; body size 60 bytes.
#line 1 "ENTRY_110c57b0"

int __thiscall Recovered_Bulk::m_FUN_110c57b0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_110c5800((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = (char)(thunk_FUN_111a0940(local_4 + 0x10), 0), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 110c65a0; body size 48 bytes.
#line 1 "ENTRY_110c65a0"

undefined4 * __fastcall FUN_110c65a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x50), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 110c79f0; body size 19 bytes.
#line 1 "ENTRY_110c79f0"

void __fastcall FUN_110c79f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x50);
  }
  return;
}


// Reference entry 110c7a10; body size 28 bytes.
#line 1 "ENTRY_110c7a10"

void __fastcall FUN_110c7a10(int *param_1)

{
  thunk_FUN_110c5670(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x50);
  return;
}


// Reference entry 110c7b10; body size 19 bytes.
#line 1 "ENTRY_110c7b10"

void __fastcall FUN_110c7b10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x50);
  }
  return;
}


// Reference entry 110c7b30; body size 28 bytes.
#line 1 "ENTRY_110c7b30"

void __fastcall FUN_110c7b30(int *param_1)

{
  thunk_FUN_110c5670(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x50);
  return;
}


// Reference entry 110c7e50; body size 19 bytes.
#line 1 "ENTRY_110c7e50"

void FUN_110c7e50(void)

{
  thunk_FUN_111feb20();
  thunk_FUN_1114f320();
  return;
}


// Reference entry 110c8bc0; body size 27 bytes.
#line 1 "ENTRY_110c8bc0"

int __stdcall FUN_110c8bc0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_110c59b0<>((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 110c8ff0; body size 32 bytes.
#line 1 "ENTRY_110c8ff0"

undefined4 __thiscall Recovered_Bulk::m_FUN_110c8ff0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110c7c10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x78);
  }
  return (undefined4)(param_1);
}


// Reference entry 110c9020; body size 38 bytes.
#line 1 "ENTRY_110c9020"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110c9020(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjZPCMR);
  thunk_FUN_11172910();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110c9050; body size 42 bytes.
#line 1 "ENTRY_110c9050"

undefined4 __thiscall Recovered_Bulk::m_FUN_110c9050(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111feb20();
  thunk_FUN_1114f320();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44);
  }
  return (undefined4)(param_1);
}


// Reference entry 110c9090; body size 35 bytes.
#line 1 "ENTRY_110c9090"

undefined4 __thiscall Recovered_Bulk::m_FUN_110c9090(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110c7e70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa7c);
  }
  return (undefined4)(param_1);
}


// Reference entry 110c9180; body size 25 bytes.
#line 1 "ENTRY_110c9180"

void __fastcall FUN_110c9180(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x50), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 110c9910; body size 31 bytes.
#line 1 "ENTRY_110c9910"

int * FUN_110c9910(int *param_1)

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


// Reference entry 110c9cb0; body size 45 bytes.
#line 1 "ENTRY_110c9cb0"

void __thiscall Recovered_Bulk::m_FUN_110c9cb0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9cf0; body size 45 bytes.
#line 1 "ENTRY_110c9cf0"

void __thiscall Recovered_Bulk::m_FUN_110c9cf0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9d30; body size 45 bytes.
#line 1 "ENTRY_110c9d30"

void __thiscall Recovered_Bulk::m_FUN_110c9d30(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9d70; body size 45 bytes.
#line 1 "ENTRY_110c9d70"

void __thiscall Recovered_Bulk::m_FUN_110c9d70(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9db0; body size 45 bytes.
#line 1 "ENTRY_110c9db0"

void __thiscall Recovered_Bulk::m_FUN_110c9db0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9df0; body size 45 bytes.
#line 1 "ENTRY_110c9df0"

void __thiscall Recovered_Bulk::m_FUN_110c9df0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9e30; body size 45 bytes.
#line 1 "ENTRY_110c9e30"

void __thiscall Recovered_Bulk::m_FUN_110c9e30(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9e70; body size 45 bytes.
#line 1 "ENTRY_110c9e70"

void __thiscall Recovered_Bulk::m_FUN_110c9e70(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9eb0; body size 45 bytes.
#line 1 "ENTRY_110c9eb0"

void __thiscall Recovered_Bulk::m_FUN_110c9eb0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9ef0; body size 45 bytes.
#line 1 "ENTRY_110c9ef0"

void __thiscall Recovered_Bulk::m_FUN_110c9ef0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9f30; body size 45 bytes.
#line 1 "ENTRY_110c9f30"

void __thiscall Recovered_Bulk::m_FUN_110c9f30(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9f70; body size 45 bytes.
#line 1 "ENTRY_110c9f70"

void __thiscall Recovered_Bulk::m_FUN_110c9f70(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9fb0; body size 45 bytes.
#line 1 "ENTRY_110c9fb0"

void __thiscall Recovered_Bulk::m_FUN_110c9fb0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110c9ff0; body size 45 bytes.
#line 1 "ENTRY_110c9ff0"

void __thiscall Recovered_Bulk::m_FUN_110c9ff0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 110ca040; body size 43 bytes.
#line 1 "ENTRY_110ca040"

int * __stdcall FUN_110ca040(int *param_1, int *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_1);
}


// Reference entry 110ca230; body size 44 bytes.
#line 1 "ENTRY_110ca230"

undefined1 __fastcall FUN_110ca230(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    cVar1 = (char)(FUN_1006f9dd(), 0);
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_11458870(), 0);
      if (cVar1 != '\0') {
        return (undefined1)(1);
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 110ca620; body size 33 bytes.
#line 1 "ENTRY_110ca620"

void __fastcall FUN_110ca620(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_110c5670(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 110ca780; body size 47 bytes.
#line 1 "ENTRY_110ca780"

undefined4 FUN_110ca780(undefined4 *param_1)

{
  int iVar1;
  
  if (((char *)*param_1 != (char *)((0x0))) && (param_1[1] == 0xb)) {
    iVar1 = (int)(strncmp((char *)*param_1,"x-file-cifs",0xb), 0);
    if (iVar1 == 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110cad70; body size 61 bytes.
#line 1 "ENTRY_110cad70"

void __thiscall Recovered_Bulk::m_FUN_110cad70(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[5]);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  param_1[5] = (int)(0);
  (*(code ***)param_1)[47](param_2);
  return;
}


// Reference entry 110cadc0; body size 24 bytes.
#line 1 "ENTRY_110cadc0"

undefined4 __fastcall FUN_110cadc0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined4)(thunk_FUN_11456830(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(2);
}


// Reference entry 110caef0; body size 43 bytes.
#line 1 "ENTRY_110caef0"

void __fastcall FUN_110caef0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110caf30; body size 43 bytes.
#line 1 "ENTRY_110caf30"

void __fastcall FUN_110caf30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110caf70; body size 43 bytes.
#line 1 "ENTRY_110caf70"

void __fastcall FUN_110caf70(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cafb0; body size 43 bytes.
#line 1 "ENTRY_110cafb0"

void __fastcall FUN_110cafb0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110caff0; body size 43 bytes.
#line 1 "ENTRY_110caff0"

void __fastcall FUN_110caff0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb030; body size 43 bytes.
#line 1 "ENTRY_110cb030"

void __fastcall FUN_110cb030(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb070; body size 43 bytes.
#line 1 "ENTRY_110cb070"

void __fastcall FUN_110cb070(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb0b0; body size 43 bytes.
#line 1 "ENTRY_110cb0b0"

void __fastcall FUN_110cb0b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb0f0; body size 43 bytes.
#line 1 "ENTRY_110cb0f0"

void __fastcall FUN_110cb0f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb130; body size 43 bytes.
#line 1 "ENTRY_110cb130"

void __fastcall FUN_110cb130(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb170; body size 43 bytes.
#line 1 "ENTRY_110cb170"

void __fastcall FUN_110cb170(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb1b0; body size 43 bytes.
#line 1 "ENTRY_110cb1b0"

void __fastcall FUN_110cb1b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb1f0; body size 43 bytes.
#line 1 "ENTRY_110cb1f0"

void __fastcall FUN_110cb1f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb230; body size 43 bytes.
#line 1 "ENTRY_110cb230"

void __fastcall FUN_110cb230(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cb270; body size 43 bytes.
#line 1 "ENTRY_110cb270"

void __fastcall FUN_110cb270(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110cc260; body size 18 bytes.
#line 1 "ENTRY_110cc260"

undefined4 __stdcall FUN_110cc260(undefined4 param_1)

{
  thunk_FUN_110cc7f0<>(param_1,0);
  return (undefined4)(param_1);
}


// Reference entry 110cdca0; body size 17 bytes.
#line 1 "ENTRY_110cdca0"

undefined4 __fastcall FUN_110cdca0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x714));
  }
  return (undefined4)(0);
}


// Reference entry 110ce370; body size 18 bytes.
#line 1 "ENTRY_110ce370"

undefined2 __fastcall FUN_110ce370(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (undefined2)(*(undefined2 *)(*(int *)(param_1 + 0x1c) + 0x56a));
  }
  return (undefined2)(0);
}


// Reference entry 110ceab0; body size 18 bytes.
#line 1 "ENTRY_110ceab0"

undefined4 __stdcall FUN_110ceab0(undefined4 param_1)

{
  thunk_FUN_110cc7f0<>(param_1,4);
  return (undefined4)(param_1);
}


// Reference entry 110cead0; body size 43 bytes.
#line 1 "ENTRY_110cead0"

char * __fastcall FUN_110cead0(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 0x520) == '\0') && (*(int *)(param_1 + 0x1c) != 0)) &&
     (pcVar1 = (char *)((char *)thunk_FUN_114574f0(), 0), *pcVar1 != (char)(('\0')))) {
    return (char *)(pcVar1);
  }
  return (char *)((char *)(param_1 + 0xb8));
}


// Reference entry 110d1d10; body size 18 bytes.
#line 1 "ENTRY_110d1d10"

undefined4 __stdcall FUN_110d1d10(undefined4 param_1)

{
  thunk_FUN_110cc7f0<>(param_1,5);
  return (undefined4)(param_1);
}


// Reference entry 110d2700; body size 21 bytes.
#line 1 "ENTRY_110d2700"

undefined1 __fastcall FUN_110d2700(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11456fc0(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d2720; body size 31 bytes.
#line 1 "ENTRY_110d2720"

bool __fastcall FUN_110d2720(int param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined4)(thunk_FUN_11458e90(), 0);
    uVar2 = (uint)(thunk_FUN_11457670(uVar1), 0);
    return (uint)(uVar2);
  }
  return (bool)0;
}


// Reference entry 110d2e80; body size 33 bytes.
#line 1 "ENTRY_110d2e80"

undefined4
__stdcall FUN_110d2e80(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = (undefined1)(0);
  thunk_FUN_1145c250(param_3, "http-get:*:audio/mp3:*,x-file-cifs:*:audio/mp3:*,http-get:*:audio/mp4:*,x-file-cifs:*:audio/mp4:*,http-get:*:audio/x-m4a:*,x-file-cifs:*:audio/x-m4a:*,http-get:*:audio/mpeg:*,x-file-cifs:*:audio/mpeg:*,http-get:*:audio/mpegurl:*,x-file-cifs:*:audio/mpegurl:*,file:*:audio/mpegurl:*,http-get:*:audio/x-mpegurl:*,x-file-cifs:*:audio/x-mpegurl:*,http-get:*:application/x-mpegurl:*,x-file-cifs:*:application/x-mpegurl:*,http-get:*:application/vnd.apple.mpegurl:*,x-file-cifs:*:application/vnd.apple.mpegurl:*,http-get:*:application/dash+xml:*,x-file-cifs:*:application/dash+xml:*,http-get:*:audio/mpeg3:*,x-file-cifs:*:audio/mpeg3:*,http-get:*:audio/wav:*,x-file-cifs:*:audio/wav:*,http-get:*:audio/x-wav:*,x-file-cifs:*:audio/x-wav:*,http-get:*:audio/wma:*,x-file-cifs:*:audio/wma:*,http-get:*:audio/x-ms-wma:*,x-file-cifs:*:audio/x-ms-wma:*,http-get:*:audio/aiff:*,x-file-cifs:*:audio/aiff:*,http-get:*:audio/x-aiff:*,x-file-cifs:*:audio/x-aiff:*,http-get:*:audio/flac:*,x-file-cifs:*:audio/flac:*,http-get:*:application/ogg:*,x-file-cifs:*:application/ogg:*,http-get:*:audio/ogg:*,x-file-cifs:*:audio/ogg:*,sonos.com-mms:*:audio/x-ms-wma:*,sonos.com-http:*:audio/mp3:*,sonos.com-http:*:audio/mpeg:*,sonos.com-http:*:audio/mpeg3:*,sonos.com-http:*:audio/wma:*,sonos.com-http:*:audio/mp4:*,sonos.com-http:*:audio/x-m4a:*,sonos.com-http:*:audio/wav:*,sonos.com-http:*:audio/aiff:*,sonos.com-http:*:audio/flac:*,sonos.com-http:*:application/ogg:*,sonos.com-http:*:application/x-mpegURL:*,sonos.com-http:*:application/dash+xml:*,sonos.com-spotify:*:audio/x-spotify:*,sonos.com-rtrecent:*:audio/x-sonos-recent:*,x-rincon:*:*:*,x-rincon-mp3radio:*:*:*,x-rincon-playlist:*:*:*,x-rincon-queue:*:*:*,x-rincon-stream:*:*:*,x-sonosapi-stream:*:*:*,x-sonosapi-hls:*:*:*,x-sonosapi-hls-static:*:*:*,x-sonosapi-radio:*:audio/x-sonosapi-radio:*,x-rincon-cpcontainer:*:*:*,"
                     ,param_4);
  return (undefined4)(0);
}


// Reference entry 110d2ec0; body size 43 bytes.
#line 1 "ENTRY_110d2ec0"

void __thiscall Recovered_Bulk::m_FUN_110d2ec0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined2 uVar1;
  undefined1 local_30 [48];
  
  thunk_FUN_11245bb0(param_2,(uint)&local_30);
  uVar1 = (undefined2)(thunk_FUN_11246be0((uint)&local_30), 0);
  *(undefined2*)(param_1 + 0x74) = (undefined2)(uVar1);
  return;
}


// Reference entry 110d3030; body size 43 bytes.
#line 1 "ENTRY_110d3030"

void __thiscall Recovered_Bulk::m_FUN_110d3030(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined2 uVar1;
  undefined1 local_30 [48];
  
  thunk_FUN_11245bb0(param_2,(uint)&local_30);
  uVar1 = (undefined2)(thunk_FUN_112470f0((uint)&local_30), 0);
  *(undefined2*)(param_1 + 0x70) = (undefined2)(uVar1);
  return;
}


// Reference entry 110d3070; body size 43 bytes.
#line 1 "ENTRY_110d3070"

void __thiscall Recovered_Bulk::m_FUN_110d3070(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined2 uVar1;
  undefined1 local_30 [48];
  
  thunk_FUN_11245bb0(param_2,(uint)&local_30);
  uVar1 = (undefined2)(thunk_FUN_112471a0((uint)&local_30), 0);
  *(undefined2*)(param_1 + 0x72) = (undefined2)(uVar1);
  return;
}


// Reference entry 110d3140; body size 35 bytes.
#line 1 "ENTRY_110d3140"

undefined1 __fastcall FUN_110d3140(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_1127caf0(), 0);
  if ((cVar1 != '\0') && (1 < *(uint *)(param_1 + 0x568))) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 110d4080; body size 62 bytes.
#line 1 "ENTRY_110d4080"

undefined1 __fastcall FUN_110d4080(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xa70) == '\0') {
    return (undefined1)(0);
  }
  cVar1 = (char)(thunk_FUN_1127caf0(), 0);
  if (((cVar1 != '\0') && (1 < *(uint *)(param_1 + 0x568))) &&
     (cVar1 = (char)(thunk_FUN_1127cb00(), 0), cVar1 != '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 110d55a0; body size 53 bytes.
#line 1 "ENTRY_110d55a0"

undefined1 __fastcall FUN_110d55a0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_1127caf0(), 0);
  if ((cVar1 != '\0') && (1 < *(uint *)(param_1 + 0x568))) {
    cVar1 = (char)(thunk_FUN_1127cb00(), 0);
    if (cVar1 != '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 110d5760; body size 19 bytes.
#line 1 "ENTRY_110d5760"

undefined1 __fastcall FUN_110d5760(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return (undefined1)(1);
  }
  uVar1 = (undefined1)(FUN_1122c9e0(), 0);
  return (undefined1)(uVar1);
}


// Reference entry 110d5780; body size 40 bytes.
#line 1 "ENTRY_110d5780"

bool __fastcall FUN_110d5780(int param_1)

{
  char cVar1;
  
  thunk_FUN_1109f7f0();
  cVar1 = (char)(thunk_FUN_110a0140(), 0);
  if (cVar1 != '\0') {
    return (bool)(*(int *)(param_1 + 0x538) == 5);
  }
  return (bool)(*(int *)(param_1 + 0x538) == 3);
}


// Reference entry 110d67a0; body size 58 bytes.
#line 1 "ENTRY_110d67a0"

void __stdcall FUN_110d67a0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1145c720(param_1,param_2,&DAT_119c41b0, (&PTR_s_A_ALBUMARTIST_1211dae0)[param_3 * 4]), 0);
  thunk_FUN_11247e90(param_4,iVar1 + param_1,param_2 - iVar1);
  return;
}


// Reference entry 110d6ed0; body size 17 bytes.
#line 1 "ENTRY_110d6ed0"

void __stdcall FUN_110d6ed0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_11069340(param_1,0);
  return;
}


// Reference entry 110d7950; body size 34 bytes.
#line 1 "ENTRY_110d7950"

void __thiscall Recovered_Bulk::m_FUN_110d7950(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x5c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x5c), 0);
  }
  thunk_FUN_1127cc80(param_2,puVar1,0);
  return;
}


// Reference entry 110d7a50; body size 24 bytes.
#line 1 "ENTRY_110d7a50"

void __thiscall Recovered_Bulk::m_FUN_110d7a50(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + 0x4fa,param_2,0x24);
  return;
}


// Reference entry 110d7ad0; body size 27 bytes.
#line 1 "ENTRY_110d7ad0"

void __thiscall Recovered_Bulk::m_FUN_110d7ad0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + 0xf9,param_2,0x401);
  return;
}


// Reference entry 110d8470; body size 24 bytes.
#line 1 "ENTRY_110d8470"

void __thiscall Recovered_Bulk::m_FUN_110d8470(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1145c250(param_1 + 0xb8,param_2,0x41);
  return;
}


// Reference entry 110d88a0; body size 21 bytes.
#line 1 "ENTRY_110d88a0"

undefined1 __fastcall FUN_110d88a0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_114586f0(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d88c0; body size 21 bytes.
#line 1 "ENTRY_110d88c0"

undefined1 __fastcall FUN_110d88c0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458720(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d88e0; body size 21 bytes.
#line 1 "ENTRY_110d88e0"

undefined1 __fastcall FUN_110d88e0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(FUN_1009070f(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8900; body size 21 bytes.
#line 1 "ENTRY_110d8900"

undefined1 __fastcall FUN_110d8900(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11457040(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8930; body size 21 bytes.
#line 1 "ENTRY_110d8930"

undefined1 __fastcall FUN_110d8930(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458820(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8950; body size 21 bytes.
#line 1 "ENTRY_110d8950"

undefined1 __fastcall FUN_110d8950(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458830(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8970; body size 21 bytes.
#line 1 "ENTRY_110d8970"

undefined1 __fastcall FUN_110d8970(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(FUN_1006adb1(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d89b0; body size 21 bytes.
#line 1 "ENTRY_110d89b0"

undefined1 __fastcall FUN_110d89b0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458880(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d89d0; body size 21 bytes.
#line 1 "ENTRY_110d89d0"

undefined1 __fastcall FUN_110d89d0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_114588f0(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d89f0; body size 51 bytes.
#line 1 "ENTRY_110d89f0"

undefined1 __fastcall FUN_110d89f0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return (undefined1)(0);
  }
  cVar1 = (char)(thunk_FUN_114588c0(), 0);
  if ((cVar1 == '\0') && (cVar1 = (char)(FUN_1006adb1(), 0), cVar1 == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 110d8a30; body size 21 bytes.
#line 1 "ENTRY_110d8a30"

undefined1 __fastcall FUN_110d8a30(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458910(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8a50; body size 21 bytes.
#line 1 "ENTRY_110d8a50"

undefined1 __fastcall FUN_110d8a50(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458940(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8c40; body size 21 bytes.
#line 1 "ENTRY_110d8c40"

undefined1 __fastcall FUN_110d8c40(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458970(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8c60; body size 21 bytes.
#line 1 "ENTRY_110d8c60"

undefined1 __fastcall FUN_110d8c60(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_114589e0(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8c80; body size 21 bytes.
#line 1 "ENTRY_110d8c80"

undefined1 __fastcall FUN_110d8c80(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_114589f0(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8cb0; body size 21 bytes.
#line 1 "ENTRY_110d8cb0"

undefined1 __fastcall FUN_110d8cb0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458a00(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8d00; body size 21 bytes.
#line 1 "ENTRY_110d8d00"

undefined1 __fastcall FUN_110d8d00(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(FUN_1009a598(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8d20; body size 21 bytes.
#line 1 "ENTRY_110d8d20"

undefined1 __fastcall FUN_110d8d20(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458a30(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8d40; body size 21 bytes.
#line 1 "ENTRY_110d8d40"

undefined1 __fastcall FUN_110d8d40(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458a40(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8d60; body size 21 bytes.
#line 1 "ENTRY_110d8d60"

undefined1 __fastcall FUN_110d8d60(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458a50(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8d80; body size 21 bytes.
#line 1 "ENTRY_110d8d80"

undefined1 __fastcall FUN_110d8d80(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458a60(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8dc0; body size 21 bytes.
#line 1 "ENTRY_110d8dc0"

undefined1 __fastcall FUN_110d8dc0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined1)(thunk_FUN_11458a90(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 110d8de0; body size 31 bytes.
#line 1 "ENTRY_110d8de0"

bool __fastcall FUN_110d8de0(int param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined4)(thunk_FUN_11458e90(), 0);
    uVar2 = (uint)(thunk_FUN_11458220(uVar1), 0);
    return (uint)(uVar2);
  }
  return (bool)0;
}


// Reference entry 110d8e10; body size 46 bytes.
#line 1 "ENTRY_110d8e10"

undefined4 __fastcall FUN_110d8e10(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined4)(thunk_FUN_11458e90(), 0);
    switch(uVar1) {
    case 4:
    case 6:
    case 0xb:
    case 0x13:
    case 0x1d:
    case 0x23:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2e:
    case 0x30:
    case 0x37:
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 110d9b30; body size 21 bytes.
#line 1 "ENTRY_110d9b30"

undefined4 __fastcall FUN_110d9b30(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = (undefined4)(thunk_FUN_11458e90(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 110d9bc0; body size 63 bytes.
#line 1 "ENTRY_110d9bc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110d9bc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(param_2,"MediaServer");
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjMediaServer);
  param_1[5] = (undefined4)(0);
  thunk_FUN_1145c250(param_1 + 6,param_3,0x401);
  return (undefined4 *)(param_1);
}


// Reference entry 110da760; body size 45 bytes.
#line 1 "ENTRY_110da760"

int __fastcall FUN_110da760(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x20) + 0x58))(), 0);
    uVar2 = (uint)((**(code **)(**(int **)(param_1 + 0x20) + 0x58))(), 0);
    return (int)((uVar2 & 1) + ((uVar1 & 0xffffff7f) - 1));
  }
  return (int)(0);
}


// Reference entry 110db240; body size 40 bytes.
#line 1 "ENTRY_110db240"

int * __thiscall Recovered_Bulk::m_FUN_110db240(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x1c));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 110db5c0; body size 34 bytes.
#line 1 "ENTRY_110db5c0"

undefined4 __fastcall FUN_110db5c0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((*(code ***)param_1)[21](), 0);
  if (iVar1 == 1) {
    iVar1 = (int)((*(code ***)param_1)[23](), 0);
    if ((*(byte *)(iVar1 + 4) & 1) != 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 110dc6d0; body size 18 bytes.
#line 1 "ENTRY_110dc6d0"

void __fastcall FUN_110dc6d0(int param_1)

{
  if (*(void **)(param_1 + 8) != (char *)(((param_1 + 0xc)))) {
    free(*(void **)(param_1 + 8));
  }
  return;
}


// Reference entry 110dc760; body size 58 bytes.
#line 1 "ENTRY_110dc760"

void __fastcall FUN_110dc760(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLookupMetadataAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RLookupMetadataAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RLookupMetadataAIOOp);
  param_1[0x970] = (undefined4)((uint)&ghidra_vftable_RLookupMetadataAIOOp);
  thunk_FUN_101ba0d0();
  thunk_FUN_110a9ef0();
  thunk_FUN_11261f10();
  return;
}


// Reference entry 110dc880; body size 19 bytes.
#line 1 "ENTRY_110dc880"

void __fastcall FUN_110dc880(undefined4 *param_1)

{
  thunk_FUN_111392b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RefCountBase);
  return;
}


// Reference entry 110dc8a0; body size 34 bytes.
#line 1 "ENTRY_110dc8a0"

void __fastcall FUN_110dc8a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosAAURITranslator);
  param_1[0x1805] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncURITranslator);
  return;
}


// Reference entry 110dcb50; body size 32 bytes.
#line 1 "ENTRY_110dcb50"

undefined4 __thiscall Recovered_Bulk::m_FUN_110dcb50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110dc560();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4)(param_1);
}


// Reference entry 110dcb80; body size 36 bytes.
#line 1 "ENTRY_110dcb80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110dcb80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncURITranslator);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2008);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110dcbb0; body size 33 bytes.
#line 1 "ENTRY_110dcbb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110dcbb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPMetadataFormatter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110dcbe0; body size 52 bytes.
#line 1 "ENTRY_110dcbe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110dcbe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetFormattedMetadataOperation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RGetFormattedMetadataOperation);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RCPMetadataFormatter);
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110dcd90; body size 41 bytes.
#line 1 "ENTRY_110dcd90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110dcd90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111392b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RefCountBase);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,100);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110dcdd0; body size 59 bytes.
#line 1 "ENTRY_110dcdd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110dcdd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosAAURITranslator);
  param_1[0x1805] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncURITranslator);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6020);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110dce20; body size 58 bytes.
#line 1 "ENTRY_110dce20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110dce20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddURIToQueueAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110dce70; body size 33 bytes.
#line 1 "ENTRY_110dce70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110dce70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RefCountBase);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110de320; body size 58 bytes.
#line 1 "ENTRY_110de320"

uint __fastcall FUN_110de320(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x1888));
  if ((uVar1 != 0) && (0x1d < uVar1)) {
    if (0xe10 < uVar1) {
      return (uint)(0xe10);
    }
    return (uint)(uVar1);
  }
  uVar1 = (uint)((uint)*(ushort *)(param_1 + 0x169a));
  if ((uVar1 == 0) || (uVar1 < 0x1e)) {
    uVar1 = (uint)(0x1e);
  }
  else if (0xe10 < uVar1) {
    return (uint)(0xe10);
  }
  return (uint)(uVar1);
}


// Reference entry 110de640; body size 45 bytes.
#line 1 "ENTRY_110de640"

int __fastcall FUN_110de640(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x6018));
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0xb5) != '\0') {
      iVar1 = (int)(0);
    }
    return (int)(iVar1);
  }
  thunk_FUN_112af4e0("sonoscp",2,"Hi-res art translator, getting Op before the Op is set");
  return (int)(0);
}


// Reference entry 110def50; body size 22 bytes.
#line 1 "ENTRY_110def50"

undefined4 __fastcall FUN_110def50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1994) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(FUN_110b5990(), 0);
  return (undefined4)(uVar1);
}


// Reference entry 110df060; body size 40 bytes.
#line 1 "ENTRY_110df060"

int * __thiscall Recovered_Bulk::m_FUN_110df060(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 110e09c0; body size 34 bytes.
#line 1 "ENTRY_110e09c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_110e09c0(undefined4 param_2,short *param_3)
{
  int *param_1 = (int *)this;
  param_1[0xb] = (int)(0);
  if (*param_3 == (short)((0))) {
    (*(code ***)param_1)[9](param_1[10],param_1 + 8);
  }
  return (undefined4)(1);
}


// Reference entry 110e1d30; body size 51 bytes.
#line 1 "ENTRY_110e1d30"

void __fastcall FUN_110e1d30(int param_1)

{
  int iVar1;
  
  *(undefined1*)(param_1 + 0x188c) = (undefined1)(0);
  *(undefined1**)(param_1 + 0x34) = (undefined1 *)(LAB_1003ddb6);
  iVar1 = (int)(thunk_FUN_1109f7f0(), 0);
  thunk_FUN_111f4c10(iVar1 + 0xe1);
  *(uint*)(param_1 + 0x1888) = (uint)((uint)*(ushort *)(param_1 + 0x169a));
  return;
}


// Reference entry 110e20d0; body size 37 bytes.
#line 1 "ENTRY_110e20d0"

void __thiscall Recovered_Bulk::m_FUN_110e20d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  
  if ((undefined4 *)(param_2) != (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x188c));
    for (iVar1 = (int)(0x40); iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(*param_2);
      param_2 = (undefined4 *)(param_2 + 1);
      puVar2 = (undefined4 *)(puVar2 + 1);
    }
    *(undefined1*)(param_1 + 0x198b) = (undefined1)(0);
  }
  return;
}


// Reference entry 110e28d0; body size 24 bytes.
#line 1 "ENTRY_110e28d0"

undefined4 __fastcall FUN_110e28d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x198c) != 0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(*(int *)(*(int *)(param_1 + 0x198c) + 8) + 4))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 110e2c60; body size 43 bytes.
#line 1 "ENTRY_110e2c60"

void __fastcall FUN_110e2c60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(char *)(param_1 + 0x1964) == '\0') {
    *(undefined1*)(param_1 + 0x1964) = (undefined1)(1);
    thunk_FUN_110828b0();
    thunk_FUN_110944c0();
    return;
  }
  return;
}


// Reference entry 110e3630; body size 30 bytes.
#line 1 "ENTRY_110e3630"

void __thiscall Recovered_Bulk::m_FUN_110e3630(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x28) + 4))(param_1 + 8,param_2), 0);
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 110e3660; body size 38 bytes.
#line 1 "ENTRY_110e3660"

void __fastcall FUN_110e3660(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_110b3620<>(-(uint)(param_1 != 0) & param_1 + 0x1cU,param_1 + 0x24,param_1 + 0x20b6,0,1);
  return;
}


// Reference entry 110e3bf0; body size 48 bytes.
#line 1 "ENTRY_110e3bf0"

int __fastcall FUN_110e3bf0(int param_1)

{
  if (*(int *)(param_1 + 0x6018) != 0) {
    return (int)(*(int *)(param_1 + 0x6018) + 0xb5);
  }
  thunk_FUN_112af4e0("sonoscp",2, "Hi-res art translator, getting translated URI before the Op is set");
  return (int)(param_1 + 0x2010);
}


// Reference entry 110e4390; body size 28 bytes.
#line 1 "ENTRY_110e4390"

void __fastcall FUN_110e4390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  thunk_FUN_111c0af0<>();
  return;
}


// Reference entry 110e43f0; body size 38 bytes.
#line 1 "ENTRY_110e43f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110e43f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110e4420; body size 35 bytes.
#line 1 "ENTRY_110e4420"

undefined4 __thiscall Recovered_Bulk::m_FUN_110e4420(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110e4170();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4)(param_1);
}


// Reference entry 110e4450; body size 58 bytes.
#line 1 "ENTRY_110e4450"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110e4450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDBrowseAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110e70a0; body size 56 bytes.
#line 1 "ENTRY_110e70a0"

void __fastcall FUN_110e70a0(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x5c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x5c), 0);
  }
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x60) != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x60), 0);
  }
  thunk_FUN_110b3620<>(-(uint)(param_1 != 0) & param_1 + 0x1cU,puVar2,puVar1,0,0);
  return;
}


// Reference entry 110e7d10; body size 45 bytes.
#line 1 "ENTRY_110e7d10"

undefined1 FUN_110e7d10(char param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_1106d6f0(), 0);
  if ((cVar1 == '\0') && (cVar1 = (char)(thunk_FUN_1106f140(), 0), cVar1 == '\0')) {
    return (undefined1)(0);
  }
  if (param_1 != '\0') {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 110e9120; body size 44 bytes.
#line 1 "ENTRY_110e9120"

void __fastcall FUN_110e9120(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RWrapperBrowseOp);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RWrapperBrowseOp);
  if ((undefined4 *)param_1[4] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperation);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperationCB);
  return;
}


// Reference entry 110e9160; body size 52 bytes.
#line 1 "ENTRY_110e9160"

void __fastcall FUN_110e9160(undefined4 *param_1)

{
  thunk_FUN_11202570();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RWrapperBrowseOp);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RWrapperBrowseOp);
  if ((undefined4 *)param_1[4] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperation);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperationCB);
  return;
}


// Reference entry 110e9320; body size 52 bytes.
#line 1 "ENTRY_110e9320"

void __fastcall FUN_110e9320(undefined4 *param_1)

{
  thunk_FUN_111d3d00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RWrapperBrowseOp);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RWrapperBrowseOp);
  if ((undefined4 *)param_1[4] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperation);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperationCB);
  return;
}


// Reference entry 110e9370; body size 60 bytes.
#line 1 "ENTRY_110e9370"

void __fastcall FUN_110e9370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjRadioTimeCP);
  if ((undefined4 *)param_1[0x31] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[0x31])(1);
    param_1[0x31] = (undefined4)(0);
  }
  param_1[0x2b] = (undefined4)((uint)&ghidra_vftable_RRadioTimeContentProvider);
  thunk_FUN_111feb50();
  thunk_FUN_11167180();
  return;
}


// Reference entry 110e9480; body size 33 bytes.
#line 1 "ENTRY_110e9480"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110e9480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperation);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110e94b0; body size 35 bytes.
#line 1 "ENTRY_110e94b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_110e94b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x5d4);
  }
  return (undefined4)(param_1);
}


// Reference entry 110e94e0; body size 38 bytes.
#line 1 "ENTRY_110e94e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110e94e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIdPrefixerCB);
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110e9510; body size 38 bytes.
#line 1 "ENTRY_110e9510"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110e9510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RRadioTimeContentProvider);
  thunk_FUN_111feb50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110ea940; body size 50 bytes.
#line 1 "ENTRY_110ea940"

void __fastcall FUN_110ea940(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0xfe);
  thunk_FUN_110c2c60(0xfe);
  iVar1 = (int)(thunk_FUN_110c20d0(uVar2), 0);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0xe4))();
                    
                    
  (**(code **)(*(int *)param_1[0x31] + 0x40))();
  return;
}


// Reference entry 110eb700; body size 18 bytes.
#line 1 "ENTRY_110eb700"

undefined4 __stdcall FUN_110eb700(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(0);
  return (undefined4)(1000);
}


// Reference entry 110ec740; body size 48 bytes.
#line 1 "ENTRY_110ec740"

void __fastcall FUN_110ec740(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0xfe);
  thunk_FUN_110c2c60(0xfe);
  iVar1 = (int)(thunk_FUN_110c20d0(uVar2), 0);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0xe4))();
                    
                    
  (**(code **)(*(int *)param_1[0x31] + 0x78))();
  return;
}


// Reference entry 110ec780; body size 18 bytes.
#line 1 "ENTRY_110ec780"

undefined4 __fastcall FUN_110ec780(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 4))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 110ec7a0; body size 19 bytes.
#line 1 "ENTRY_110ec7a0"

int __fastcall FUN_110ec7a0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 4))(), 0);
  return (int)(iVar1 + *(int *)(param_1 + 0x1710));
}


// Reference entry 110ecc20; body size 50 bytes.
#line 1 "ENTRY_110ecc20"

undefined4 __fastcall FUN_110ecc20(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0xfe);
  thunk_FUN_110c2c60(0xfe);
  iVar1 = (int)(thunk_FUN_110c20d0(uVar2), 0);
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  (**(code **)(*param_1 + 0xe4))();
  return (undefined4)(*(undefined4 *)(param_1[0x31] + 0x1994));
}


// Reference entry 110ecd80; body size 19 bytes.
#line 1 "ENTRY_110ecd80"

int __fastcall FUN_110ecd80(int *param_1)

{
  (*(code ***)param_1)[57]();
  return (int)(param_1[0x31]);
}


// Reference entry 110ecda0; body size 18 bytes.
#line 1 "ENTRY_110ecda0"

undefined4 __fastcall FUN_110ecda0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 8))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 110ecdc0; body size 19 bytes.
#line 1 "ENTRY_110ecdc0"

int __fastcall FUN_110ecdc0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 8))(), 0);
  return (int)(iVar1 + *(int *)(param_1 + 0x170c));
}


// Reference entry 110ecde0; body size 23 bytes.
#line 1 "ENTRY_110ecde0"

void __stdcall FUN_110ecde0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1106a8d0(param_2,param_1,param_3);
  return;
}


// Reference entry 110ecfe0; body size 63 bytes.
#line 1 "ENTRY_110ecfe0"

undefined4 FUN_110ecfe0(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)(strncmp(param_1,"R:0/",4), 0);
  if (iVar1 == 0) {
    return (undefined4)(1);
  }
  if ((*param_1 == (char)(('H'))) && (iVar1 = (int)(strncmp(param_1 + 1,"R:0/",4), 0), iVar1 == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 110ed0b0; body size 24 bytes.
#line 1 "ENTRY_110ed0b0"

void __thiscall Recovered_Bulk::m_FUN_110ed0b0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 0x2c,param_2,0x80);
  return;
}


// Reference entry 110ed2d0; body size 60 bytes.
#line 1 "ENTRY_110ed2d0"

void __thiscall Recovered_Bulk::m_FUN_110ed2d0(undefined1 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0xfe);
  thunk_FUN_110c2c60(0xfe);
  iVar1 = (int)(thunk_FUN_110c20d0(uVar2), 0);
  if (iVar1 == 0) {
    *param_2 = (undefined1)(0);
    return;
  }
  (**(code **)(*param_1 + 0xe4))();
                    
                    
  (**(code **)(*(int *)param_1[0x31] + 0x8c))();
  return;
}


// Reference entry 110ed320; body size 21 bytes.
#line 1 "ENTRY_110ed320"

void __fastcall FUN_110ed320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  int iStack00000004;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
                    
                    
    iStack00000004 = (int)(param_1);
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    return;
  }
  return;
}


// Reference entry 110ed5b0; body size 23 bytes.
#line 1 "ENTRY_110ed5b0"

void __thiscall Recovered_Bulk::m_FUN_110ed5b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + -8) + 4))(param_1 + -0xc,param_3);
  return;
}


// Reference entry 110ed980; body size 17 bytes.
#line 1 "ENTRY_110ed980"

undefined4 *  __stdcall FUN_110ed980(undefined1 *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (undefined1)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110edc00; body size 26 bytes.
#line 1 "ENTRY_110edc00"

void __thiscall Recovered_Bulk::m_FUN_110edc00(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
                    
                    
  (**(code **)(**(int **)(param_1 + 0x10) + 0x10))();
  return;
}


// Reference entry 110ede50; body size 42 bytes.
#line 1 "ENTRY_110ede50"

char * FUN_110ede50(char *param_1,char *param_2,undefined4 param_3)

{
  if (*param_1 == (char)(('H'))) {
    param_1 = (char *)(param_1 + 1);
    thunk_FUN_112462e0(&param_1,1,param_2,param_3);
    param_1 = (char *)(param_2);
  }
  return (char *)(param_1);
}


// Reference entry 110ee040; body size 33 bytes.
#line 1 "ENTRY_110ee040"

void __thiscall Recovered_Bulk::m_FUN_110ee040(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_110ee070(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 110ee0d0; body size 60 bytes.
#line 1 "ENTRY_110ee0d0"

int __thiscall Recovered_Bulk::m_FUN_110ee0d0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_110ee120((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = (char)(thunk_FUN_111a0940(local_4 + 0x10), 0), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 110ee540; body size 48 bytes.
#line 1 "ENTRY_110ee540"

undefined4 * __fastcall FUN_110ee540(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 110f0440; body size 19 bytes.
#line 1 "ENTRY_110f0440"

void __fastcall FUN_110f0440(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 110f0460; body size 28 bytes.
#line 1 "ENTRY_110f0460"

void __fastcall FUN_110f0460(int *param_1)

{
  thunk_FUN_110ee070(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 110f0490; body size 38 bytes.
#line 1 "ENTRY_110f0490"

void __fastcall FUN_110f0490(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10bfb550();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x18);
  }
  return;
}


// Reference entry 110f04c0; body size 19 bytes.
#line 1 "ENTRY_110f04c0"

void __fastcall FUN_110f04c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 110f04e0; body size 28 bytes.
#line 1 "ENTRY_110f04e0"

void __fastcall FUN_110f04e0(int *param_1)

{
  thunk_FUN_110ee070(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 110f0a60; body size 38 bytes.
#line 1 "ENTRY_110f0a60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f0a60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjDBAdapter);
  thunk_FUN_111a4f00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f0df0; body size 25 bytes.
#line 1 "ENTRY_110f0df0"

void __fastcall FUN_110f0df0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 110f1790; body size 59 bytes.
#line 1 "ENTRY_110f1790"

void __thiscall Recovered_Bulk::m_FUN_110f1790(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
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


// Reference entry 110f24b0; body size 43 bytes.
#line 1 "ENTRY_110f24b0"

void __fastcall FUN_110f24b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 110f2960; body size 19 bytes.
#line 1 "ENTRY_110f2960"

undefined4 __fastcall FUN_110f2960(int param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    thunk_FUN_110f3120();
  }
  return (undefined4)(*(undefined4 *)(param_1 + 0x30));
}


// Reference entry 110f2ac0; body size 39 bytes.
#line 1 "ENTRY_110f2ac0"

void __thiscall Recovered_Bulk::m_FUN_110f2ac0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 0x28) == '\0') {
    thunk_FUN_110f3120();
  }
  thunk_FUN_1138fad0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),param_2);
  *(int*)(param_1 + 0x38) = (int)(*(int *)(param_1 + 0x38) + 1);
  return;
}


// Reference entry 110f2af0; body size 59 bytes.
#line 1 "ENTRY_110f2af0"

void __thiscall Recovered_Bulk::m_FUN_110f2af0(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    thunk_FUN_110f3120();
  }
  thunk_FUN_1138fd50(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),param_2, (int)strlen((const char *)param_2),0);
  *(int*)(param_1 + 0x38) = (int)(*(int *)(param_1 + 0x38) + 1);
  return;
}


// Reference entry 110f2b40; body size 59 bytes.
#line 1 "ENTRY_110f2b40"

void __thiscall Recovered_Bulk::m_FUN_110f2b40(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    thunk_FUN_110f3120();
  }
  thunk_FUN_1138fd50(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),param_2, (int)strlen((const char *)param_2),0);
  *(int*)(param_1 + 0x38) = (int)(*(int *)(param_1 + 0x38) + 1);
  return;
}


// Reference entry 110f53b0; body size 29 bytes.
#line 1 "ENTRY_110f53b0"

undefined4 FUN_110f53b0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (undefined4)(1);
  case 1:
  case 2:
  case 3:
    return (undefined4)(0);
  default:
    return (undefined4)(0xffffffff);
  }
}


// Reference entry 110f6650; body size 52 bytes.
#line 1 "ENTRY_110f6650"

void __fastcall FUN_110f6650(int param_1)

{
  if (*(code **)(param_1 + 0x24) != (code *)((0x0))) {
                    
                    
    (**(code **)(param_1 + 0x24))();
    return;
  }
  if (*(HANDLE *)(param_1 + 0x1c) != (HANDLE)0xffffffff) {
    SetEvent(*(HANDLE *)(param_1 + 0x1c));
  }
  if (*(HWND *)(param_1 + 0x20) != 0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x20),0x464,0,param_1);
  }
  return;
}


// Reference entry 110f66a0; body size 45 bytes.
#line 1 "ENTRY_110f66a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f66a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0x80);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(param_1 + 3);
  thunk_FUN_110f8530(param_2,0);
  return (undefined4 *)(param_1);
}


// Reference entry 110f68d0; body size 18 bytes.
#line 1 "ENTRY_110f68d0"

void __fastcall FUN_110f68d0(int param_1)

{
  if (*(void **)(param_1 + 8) != (char *)(((param_1 + 0xc)))) {
    free(*(void **)(param_1 + 8));
  }
  return;
}


// Reference entry 110f68f0; body size 29 bytes.
#line 1 "ENTRY_110f68f0"

void __fastcall FUN_110f68f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAesDecoder);
  thunk_FUN_113d3650(param_1 + 0xe);
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedDataDecoder);
  return;
}


// Reference entry 110f6940; body size 33 bytes.
#line 1 "ENTRY_110f6940"

void __fastcall FUN_110f6940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerLastChangeCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  thunk_FUN_111f77e0();
  return;
}


// Reference entry 110f6970; body size 33 bytes.
#line 1 "ENTRY_110f6970"

void __fastcall FUN_110f6970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerMediaServerCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  thunk_FUN_111f7800();
  return;
}


// Reference entry 110f69a0; body size 33 bytes.
#line 1 "ENTRY_110f69a0"

void __fastcall FUN_110f69a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerNotifyBodyParserCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  thunk_FUN_111f7860();
  return;
}


// Reference entry 110f69d0; body size 21 bytes.
#line 1 "ENTRY_110f69d0"

void __fastcall FUN_110f69d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerZoneGroupStateCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  return;
}


// Reference entry 110f6ac0; body size 54 bytes.
#line 1 "ENTRY_110f6ac0"

int __thiscall Recovered_Bulk::m_FUN_110f6ac0(int param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    thunk_FUN_110f8530(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
  }
  iVar2 = (int)(0x7c);
  puVar1 = (undefined1 *)((undefined1 *)(param_1 + 0x10));
  do {
    *puVar1 = (undefined1)(puVar1[param_2 - param_1]);
    iVar2 = (int)(iVar2 + -1);
    puVar1 = (undefined1 *)(puVar1 + 1);
  } while (iVar2 != 0);
  return (int)(param_1);
}


// Reference entry 110f6b60; body size 54 bytes.
#line 1 "ENTRY_110f6b60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f6b60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAesDecoder);
  thunk_FUN_113d3650(param_1 + 0xe);
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedDataDecoder);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f6bb0; body size 33 bytes.
#line 1 "ENTRY_110f6bb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f6bb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedDataDecoder);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f6be0; body size 33 bytes.
#line 1 "ENTRY_110f6be0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f6be0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedStringDecoder);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f6c10; body size 56 bytes.
#line 1 "ENTRY_110f6c10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f6c10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerLastChangeCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  thunk_FUN_111f77e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f6c60; body size 56 bytes.
#line 1 "ENTRY_110f6c60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f6c60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerMediaServerCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  thunk_FUN_111f7800();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f6cb0; body size 56 bytes.
#line 1 "ENTRY_110f6cb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f6cb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerNotifyBodyParserCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  thunk_FUN_111f7860();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f6d00; body size 49 bytes.
#line 1 "ENTRY_110f6d00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_110f6d00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFlashPlayerZoneGroupStateCallback);
  if (param_1[1] != 0) {
    thunk_FUN_111a7630(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 110f6d40; body size 32 bytes.
#line 1 "ENTRY_110f6d40"

undefined4 __thiscall Recovered_Bulk::m_FUN_110f6d40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_110f69f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4)(param_1);
}


// Reference entry 110f6d70; body size 27 bytes.
#line 1 "ENTRY_110f6d70"

undefined4 __thiscall Recovered_Bulk::m_FUN_110f6d70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4)(param_1);
}

